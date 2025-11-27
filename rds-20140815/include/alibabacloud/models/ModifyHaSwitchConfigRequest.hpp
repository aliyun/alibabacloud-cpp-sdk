// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHASWITCHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHASWITCHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyHASwitchConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHASwitchConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(HAConfig, HAConfig_);
      DARABONBA_PTR_TO_JSON(ManualHATime, manualHATime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHASwitchConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(HAConfig, HAConfig_);
      DARABONBA_PTR_FROM_JSON(ManualHATime, manualHATime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyHASwitchConfigRequest() = default ;
    ModifyHASwitchConfigRequest(const ModifyHASwitchConfigRequest &) = default ;
    ModifyHASwitchConfigRequest(ModifyHASwitchConfigRequest &&) = default ;
    ModifyHASwitchConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHASwitchConfigRequest() = default ;
    ModifyHASwitchConfigRequest& operator=(const ModifyHASwitchConfigRequest &) = default ;
    ModifyHASwitchConfigRequest& operator=(ModifyHASwitchConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->HAConfig_ == nullptr && return this->manualHATime_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyHASwitchConfigRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // HAConfig Field Functions 
    bool hasHAConfig() const { return this->HAConfig_ != nullptr;};
    void deleteHAConfig() { this->HAConfig_ = nullptr;};
    inline string HAConfig() const { DARABONBA_PTR_GET_DEFAULT(HAConfig_, "") };
    inline ModifyHASwitchConfigRequest& setHAConfig(string HAConfig) { DARABONBA_PTR_SET_VALUE(HAConfig_, HAConfig) };


    // manualHATime Field Functions 
    bool hasManualHATime() const { return this->manualHATime_ != nullptr;};
    void deleteManualHATime() { this->manualHATime_ = nullptr;};
    inline string manualHATime() const { DARABONBA_PTR_GET_DEFAULT(manualHATime_, "") };
    inline ModifyHASwitchConfigRequest& setManualHATime(string manualHATime) { DARABONBA_PTR_SET_VALUE(manualHATime_, manualHATime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyHASwitchConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHASwitchConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyHASwitchConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyHASwitchConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The instance ID. You can call the DescribeDBInstances operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The mode of the automatic primary/secondary switchover feature. Valid values:
    // 
    // *   **Auto**: The automatic primary/secondary switchover feature is enabled. The system automatically switches your workloads over from the instance to its secondary instance in the event of a fault.
    // *   **Manual**: The automatic primary/secondary switchover feature is disabled. You must manually switch your workloads over from the instance to its secondary instance in the event of a fault.
    // 
    // Default value: **Auto**.
    // 
    // >  If you set this parameter to **Manual**, you must specify the **ManualHATime** parameter.
    std::shared_ptr<string> HAConfig_ = nullptr;
    // The time to disable the automatic primary/secondary switchover feature. The time can range from the current time to 23:59:59 seven days later. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // >  This parameter takes effect only when you set the **HAConfig** parameter to **Manual**.
    std::shared_ptr<string> manualHATime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
