// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSREQUEST_HPP_
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
  class AddTenantMembersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddTenantMembersRequest() = default ;
    AddTenantMembersRequest(const AddTenantMembersRequest &) = default ;
    AddTenantMembersRequest(AddTenantMembersRequest &&) = default ;
    AddTenantMembersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersRequest() = default ;
    AddTenantMembersRequest& operator=(const AddTenantMembersRequest &) = default ;
    AddTenantMembersRequest& operator=(AddTenantMembersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddCommand& obj) { 
        DARABONBA_PTR_TO_JSON(UserList, userList_);
      };
      friend void from_json(const Darabonba::Json& j, AddCommand& obj) { 
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
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(RoleList, roleList_);
        };
        friend void from_json(const Darabonba::Json& j, UserList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->roleList_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline UserList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // roleList Field Functions 
        bool hasRoleList() const { return this->roleList_ != nullptr;};
        void deleteRoleList() { this->roleList_ = nullptr;};
        inline const vector<string> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<string>) };
        inline vector<string> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<string>) };
        inline UserList& setRoleList(const vector<string> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
        inline UserList& setRoleList(vector<string> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<vector<string>> roleList_ {};
      };

      virtual bool empty() const override { return this->userList_ == nullptr; };
      // userList Field Functions 
      bool hasUserList() const { return this->userList_ != nullptr;};
      void deleteUserList() { this->userList_ = nullptr;};
      inline const vector<AddCommand::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<AddCommand::UserList>) };
      inline vector<AddCommand::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<AddCommand::UserList>) };
      inline AddCommand& setUserList(const vector<AddCommand::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
      inline AddCommand& setUserList(vector<AddCommand::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<AddCommand::UserList>> userList_ {};
    };

    virtual bool empty() const override { return this->addCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddTenantMembersRequest::AddCommand & getAddCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddTenantMembersRequest::AddCommand) };
    inline AddTenantMembersRequest::AddCommand getAddCommand() { DARABONBA_PTR_GET(addCommand_, AddTenantMembersRequest::AddCommand) };
    inline AddTenantMembersRequest& setAddCommand(const AddTenantMembersRequest::AddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddTenantMembersRequest& setAddCommand(AddTenantMembersRequest::AddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddTenantMembersRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<AddTenantMembersRequest::AddCommand> addCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
