// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUEST_HPP_
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
  class AddProjectMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddProjectMemberRequest() = default ;
    AddProjectMemberRequest(const AddProjectMemberRequest &) = default ;
    AddProjectMemberRequest(AddProjectMemberRequest &&) = default ;
    AddProjectMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMemberRequest() = default ;
    AddProjectMemberRequest& operator=(const AddProjectMemberRequest &) = default ;
    AddProjectMemberRequest& operator=(AddProjectMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(UserList, userList_);
      };
      friend void from_json(const Darabonba::Json& j, AddCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(UserList, userList_);
      };
      AddCommand() = default ;
      AddCommand(const AddCommand &) = default ;
      AddCommand(AddCommand &&) = default ;
      AddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddCommand() = default ;
      AddCommand& operator=(const AddCommand &) = default ;
      AddCommand& operator=(AddCommand &&) = default ;
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
      inline AddCommand& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // userList Field Functions 
      bool hasUserList() const { return this->userList_ != nullptr;};
      void deleteUserList() { this->userList_ = nullptr;};
      inline const vector<AddCommand::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<AddCommand::UserList>) };
      inline vector<AddCommand::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<AddCommand::UserList>) };
      inline AddCommand& setUserList(const vector<AddCommand::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
      inline AddCommand& setUserList(vector<AddCommand::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


    protected:
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<vector<AddCommand::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->addCommand_ == nullptr
        && this->id_ == nullptr && this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddProjectMemberRequest::AddCommand & getAddCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddProjectMemberRequest::AddCommand) };
    inline AddProjectMemberRequest::AddCommand getAddCommand() { DARABONBA_PTR_GET(addCommand_, AddProjectMemberRequest::AddCommand) };
    inline AddProjectMemberRequest& setAddCommand(const AddProjectMemberRequest::AddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddProjectMemberRequest& setAddCommand(AddProjectMemberRequest::AddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline AddProjectMemberRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddProjectMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<AddProjectMemberRequest::AddCommand> addCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
