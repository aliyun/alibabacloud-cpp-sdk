// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMORESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATADEMORESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerMetricDataDemoResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerMetricDataDemoResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AvgPerCompletionVv, avgPerCompletionVv_);
      DARABONBA_PTR_TO_JSON(AvgPerPlayDuration, avgPerPlayDuration_);
      DARABONBA_PTR_TO_JSON(AvgPerVv, avgPerVv_);
      DARABONBA_PTR_TO_JSON(AvgPlayBitrate, avgPlayBitrate_);
      DARABONBA_PTR_TO_JSON(AvgPlayDuration, avgPlayDuration_);
      DARABONBA_PTR_TO_JSON(AvgStartBitrate, avgStartBitrate_);
      DARABONBA_PTR_TO_JSON(AvgVideoDuration, avgVideoDuration_);
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(CompletionDegree, completionDegree_);
      DARABONBA_PTR_TO_JSON(CompletionRate, completionRate_);
      DARABONBA_PTR_TO_JSON(CompletionVv, completionVv_);
      DARABONBA_PTR_TO_JSON(Cuv, cuv_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(ErrorCount100s, errorCount100s_);
      DARABONBA_PTR_TO_JSON(FirstFrame, firstFrame_);
      DARABONBA_PTR_TO_JSON(JumpRate5s, jumpRate5s_);
      DARABONBA_PTR_TO_JSON(PlayFailRate, playFailRate_);
      DARABONBA_PTR_TO_JSON(RealVv, realVv_);
      DARABONBA_PTR_TO_JSON(ReplayRate, replayRate_);
      DARABONBA_PTR_TO_JSON(SecondPlayRate, secondPlayRate_);
      DARABONBA_PTR_TO_JSON(SeedFailRate, seedFailRate_);
      DARABONBA_PTR_TO_JSON(SeekDuration, seekDuration_);
      DARABONBA_PTR_TO_JSON(SlowPlayRate, slowPlayRate_);
      DARABONBA_PTR_TO_JSON(StuckCount100s, stuckCount100s_);
      DARABONBA_PTR_TO_JSON(StuckCountRate, stuckCountRate_);
      DARABONBA_PTR_TO_JSON(StuckDuration100s, stuckDuration100s_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TotalPlayDuration, totalPlayDuration_);
      DARABONBA_PTR_TO_JSON(Traf, traf_);
      DARABONBA_PTR_TO_JSON(Uv, uv_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(Vv, vv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerMetricDataDemoResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgPerCompletionVv, avgPerCompletionVv_);
      DARABONBA_PTR_FROM_JSON(AvgPerPlayDuration, avgPerPlayDuration_);
      DARABONBA_PTR_FROM_JSON(AvgPerVv, avgPerVv_);
      DARABONBA_PTR_FROM_JSON(AvgPlayBitrate, avgPlayBitrate_);
      DARABONBA_PTR_FROM_JSON(AvgPlayDuration, avgPlayDuration_);
      DARABONBA_PTR_FROM_JSON(AvgStartBitrate, avgStartBitrate_);
      DARABONBA_PTR_FROM_JSON(AvgVideoDuration, avgVideoDuration_);
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(CompletionDegree, completionDegree_);
      DARABONBA_PTR_FROM_JSON(CompletionRate, completionRate_);
      DARABONBA_PTR_FROM_JSON(CompletionVv, completionVv_);
      DARABONBA_PTR_FROM_JSON(Cuv, cuv_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(ErrorCount100s, errorCount100s_);
      DARABONBA_PTR_FROM_JSON(FirstFrame, firstFrame_);
      DARABONBA_PTR_FROM_JSON(JumpRate5s, jumpRate5s_);
      DARABONBA_PTR_FROM_JSON(PlayFailRate, playFailRate_);
      DARABONBA_PTR_FROM_JSON(RealVv, realVv_);
      DARABONBA_PTR_FROM_JSON(ReplayRate, replayRate_);
      DARABONBA_PTR_FROM_JSON(SecondPlayRate, secondPlayRate_);
      DARABONBA_PTR_FROM_JSON(SeedFailRate, seedFailRate_);
      DARABONBA_PTR_FROM_JSON(SeekDuration, seekDuration_);
      DARABONBA_PTR_FROM_JSON(SlowPlayRate, slowPlayRate_);
      DARABONBA_PTR_FROM_JSON(StuckCount100s, stuckCount100s_);
      DARABONBA_PTR_FROM_JSON(StuckCountRate, stuckCountRate_);
      DARABONBA_PTR_FROM_JSON(StuckDuration100s, stuckDuration100s_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TotalPlayDuration, totalPlayDuration_);
      DARABONBA_PTR_FROM_JSON(Traf, traf_);
      DARABONBA_PTR_FROM_JSON(Uv, uv_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(Vv, vv_);
    };
    DescribeVodPlayerMetricDataDemoResponseBodyDataList() = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyDataList(const DescribeVodPlayerMetricDataDemoResponseBodyDataList &) = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyDataList(DescribeVodPlayerMetricDataDemoResponseBodyDataList &&) = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerMetricDataDemoResponseBodyDataList() = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyDataList& operator=(const DescribeVodPlayerMetricDataDemoResponseBodyDataList &) = default ;
    DescribeVodPlayerMetricDataDemoResponseBodyDataList& operator=(DescribeVodPlayerMetricDataDemoResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgPerCompletionVv_ != nullptr
        && this->avgPerPlayDuration_ != nullptr && this->avgPerVv_ != nullptr && this->avgPlayBitrate_ != nullptr && this->avgPlayDuration_ != nullptr && this->avgStartBitrate_ != nullptr
        && this->avgVideoDuration_ != nullptr && this->bps_ != nullptr && this->completionDegree_ != nullptr && this->completionRate_ != nullptr && this->completionVv_ != nullptr
        && this->cuv_ != nullptr && this->dimension_ != nullptr && this->errorCount100s_ != nullptr && this->firstFrame_ != nullptr && this->jumpRate5s_ != nullptr
        && this->playFailRate_ != nullptr && this->realVv_ != nullptr && this->replayRate_ != nullptr && this->secondPlayRate_ != nullptr && this->seedFailRate_ != nullptr
        && this->seekDuration_ != nullptr && this->slowPlayRate_ != nullptr && this->stuckCount100s_ != nullptr && this->stuckCountRate_ != nullptr && this->stuckDuration100s_ != nullptr
        && this->timeStamp_ != nullptr && this->totalPlayDuration_ != nullptr && this->traf_ != nullptr && this->uv_ != nullptr && this->videoBitrate_ != nullptr
        && this->vv_ != nullptr; };
    // avgPerCompletionVv Field Functions 
    bool hasAvgPerCompletionVv() const { return this->avgPerCompletionVv_ != nullptr;};
    void deleteAvgPerCompletionVv() { this->avgPerCompletionVv_ = nullptr;};
    inline double avgPerCompletionVv() const { DARABONBA_PTR_GET_DEFAULT(avgPerCompletionVv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgPerCompletionVv(double avgPerCompletionVv) { DARABONBA_PTR_SET_VALUE(avgPerCompletionVv_, avgPerCompletionVv) };


    // avgPerPlayDuration Field Functions 
    bool hasAvgPerPlayDuration() const { return this->avgPerPlayDuration_ != nullptr;};
    void deleteAvgPerPlayDuration() { this->avgPerPlayDuration_ = nullptr;};
    inline double avgPerPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(avgPerPlayDuration_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgPerPlayDuration(double avgPerPlayDuration) { DARABONBA_PTR_SET_VALUE(avgPerPlayDuration_, avgPerPlayDuration) };


    // avgPerVv Field Functions 
    bool hasAvgPerVv() const { return this->avgPerVv_ != nullptr;};
    void deleteAvgPerVv() { this->avgPerVv_ = nullptr;};
    inline double avgPerVv() const { DARABONBA_PTR_GET_DEFAULT(avgPerVv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgPerVv(double avgPerVv) { DARABONBA_PTR_SET_VALUE(avgPerVv_, avgPerVv) };


    // avgPlayBitrate Field Functions 
    bool hasAvgPlayBitrate() const { return this->avgPlayBitrate_ != nullptr;};
    void deleteAvgPlayBitrate() { this->avgPlayBitrate_ = nullptr;};
    inline double avgPlayBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgPlayBitrate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgPlayBitrate(double avgPlayBitrate) { DARABONBA_PTR_SET_VALUE(avgPlayBitrate_, avgPlayBitrate) };


    // avgPlayDuration Field Functions 
    bool hasAvgPlayDuration() const { return this->avgPlayDuration_ != nullptr;};
    void deleteAvgPlayDuration() { this->avgPlayDuration_ = nullptr;};
    inline double avgPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(avgPlayDuration_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgPlayDuration(double avgPlayDuration) { DARABONBA_PTR_SET_VALUE(avgPlayDuration_, avgPlayDuration) };


    // avgStartBitrate Field Functions 
    bool hasAvgStartBitrate() const { return this->avgStartBitrate_ != nullptr;};
    void deleteAvgStartBitrate() { this->avgStartBitrate_ = nullptr;};
    inline double avgStartBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgStartBitrate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgStartBitrate(double avgStartBitrate) { DARABONBA_PTR_SET_VALUE(avgStartBitrate_, avgStartBitrate) };


    // avgVideoDuration Field Functions 
    bool hasAvgVideoDuration() const { return this->avgVideoDuration_ != nullptr;};
    void deleteAvgVideoDuration() { this->avgVideoDuration_ = nullptr;};
    inline double avgVideoDuration() const { DARABONBA_PTR_GET_DEFAULT(avgVideoDuration_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setAvgVideoDuration(double avgVideoDuration) { DARABONBA_PTR_SET_VALUE(avgVideoDuration_, avgVideoDuration) };


    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline double bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setBps(double bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // completionDegree Field Functions 
    bool hasCompletionDegree() const { return this->completionDegree_ != nullptr;};
    void deleteCompletionDegree() { this->completionDegree_ = nullptr;};
    inline double completionDegree() const { DARABONBA_PTR_GET_DEFAULT(completionDegree_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setCompletionDegree(double completionDegree) { DARABONBA_PTR_SET_VALUE(completionDegree_, completionDegree) };


    // completionRate Field Functions 
    bool hasCompletionRate() const { return this->completionRate_ != nullptr;};
    void deleteCompletionRate() { this->completionRate_ = nullptr;};
    inline double completionRate() const { DARABONBA_PTR_GET_DEFAULT(completionRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setCompletionRate(double completionRate) { DARABONBA_PTR_SET_VALUE(completionRate_, completionRate) };


    // completionVv Field Functions 
    bool hasCompletionVv() const { return this->completionVv_ != nullptr;};
    void deleteCompletionVv() { this->completionVv_ = nullptr;};
    inline double completionVv() const { DARABONBA_PTR_GET_DEFAULT(completionVv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setCompletionVv(double completionVv) { DARABONBA_PTR_SET_VALUE(completionVv_, completionVv) };


    // cuv Field Functions 
    bool hasCuv() const { return this->cuv_ != nullptr;};
    void deleteCuv() { this->cuv_ = nullptr;};
    inline double cuv() const { DARABONBA_PTR_GET_DEFAULT(cuv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setCuv(double cuv) { DARABONBA_PTR_SET_VALUE(cuv_, cuv) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // errorCount100s Field Functions 
    bool hasErrorCount100s() const { return this->errorCount100s_ != nullptr;};
    void deleteErrorCount100s() { this->errorCount100s_ = nullptr;};
    inline double errorCount100s() const { DARABONBA_PTR_GET_DEFAULT(errorCount100s_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setErrorCount100s(double errorCount100s) { DARABONBA_PTR_SET_VALUE(errorCount100s_, errorCount100s) };


    // firstFrame Field Functions 
    bool hasFirstFrame() const { return this->firstFrame_ != nullptr;};
    void deleteFirstFrame() { this->firstFrame_ = nullptr;};
    inline double firstFrame() const { DARABONBA_PTR_GET_DEFAULT(firstFrame_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setFirstFrame(double firstFrame) { DARABONBA_PTR_SET_VALUE(firstFrame_, firstFrame) };


    // jumpRate5s Field Functions 
    bool hasJumpRate5s() const { return this->jumpRate5s_ != nullptr;};
    void deleteJumpRate5s() { this->jumpRate5s_ = nullptr;};
    inline double jumpRate5s() const { DARABONBA_PTR_GET_DEFAULT(jumpRate5s_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setJumpRate5s(double jumpRate5s) { DARABONBA_PTR_SET_VALUE(jumpRate5s_, jumpRate5s) };


    // playFailRate Field Functions 
    bool hasPlayFailRate() const { return this->playFailRate_ != nullptr;};
    void deletePlayFailRate() { this->playFailRate_ = nullptr;};
    inline double playFailRate() const { DARABONBA_PTR_GET_DEFAULT(playFailRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setPlayFailRate(double playFailRate) { DARABONBA_PTR_SET_VALUE(playFailRate_, playFailRate) };


    // realVv Field Functions 
    bool hasRealVv() const { return this->realVv_ != nullptr;};
    void deleteRealVv() { this->realVv_ = nullptr;};
    inline double realVv() const { DARABONBA_PTR_GET_DEFAULT(realVv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setRealVv(double realVv) { DARABONBA_PTR_SET_VALUE(realVv_, realVv) };


    // replayRate Field Functions 
    bool hasReplayRate() const { return this->replayRate_ != nullptr;};
    void deleteReplayRate() { this->replayRate_ = nullptr;};
    inline double replayRate() const { DARABONBA_PTR_GET_DEFAULT(replayRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setReplayRate(double replayRate) { DARABONBA_PTR_SET_VALUE(replayRate_, replayRate) };


    // secondPlayRate Field Functions 
    bool hasSecondPlayRate() const { return this->secondPlayRate_ != nullptr;};
    void deleteSecondPlayRate() { this->secondPlayRate_ = nullptr;};
    inline double secondPlayRate() const { DARABONBA_PTR_GET_DEFAULT(secondPlayRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setSecondPlayRate(double secondPlayRate) { DARABONBA_PTR_SET_VALUE(secondPlayRate_, secondPlayRate) };


    // seedFailRate Field Functions 
    bool hasSeedFailRate() const { return this->seedFailRate_ != nullptr;};
    void deleteSeedFailRate() { this->seedFailRate_ = nullptr;};
    inline double seedFailRate() const { DARABONBA_PTR_GET_DEFAULT(seedFailRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setSeedFailRate(double seedFailRate) { DARABONBA_PTR_SET_VALUE(seedFailRate_, seedFailRate) };


    // seekDuration Field Functions 
    bool hasSeekDuration() const { return this->seekDuration_ != nullptr;};
    void deleteSeekDuration() { this->seekDuration_ = nullptr;};
    inline double seekDuration() const { DARABONBA_PTR_GET_DEFAULT(seekDuration_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setSeekDuration(double seekDuration) { DARABONBA_PTR_SET_VALUE(seekDuration_, seekDuration) };


    // slowPlayRate Field Functions 
    bool hasSlowPlayRate() const { return this->slowPlayRate_ != nullptr;};
    void deleteSlowPlayRate() { this->slowPlayRate_ = nullptr;};
    inline double slowPlayRate() const { DARABONBA_PTR_GET_DEFAULT(slowPlayRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setSlowPlayRate(double slowPlayRate) { DARABONBA_PTR_SET_VALUE(slowPlayRate_, slowPlayRate) };


    // stuckCount100s Field Functions 
    bool hasStuckCount100s() const { return this->stuckCount100s_ != nullptr;};
    void deleteStuckCount100s() { this->stuckCount100s_ = nullptr;};
    inline string stuckCount100s() const { DARABONBA_PTR_GET_DEFAULT(stuckCount100s_, "") };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setStuckCount100s(string stuckCount100s) { DARABONBA_PTR_SET_VALUE(stuckCount100s_, stuckCount100s) };


    // stuckCountRate Field Functions 
    bool hasStuckCountRate() const { return this->stuckCountRate_ != nullptr;};
    void deleteStuckCountRate() { this->stuckCountRate_ = nullptr;};
    inline double stuckCountRate() const { DARABONBA_PTR_GET_DEFAULT(stuckCountRate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setStuckCountRate(double stuckCountRate) { DARABONBA_PTR_SET_VALUE(stuckCountRate_, stuckCountRate) };


    // stuckDuration100s Field Functions 
    bool hasStuckDuration100s() const { return this->stuckDuration100s_ != nullptr;};
    void deleteStuckDuration100s() { this->stuckDuration100s_ = nullptr;};
    inline double stuckDuration100s() const { DARABONBA_PTR_GET_DEFAULT(stuckDuration100s_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setStuckDuration100s(double stuckDuration100s) { DARABONBA_PTR_SET_VALUE(stuckDuration100s_, stuckDuration100s) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // totalPlayDuration Field Functions 
    bool hasTotalPlayDuration() const { return this->totalPlayDuration_ != nullptr;};
    void deleteTotalPlayDuration() { this->totalPlayDuration_ = nullptr;};
    inline double totalPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(totalPlayDuration_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setTotalPlayDuration(double totalPlayDuration) { DARABONBA_PTR_SET_VALUE(totalPlayDuration_, totalPlayDuration) };


    // traf Field Functions 
    bool hasTraf() const { return this->traf_ != nullptr;};
    void deleteTraf() { this->traf_ = nullptr;};
    inline double traf() const { DARABONBA_PTR_GET_DEFAULT(traf_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setTraf(double traf) { DARABONBA_PTR_SET_VALUE(traf_, traf) };


    // uv Field Functions 
    bool hasUv() const { return this->uv_ != nullptr;};
    void deleteUv() { this->uv_ = nullptr;};
    inline double uv() const { DARABONBA_PTR_GET_DEFAULT(uv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setUv(double uv) { DARABONBA_PTR_SET_VALUE(uv_, uv) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline double videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setVideoBitrate(double videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // vv Field Functions 
    bool hasVv() const { return this->vv_ != nullptr;};
    void deleteVv() { this->vv_ = nullptr;};
    inline double vv() const { DARABONBA_PTR_GET_DEFAULT(vv_, 0.0) };
    inline DescribeVodPlayerMetricDataDemoResponseBodyDataList& setVv(double vv) { DARABONBA_PTR_SET_VALUE(vv_, vv) };


  protected:
    std::shared_ptr<double> avgPerCompletionVv_ = nullptr;
    std::shared_ptr<double> avgPerPlayDuration_ = nullptr;
    std::shared_ptr<double> avgPerVv_ = nullptr;
    std::shared_ptr<double> avgPlayBitrate_ = nullptr;
    std::shared_ptr<double> avgPlayDuration_ = nullptr;
    std::shared_ptr<double> avgStartBitrate_ = nullptr;
    std::shared_ptr<double> avgVideoDuration_ = nullptr;
    std::shared_ptr<double> bps_ = nullptr;
    std::shared_ptr<double> completionDegree_ = nullptr;
    std::shared_ptr<double> completionRate_ = nullptr;
    std::shared_ptr<double> completionVv_ = nullptr;
    std::shared_ptr<double> cuv_ = nullptr;
    std::shared_ptr<string> dimension_ = nullptr;
    std::shared_ptr<double> errorCount100s_ = nullptr;
    std::shared_ptr<double> firstFrame_ = nullptr;
    std::shared_ptr<double> jumpRate5s_ = nullptr;
    std::shared_ptr<double> playFailRate_ = nullptr;
    std::shared_ptr<double> realVv_ = nullptr;
    std::shared_ptr<double> replayRate_ = nullptr;
    std::shared_ptr<double> secondPlayRate_ = nullptr;
    std::shared_ptr<double> seedFailRate_ = nullptr;
    std::shared_ptr<double> seekDuration_ = nullptr;
    std::shared_ptr<double> slowPlayRate_ = nullptr;
    std::shared_ptr<string> stuckCount100s_ = nullptr;
    std::shared_ptr<double> stuckCountRate_ = nullptr;
    std::shared_ptr<double> stuckDuration100s_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<double> totalPlayDuration_ = nullptr;
    std::shared_ptr<double> traf_ = nullptr;
    std::shared_ptr<double> uv_ = nullptr;
    std::shared_ptr<double> videoBitrate_ = nullptr;
    std::shared_ptr<double> vv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
