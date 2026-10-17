//função CalcDesconto
float CalcDesconto(float VC)
{
    float Desc;
    if (VC > 800)
        Desc = 0.15 * VC;
    else
        Desc = 0;

    return (Desc);
}

//função CalcMedia
float CalcMedia(float P1, float P2)
{
    float Media;
    Media = (P1 + P2)/2;

    return(Media);
}
