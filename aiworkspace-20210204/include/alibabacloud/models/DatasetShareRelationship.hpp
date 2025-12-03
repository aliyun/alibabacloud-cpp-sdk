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
        && return this->expiresAt_ == nullptr && return this->extra_ == nullptr && return this->isSecureMode_ == nullptr && return this->sharedAt_ == nullptr && return this->sourceTenantId_ == nullptr
        && return this->sourceWorkspaceId_ == nullptr && return this->status_ == nullptr && return this->tenantId_ == nullptr && return this->workspaceId_ == nullptr; };
    // allowedMountAccessLevels Field Functions 
    bool hasAllowedMountAccessLevels() const { return this->allowedMountAccessLevels_ != nullptr;};
    void deleteAllowedMountAccessLevels() { this->allowedMountAccessLevels_ = nullptr;};
    inline const vector<string> & allowedMountAccessLevels() const { DARABONBA_PTR_GET_CONST(allowedMountAccessLevels_, vector<string>) };
    inline vector<string> allowedMountAccessLevels() { DARABONBA_PTR_GET(allowedMountAccessLevels_, vector<string>) };
    inline DatasetShareRelationship& setAllowedMountAccessLevels(const vector<string> & allowedMountAccessLevels) { DARABONBA_PTR_SET_VALUE(allowedMountAccessLevels_, allowedMountAccessLevels) };
    inline DatasetShareRelationship& setAllowedMountAccessLevels(vector<string> && allowedMountAccessLevels) { DARABONBA_PTR_SET_RVALUE(allowedMountAccessLevels_, allowedMountAccessLevels) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline string expiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
    inline DatasetShareRelationship& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline DatasetShareRelationship& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // isSecureMode Field Functions 
    bool hasIsSecureMode() const { return this->isSecureMode_ != nullptr;};
    void deleteIsSecureMode() { this->isSecureMode_ = nullptr;};
    inline bool isSecureMode() const { DARABONBA_PTR_GET_DEFAULT(isSecureMode_, false) };
    inline DatasetShareRelationship& setIsSecureMode(bool isSecureMode) { DARABONBA_PTR_SET_VALUE(isSecureMode_, isSecureMode) };


    // sharedAt Field Functions 
    bool hasSharedAt() const { return this->sharedAt_ != nullptr;};
    void deleteSharedAt() { this->sharedAt_ = nullptr;};
    inline string sharedAt() const { DARABONBA_PTR_GET_DEFAULT(sharedAt_, "") };
    inline DatasetShareRelationship& setSharedAt(string sharedAt) { DARABONBA_PTR_SET_VALUE(sharedAt_, sharedAt) };


    // sourceTenantId Field Functions 
    bool hasSourceTenantId() const { return this->sourceTenantId_ != nullptr;};
    void deleteSourceTenantId() { this->sourceTenantId_ = nullptr;};
    inline string sourceTenantId() const { DARABONBA_PTR_GET_DEFAULT(sourceTenantId_, "") };
    inline DatasetShareRelationship& setSourceTenantId(string sourceTenantId) { DARABONBA_PTR_SET_VALUE(sourceTenantId_, sourceTenantId) };


    // sourceWorkspaceId Field Functions 
    bool hasSourceWorkspaceId() const { return this->sourceWorkspaceId_ != nullptr;};
    void deleteSourceWorkspaceId() { this->sourceWorkspaceId_ = nullptr;};
    inline string sourceWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(sourceWorkspaceId_, "") };
    inline DatasetShareRelationship& setSourceWorkspaceId(string sourceWorkspaceId) { DARABONBA_PTR_SET_VALUE(sourceWorkspaceId_, sourceWorkspaceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DatasetShareRelationship& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DatasetShareRelationship& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DatasetShareRelationship& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<string>> allowedMountAccessLevels_ = nullptr;
    std::shared_ptr<string> expiresAt_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<bool> isSecureMode_ = nullptr;
    std::shared_ptr<string> sharedAt_ = nullptr;
    std::shared_ptr<string> sourceTenantId_ = nullptr;
    std::shared_ptr<string> sourceWorkspaceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
