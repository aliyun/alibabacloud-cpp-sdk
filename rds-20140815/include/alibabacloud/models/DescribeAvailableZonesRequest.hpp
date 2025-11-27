// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAvailableZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DispenseMode, dispenseMode_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DispenseMode, dispenseMode_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailableZonesRequest() = default ;
    DescribeAvailableZonesRequest(const DescribeAvailableZonesRequest &) = default ;
    DescribeAvailableZonesRequest(DescribeAvailableZonesRequest &&) = default ;
    DescribeAvailableZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableZonesRequest() = default ;
    DescribeAvailableZonesRequest& operator=(const DescribeAvailableZonesRequest &) = default ;
    DescribeAvailableZonesRequest& operator=(DescribeAvailableZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->commodityCode_ == nullptr && return this->DBInstanceName_ == nullptr && return this->dispenseMode_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAvailableZonesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeAvailableZonesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeAvailableZonesRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dispenseMode Field Functions 
    bool hasDispenseMode() const { return this->dispenseMode_ != nullptr;};
    void deleteDispenseMode() { this->dispenseMode_ = nullptr;};
    inline string dispenseMode() const { DARABONBA_PTR_GET_DEFAULT(dispenseMode_, "") };
    inline DescribeAvailableZonesRequest& setDispenseMode(string dispenseMode) { DARABONBA_PTR_SET_VALUE(dispenseMode_, dispenseMode) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAvailableZonesRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAvailableZonesRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailableZonesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableZonesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The RDS edition of the instance. Valid values:
    // 
    // *   Regular instance
    // 
    //     *   **Basic**: RDS Basic Edition.
    //     *   **HighAvailability**: RDS High-availability Edition.
    //     *   **cluster**: RDS Cluster Edition for ApsaraDB RDS for MySQL.
    //     *   **AlwaysOn**: RDS Cluster Edition for ApsaraDB RDS for SQL Server.
    //     *   **Finance**: RDS Enterprise Edition.
    // 
    // *   Serverless instance
    // 
    //     *   **serverless_basic**: RDS Basic Edition. This edition is available only for instances that run MySQL and PostgreSQL.
    //     *   **serverless_standard**: RDS High-availability Edition for ApsaraDB RDS for MySQL.
    //     *   **serverless_ha**: RDS High-availability Edition for ApsaraDB RDS for SQL Server.
    std::shared_ptr<string> category_ = nullptr;
    // The commodity code of the instance. This operation can return the resources that you can purchase based on the specified commodity code. Valid values:
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
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The ID of the primary instance. If you want to query the read-only instances that you can purchase for a primary instance, you can specify this parameter.
    // 
    // If you set **CommodityCode** to one of the following values, you must specify this parameter:
    // 
    // *   **rords_intl**
    // *   **rds_rordspre_public_intl**
    // *   **rords**
    // *   **rds_rordspre_public_cn**
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // Specifies whether to return the zones in which the single-zone deployment method is supported. Valid values:
    // 
    // *   **1** (default): returns the zones.
    // *   **0**: does not return the zones.
    // 
    // >  The single-zone deployment method allows you to deploy an instance that runs RDS Enterprise Edition in a single zone.
    std::shared_ptr<string> dispenseMode_ = nullptr;
    // The database engine of the instance. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // *   **MariaDB**
    // 
    // This parameter is required.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version. Valid values:
    // 
    // *   Regular instance
    // 
    //     *   Valid values if you set Engine to MySQL: **5.5**, **5.6**, **5.7**, and **8.0**
    //     *   Valid values if you set Engine to SQLServer: **2008r2**, **08r2_ent_ha**, **2012**, **2012_ent_ha**, **2012_std_ha**, **2012_web**, **2014_std_ha**, **2016_ent_ha**, **2016_std_ha**, **2016_web**, **2017_std_ha**, **2017_ent**, **2019_std_ha**, and **2019_ent**
    //     *   Valid values if you set Engine to PostgreSQL: **10.0**, **11.0**, **12.0**, **13.0**, **14.0**, and **15.0**
    //     *   Valid value when you set Engine to MariaDB: **10.3**
    // 
    // *   Serverless instance
    // 
    //     *   Valid values if you set Engine to MySQL: **5.7** and **8.0**
    //     *   Valid values if you set Engine to SQLServer: **2016_std_sl**, **2017_std_sl**, and **2019_std_sl**
    //     *   Valid value if you set Engine to PostgreSQL: **14.0**
    // 
    //     **
    // 
    //     **Note**ApsaraDB RDS for MariaDB does not support serverless instances.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The zone ID. If the instance spans more than one zone, the value of this parameter contains an `MAZ` part, such as `cn-hangzhou-MAZ6(b,f)` and `cn-hangzhou-MAZ5(b,e,f)`. You can call the DescribeRegions operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
