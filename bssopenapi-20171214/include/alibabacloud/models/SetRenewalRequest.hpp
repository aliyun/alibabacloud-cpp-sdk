// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETRENEWALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETRENEWALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SetRenewalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetRenewalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIDs, instanceIDs_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RenewalPeriod, renewalPeriod_);
      DARABONBA_PTR_TO_JSON(RenewalPeriodUnit, renewalPeriodUnit_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, SetRenewalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIDs, instanceIDs_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RenewalPeriod, renewalPeriod_);
      DARABONBA_PTR_FROM_JSON(RenewalPeriodUnit, renewalPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    SetRenewalRequest() = default ;
    SetRenewalRequest(const SetRenewalRequest &) = default ;
    SetRenewalRequest(SetRenewalRequest &&) = default ;
    SetRenewalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetRenewalRequest() = default ;
    SetRenewalRequest& operator=(const SetRenewalRequest &) = default ;
    SetRenewalRequest& operator=(SetRenewalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIDs_ != nullptr
        && this->ownerId_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->renewalPeriod_ != nullptr && this->renewalPeriodUnit_ != nullptr
        && this->renewalStatus_ != nullptr && this->subscriptionType_ != nullptr; };
    // instanceIDs Field Functions 
    bool hasInstanceIDs() const { return this->instanceIDs_ != nullptr;};
    void deleteInstanceIDs() { this->instanceIDs_ = nullptr;};
    inline string instanceIDs() const { DARABONBA_PTR_GET_DEFAULT(instanceIDs_, "") };
    inline SetRenewalRequest& setInstanceIDs(string instanceIDs) { DARABONBA_PTR_SET_VALUE(instanceIDs_, instanceIDs) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetRenewalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline SetRenewalRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline SetRenewalRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // renewalPeriod Field Functions 
    bool hasRenewalPeriod() const { return this->renewalPeriod_ != nullptr;};
    void deleteRenewalPeriod() { this->renewalPeriod_ = nullptr;};
    inline int32_t renewalPeriod() const { DARABONBA_PTR_GET_DEFAULT(renewalPeriod_, 0) };
    inline SetRenewalRequest& setRenewalPeriod(int32_t renewalPeriod) { DARABONBA_PTR_SET_VALUE(renewalPeriod_, renewalPeriod) };


    // renewalPeriodUnit Field Functions 
    bool hasRenewalPeriodUnit() const { return this->renewalPeriodUnit_ != nullptr;};
    void deleteRenewalPeriodUnit() { this->renewalPeriodUnit_ = nullptr;};
    inline string renewalPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalPeriodUnit_, "") };
    inline SetRenewalRequest& setRenewalPeriodUnit(string renewalPeriodUnit) { DARABONBA_PTR_SET_VALUE(renewalPeriodUnit_, renewalPeriodUnit) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string renewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline SetRenewalRequest& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline SetRenewalRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the instance. You can enable auto-renewal for up to 100 subscription instances at a time. Separate multiple instance IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIDs_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The auto-renewal period. Valid values:
    // 
    // *   1
    // *   2
    // *   3
    // *   6
    // *   12
    // 
    // >  This parameter is required if the RenewalStatus parameter is set to AutoRenewal.
    std::shared_ptr<int32_t> renewalPeriod_ = nullptr;
    // The unit of the auto-renewal period. Valid values:
    // 
    // *   M: months
    // *   Y: years
    // 
    // >  This parameter is required if the RenewalStatus parameter is set to AutoRenewal.
    std::shared_ptr<string> renewalPeriodUnit_ = nullptr;
    // The status of renewal. Valid values:
    // 
    // *   AutoRenewal: The instance is automatically renewed.
    // *   ManualRenewal: The instance is manually renewed.
    // *   NotRenewal: The instance is not renewed.
    // 
    // This parameter is required.
    std::shared_ptr<string> renewalStatus_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: subscription
    // *   PayAsYouGo: pay-as-you-go
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
