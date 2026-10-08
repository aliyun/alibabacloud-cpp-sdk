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
        && this->commodityCode_ == nullptr && this->DBInstanceName_ == nullptr && this->dispenseMode_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr && this->zoneId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAvailableZonesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeAvailableZonesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DescribeAvailableZonesRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dispenseMode Field Functions 
    bool hasDispenseMode() const { return this->dispenseMode_ != nullptr;};
    void deleteDispenseMode() { this->dispenseMode_ = nullptr;};
    inline string getDispenseMode() const { DARABONBA_PTR_GET_DEFAULT(dispenseMode_, "") };
    inline DescribeAvailableZonesRequest& setDispenseMode(string dispenseMode) { DARABONBA_PTR_SET_VALUE(dispenseMode_, dispenseMode) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeAvailableZonesRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeAvailableZonesRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableZonesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailableZonesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableZonesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The instance edition. Valid values:
    // * Regular instances
    //     * **Basic**: Basic Edition
    //     * **HighAvailability**: High-availability Edition
    //     * **cluster**: MySQL Cluster Edition
    //     * **AlwaysOn**: SQL Server Cluster Edition
    //     * **Finance**: RDS Enterprise Edition
    // * Serverless instances
    //     * **serverless_basic**: Serverless Basic Edition (applicable only to MySQL and PostgreSQL)
    //     * **serverless_standard**: MySQL Serverless High-availability Edition
    //     * **serverless_ha**: SQL Server Serverless High-availability Edition
    shared_ptr<string> category_ {};
    // The commodity code of the instance. The operation queries available resources for sale based on the specified commodity code. Valid values:
    // 
    // * **bards**: pay-as-you-go primary instance (China site)
    // * **rds**: subscription primary instance (China site)
    // * **rords**: pay-as-you-go read-only instance (China site)
    // * **rds_rordspre_public_cn**: subscription read-only instance (China site)
    // * **bards_intl**: pay-as-you-go primary instance (international site)
    // * **rds_intl**: subscription primary instance (international site)
    // * **rords_intl**: pay-as-you-go read-only instance (international site)
    // * **rds_rordspre_public_intl**: subscription read-only instance (international site)
    // * **rds_serverless_public_cn**: serverless (China site)
    // * **rds_serverless_public_intl**: serverless (international site)
    shared_ptr<string> commodityCode_ {};
    // The instance ID of the primary instance. This parameter is used to query available read-only instance resources for the specified primary instance.
    // 
    // This parameter is required when **CommodityCode** is set to one of the following values:
    // * **rords_intl**
    // * **rds_rordspre_public_intl**
    // * **rords**
    // * **rds_rordspre_public_cn**
    shared_ptr<string> DBInstanceName_ {};
    // Specifies whether to return the list of zones that support single-zone deployment. Valid values:
    // * **1** (default): Returns the list.
    // * **0**: Does not return the list.
    // 
    // > The single-zone deployment feature allows you to deploy RDS Enterprise Edition instances in a single zone.
    shared_ptr<string> dispenseMode_ {};
    // The database engine. Valid values:
    // * **MySQL**
    // * **SQLServer**
    // * **PostgreSQL**
    // * **MariaDB**
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The database engine version. Valid values:
    // - Regular instances
    //     - MySQL: **5.5**, **5.6**, **5.7**, **8.0**
    //     - SQL Server: **2008r2**, **08r2_ent_ha**, **2012**, **2012_ent_ha**, **2012_std_ha**, **2012_web**, **2014_std_ha**, **2016_ent_ha**, **2016_std_ha**, **2016_web**, **2017_std_ha**, **2017_ent**, **2019_std_ha**, **2019_ent**
    //     - PostgreSQL: **10.0**, **11.0**, **12.0**, **13.0**, **14.0**, **15.0**
    //     - MariaDB: **10.3**
    // - Serverless instances
    //     - MySQL: **5.7**, **8.0**
    //     - SQL Server: **2016_std_sl**, **2017_std_sl**, **2019_std_sl**
    //     - PostgreSQL: **14.0**
    // 
    //     > MariaDB does not support serverless instances.
    shared_ptr<string> engineVersion_ {};
    // The region ID. You can call DescribeRegions to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The zone ID. The format of multi-zone IDs differs from that of single-zone IDs and contains `MAZ`, such as `cn-hangzhou-MAZ6(b,f)` and `cn-hangzhou-MAZ5(b,e,f)`. You can call DescribeRegions to query zone IDs.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
