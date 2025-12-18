// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncDepartmentRequestSyncDepartmentCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SyncDepartmentCommand, syncDepartmentCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SyncDepartmentCommand, syncDepartmentCommand_);
    };
    SyncDepartmentRequest() = default ;
    SyncDepartmentRequest(const SyncDepartmentRequest &) = default ;
    SyncDepartmentRequest(SyncDepartmentRequest &&) = default ;
    SyncDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentRequest() = default ;
    SyncDepartmentRequest& operator=(const SyncDepartmentRequest &) = default ;
    SyncDepartmentRequest& operator=(SyncDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->syncDepartmentCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SyncDepartmentRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // syncDepartmentCommand Field Functions 
    bool hasSyncDepartmentCommand() const { return this->syncDepartmentCommand_ != nullptr;};
    void deleteSyncDepartmentCommand() { this->syncDepartmentCommand_ = nullptr;};
    inline const SyncDepartmentRequestSyncDepartmentCommand & syncDepartmentCommand() const { DARABONBA_PTR_GET_CONST(syncDepartmentCommand_, SyncDepartmentRequestSyncDepartmentCommand) };
    inline SyncDepartmentRequestSyncDepartmentCommand syncDepartmentCommand() { DARABONBA_PTR_GET(syncDepartmentCommand_, SyncDepartmentRequestSyncDepartmentCommand) };
    inline SyncDepartmentRequest& setSyncDepartmentCommand(const SyncDepartmentRequestSyncDepartmentCommand & syncDepartmentCommand) { DARABONBA_PTR_SET_VALUE(syncDepartmentCommand_, syncDepartmentCommand) };
    inline SyncDepartmentRequest& setSyncDepartmentCommand(SyncDepartmentRequestSyncDepartmentCommand && syncDepartmentCommand) { DARABONBA_PTR_SET_RVALUE(syncDepartmentCommand_, syncDepartmentCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SyncDepartmentRequestSyncDepartmentCommand> syncDepartmentCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
