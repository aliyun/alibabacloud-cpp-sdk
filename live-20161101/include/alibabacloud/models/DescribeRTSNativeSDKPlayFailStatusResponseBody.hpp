// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYFAILSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYFAILSTATUSRESPONSEBODY_HPP_
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
  class DescribeRTSNativeSDKPlayFailStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKPlayFailStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PlayFailStatus, playFailStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKPlayFailStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PlayFailStatus, playFailStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRTSNativeSDKPlayFailStatusResponseBody() = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBody(const DescribeRTSNativeSDKPlayFailStatusResponseBody &) = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBody(DescribeRTSNativeSDKPlayFailStatusResponseBody &&) = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKPlayFailStatusResponseBody() = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBody& operator=(const DescribeRTSNativeSDKPlayFailStatusResponseBody &) = default ;
    DescribeRTSNativeSDKPlayFailStatusResponseBody& operator=(DescribeRTSNativeSDKPlayFailStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PlayFailStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlayFailStatus& obj) { 
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(V20001, v20001_);
        DARABONBA_PTR_TO_JSON(V20002, v20002_);
        DARABONBA_PTR_TO_JSON(V20011, v20011_);
        DARABONBA_PTR_TO_JSON(V20012, v20012_);
        DARABONBA_PTR_TO_JSON(V20013, v20013_);
        DARABONBA_PTR_TO_JSON(V20052, v20052_);
      };
      friend void from_json(const Darabonba::Json& j, PlayFailStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(V20001, v20001_);
        DARABONBA_PTR_FROM_JSON(V20002, v20002_);
        DARABONBA_PTR_FROM_JSON(V20011, v20011_);
        DARABONBA_PTR_FROM_JSON(V20012, v20012_);
        DARABONBA_PTR_FROM_JSON(V20013, v20013_);
        DARABONBA_PTR_FROM_JSON(V20052, v20052_);
      };
      PlayFailStatus() = default ;
      PlayFailStatus(const PlayFailStatus &) = default ;
      PlayFailStatus(PlayFailStatus &&) = default ;
      PlayFailStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlayFailStatus() = default ;
      PlayFailStatus& operator=(const PlayFailStatus &) = default ;
      PlayFailStatus& operator=(PlayFailStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->v20001_ == nullptr && this->v20002_ == nullptr && this->v20011_ == nullptr && this->v20012_ == nullptr && this->v20013_ == nullptr
        && this->v20052_ == nullptr; };
      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline PlayFailStatus& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // v20001 Field Functions 
      bool hasV20001() const { return this->v20001_ != nullptr;};
      void deleteV20001() { this->v20001_ = nullptr;};
      inline string getV20001() const { DARABONBA_PTR_GET_DEFAULT(v20001_, "") };
      inline PlayFailStatus& setV20001(string v20001) { DARABONBA_PTR_SET_VALUE(v20001_, v20001) };


      // v20002 Field Functions 
      bool hasV20002() const { return this->v20002_ != nullptr;};
      void deleteV20002() { this->v20002_ = nullptr;};
      inline string getV20002() const { DARABONBA_PTR_GET_DEFAULT(v20002_, "") };
      inline PlayFailStatus& setV20002(string v20002) { DARABONBA_PTR_SET_VALUE(v20002_, v20002) };


      // v20011 Field Functions 
      bool hasV20011() const { return this->v20011_ != nullptr;};
      void deleteV20011() { this->v20011_ = nullptr;};
      inline string getV20011() const { DARABONBA_PTR_GET_DEFAULT(v20011_, "") };
      inline PlayFailStatus& setV20011(string v20011) { DARABONBA_PTR_SET_VALUE(v20011_, v20011) };


      // v20012 Field Functions 
      bool hasV20012() const { return this->v20012_ != nullptr;};
      void deleteV20012() { this->v20012_ = nullptr;};
      inline string getV20012() const { DARABONBA_PTR_GET_DEFAULT(v20012_, "") };
      inline PlayFailStatus& setV20012(string v20012) { DARABONBA_PTR_SET_VALUE(v20012_, v20012) };


      // v20013 Field Functions 
      bool hasV20013() const { return this->v20013_ != nullptr;};
      void deleteV20013() { this->v20013_ = nullptr;};
      inline string getV20013() const { DARABONBA_PTR_GET_DEFAULT(v20013_, "") };
      inline PlayFailStatus& setV20013(string v20013) { DARABONBA_PTR_SET_VALUE(v20013_, v20013) };


      // v20052 Field Functions 
      bool hasV20052() const { return this->v20052_ != nullptr;};
      void deleteV20052() { this->v20052_ = nullptr;};
      inline string getV20052() const { DARABONBA_PTR_GET_DEFAULT(v20052_, "") };
      inline PlayFailStatus& setV20052(string v20052) { DARABONBA_PTR_SET_VALUE(v20052_, v20052) };


    protected:
      // The timestamp of the returned data.
      shared_ptr<string> timeStamp_ {};
      // The status code that indicates failed DNS resolution.
      shared_ptr<string> v20001_ {};
      // The status code that indicates failed authentication.
      shared_ptr<string> v20002_ {};
      // The status code that indicates a connection signaling timeout.
      shared_ptr<string> v20011_ {};
      // The status code that indicates a subscription signaling error.
      shared_ptr<string> v20012_ {};
      // The status code indicating that the stream to subscribe to does not exist.
      shared_ptr<string> v20013_ {};
      // The status code that indicates a media packet collection timeout.
      shared_ptr<string> v20052_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->endTime_ == nullptr && this->playFailStatus_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // playFailStatus Field Functions 
    bool hasPlayFailStatus() const { return this->playFailStatus_ != nullptr;};
    void deletePlayFailStatus() { this->playFailStatus_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus> & getPlayFailStatus() const { DARABONBA_PTR_GET_CONST(playFailStatus_, vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus>) };
    inline vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus> getPlayFailStatus() { DARABONBA_PTR_GET(playFailStatus_, vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus>) };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setPlayFailStatus(const vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus> & playFailStatus) { DARABONBA_PTR_SET_VALUE(playFailStatus_, playFailStatus) };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setPlayFailStatus(vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus> && playFailStatus) { DARABONBA_PTR_SET_RVALUE(playFailStatus_, playFailStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    shared_ptr<string> dataInterval_ {};
    // The end of the time range for which the data was queried.
    shared_ptr<string> endTime_ {};
    // The number of error status codes at each interval.
    shared_ptr<vector<DescribeRTSNativeSDKPlayFailStatusResponseBody::PlayFailStatus>> playFailStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
