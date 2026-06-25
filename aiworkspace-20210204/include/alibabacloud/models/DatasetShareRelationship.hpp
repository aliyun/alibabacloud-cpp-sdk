// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETSHARERELATIONSHIP_HPP_
#define ALIBABACLOUD_MODELS_DATASETSHARERELATIONSHIP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DatasetShareRelationship : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetShareRelationship& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedMountAccessLevels, allowedMountAccessLevels_);
      DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(IsSecureMode, isSecureMode_);
      DARABONBA_PTR_TO_JSON(SharedAt, sharedAt_);
      DARABONBA_PTR_TO_JSON(SourceTenantId, sourceTenantId_);
      DARABONBA_PTR_TO_JSON(SourceWorkspaceId, sourceWorkspaceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetShareRelationship& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedMountAccessLevels, allowedMountAccessLevels_);
      DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(IsSecureMode, isSecureMode_);
      DARABONBA_PTR_FROM_JSON(SharedAt, sharedAt_);
      DARABONBA_PTR_FROM_JSON(SourceTenantId, sourceTenantId_);
      DARABONBA_PTR_FROM_JSON(SourceWorkspaceId, sourceWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DatasetShareRelationship() = default ;
    DatasetShareRelationship(const DatasetShareRelationship &) = default ;
    DatasetShareRelationship(DatasetShareRelationship &&) = default ;
    DatasetShareRelationship(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetShareRelationship() = default ;
    DatasetShareRelationship& operator=(const DatasetShareRelationship &) = default ;
    DatasetShareRelationship& operator=(DatasetShareRelationship &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedMountAccessLevels_ == nullptr
        && this->expiresAt_ == nullptr && this->extra_ == nullptr && this->isSecureMode_ == nullptr && this->sharedAt_ == nullptr && this->sourceTenantId_ == nullptr
        && this->sourceWorkspaceId_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->workspaceId_ == nullptr; };
    // allowedMountAccessLevels Field Functions 
    bool hasAllowedMountAccessLevels() const { return this->allowedMountAccessLevels_ != nullptr;};
    void deleteAllowedMountAccessLevels() { this->allowedMountAccessLevels_ = nullptr;};
    inline const vector<string> & getAllowedMountAccessLevels() const { DARABONBA_PTR_GET_CONST(allowedMountAccessLevels_, vector<string>) };
    inline vector<string> getAllowedMountAccessLevels() { DARABONBA_PTR_GET(allowedMountAccessLevels_, vector<string>) };
    inline DatasetShareRelationship& setAllowedMountAccessLevels(const vector<string> & allowedMountAccessLevels) { DARABONBA_PTR_SET_VALUE(allowedMountAccessLevels_, allowedMountAccessLevels) };
    inline DatasetShareRelationship& setAllowedMountAccessLevels(vector<string> && allowedMountAccessLevels) { DARABONBA_PTR_SET_RVALUE(allowedMountAccessLevels_, allowedMountAccessLevels) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline DatasetShareRelationship& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DatasetShareRelationship& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // isSecureMode Field Functions 
    bool hasIsSecureMode() const { return this->isSecureMode_ != nullptr;};
    void deleteIsSecureMode() { this->isSecureMode_ = nullptr;};
    inline bool getIsSecureMode() const { DARABONBA_PTR_GET_DEFAULT(isSecureMode_, false) };
    inline DatasetShareRelationship& setIsSecureMode(bool isSecureMode) { DARABONBA_PTR_SET_VALUE(isSecureMode_, isSecureMode) };


    // sharedAt Field Functions 
    bool hasSharedAt() const { return this->sharedAt_ != nullptr;};
    void deleteSharedAt() { this->sharedAt_ = nullptr;};
    inline string getSharedAt() const { DARABONBA_PTR_GET_DEFAULT(sharedAt_, "") };
    inline DatasetShareRelationship& setSharedAt(string sharedAt) { DARABONBA_PTR_SET_VALUE(sharedAt_, sharedAt) };


    // sourceTenantId Field Functions 
    bool hasSourceTenantId() const { return this->sourceTenantId_ != nullptr;};
    void deleteSourceTenantId() { this->sourceTenantId_ = nullptr;};
    inline string getSourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(sourceTenantId_, "") };
    inline DatasetShareRelationship& setSourceTenantId(string sourceTenantId) { DARABONBA_PTR_SET_VALUE(sourceTenantId_, sourceTenantId) };


    // sourceWorkspaceId Field Functions 
    bool hasSourceWorkspaceId() const { return this->sourceWorkspaceId_ != nullptr;};
    void deleteSourceWorkspaceId() { this->sourceWorkspaceId_ = nullptr;};
    inline string getSourceWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(sourceWorkspaceId_, "") };
    inline DatasetShareRelationship& setSourceWorkspaceId(string sourceWorkspaceId) { DARABONBA_PTR_SET_VALUE(sourceWorkspaceId_, sourceWorkspaceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DatasetShareRelationship& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DatasetShareRelationship& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DatasetShareRelationship& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The allowed permissions for the shared dataset. When a user accesses the shared dataset, their permissions are limited to this list. The default value is \\`["RO"]\\`.
    // 
    // - RO: Read-only permission. The recipient can only read the dataset.
    // 
    // - RW: Read and write permission. The recipient can read and modify the dataset.
    shared_ptr<vector<string>> allowedMountAccessLevels_ {};
    // The expiration time. The time is in ISO 8601 format.
    // 
    // > If you do not specify this parameter, the sharing relationship never expires.
    shared_ptr<string> expiresAt_ {};
    // Additional configurations for the sharing relationship. This parameter is a JSON string.
    // 
    // - AllowExportModel: Specifies whether to allow the export of trained models.
    // 
    // - AllowAccessDLCWebTerminal: Specifies whether to allow users to log on to the container in a DLC task.
    // 
    // - AllowAccessDLCFullLog: Specifies whether to allow access to the full task logs.
    shared_ptr<string> extra_ {};
    // Specifies whether to enable security protection for the shared dataset.
    shared_ptr<bool> isSecureMode_ {};
    // The time when the dataset was shared. The time is in ISO 8601 format.
    shared_ptr<string> sharedAt_ {};
    // The ID of the tenant that owns the source dataset. The user who shares the dataset must be a workspace administrator or the root account.
    shared_ptr<string> sourceTenantId_ {};
    // The ID of the workspace that contains the source dataset.
    shared_ptr<string> sourceWorkspaceId_ {};
    // The status of the sharing relationship.
    // 
    // - ACTIVE: The sharing relationship is active. Complete dataset information is displayed only in this state.
    // 
    // - EXPIRED: The sharing relationship has expired.
    // 
    // - REVOKED: The sharing relationship was revoked by the sharer.
    // 
    // - INVALID: The sharing relationship is invalid. This can happen if the source dataset is deleted.
    shared_ptr<string> status_ {};
    // The ID of the target tenant. This must be a root account ID.
    // 
    // > This parameter is required when you set a sharing relationship.
    shared_ptr<string> tenantId_ {};
    // The ID of the target workspace. This ID must be different from the source workspace ID.
    // 
    // > This parameter is required when you set a sharing relationship.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
