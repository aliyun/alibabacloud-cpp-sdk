// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEVICEAUTOUPGRADEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEVICEAUTOUPGRADEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifyDeviceAutoUpgradePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDeviceAutoUpgradePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_TO_JSON(VersionType, versionType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDeviceAutoUpgradePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
      DARABONBA_PTR_FROM_JSON(VersionType, versionType_);
    };
    ModifyDeviceAutoUpgradePolicyRequest() = default ;
    ModifyDeviceAutoUpgradePolicyRequest(const ModifyDeviceAutoUpgradePolicyRequest &) = default ;
    ModifyDeviceAutoUpgradePolicyRequest(ModifyDeviceAutoUpgradePolicyRequest &&) = default ;
    ModifyDeviceAutoUpgradePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDeviceAutoUpgradePolicyRequest() = default ;
    ModifyDeviceAutoUpgradePolicyRequest& operator=(const ModifyDeviceAutoUpgradePolicyRequest &) = default ;
    ModifyDeviceAutoUpgradePolicyRequest& operator=(ModifyDeviceAutoUpgradePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->duration_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->serialNumber_ == nullptr && this->smartAGId_ == nullptr && this->timeZone_ == nullptr && this->upgradeType_ == nullptr
        && this->versionType_ == nullptr; };
    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ModifyDeviceAutoUpgradePolicyRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDeviceAutoUpgradePolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDeviceAutoUpgradePolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // smartAGId Field Functions 
    bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
    void deleteSmartAGId() { this->smartAGId_ = nullptr;};
    inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


    // versionType Field Functions 
    bool hasVersionType() const { return this->versionType_ != nullptr;};
    void deleteVersionType() { this->versionType_ = nullptr;};
    inline string getVersionType() const { DARABONBA_PTR_GET_DEFAULT(versionType_, "") };
    inline ModifyDeviceAutoUpgradePolicyRequest& setVersionType(string versionType) { DARABONBA_PTR_SET_VALUE(versionType_, versionType) };


  protected:
    // The time when upgrades start. Valid values: Set the parameter in a cron expression.
    // 
    // For example, you can use `0 0 4 1/1 * ?` to specify 04:00:00 (UTC+8) on the first day of each month.
    shared_ptr<string> cronExpression_ {};
    // The time period during which upgrades are performed. Valid values: **30 to 120**.
    // 
    // Unit: minutes.
    shared_ptr<int32_t> duration_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the SAG instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> serialNumber_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> smartAGId_ {};
    // The time zone. Valid values:
    // 
    // **Asia/Shanghai**: UTC+8 (Beijing)
    // 
    // **Asia/Hong_Kong**: UTC+8 (Hong Kong)
    // 
    // **Asia/Tokyo**: UTC+9 (Tokyo)
    // 
    // **Australia/Sydney**: UTC+10 (Sydney)
    // 
    // **Asia/Kuala_Lumpur**: UTC+8 (Kuala Lumpur)
    // 
    // **Europe/Berli**: UTC+1 (Berlin)
    // 
    // **Asia/Singapore**: UTC+8 (Singapore)
    // 
    // **Asia/Jakarta**: UTC+7 (Jakarta)
    shared_ptr<string> timeZone_ {};
    // The update type. Valid values:
    // 
    // *   **scheduled**: scheduled upgrade.
    // *   **boot**: automatic upgrade upon device startup.
    // *   **manual**: manual upgrade.
    // 
    // This parameter is required.
    shared_ptr<string> upgradeType_ {};
    // The type of software for which you want to modify the upgrade policy. Valid values:
    // 
    // *   **Device**: The operating system run by the SAG device.
    // *   **Dpi**: The signature database used by the SAG device.
    shared_ptr<string> versionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
