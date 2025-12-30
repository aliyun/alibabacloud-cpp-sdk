// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RemoveCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveCommand& obj) { 
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
      };
      RemoveCommand() = default ;
      RemoveCommand(const RemoveCommand &) = default ;
      RemoveCommand(RemoveCommand &&) = default ;
      RemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveCommand() = default ;
      RemoveCommand& operator=(const RemoveCommand &) = default ;
      RemoveCommand& operator=(RemoveCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userGroupId_ == nullptr
        && this->userIdList_ == nullptr; };
      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline RemoveCommand& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      // userIdList Field Functions 
      bool hasUserIdList() const { return this->userIdList_ != nullptr;};
      void deleteUserIdList() { this->userIdList_ = nullptr;};
      inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
      inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
      inline RemoveCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
      inline RemoveCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


    protected:
      // This parameter is required.
      shared_ptr<string> userGroupId_ {};
      // This parameter is required.
      shared_ptr<vector<string>> userIdList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->removeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveUserGroupMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveUserGroupMemberRequest::RemoveCommand & getRemoveCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveUserGroupMemberRequest::RemoveCommand) };
    inline RemoveUserGroupMemberRequest::RemoveCommand getRemoveCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveUserGroupMemberRequest::RemoveCommand) };
    inline RemoveUserGroupMemberRequest& setRemoveCommand(const RemoveUserGroupMemberRequest::RemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveUserGroupMemberRequest& setRemoveCommand(RemoveUserGroupMemberRequest::RemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<RemoveUserGroupMemberRequest::RemoveCommand> removeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
