// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATEMIGRATIONTARGETINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATEMIGRATIONTARGETINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ActivateMigrationTargetInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateMigrationTargetInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(ForceSwitch, forceSwitch_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_TO_JSON(SwitchTimeMode, switchTimeMode_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateMigrationTargetInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(ForceSwitch, forceSwitch_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchTime, switchTime_);
      DARABONBA_PTR_FROM_JSON(SwitchTimeMode, switchTimeMode_);
    };
    ActivateMigrationTargetInstanceRequest() = default ;
    ActivateMigrationTargetInstanceRequest(const ActivateMigrationTargetInstanceRequest &) = default ;
    ActivateMigrationTargetInstanceRequest(ActivateMigrationTargetInstanceRequest &&) = default ;
    ActivateMigrationTargetInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateMigrationTargetInstanceRequest() = default ;
    ActivateMigrationTargetInstanceRequest& operator=(const ActivateMigrationTargetInstanceRequest &) = default ;
    ActivateMigrationTargetInstanceRequest& operator=(ActivateMigrationTargetInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->forceSwitch_ == nullptr && this->resourceOwnerId_ == nullptr && this->switchTime_ == nullptr && this->switchTimeMode_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ActivateMigrationTargetInstanceRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // forceSwitch Field Functions 
    bool hasForceSwitch() const { return this->forceSwitch_ != nullptr;};
    void deleteForceSwitch() { this->forceSwitch_ = nullptr;};
    inline string getForceSwitch() const { DARABONBA_PTR_GET_DEFAULT(forceSwitch_, "") };
    inline ActivateMigrationTargetInstanceRequest& setForceSwitch(string forceSwitch) { DARABONBA_PTR_SET_VALUE(forceSwitch_, forceSwitch) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ActivateMigrationTargetInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchTime Field Functions 
    bool hasSwitchTime() const { return this->switchTime_ != nullptr;};
    void deleteSwitchTime() { this->switchTime_ = nullptr;};
    inline string getSwitchTime() const { DARABONBA_PTR_GET_DEFAULT(switchTime_, "") };
    inline ActivateMigrationTargetInstanceRequest& setSwitchTime(string switchTime) { DARABONBA_PTR_SET_VALUE(switchTime_, switchTime) };


    // switchTimeMode Field Functions 
    bool hasSwitchTimeMode() const { return this->switchTimeMode_ != nullptr;};
    void deleteSwitchTimeMode() { this->switchTimeMode_ = nullptr;};
    inline string getSwitchTimeMode() const { DARABONBA_PTR_GET_DEFAULT(switchTimeMode_, "") };
    inline ActivateMigrationTargetInstanceRequest& setSwitchTimeMode(string switchTimeMode) { DARABONBA_PTR_SET_VALUE(switchTimeMode_, switchTimeMode) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // Specifies whether to forcefully perform a switchover. Set the value to 1. The value 1 specifies a forceful switchover.
    shared_ptr<string> forceSwitch_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // A reserved parameter. This parameter does not take effect.
    shared_ptr<string> switchTime_ {};
    // The time when you want to perform the switchover.
    // 
    // Set the value to 0. The value 0 specifies an immediate switchover.
    shared_ptr<string> switchTimeMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
