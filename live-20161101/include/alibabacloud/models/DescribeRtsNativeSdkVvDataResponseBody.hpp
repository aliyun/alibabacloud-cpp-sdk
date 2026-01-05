// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATARESPONSEBODY_HPP_
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
  class DescribeRTSNativeSDKVvDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRTSNativeSDKVvDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(VvData, vvData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRTSNativeSDKVvDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(VvData, vvData_);
    };
    DescribeRTSNativeSDKVvDataResponseBody() = default ;
    DescribeRTSNativeSDKVvDataResponseBody(const DescribeRTSNativeSDKVvDataResponseBody &) = default ;
    DescribeRTSNativeSDKVvDataResponseBody(DescribeRTSNativeSDKVvDataResponseBody &&) = default ;
    DescribeRTSNativeSDKVvDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRTSNativeSDKVvDataResponseBody() = default ;
    DescribeRTSNativeSDKVvDataResponseBody& operator=(const DescribeRTSNativeSDKVvDataResponseBody &) = default ;
    DescribeRTSNativeSDKVvDataResponseBody& operator=(DescribeRTSNativeSDKVvDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VvData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VvData& obj) { 
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(VvSuccess, vvSuccess_);
        DARABONBA_PTR_TO_JSON(VvTotal, vvTotal_);
      };
      friend void from_json(const Darabonba::Json& j, VvData& obj) { 
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(VvSuccess, vvSuccess_);
        DARABONBA_PTR_FROM_JSON(VvTotal, vvTotal_);
      };
      VvData() = default ;
      VvData(const VvData &) = default ;
      VvData(VvData &&) = default ;
      VvData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VvData() = default ;
      VvData& operator=(const VvData &) = default ;
      VvData& operator=(VvData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->vvSuccess_ == nullptr && this->vvTotal_ == nullptr; };
      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline VvData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // vvSuccess Field Functions 
      bool hasVvSuccess() const { return this->vvSuccess_ != nullptr;};
      void deleteVvSuccess() { this->vvSuccess_ = nullptr;};
      inline string getVvSuccess() const { DARABONBA_PTR_GET_DEFAULT(vvSuccess_, "") };
      inline VvData& setVvSuccess(string vvSuccess) { DARABONBA_PTR_SET_VALUE(vvSuccess_, vvSuccess) };


      // vvTotal Field Functions 
      bool hasVvTotal() const { return this->vvTotal_ != nullptr;};
      void deleteVvTotal() { this->vvTotal_ = nullptr;};
      inline string getVvTotal() const { DARABONBA_PTR_GET_DEFAULT(vvTotal_, "") };
      inline VvData& setVvTotal(string vvTotal) { DARABONBA_PTR_SET_VALUE(vvTotal_, vvTotal) };


    protected:
      // The timestamp of the returned data.
      shared_ptr<string> timeStamp_ {};
      // The number of successful playbacks within the period of time.
      shared_ptr<string> vvSuccess_ {};
      // The total number of playbacks within the period of time.
      shared_ptr<string> vvTotal_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->vvData_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vvData Field Functions 
    bool hasVvData() const { return this->vvData_ != nullptr;};
    void deleteVvData() { this->vvData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKVvDataResponseBody::VvData> & getVvData() const { DARABONBA_PTR_GET_CONST(vvData_, vector<DescribeRTSNativeSDKVvDataResponseBody::VvData>) };
    inline vector<DescribeRTSNativeSDKVvDataResponseBody::VvData> getVvData() { DARABONBA_PTR_GET(vvData_, vector<DescribeRTSNativeSDKVvDataResponseBody::VvData>) };
    inline DescribeRTSNativeSDKVvDataResponseBody& setVvData(const vector<DescribeRTSNativeSDKVvDataResponseBody::VvData> & vvData) { DARABONBA_PTR_SET_VALUE(vvData_, vvData) };
    inline DescribeRTSNativeSDKVvDataResponseBody& setVvData(vector<DescribeRTSNativeSDKVvDataResponseBody::VvData> && vvData) { DARABONBA_PTR_SET_RVALUE(vvData_, vvData) };


  protected:
    // The time granularity.
    shared_ptr<string> dataInterval_ {};
    // The end of the time range for which the data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range for which the data was queried.
    shared_ptr<string> startTime_ {};
    // The total number of playbacks and the number of successful playbacks at each interval.
    shared_ptr<vector<DescribeRTSNativeSDKVvDataResponseBody::VvData>> vvData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
