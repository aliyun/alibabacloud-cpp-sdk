// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERWAFLOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERWAFLOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserWafLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserWafLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStatus, logStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatusUpdateTime, statusUpdateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserWafLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStatus, logStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatusUpdateTime, statusUpdateTime_);
    };
    DescribeUserWafLogStatusResponseBody() = default ;
    DescribeUserWafLogStatusResponseBody(const DescribeUserWafLogStatusResponseBody &) = default ;
    DescribeUserWafLogStatusResponseBody(DescribeUserWafLogStatusResponseBody &&) = default ;
    DescribeUserWafLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserWafLogStatusResponseBody() = default ;
    DescribeUserWafLogStatusResponseBody& operator=(const DescribeUserWafLogStatusResponseBody &) = default ;
    DescribeUserWafLogStatusResponseBody& operator=(DescribeUserWafLogStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logRegionId_ == nullptr
        && this->logStatus_ == nullptr && this->requestId_ == nullptr && this->statusUpdateTime_ == nullptr; };
    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string getLogRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline DescribeUserWafLogStatusResponseBody& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStatus Field Functions 
    bool hasLogStatus() const { return this->logStatus_ != nullptr;};
    void deleteLogStatus() { this->logStatus_ = nullptr;};
    inline string getLogStatus() const { DARABONBA_PTR_GET_DEFAULT(logStatus_, "") };
    inline DescribeUserWafLogStatusResponseBody& setLogStatus(string logStatus) { DARABONBA_PTR_SET_VALUE(logStatus_, logStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserWafLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statusUpdateTime Field Functions 
    bool hasStatusUpdateTime() const { return this->statusUpdateTime_ != nullptr;};
    void deleteStatusUpdateTime() { this->statusUpdateTime_ = nullptr;};
    inline int64_t getStatusUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(statusUpdateTime_, 0L) };
    inline DescribeUserWafLogStatusResponseBody& setStatusUpdateTime(int64_t statusUpdateTime) { DARABONBA_PTR_SET_VALUE(statusUpdateTime_, statusUpdateTime) };


  protected:
    // The ID of the region where WAF logs are stored. Valid values:
    // 
    // *   **cn-hangzhou**: China (Hangzhou).
    // *   **cn-beijing**: China (Beijing).
    // *   **cn-hongkong**: China (Hong Kong).
    // *   **ap-southeast-1**: Singapore.
    // *   **ap-southeast-3**: Malaysia (Kuala Lumpur).
    // *   **ap-southeast-5**: Indonesia (Jakarta).
    // *   **ap-southeast-6**: Philippines (Manila).
    // *   **ap-southeast-7**: Thailand (Bangkok).
    // *   **me-east-1**: UAE (Dubai).
    // *   **eu-central-1**: Germany (Frankfurt).
    // *   **us-east-1**: US (Virginia).
    // *   **us-west-1**: US (Silicon Valley).
    // *   **ap-northeast-1**: Japan (Tokyo).
    // *   **ap-northeast-2**: South Korea (Seoul).
    // *   **eu-west-1**: UK (London).
    // *   **cn-hangzhou-finance**: China East 1 Finance.
    // *   **cn-shanghai-finance-1**: China East 2 Finance.
    // *   **cn-shenzhen-finance**: China South 1 Finance.
    // 
    // >  The China East 1 Finance, China East 2 Finance, and China South 1 Finance regions are available only for Alibaba Finance Cloud users. Alibaba Finance Cloud users are also limited to storing logs within these specific regions.
    shared_ptr<string> logRegionId_ {};
    // The status of WAF logs.
    // 
    // *   **initializing**
    // *   **initialize_failed**
    // *   **normal**
    // *   **releasing**
    // *   **release_failed**
    shared_ptr<string> logStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The time when the log status was modified. Unit: milliseconds.
    shared_ptr<int64_t> statusUpdateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
