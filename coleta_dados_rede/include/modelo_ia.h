#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[0] <= 18.105000495910645) {
                            if (x[1] <= 0.4950000047683716) {
                                if (x[1] <= 0.3450000137090683) {
                                    if (x[1] <= 0.19999999552965164) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 2.0149999856948853) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 15.059999942779541) {
                                    if (x[0] <= 3.8249999284744263) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 3.3350000381469727) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 10.0) {
                                        if (x[0] <= 16.30999994277954) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 10.0) {
                                if (x[1] <= 16.43499994277954) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 60.27000045776367) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 47.869998931884766) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 57.6299991607666) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[2] <= 10.0) {
                            if (x[0] <= 14.15999984741211) {
                                if (x[0] <= 5.045000076293945) {
                                    if (x[1] <= 0.39000000059604645) {
                                        if (x[0] <= 2.0149999856948853) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 5.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 40.73000144958496) {
                                    if (x[1] <= 12.960000038146973) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 22.105000495910645) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #3
                        if (x[1] <= 6.740000009536743) {
                            if (x[1] <= 0.39000000059604645) {
                                if (x[1] <= 0.03999999910593033) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 2.0149999856948853) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 10.0) {
                                    if (x[0] <= 13.454999923706055) {
                                        if (x[0] <= 5.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 39.68000030517578) {
                                if (x[2] <= 10.0) {
                                    if (x[0] <= 40.73000144958496) {
                                        if (x[1] <= 8.144999980926514) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #4
                        if (x[2] <= 10.0) {
                            if (x[1] <= 5.1549999713897705) {
                                if (x[0] <= 4.434999942779541) {
                                    if (x[0] <= 2.84499990940094) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 1.409999966621399) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 4.579999923706055) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 3.309999942779541) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 15.069999694824219) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 12.71999979019165) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 43.435001373291016) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #5
                        if (x[2] <= 10.0) {
                            if (x[1] <= 7.710000038146973) {
                                if (x[0] <= 13.454999923706055) {
                                    if (x[0] <= 3.2949999570846558) {
                                        if (x[0] <= 3.274999976158142) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3.8249999284744263) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 7.954999923706055) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 9.789999961853027) {
                                        if (x[0] <= 27.730000495910645) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 19.09000015258789) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #6
                        if (x[1] <= 6.075000047683716) {
                            if (x[1] <= 0.03999999910593033) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[1] <= 1.3149999976158142) {
                                    if (x[1] <= 1.1549999713897705) {
                                        if (x[1] <= 0.5100000202655792) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 30.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 3.274999976158142) {
                                        if (x[0] <= 3.284999966621399) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 20.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 21.93000030517578) {
                                if (x[0] <= 19.614999771118164) {
                                    if (x[0] <= 15.059999942779541) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 15.980000495910645) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 93.57500076293945) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 7.650000095367432) {
                            if (x[2] <= 10.0) {
                                if (x[1] <= 1.3149999976158142) {
                                    if (x[0] <= 2.4700000286102295) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 0.7750000357627869) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 6.06000018119812) {
                                        if (x[0] <= 4.434999942779541) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 19.68499994277954) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[0] <= 15.059999942779541) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[0] <= 39.14500045776367) {
                                    if (x[1] <= 13.96500015258789) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 18.315000534057617) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 30.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 84.56000137329102) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[0] <= 18.105000495910645) {
                            if (x[1] <= 0.4950000047683716) {
                                if (x[0] <= 2.0450000166893005) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 2.215000033378601) {
                                    if (x[1] <= 2.1950000524520874) {
                                        if (x[0] <= 2.84499990940094) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2.2050000429153442) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 15.069999694824219) {
                                        if (x[1] <= 3.309999942779541) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 10.424999952316284) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 39.14500045776367) {
                                if (x[1] <= 17.68000030517578) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[2] <= 30.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 93.07500076293945) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[2] <= 70.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[2] <= 10.0) {
                            if (x[1] <= 23.355000495910645) {
                                if (x[0] <= 19.614999771118164) {
                                    if (x[0] <= 5.03000020980835) {
                                        if (x[1] <= 0.29500000178813934) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 15.595000267028809) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 30.590001106262207) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #10
                        if (x[0] <= 18.315000534057617) {
                            if (x[1] <= 0.4950000047683716) {
                                if (x[0] <= 2.059999942779541) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 3.2949999570846558) {
                                    if (x[1] <= 2.1950000524520874) {
                                        if (x[1] <= 1.3149999976158142) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2.2050000429153442) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 22.105000495910645) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 10.0) {
                                    if (x[0] <= 60.27000045776367) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[2] <= 30.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[1] <= 51.459999084472656) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }