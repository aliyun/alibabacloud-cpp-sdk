// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(OrderParamOut, orderParamOut_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(OrderParamOut, orderParamOut_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribePriceRequest() = default ;
    DescribePriceRequest(const DescribePriceRequest &) = default ;
    DescribePriceRequest(DescribePriceRequest &&) = default ;
    DescribePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequest() = default ;
    DescribePriceRequest& operator=(const DescribePriceRequest &) = default ;
    DescribePriceRequest& operator=(DescribePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessInfo_ == nullptr
        && this->commodityCode_ == nullptr && this->couponNo_ == nullptr && this->DBInstances_ == nullptr && this->orderParamOut_ == nullptr && this->orderType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->productCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline DescribePriceRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribePriceRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline DescribePriceRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline string getDBInstances() const { DARABONBA_PTR_GET_DEFAULT(DBInstances_, "") };
    inline DescribePriceRequest& setDBInstances(string DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };


    // orderParamOut Field Functions 
    bool hasOrderParamOut() const { return this->orderParamOut_ != nullptr;};
    void deleteOrderParamOut() { this->orderParamOut_ = nullptr;};
    inline string getOrderParamOut() const { DARABONBA_PTR_GET_DEFAULT(orderParamOut_, "") };
    inline DescribePriceRequest& setOrderParamOut(string orderParamOut) { DARABONBA_PTR_SET_VALUE(orderParamOut_, orderParamOut) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribePriceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribePriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePriceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribePriceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePriceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePriceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The business information. This is an additional parameter.
    shared_ptr<string> businessInfo_ {};
    // The commodity code of the instance. Valid values:
    // 
    // - **dds**: pay-as-you-go ReplicaSet instance.
    // 
    // - **badds**: subscription ReplicaSet instance.
    // 
    // - **dds_sharding**: pay-as-you-go sharded cluster instance.
    // 
    // - **badds_sharding**: subscription sharded cluster instance.
    // 
    // - **badds_sharding_intl**: subscription sharded cluster instance on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    // 
    // - **dds_sharding_intl**: pay-as-you-go sharded cluster instance on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    // 
    // - **badds_sharding_jp**: subscription sharded cluster instance on the Alibaba Cloud Japan Website.
    // 
    // - **badds_intl**: subscription ReplicaSet instance on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    // 
    // - **dds_intl**: pay-as-you-go ReplicaSet instance on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    shared_ptr<string> commodityCode_ {};
    // Specifies whether to use a coupon. Valid values:
    // 
    // - **default** or **null** (default): A coupon is used.
    // 
    // - **youhuiquan_promotion_option_id_for_blank**: A coupon is not used.
    shared_ptr<string> couponNo_ {};
    // A JSON string that contains information about the instance. For more information about the parameters and JSON examples, see [DBInstances parameter of the DescribePrice operation](https://help.aliyun.com/document_detail/197291.html).
    // 
    // This parameter is required.
    shared_ptr<string> DBInstances_ {};
    // Specifies whether to return the order parameters. Valid values:
    // 
    // - **false** (default): The order parameters are not returned.
    // 
    // - **true**: The order parameters are returned.
    shared_ptr<string> orderParamOut_ {};
    // The order type. Valid values:
    // 
    // - **BUY**: Creates an instance.
    // 
    // - **UPGRADE**: Changes the configuration of an instance.
    // 
    // - **RENEW**: Renews an instance.
    // 
    // This parameter is required.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The product code. The default value is **dds**.
    shared_ptr<string> productCode_ {};
    // The region ID. Call the [DescribeRegions](https://help.aliyun.com/document_detail/61933.html) operation to query the region ID.
    shared_ptr<string> regionId_ {};
    // The resource group ID. For more information about resource groups, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
