#ifndef __DESnessieset3__
#define __DESnessieset3__

#include "../plainkeycipher.h"

// Test vectors from <https://www.cosic.esat.kuleuven.be/nessie/testvectors/bc/des/Des-64-64.test-vectors>

static const std::vector <PlainKeyCipher> DES_NESSIE_SET_3 = {
    std::make_tuple("0000000000000000", "0000000000000000", "8CA64DE9C1B123A7"),
    std::make_tuple("0101010101010101", "0101010101010101", "994D4DC157B96C52"),
    std::make_tuple("0202020202020202", "0202020202020202", "E127C2B61D98E6E2"),
    std::make_tuple("0303030303030303", "0303030303030303", "984C91D78A269CE3"),
    std::make_tuple("0404040404040404", "0404040404040404", "1F4570BB77550683"),
    std::make_tuple("0505050505050505", "0505050505050505", "3990ABF98D672B16"),
    std::make_tuple("0606060606060606", "0606060606060606", "3F5150BBA081D585"),
    std::make_tuple("0707070707070707", "0707070707070707", "C65242248C9CF6F2"),
    std::make_tuple("0808080808080808", "0808080808080808", "10772D40FAD24257"),
    std::make_tuple("0909090909090909", "0909090909090909", "F0139440647A6E7B"),
    std::make_tuple("0A0A0A0A0A0A0A0A", "0A0A0A0A0A0A0A0A", "0A288603044D740C"),
    std::make_tuple("0B0B0B0B0B0B0B0B", "0B0B0B0B0B0B0B0B", "6359916942F7438F"),
    std::make_tuple("0C0C0C0C0C0C0C0C", "0C0C0C0C0C0C0C0C", "934316AE443CF08B"),
    std::make_tuple("0D0D0D0D0D0D0D0D", "0D0D0D0D0D0D0D0D", "E3F56D7F1130A2B7"),
    std::make_tuple("0E0E0E0E0E0E0E0E", "0E0E0E0E0E0E0E0E", "A2E4705087C6B6B4"),
    std::make_tuple("0F0F0F0F0F0F0F0F", "0F0F0F0F0F0F0F0F", "D5D76E09A447E8C3"),
    std::make_tuple("1010101010101010", "1010101010101010", "DD7515F2BFC17F85"),
    std::make_tuple("1111111111111111", "1111111111111111", "F40379AB9E0EC533"),
    std::make_tuple("1212121212121212", "1212121212121212", "96CD27784D1563E5"),
    std::make_tuple("1313131313131313", "1313131313131313", "2911CF5E94D33FE1"),
    std::make_tuple("1414141414141414", "1414141414141414", "377B7F7CA3E5BBB3"),
    std::make_tuple("1515151515151515", "1515151515151515", "701AA63832905A92"),
    std::make_tuple("1616161616161616", "1616161616161616", "2006E716C4252D6D"),
    std::make_tuple("1717171717171717", "1717171717171717", "452C1197422469F8"),
    std::make_tuple("1818181818181818", "1818181818181818", "C33FD1EB49CB64DA"),
    std::make_tuple("1919191919191919", "1919191919191919", "7572278F364EB50D"),
    std::make_tuple("1A1A1A1A1A1A1A1A", "1A1A1A1A1A1A1A1A", "69E51488403EF4C3"),
    std::make_tuple("1B1B1B1B1B1B1B1B", "1B1B1B1B1B1B1B1B", "FF847E0ADF192825"),
    std::make_tuple("1C1C1C1C1C1C1C1C", "1C1C1C1C1C1C1C1C", "521B7FB3B41BB791"),
    std::make_tuple("1D1D1D1D1D1D1D1D", "1D1D1D1D1D1D1D1D", "26059A6A0F3F6B35"),
    std::make_tuple("1E1E1E1E1E1E1E1E", "1E1E1E1E1E1E1E1E", "F24A8D2231C77538"),
    std::make_tuple("1F1F1F1F1F1F1F1F", "1F1F1F1F1F1F1F1F", "4FD96EC0D3304EF6"),
    std::make_tuple("2020202020202020", "2020202020202020", "18A9D580A900B699"),
    std::make_tuple("2121212121212121", "2121212121212121", "88586E1D755B9B5A"),
    std::make_tuple("2222222222222222", "2222222222222222", "0F8ADFFB11DC2784"),
    std::make_tuple("2323232323232323", "2323232323232323", "2F30446C8312404A"),
    std::make_tuple("2424242424242424", "2424242424242424", "0BA03D9E6C196511"),
    std::make_tuple("2525252525252525", "2525252525252525", "3E55E997611E4B7D"),
    std::make_tuple("2626262626262626", "2626262626262626", "B2522FB5F158F0DF"),
    std::make_tuple("2727272727272727", "2727272727272727", "2109425935406AB8"),
    std::make_tuple("2828282828282828", "2828282828282828", "11A16028F310FF16"),
    std::make_tuple("2929292929292929", "2929292929292929", "73F0C45F379FE67F"),
    std::make_tuple("2A2A2A2A2A2A2A2A", "2A2A2A2A2A2A2A2A", "DCAD4338F7523816"),
    std::make_tuple("2B2B2B2B2B2B2B2B", "2B2B2B2B2B2B2B2B", "B81634C1CEAB298C"),
    std::make_tuple("2C2C2C2C2C2C2C2C", "2C2C2C2C2C2C2C2C", "DD2CCB29B6C4C349"),
    std::make_tuple("2D2D2D2D2D2D2D2D", "2D2D2D2D2D2D2D2D", "7D07A77A2ABD50A7"),
    std::make_tuple("2E2E2E2E2E2E2E2E", "2E2E2E2E2E2E2E2E", "30C1B0C1FD91D371"),
    std::make_tuple("2F2F2F2F2F2F2F2F", "2F2F2F2F2F2F2F2F", "C4427B31AC61973B"),
    std::make_tuple("3030303030303030", "3030303030303030", "F47BB46273B15EB5"),
    std::make_tuple("3131313131313131", "3131313131313131", "655EA628CF62585F"),
    std::make_tuple("3232323232323232", "3232323232323232", "AC978C247863388F"),
    std::make_tuple("3333333333333333", "3333333333333333", "0432ED386F2DE328"),
    std::make_tuple("3434343434343434", "3434343434343434", "D254014CB986B3C2"),
    std::make_tuple("3535353535353535", "3535353535353535", "B256E34BEDB49801"),
    std::make_tuple("3636363636363636", "3636363636363636", "37F8759EB77E7BFC"),
    std::make_tuple("3737373737373737", "3737373737373737", "5013CA4F62C9CEA0"),
    std::make_tuple("3838383838383838", "3838383838383838", "8940F7B3EACA5939"),
    std::make_tuple("3939393939393939", "3939393939393939", "E22B19A55086774B"),
    std::make_tuple("3A3A3A3A3A3A3A3A", "3A3A3A3A3A3A3A3A", "B04A2AAC925ABB0B"),
    std::make_tuple("3B3B3B3B3B3B3B3B", "3B3B3B3B3B3B3B3B", "8D250D58361597FC"),
    std::make_tuple("3C3C3C3C3C3C3C3C", "3C3C3C3C3C3C3C3C", "51F0114FB6A6CD37"),
    std::make_tuple("3D3D3D3D3D3D3D3D", "3D3D3D3D3D3D3D3D", "9D0BB4DB830ECB73"),
    std::make_tuple("3E3E3E3E3E3E3E3E", "3E3E3E3E3E3E3E3E", "E96089D6368F3E1A"),
    std::make_tuple("3F3F3F3F3F3F3F3F", "3F3F3F3F3F3F3F3F", "5C4CA877A4E1E92D"),
    std::make_tuple("4040404040404040", "4040404040404040", "6D55DDBC8DEA95FF"),
    std::make_tuple("4141414141414141", "4141414141414141", "19DF84AC95551003"),
    std::make_tuple("4242424242424242", "4242424242424242", "724E7332696D08A7"),
    std::make_tuple("4343434343434343", "4343434343434343", "B91810B8CDC58FE2"),
    std::make_tuple("4444444444444444", "4444444444444444", "06E23526EDCCD0C4"),
    std::make_tuple("4545454545454545", "4545454545454545", "EF52491D5468D441"),
    std::make_tuple("4646464646464646", "4646464646464646", "48019C59E39B90C5"),
    std::make_tuple("4747474747474747", "4747474747474747", "0544083FB902D8C0"),
    std::make_tuple("4848484848484848", "4848484848484848", "63B15CADA668CE12"),
    std::make_tuple("4949494949494949", "4949494949494949", "EACC0C1264171071"),
    std::make_tuple("4A4A4A4A4A4A4A4A", "4A4A4A4A4A4A4A4A", "9D2B8C0AC605F274"),
    std::make_tuple("4B4B4B4B4B4B4B4B", "4B4B4B4B4B4B4B4B", "C90F2F4C98A8FB2A"),
    std::make_tuple("4C4C4C4C4C4C4C4C", "4C4C4C4C4C4C4C4C", "03481B4828FD1D04"),
    std::make_tuple("4D4D4D4D4D4D4D4D", "4D4D4D4D4D4D4D4D", "C78FC45A1DCEA2E2"),
    std::make_tuple("4E4E4E4E4E4E4E4E", "4E4E4E4E4E4E4E4E", "DB96D88C3460D801"),
    std::make_tuple("4F4F4F4F4F4F4F4F", "4F4F4F4F4F4F4F4F", "6C69E720F5105518"),
    std::make_tuple("5050505050505050", "5050505050505050", "0D262E418BC893F3"),
    std::make_tuple("5151515151515151", "5151515151515151", "6AD84FD7848A0A5C"),
    std::make_tuple("5252525252525252", "5252525252525252", "C365CB35B34B6114"),
    std::make_tuple("5353535353535353", "5353535353535353", "1155392E877F42A9"),
    std::make_tuple("5454545454545454", "5454545454545454", "531BE5F9405DA715"),
    std::make_tuple("5555555555555555", "5555555555555555", "3BCDD41E6165A5E8"),
    std::make_tuple("5656565656565656", "5656565656565656", "2B1FF5610A19270C"),
    std::make_tuple("5757575757575757", "5757575757575757", "D90772CF3F047CFD"),
    std::make_tuple("5858585858585858", "5858585858585858", "1BEA27FFB72457B7"),
    std::make_tuple("5959595959595959", "5959595959595959", "85C3E0C429F34C27"),
    std::make_tuple("5A5A5A5A5A5A5A5A", "5A5A5A5A5A5A5A5A", "F9038021E37C7618"),
    std::make_tuple("5B5B5B5B5B5B5B5B", "5B5B5B5B5B5B5B5B", "35BC6FF838DBA32F"),
    std::make_tuple("5C5C5C5C5C5C5C5C", "5C5C5C5C5C5C5C5C", "4927ACC8CE45ECE7"),
    std::make_tuple("5D5D5D5D5D5D5D5D", "5D5D5D5D5D5D5D5D", "E812EE6E3572985C"),
    std::make_tuple("5E5E5E5E5E5E5E5E", "5E5E5E5E5E5E5E5E", "9BB93A89627BF65F"),
    std::make_tuple("5F5F5F5F5F5F5F5F", "5F5F5F5F5F5F5F5F", "EF12476884CB74CA"),
    std::make_tuple("6060606060606060", "6060606060606060", "1BF17E00C09E7CBF"),
    std::make_tuple("6161616161616161", "6161616161616161", "29932350C098DB5D"),
    std::make_tuple("6262626262626262", "6262626262626262", "B476E6499842AC54"),
    std::make_tuple("6363636363636363", "6363636363636363", "5C662C29C1E96056"),
    std::make_tuple("6464646464646464", "6464646464646464", "3AF1703D76442789"),
    std::make_tuple("6565656565656565", "6565656565656565", "86405D9B425A8C8C"),
    std::make_tuple("6666666666666666", "6666666666666666", "EBBF4810619C2C55"),
    std::make_tuple("6767676767676767", "6767676767676767", "F8D1CD7367B21B5D"),
    std::make_tuple("6868686868686868", "6868686868686868", "9EE703142BF8D7E2"),
    std::make_tuple("6969696969696969", "6969696969696969", "5FDFFFC3AAAB0CB3"),
    std::make_tuple("6A6A6A6A6A6A6A6A", "6A6A6A6A6A6A6A6A", "26C940AB13574231"),
    std::make_tuple("6B6B6B6B6B6B6B6B", "6B6B6B6B6B6B6B6B", "1E2DC77E36A84693"),
    std::make_tuple("6C6C6C6C6C6C6C6C", "6C6C6C6C6C6C6C6C", "0F4FF4D9BC7E2244"),
    std::make_tuple("6D6D6D6D6D6D6D6D", "6D6D6D6D6D6D6D6D", "A4C9A0D04D3280CD"),
    std::make_tuple("6E6E6E6E6E6E6E6E", "6E6E6E6E6E6E6E6E", "9FAF2C96FE84919D"),
    std::make_tuple("6F6F6F6F6F6F6F6F", "6F6F6F6F6F6F6F6F", "115DBC965E6096C8"),
    std::make_tuple("7070707070707070", "7070707070707070", "AF531E9520994017"),
    std::make_tuple("7171717171717171", "7171717171717171", "B971ADE70E5C89EE"),
    std::make_tuple("7272727272727272", "7272727272727272", "415D81C86AF9C376"),
    std::make_tuple("7373737373737373", "7373737373737373", "8DFB864FDB3C6811"),
    std::make_tuple("7474747474747474", "7474747474747474", "10B1C170E3398F91"),
    std::make_tuple("7575757575757575", "7575757575757575", "CFEF7A1C0218DB1E"),
    std::make_tuple("7676767676767676", "7676767676767676", "DBAC30A2A40B1B9C"),
    std::make_tuple("7777777777777777", "7777777777777777", "89D3BF37052162E9"),
    std::make_tuple("7878787878787878", "7878787878787878", "80D9230BDAEB67DC"),
    std::make_tuple("7979797979797979", "7979797979797979", "3440911019AD68D7"),
    std::make_tuple("7A7A7A7A7A7A7A7A", "7A7A7A7A7A7A7A7A", "9626FE57596E199E"),
    std::make_tuple("7B7B7B7B7B7B7B7B", "7B7B7B7B7B7B7B7B", "DEA0B796624BB5BA"),
    std::make_tuple("7C7C7C7C7C7C7C7C", "7C7C7C7C7C7C7C7C", "E9E40542BDDB3E9D"),
    std::make_tuple("7D7D7D7D7D7D7D7D", "7D7D7D7D7D7D7D7D", "8AD99914B354B911"),
    std::make_tuple("7E7E7E7E7E7E7E7E", "7E7E7E7E7E7E7E7E", "6F85B98DD12CB13B"),
    std::make_tuple("7F7F7F7F7F7F7F7F", "7F7F7F7F7F7F7F7F", "10130DA3C3A23924"),
    std::make_tuple("8080808080808080", "8080808080808080", "EFECF25C3C5DC6DB"),
    std::make_tuple("8181818181818181", "8181818181818181", "907A46722ED34EC4"),
    std::make_tuple("8282828282828282", "8282828282828282", "752666EB4CAB46EE"),
    std::make_tuple("8383838383838383", "8383838383838383", "161BFABD4224C162"),
    std::make_tuple("8484848484848484", "8484848484848484", "215F48699DB44A45"),
    std::make_tuple("8585858585858585", "8585858585858585", "69D901A8A691E661"),
    std::make_tuple("8686868686868686", "8686868686868686", "CBBF6EEFE6529728"),
    std::make_tuple("8787878787878787", "8787878787878787", "7F26DCF425149823"),
    std::make_tuple("8888888888888888", "8888888888888888", "762C40C8FADE9D16"),
    std::make_tuple("8989898989898989", "8989898989898989", "2453CF5D5BF4E463"),
    std::make_tuple("8A8A8A8A8A8A8A8A", "8A8A8A8A8A8A8A8A", "301085E3FDE724E1"),
    std::make_tuple("8B8B8B8B8B8B8B8B", "8B8B8B8B8B8B8B8B", "EF4E3E8F1CC6706E"),
    std::make_tuple("8C8C8C8C8C8C8C8C", "8C8C8C8C8C8C8C8C", "720479B024C397EE"),
    std::make_tuple("8D8D8D8D8D8D8D8D", "8D8D8D8D8D8D8D8D", "BEA27E3795063C89"),
    std::make_tuple("8E8E8E8E8E8E8E8E", "8E8E8E8E8E8E8E8E", "468E5218F1A37611"),
    std::make_tuple("8F8F8F8F8F8F8F8F", "8F8F8F8F8F8F8F8F", "50ACE16ADF66BFE8"),
    std::make_tuple("9090909090909090", "9090909090909090", "EEA24369A19F6937"),
    std::make_tuple("9191919191919191", "9191919191919191", "6050D369017B6E62"),
    std::make_tuple("9292929292929292", "9292929292929292", "5B365F2FB2CD7F32"),
    std::make_tuple("9393939393939393", "9393939393939393", "F0B00B264381DDBB"),
    std::make_tuple("9494949494949494", "9494949494949494", "E1D23881C957B96C"),
    std::make_tuple("9595959595959595", "9595959595959595", "D936BF54ECA8BDCE"),
    std::make_tuple("9696969696969696", "9696969696969696", "A020003C5554F34C"),
    std::make_tuple("9797979797979797", "9797979797979797", "6118FCEBD407281D"),
    std::make_tuple("9898989898989898", "9898989898989898", "072E328C984DE4A2"),
    std::make_tuple("9999999999999999", "9999999999999999", "1440B7EF9E63D3AA"),
    std::make_tuple("9A9A9A9A9A9A9A9A", "9A9A9A9A9A9A9A9A", "79BFA264BDA57373"),
    std::make_tuple("9B9B9B9B9B9B9B9B", "9B9B9B9B9B9B9B9B", "C50E8FC289BBD876"),
    std::make_tuple("9C9C9C9C9C9C9C9C", "9C9C9C9C9C9C9C9C", "A399D3D63E169FA9"),
    std::make_tuple("9D9D9D9D9D9D9D9D", "9D9D9D9D9D9D9D9D", "4B8919B667BD53AB"),
    std::make_tuple("9E9E9E9E9E9E9E9E", "9E9E9E9E9E9E9E9E", "D66CDCAF3F6724A2"),
    std::make_tuple("9F9F9F9F9F9F9F9F", "9F9F9F9F9F9F9F9F", "E40E81FF3F618340"),
    std::make_tuple("A0A0A0A0A0A0A0A0", "A0A0A0A0A0A0A0A0", "10EDB8977B348B35"),
    std::make_tuple("A1A1A1A1A1A1A1A1", "A1A1A1A1A1A1A1A1", "6446C5769D8409A0"),
    std::make_tuple("A2A2A2A2A2A2A2A2", "A2A2A2A2A2A2A2A2", "17ED1191CA8D67A3"),
    std::make_tuple("A3A3A3A3A3A3A3A3", "A3A3A3A3A3A3A3A3", "B6D8533731BA1318"),
    std::make_tuple("A4A4A4A4A4A4A4A4", "A4A4A4A4A4A4A4A4", "CA439007C7245CD0"),
    std::make_tuple("A5A5A5A5A5A5A5A5", "A5A5A5A5A5A5A5A5", "06FC7FDE1C8389E7"),
    std::make_tuple("A6A6A6A6A6A6A6A6", "A6A6A6A6A6A6A6A6", "7A3C1F3BD60CB3D8"),
    std::make_tuple("A7A7A7A7A7A7A7A7", "A7A7A7A7A7A7A7A7", "E415D80048DBA848"),
    std::make_tuple("A8A8A8A8A8A8A8A8", "A8A8A8A8A8A8A8A8", "26F88D30C0FB8302"),
    std::make_tuple("A9A9A9A9A9A9A9A9", "A9A9A9A9A9A9A9A9", "D4E00A9EF5E6D8F3"),
    std::make_tuple("AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "C4322BE19E9A5A17"),
    std::make_tuple("ABABABABABABABAB", "ABABABABABABABAB", "ACE41A06BFA258EA"),
    std::make_tuple("ACACACACACACACAC", "ACACACACACACACAC", "EEAAC6D17880BD56"),
    std::make_tuple("ADADADADADADADAD", "ADADADADADADADAD", "3C9A34CA4CB49EEB"),
    std::make_tuple("AEAEAEAEAEAEAEAE", "AEAEAEAEAEAEAEAE", "9527B0287B75F5A3"),
    std::make_tuple("AFAFAFAFAFAFAFAF", "AFAFAFAFAFAFAFAF", "F2D9D1BE74376C0C"),
    std::make_tuple("B0B0B0B0B0B0B0B0", "B0B0B0B0B0B0B0B0", "939618DF0AEFAAE7"),
    std::make_tuple("B1B1B1B1B1B1B1B1", "B1B1B1B1B1B1B1B1", "24692773CB9F27FE"),
    std::make_tuple("B2B2B2B2B2B2B2B2", "B2B2B2B2B2B2B2B2", "38703BA5E2315D1D"),
    std::make_tuple("B3B3B3B3B3B3B3B3", "B3B3B3B3B3B3B3B3", "FCB7E4B7D702E2FB"),
    std::make_tuple("B4B4B4B4B4B4B4B4", "B4B4B4B4B4B4B4B4", "36F0D0B3675704D5"),
    std::make_tuple("B5B5B5B5B5B5B5B5", "B5B5B5B5B5B5B5B5", "62D473F539FA0D8B"),
    std::make_tuple("B6B6B6B6B6B6B6B6", "B6B6B6B6B6B6B6B6", "1533F3ED9BE8EF8E"),
    std::make_tuple("B7B7B7B7B7B7B7B7", "B7B7B7B7B7B7B7B7", "9C4EA352599731ED"),
    std::make_tuple("B8B8B8B8B8B8B8B8", "B8B8B8B8B8B8B8B8", "FABBF7C046FD273F"),
    std::make_tuple("B9B9B9B9B9B9B9B9", "B9B9B9B9B9B9B9B9", "B7FE63A61C646F3A"),
    std::make_tuple("BABABABABABABABA", "BABABABABABABABA", "10ADB6E2AB972BBE"),
    std::make_tuple("BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "F91DCAD912332F3B"),
    std::make_tuple("BCBCBCBCBCBCBCBC", "BCBCBCBCBCBCBCBC", "46E7EF47323A701D"),
    std::make_tuple("BDBDBDBDBDBDBDBD", "BDBDBDBDBDBDBDBD", "8DB18CCD9692F758"),
    std::make_tuple("BEBEBEBEBEBEBEBE", "BEBEBEBEBEBEBEBE", "E6207B536AAAEFFC"),
    std::make_tuple("BFBFBFBFBFBFBFBF", "BFBFBFBFBFBFBFBF", "92AA224372156A00"),
    std::make_tuple("C0C0C0C0C0C0C0C0", "C0C0C0C0C0C0C0C0", "A3B357885B1E16D2"),
    std::make_tuple("C1C1C1C1C1C1C1C1", "C1C1C1C1C1C1C1C1", "169F7629C970C1E5"),
    std::make_tuple("C2C2C2C2C2C2C2C2", "C2C2C2C2C2C2C2C2", "62F44B247CF1348C"),
    std::make_tuple("C3C3C3C3C3C3C3C3", "C3C3C3C3C3C3C3C3", "AE0FEEB0495932C8"),
    std::make_tuple("C4C4C4C4C4C4C4C4", "C4C4C4C4C4C4C4C4", "72DAF2A7C9EA6803"),
    std::make_tuple("C5C5C5C5C5C5C5C5", "C5C5C5C5C5C5C5C5", "4FB5D5536DA544F4"),
    std::make_tuple("C6C6C6C6C6C6C6C6", "C6C6C6C6C6C6C6C6", "1DD4E65AAF7988B4"),
    std::make_tuple("C7C7C7C7C7C7C7C7", "C7C7C7C7C7C7C7C7", "76BF084C1535A6C6"),
    std::make_tuple("C8C8C8C8C8C8C8C8", "C8C8C8C8C8C8C8C8", "AFEC35B09D36315F"),
    std::make_tuple("C9C9C9C9C9C9C9C9", "C9C9C9C9C9C9C9C9", "C8078A6148818403"),
    std::make_tuple("CACACACACACACACA", "CACACACACACACACA", "4DA91CB4124B67FE"),
    std::make_tuple("CBCBCBCBCBCBCBCB", "CBCBCBCBCBCBCBCB", "2DABFEB346794C3D"),
    std::make_tuple("CCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCC", "FBCD12C790D21CD7"),
    std::make_tuple("CDCDCDCDCDCDCDCD", "CDCDCDCDCDCDCDCD", "536873DB879CC770"),
    std::make_tuple("CECECECECECECECE", "CECECECECECECECE", "9AA159D7309DA7A0"),
    std::make_tuple("CFCFCFCFCFCFCFCF", "CFCFCFCFCFCFCFCF", "0B844B9D8C4EA14A"),
    std::make_tuple("D0D0D0D0D0D0D0D0", "D0D0D0D0D0D0D0D0", "3BBD84CE539E68C4"),
    std::make_tuple("D1D1D1D1D1D1D1D1", "D1D1D1D1D1D1D1D1", "CF3E4F3E026E2C8E"),
    std::make_tuple("D2D2D2D2D2D2D2D2", "D2D2D2D2D2D2D2D2", "82F85885D542AF58"),
    std::make_tuple("D3D3D3D3D3D3D3D3", "D3D3D3D3D3D3D3D3", "22D334D6493B3CB6"),
    std::make_tuple("D4D4D4D4D4D4D4D4", "D4D4D4D4D4D4D4D4", "47E9CB3E3154D673"),
    std::make_tuple("D5D5D5D5D5D5D5D5", "D5D5D5D5D5D5D5D5", "2352BCC708ADC7E9"),
    std::make_tuple("D6D6D6D6D6D6D6D6", "D6D6D6D6D6D6D6D6", "8C0F3BA0C8601980"),
    std::make_tuple("D7D7D7D7D7D7D7D7", "D7D7D7D7D7D7D7D7", "EE5E9FD70CEF00E9"),
    std::make_tuple("D8D8D8D8D8D8D8D8", "D8D8D8D8D8D8D8D8", "DEF6BDA6CABF9547"),
    std::make_tuple("D9D9D9D9D9D9D9D9", "D9D9D9D9D9D9D9D9", "4DADD04A0EA70F20"),
    std::make_tuple("DADADADADADADADA", "DADADADADADADADA", "C1AA16689EE1B482"),
    std::make_tuple("DBDBDBDBDBDBDBDB", "DBDBDBDBDBDBDBDB", "F45FC26193E69AEE"),
    std::make_tuple("DCDCDCDCDCDCDCDC", "DCDCDCDCDCDCDCDC", "D0CFBB937CEDBFB5"),
    std::make_tuple("DDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDD", "F0752004EE23D87B"),
    std::make_tuple("DEDEDEDEDEDEDEDE", "DEDEDEDEDEDEDEDE", "77A791E28AA464A5"),
    std::make_tuple("DFDFDFDFDFDFDFDF", "DFDFDFDFDFDFDFDF", "E7562A7F56FF4966"),
    std::make_tuple("E0E0E0E0E0E0E0E0", "E0E0E0E0E0E0E0E0", "B026913F2CCFB109"),
    std::make_tuple("E1E1E1E1E1E1E1E1", "E1E1E1E1E1E1E1E1", "0DB572DDCE388AC7"),
    std::make_tuple("E2E2E2E2E2E2E2E2", "E2E2E2E2E2E2E2E2", "D9FA6595F0C094CA"),
    std::make_tuple("E3E3E3E3E3E3E3E3", "E3E3E3E3E3E3E3E3", "ADE4804C4BE4486E"),
    std::make_tuple("E4E4E4E4E4E4E4E4", "E4E4E4E4E4E4E4E4", "007B81F520E6D7DA"),
    std::make_tuple("E5E5E5E5E5E5E5E5", "E5E5E5E5E5E5E5E5", "961AEB77BFC10B3C"),
    std::make_tuple("E6E6E6E6E6E6E6E6", "E6E6E6E6E6E6E6E6", "8A8DD870C9B14AF2"),
    std::make_tuple("E7E7E7E7E7E7E7E7", "E7E7E7E7E7E7E7E7", "3CC02E14B6349B25"),
    std::make_tuple("E8E8E8E8E8E8E8E8", "E8E8E8E8E8E8E8E8", "BAD3EE68BDDB9607"),
    std::make_tuple("E9E9E9E9E9E9E9E9", "E9E9E9E9E9E9E9E9", "DFF918E93BDAD292"),
    std::make_tuple("EAEAEAEAEAEAEAEA", "EAEAEAEAEAEAEAEA", "8FE559C7CD6FA56D"),
    std::make_tuple("EBEBEBEBEBEBEBEB", "EBEBEBEBEBEBEBEB", "C88480835C1A444C"),
    std::make_tuple("ECECECECECECECEC", "ECECECECECECECEC", "D6EE30A16B2CC01E"),
    std::make_tuple("EDEDEDEDEDEDEDED", "EDEDEDEDEDEDEDED", "6932D887B2EA9C1A"),
    std::make_tuple("EEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEE", "0BFC865461F13ACC"),
    std::make_tuple("EFEFEFEFEFEFEFEF", "EFEFEFEFEFEFEFEF", "228AEA0D403E807A"),
    std::make_tuple("F0F0F0F0F0F0F0F0", "F0F0F0F0F0F0F0F0", "2A2891F65BB8173C"),
    std::make_tuple("F1F1F1F1F1F1F1F1", "F1F1F1F1F1F1F1F1", "5D1B8FAF7839494B"),
    std::make_tuple("F2F2F2F2F2F2F2F2", "F2F2F2F2F2F2F2F2", "1C0A9280EECF5D48"),
    std::make_tuple("F3F3F3F3F3F3F3F3", "F3F3F3F3F3F3F3F3", "6CBCE951BBC30F74"),
    std::make_tuple("F4F4F4F4F4F4F4F4", "F4F4F4F4F4F4F4F4", "9CA66E96BD08BC70"),
    std::make_tuple("F5F5F5F5F5F5F5F5", "F5F5F5F5F5F5F5F5", "F5D779FCFBB28BF3"),
    std::make_tuple("F6F6F6F6F6F6F6F6", "F6F6F6F6F6F6F6F6", "0FEC6BBF9B859184"),
    std::make_tuple("F7F7F7F7F7F7F7F7", "F7F7F7F7F7F7F7F7", "EF88D2BF052DBDA8"),
    std::make_tuple("F8F8F8F8F8F8F8F8", "F8F8F8F8F8F8F8F8", "39ADBDDB7363090D"),
    std::make_tuple("F9F9F9F9F9F9F9F9", "F9F9F9F9F9F9F9F9", "C0AEAF445F7E2A7A"),
    std::make_tuple("FAFAFAFAFAFAFAFA", "FAFAFAFAFAFAFAFA", "C66F54067298D4E9"),
    std::make_tuple("FBFBFBFBFBFBFBFB", "FBFBFBFBFBFBFBFB", "E0BA8F4488AAF97C"),
    std::make_tuple("FCFCFCFCFCFCFCFC", "FCFCFCFCFCFCFCFC", "67B36E2875D9631C"),
    std::make_tuple("FDFDFDFDFDFDFDFD", "FDFDFDFDFDFDFDFD", "1ED83D49E267191D"),
    std::make_tuple("FEFEFEFEFEFEFEFE", "FEFEFEFEFEFEFEFE", "66B2B23EA84693AD"),
    std::make_tuple("FFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFF", "7359B2163E4EDC58"),
};

#endif // __DESnessieset3__