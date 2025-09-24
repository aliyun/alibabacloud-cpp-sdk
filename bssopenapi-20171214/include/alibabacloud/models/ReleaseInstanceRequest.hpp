// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class ReleaseInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RenewStatus, renewStatus_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    ReleaseInstanceRequest() = default ;
    ReleaseInstanceRequest(const ReleaseInstanceRequest &) = default ;
    ReleaseInstanceRequest(ReleaseInstanceRequest &&) = default ;
    ReleaseInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstanceRequest() = default ;
    ReleaseInstanceRequest& operator=(const ReleaseInstanceRequest &) = default ;
    ReleaseInstanceRequest& operator=(ReleaseInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->ownerId_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->region_ != nullptr && this->renewStatus_ != nullptr
        && this->subscriptionType_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline ReleaseInstanceRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ReleaseInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ReleaseInstanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ReleaseInstanceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ReleaseInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // renewStatus Field Functions 
    bool hasRenewStatus() const { return this->renewStatus_ != nullptr;};
    void deleteRenewStatus() { this->renewStatus_ = nullptr;};
    inline string renewStatus() const { DARABONBA_PTR_GET_DEFAULT(renewStatus_, "") };
    inline ReleaseInstanceRequest& setRenewStatus(string renewStatus) { DARABONBA_PTR_SET_VALUE(renewStatus_, renewStatus) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline ReleaseInstanceRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the instance. Separate multiple IDs with commas (,). A maximum of 100 IDs can be specified.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The method that is used to renew the instance. Valid values:
    // 
    // AutoRenewal: automatically renews the instance.
    // 
    // ManualRenewal: manually renews the instance.
    // 
    // NotRenewal: does not renew the instance.
    std::shared_ptr<string> renewStatus_ = nullptr;
    // The billing method. Valid values:
    // 
    // Subscription: the subscription billing method.
    // 
    // PayAsYouGo: the pay-as-you-go billing method.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
