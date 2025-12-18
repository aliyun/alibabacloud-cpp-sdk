// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCDEPARTMENTUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncDepartmentUserRequestSyncDepartmentUserCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SyncDepartmentUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncDepartmentUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SyncDepartmentUserCommand, syncDepartmentUserCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SyncDepartmentUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SyncDepartmentUserCommand, syncDepartmentUserCommand_);
    };
    SyncDepartmentUserRequest() = default ;
    SyncDepartmentUserRequest(const SyncDepartmentUserRequest &) = default ;
    SyncDepartmentUserRequest(SyncDepartmentUserRequest &&) = default ;
    SyncDepartmentUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncDepartmentUserRequest() = default ;
    SyncDepartmentUserRequest& operator=(const SyncDepartmentUserRequest &) = default ;
    SyncDepartmentUserRequest& operator=(SyncDepartmentUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->syncDepartmentUserCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SyncDepartmentUserRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // syncDepartmentUserCommand Field Functions 
    bool hasSyncDepartmentUserCommand() const { return this->syncDepartmentUserCommand_ != nullptr;};
    void deleteSyncDepartmentUserCommand() { this->syncDepartmentUserCommand_ = nullptr;};
    inline const SyncDepartmentUserRequestSyncDepartmentUserCommand & syncDepartmentUserCommand() const { DARABONBA_PTR_GET_CONST(syncDepartmentUserCommand_, SyncDepartmentUserRequestSyncDepartmentUserCommand) };
    inline SyncDepartmentUserRequestSyncDepartmentUserCommand syncDepartmentUserCommand() { DARABONBA_PTR_GET(syncDepartmentUserCommand_, SyncDepartmentUserRequestSyncDepartmentUserCommand) };
    inline SyncDepartmentUserRequest& setSyncDepartmentUserCommand(const SyncDepartmentUserRequestSyncDepartmentUserCommand & syncDepartmentUserCommand) { DARABONBA_PTR_SET_VALUE(syncDepartmentUserCommand_, syncDepartmentUserCommand) };
    inline SyncDepartmentUserRequest& setSyncDepartmentUserCommand(SyncDepartmentUserRequestSyncDepartmentUserCommand && syncDepartmentUserCommand) { DARABONBA_PTR_SET_RVALUE(syncDepartmentUserCommand_, syncDepartmentUserCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SyncDepartmentUserRequestSyncDepartmentUserCommand> syncDepartmentUserCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
