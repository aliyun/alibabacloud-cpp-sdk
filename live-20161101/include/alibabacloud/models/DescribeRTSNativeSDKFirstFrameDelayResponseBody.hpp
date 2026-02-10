// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMEDELAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMEDELAYRESPONSEBODY_HPP_
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
  class DescribeRTSNativeSDKFirstFrameDelayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKFirstFrameDelayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FrameDelayData, frameDelayData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKFirstFrameDelayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FrameDelayData, frameDelayData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKFirstFrameDelayResponseBody() = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBody(const DescribeRTSNativeSDKFirstFrameDelayResponseBody &) = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBody(DescribeRTSNativeSDKFirstFrameDelayResponseBody &&) = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKFirstFrameDelayResponseBody() = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBody& operator=(const DescribeRTSNativeSDKFirstFrameDelayResponseBody &) = default ;
    DescribeRTSNativeSDKFirstFrameDelayResponseBody& operator=(DescribeRTSNativeSDKFirstFrameDelayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FrameDelayData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FrameDelayData& obj) { 
        DARABONBA_PTR_TO_JSON(FrameDelay, frameDelay_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, FrameDelayData& obj) { 
        DARABONBA_PTR_FROM_JSON(FrameDelay, frameDelay_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      FrameDelayData() = default ;
      FrameDelayData(const FrameDelayData &) = default ;
      FrameDelayData(FrameDelayData &&) = default ;
      FrameDelayData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FrameDelayData() = default ;
      FrameDelayData& operator=(const FrameDelayData &) = default ;
      FrameDelayData& operator=(FrameDelayData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->frameDelay_ == nullptr
        && this->timeStamp_ == nullptr; };
      // frameDelay Field Functions 
      bool hasFrameDelay() const { return this->frameDelay_ != nullptr;};
      void deleteFrameDelay() { this->frameDelay_ = nullptr;};
      inline string getFrameDelay() const { DARABONBA_PTR_GET_DEFAULT(frameDelay_, "") };
      inline FrameDelayData& setFrameDelay(string frameDelay) { DARABONBA_PTR_SET_VALUE(frameDelay_, frameDelay) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline FrameDelayData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The average latency of first frames within the period of time.
      shared_ptr<string> frameDelay_ {};
      // The timestamp of the returned data.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->endTime_ == nullptr && this->frameDelayData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // frameDelayData Field Functions 
    bool hasFrameDelayData() const { return this->frameDelayData_ != nullptr;};
    void deleteFrameDelayData() { this->frameDelayData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData> & getFrameDelayData() const { DARABONBA_PTR_GET_CONST(frameDelayData_, vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData>) };
    inline vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData> getFrameDelayData() { DARABONBA_PTR_GET(frameDelayData_, vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData>) };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBody& setFrameDelayData(const vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData> & frameDelayData) { DARABONBA_PTR_SET_VALUE(frameDelayData_, frameDelayData) };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBody& setFrameDelayData(vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData> && frameDelayData) { DARABONBA_PTR_SET_RVALUE(frameDelayData_, frameDelayData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameDelayResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    shared_ptr<string> dataInterval_ {};
    // The end of the time range for which the data was queried.
    shared_ptr<string> endTime_ {};
    // The average latency of first frames at each interval. Unit: milliseconds.
    shared_ptr<vector<DescribeRTSNativeSDKFirstFrameDelayResponseBody::FrameDelayData>> frameDelayData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
