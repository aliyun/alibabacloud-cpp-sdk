// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PreCheckCreateOrderForDeleteDBNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckCreateOrderForDeleteDBNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeIdShrink_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckCreateOrderForDeleteDBNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeIdShrink_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    PreCheckCreateOrderForDeleteDBNodesShrinkRequest() = default ;
    PreCheckCreateOrderForDeleteDBNodesShrinkRequest(const PreCheckCreateOrderForDeleteDBNodesShrinkRequest &) = default ;
    PreCheckCreateOrderForDeleteDBNodesShrinkRequest(PreCheckCreateOrderForDeleteDBNodesShrinkRequest &&) = default ;
    PreCheckCreateOrderForDeleteDBNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckCreateOrderForDeleteDBNodesShrinkRequest() = default ;
    PreCheckCreateOrderForDeleteDBNodesShrinkRequest& operator=(const PreCheckCreateOrderForDeleteDBNodesShrinkRequest &) = default ;
    PreCheckCreateOrderForDeleteDBNodesShrinkRequest& operator=(PreCheckCreateOrderForDeleteDBNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->businessInfo_ == nullptr && return this->clientToken_ == nullptr && return this->commodityCode_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBNodeIdShrink_ == nullptr
        && return this->engineVersion_ == nullptr && return this->nodeType_ == nullptr && return this->ownerId_ == nullptr && return this->promotionCode_ == nullptr && return this->regionId_ == nullptr
        && return this->resource_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string businessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBNodeIdShrink Field Functions 
    bool hasDBNodeIdShrink() const { return this->DBNodeIdShrink_ != nullptr;};
    void deleteDBNodeIdShrink() { this->DBNodeIdShrink_ = nullptr;};
    inline string DBNodeIdShrink() const { DARABONBA_PTR_GET_DEFAULT(DBNodeIdShrink_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setDBNodeIdShrink(string DBNodeIdShrink) { DARABONBA_PTR_SET_VALUE(DBNodeIdShrink_, DBNodeIdShrink) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string promotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to automatically complete the payment. Valid values:
    // 
    // 1.  **true**: automatically completes the payment. You must make sure that your account balance is sufficient.
    // 2.  **false**: does not automatically complete the payment. An unpaid order is generated.
    // 
    // >  The default value is true. If your account balance is insufficient, you can set the AutoPay parameter to false to generate an unpaid order. Then, you can log on to the ApsaraDB RDS console to complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The additional business information about the instance.
    std::shared_ptr<string> businessInfo_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the generated token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The commodity code. Valid value:
    // 
    // *   **bards**: The instance is a pay-as-you-go primary instance.
    // *   **rds**: The instance is a subscription primary instance.
    // *   **rords**: The instance is a pay-as-you-go read-only instance.
    // *   **rds_rordspre_public_cn**: The instance is a subscription read-only instance.
    // *   **bards_intl**: The instance is a pay-as-you-go primary instance.
    // *   **rds_intl**: The instance is a subscription primary instance.
    // *   **rords_intl**: The instance is a pay-as-you-go read-only instance.
    // *   **rds_rordspre_public_intl**: The instance is a subscription read-only instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The node IDs.
    std::shared_ptr<string> DBNodeIdShrink_ = nullptr;
    // The major engine version of the destination instance. The value of this parameter varies based on the value of **Engine**.
    // 
    // *   Valid values when Engine is set to MySQL: **5.5, 5.6, 5.7, and 8.0**
    // *   Valid values when Engine is set to SQLServer: **2008r2, 08r2_ent_ha, 2012, 2012_ent_ha, 2012_std_ha, 2012_web, 2014_std_ha, 2016_ent_ha, 2016_std_ha, 2016_web, 2017_std_ha, 2017_ent, 2019_std_ha, and 2019_ent**
    // *   Valid values when Engine is set to PostgreSQL: **10.0, 11.0, 12.0, 13.0, 14.0, and 15.0**
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The type of the database node. Valid value:
    // 
    // *   **Master**: the primary node
    // *   **Slave**: the secondary node
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The coupon code.
    std::shared_ptr<string> promotionCode_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/26243.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource of the instance.
    std::shared_ptr<string> resource_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
