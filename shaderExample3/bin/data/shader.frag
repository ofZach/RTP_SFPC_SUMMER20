
uniform sampler2DRect rockImg;
uniform sampler2DRect lineImg;
uniform float time;



void main()
{
    
    vec2 pos = gl_FragCoord.xy;
    pos.y = 800. - pos.y;
    vec3 color = texture2DRect(rockImg, pos).rgb;
    
    float amt = sin(pos.x*0.01 + time) * 50. + 50.0;
    pos.x += (color.r*2. - 1.0) * amt;
    pos.y += (color.b*2. - 1.0) * amt;
    
    vec3 color2 = texture2DRect(lineImg, pos).rgb;
    
    
    gl_FragColor = vec4(color2, 1.0);

}
