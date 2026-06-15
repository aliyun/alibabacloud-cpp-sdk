// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpectedRenewDay, expectedRenewDay_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpectedRenewDay, expectedRenewDay_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeRenewalPriceRequest() = default ;
    DescribeRenewalPriceRequest(const DescribeRenewalPriceRequest &) = default ;
    DescribeRenewalPriceRequest(DescribeRenewalPriceRequest &&) = default ;
    DescribeRenewalPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceRequest() = default ;
    DescribeRenewalPriceRequest& operator=(const DescribeRenewalPriceRequest &) = default ;
    DescribeRenewalPriceRequest& operator=(DescribeRenewalPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expectedRenewDay_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->period_ == nullptr && this->priceUnit_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr; };
    // expectedRenewDay Field Functions 
    bool hasExpectedRenewDay() const { return this->expectedRenewDay_ != nullptr;};
    void deleteExpectedRenewDay() { this->expectedRenewDay_ = nullptr;};
    inline int32_t getExpectedRenewDay() const { DARABONBA_PTR_GET_DEFAULT(expectedRenewDay_, 0) };
    inline DescribeRenewalPriceRequest& setExpectedRenewDay(int32_t expectedRenewDay) { DARABONBA_PTR_SET_VALUE(expectedRenewDay_, expectedRenewDay) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeRenewalPriceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRenewalPriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline DescribeRenewalPriceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // priceUnit Field Functions 
    bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
    void deletePriceUnit() { this->priceUnit_ = nullptr;};
    inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
    inline DescribeRenewalPriceRequest& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRenewalPriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeRenewalPriceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeRenewalPriceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRenewalPriceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeRenewalPriceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The unified expiration day. If you specify this parameter, the system queries the price for renewing the instance until the unified expiration day. Valid values: 1 to 28.
    // 
    // For more information about the unified expiration day feature, see [Unify Instance Expiration Dates](https://help.aliyun.com/document_detail/108486.html).
    // 
    // > You cannot specify both the renewal duration parameters (`Period` and `PeriodUnit`) and the unified expiration day parameter (`ExpectedRenewDay`) at the same time.
    shared_ptr<int32_t> expectedRenewDay_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies the renewal duration. Valid values:
    // 
    // - When the `PriceUnit` parameter is set to `Month`: 1 to 9.
    // 
    // - When the `PriceUnit` parameter is set to `Year`: 1 to 3.
    // 
    // Default Value: 1.
    // 
    // > You cannot specify both the renewal duration parameters (`Period` and `PeriodUnit`) and the unified expiration day parameter (`ExpectedRenewDay`) at the same time.
    shared_ptr<int32_t> period_ {};
    // Specifies the renewal period. Valid values:
    // 
    // - Month: The renewal period is one month.
    // 
    // - Year: The renewal period is one year.
    // 
    // Default Value: Month.
    shared_ptr<string> priceUnit_ {};
    // The Region ID of the instance. You can invoke [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to view the latest list of Alibaba Cloud Regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource ID for which to query the renewal price. When the parameter `ResourceType` is set to `instance`, `ResourceId` can be interpreted as `InstanceId`.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The resource type for which to query the renewal price. Valid value: instance.
    // 
    // Default Value: instance.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
