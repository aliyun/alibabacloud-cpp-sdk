// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class AuthorizeInstanceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserGroupIds, authorizeUserGroupIds_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserGroupIds, unAuthorizeUserGroupIds_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_TO_JSON(UserMeta, userMetaShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserGroupIds, authorizeUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserGroupIds, unAuthorizeUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(UserMeta, userMetaShrink_);
    };
    AuthorizeInstanceGroupShrinkRequest() = default ;
    AuthorizeInstanceGroupShrinkRequest(const AuthorizeInstanceGroupShrinkRequest &) = default ;
    AuthorizeInstanceGroupShrinkRequest(AuthorizeInstanceGroupShrinkRequest &&) = default ;
    AuthorizeInstanceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeInstanceGroupShrinkRequest() = default ;
    AuthorizeInstanceGroupShrinkRequest& operator=(const AuthorizeInstanceGroupShrinkRequest &) = default ;
    AuthorizeInstanceGroupShrinkRequest& operator=(AuthorizeInstanceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->appInstancePersistentId_ != nullptr && this->authorizeUserGroupIds_ != nullptr && this->authorizeUserIds_ != nullptr && this->avatarId_ != nullptr && this->productType_ != nullptr
        && this->unAuthorizeUserGroupIds_ != nullptr && this->unAuthorizeUserIds_ != nullptr && this->userMetaShrink_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline AuthorizeInstanceGroupShrinkRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string appInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline AuthorizeInstanceGroupShrinkRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // authorizeUserGroupIds Field Functions 
    bool hasAuthorizeUserGroupIds() const { return this->authorizeUserGroupIds_ != nullptr;};
    void deleteAuthorizeUserGroupIds() { this->authorizeUserGroupIds_ = nullptr;};
    inline const vector<string> & authorizeUserGroupIds() const { DARABONBA_PTR_GET_CONST(authorizeUserGroupIds_, vector<string>) };
    inline vector<string> authorizeUserGroupIds() { DARABONBA_PTR_GET(authorizeUserGroupIds_, vector<string>) };
    inline AuthorizeInstanceGroupShrinkRequest& setAuthorizeUserGroupIds(const vector<string> & authorizeUserGroupIds) { DARABONBA_PTR_SET_VALUE(authorizeUserGroupIds_, authorizeUserGroupIds) };
    inline AuthorizeInstanceGroupShrinkRequest& setAuthorizeUserGroupIds(vector<string> && authorizeUserGroupIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserGroupIds_, authorizeUserGroupIds) };


    // authorizeUserIds Field Functions 
    bool hasAuthorizeUserIds() const { return this->authorizeUserIds_ != nullptr;};
    void deleteAuthorizeUserIds() { this->authorizeUserIds_ = nullptr;};
    inline const vector<string> & authorizeUserIds() const { DARABONBA_PTR_GET_CONST(authorizeUserIds_, vector<string>) };
    inline vector<string> authorizeUserIds() { DARABONBA_PTR_GET(authorizeUserIds_, vector<string>) };
    inline AuthorizeInstanceGroupShrinkRequest& setAuthorizeUserIds(const vector<string> & authorizeUserIds) { DARABONBA_PTR_SET_VALUE(authorizeUserIds_, authorizeUserIds) };
    inline AuthorizeInstanceGroupShrinkRequest& setAuthorizeUserIds(vector<string> && authorizeUserIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserIds_, authorizeUserIds) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline AuthorizeInstanceGroupShrinkRequest& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline AuthorizeInstanceGroupShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // unAuthorizeUserGroupIds Field Functions 
    bool hasUnAuthorizeUserGroupIds() const { return this->unAuthorizeUserGroupIds_ != nullptr;};
    void deleteUnAuthorizeUserGroupIds() { this->unAuthorizeUserGroupIds_ = nullptr;};
    inline const vector<string> & unAuthorizeUserGroupIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserGroupIds_, vector<string>) };
    inline vector<string> unAuthorizeUserGroupIds() { DARABONBA_PTR_GET(unAuthorizeUserGroupIds_, vector<string>) };
    inline AuthorizeInstanceGroupShrinkRequest& setUnAuthorizeUserGroupIds(const vector<string> & unAuthorizeUserGroupIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserGroupIds_, unAuthorizeUserGroupIds) };
    inline AuthorizeInstanceGroupShrinkRequest& setUnAuthorizeUserGroupIds(vector<string> && unAuthorizeUserGroupIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserGroupIds_, unAuthorizeUserGroupIds) };


    // unAuthorizeUserIds Field Functions 
    bool hasUnAuthorizeUserIds() const { return this->unAuthorizeUserIds_ != nullptr;};
    void deleteUnAuthorizeUserIds() { this->unAuthorizeUserIds_ = nullptr;};
    inline const vector<string> & unAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserIds_, vector<string>) };
    inline vector<string> unAuthorizeUserIds() { DARABONBA_PTR_GET(unAuthorizeUserIds_, vector<string>) };
    inline AuthorizeInstanceGroupShrinkRequest& setUnAuthorizeUserIds(const vector<string> & unAuthorizeUserIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };
    inline AuthorizeInstanceGroupShrinkRequest& setUnAuthorizeUserIds(vector<string> && unAuthorizeUserIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };


    // userMetaShrink Field Functions 
    bool hasUserMetaShrink() const { return this->userMetaShrink_ != nullptr;};
    void deleteUserMetaShrink() { this->userMetaShrink_ = nullptr;};
    inline string userMetaShrink() const { DARABONBA_PTR_GET_DEFAULT(userMetaShrink_, "") };
    inline AuthorizeInstanceGroupShrinkRequest& setUserMetaShrink(string userMetaShrink) { DARABONBA_PTR_SET_VALUE(userMetaShrink_, userMetaShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // 持久会话ID。
    std::shared_ptr<string> appInstancePersistentId_ = nullptr;
    std::shared_ptr<vector<string>> authorizeUserGroupIds_ = nullptr;
    // The IDs of the users that you want to add to the authorization list of the delivery group. You can specify 1 to 100 user IDs.
    std::shared_ptr<vector<string>> authorizeUserIds_ = nullptr;
    std::shared_ptr<string> avatarId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<vector<string>> unAuthorizeUserGroupIds_ = nullptr;
    // The IDs of the users that you want to remove from the authorization list of the delivery group. You can specify 1 to 100 user IDs.
    std::shared_ptr<vector<string>> unAuthorizeUserIds_ = nullptr;
    // The user information.
    std::shared_ptr<string> userMetaShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
