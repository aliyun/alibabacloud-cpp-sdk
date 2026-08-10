// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpgradeMinorVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_TO_JSON(TargetMinorVersion, targetMinorVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
      DARABONBA_PTR_FROM_JSON(TargetMinorVersion, targetMinorVersion_);
    };
    UpgradeMinorVersionRequest() = default ;
    UpgradeMinorVersionRequest(const UpgradeMinorVersionRequest &) = default ;
    UpgradeMinorVersionRequest(UpgradeMinorVersionRequest &&) = default ;
    UpgradeMinorVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMinorVersionRequest() = default ;
    UpgradeMinorVersionRequest& operator=(const UpgradeMinorVersionRequest &) = default ;
    UpgradeMinorVersionRequest& operator=(UpgradeMinorVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->regionId_ == nullptr && this->switchTime_ == nullptr && this->switchTimeMode_ == nullptr && this->targetMinorVersion_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeMinorVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeMinorVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline UpgradeMinorVersionRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string getSwitchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline UpgradeMinorVersionRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


    // targetMinorVersion Field Functions 
    bool hasTargetMinorVersion() const { return this->targetMinorVersion_ != nullptr;};
    void deleteTargetMinorVersion() { this->targetMinorVersion_ = nullptr;};
    inline string getTargetMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMinorVersion_, "") };
    inline UpgradeMinorVersionRequest& setTargetMinorVersion(string targetMinorVersion) { DARABONBA_PTR_SET_VALUE(targetMinorVersion_, targetMinorVersion) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The specified upgrade time. Format: yyyy-MM-ddTHH:mm:ssZ (UTC).
    // > This parameter is required when SwitchTimeMode is set to SpecifyTime.
    shared_ptr<string> switchTime_ {};
    // Specifies when to upgrade. Valid values:
    // - **Immediate**: upgrades immediately.
    // - **MaintainTime**: upgrades during the O&M window.
    // - **SpecifyTime**: upgrades at a specified time.
    shared_ptr<string> switchTimeMode_ {};
    // The target minor engine version.
    // >By default, leave this parameter empty to upgrade to the latest minor engine version.
    shared_ptr<string> targetMinorVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
