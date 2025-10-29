// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYFAILSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTSNATIVESDKPLAYFAILSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus.hpp>
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
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->endTime_ == nullptr && return this->playFailStatus_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // playFailStatus Field Functions 
    bool hasPlayFailStatus() const { return this->playFailStatus_ != nullptr;};
    void deletePlayFailStatus() { this->playFailStatus_ = nullptr;};
    inline const vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus> & playFailStatus() const { DARABONBA_PTR_GET_CONST(playFailStatus_, vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus>) };
    inline vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus> playFailStatus() { DARABONBA_PTR_GET(playFailStatus_, vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus>) };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setPlayFailStatus(const vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus> & playFailStatus) { DARABONBA_PTR_SET_VALUE(playFailStatus_, playFailStatus) };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setPlayFailStatus(vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus> && playFailStatus) { DARABONBA_PTR_SET_RVALUE(playFailStatus_, playFailStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRTSNativeSDKPlayFailStatusResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time granularity.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The end of the time range for which the data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The number of error status codes at each interval.
    std::shared_ptr<vector<DescribeRTSNativeSDKPlayFailStatusResponseBodyPlayFailStatus>> playFailStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range for which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
