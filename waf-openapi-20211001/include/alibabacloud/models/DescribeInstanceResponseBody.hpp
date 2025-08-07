// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceResponseBodyDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->edition_ != nullptr && this->endTime_ != nullptr && this->inDebt_ != nullptr && this->instanceId_ != nullptr && this->payType_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const DescribeInstanceResponseBodyDetails & details() const { DARABONBA_PTR_GET_CONST(details_, DescribeInstanceResponseBodyDetails) };
    inline DescribeInstanceResponseBodyDetails details() { DARABONBA_PTR_GET(details_, DescribeInstanceResponseBodyDetails) };
    inline DescribeInstanceResponseBody& setDetails(const DescribeInstanceResponseBodyDetails & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeInstanceResponseBody& setDetails(DescribeInstanceResponseBodyDetails && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline DescribeInstanceResponseBody& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeInstanceResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline string inDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, "") };
    inline DescribeInstanceResponseBody& setInDebt(string inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeInstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeInstanceResponseBody& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeInstanceResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The details of the WAF instance.
    std::shared_ptr<DescribeInstanceResponseBodyDetails> details_ = nullptr;
    // The edition of the WAF instance.
    std::shared_ptr<string> edition_ = nullptr;
    // The expiration time of the WAF instance.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Indicates whether the WAF instance has overdue payments. Valid values:
    // 
    // *   **0**: The WAF instance does not have overdue payments.
    // *   **1**: The WAF instance has overdue payments.
    std::shared_ptr<string> inDebt_ = nullptr;
    // The ID of the WAF instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The billing method of the WAF instance. Valid values:
    // 
    // *   **POSTPAY:** The WAF instance uses the pay-as-you-go billing method.
    // *   **PREPAY:** The WAF instance uses the subscription billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The region where the WAF instance resides. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland
    // *   **ap-southeast-1:** outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The purchase time of the WAF instance. The time is in the UNIX timestamp format. The time is displayed in UTC. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the WAF instance. Valid values:
    // 
    // *   **1:** The WAF instance is in a normal state.
    // *   **2:** The WAF instance has expired.
    // *   **3:** The WAF instance has been released.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
