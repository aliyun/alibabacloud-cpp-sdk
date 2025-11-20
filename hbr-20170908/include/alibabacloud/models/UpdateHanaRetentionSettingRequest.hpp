// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHANARETENTIONSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHANARETENTIONSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class UpdateHanaRetentionSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHanaRetentionSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHanaRetentionSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    UpdateHanaRetentionSettingRequest() = default ;
    UpdateHanaRetentionSettingRequest(const UpdateHanaRetentionSettingRequest &) = default ;
    UpdateHanaRetentionSettingRequest(UpdateHanaRetentionSettingRequest &&) = default ;
    UpdateHanaRetentionSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHanaRetentionSettingRequest() = default ;
    UpdateHanaRetentionSettingRequest& operator=(const UpdateHanaRetentionSettingRequest &) = default ;
    UpdateHanaRetentionSettingRequest& operator=(UpdateHanaRetentionSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->databaseName_ == nullptr && return this->disabled_ == nullptr && return this->retentionDays_ == nullptr && return this->schedule_ == nullptr && return this->vaultId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateHanaRetentionSettingRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline UpdateHanaRetentionSettingRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline UpdateHanaRetentionSettingRequest& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int64_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0L) };
    inline UpdateHanaRetentionSettingRequest& setRetentionDays(int64_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline UpdateHanaRetentionSettingRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline UpdateHanaRetentionSettingRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The database name.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to permanently retain the backup. Valid values:
    // 
    // *   true: The backup is permanently retained.
    // *   false: The backup is retained for the specified number of days.
    // 
    // This parameter is required.
    std::shared_ptr<bool> disabled_ = nullptr;
    // The retention period of the backup data. Unit: days. If you set the Disabled parameter to false, the backup is retained for the number of days specified by this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> retentionDays_ = nullptr;
    // The policy to update the retention period. Format: `I|{startTime}|{interval}`. The retention period is updated at an interval of {interval} starting from {startTime}.
    // 
    // *   startTime: the time at which the system starts to run a backup job. The time follows the UNIX time format. Unit: seconds.
    // *   interval: the interval at which the system runs a backup job. The interval follows the ISO 8601 standard. For example, PT1H indicates an interval of 1 hour, and P1D indicates an interval of one day.
    // 
    // This parameter is required.
    std::shared_ptr<string> schedule_ = nullptr;
    // The ID of the backup vault.
    // 
    // This parameter is required.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
