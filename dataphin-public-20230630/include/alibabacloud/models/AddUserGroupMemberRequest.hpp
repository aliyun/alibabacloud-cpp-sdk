// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERGROUPMEMBERREQUEST_HPP_
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
  class AddUserGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddUserGroupMemberRequest() = default ;
    AddUserGroupMemberRequest(const AddUserGroupMemberRequest &) = default ;
    AddUserGroupMemberRequest(AddUserGroupMemberRequest &&) = default ;
    AddUserGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserGroupMemberRequest() = default ;
    AddUserGroupMemberRequest& operator=(const AddUserGroupMemberRequest &) = default ;
    AddUserGroupMemberRequest& operator=(AddUserGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddCommand& obj) { 
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
      };
      friend void from_json(const Darabonba::Json& j, AddCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
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
      virtual bool empty() const override { return this->userGroupId_ == nullptr
        && this->userIdList_ == nullptr; };
      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline AddCommand& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      // userIdList Field Functions 
      bool hasUserIdList() const { return this->userIdList_ != nullptr;};
      void deleteUserIdList() { this->userIdList_ = nullptr;};
      inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
      inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
      inline AddCommand& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
      inline AddCommand& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


    protected:
      // This parameter is required.
      shared_ptr<string> userGroupId_ {};
      shared_ptr<vector<string>> userIdList_ {};
    };

    virtual bool empty() const override { return this->addCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddUserGroupMemberRequest::AddCommand & getAddCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddUserGroupMemberRequest::AddCommand) };
    inline AddUserGroupMemberRequest::AddCommand getAddCommand() { DARABONBA_PTR_GET(addCommand_, AddUserGroupMemberRequest::AddCommand) };
    inline AddUserGroupMemberRequest& setAddCommand(const AddUserGroupMemberRequest::AddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddUserGroupMemberRequest& setAddCommand(AddUserGroupMemberRequest::AddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddUserGroupMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<AddUserGroupMemberRequest::AddCommand> addCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
