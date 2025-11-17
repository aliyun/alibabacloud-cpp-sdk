// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEMENUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEMENUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class AuthorizeMenuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeMenuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthPointsValue, authPointsValue_);
      DARABONBA_PTR_TO_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_TO_JSON(MenuIds, menuIds_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeMenuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthPointsValue, authPointsValue_);
      DARABONBA_PTR_FROM_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_FROM_JSON(MenuIds, menuIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    AuthorizeMenuRequest() = default ;
    AuthorizeMenuRequest(const AuthorizeMenuRequest &) = default ;
    AuthorizeMenuRequest(AuthorizeMenuRequest &&) = default ;
    AuthorizeMenuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeMenuRequest() = default ;
    AuthorizeMenuRequest& operator=(const AuthorizeMenuRequest &) = default ;
    AuthorizeMenuRequest& operator=(AuthorizeMenuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authPointsValue_ == nullptr
        && return this->dataPortalId_ == nullptr && return this->menuIds_ == nullptr && return this->userGroupIds_ == nullptr && return this->userIds_ == nullptr; };
    // authPointsValue Field Functions 
    bool hasAuthPointsValue() const { return this->authPointsValue_ != nullptr;};
    void deleteAuthPointsValue() { this->authPointsValue_ = nullptr;};
    inline int32_t authPointsValue() const { DARABONBA_PTR_GET_DEFAULT(authPointsValue_, 0) };
    inline AuthorizeMenuRequest& setAuthPointsValue(int32_t authPointsValue) { DARABONBA_PTR_SET_VALUE(authPointsValue_, authPointsValue) };


    // dataPortalId Field Functions 
    bool hasDataPortalId() const { return this->dataPortalId_ != nullptr;};
    void deleteDataPortalId() { this->dataPortalId_ = nullptr;};
    inline string dataPortalId() const { DARABONBA_PTR_GET_DEFAULT(dataPortalId_, "") };
    inline AuthorizeMenuRequest& setDataPortalId(string dataPortalId) { DARABONBA_PTR_SET_VALUE(dataPortalId_, dataPortalId) };


    // menuIds Field Functions 
    bool hasMenuIds() const { return this->menuIds_ != nullptr;};
    void deleteMenuIds() { this->menuIds_ = nullptr;};
    inline string menuIds() const { DARABONBA_PTR_GET_DEFAULT(menuIds_, "") };
    inline AuthorizeMenuRequest& setMenuIds(string menuIds) { DARABONBA_PTR_SET_VALUE(menuIds_, menuIds) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline string userGroupIds() const { DARABONBA_PTR_GET_DEFAULT(userGroupIds_, "") };
    inline AuthorizeMenuRequest& setUserGroupIds(string userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string userIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline AuthorizeMenuRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // Authorizes the permissions of the menu. Valid values:
    // 
    // *   1: view
    // *   3: View + Export (default)
    std::shared_ptr<int32_t> authPointsValue_ = nullptr;
    // The ID of the BI portal.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataPortalId_ = nullptr;
    // The menu ID of the BI portal leaf node.
    // 
    // *   The directory menu cannot be authorized.
    // *   You can upload multiple parameters at a time. Separate multiple IDs with commas (,). The maximum number of parameters that can be modified at a time is 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> menuIds_ = nullptr;
    // The IDs of the user groups.
    // 
    // *   You can upload multiple parameters at a time. Separate multiple IDs with commas (,). The maximum number of parameters that can be modified at a time is 200.
    // *   UserGroupIds and UserIds cannot be empty at the same time
    std::shared_ptr<string> userGroupIds_ = nullptr;
    // The IDs of the end users. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
    // 
    // *   You can upload multiple parameters at a time. Separate multiple IDs with commas (,). The maximum number of parameters that can be modified at a time is 200.
    std::shared_ptr<string> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
