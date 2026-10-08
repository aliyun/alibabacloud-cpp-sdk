// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableClassesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableClassesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableClassesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailableClassesRequest() = default ;
    DescribeAvailableClassesRequest(const DescribeAvailableClassesRequest &) = default ;
    DescribeAvailableClassesRequest(DescribeAvailableClassesRequest &&) = default ;
    DescribeAvailableClassesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableClassesRequest() = default ;
    DescribeAvailableClassesRequest& operator=(const DescribeAvailableClassesRequest &) = default ;
    DescribeAvailableClassesRequest& operator=(DescribeAvailableClassesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->commodityCode_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->instanceChargeType_ == nullptr && this->orderType_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr && this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAvailableClassesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeAvailableClassesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAvailableClassesRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeAvailableClassesRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAvailableClassesRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAvailableClassesRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeAvailableClassesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeAvailableClassesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableClassesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailableClassesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableClassesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The instance edition. Valid values:
    // * Regular instances
    //     * **Basic**: Basic Edition
    //     * **HighAvailability**: high-availability series
    //     * **cluster**: Cluster Edition (applicable only to MySQL and PostgreSQL)
    //     * **AlwaysOn**: SQL Server Cluster Edition
    //     * **Finance**: RDS Enterprise Edition
    // * Serverless instances
    //     * **serverless_basic**: Serverless Basic Edition (applicable only to MySQL and PostgreSQL)
    //     * **serverless_standard**: Serverless high availability series (applicable only to MySQL and PostgreSQL)
    //     * **serverless_ha**: SQL Server Serverless high availability series
    // 
    //     > This parameter is required when you create a serverless instance.
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // The commodity code of the instance. Valid values:
    // 
    // - **bards**: pay-as-you-go primary instance (China site)
    // - **rds**: subscription primary instance (China site)
    // - **rords**: pay-as-you-go read-only instance (China site)
    // - **rds_rordspre_public_cn**: subscription read-only instance (China site)
    // - **bards_intl**: pay-as-you-go primary instance (international site)
    // - **rds_intl**: subscription primary instance (international site)
    // - **rords_intl**: pay-as-you-go read-only instance (international site)
    // - **rds_rordspre_public_intl**: subscription read-only instance (international site)
    // - **rds_serverless_public_cn**: serverless (China site)
    // - **rds_serverless_public_intl**: serverless (international site)
    // 
    // > This parameter is required when you query a read-only instance.
    shared_ptr<string> commodityCode_ {};
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The instance storage type. Valid values:
    // * **general_essd**: premium performance disk
    // * **local_ssd**: local SSD
    // * **cloud_ssd**: standard SSD
    // * **cloud_essd0**: PL0 ESSD cloud disk
    // * **cloud_essd**: PL1 ESSD cloud disk
    // * **cloud_essd2**: PL2 ESSD cloud disk
    // * **cloud_essd3**: PL3 ESSD cloud disk
    // 
    // > Serverless instances support only PL1 ESSD cloud disks. Set this parameter to **cloud_essd**.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceStorageType_ {};
    // The database engine of the instance. Valid values:
    // * **MySQL**
    // * **SQLServer**
    // * **PostgreSQL**
    // * **MariaDB**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database engine version of the instance. Valid values:
    // - Regular instances
    //     - MySQL: **5.5, 5.6, 5.7, 8.0**
    //     - SQL Server: **2008r2, 08r2_ent_ha, 2012, 2012_ent_ha, 2012_std_ha, 2012_web, 2014_std_ha, 2016_ent_ha, 2016_std_ha, 2016_web, 2017_std_ha, 2017_ent, 2019_std_ha, 2019_ent**
    //     - PostgreSQL: **10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0, 17.0**
    //     - MariaDB: **10.3**
    // - Serverless instances
    //     - MySQL: **5.7**, **8.0**
    //     - SQL Server: **2016_std_sl**, **2017_std_sl**, **2019_std_sl**
    //     - PostgreSQL: **14.0, 15.0, 16.0, 17.0**
    // 
    //     > ApsaraDB RDS for MariaDB does not support serverless instances.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The billing method of the instance. Valid values:
    // * **Prepaid**: subscription
    // * **Postpaid**: pay-as-you-go
    // * **Serverless**: serverless
    // 
    // > ApsaraDB RDS for MariaDB does not support serverless instances.
    shared_ptr<string> instanceChargeType_ {};
    // The order type. The only valid value is **BUY**.
    shared_ptr<string> orderType_ {};
    // The region ID of the instance. You can call the DescribeDBInstanceAttribute operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The zone ID of the instance. You can call the DescribeDBInstanceAttribute operation to query the zone ID.
    // >If DescribeDBInstanceAttribute returns a multi-zone value (such as `cn-hangzhou-MAZ9(g,h)`), specify a single zone. Example: `cn-hangzhou-g` or `cn-hangzhou-j`.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
