// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeClassListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(MasterHa, masterHa_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(MasterHa, masterHa_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeClassListRequest() = default ;
    DescribeClassListRequest(const DescribeClassListRequest &) = default ;
    DescribeClassListRequest(DescribeClassListRequest &&) = default ;
    DescribeClassListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassListRequest() = default ;
    DescribeClassListRequest& operator=(const DescribeClassListRequest &) = default ;
    DescribeClassListRequest& operator=(DescribeClassListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->masterHa_ == nullptr && this->orderType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeClassListRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // masterHa Field Functions 
    bool hasMasterHa() const { return this->masterHa_ != nullptr;};
    void deleteMasterHa() { this->masterHa_ = nullptr;};
    inline string getMasterHa() const { DARABONBA_PTR_GET_DEFAULT(masterHa_, "") };
    inline DescribeClassListRequest& setMasterHa(string masterHa) { DARABONBA_PTR_SET_VALUE(masterHa_, masterHa) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeClassListRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeClassListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeClassListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClassListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClassListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeClassListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeClassListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The commodity code. Valid values:
    // 
    // - polardb_sub: subscription for the Chinese mainland.
    // 
    // - polardb_sub_intl: subscription for regions in Hong Kong (China) and outside the Chinese mainland.
    // 
    // - polardb_payg: pay-as-you-go for the Chinese mainland.
    // 
    // - polardb_payg_intl: pay-as-you-go for regions in Hong Kong (China) and outside the Chinese mainland.
    // 
    // - polardb_sub_jushita: Jushita subscription.
    // 
    // - polardb_payg_jushita: Jushita pay-as-you-go.
    // 
    // - polardb_sub_cainiao: Cainiao subscription.
    // 
    // - polardb_payg_cainiao: Cainiao pay-as-you-go.
    // 
    // > * If you use an Alibaba Cloud China site account, you can view only the commodity codes for the Chinese mainland.
    // >
    // > * If you use an Alibaba Cloud international site account, you can view only the commodity codes for regions outside the Chinese mainland.
    // >
    // > * If you use a Jushita account, you can view only the commodity codes for Jushita.
    // >
    // > * If you use a Cainiao account, you can view only the commodity codes for Cainiao.
    // 
    // This parameter is required.
    shared_ptr<string> commodityCode_ {};
    // The number of nodes. Valid values:
    // 
    // - single: single node.
    // 
    // - cluster: cluster.
    // 
    // - all: single node and cluster.
    shared_ptr<string> masterHa_ {};
    // The order type. Valid values:
    // 
    // - BUY: new purchase.
    // 
    // - UPGRADE: changes the configuration.
    // 
    // - RENEW: renews the instance.
    // 
    // - CONVERT: changes the billing method.
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // > This parameter is required if you use an Alibaba Cloud international site account.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
