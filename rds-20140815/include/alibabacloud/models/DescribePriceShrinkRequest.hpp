// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBNode, DBNodeShrink_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceUsedType, instanceUsedType_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_TO_JSON(TimeType, timeType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBNode, DBNodeShrink_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedType, instanceUsedType_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePriceShrinkRequest() = default ;
    DescribePriceShrinkRequest(const DescribePriceShrinkRequest &) = default ;
    DescribePriceShrinkRequest(DescribePriceShrinkRequest &&) = default ;
    DescribePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceShrinkRequest() = default ;
    DescribePriceShrinkRequest& operator=(const DescribePriceShrinkRequest &) = default ;
    DescribePriceShrinkRequest& operator=(DescribePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commodityCode_ == nullptr && this->DBInstanceClass_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr
        && this->DBNodeShrink_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->instanceUsedType_ == nullptr && this->orderType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr && this->quantity_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->serverlessConfigShrink_ == nullptr && this->timeType_ == nullptr && this->usedTime_ == nullptr
        && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribePriceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribePriceShrinkRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline DescribePriceShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribePriceShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline int32_t getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, 0) };
    inline DescribePriceShrinkRequest& setDBInstanceStorage(int32_t DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribePriceShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBNodeShrink Field Functions 
    bool hasDBNodeShrink() const { return this->DBNodeShrink_ != nullptr;};
    void deleteDBNodeShrink() { this->DBNodeShrink_ = nullptr;};
    inline string getDBNodeShrink() const { DARABONBA_PTR_GET_DEFAULT(DBNodeShrink_, "") };
    inline DescribePriceShrinkRequest& setDBNodeShrink(string DBNodeShrink) { DARABONBA_PTR_SET_VALUE(DBNodeShrink_, DBNodeShrink) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribePriceShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribePriceShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceUsedType Field Functions 
    bool hasInstanceUsedType() const { return this->instanceUsedType_ != nullptr;};
    void deleteInstanceUsedType() { this->instanceUsedType_ = nullptr;};
    inline int32_t getInstanceUsedType() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedType_, 0) };
    inline DescribePriceShrinkRequest& setInstanceUsedType(int32_t instanceUsedType) { DARABONBA_PTR_SET_VALUE(instanceUsedType_, instanceUsedType) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribePriceShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribePriceShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribePriceShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribePriceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline DescribePriceShrinkRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePriceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribePriceShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribePriceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string getServerlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline DescribePriceShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline DescribePriceShrinkRequest& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline DescribePriceShrinkRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribePriceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The commodity code of the instance. Valid values:
    // 
    // * **bards**: pay-as-you-go primary instance (China site)
    // * **rds** (default): subscription primary instance (China site)
    // * **rords**: pay-as-you-go read-only instance (China site)
    // * **rds_rordspre_public_cn**: subscription read-only instance (China site)
    // * **bards_intl**: pay-as-you-go primary instance (international site)
    // * **rds_intl**: subscription primary instance (international site)
    // * **rords_intl**: pay-as-you-go read-only instance (international site)
    // * **rds_rordspre_public_intl**: subscription read-only instance (international site)
    // 
    // > This parameter is required when you query the price of a read-only instance.
    shared_ptr<string> commodityCode_ {};
    // The instance type. For more information, see [Primary instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceClass_ {};
    // Instance ID of the instance for which you want to change the specifications or renew.
    // > - This parameter is required when you query the price for a specification change or renewal.
    // > - If the instance is a read-only instance, specify instance ID of its primary instance.
    shared_ptr<string> DBInstanceId_ {};
    // The instance storage space. Unit: GB. The value increases in increments of 5 GB. For more information about the value range, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    // 
    // This parameter is required.
    shared_ptr<int32_t> DBInstanceStorage_ {};
    // The instance storage type. Valid values:
    // * **general_essd**: Premium ESSD
    // * **local_ssd**: Premium Local SSDs
    // * **cloud_ssd**: standard SSD
    // * **cloud_essd**: PL1 ESSD cloud disk
    // * **cloud_essd2**: PL2 ESSD cloud disk
    // * **cloud_essd3**: PL3 ESSD cloud disk
    shared_ptr<string> DBInstanceStorageType_ {};
    // The node information.
    // > This parameter is used for ApsaraDB RDS for MySQL instances in the cluster edition.
    shared_ptr<string> DBNodeShrink_ {};
    // The database engine. Valid values:
    // * **MySQL**
    // * **SQLServer**
    // * **PostgreSQL**
    // * **MariaDB**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // <props="china">The database engine version. Valid values:
    // - **MySQL**: **5.5**, **5.6**, **5.7**, **8.0**
    // - **SQL Server**: **08r2_ent_ha** (cloud disk, discontinued), **2008r2** (Premium Local SSDs, discontinued), **2012** (Enterprise Edition Basic), **2012_ent_ha**, **2012_std_ha**, **2012_web**, **2014_ent_ha**, **2014_std_ha**, **2016_ent_ha**, **2016_std_ha**, **2016_web**, **2017_ent**, **2017_std_ha**, **2017_web**, **2019_ent**, **2019_std_ha**, **2019_web**, **2022_ent**, **2022_std_ha**, **2022_web**
    // - **PostgreSQL**: **10.0**, **11.0**, **12.0**, **13.0**, **14.0**, **15.0**
    // - **MariaDB**: **10.3**
    // 
    // 
    // 
    // <props="intl">The database engine version. Valid values:
    // - **MySQL**: **5.5**, **5.6**, **5.7**, **8.0**
    // - **SQL Server**: **08r2_ent_ha** (cloud disk, discontinued), **2008r2** (Premium Local SSDs, discontinued), **2012** (Enterprise Edition Basic), **2012_ent_ha**, **2012_std_ha**, **2012_web**, **2014_ent_ha**, **2014_std_ha**, **2016_ent_ha**, **2016_std_ha**, **2016_web**, **2017_ent**, **2017_std_ha**, **2017_web**, **2019_ent**, **2019_std_ha**, **2019_web**, **2022_ent**, **2022_std_ha**, **2022_web**
    // - **PostgreSQL**: **10.0**, **11.0**, **12.0**, **13.0**, **14.0**, **15.0**
    // - **MariaDB**: **10.3**
    // 
    // > For SQL Server instances, `_ent` indicates Enterprise Edition (Cluster), `_ent_ha` indicates Enterprise Edition, `_std_ha` indicates Standard Edition, and `_web` indicates Web Edition.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The instance type. Valid values:
    // * **0**: primary instance
    // * **3**: read-only instance
    shared_ptr<int32_t> instanceUsedType_ {};
    // The order type. Valid values:
    // * **BUY**: purchase
    // * **RENEW**: renewal
    // * **UPGRADE**: upgrade
    // * **DOWNGRADE**: downgrade
    shared_ptr<string> orderType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method of the instance. Valid values:
    // * **Prepaid**: subscription
    // * **Postpaid**: pay-as-you-go
    shared_ptr<string> payType_ {};
    // The number of instances to purchase. Valid values: **0 to 30**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
    // The region ID. You can call DescribeRegions to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The settings of the serverless ApsaraDB RDS instance.
    // > MariaDB does not support serverless instances.
    shared_ptr<string> serverlessConfigShrink_ {};
    // The subscription type. This parameter is required when **CommodityCode** is set to **rds**, **rds_rordspre_public_cn**, **rds_intl**, or **rds_rordspre_public_intl**. Valid values:
    // * **Year**: yearly subscription
    // * **Month**: monthly subscription
    shared_ptr<string> timeType_ {};
    // The subscription duration. Valid values:
    // * If **TimeType** is set to **Year**, the value of UsedTime ranges from **1 to 100**.
    // * If **TimeType** is set to **Month**, the value of UsedTime ranges from **1 to 999**.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> usedTime_ {};
    // The zone ID of the primary node. You can call DescribeRegions to query the most recent zone list.
    // 
    // > If you specify a VPC and a vSwitch, this parameter is required to match the zone of the specified vSwitch.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
