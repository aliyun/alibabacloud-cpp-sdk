// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRTSNativeSDKPlayTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKPlayTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PlayTimeData, playTimeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKPlayTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PlayTimeData, playTimeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKPlayTimeResponseBody() = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody(const DescribeRTSNativeSDKPlayTimeResponseBody &) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody(DescribeRTSNativeSDKPlayTimeResponseBody &&) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKPlayTimeResponseBody() = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody& operator=(const DescribeRTSNativeSDKPlayTimeResponseBody &) = default ;
    DescribeRTSNativeSDKPlayTimeResponseBody& operator=(DescribeRTSNativeSDKPlayTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlayTimeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlayTimeData& obj) { 
        DARABONBA_PTR_TO_JSON(PlayTime, playTime_);
        DARABONBA_PTR_TO_JSON(StallTime, stallTime_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, PlayTimeData& obj) { 
        DARABONBA_PTR_FROM_JSON(PlayTime, playTime_);
        DARABONBA_PTR_FROM_JSON(StallTime, stallTime_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      PlayTimeData() = default ;
      PlayTimeData(const PlayTimeData &) = default ;
      PlayTimeData(PlayTimeData &&) = default ;
      PlayTimeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlayTimeData() = default ;
      PlayTimeData& operator=(const PlayTimeData &) = default ;
      PlayTimeData& operator=(PlayTimeData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->playTime_ == nullptr
        && this->stallTime_ == nullptr && this->timeStamp_ == nullptr; };
      // playTime Field Functions 
      bool hasPlayTime() const { return this->playTime_ != nullptr;};
      void deletePlayTime() { this->playTime_ = nullptr;};
      inline string getPlayTime() const { DARABONBA_PTR_GET_DEFAULT(playTime_, "") };
      inline PlayTimeData& setPlayTime(string playTime) { DARABONBA_PTR_SET_VALUE(playTime_, playTime) };


      // stallTime Field Functions 
      bool hasStallTime() const { return this->stallTime_ != nullptr;};
      void deleteStallTime() { this->stallTime_ = nullptr;};
      inline string getStallTime() const { DARABONBA_PTR_GET_DEFAULT(stallTime_, "") };
      inline PlayTimeData& setStallTime(string stallTime) { DARABONBA_PTR_SET_VALUE(stallTime_, stallTime) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline PlayTimeData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The average playback duration within the period of time.
      shared_ptr<string> playTime_ {};
      // The average stuttering duration within the period of time.
      shared_ptr<string> stallTime_ {};
      // The timestamp of the returned data.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->endTime_ == nullptr && this->playTimeData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // playTimeData Field Functions 
    bool hasPlayTimeData() const { return this->playTimeData_ != nullptr;};
    void deletePlayTimeData() { this->playTimeData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData> & getPlayTimeData() const { DARABONBA_PTR_GET_CONST(playTimeData_, vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData>) };
    inline vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData> getPlayTimeData() { DARABONBA_PTR_GET(playTimeData_, vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData>) };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setPlayTimeData(const vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData> & playTimeData) { DARABONBA_PTR_SET_VALUE(playTimeData_, playTimeData) };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setPlayTimeData(vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData> && playTimeData) { DARABONBA_PTR_SET_RVALUE(playTimeData_, playTimeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKPlayTimeResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    shared_ptr<string> dataInterval_ {};
    // The end of the time range for which the data was queried.
    shared_ptr<string> endTime_ {};
    // The average playback duration and average stuttering duration at each interval. Unit: milliseconds.
    shared_ptr<vector<DescribeRTSNativeSDKPlayTimeResponseBody::PlayTimeData>> playTimeData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
