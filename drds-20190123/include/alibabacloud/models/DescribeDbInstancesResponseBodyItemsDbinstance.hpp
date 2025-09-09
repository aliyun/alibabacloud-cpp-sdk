// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESRESPONSEBODYITEMSDBINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDbInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_TO_JSON(AllowAllCategory, allowAllCategory_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_TO_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbInstancesResponseBodyItemsDBInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowAllCategory, allowAllCategory_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceNetworkType, instanceNetworkType_);
      DARABONBA_PTR_FROM_JSON(ReadOnlyDBInstanceId, readOnlyDBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDbInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDbInstancesResponseBodyItemsDBInstance(const DescribeDbInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDbInstancesResponseBodyItemsDBInstance(DescribeDbInstancesResponseBodyItemsDBInstance &&) = default ;
    DescribeDbInstancesResponseBodyItemsDBInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbInstancesResponseBodyItemsDBInstance() = default ;
    DescribeDbInstancesResponseBodyItemsDBInstance& operator=(const DescribeDbInstancesResponseBodyItemsDBInstance &) = default ;
    DescribeDbInstancesResponseBodyItemsDBInstance& operator=(DescribeDbInstancesResponseBodyItemsDBInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowAllCategory_ != nullptr
        && this->DBInstanceDescription_ != nullptr && this->DBInstanceId_ != nullptr && this->DBInstanceStatus_ != nullptr && this->DBInstanceType_ != nullptr && this->engine_ != nullptr
        && this->engineVersion_ != nullptr && this->instanceNetworkType_ != nullptr && this->readOnlyDBInstanceId_ != nullptr && this->regionId_ != nullptr && this->zoneId_ != nullptr; };
    // allowAllCategory Field Functions 
    bool hasAllowAllCategory() const { return this->allowAllCategory_ != nullptr;};
    void deleteAllowAllCategory() { this->allowAllCategory_ = nullptr;};
    inline bool allowAllCategory() const { DARABONBA_PTR_GET_DEFAULT(allowAllCategory_, false) };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setAllowAllCategory(bool allowAllCategory) { DARABONBA_PTR_SET_VALUE(allowAllCategory_, allowAllCategory) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline int32_t DBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, 0) };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setDBInstanceStatus(int32_t DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // DBInstanceType Field Functions 
    bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
    void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
    inline string DBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceNetworkType Field Functions 
    bool hasInstanceNetworkType() const { return this->instanceNetworkType_ != nullptr;};
    void deleteInstanceNetworkType() { this->instanceNetworkType_ = nullptr;};
    inline string instanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(instanceNetworkType_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setInstanceNetworkType(string instanceNetworkType) { DARABONBA_PTR_SET_VALUE(instanceNetworkType_, instanceNetworkType) };


    // readOnlyDBInstanceId Field Functions 
    bool hasReadOnlyDBInstanceId() const { return this->readOnlyDBInstanceId_ != nullptr;};
    void deleteReadOnlyDBInstanceId() { this->readOnlyDBInstanceId_ = nullptr;};
    inline const Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId & readOnlyDBInstanceId() const { DARABONBA_PTR_GET_CONST(readOnlyDBInstanceId_, Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId) };
    inline Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId readOnlyDBInstanceId() { DARABONBA_PTR_GET(readOnlyDBInstanceId_, Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId) };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setReadOnlyDBInstanceId(const Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId & readOnlyDBInstanceId) { DARABONBA_PTR_SET_VALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setReadOnlyDBInstanceId(Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId && readOnlyDBInstanceId) { DARABONBA_PTR_SET_RVALUE(readOnlyDBInstanceId_, readOnlyDBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDbInstancesResponseBodyItemsDBInstance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> allowAllCategory_ = nullptr;
    // The description of the storage instance.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The ID of the storage instance.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // Storage layer instance status. Valid values:
    // 
    // *   **0**: creating
    // *   **1**: In use
    // *   **3**: Deleting
    // *   **5**: restarting
    // *   **6**: upgrading /Downgrading
    // *   **7**: Recovering
    // *   **8**: switching the Internet and intranet
    std::shared_ptr<int32_t> DBInstanceStatus_ = nullptr;
    // The storage layer instance type.
    std::shared_ptr<string> DBInstanceType_ = nullptr;
    // The engine of the storage instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The version of the engine for the storage instance.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The network type of the storage layer. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **CLASSIC **: Classic Network
    std::shared_ptr<string> instanceNetworkType_ = nullptr;
    // The details about a read-only storage instance.
    std::shared_ptr<Models::DescribeDbInstancesResponseBodyItemsDBInstanceReadOnlyDBInstanceId> readOnlyDBInstanceId_ = nullptr;
    // The ID of the region where the storage instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the zone where the storage instance resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
