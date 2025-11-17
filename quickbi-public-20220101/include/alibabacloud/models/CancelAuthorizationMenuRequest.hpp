// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAUTHORIZATIONMENUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELAUTHORIZATIONMENUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class CancelAuthorizationMenuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAuthorizationMenuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_TO_JSON(MenuIds, menuIds_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAuthorizationMenuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPortalId, dataPortalId_);
      DARABONBA_PTR_FROM_JSON(MenuIds, menuIds_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    CancelAuthorizationMenuRequest() = default ;
    CancelAuthorizationMenuRequest(const CancelAuthorizationMenuRequest &) = default ;
    CancelAuthorizationMenuRequest(CancelAuthorizationMenuRequest &&) = default ;
    CancelAuthorizationMenuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAuthorizationMenuRequest() = default ;
    CancelAuthorizationMenuRequest& operator=(const CancelAuthorizationMenuRequest &) = default ;
    CancelAuthorizationMenuRequest& operator=(CancelAuthorizationMenuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPortalId_ == nullptr
        && return this->menuIds_ == nullptr && return this->userGroupIds_ == nullptr && return this->userIds_ == nullptr; };
    // dataPortalId Field Functions 
    bool hasDataPortalId() const { return this->dataPortalId_ != nullptr;};
    void deleteDataPortalId() { this->dataPortalId_ = nullptr;};
    inline string dataPortalId() const { DARABONBA_PTR_GET_DEFAULT(dataPortalId_, "") };
    inline CancelAuthorizationMenuRequest& setDataPortalId(string dataPortalId) { DARABONBA_PTR_SET_VALUE(dataPortalId_, dataPortalId) };


    // menuIds Field Functions 
    bool hasMenuIds() const { return this->menuIds_ != nullptr;};
    void deleteMenuIds() { this->menuIds_ = nullptr;};
    inline string menuIds() const { DARABONBA_PTR_GET_DEFAULT(menuIds_, "") };
    inline CancelAuthorizationMenuRequest& setMenuIds(string menuIds) { DARABONBA_PTR_SET_VALUE(menuIds_, menuIds) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline string userGroupIds() const { DARABONBA_PTR_GET_DEFAULT(userGroupIds_, "") };
    inline CancelAuthorizationMenuRequest& setUserGroupIds(string userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string userIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline CancelAuthorizationMenuRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // The ID of the data portal.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataPortalId_ = nullptr;
    // The leaf node menu IDs of the data portal.
    // 
    // - Supports batch parameters, with IDs separated by commas (,). The maximum number for batch modification is 100.
    // 
    // This parameter is required.
    std::shared_ptr<string> menuIds_ = nullptr;
    // List of user group IDs.
    // 
    // - Supports batch parameters, with IDs separated by commas (,). The maximum number for batch modification is 200.
    // - UserGroupIds and UserIds cannot both be empty.
    std::shared_ptr<string> userGroupIds_ = nullptr;
    // List of user IDs. These are Quick BI UserIDs, not Alibaba Cloud UIDs.
    // 
    // - Supports batch parameters, with IDs separated by commas (,). The maximum number for batch modification is 200.
    std::shared_ptr<string> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
