// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKFIRSTFRAMECOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData.hpp>
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
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->endTime_ == nullptr && return this->firstFrameCostData_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // firstFrameCostData Field Functions 
    bool hasFirstFrameCostData() const { return this->firstFrameCostData_ != nullptr;};
    void deleteFirstFrameCostData() { this->firstFrameCostData_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData> & firstFrameCostData() const { DARABONBA_PTR_GET_CONST(firstFrameCostData_, vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData>) };
    inline vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData> firstFrameCostData() { DARABONBA_PTR_GET(firstFrameCostData_, vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData>) };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setFirstFrameCostData(const vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData> & firstFrameCostData) { DARABONBA_PTR_SET_VALUE(firstFrameCostData_, firstFrameCostData) };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setFirstFrameCostData(vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData> && firstFrameCostData) { DARABONBA_PTR_SET_RVALUE(firstFrameCostData_, firstFrameCostData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKFirstFrameCostResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The end of the time range for which the data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The average latency of first frames at each interval. Unit: milliseconds.
    std::shared_ptr<vector<DescribeRTSNativeSDKFirstFrameCostResponseBodyFirstFrameCostData>> firstFrameCostData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range for which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
