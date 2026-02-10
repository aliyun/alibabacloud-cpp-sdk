// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTRESPONSEBODY_HPP_
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
  class DescribeRTSNativeSDKFirstFrameCostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKFirstFrameCostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FirstFrameCostData, firstFrameCostData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKFirstFrameCostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FirstFrameCostData, firstFrameCostData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKFirstFrameCostResponseBody() = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBody(const DescribeRTSNativeSDKFirstFrameCostResponseBody &) = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBody(DescribeRTSNativeSDKFirstFrameCostResponseBody &&) = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKFirstFrameCostResponseBody() = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBody& operator=(const DescribeRTSNativeSDKFirstFrameCostResponseBody &) = default ;
    DescribeRTSNativeSDKFirstFrameCostResponseBody& operator=(DescribeRTSNativeSDKFirstFrameCostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirstFrameCostData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirstFrameCostData& obj) { 
        DARABONBA_PTR_TO_JSON(Connected, connected_);
        DARABONBA_PTR_TO_JSON(FinishGetStreamInfo, finishGetStreamInfo_);
        DARABONBA_PTR_TO_JSON(FirstFrameComplete, firstFrameComplete_);
        DARABONBA_PTR_TO_JSON(FirstPacket, firstPacket_);
        DARABONBA_PTR_TO_JSON(Initialized, initialized_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, FirstFrameCostData& obj) { 
        DARABONBA_PTR_FROM_JSON(Connected, connected_);
        DARABONBA_PTR_FROM_JSON(FinishGetStreamInfo, finishGetStreamInfo_);
        DARABONBA_PTR_FROM_JSON(FirstFrameComplete, firstFrameComplete_);
        DARABONBA_PTR_FROM_JSON(FirstPacket, firstPacket_);
        DARABONBA_PTR_FROM_JSON(Initialized, initialized_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      FirstFrameCostData() = default ;
      FirstFrameCostData(const FirstFrameCostData &) = default ;
      FirstFrameCostData(FirstFrameCostData &&) = default ;
      FirstFrameCostData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirstFrameCostData() = default ;
      FirstFrameCostData& operator=(const FirstFrameCostData &) = default ;
      FirstFrameCostData& operator=(FirstFrameCostData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->connected_ == nullptr
        && this->finishGetStreamInfo_ == nullptr && this->firstFrameComplete_ == nullptr && this->firstPacket_ == nullptr && this->initialized_ == nullptr && this->timeStamp_ == nullptr; };
      // connected Field Functions 
      bool hasConnected() const { return this->connected_ != nullptr;};
      void deleteConnected() { this->connected_ = nullptr;};
      inline string getConnected() const { DARABONBA_PTR_GET_DEFAULT(connected_, "") };
      inline FirstFrameCostData& setConnected(string connected) { DARABONBA_PTR_SET_VALUE(connected_, connected) };


      // finishGetStreamInfo Field Functions 
      bool hasFinishGetStreamInfo() const { return this->finishGetStreamInfo_ != nullptr;};
      void deleteFinishGetStreamInfo() { this->finishGetStreamInfo_ = nullptr;};
      inline string getFinishGetStreamInfo() const { DARABONBA_PTR_GET_DEFAULT(finishGetStreamInfo_, "") };
      inline FirstFrameCostData& setFinishGetStreamInfo(string finishGetStreamInfo) { DARABONBA_PTR_SET_VALUE(finishGetStreamInfo_, finishGetStreamInfo) };


      // firstFrameComplete Field Functions 
      bool hasFirstFrameComplete() const { return this->firstFrameComplete_ != nullptr;};
      void deleteFirstFrameComplete() { this->firstFrameComplete_ = nullptr;};
      inline string getFirstFrameComplete() const { DARABONBA_PTR_GET_DEFAULT(firstFrameComplete_, "") };
      inline FirstFrameCostData& setFirstFrameComplete(string firstFrameComplete) { DARABONBA_PTR_SET_VALUE(firstFrameComplete_, firstFrameComplete) };


      // firstPacket Field Functions 
      bool hasFirstPacket() const { return this->firstPacket_ != nullptr;};
      void deleteFirstPacket() { this->firstPacket_ = nullptr;};
      inline string getFirstPacket() const { DARABONBA_PTR_GET_DEFAULT(firstPacket_, "") };
      inline FirstFrameCostData& setFirstPacket(string firstPacket) { DARABONBA_PTR_SET_VALUE(firstPacket_, firstPacket) };


      // initialized Field Functions 
      bool hasInitialized() const { return this->initialized_ != nullptr;};
      void deleteInitialized() { this->initialized_ = nullptr;};
      inline string getInitialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, "") };
      inline FirstFrameCostData& setInitialized(string initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline FirstFrameCostData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The time elapsed from initialization to connection establishment.
      shared_ptr<string> connected_ {};
      // The time elapsed from connection establishment to subscription.
      shared_ptr<string> finishGetStreamInfo_ {};
      // The time elapsed from first packet processing to display of the first frame.
      shared_ptr<string> firstFrameComplete_ {};
      // The time elapsed from subscription to first packet processing.
      shared_ptr<string> firstPacket_ {};
      // The time consumed by initialization.
      shared_ptr<string> initialized_ {};
      // The timestamp of the returned data.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->endTime_ == nullptr && this->firstFrameCostData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firstFrameCostData Field Functions 
    bool hasFirstFrameCostData() const { return this->firstFrameCostData_ != nullptr;};
    void deleteFirstFrameCostData() { this->firstFrameCostData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData> & getFirstFrameCostData() const { DARABONBA_PTR_GET_CONST(firstFrameCostData_, vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData>) };
    inline vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData> getFirstFrameCostData() { DARABONBA_PTR_GET(firstFrameCostData_, vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData>) };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setFirstFrameCostData(const vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData> & firstFrameCostData) { DARABONBA_PTR_SET_VALUE(firstFrameCostData_, firstFrameCostData) };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setFirstFrameCostData(vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData> && firstFrameCostData) { DARABONBA_PTR_SET_RVALUE(firstFrameCostData_, firstFrameCostData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    shared_ptr<string> dataInterval_ {};
    // The end of the time range for which the data was queried.
    shared_ptr<string> endTime_ {};
    // The average latency of first frames at each interval. Unit: milliseconds.
    shared_ptr<vector<DescribeRTSNativeSDKFirstFrameCostResponseBody::FirstFrameCostData>> firstFrameCostData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
