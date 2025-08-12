// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKVVDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRTSNativeSDKVvDataResponseBodyVvData.hpp>
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
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->vvData_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKVvDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vvData Field Functions 
    bool hasVvData() const { return this->vvData_ != nullptr;};
    void deleteVvData() { this->vvData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKVvDataResponseBodyVvData> & vvData() const { DARABONBA_PTR_GET_CONST(vvData_, vector<DescribeRTSNativeSDKVvDataResponseBodyVvData>) };
    inline vector<DescribeRTSNativeSDKVvDataResponseBodyVvData> vvData() { DARABONBA_PTR_GET(vvData_, vector<DescribeRTSNativeSDKVvDataResponseBodyVvData>) };
    inline DescribeRTSNativeSDKVvDataResponseBody& setVvData(const vector<DescribeRTSNativeSDKVvDataResponseBodyVvData> & vvData) { DARABONBA_PTR_SET_VALUE(vvData_, vvData) };
    inline DescribeRTSNativeSDKVvDataResponseBody& setVvData(vector<DescribeRTSNativeSDKVvDataResponseBodyVvData> && vvData) { DARABONBA_PTR_SET_RVALUE(vvData_, vvData) };


  protected:
    // The time granularity.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The end of the time range for which the data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range for which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
    // The total number of playbacks and the number of successful playbacks at each interval.
    std::shared_ptr<vector<DescribeRTSNativeSDKVvDataResponseBodyVvData>> vvData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
