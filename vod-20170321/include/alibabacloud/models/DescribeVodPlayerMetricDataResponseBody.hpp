// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODPLAYERMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodPlayerMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodPlayerMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodPlayerMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
    };
    DescribeVodPlayerMetricDataResponseBody() = default ;
    DescribeVodPlayerMetricDataResponseBody(const DescribeVodPlayerMetricDataResponseBody &) = default ;
    DescribeVodPlayerMetricDataResponseBody(DescribeVodPlayerMetricDataResponseBody &&) = default ;
    DescribeVodPlayerMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodPlayerMetricDataResponseBody() = default ;
    DescribeVodPlayerMetricDataResponseBody& operator=(const DescribeVodPlayerMetricDataResponseBody &) = default ;
    DescribeVodPlayerMetricDataResponseBody& operator=(DescribeVodPlayerMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extend& obj) { 
        DARABONBA_PTR_TO_JSON(ActualEndTime, actualEndTime_);
        DARABONBA_PTR_TO_JSON(ActualStartTime, actualStartTime_);
        DARABONBA_PTR_TO_JSON(IntervalSeconds, intervalSeconds_);
      };
      friend void from_json(const Darabonba::Json& j, Extend& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualEndTime, actualEndTime_);
        DARABONBA_PTR_FROM_JSON(ActualStartTime, actualStartTime_);
        DARABONBA_PTR_FROM_JSON(IntervalSeconds, intervalSeconds_);
      };
      Extend() = default ;
      Extend(const Extend &) = default ;
      Extend(Extend &&) = default ;
      Extend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extend() = default ;
      Extend& operator=(const Extend &) = default ;
      Extend& operator=(Extend &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualEndTime_ == nullptr
        && this->actualStartTime_ == nullptr && this->intervalSeconds_ == nullptr; };
      // actualEndTime Field Functions 
      bool hasActualEndTime() const { return this->actualEndTime_ != nullptr;};
      void deleteActualEndTime() { this->actualEndTime_ = nullptr;};
      inline string getActualEndTime() const { DARABONBA_PTR_GET_DEFAULT(actualEndTime_, "") };
      inline Extend& setActualEndTime(string actualEndTime) { DARABONBA_PTR_SET_VALUE(actualEndTime_, actualEndTime) };


      // actualStartTime Field Functions 
      bool hasActualStartTime() const { return this->actualStartTime_ != nullptr;};
      void deleteActualStartTime() { this->actualStartTime_ = nullptr;};
      inline string getActualStartTime() const { DARABONBA_PTR_GET_DEFAULT(actualStartTime_, "") };
      inline Extend& setActualStartTime(string actualStartTime) { DARABONBA_PTR_SET_VALUE(actualStartTime_, actualStartTime) };


      // intervalSeconds Field Functions 
      bool hasIntervalSeconds() const { return this->intervalSeconds_ != nullptr;};
      void deleteIntervalSeconds() { this->intervalSeconds_ = nullptr;};
      inline int64_t getIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(intervalSeconds_, 0L) };
      inline Extend& setIntervalSeconds(int64_t intervalSeconds) { DARABONBA_PTR_SET_VALUE(intervalSeconds_, intervalSeconds) };


    protected:
      shared_ptr<string> actualEndTime_ {};
      shared_ptr<string> actualStartTime_ {};
      shared_ptr<int64_t> intervalSeconds_ {};
    };

    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(AvgPerCompletionVv, avgPerCompletionVv_);
        DARABONBA_PTR_TO_JSON(AvgPerPlayDuration, avgPerPlayDuration_);
        DARABONBA_PTR_TO_JSON(AvgPerVv, avgPerVv_);
        DARABONBA_PTR_TO_JSON(AvgPlayBitrate, avgPlayBitrate_);
        DARABONBA_PTR_TO_JSON(AvgPlayDuration, avgPlayDuration_);
        DARABONBA_PTR_TO_JSON(AvgStartBitrate, avgStartBitrate_);
        DARABONBA_PTR_TO_JSON(AvgVideoDuration, avgVideoDuration_);
        DARABONBA_PTR_TO_JSON(CompletionRate, completionRate_);
        DARABONBA_PTR_TO_JSON(CompletionVv, completionVv_);
        DARABONBA_PTR_TO_JSON(Dimension, dimension_);
        DARABONBA_PTR_TO_JSON(ErrorCount100s, errorCount100s_);
        DARABONBA_PTR_TO_JSON(FirstFrame, firstFrame_);
        DARABONBA_PTR_TO_JSON(JumpRate5s, jumpRate5s_);
        DARABONBA_PTR_TO_JSON(PlayFailRate, playFailRate_);
        DARABONBA_PTR_TO_JSON(RealVv, realVv_);
        DARABONBA_PTR_TO_JSON(SecondPlayRate, secondPlayRate_);
        DARABONBA_PTR_TO_JSON(SeedFailRate, seedFailRate_);
        DARABONBA_PTR_TO_JSON(SeekDuration, seekDuration_);
        DARABONBA_PTR_TO_JSON(SlowPlayRate, slowPlayRate_);
        DARABONBA_PTR_TO_JSON(StuckCount100s, stuckCount100s_);
        DARABONBA_PTR_TO_JSON(StuckCountRate, stuckCountRate_);
        DARABONBA_PTR_TO_JSON(StuckDuration100s, stuckDuration100s_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(TotalPlayDuration, totalPlayDuration_);
        DARABONBA_PTR_TO_JSON(Uv, uv_);
        DARABONBA_PTR_TO_JSON(Vv, vv_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(AvgPerCompletionVv, avgPerCompletionVv_);
        DARABONBA_PTR_FROM_JSON(AvgPerPlayDuration, avgPerPlayDuration_);
        DARABONBA_PTR_FROM_JSON(AvgPerVv, avgPerVv_);
        DARABONBA_PTR_FROM_JSON(AvgPlayBitrate, avgPlayBitrate_);
        DARABONBA_PTR_FROM_JSON(AvgPlayDuration, avgPlayDuration_);
        DARABONBA_PTR_FROM_JSON(AvgStartBitrate, avgStartBitrate_);
        DARABONBA_PTR_FROM_JSON(AvgVideoDuration, avgVideoDuration_);
        DARABONBA_PTR_FROM_JSON(CompletionRate, completionRate_);
        DARABONBA_PTR_FROM_JSON(CompletionVv, completionVv_);
        DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
        DARABONBA_PTR_FROM_JSON(ErrorCount100s, errorCount100s_);
        DARABONBA_PTR_FROM_JSON(FirstFrame, firstFrame_);
        DARABONBA_PTR_FROM_JSON(JumpRate5s, jumpRate5s_);
        DARABONBA_PTR_FROM_JSON(PlayFailRate, playFailRate_);
        DARABONBA_PTR_FROM_JSON(RealVv, realVv_);
        DARABONBA_PTR_FROM_JSON(SecondPlayRate, secondPlayRate_);
        DARABONBA_PTR_FROM_JSON(SeedFailRate, seedFailRate_);
        DARABONBA_PTR_FROM_JSON(SeekDuration, seekDuration_);
        DARABONBA_PTR_FROM_JSON(SlowPlayRate, slowPlayRate_);
        DARABONBA_PTR_FROM_JSON(StuckCount100s, stuckCount100s_);
        DARABONBA_PTR_FROM_JSON(StuckCountRate, stuckCountRate_);
        DARABONBA_PTR_FROM_JSON(StuckDuration100s, stuckDuration100s_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(TotalPlayDuration, totalPlayDuration_);
        DARABONBA_PTR_FROM_JSON(Uv, uv_);
        DARABONBA_PTR_FROM_JSON(Vv, vv_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avgPerCompletionVv_ == nullptr
        && this->avgPerPlayDuration_ == nullptr && this->avgPerVv_ == nullptr && this->avgPlayBitrate_ == nullptr && this->avgPlayDuration_ == nullptr && this->avgStartBitrate_ == nullptr
        && this->avgVideoDuration_ == nullptr && this->completionRate_ == nullptr && this->completionVv_ == nullptr && this->dimension_ == nullptr && this->errorCount100s_ == nullptr
        && this->firstFrame_ == nullptr && this->jumpRate5s_ == nullptr && this->playFailRate_ == nullptr && this->realVv_ == nullptr && this->secondPlayRate_ == nullptr
        && this->seedFailRate_ == nullptr && this->seekDuration_ == nullptr && this->slowPlayRate_ == nullptr && this->stuckCount100s_ == nullptr && this->stuckCountRate_ == nullptr
        && this->stuckDuration100s_ == nullptr && this->timeStamp_ == nullptr && this->totalPlayDuration_ == nullptr && this->uv_ == nullptr && this->vv_ == nullptr; };
      // avgPerCompletionVv Field Functions 
      bool hasAvgPerCompletionVv() const { return this->avgPerCompletionVv_ != nullptr;};
      void deleteAvgPerCompletionVv() { this->avgPerCompletionVv_ = nullptr;};
      inline double getAvgPerCompletionVv() const { DARABONBA_PTR_GET_DEFAULT(avgPerCompletionVv_, 0.0) };
      inline DataList& setAvgPerCompletionVv(double avgPerCompletionVv) { DARABONBA_PTR_SET_VALUE(avgPerCompletionVv_, avgPerCompletionVv) };


      // avgPerPlayDuration Field Functions 
      bool hasAvgPerPlayDuration() const { return this->avgPerPlayDuration_ != nullptr;};
      void deleteAvgPerPlayDuration() { this->avgPerPlayDuration_ = nullptr;};
      inline double getAvgPerPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(avgPerPlayDuration_, 0.0) };
      inline DataList& setAvgPerPlayDuration(double avgPerPlayDuration) { DARABONBA_PTR_SET_VALUE(avgPerPlayDuration_, avgPerPlayDuration) };


      // avgPerVv Field Functions 
      bool hasAvgPerVv() const { return this->avgPerVv_ != nullptr;};
      void deleteAvgPerVv() { this->avgPerVv_ = nullptr;};
      inline double getAvgPerVv() const { DARABONBA_PTR_GET_DEFAULT(avgPerVv_, 0.0) };
      inline DataList& setAvgPerVv(double avgPerVv) { DARABONBA_PTR_SET_VALUE(avgPerVv_, avgPerVv) };


      // avgPlayBitrate Field Functions 
      bool hasAvgPlayBitrate() const { return this->avgPlayBitrate_ != nullptr;};
      void deleteAvgPlayBitrate() { this->avgPlayBitrate_ = nullptr;};
      inline double getAvgPlayBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgPlayBitrate_, 0.0) };
      inline DataList& setAvgPlayBitrate(double avgPlayBitrate) { DARABONBA_PTR_SET_VALUE(avgPlayBitrate_, avgPlayBitrate) };


      // avgPlayDuration Field Functions 
      bool hasAvgPlayDuration() const { return this->avgPlayDuration_ != nullptr;};
      void deleteAvgPlayDuration() { this->avgPlayDuration_ = nullptr;};
      inline double getAvgPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(avgPlayDuration_, 0.0) };
      inline DataList& setAvgPlayDuration(double avgPlayDuration) { DARABONBA_PTR_SET_VALUE(avgPlayDuration_, avgPlayDuration) };


      // avgStartBitrate Field Functions 
      bool hasAvgStartBitrate() const { return this->avgStartBitrate_ != nullptr;};
      void deleteAvgStartBitrate() { this->avgStartBitrate_ = nullptr;};
      inline double getAvgStartBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgStartBitrate_, 0.0) };
      inline DataList& setAvgStartBitrate(double avgStartBitrate) { DARABONBA_PTR_SET_VALUE(avgStartBitrate_, avgStartBitrate) };


      // avgVideoDuration Field Functions 
      bool hasAvgVideoDuration() const { return this->avgVideoDuration_ != nullptr;};
      void deleteAvgVideoDuration() { this->avgVideoDuration_ = nullptr;};
      inline double getAvgVideoDuration() const { DARABONBA_PTR_GET_DEFAULT(avgVideoDuration_, 0.0) };
      inline DataList& setAvgVideoDuration(double avgVideoDuration) { DARABONBA_PTR_SET_VALUE(avgVideoDuration_, avgVideoDuration) };


      // completionRate Field Functions 
      bool hasCompletionRate() const { return this->completionRate_ != nullptr;};
      void deleteCompletionRate() { this->completionRate_ = nullptr;};
      inline double getCompletionRate() const { DARABONBA_PTR_GET_DEFAULT(completionRate_, 0.0) };
      inline DataList& setCompletionRate(double completionRate) { DARABONBA_PTR_SET_VALUE(completionRate_, completionRate) };


      // completionVv Field Functions 
      bool hasCompletionVv() const { return this->completionVv_ != nullptr;};
      void deleteCompletionVv() { this->completionVv_ = nullptr;};
      inline double getCompletionVv() const { DARABONBA_PTR_GET_DEFAULT(completionVv_, 0.0) };
      inline DataList& setCompletionVv(double completionVv) { DARABONBA_PTR_SET_VALUE(completionVv_, completionVv) };


      // dimension Field Functions 
      bool hasDimension() const { return this->dimension_ != nullptr;};
      void deleteDimension() { this->dimension_ = nullptr;};
      inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
      inline DataList& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


      // errorCount100s Field Functions 
      bool hasErrorCount100s() const { return this->errorCount100s_ != nullptr;};
      void deleteErrorCount100s() { this->errorCount100s_ = nullptr;};
      inline double getErrorCount100s() const { DARABONBA_PTR_GET_DEFAULT(errorCount100s_, 0.0) };
      inline DataList& setErrorCount100s(double errorCount100s) { DARABONBA_PTR_SET_VALUE(errorCount100s_, errorCount100s) };


      // firstFrame Field Functions 
      bool hasFirstFrame() const { return this->firstFrame_ != nullptr;};
      void deleteFirstFrame() { this->firstFrame_ = nullptr;};
      inline double getFirstFrame() const { DARABONBA_PTR_GET_DEFAULT(firstFrame_, 0.0) };
      inline DataList& setFirstFrame(double firstFrame) { DARABONBA_PTR_SET_VALUE(firstFrame_, firstFrame) };


      // jumpRate5s Field Functions 
      bool hasJumpRate5s() const { return this->jumpRate5s_ != nullptr;};
      void deleteJumpRate5s() { this->jumpRate5s_ = nullptr;};
      inline double getJumpRate5s() const { DARABONBA_PTR_GET_DEFAULT(jumpRate5s_, 0.0) };
      inline DataList& setJumpRate5s(double jumpRate5s) { DARABONBA_PTR_SET_VALUE(jumpRate5s_, jumpRate5s) };


      // playFailRate Field Functions 
      bool hasPlayFailRate() const { return this->playFailRate_ != nullptr;};
      void deletePlayFailRate() { this->playFailRate_ = nullptr;};
      inline double getPlayFailRate() const { DARABONBA_PTR_GET_DEFAULT(playFailRate_, 0.0) };
      inline DataList& setPlayFailRate(double playFailRate) { DARABONBA_PTR_SET_VALUE(playFailRate_, playFailRate) };


      // realVv Field Functions 
      bool hasRealVv() const { return this->realVv_ != nullptr;};
      void deleteRealVv() { this->realVv_ = nullptr;};
      inline double getRealVv() const { DARABONBA_PTR_GET_DEFAULT(realVv_, 0.0) };
      inline DataList& setRealVv(double realVv) { DARABONBA_PTR_SET_VALUE(realVv_, realVv) };


      // secondPlayRate Field Functions 
      bool hasSecondPlayRate() const { return this->secondPlayRate_ != nullptr;};
      void deleteSecondPlayRate() { this->secondPlayRate_ = nullptr;};
      inline double getSecondPlayRate() const { DARABONBA_PTR_GET_DEFAULT(secondPlayRate_, 0.0) };
      inline DataList& setSecondPlayRate(double secondPlayRate) { DARABONBA_PTR_SET_VALUE(secondPlayRate_, secondPlayRate) };


      // seedFailRate Field Functions 
      bool hasSeedFailRate() const { return this->seedFailRate_ != nullptr;};
      void deleteSeedFailRate() { this->seedFailRate_ = nullptr;};
      inline double getSeedFailRate() const { DARABONBA_PTR_GET_DEFAULT(seedFailRate_, 0.0) };
      inline DataList& setSeedFailRate(double seedFailRate) { DARABONBA_PTR_SET_VALUE(seedFailRate_, seedFailRate) };


      // seekDuration Field Functions 
      bool hasSeekDuration() const { return this->seekDuration_ != nullptr;};
      void deleteSeekDuration() { this->seekDuration_ = nullptr;};
      inline double getSeekDuration() const { DARABONBA_PTR_GET_DEFAULT(seekDuration_, 0.0) };
      inline DataList& setSeekDuration(double seekDuration) { DARABONBA_PTR_SET_VALUE(seekDuration_, seekDuration) };


      // slowPlayRate Field Functions 
      bool hasSlowPlayRate() const { return this->slowPlayRate_ != nullptr;};
      void deleteSlowPlayRate() { this->slowPlayRate_ = nullptr;};
      inline double getSlowPlayRate() const { DARABONBA_PTR_GET_DEFAULT(slowPlayRate_, 0.0) };
      inline DataList& setSlowPlayRate(double slowPlayRate) { DARABONBA_PTR_SET_VALUE(slowPlayRate_, slowPlayRate) };


      // stuckCount100s Field Functions 
      bool hasStuckCount100s() const { return this->stuckCount100s_ != nullptr;};
      void deleteStuckCount100s() { this->stuckCount100s_ = nullptr;};
      inline string getStuckCount100s() const { DARABONBA_PTR_GET_DEFAULT(stuckCount100s_, "") };
      inline DataList& setStuckCount100s(string stuckCount100s) { DARABONBA_PTR_SET_VALUE(stuckCount100s_, stuckCount100s) };


      // stuckCountRate Field Functions 
      bool hasStuckCountRate() const { return this->stuckCountRate_ != nullptr;};
      void deleteStuckCountRate() { this->stuckCountRate_ = nullptr;};
      inline double getStuckCountRate() const { DARABONBA_PTR_GET_DEFAULT(stuckCountRate_, 0.0) };
      inline DataList& setStuckCountRate(double stuckCountRate) { DARABONBA_PTR_SET_VALUE(stuckCountRate_, stuckCountRate) };


      // stuckDuration100s Field Functions 
      bool hasStuckDuration100s() const { return this->stuckDuration100s_ != nullptr;};
      void deleteStuckDuration100s() { this->stuckDuration100s_ = nullptr;};
      inline double getStuckDuration100s() const { DARABONBA_PTR_GET_DEFAULT(stuckDuration100s_, 0.0) };
      inline DataList& setStuckDuration100s(double stuckDuration100s) { DARABONBA_PTR_SET_VALUE(stuckDuration100s_, stuckDuration100s) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline DataList& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // totalPlayDuration Field Functions 
      bool hasTotalPlayDuration() const { return this->totalPlayDuration_ != nullptr;};
      void deleteTotalPlayDuration() { this->totalPlayDuration_ = nullptr;};
      inline double getTotalPlayDuration() const { DARABONBA_PTR_GET_DEFAULT(totalPlayDuration_, 0.0) };
      inline DataList& setTotalPlayDuration(double totalPlayDuration) { DARABONBA_PTR_SET_VALUE(totalPlayDuration_, totalPlayDuration) };


      // uv Field Functions 
      bool hasUv() const { return this->uv_ != nullptr;};
      void deleteUv() { this->uv_ = nullptr;};
      inline double getUv() const { DARABONBA_PTR_GET_DEFAULT(uv_, 0.0) };
      inline DataList& setUv(double uv) { DARABONBA_PTR_SET_VALUE(uv_, uv) };


      // vv Field Functions 
      bool hasVv() const { return this->vv_ != nullptr;};
      void deleteVv() { this->vv_ = nullptr;};
      inline double getVv() const { DARABONBA_PTR_GET_DEFAULT(vv_, 0.0) };
      inline DataList& setVv(double vv) { DARABONBA_PTR_SET_VALUE(vv_, vv) };


    protected:
      shared_ptr<double> avgPerCompletionVv_ {};
      shared_ptr<double> avgPerPlayDuration_ {};
      shared_ptr<double> avgPerVv_ {};
      shared_ptr<double> avgPlayBitrate_ {};
      shared_ptr<double> avgPlayDuration_ {};
      shared_ptr<double> avgStartBitrate_ {};
      shared_ptr<double> avgVideoDuration_ {};
      shared_ptr<double> completionRate_ {};
      shared_ptr<double> completionVv_ {};
      shared_ptr<string> dimension_ {};
      shared_ptr<double> errorCount100s_ {};
      shared_ptr<double> firstFrame_ {};
      shared_ptr<double> jumpRate5s_ {};
      shared_ptr<double> playFailRate_ {};
      shared_ptr<double> realVv_ {};
      shared_ptr<double> secondPlayRate_ {};
      shared_ptr<double> seedFailRate_ {};
      shared_ptr<double> seekDuration_ {};
      shared_ptr<double> slowPlayRate_ {};
      shared_ptr<string> stuckCount100s_ {};
      shared_ptr<double> stuckCountRate_ {};
      shared_ptr<double> stuckDuration100s_ {};
      shared_ptr<string> timeStamp_ {};
      shared_ptr<double> totalPlayDuration_ {};
      shared_ptr<double> uv_ {};
      shared_ptr<double> vv_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->extend_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCnt_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVodPlayerMetricDataResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVodPlayerMetricDataResponseBody::DataList>) };
    inline vector<DescribeVodPlayerMetricDataResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVodPlayerMetricDataResponseBody::DataList>) };
    inline DescribeVodPlayerMetricDataResponseBody& setDataList(const vector<DescribeVodPlayerMetricDataResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVodPlayerMetricDataResponseBody& setDataList(vector<DescribeVodPlayerMetricDataResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const DescribeVodPlayerMetricDataResponseBody::Extend & getExtend() const { DARABONBA_PTR_GET_CONST(extend_, DescribeVodPlayerMetricDataResponseBody::Extend) };
    inline DescribeVodPlayerMetricDataResponseBody::Extend getExtend() { DARABONBA_PTR_GET(extend_, DescribeVodPlayerMetricDataResponseBody::Extend) };
    inline DescribeVodPlayerMetricDataResponseBody& setExtend(const DescribeVodPlayerMetricDataResponseBody::Extend & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline DescribeVodPlayerMetricDataResponseBody& setExtend(DescribeVodPlayerMetricDataResponseBody::Extend && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeVodPlayerMetricDataResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVodPlayerMetricDataResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodPlayerMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCnt Field Functions 
    bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
    void deleteTotalCnt() { this->totalCnt_ = nullptr;};
    inline int64_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0L) };
    inline DescribeVodPlayerMetricDataResponseBody& setTotalCnt(int64_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


  protected:
    shared_ptr<vector<DescribeVodPlayerMetricDataResponseBody::DataList>> dataList_ {};
    shared_ptr<DescribeVodPlayerMetricDataResponseBody::Extend> extend_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
