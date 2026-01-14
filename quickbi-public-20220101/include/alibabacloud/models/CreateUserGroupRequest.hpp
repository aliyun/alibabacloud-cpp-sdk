// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CreateUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupDescription, userGroupDescription_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupDescription, userGroupDescription_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    CreateUserGroupRequest() = default ;
    CreateUserGroupRequest(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest(CreateUserGroupRequest &&) = default ;
    CreateUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupRequest() = default ;
    CreateUserGroupRequest& operator=(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest& operator=(CreateUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parentUserGroupId_ == nullptr
        && this->userGroupDescription_ == nullptr && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
    // parentUserGroupId Field Functions 
    bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
    void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
    inline string getParentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
    inline CreateUserGroupRequest& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


    // userGroupDescription Field Functions 
    bool hasUserGroupDescription() const { return this->userGroupDescription_ != nullptr;};
    void deleteUserGroupDescription() { this->userGroupDescription_ = nullptr;};
    inline string getUserGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(userGroupDescription_, "") };
    inline CreateUserGroupRequest& setUserGroupDescription(string userGroupDescription) { DARABONBA_PTR_SET_VALUE(userGroupDescription_, userGroupDescription) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline CreateUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline CreateUserGroupRequest& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The ID of the parent user group. You can add new user groups to this group:
    // 
    // *   If you enter the ID of a parent user group, the new user group is added to the user group with the ID.
    // *   If you enter -1, the new user group is added to the root directory.
    // 
    // This parameter is required.
    shared_ptr<string> parentUserGroupId_ {};
    // The description of the user group.
    // 
    // *   Format verification: Maximum length 255
    // *   Special format verification: Chinese and English digits_ \\ / | () ] [
    shared_ptr<string> userGroupDescription_ {};
    // The unique ID of the user group.
    // 
    // *   If you specify the UserGroupId parameter, the system automatically generates the UserGroupId parameter. If you specify the UserGroupId parameter, the user ID is used as the user group ID. You must ensure that the user ID is unique within the organization.
    // *   Format verification: Maximum length 64, cannot be -1,
    shared_ptr<string> userGroupId_ {};
    // The name of the RAM user group.
    // 
    // *   Format verification: Maximum length 255
    // *   Special format verification: Chinese and English digits_ \\ / | () ] [
    // 
    // This parameter is required.
    shared_ptr<string> userGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
