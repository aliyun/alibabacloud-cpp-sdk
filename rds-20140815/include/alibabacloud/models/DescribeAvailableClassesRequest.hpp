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
        && return this->commodityCode_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBInstanceStorageType_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr
        && return this->instanceChargeType_ == nullptr && return this->orderType_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAvailableClassesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeAvailableClassesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeAvailableClassesRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string DBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline DescribeAvailableClassesRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAvailableClassesRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAvailableClassesRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeAvailableClassesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeAvailableClassesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableClassesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailableClassesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableClassesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The RDS edition of the instance. Valid values:
    // 
    // *   Regular instance
    // 
    //     *   **Basic**: RDS Basic Edition
    //     *   **HighAvailability**: RDS High-availability Edition
    //     *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL
    //     *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server
    //     *   **Finance**: RDS Enterprise Edition
    // 
    // *   Serverless instance
    // 
    //     *   **serverless_basic**: RDS Basic Edition. This edition is available only for serverless instances that run MySQL and PostgreSQL.
    //     *   **serverless_standard**: RDS High-availability Edition for ApsaraDB RDS for MySQL.
    //     *   **serverless_ha**: RDS High-availability Edition for ApsaraDB RDS for SQL Server.
    // 
    //     > If you create a serverless instance, you must specify this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The commodity code of the instance. Valid values:
    // 
    // *   **bards**: The instance is a pay-as-you-go primary instance. This value is available at the China site (aliyun.com).
    // *   **rds**: The instance is a subscription primary instance. This value is available at the China site (aliyun.com).
    // *   **rords**: The instance is a pay-as-you-go read-only instance. This value is available at the China site (aliyun.com).
    // *   **rds_rordspre_public_cn**: The instance is a subscription read-only instance. This value is available at the China site (aliyun.com).
    // *   **bards_intl**: The instance is a pay-as-you-go primary instance. This value is available at the International site (alibabacloud.com).
    // *   **rds_intl**: The instance is a subscription primary instance. This value is available at the International site (alibabacloud.com).
    // *   **rords_intl**: The instance is a pay-as-you-go read-only instance. This value is available at the International site (alibabacloud.com).
    // *   **rds_rordspre_public_intl**: The instance is a subscription read-only instance. This value is available at the International site (alibabacloud.com).
    // *   **rds_serverless_public_cn**: The instance is a serverless instance. This value is available at the China site (aliyun.com).
    // *   **rds_serverless_public_intl**: The instance is a serverless instance. This value is available at the International site (alibabacloud.com).
    // 
    // > If you want to query the price of a read-only instance, you must specify this parameter.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd**: local SSD. This is the recommended storage type.
    // *   **cloud_ssd**: standard SSD.
    // *   **cloud_essd**: performance level 1 (PL1) Enterprise SSD (ESSD)
    // *   **cloud_essd2**: PL2 ESSD
    // *   **cloud_essd3**: PL3 ESSD
    // 
    // >  Serverless instances use only PL1 ESSDs. If you want to create a serverless instance, you must set this parameter to **cloud_essd**.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceStorageType_ = nullptr;
    // The database engine that is run by the instance. Valid values:
    // 
    // * **MySQL**
    // * **SQLServer**
    // * **PostgreSQL**
    // * **MariaDB**
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version of the instance. Valid values:
    // 
    // *   Regular instance
    // 
    //     *   Valid values if you set Engine to MySQL: **5.5, 5.6, 5.7, and 8.0**
    //     *   Valid values if you set Engine to SQLServer: **2008r2, 08r2_ent_ha, 2012, 2012_ent_ha, 2012_std_ha, 2012_web, 2014_std_ha, 2016_ent_ha, 2016_std_ha, 2016_web, 2017_std_ha, 2017_ent, 2019_std_ha, and 2019_ent**
    //     *   Valid values if you set Engine to PostgreSQL: **10.0, 11.0, 12.0, 13.0, 14.0, and 15.0**
    //     *   Valid value when you set Engine to MariaDB: **10.3**
    // 
    // *   Serverless instance
    // 
    //     *   Valid values if you set Engine to MySQL: **5.7** and **8.0**
    //     *   Valid values if you set Engine to SQLServer: **2016_std_sl**, **2017_std_sl**, and **2019_std_sl**
    //     *   Valid value if you set Engine to PostgreSQL: **14.0**
    // 
    //     > ApsaraDB RDS for MariaDB does not support serverless instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Prepaid**: subscription
    // *   **Postpaid**: pay-as-you-go
    // *   **Serverless**: serverless
    // 
    // > ApsaraDB RDS for MariaDB does not support serverless instances.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The type of order. Set the value to **BUY**
    std::shared_ptr<string> orderType_ = nullptr;
    // The region ID of the instance. You can call the DescribeDBInstanceAttribute operation to query the region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The zone ID of the instance. You can call the DescribeDBInstanceAttribute operation to query the zone ID of the instance.
    // 
    // >  If the DescribeDBInstanceAttribute operation returns multiple zones, you must specify only one of the returned zones. For example, if the DescribeDBInstanceAttribute operation returns `cn-hangzhou-MAZ9(g,h)`, you can set this parameter to `cn-hangzhou-g` or `cn-hangzhou-h`.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
