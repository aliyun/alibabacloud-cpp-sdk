// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnServiceResponseBodyOperationLocks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_TO_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_TO_JSON(ChangingDynamicBillingType, changingDynamicBillingType_);
      DARABONBA_PTR_TO_JSON(DynamicBillingType, dynamicBillingType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_TO_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangingAffectTime, changingAffectTime_);
      DARABONBA_PTR_FROM_JSON(ChangingChargeType, changingChargeType_);
      DARABONBA_PTR_FROM_JSON(ChangingDynamicBillingType, changingDynamicBillingType_);
      DARABONBA_PTR_FROM_JSON(DynamicBillingType, dynamicBillingType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(OpeningTime, openingTime_);
      DARABONBA_PTR_FROM_JSON(OperationLocks, operationLocks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnServiceResponseBody() = default ;
    DescribeCdnServiceResponseBody(const DescribeCdnServiceResponseBody &) = default ;
    DescribeCdnServiceResponseBody(DescribeCdnServiceResponseBody &&) = default ;
    DescribeCdnServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnServiceResponseBody() = default ;
    DescribeCdnServiceResponseBody& operator=(const DescribeCdnServiceResponseBody &) = default ;
    DescribeCdnServiceResponseBody& operator=(DescribeCdnServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changingAffectTime_ != nullptr
        && this->changingChargeType_ != nullptr && this->changingDynamicBillingType_ != nullptr && this->dynamicBillingType_ != nullptr && this->instanceId_ != nullptr && this->internetChargeType_ != nullptr
        && this->openingTime_ != nullptr && this->operationLocks_ != nullptr && this->requestId_ != nullptr; };
    // changingAffectTime Field Functions 
    bool hasChangingAffectTime() const { return this->changingAffectTime_ != nullptr;};
    void deleteChangingAffectTime() { this->changingAffectTime_ = nullptr;};
    inline string changingAffectTime() const { DARABONBA_PTR_GET_DEFAULT(changingAffectTime_, "") };
    inline DescribeCdnServiceResponseBody& setChangingAffectTime(string changingAffectTime) { DARABONBA_PTR_SET_VALUE(changingAffectTime_, changingAffectTime) };


    // changingChargeType Field Functions 
    bool hasChangingChargeType() const { return this->changingChargeType_ != nullptr;};
    void deleteChangingChargeType() { this->changingChargeType_ = nullptr;};
    inline string changingChargeType() const { DARABONBA_PTR_GET_DEFAULT(changingChargeType_, "") };
    inline DescribeCdnServiceResponseBody& setChangingChargeType(string changingChargeType) { DARABONBA_PTR_SET_VALUE(changingChargeType_, changingChargeType) };


    // changingDynamicBillingType Field Functions 
    bool hasChangingDynamicBillingType() const { return this->changingDynamicBillingType_ != nullptr;};
    void deleteChangingDynamicBillingType() { this->changingDynamicBillingType_ = nullptr;};
    inline string changingDynamicBillingType() const { DARABONBA_PTR_GET_DEFAULT(changingDynamicBillingType_, "") };
    inline DescribeCdnServiceResponseBody& setChangingDynamicBillingType(string changingDynamicBillingType) { DARABONBA_PTR_SET_VALUE(changingDynamicBillingType_, changingDynamicBillingType) };


    // dynamicBillingType Field Functions 
    bool hasDynamicBillingType() const { return this->dynamicBillingType_ != nullptr;};
    void deleteDynamicBillingType() { this->dynamicBillingType_ = nullptr;};
    inline string dynamicBillingType() const { DARABONBA_PTR_GET_DEFAULT(dynamicBillingType_, "") };
    inline DescribeCdnServiceResponseBody& setDynamicBillingType(string dynamicBillingType) { DARABONBA_PTR_SET_VALUE(dynamicBillingType_, dynamicBillingType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCdnServiceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeCdnServiceResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // openingTime Field Functions 
    bool hasOpeningTime() const { return this->openingTime_ != nullptr;};
    void deleteOpeningTime() { this->openingTime_ = nullptr;};
    inline string openingTime() const { DARABONBA_PTR_GET_DEFAULT(openingTime_, "") };
    inline DescribeCdnServiceResponseBody& setOpeningTime(string openingTime) { DARABONBA_PTR_SET_VALUE(openingTime_, openingTime) };


    // operationLocks Field Functions 
    bool hasOperationLocks() const { return this->operationLocks_ != nullptr;};
    void deleteOperationLocks() { this->operationLocks_ = nullptr;};
    inline const DescribeCdnServiceResponseBodyOperationLocks & operationLocks() const { DARABONBA_PTR_GET_CONST(operationLocks_, DescribeCdnServiceResponseBodyOperationLocks) };
    inline DescribeCdnServiceResponseBodyOperationLocks operationLocks() { DARABONBA_PTR_GET(operationLocks_, DescribeCdnServiceResponseBodyOperationLocks) };
    inline DescribeCdnServiceResponseBody& setOperationLocks(const DescribeCdnServiceResponseBodyOperationLocks & operationLocks) { DARABONBA_PTR_SET_VALUE(operationLocks_, operationLocks) };
    inline DescribeCdnServiceResponseBody& setOperationLocks(DescribeCdnServiceResponseBodyOperationLocks && operationLocks) { DARABONBA_PTR_SET_RVALUE(operationLocks_, operationLocks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the metering method for the next cycle takes effect. The time is displayed in GMT.
    std::shared_ptr<string> changingAffectTime_ = nullptr;
    // The metering method for the next cycle. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-data-transfer
    // *   **PayByBandwidth**: pay-by-bandwidth
    std::shared_ptr<string> changingChargeType_ = nullptr;
    std::shared_ptr<string> changingDynamicBillingType_ = nullptr;
    std::shared_ptr<string> dynamicBillingType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The current metering method. Valid values:
    // 
    // *   **PayByTraffic**: pay-by-data-transfer
    // *   **PayByBandwidth**: pay-by-bandwidth
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The time when the service was activated. The time follows the ISO 8601 standard.
    std::shared_ptr<string> openingTime_ = nullptr;
    // The lock status.
    std::shared_ptr<DescribeCdnServiceResponseBodyOperationLocks> operationLocks_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
