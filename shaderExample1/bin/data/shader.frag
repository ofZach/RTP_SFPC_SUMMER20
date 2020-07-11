
uniform float time;
uniform vec2 mouse;


void main()
{
    
    vec2 pos = gl_FragCoord.xy;
    pos.y = 800. - pos.y;

    float dist = distance(pos, mouse);
//
    gl_FragColor = vec4(vec3(sin(dist*0.1 - time*3.0) * 0.5 + 0.5), 1.0);
    
    //vec4(vec3(sin(-time*10.0 + dist*0.1)*0.5+0.5), 1.0);

}
