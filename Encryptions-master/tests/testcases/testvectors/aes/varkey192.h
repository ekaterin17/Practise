#ifndef __AESECBVARKEY192__
#define __AESECBVARKEY192__

#include "../plainkeycipher.h"

// Test vectors from <http://csrc.nist.gov/groups/STM/cavp/documents/aes/KAT_AES.zip>

const std::vector <PlainKeyCipher> AES192_VARKEY = {
    std::make_tuple("00000000000000000000000000000000", "800000000000000000000000000000000000000000000000", "de885dc87f5a92594082d02cc1e1b42c"),
    std::make_tuple("00000000000000000000000000000000", "c00000000000000000000000000000000000000000000000", "132b074e80f2a597bf5febd8ea5da55e"),
    std::make_tuple("00000000000000000000000000000000", "e00000000000000000000000000000000000000000000000", "6eccedf8de592c22fb81347b79f2db1f"),
    std::make_tuple("00000000000000000000000000000000", "f00000000000000000000000000000000000000000000000", "180b09f267c45145db2f826c2582d35c"),
    std::make_tuple("00000000000000000000000000000000", "f80000000000000000000000000000000000000000000000", "edd807ef7652d7eb0e13c8b5e15b3bc0"),
    std::make_tuple("00000000000000000000000000000000", "fc0000000000000000000000000000000000000000000000", "9978bcf8dd8fd72241223ad24b31b8a4"),
    std::make_tuple("00000000000000000000000000000000", "fe0000000000000000000000000000000000000000000000", "5310f654343e8f27e12c83a48d24ff81"),
    std::make_tuple("00000000000000000000000000000000", "ff0000000000000000000000000000000000000000000000", "833f71258d53036b02952c76c744f5a1"),
    std::make_tuple("00000000000000000000000000000000", "ff8000000000000000000000000000000000000000000000", "eba83ff200cff9318a92f8691a06b09f"),
    std::make_tuple("00000000000000000000000000000000", "ffc000000000000000000000000000000000000000000000", "ff620ccbe9f3292abdf2176b09f04eba"),
    std::make_tuple("00000000000000000000000000000000", "ffe000000000000000000000000000000000000000000000", "7ababc4b3f516c9aafb35f4140b548f9"),
    std::make_tuple("00000000000000000000000000000000", "fff000000000000000000000000000000000000000000000", "aa187824d9c4582b0916493ecbde8c57"),
    std::make_tuple("00000000000000000000000000000000", "fff800000000000000000000000000000000000000000000", "1c0ad553177fd5ea1092c9d626a29dc4"),
    std::make_tuple("00000000000000000000000000000000", "fffc00000000000000000000000000000000000000000000", "a5dc46c37261194124ecaebd680408ec"),
    std::make_tuple("00000000000000000000000000000000", "fffe00000000000000000000000000000000000000000000", "e4f2f2ae23e9b10bacfa58601531ba54"),
    std::make_tuple("00000000000000000000000000000000", "ffff00000000000000000000000000000000000000000000", "b7d67cf1a1e91e8ff3a57a172c7bf412"),
    std::make_tuple("00000000000000000000000000000000", "ffff80000000000000000000000000000000000000000000", "26706be06967884e847d137128ce47b3"),
    std::make_tuple("00000000000000000000000000000000", "ffffc0000000000000000000000000000000000000000000", "b2f8b409b0585909aad3a7b5a219072a"),
    std::make_tuple("00000000000000000000000000000000", "ffffe0000000000000000000000000000000000000000000", "5e4b7bff0290c78344c54a23b722cd20"),
    std::make_tuple("00000000000000000000000000000000", "fffff0000000000000000000000000000000000000000000", "07093657552d4414227ce161e9ebf7dd"),
    std::make_tuple("00000000000000000000000000000000", "fffff8000000000000000000000000000000000000000000", "e1af1e7d8bc225ed4dffb771ecbb9e67"),
    std::make_tuple("00000000000000000000000000000000", "fffffc000000000000000000000000000000000000000000", "ef6555253635d8432156cfd9c11b145a"),
    std::make_tuple("00000000000000000000000000000000", "fffffe000000000000000000000000000000000000000000", "fb4035074a5d4260c90cbd6da6c3fceb"),
    std::make_tuple("00000000000000000000000000000000", "ffffff000000000000000000000000000000000000000000", "446ee416f9ad1c103eb0cc96751c88e1"),
    std::make_tuple("00000000000000000000000000000000", "ffffff800000000000000000000000000000000000000000", "198ae2a4637ac0a7890a8fd1485445c9"),
    std::make_tuple("00000000000000000000000000000000", "ffffffc00000000000000000000000000000000000000000", "562012ec8faded0825fb2fa70ab30cbd"),
    std::make_tuple("00000000000000000000000000000000", "ffffffe00000000000000000000000000000000000000000", "cc8a64b46b5d88bf7f247d4dbaf38f05"),
    std::make_tuple("00000000000000000000000000000000", "fffffff00000000000000000000000000000000000000000", "a168253762e2cc81b42d1e5001762699"),
    std::make_tuple("00000000000000000000000000000000", "fffffff80000000000000000000000000000000000000000", "1b41f83b38ce5032c6cd7af98cf62061"),
    std::make_tuple("00000000000000000000000000000000", "fffffffc0000000000000000000000000000000000000000", "61a89990cd1411750d5fb0dc988447d4"),
    std::make_tuple("00000000000000000000000000000000", "fffffffe0000000000000000000000000000000000000000", "b5accc8ed629edf8c68a539183b1ea82"),
    std::make_tuple("00000000000000000000000000000000", "ffffffff0000000000000000000000000000000000000000", "b16fa71f846b81a13f361c43a851f290"),
    std::make_tuple("00000000000000000000000000000000", "ffffffff8000000000000000000000000000000000000000", "4fad6efdff5975aee7692234bcd54488"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffc000000000000000000000000000000000000000", "ebfdb05a783d03082dfe5fdd80a00b17"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffe000000000000000000000000000000000000000", "eb81b584766997af6ba5529d3bdd8609"),
    std::make_tuple("00000000000000000000000000000000", "fffffffff000000000000000000000000000000000000000", "0cf4ff4f49c8a0ca060c443499e29313"),
    std::make_tuple("00000000000000000000000000000000", "fffffffff800000000000000000000000000000000000000", "cc4ba8a8e029f8b26d8afff9df133bb6"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffc00000000000000000000000000000000000000", "fefebf64360f38e4e63558f0ffc550c3"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffe00000000000000000000000000000000000000", "12ad98cbf725137d6a8108c2bed99322"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffff00000000000000000000000000000000000000", "6afaa996226198b3e2610413ce1b3f78"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffff80000000000000000000000000000000000000", "2a8ce6747a7e39367828e290848502d9"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffc0000000000000000000000000000000000000", "223736e8b8f89ca1e37b6deab40facf1"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffe0000000000000000000000000000000000000", "c0f797e50418b95fa6013333917a9480"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffff0000000000000000000000000000000000000", "a758de37c2ece2a02c73c01fedc9a132"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffff8000000000000000000000000000000000000", "3a9b87ae77bae706803966c66c73adbd"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffc000000000000000000000000000000000000", "d365ab8df8ffd782e358121a4a4fc541"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffe000000000000000000000000000000000000", "c8dcd9e6f75e6c36c8daee0466f0ed74"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffff000000000000000000000000000000000000", "c79a637beb1c0304f14014c037e736dd"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffff800000000000000000000000000000000000", "105f0a25e84ac930d996281a5f954dd9"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffc00000000000000000000000000000000000", "42e4074b2927973e8d17ffa92f7fe615"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffe00000000000000000000000000000000000", "4fe2a9d2c1824449c69e3e0398f12963"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffff00000000000000000000000000000000000", "b7f29c1e1f62847a15253b28a1e9d712"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffff80000000000000000000000000000000000", "36ed5d29b903f31e8983ef8b0a2bf990"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffc0000000000000000000000000000000000", "27b8070270810f9d023f9dd7ff3b4aa2"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffe0000000000000000000000000000000000", "94d46e155c1228f61d1a0db4815ecc4b"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffff0000000000000000000000000000000000", "ca6108d1d98071428eeceef1714b96dd"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffff8000000000000000000000000000000000", "dc5b25b71b6296cf73dd2cdcac2f70b1"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffc000000000000000000000000000000000", "44aba95e8a06a2d9d3530d2677878c80"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffe000000000000000000000000000000000", "a570d20e89b467e8f5176061b81dd396"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffff000000000000000000000000000000000", "758f4467a5d8f1e7307dc30b34e404f4"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffff800000000000000000000000000000000", "bcea28e9071b5a2302970ff352451bc5"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffc00000000000000000000000000000000", "7523c00bc177d331ad312e09c9015c1c"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffe00000000000000000000000000000000", "ccac61e3183747b3f5836da21a1bc4f4"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffff00000000000000000000000000000000", "707b075791878880b44189d3522b8c30"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffff80000000000000000000000000000000", "7132d0c0e4a07593cf12ebb12be7688c"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffc0000000000000000000000000000000", "effbac1644deb0c784275fe56e19ead3"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffe0000000000000000000000000000000", "a005063f30f4228b374e2459738f26bb"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffff0000000000000000000000000000000", "29975b5f48bb68fcbbc7cea93b452ed7"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffff8000000000000000000000000000000", "cf3f2576e2afedc74bb1ca7eeec1c0e7"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffc000000000000000000000000000000", "07c403f5f966e0e3d9f296d6226dca28"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffe000000000000000000000000000000", "c8c20908249ab4a34d6dd0a31327ff1a"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffff000000000000000000000000000000", "c0541329ecb6159ab23b7fc5e6a21bca"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffff800000000000000000000000000000", "7aa1acf1a2ed9ba72bc6deb31d88b863"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffc00000000000000000000000000000", "808bd8eddabb6f3bf0d5a8a27be1fe8a"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffe00000000000000000000000000000", "273c7d7685e14ec66bbb96b8f05b6ddd"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffff00000000000000000000000000000", "32752eefc8c2a93f91b6e73eb07cca6e"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffff80000000000000000000000000000", "d893e7d62f6ce502c64f75e281f9c000"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffc0000000000000000000000000000", "8dfd999be5d0cfa35732c0ddc88ff5a5"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffe0000000000000000000000000000", "02647c76a300c3173b841487eb2bae9f"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffff0000000000000000000000000000", "172df8b02f04b53adab028b4e01acd87"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffff8000000000000000000000000000", "054b3bf4998aeb05afd87ec536533a36"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffc000000000000000000000000000", "3783f7bf44c97f065258a666cae03020"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffe000000000000000000000000000", "aad4c8a63f80954104de7b92cede1be1"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffff000000000000000000000000000", "cbfe61810fd5467ccdacb75800f3ac07"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffff800000000000000000000000000", "830d8a2590f7d8e1b55a737f4af45f34"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffc00000000000000000000000000", "fffcd4683f858058e74314671d43fa2c"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffe00000000000000000000000000", "523d0babbb82f46ebc9e70b1cd41ddd0"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffff00000000000000000000000000", "344aab37080d7486f7d542a309e53eed"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffff80000000000000000000000000", "56c5609d0906b23ab9caca816f5dbebd"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffc0000000000000000000000000", "7026026eedd91adc6d831cdf9894bdc6"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffe0000000000000000000000000", "88330baa4f2b618fc9d9b021bf503d5a"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffff0000000000000000000000000", "fc9e0ea22480b0bac935c8a8ebefcdcf"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffff8000000000000000000000000", "29ca779f398fb04f867da7e8a44756cb"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffc000000000000000000000000", "51f89c42985786bfc43c6df8ada36832"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffe000000000000000000000000", "6ac1de5fb8f21d874e91c53b560c50e3"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffff000000000000000000000000", "03aa9058490eda306001a8a9f48d0ca7"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffff800000000000000000000000", "e34ec71d6128d4871865d617c30b37e3"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffc00000000000000000000000", "14be1c535b17cabd0c4d93529d69bf47"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffe00000000000000000000000", "c9ef67756507beec9dd3862883478044"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffff00000000000000000000000", "40e231fa5a5948ce2134e92fc0664d4b"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffff80000000000000000000000", "03194b8e5dda5530d0c678c0b48f5d92"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffc0000000000000000000000", "90bd086f237cc4fd99f4d76bde6b4826"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffe0000000000000000000000", "19259761ca17130d6ed86d57cd7951ee"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffff0000000000000000000000", "d7cbb3f34b9b450f24b0e8518e54da6d"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffff8000000000000000000000", "725b9caebe9f7f417f4068d0d2ee20b3"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffc000000000000000000000", "9d924b934a90ce1fd39b8a9794f82672"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffe000000000000000000000", "c50562bf094526a91c5bc63c0c224995"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffff000000000000000000000", "d2f11805046743bd74f57188d9188df7"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffff800000000000000000000", "8dd274bd0f1b58ae345d9e7233f9b8f3"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffc00000000000000000000", "9d6bdc8f4ce5feb0f3bed2e4b9a9bb0b"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffe00000000000000000000", "fd5548bcf3f42565f7efa94562528d46"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffff00000000000000000000", "d2ccaebd3a4c3e80b063748131ba4a71"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffff80000000000000000000", "e03cb23d9e11c9d93f117e9c0a91b576"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffc0000000000000000000", "78f933a2081ac1db84f69d10f4523fe0"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffe0000000000000000000", "4061f7412ed320de0edc8851c2e2436f"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffff0000000000000000000", "9064ba1cd04ce6bab98474330814b4d4"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffff8000000000000000000", "48391bffb9cfff80ac238c886ef0a461"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffc000000000000000000", "b8d2a67df5a999fdbf93edd0343296c9"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffe000000000000000000", "aaca7367396b69a221bd632bea386eec"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffff000000000000000000", "a80fd5020dfe65f5f16293ec92c6fd89"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffff800000000000000000", "2162995b8217a67f1abc342e146406f8"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffc00000000000000000", "c6a6164b7a60bae4e986ffac28dfadd9"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffe00000000000000000", "64e0d7f900e3d9c83e4b8f96717b2146"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffff00000000000000000", "1ad2561de8c1232f5d8dbab4739b6cbb"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffff80000000000000000", "279689e9a557f58b1c3bf40c97a90964"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffc0000000000000000", "c4637e4a5e6377f9cc5a8638045de029"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffe0000000000000000", "492e607e5aea4688594b45f3aee3df90"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffff0000000000000000", "e8c4e4381feec74054954c05b777a00a"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffff8000000000000000", "91549514605f38246c9b724ad839f01d"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffc000000000000000", "74b24e3b6fefe40a4f9ef7ac6e44d76a"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffe000000000000000", "2437a683dc5d4b52abb4a123a8df86c6"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffff000000000000000", "bb2852c891c5947d2ed44032c421b85f"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffff800000000000000", "1b9f5fbd5e8a4264c0a85b80409afa5e"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffc00000000000000", "30dab809f85a917fe924733f424ac589"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffe00000000000000", "eaef5c1f8d605192646695ceadc65f32"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffff00000000000000", "b8aa90040b4c15a12316b78e0f9586fc"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffff80000000000000", "97fac8297ceaabc87d454350601e0673"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffc0000000000000", "9b47ef567ac28dfe488492f157e2b2e0"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffe0000000000000", "1b8426027ddb962b5c5ba7eb8bc9ab63"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffff0000000000000", "e917fc77e71992a12dbe4c18068bec82"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffff8000000000000", "dceebbc98840f8ae6daf76573b7e56f4"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffc000000000000", "4e11a9f74205125b61e0aee047eca20d"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffe000000000000", "f60467f55a1f17eab88e800120cbc284"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffff000000000000", "d436649f600b449ee276530f0cd83c11"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffff800000000000", "3bc0e3656a9e3ac7cd378a737f53b637"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffc00000000000", "6bacae63d33b928aa8380f8d54d88c17"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffe00000000000", "8935ffbc75ae6251bf8e859f085adcb9"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffff00000000000", "93dc4970fe35f67747cb0562c06d875a"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffff80000000000", "14f9df858975851797ba604fb0d16cc7"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffc0000000000", "02ea0c98dca10b38c21b3b14e8d1b71f"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffe0000000000", "8f091b1b5b0749b2adc803e63dda9b72"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffff0000000000", "05b389e3322c6da08384345a4137fd08"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffff8000000000", "381308c438f35b399f10ad71b05027d8"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffc000000000", "68c230fcfa9279c3409fc423e2acbe04"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffe000000000", "1c84a475acb011f3f59f4f46b76274c0"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffff000000000", "45119b68cb3f8399ee60066b5611a4d7"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffff800000000", "9423762f527a4060ffca312dcca22a16"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffc00000000", "f361a2745a33f056a5ac6ace2f08e344"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffe00000000", "5ef145766eca849f5d011536a6557fdb"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffff00000000", "c9af27b2c89c9b4cf4a0c4106ac80318"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffff80000000", "fb9c4f16c621f4eab7e9ac1d7551dd57"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffc0000000", "138e06fba466fa70854d8c2e524cffb2"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffe0000000", "fb4bc78b225070773f04c40466d4e90c"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffff0000000", "8b2cbff1ed0150feda8a4799be94551f"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffff8000000", "08b30d7b3f27962709a36bcadfb974bd"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffc000000", "fdf6d32e044d77adcf37fb97ac213326"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffe000000", "93cb284ecdcfd781a8afe32077949e88"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffff000000", "7b017bb02ec87b2b94c96e40a26fc71a"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffff800000", "c5c038b6990664ab08a3aaa5df9f3266"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffc00000", "4b7020be37fab6259b2a27f4ec551576"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffe00000", "60136703374f64e860b48ce31f930716"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffff00000", "8d63a269b14d506ccc401ab8a9f1b591"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffff80000", "d317f81dc6aa454aee4bd4a5a5cff4bd"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffc0000", "dddececd5354f04d530d76ed884246eb"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffe0000", "41c5205cc8fd8eda9a3cffd2518f365a"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffff0000", "cf42fb474293d96eca9db1b37b1ba676"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffff8000", "a231692607169b4ecdead5cd3b10db3e"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffc000", "ace4b91c9c669e77e7acacd19859ed49"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffe000", "75db7cfd4a7b2b62ab78a48f3ddaf4af"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffff000", "c1faba2d46e259cf480d7c38e4572a58"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffff800", "241c45bc6ae16dee6eb7bea128701582"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffffc00", "8fd03057cf1364420c2b78069a3e2502"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffffe00", "ddb505e6cc1384cbaec1df90b80beb20"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffff00", "5674a3bed27bf4bd3622f9f5fe208306"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffff80", "b687f26a89cfbfbb8e5eeac54055315e"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffffc0", "0547dd32d3b29ab6a4caeb606c5b6f78"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffffe0", "186861f8bc5386d31fb77f720c3226e6"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffffff0", "eacf1e6c4224efb38900b185ab1dfd42"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffffff8", "d241aab05a42d319de81d874f5c7b90d"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffffffc", "5eb9bc759e2ad8d2140a6c762ae9e1ab"),
    std::make_tuple("00000000000000000000000000000000", "fffffffffffffffffffffffffffffffffffffffffffffffe", "018596e15e78e2c064159defce5f3085"),
    std::make_tuple("00000000000000000000000000000000", "ffffffffffffffffffffffffffffffffffffffffffffffff", "dd8a493514231cbf56eccee4c40889fb"),
};

#endif // __AESECBVARKEY192__
