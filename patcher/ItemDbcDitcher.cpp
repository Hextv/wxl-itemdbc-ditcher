#include "patcher/PatchScript.hpp"

namespace
{
    using namespace wxl::patcher;

    class ItemDbcDitcher final : public PatchScript
    {
    public:
        const char* name() const override { return "itemdbc-ditcher"; }

        bool Apply(PeImage& pe) const override
        {
            // file: 0x11646D → VA: 0x51706D
            {
                const uint8_t b[] = {
                    0x56, 0x89, 0xE1, 0xE8, 0xDB, 0x1D, 0x24, 0x00,
                    0x83, 0xC4, 0x04, 0x89, 0xC6, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90
                };
                if (!pe.WriteVa(0x51706D, b, sizeof b)) return false;
            }
            // file: 0x1164AC → VA: 0x5170AC
            {
                const uint8_t b[] = { 0x89, 0xF1, 0x90 };
                if (!pe.WriteVa(0x5170AC, b, sizeof b)) return false;
            }
            // file: 0x1223F7 → VA: 0x522FF7
            {
                const uint8_t b[] = {
                    0x56, 0x89, 0xE1, 0xE8, 0x51, 0x5E, 0x23, 0x00,
                    0x83, 0xC4, 0x04, 0x90, 0x90, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90
                };
                if (!pe.WriteVa(0x522FF7, b, sizeof b)) return false;
            }
            // file: 0x122419 → VA: 0x523019
            {
                const uint8_t b[] = { 0x89, 0xC7, 0x90 };
                if (!pe.WriteVa(0x523019, b, sizeof b)) return false;
            }
            // file: 0x1A54EF → VA: 0x5A60EF
            {
                const uint8_t b[] = {
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x8D, 0x4D,
                    0xF4
                };
                if (!pe.WriteVa(0x5A60EF, b, sizeof b)) return false;
            }
            // file: 0x1A54F9 → VA: 0x5A60F9
            {
                const uint8_t b[] = { 0x53, 0x2D, 0x1B };
                if (!pe.WriteVa(0x5A60F9, b, sizeof b)) return false;
            }
            // file: 0x1A5528 → VA: 0x5A6128
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5A6128, b, sizeof b)) return false;
            }
            // file: 0x1A552C → VA: 0x5A612C
            {
                const uint8_t b[] = { 0x45, 0xF4 };
                if (!pe.WriteVa(0x5A612C, b, sizeof b)) return false;
            }
            // file: 0x1A572E → VA: 0x5A632E
            {
                const uint8_t b[] = {
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x89, 0xD9
                };
                if (!pe.WriteVa(0x5A632E, b, sizeof b)) return false;
            }
            // file: 0x1A5737 → VA: 0x5A6337
            {
                const uint8_t b[] = { 0x15, 0x2B, 0x1B };
                if (!pe.WriteVa(0x5A6337, b, sizeof b)) return false;
            }
            // file: 0x1A575C → VA: 0x5A635C
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5A635C, b, sizeof b)) return false;
            }
            // file: 0x1A5760 → VA: 0x5A6360
            {
                const uint8_t b[] = { 0x4D, 0xF8 };
                if (!pe.WriteVa(0x5A6360, b, sizeof b)) return false;
            }
            // file: 0x1A7CF5 → VA: 0x5A88F5
            {
                const uint8_t b[] = {
                    0x83, 0xC4, 0x04, 0x56, 0x89, 0xE1, 0xE8, 0xD0,
                    0x04, 0x1B, 0x00, 0x83, 0xC4, 0x04, 0xEB, 0x17,
                    0xCC, 0x89, 0xC3, 0x89, 0xE1, 0xE8, 0x41, 0x05,
                    0x1B
                };
                if (!pe.WriteVa(0x5A88F5, b, sizeof b)) return false;
            }
            // file: 0x1A7D0F → VA: 0x5A890F
            {
                const uint8_t b[] = {
                    0x83, 0xC4, 0x04, 0xE9, 0x6B, 0x33, 0x00, 0x00,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0x85, 0xC0
                };
                if (!pe.WriteVa(0x5A890F, b, sizeof b)) return false;
            }
            // file: 0x1A8C8E → VA: 0x5A988E
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0xBB, 0xF5, 0x1A, 0x00, 0x83,
                    0xC4, 0x04
                };
                if (!pe.WriteVa(0x5A988E, b, sizeof b)) return false;
            }
            // file: 0x1A8C9C → VA: 0x5A989C
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5A989C, b, sizeof b)) return false;
            }

            // file: 0x1AA6D4 → VA: 0x5AB2D4
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0x75, 0xDB, 0x1A, 0x00, 0x83,
                    0xC4, 0x04
                };
                if (!pe.WriteVa(0x5AB2D4, b, sizeof b)) return false;
            }
            // file: 0x1AA6E2 → VA: 0x5AB2E2
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5AB2E2, b, sizeof b)) return false;
            }

            // file: 0x1AA821 → VA: 0x5AB421
            {
                const uint8_t b[] = {
                    0x90, 0x8D, 0x4D, 0x08, 0xE8, 0xA6, 0xD9, 0x1A
                };
                if (!pe.WriteVa(0x5AB421, b, sizeof b)) return false;
            }
            // file: 0x1AA82A → VA: 0x5AB42A
            {
                const uint8_t b[] = {
                    0x8B, 0xF8, 0xE9, 0x67, 0xBE, 0x15, 0x00
                };
                if (!pe.WriteVa(0x5AB42A, b, sizeof b)) return false;
            }
            // file: 0x1AA832 → VA: 0x5AB432
            {
                const uint8_t b[] = { 0xC0 };
                if (!pe.WriteVa(0x5AB432, b, sizeof b)) return false;
            }
            // file: 0x1AA86C → VA: 0x5AB46C
            {
                const uint8_t b[] = { 0x90, 0x89, 0xF8 };
                if (!pe.WriteVa(0x5AB46C, b, sizeof b)) return false;
            }

            // file: 0x1AA8A2 → VA: 0x5AB4A2
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0xA7, 0xD9, 0x1A, 0x00, 0x83,
                    0xC4, 0x04
                };
                if (!pe.WriteVa(0x5AB4A2, b, sizeof b)) return false;
            }
            // file: 0x1AA8B0 → VA: 0x5AB4B0
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5AB4B0, b, sizeof b)) return false;
            }

            // file: 0x1AA9D0 → VA: 0x5AB5D0
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0x79, 0xD8, 0x1A, 0x00, 0x83,
                    0xC4, 0x04
                };
                if (!pe.WriteVa(0x5AB5D0, b, sizeof b)) return false;
            }
            // file: 0x1AA9DE → VA: 0x5AB5DE
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5AB5DE, b, sizeof b)) return false;
            }

            // file: 0x1AAAFA → VA: 0x5AB6FA
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0x4F, 0xD7, 0x1A, 0x00, 0x83,
                    0xC4, 0x04
                };
                if (!pe.WriteVa(0x5AB6FA, b, sizeof b)) return false;
            }
            // file: 0x1AAB08 → VA: 0x5AB708
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5AB708, b, sizeof b)) return false;
            }

            // file: 0x1AB076 → VA: 0x5ABC76
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0x53, 0xD1, 0x1A, 0x00, 0xE9,
                    0x84, 0xCC, 0xFF, 0xFF
                };
                if (!pe.WriteVa(0x5ABC76, b, sizeof b)) return false;
            }
            // file: 0x1AB083 → VA: 0x5ABC83
            {
                const uint8_t b[] = { 0xC0 };
                if (!pe.WriteVa(0x5ABC83, b, sizeof b)) return false;
            }
            // file: 0x1AB0A9 → VA: 0x5ABCA9
            {
                const uint8_t b[] = { 0x90, 0x90, 0x85, 0xDB };
                if (!pe.WriteVa(0x5ABCA9, b, sizeof b)) return false;
            }

            // file: 0x1AB316 → VA: 0x5ABF16
            {
                const uint8_t b[] = {
                    0x89, 0xE1, 0xE8, 0x33, 0xCF, 0x1A, 0x00, 0x83,
                    0xC4, 0x04
                };
                if (!pe.WriteVa(0x5ABF16, b, sizeof b)) return false;
            }
            // file: 0x1AB324 → VA: 0x5ABF24
            {
                const uint8_t b[] = { 0x90, 0x90, 0x90 };
                if (!pe.WriteVa(0x5ABF24, b, sizeof b)) return false;
            }
            // file: 0x306614 → VA: 0x707214
            {
                const uint8_t b[] = {
                    0x8B, 0x41, 0x08, 0x8D, 0x48, 0x0C, 0xE9, 0x11,
                    0x1B, 0x05, 0x00
                };
                if (!pe.WriteVa(0x707214, b, sizeof b)) return false;
            }
            // file: 0x306620 → VA: 0x707220
            {
                const uint8_t b[] = { 0xEB, 0xF2, 0xCC, 0xCC, 0xCC, 0xCC };
                if (!pe.WriteVa(0x707220, b, sizeof b)) return false;
            }
            // file: 0x306650 → VA: 0x707250
            {
                const uint8_t b[] = { 0xEB, 0x3A, 0xCC, 0xCC, 0xCC, 0xCC };
                if (!pe.WriteVa(0x707250, b, sizeof b)) return false;
            }
            // file: 0x306683 → VA: 0x707283
            {
                const uint8_t b[] = { 0x8D, 0x48 };
                if (!pe.WriteVa(0x707283, b, sizeof b)) return false;
            }
            // file: 0x306686 → VA: 0x707286
            {
                const uint8_t b[] = {
                    0xE9, 0x45, 0x1B, 0x05, 0x00, 0xCC, 0x8B, 0x41,
                    0x08, 0x8D, 0x48, 0x0C, 0xE9, 0xE9, 0x1A, 0x05,
                    0x00, 0xCC, 0x8D, 0x4D, 0x08, 0xE8, 0xB0, 0x1B,
                    0x05
                };
                if (!pe.WriteVa(0x707286, b, sizeof b)) return false;
            }
            // file: 0x3066A0 → VA: 0x7072A0
            {
                const uint8_t b[] = {
                    0xE9, 0x8C, 0x41, 0xEA, 0xFF, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC
                };
                if (!pe.WriteVa(0x7072A0, b, sizeof b)) return false;
            }
            // file: 0x306703 → VA: 0x707303
            {
                const uint8_t b[] = { 0x8D, 0x48 };
                if (!pe.WriteVa(0x707303, b, sizeof b)) return false;
            }
            // file: 0x306706 → VA: 0x707306
            {
                const uint8_t b[] = {
                    0xE9, 0x45, 0x1B, 0x05, 0x00, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC
                };
                if (!pe.WriteVa(0x707306, b, sizeof b)) return false;
            }
            // file: 0x306733 → VA: 0x707333
            {
                const uint8_t b[] = { 0x8D, 0x48 };
                if (!pe.WriteVa(0x707333, b, sizeof b)) return false;
            }
            // file: 0x306736 → VA: 0x707336
            {
                const uint8_t b[] = {
                    0xE9, 0x15, 0x1C, 0x05, 0x00, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
                    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC
                };
                if (!pe.WriteVa(0x707336, b, sizeof b)) return false;
            }

            // file: 0x309E03 → VA: 0x70AA03
            {
                const uint8_t b[] = { 0x8D, 0x48 };
                if (!pe.WriteVa(0x70AA03, b, sizeof b)) return false;
            }
            // file: 0x309E06 → VA: 0x70AA06
            {
                const uint8_t b[] = {
                    0xE8, 0x45, 0xE4, 0x04, 0x00, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
                    0x90, 0x90, 0x90, 0x90
                };
                if (!pe.WriteVa(0x70AA06, b, sizeof b)) return false;
            }
            // Function A — file: 0x358136 → VA: 0x758D36
            {
                const uint8_t b[] = { 0x56, 0x8B, 0x31, 0x89, 0xF0 };
                if (!pe.WriteVa(0x758D36, b, sizeof b)) return false;
            }
            // file: 0x35813C → VA: 0x758D3C
            {
                const uint8_t b[] = {
                    0x01, 0x99, 0x6A, 0x00, 0x68, 0x70, 0xEB, 0x5E,
                    0x00, 0x33, 0xC2, 0x8D, 0x4D, 0xF8, 0x51, 0x2B,
                    0xC2, 0x50, 0xB9, 0x28, 0xD8, 0xC5, 0x00, 0xC7,
                    0x45, 0xF8
                };
                if (!pe.WriteVa(0x758D3C, b, sizeof b)) return false;
            }
            // file: 0x358157 → VA: 0x758D57
            {
                const uint8_t b[] = { 0x00, 0x00, 0x00, 0xC7, 0x45, 0xFC };
                if (!pe.WriteVa(0x758D57, b, sizeof b)) return false;
            }
            // file: 0x35815E → VA: 0x758D5E
            {
                const uint8_t b[] = {
                    0x00, 0x00, 0x00, 0xE8, 0xCA, 0x3C, 0xF2, 0xFF,
                    0x85, 0xC0, 0x74, 0x08
                };
                if (!pe.WriteVa(0x758D5E, b, sizeof b)) return false;
            }
            // file: 0x35816B → VA: 0x758D6B
            {
                const uint8_t b[] = {
                    0x40, 0x04, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0x89,
                    0xF0, 0x5E, 0x89, 0xEC, 0x5D, 0xE9, 0xA9, 0xE4,
                    0xFA, 0xFF
                };
                if (!pe.WriteVa(0x758D6B, b, sizeof b)) return false;
            }

            // file: 0x358186 → VA: 0x758D86
            {
                const uint8_t b[] = { 0x56, 0x8B, 0x31, 0x89, 0xF0 };
                if (!pe.WriteVa(0x758D86, b, sizeof b)) return false;
            }
            // file: 0x35818C → VA: 0x758D8C
            {
                const uint8_t b[] = {
                    0x01, 0x99, 0x6A, 0x00, 0x68, 0x70, 0xEB, 0x5E,
                    0x00, 0x33, 0xC2, 0x8D, 0x4D, 0xF8, 0x51, 0x2B,
                    0xC2, 0x50, 0xB9, 0x28, 0xD8, 0xC5, 0x00, 0xC7,
                    0x45, 0xF8
                };
                if (!pe.WriteVa(0x758D8C, b, sizeof b)) return false;
            }
            // file: 0x3581A7 → VA: 0x758DA7
            {
                const uint8_t b[] = { 0x00, 0x00, 0x00, 0xC7, 0x45, 0xFC };
                if (!pe.WriteVa(0x758DA7, b, sizeof b)) return false;
            }
            // file: 0x3581AE → VA: 0x758DAE
            {
                const uint8_t b[] = {
                    0x00, 0x00, 0x00, 0xE8, 0x7A, 0x3C, 0xF2, 0xFF,
                    0x85, 0xC0, 0x74
                };
                if (!pe.WriteVa(0x758DAE, b, sizeof b)) return false;
            }
            // file: 0x3581BB → VA: 0x758DBB
            {
                const uint8_t b[] = {
                    0x40, 0x08, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0x89,
                    0xF0, 0x5E, 0x89, 0xEC, 0x5D, 0xE9, 0x89, 0xE4,
                    0xFA, 0xFF
                };
                if (!pe.WriteVa(0x758DBB, b, sizeof b)) return false;
            }
            // file: 0x61BE58 → VA: 0xA1D658
            {
                const uint8_t b[] = { 0x7C, 0x7C };
                if (!pe.WriteVa(0xA1D658, b, sizeof b)) return false;
            }

            return true;
        }
    };

    const ItemDbcDitcher g_itemDbcDitcher;
}
