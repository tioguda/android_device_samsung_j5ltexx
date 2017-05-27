enum device_variant {
    J500FN,
    J500Y,
    J500F,
    J500G,
    J500M,
};

device_variant match(std::string bl)
{
    if (bl.find("J500FN") != std::string::npos) {
        return J500FN;
    } else if (bl.find("J500Y") != std::string::npos) {
        return J500Y;
    } else if (bl.find("J500F") != std::string::npos) {
        return J500F;
    } else if (bl.find("J500G") != std::string::npos) {
        return J500G;
    } else if (bl.find("J500M") != std::string::npos) {
        return J500M;
    }
}
