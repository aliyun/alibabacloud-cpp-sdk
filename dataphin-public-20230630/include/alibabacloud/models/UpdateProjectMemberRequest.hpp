// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTMEMBERREQUEST_HPP_
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
  class UpdateProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateProjectMemberRequest() = default ;
    UpdateProjectMemberRequest(const UpdateProjectMemberRequest &) = default ;
    UpdateProjectMemberRequest(UpdateProjectMemberRequest &&) = default ;
    UpdateProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectMemberRequest() = default ;
    UpdateProjectMemberRequest& operator=(const UpdateProjectMemberRequest &) = default ;
    UpdateProjectMemberRequest& operator=(UpdateProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(UserList, userList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(UserList, userList_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserList& obj) { 
          DARABONBA_PTR_TO_JSON(RoleList, roleList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, UserList& obj) { 
          DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        UserList() = default ;
        UserList(const UserList &) = default ;
        UserList(UserList &&) = default ;
        UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserList() = default ;
        UserList& operator=(const UserList &) = default ;
        UserList& operator=(UserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->roleList_ == nullptr
        && this->userId_ == nullptr; };
        // roleList Field Functions 
        bool hasRoleList() const { return this->roleList_ != nullptr;};
        void deleteRoleList() { this->roleList_ = nullptr;};
        inline const vector<int32_t> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<int32_t>) };
        inline vector<int32_t> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<int32_t>) };
        inline UserList& setRoleList(const vector<int32_t> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
        inline UserList& setRoleList(vector<int32_t> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // This parameter is required.
        shared_ptr<vector<int32_t>> roleList_ {};
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->env_ == nullptr
        && this->userList_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline UpdateCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // userList Field Functions 
      bool hasUserList() const { return this->userList_ != nullptr;};
      void deleteUserList() { this->userList_ = nullptr;};
      inline const vector<UpdateCommand::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<UpdateCommand::UserList>) };
      inline vector<UpdateCommand::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<UpdateCommand::UserList>) };
      inline UpdateCommand& setUserList(const vector<UpdateCommand::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
      inline UpdateCommand& setUserList(vector<UpdateCommand::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


    protected:
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->opTenantId_ == nullptr && this->updateCommand_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateProjectMemberRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateProjectMemberRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateProjectMemberRequest::UpdateCommand) };
    inline UpdateProjectMemberRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateProjectMemberRequest::UpdateCommand) };
    inline UpdateProjectMemberRequest& setUpdateCommand(const UpdateProjectMemberRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateProjectMemberRequest& setUpdateCommand(UpdateProjectMemberRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateProjectMemberRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
