// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATEREQUESTUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPADDORUPDATEREQUESTUSERGROUPS_HPP_
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
  class DsgUserGroupAddOrUpdateRequestUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupAddOrUpdateRequestUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(UserGroupType, userGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupAddOrUpdateRequestUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(UserGroupType, userGroupType_);
    };
    DsgUserGroupAddOrUpdateRequestUserGroups() = default ;
    DsgUserGroupAddOrUpdateRequestUserGroups(const DsgUserGroupAddOrUpdateRequestUserGroups &) = default ;
    DsgUserGroupAddOrUpdateRequestUserGroups(DsgUserGroupAddOrUpdateRequestUserGroups &&) = default ;
    DsgUserGroupAddOrUpdateRequestUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupAddOrUpdateRequestUserGroups() = default ;
    DsgUserGroupAddOrUpdateRequestUserGroups& operator=(const DsgUserGroupAddOrUpdateRequestUserGroups &) = default ;
    DsgUserGroupAddOrUpdateRequestUserGroups& operator=(DsgUserGroupAddOrUpdateRequestUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accounts_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->projectName_ != nullptr && this->userGroupType_ != nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<string> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<string>) };
    inline vector<string> accounts() { DARABONBA_PTR_GET(accounts_, vector<string>) };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setAccounts(const vector<string> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setAccounts(vector<string> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // userGroupType Field Functions 
    bool hasUserGroupType() const { return this->userGroupType_ != nullptr;};
    void deleteUserGroupType() { this->userGroupType_ = nullptr;};
    inline int32_t userGroupType() const { DARABONBA_PTR_GET_DEFAULT(userGroupType_, 0) };
    inline DsgUserGroupAddOrUpdateRequestUserGroups& setUserGroupType(int32_t userGroupType) { DARABONBA_PTR_SET_VALUE(userGroupType_, userGroupType) };


  protected:
    // The users in the group.
    // 
    // *   If a user group is created by using an Alibaba Cloud account and a RAM role, you can call the [DsgUserGroupQueryUserList](https://help.aliyun.com/document_detail/2786445.html) operation to query the users in the group.
    // *   If a user group is created by using a MaxCompute role, you can call the [DsgUserGroupQueryUserList](https://help.aliyun.com/document_detail/2785695.html) operation to query the users in the group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> accounts_ = nullptr;
    // The user group ID.
    // 
    // *   If you do not configure this parameter, the current operation is to add a user group.
    // *   If you configure this parameter, the current operation is to modify a user group. You can call the [DsgUserGroupQueryList](https://help.aliyun.com/document_detail/2786441.html) operation to query the user group ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The name of the MaxCompute project. You must configure this parameter when you create a MaxCompute user group.
    std::shared_ptr<string> projectName_ = nullptr;
    // The type of the user group. Valid values:
    // 
    // *   1: Alibaba Cloud account
    // *   2: RAM role
    // *   3: MaxCompute role
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> userGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
