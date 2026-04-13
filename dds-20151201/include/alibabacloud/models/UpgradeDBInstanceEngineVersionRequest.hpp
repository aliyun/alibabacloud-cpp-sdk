// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEENGINEVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class UpgradeDBInstanceEngineVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceEngineVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SwitchMode, switchMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceEngineVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SwitchMode, switchMode_);
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
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->engineVersion_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->switchMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBInstanceEngineVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeDBInstanceEngineVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBInstanceEngineVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // switchMode Field Functions 
    bool hasSwitchMode() const { return this->switchMode_ != nullptr;};
    void deleteSwitchMode() { this->switchMode_ = nullptr;};
    inline int32_t getSwitchMode() const { DARABONBA_PTR_GET_DEFAULT(switchMode_, 0) };
    inline UpgradeDBInstanceEngineVersionRequest& setSwitchMode(int32_t switchMode) { DARABONBA_PTR_SET_VALUE(switchMode_, switchMode) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The database version to which you want to upgrade. Valid values: **3.4**, **4.0**, and **4.2**.
    // 
    // >  This database version must be later than the current database version of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The time when to perform the upgrade. Valid values:
    // 
    // *   **0**: immediately performs the upgrade.
    // *   **1**: performs the upgrade during the maintenance window.
    shared_ptr<int32_t> switchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
