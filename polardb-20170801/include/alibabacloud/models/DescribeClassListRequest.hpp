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
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->masterHa_ != nullptr && this->orderType_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeClassListRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // masterHa Field Functions 
    bool hasMasterHa() const { return this->masterHa_ != nullptr;};
    void deleteMasterHa() { this->masterHa_ = nullptr;};
    inline string masterHa() const { DARABONBA_PTR_GET_DEFAULT(masterHa_, "") };
    inline DescribeClassListRequest& setMasterHa(string masterHa) { DARABONBA_PTR_SET_VALUE(masterHa_, masterHa) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeClassListRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeClassListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeClassListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeClassListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeClassListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeClassListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeClassListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The code of the commodity. Valid values:
    // 
    // *   polardb_sub: the subscription cluster in regions in the Chinese mainland
    // *   polardb_sub _intl: the subscription cluster in regions outside the Chinese mainland
    // *   polardb_payg: the pay-as-you-go cluster in regions in the Chinese mainland
    // *   polardb_payg_intl: the pay-as-you-go cluster in regions outside the Chinese mainland
    // *   polardb_sub_jushita: the subscription cluster for CloudTmall
    // *   polardb_payg_jushita: the pay-as-you-go cluster for CloudTmall
    // *   polardb_sub_cainiao: the subscription cluster for Cainiao
    // *   polardb_payg_cainiao: the pay-as-you-go cluster for Cainiao
    // 
    // > *   If you use an Alibaba Cloud account on the China site, you can view only the codes of the commodities that are available in the Chinese mainland.
    // >*   If you are using an Alibaba Cloud international account, you can view only the codes of the commodities that are available outside the Chinese mainland.
    // >*   If you use a CloudTmall account, you can view only the codes of the commodities that are available in CloudTmall.
    // >*   If you use a Cainiao account, you can view only the codes of the commodities that are available in Cainiao.
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The number of nodes. Valid values:
    // 
    // *   single: Standalone Edition.
    // *   cluster: Cluster Edition.
    // *   all: both Standalone Edition and Cluster Edition.
    std::shared_ptr<string> masterHa_ = nullptr;
    // The type of the order. Valid values:
    // 
    // *   BUY: The order is used to purchase a cluster.
    // *   UPGRADE: The order is used to change the specifications of a cluster.
    // *   RENEW: The order is used to renew a cluster.
    // *   CONVERT: The order is used to change the billing method of a cluster.
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
