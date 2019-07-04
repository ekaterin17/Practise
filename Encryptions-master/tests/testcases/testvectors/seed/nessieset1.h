#ifndef __SEEDNESSIESET1__
#define __SEEDNESSIESET1__

#include "../plainkeycipher.h"

// Test vectors from <https://www.cosic.esat.kuleuven.be/nessie/testvectors/bc/seed/Seed-128-128.unverified.test-vectors>

static const std::vector <PlainKeyCipher> SEED_NESSIE_SET_1 = {
    std::make_tuple("00000000000000000000000000000000", "80000000000000000000000000000000", "4830626EF57F0946654E1CE4C2DDDC6F"),
    std::make_tuple("00000000000000000000000000000000", "40000000000000000000000000000000", "F7A3DF0B03FC1F8540909F390F3F78D7"),
    std::make_tuple("00000000000000000000000000000000", "20000000000000000000000000000000", "68D344DFA78E518049A152059CAABADD"),
    std::make_tuple("00000000000000000000000000000000", "10000000000000000000000000000000", "EC020F717DD62E1D7ED2E56BEF77EA97"),
    std::make_tuple("00000000000000000000000000000000", "08000000000000000000000000000000", "6574EE89500CA7A9E8740D7F54346623"),
    std::make_tuple("00000000000000000000000000000000", "04000000000000000000000000000000", "4AF6C00C7612630B42631CD9393A4401"),
    std::make_tuple("00000000000000000000000000000000", "02000000000000000000000000000000", "8D2E8B16CCE13C12D5EF11C7269940FE"),
    std::make_tuple("00000000000000000000000000000000", "01000000000000000000000000000000", "A7F0B8DD1AE5BBA3F1A810D1CBA57C1F"),
    std::make_tuple("00000000000000000000000000000000", "00800000000000000000000000000000", "10F4E3CCA370E17204224AA50DB4BED4"),
    std::make_tuple("00000000000000000000000000000000", "00400000000000000000000000000000", "D2546D539B7D6A758E257B7B5E4C39E4"),
    std::make_tuple("00000000000000000000000000000000", "00200000000000000000000000000000", "5ACAFF7888D9E13D8DE1E7080D0EA94B"),
    std::make_tuple("00000000000000000000000000000000", "00100000000000000000000000000000", "A7059C4F5F258788B701DF84F34427E0"),
    std::make_tuple("00000000000000000000000000000000", "00080000000000000000000000000000", "4AE60F2480ECCDCCE97F53DE2587D249"),
    std::make_tuple("00000000000000000000000000000000", "00040000000000000000000000000000", "A3F026D1D4A4F1AB8F9005FEFB64B310"),
    std::make_tuple("00000000000000000000000000000000", "00020000000000000000000000000000", "12E31C26FE55C1ADB5DC66872C09B0C0"),
    std::make_tuple("00000000000000000000000000000000", "00010000000000000000000000000000", "7A8F34F07E9CCDD83AD3B68E8482D795"),
    std::make_tuple("00000000000000000000000000000000", "00008000000000000000000000000000", "E2A986363F9D86D8F8AC9539C5D473A1"),
    std::make_tuple("00000000000000000000000000000000", "00004000000000000000000000000000", "BDFEEA102805CFCE06EF2D96C294ECCD"),
    std::make_tuple("00000000000000000000000000000000", "00002000000000000000000000000000", "F618834334DDA8A1DFBF9152205F75F1"),
    std::make_tuple("00000000000000000000000000000000", "00001000000000000000000000000000", "5C79A29D1FA65331810F5262BE2FB7C3"),
    std::make_tuple("00000000000000000000000000000000", "00000800000000000000000000000000", "5A4A32BE72FEBC671CDC6DCC4AC53519"),
    std::make_tuple("00000000000000000000000000000000", "00000400000000000000000000000000", "53DF7A29E04E6B9CA4A0883A22B5E312"),
    std::make_tuple("00000000000000000000000000000000", "00000200000000000000000000000000", "9B206671D36B56A11EF696F2E38D62DB"),
    std::make_tuple("00000000000000000000000000000000", "00000100000000000000000000000000", "71AE58A358114DE2F1FB7C63A6ACFE07"),
    std::make_tuple("00000000000000000000000000000000", "00000080000000000000000000000000", "0D734430F9F7F3BC6971656A7027EA8D"),
    std::make_tuple("00000000000000000000000000000000", "00000040000000000000000000000000", "03DF9599BA95C4C227824272788473A5"),
    std::make_tuple("00000000000000000000000000000000", "00000020000000000000000000000000", "FF4EE6C80004A595DAFF4CB62582880D"),
    std::make_tuple("00000000000000000000000000000000", "00000010000000000000000000000000", "35FAA4CF8C76164D6C54CDABC290206E"),
    std::make_tuple("00000000000000000000000000000000", "00000008000000000000000000000000", "AFA6AD65FA8C0AAE549CA1A21B855774"),
    std::make_tuple("00000000000000000000000000000000", "00000004000000000000000000000000", "E35168A4D4E13984EC7D7F36359B5EEB"),
    std::make_tuple("00000000000000000000000000000000", "00000002000000000000000000000000", "B91EEC522EC78D45BC0B977542ADC516"),
    std::make_tuple("00000000000000000000000000000000", "00000001000000000000000000000000", "032FDD84D536123B35FAAA8167450E50"),
    std::make_tuple("00000000000000000000000000000000", "00000000800000000000000000000000", "9DADFA7372053C8300B66984082CAA3A"),
    std::make_tuple("00000000000000000000000000000000", "00000000400000000000000000000000", "85B4D5DCBC056F19A8F49E1CCDC25305"),
    std::make_tuple("00000000000000000000000000000000", "00000000200000000000000000000000", "536EDB2DAFDC7194BC4226C97404A8EF"),
    std::make_tuple("00000000000000000000000000000000", "00000000100000000000000000000000", "B531CE8096FD3A6B39BFD6E7118B2532"),
    std::make_tuple("00000000000000000000000000000000", "00000000080000000000000000000000", "CCC8E9F66CE5A747274516BEA4A39CC5"),
    std::make_tuple("00000000000000000000000000000000", "00000000040000000000000000000000", "5D8CEC9E75D7E1F6C40094D611CA9140"),
    std::make_tuple("00000000000000000000000000000000", "00000000020000000000000000000000", "A7083B17F96BD948BCEA0420CCC3B8FA"),
    std::make_tuple("00000000000000000000000000000000", "00000000010000000000000000000000", "E593255F81A21C8236B10FA5FC128BAA"),
    std::make_tuple("00000000000000000000000000000000", "00000000008000000000000000000000", "9B705E1724C032D4866CF877FDEA054C"),
    std::make_tuple("00000000000000000000000000000000", "00000000004000000000000000000000", "0DB3D403612682F23A7401CF10897045"),
    std::make_tuple("00000000000000000000000000000000", "00000000002000000000000000000000", "BF91A4006E933B9AFC9BFFF24ADE0D3F"),
    std::make_tuple("00000000000000000000000000000000", "00000000001000000000000000000000", "B47CC5612CAD6EC2F1E9C126067017E4"),
    std::make_tuple("00000000000000000000000000000000", "00000000000800000000000000000000", "80B043AF10B3B74DBA5E7B1A4CC1945E"),
    std::make_tuple("00000000000000000000000000000000", "00000000000400000000000000000000", "A0B76DFA39A601BF69CBDC4FC72B3325"),
    std::make_tuple("00000000000000000000000000000000", "00000000000200000000000000000000", "EC1B91DDB83278A4AE49C35FB117FA02"),
    std::make_tuple("00000000000000000000000000000000", "00000000000100000000000000000000", "9B7BA1D3210B70850CC00A67D4EA876E"),
    std::make_tuple("00000000000000000000000000000000", "00000000000080000000000000000000", "76A5F25F368A61A7769A44F6FD2D1536"),
    std::make_tuple("00000000000000000000000000000000", "00000000000040000000000000000000", "FBBA4C0FA57ED58C8155323F9B0459E0"),
    std::make_tuple("00000000000000000000000000000000", "00000000000020000000000000000000", "C74CDBF51E87EE9CD6625E2D654A1133"),
    std::make_tuple("00000000000000000000000000000000", "00000000000010000000000000000000", "532EFBD56557A967AD06853ABEAF3669"),
    std::make_tuple("00000000000000000000000000000000", "00000000000008000000000000000000", "14CE5021FF48736DD00D3854023A8631"),
    std::make_tuple("00000000000000000000000000000000", "00000000000004000000000000000000", "22B850362563D6F7B1CA143726C539B7"),
    std::make_tuple("00000000000000000000000000000000", "00000000000002000000000000000000", "D9C947F6A394CB9B5FFB882BF1ED5064"),
    std::make_tuple("00000000000000000000000000000000", "00000000000001000000000000000000", "38E5580733F69029535F5A9CD54D44C9"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000800000000000000000", "9DC6B68797EBCA357E92C2B9D0FF3715"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000400000000000000000", "553D3ADDF0497E557A7CF25FCAB1C32C"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000200000000000000000", "A5B2FC3E9D3F8BE8E00FCFEC9935E4E5"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000100000000000000000", "1382D0751D27E613A5DEF9E8AF42F837"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000080000000000000000", "9AA4ECF9FC361FA505ED6050CB0BD965"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000040000000000000000", "1E545157560BF64C6CE03F08CF6146D2"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000020000000000000000", "CFC732F4503E41FE46DB343F6837981F"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000010000000000000000", "BE0448A96A5342CA08BF943F02C73BB1"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000008000000000000000", "852B13FC9557046E06ED95898EBB3232"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000004000000000000000", "B029810434EEEA26E87FEF1A180FBE76"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000002000000000000000", "3EAC33F127AC4A927CDE78EA9055ED20"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000001000000000000000", "CD8374C385C77340836A42909E08810C"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000800000000000000", "744D23400B30A0E16D39793FD324F79A"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000400000000000000", "91213EAC66B907607B1A8EAE8ECEB0A1"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000200000000000000", "E2F3CEE8149E427F86F9231CC1BF39AF"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000100000000000000", "CBA515BF3E659E8FC3F1D566FA3F2E0B"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000080000000000000", "67920945F155587A288D358AC2580C1A"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000040000000000000", "5C9098BF815EC33698EB40048607E90F"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000020000000000000", "5934F0B20F13344A0BC890891C1AD918"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000010000000000000", "3032C32FD9834CDBB0A86917CDCC2AF0"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000008000000000000", "04D4184008BD59ECA578E61C6A9F1DC6"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000004000000000000", "06959906B6552D4901D4C013BA41DDC5"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000002000000000000", "604C8855011282B72C6908249A289A35"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000001000000000000", "D070CC4C7A77CEE4DC302EF3C077E0E1"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000800000000000", "5B8120253C65AD286C0F28AC592BB208"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000400000000000", "5D74BE97E349EAE85C9B18FFC2675E95"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000200000000000", "A6362B4AD922F3338D593477A7A4CFF6"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000100000000000", "5A9861A13A10501C39FCD58E651110D2"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000080000000000", "5D13F4596FD9EE140032D7AB451A2BAC"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000040000000000", "7771F233BDEBABBF74D4A52EF37E389F"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000020000000000", "586E9CDD8EEBB21A8022F0E53B380C0C"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000010000000000", "3B21102841820989941FA4DD0C580B06"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000008000000000", "7AFD52B0A774F29A86449C85DF02640A"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000004000000000", "287DC955F34EE1722A8A48ECDE0FA3D9"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000002000000000", "F062BCD4E10155EC082A4B06C63E80DC"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000001000000000", "6AC72DD8C1629051B8AED589E1D81B5B"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000800000000", "B90C1332CEAF56068F4E5E5E3EA5F103"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000400000000", "E0203956A790E41AA945E43FAF3BCC87"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000200000000", "2FBDA35CA2955A883C6BE11BDEEC601D"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000100000000", "C2B5A0B9B8219A8112659B6073207E4F"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000080000000", "6F67B7F692E3515E0B4EC40E320A0206"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000040000000", "3CBFECF4205AA987BD524926E2555B14"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000020000000", "C10FF0E4EBFDBEE262E0D325F2967750"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000010000000", "9F191ECDB7D079FC5484F000E4A14487"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000008000000", "7E240F1567A63B492E547604828AE290"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000004000000", "4871B12EE22F70040F0B6DBC0DFBF2CB"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000002000000", "2F2BDC431EF7512716D536D21B46483D"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000001000000", "71B530C7C46ADD4A9FA82E3D5FA1E7CF"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000800000", "A51F5CCD82E506F7660FA2452726210E"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000400000", "2C36E2A94FF84BF42F5DBEC150FED716"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000200000", "3E2221C96ACB20E6E0CE8EC262F8F41F"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000100000", "480A23AB29C385B6427033684967F600"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000080000", "7EA13EAC930E9FD1DE81BB5E0E2812B3"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000040000", "3A665BDABEAEF85D35F769DAA3C1FC57"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000020000", "1A13576A88F32F527F63B24CF23E335E"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000010000", "8D6A64713510498051370DFB4D118169"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000008000", "0F1C8E9D88296F5E5AD5D30AB33AA91D"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000004000", "F3BA4AE84E7EBDF6A33B20BE859128F5"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000002000", "C94CFAA889DE467FA54D7D40BA0AD65B"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000001000", "1DDA69F4BD9BFDE87B3DD31A82201A81"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000800", "A7FFB57EBFD8273C9E75A16919FE4396"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000400", "15A771C11FA406A59226A5950AC3ABD1"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000200", "9F857F61353F5775749D9481E1A21DF3"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000100", "424CC5FDFC31965C7ABC5223231A4BD7"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000080", "946908F0BA87F9244FDD7585BA63D0C0"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000040", "3EF87BB9A6AF4F677CDE91D80C3BFB07"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000020", "ED8A09CD85C3F9F7FBFD64F4DF8FE6DA"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000010", "18E834D3C550638711051C27711C09CD"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000008", "1E1EDF9B214399FA826295A7B08BF8AD"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000004", "740723673B4B12B3848AA62B97AD9C99"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000002", "7A0F5DD0718866966F5D5735DEBED2A4"),
    std::make_tuple("00000000000000000000000000000000", "00000000000000000000000000000001", "8DC225F130BC838E7E51AF539DA52235"),
};

#endif // __SEEDNESSIESET1__