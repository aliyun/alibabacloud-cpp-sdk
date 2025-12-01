// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ModifyBackupStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupLogIntervalSeconds, backupLogIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStrategyType, backupStrategyType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupLogIntervalSeconds, backupLogIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStrategyType, backupStrategyType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyBackupStrategyRequest() = default ;
    ModifyBackupStrategyRequest(const ModifyBackupStrategyRequest &) = default ;
    ModifyBackupStrategyRequest(ModifyBackupStrategyRequest &&) = default ;
    ModifyBackupStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupStrategyRequest() = default ;
    ModifyBackupStrategyRequest& operator=(const ModifyBackupStrategyRequest &) = default ;
    ModifyBackupStrategyRequest& operator=(ModifyBackupStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupLogIntervalSeconds_ == nullptr
        && return this->backupPeriod_ == nullptr && return this->backupPlanId_ == nullptr && return this->backupStartTime_ == nullptr && return this->backupStrategyType_ == nullptr && return this->clientToken_ == nullptr
        && return this->ownerId_ == nullptr; };
    // backupLogIntervalSeconds Field Functions 
    bool hasBackupLogIntervalSeconds() const { return this->backupLogIntervalSeconds_ != nullptr;};
    void deleteBackupLogIntervalSeconds() { this->backupLogIntervalSeconds_ = nullptr;};
    inline int32_t backupLogIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(backupLogIntervalSeconds_, 0) };
    inline ModifyBackupStrategyRequest& setBackupLogIntervalSeconds(int32_t backupLogIntervalSeconds) { DARABONBA_PTR_SET_VALUE(backupLogIntervalSeconds_, backupLogIntervalSeconds) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline string backupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
    inline ModifyBackupStrategyRequest& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupStrategyRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline ModifyBackupStrategyRequest& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStrategyType Field Functions 
    bool hasBackupStrategyType() const { return this->backupStrategyType_ != nullptr;};
    void deleteBackupStrategyType() { this->backupStrategyType_ = nullptr;};
    inline string backupStrategyType() const { DARABONBA_PTR_GET_DEFAULT(backupStrategyType_, "") };
    inline ModifyBackupStrategyRequest& setBackupStrategyType(string backupStrategyType) { DARABONBA_PTR_SET_VALUE(backupStrategyType_, backupStrategyType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupStrategyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupStrategyRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The interval at which you want to perform incremental log backups. Unit: seconds.
    // 
    // > This parameter takes effect only when physical backups are performed.
    std::shared_ptr<int32_t> backupLogIntervalSeconds_ = nullptr;
    // The day of each week when the full backup task runs. Valid values:
    // 
    // *   Monday
    // *   Tuesday
    // *   Wednesday
    // *   Thursday
    // *   Friday
    // *   Saturday
    // *   Sunday
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPeriod_ = nullptr;
    // The ID of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The start time of the full backup task. Specify the time in the HH:mm format.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The backup method that you want to use for full backups. Valid values:
    // 
    // *   **simple**: scheduled backup. If you specify this value for the BackupStrategyType parameter, you must also specify the BackupPeriod and BackupStartTime parameters.
    // *   **Manual**: manual backup.
    // 
    // > Default value: **simple**.
    std::shared_ptr<string> backupStrategyType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
