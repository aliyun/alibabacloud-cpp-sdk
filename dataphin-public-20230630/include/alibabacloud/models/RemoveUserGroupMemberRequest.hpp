// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RemoveUserGroupMemberRequestRemoveCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveUserGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveUserGroupMemberRequest() = default ;
    RemoveUserGroupMemberRequest(const RemoveUserGroupMemberRequest &) = default ;
    RemoveUserGroupMemberRequest(RemoveUserGroupMemberRequest &&) = default ;
    RemoveUserGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserGroupMemberRequest() = default ;
    RemoveUserGroupMemberRequest& operator=(const RemoveUserGroupMemberRequest &) = default ;
    RemoveUserGroupMemberRequest& operator=(RemoveUserGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->removeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveUserGroupMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveUserGroupMemberRequestRemoveCommand & removeCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveUserGroupMemberRequestRemoveCommand) };
    inline RemoveUserGroupMemberRequestRemoveCommand removeCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveUserGroupMemberRequestRemoveCommand) };
    inline RemoveUserGroupMemberRequest& setRemoveCommand(const RemoveUserGroupMemberRequestRemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveUserGroupMemberRequest& setRemoveCommand(RemoveUserGroupMemberRequestRemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RemoveUserGroupMemberRequestRemoveCommand> removeCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
