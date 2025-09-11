// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class UpgradeDBInstanceEngineVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceEngineVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ParallelOperation, parallelOperation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceEngineVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ParallelOperation, parallelOperation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
    };
    UpgradeDBInstanceEngineVersionRequest() = default ;
    UpgradeDBInstanceEngineVersionRequest(const UpgradeDBInstanceEngineVersionRequest &) = default ;
    UpgradeDBInstanceEngineVersionRequest(UpgradeDBInstanceEngineVersionRequest &&) = default ;
    UpgradeDBInstanceEngineVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceEngineVersionRequest() = default ;
    UpgradeDBInstanceEngineVersionRequest& operator=(const UpgradeDBInstanceEngineVersionRequest &) = default ;
    UpgradeDBInstanceEngineVersionRequest& operator=(UpgradeDBInstanceEngineVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->engineVersion_ != nullptr && this->parallelOperation_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerId_ != nullptr && this->switchTimeMode_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // parallelOperation Field Functions 
    bool hasParallelOperation() const { return this->parallelOperation_ != nullptr;};
    void deleteParallelOperation() { this->parallelOperation_ = nullptr;};
    inline bool parallelOperation() const { DARABONBA_PTR_GET_DEFAULT(parallelOperation_, false) };
    inline UpgradeDBInstanceEngineVersionRequest& setParallelOperation(bool parallelOperation) { DARABONBA_PTR_SET_VALUE(parallelOperation_, parallelOperation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceEngineVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string switchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The database engine version of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<bool> parallelOperation_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The update mode. If you do not specify this parameter, the system immediately updates the database engine version. If you set this parameter to 1, the system updates the database engine version during the maintenance window.
    std::shared_ptr<string> switchTimeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
