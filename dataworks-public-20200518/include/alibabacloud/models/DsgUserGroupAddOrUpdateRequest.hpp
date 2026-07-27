// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupAddOrUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupAddOrUpdateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
    };
    DsgUserGroupAddOrUpdateRequest() = default ;
    DsgUserGroupAddOrUpdateRequest(const DsgUserGroupAddOrUpdateRequest &) = default ;
    DsgUserGroupAddOrUpdateRequest(DsgUserGroupAddOrUpdateRequest &&) = default ;
    DsgUserGroupAddOrUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupAddOrUpdateRequest() = default ;
    DsgUserGroupAddOrUpdateRequest& operator=(const DsgUserGroupAddOrUpdateRequest &) = default ;
    DsgUserGroupAddOrUpdateRequest& operator=(DsgUserGroupAddOrUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Accounts, accounts_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
        DARABONBA_PTR_TO_JSON(projects, projects_);
      };
      friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
        DARABONBA_PTR_FROM_JSON(projects, projects_);
      };
      UserGroups() = default ;
      UserGroups(const UserGroups &) = default ;
      UserGroups(UserGroups &&) = default ;
      UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserGroups() = default ;
      UserGroups& operator=(const UserGroups &) = default ;
      UserGroups& operator=(UserGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accounts_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectName_ == nullptr && this->userGroupType_ == nullptr
        && this->projects_ == nullptr; };
      // accounts Field Functions 
      bool hasAccounts() const { return this->accounts_ != nullptr;};
      void deleteAccounts() { this->accounts_ = nullptr;};
      inline const vector<string> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<string>) };
      inline vector<string> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<string>) };
      inline UserGroups& setAccounts(const vector<string> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
      inline UserGroups& setAccounts(vector<string> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UserGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UserGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline UserGroups& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline UserGroups& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // userGroupType Field Functions 
      bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
      void deleteUserGroupType() { this->userGroupType_ = nullptr;};
      inline int32_t getUserGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, 0) };
      inline UserGroups& setUserGroupType(int32_t userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline string getProjects() const { DARABONBA_PTR_GET_DEFAULT(projects_, "") };
      inline UserGroups& setProjects(string projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };


    protected:
      // The users in the user group.
      // 
      // - For user groups created based on Alibaba Cloud accounts and Resource Access Management (RAM) roles, call the [DsgUserGroupQueryUserList](https://help.aliyun.com/document_detail/2786445.html) API to query the user list.
      // 
      // - For user groups created based on MaxCompute roles, call the [DsgUserGroupGetOdpsRoleGroups](https://help.aliyun.com/document_detail/2785695.html) API to query the user list.
      shared_ptr<vector<string>> accounts_ {};
      // The ID of the user group.
      // 
      // - If you do not specify this parameter, a new user group is created.
      // 
      // - If you specify this parameter, the specified user group is modified. You can call the [DsgUserGroupQueryList](https://help.aliyun.com/document_detail/2786441.html) operation to query the ID of the user group.
      shared_ptr<int64_t> id_ {};
      // The name of the user group.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The owner of the user group.
      // 
      // This parameter is required.
      shared_ptr<string> owner_ {};
      // The name of the MaxCompute project. Set this parameter when you create a MaxCompute user group.
      shared_ptr<string> projectName_ {};
      // The type of the user group. The following values are valid:
      // 
      // - 1: Alibaba Cloud user
      // 
      // - 2: RAM Role
      // 
      // - 3: MaxCompute Role
      // 
      // This parameter is required.
      shared_ptr<int32_t> userGroupType_ {};
      shared_ptr<string> projects_ {};
    };

    virtual bool empty() const override { return this->userGroups_ == nullptr; };
    // userGroups Field Functions 
    bool hasUserGroups() const { return this->userGroups_ != nullptr;};
    void deleteUserGroups() { this->userGroups_ = nullptr;};
    inline const vector<DsgUserGroupAddOrUpdateRequest::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<DsgUserGroupAddOrUpdateRequest::UserGroups>) };
    inline vector<DsgUserGroupAddOrUpdateRequest::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<DsgUserGroupAddOrUpdateRequest::UserGroups>) };
    inline DsgUserGroupAddOrUpdateRequest& setUserGroups(const vector<DsgUserGroupAddOrUpdateRequest::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
    inline DsgUserGroupAddOrUpdateRequest& setUserGroups(vector<DsgUserGroupAddOrUpdateRequest::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


  protected:
    // The user groups.
    // 
    // This parameter is required.
    shared_ptr<vector<DsgUserGroupAddOrUpdateRequest::UserGroups>> userGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
