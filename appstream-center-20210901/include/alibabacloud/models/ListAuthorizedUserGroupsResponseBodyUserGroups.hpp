// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERGROUPSRESPONSEBODYUSERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERGROUPSRESPONSEBODYUSERGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAuthorizedUserGroupsResponseBodyUserGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUserGroupsResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AuthMode, authMode_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUserGroupsResponseBodyUserGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AuthMode, authMode_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListAuthorizedUserGroupsResponseBodyUserGroups() = default ;
    ListAuthorizedUserGroupsResponseBodyUserGroups(const ListAuthorizedUserGroupsResponseBodyUserGroups &) = default ;
    ListAuthorizedUserGroupsResponseBodyUserGroups(ListAuthorizedUserGroupsResponseBodyUserGroups &&) = default ;
    ListAuthorizedUserGroupsResponseBodyUserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUserGroupsResponseBodyUserGroups() = default ;
    ListAuthorizedUserGroupsResponseBodyUserGroups& operator=(const ListAuthorizedUserGroupsResponseBodyUserGroups &) = default ;
    ListAuthorizedUserGroupsResponseBodyUserGroups& operator=(ListAuthorizedUserGroupsResponseBodyUserGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->authMode_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAuthorizedUserGroupsResponseBodyUserGroups& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string authMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline ListAuthorizedUserGroupsResponseBodyUserGroups& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListAuthorizedUserGroupsResponseBodyUserGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListAuthorizedUserGroupsResponseBodyUserGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    std::shared_ptr<string> authMode_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
