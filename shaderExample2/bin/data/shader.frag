
uniform float time;
uniform vec2 mouse;
uniform sampler2DRect img;


void main()
{
    
    
    vec2 pos = gl_FragCoord.xy;
    pos.y = 480. - pos.y;
    
    
    vec2 pixelPos = pos;
    
    pixelPos.x += 40.0 *  sin(pos.y/100.0 + time);
   // pixelPos.x = mod( pixelPos.x, 640.0);
    //pixelPos.x *= (sin(pos.y*0.1)*0.1 + 1.);
    //pixelPos.x += 70. * sin(time + sin(pixelPos.x*0.1));
    vec3 color = texture2DRect(img, pixelPos).rgb;
//
    float r = color.r;
//
   // pixelPos.x += r*100.0;
   // vec3 color2 = texture2DRect(img, pixelPos).rgb;
    
    
    gl_FragColor = vec4(color, 1.0);
    
    
//    float dist = distance(pos, mouse);
//
//    gl_FragColor = vec4(vec3(sin(-time*10.0 + dist*0.1)*0.5+0.5), 1.0);

}
