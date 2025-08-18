// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthorizeInstanceGroupRequestUserMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class AuthorizeInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserGroupIds, authorizeUserGroupIds_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserGroupIds, unAuthorizeUserGroupIds_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_TO_JSON(UserMeta, userMeta_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserGroupIds, authorizeUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserGroupIds, unAuthorizeUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(UserMeta, userMeta_);
    };
    AuthorizeInstanceGroupRequest() = default ;
    AuthorizeInstanceGroupRequest(const AuthorizeInstanceGroupRequest &) = default ;
    AuthorizeInstanceGroupRequest(AuthorizeInstanceGroupRequest &&) = default ;
    AuthorizeInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeInstanceGroupRequest() = default ;
    AuthorizeInstanceGroupRequest& operator=(const AuthorizeInstanceGroupRequest &) = default ;
    AuthorizeInstanceGroupRequest& operator=(AuthorizeInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->appInstancePersistentId_ != nullptr && this->authorizeUserGroupIds_ != nullptr && this->authorizeUserIds_ != nullptr && this->avatarId_ != nullptr && this->productType_ != nullptr
        && this->unAuthorizeUserGroupIds_ != nullptr && this->unAuthorizeUserIds_ != nullptr && this->userMeta_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline AuthorizeInstanceGroupRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string appInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline AuthorizeInstanceGroupRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // authorizeUserGroupIds Field Functions 
    bool hasAuthorizeUserGroupIds() const { return this->authorizeUserGroupIds_ != nullptr;};
    void deleteAuthorizeUserGroupIds() { this->authorizeUserGroupIds_ = nullptr;};
    inline const vector<string> & authorizeUserGroupIds() const { DARABONBA_PTR_GET_CONST(authorizeUserGroupIds_, vector<string>) };
    inline vector<string> authorizeUserGroupIds() { DARABONBA_PTR_GET(authorizeUserGroupIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserGroupIds(const vector<string> & authorizeUserGroupIds) { DARABONBA_PTR_SET_VALUE(authorizeUserGroupIds_, authorizeUserGroupIds) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserGroupIds(vector<string> && authorizeUserGroupIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserGroupIds_, authorizeUserGroupIds) };


    // authorizeUserIds Field Functions 
    bool hasAuthorizeUserIds() const { return this->authorizeUserIds_ != nullptr;};
    void deleteAuthorizeUserIds() { this->authorizeUserIds_ = nullptr;};
    inline const vector<string> & authorizeUserIds() const { DARABONBA_PTR_GET_CONST(authorizeUserIds_, vector<string>) };
    inline vector<string> authorizeUserIds() { DARABONBA_PTR_GET(authorizeUserIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserIds(const vector<string> & authorizeUserIds) { DARABONBA_PTR_SET_VALUE(authorizeUserIds_, authorizeUserIds) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserIds(vector<string> && authorizeUserIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserIds_, authorizeUserIds) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline AuthorizeInstanceGroupRequest& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline AuthorizeInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // unAuthorizeUserGroupIds Field Functions 
    bool hasUnAuthorizeUserGroupIds() const { return this->unAuthorizeUserGroupIds_ != nullptr;};
    void deleteUnAuthorizeUserGroupIds() { this->unAuthorizeUserGroupIds_ = nullptr;};
    inline const vector<string> & unAuthorizeUserGroupIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserGroupIds_, vector<string>) };
    inline vector<string> unAuthorizeUserGroupIds() { DARABONBA_PTR_GET(unAuthorizeUserGroupIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserGroupIds(const vector<string> & unAuthorizeUserGroupIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserGroupIds_, unAuthorizeUserGroupIds) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserGroupIds(vector<string> && unAuthorizeUserGroupIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserGroupIds_, unAuthorizeUserGroupIds) };


    // unAuthorizeUserIds Field Functions 
    bool hasUnAuthorizeUserIds() const { return this->unAuthorizeUserIds_ != nullptr;};
    void deleteUnAuthorizeUserIds() { this->unAuthorizeUserIds_ = nullptr;};
    inline const vector<string> & unAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserIds_, vector<string>) };
    inline vector<string> unAuthorizeUserIds() { DARABONBA_PTR_GET(unAuthorizeUserIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserIds(const vector<string> & unAuthorizeUserIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserIds(vector<string> && unAuthorizeUserIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };


    // userMeta Field Functions 
    bool hasUserMeta() const { return this->userMeta_ != nullptr;};
    void deleteUserMeta() { this->userMeta_ = nullptr;};
    inline const AuthorizeInstanceGroupRequestUserMeta & userMeta() const { DARABONBA_PTR_GET_CONST(userMeta_, AuthorizeInstanceGroupRequestUserMeta) };
    inline AuthorizeInstanceGroupRequestUserMeta userMeta() { DARABONBA_PTR_GET(userMeta_, AuthorizeInstanceGroupRequestUserMeta) };
    inline AuthorizeInstanceGroupRequest& setUserMeta(const AuthorizeInstanceGroupRequestUserMeta & userMeta) { DARABONBA_PTR_SET_VALUE(userMeta_, userMeta) };
    inline AuthorizeInstanceGroupRequest& setUserMeta(AuthorizeInstanceGroupRequestUserMeta && userMeta) { DARABONBA_PTR_SET_RVALUE(userMeta_, userMeta) };


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
    std::shared_ptr<AuthorizeInstanceGroupRequestUserMeta> userMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
