// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserGroupDescription, userGroupDescription_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserGroupDescription, userGroupDescription_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
    };
    UpdateUserGroupRequest() = default ;
    UpdateUserGroupRequest(const UpdateUserGroupRequest &) = default ;
    UpdateUserGroupRequest(UpdateUserGroupRequest &&) = default ;
    UpdateUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserGroupRequest() = default ;
    UpdateUserGroupRequest& operator=(const UpdateUserGroupRequest &) = default ;
    UpdateUserGroupRequest& operator=(UpdateUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userGroupDescription_ == nullptr
        && return this->userGroupId_ == nullptr && return this->userGroupName_ == nullptr; };
    // userGroupDescription Field Functions 
    bool hasUserGroupDescription() const { return this->userGroupDescription_ != nullptr;};
    void deleteUserGroupDescription() { this->userGroupDescription_ = nullptr;};
    inline string userGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(userGroupDescription_, "") };
    inline UpdateUserGroupRequest& setUserGroupDescription(string userGroupDescription) { DARABONBA_PTR_SET_VALUE(userGroupDescription_, userGroupDescription) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline UpdateUserGroupRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userGroupName Field Functions 
    bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
    void deleteUserGroupName() { this->userGroupName_ = nullptr;};
    inline string userGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
    inline UpdateUserGroupRequest& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


  protected:
    // The description of the user group.
    // 
    // *   Format verification: Maximum length 255
    // *   Special format verification: Chinese and English digits_ \\ / | () ] [
    std::shared_ptr<string> userGroupDescription_ = nullptr;
    // The ID of the user group.
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
    // The name of the user group.
    // 
    // *   Format verification: Maximum length 255
    // *   Special format verification: Chinese and English digits_ \\ / | () ] [
    std::shared_ptr<string> userGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
