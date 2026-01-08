// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEINSTANCEGROUPREQUEST_HPP_
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
    class UserMeta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserMeta& obj) { 
        DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UserMeta& obj) { 
        DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UserMeta() = default ;
      UserMeta(const UserMeta &) = default ;
      UserMeta(UserMeta &&) = default ;
      UserMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserMeta() = default ;
      UserMeta& operator=(const UserMeta &) = default ;
      UserMeta& operator=(UserMeta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->adDomain_ == nullptr
        && this->type_ == nullptr; };
      // adDomain Field Functions 
      bool hasAdDomain() const { return this->adDomain_ != nullptr;};
      void deleteAdDomain() { this->adDomain_ = nullptr;};
      inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
      inline UserMeta& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UserMeta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The AD domain name.
      shared_ptr<string> adDomain_ {};
      // The user type.
      // 
      // Valid values:
      // 
      // *   ad: Active Directory (AD) account
      // *   simple: convenience account
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstancePersistentId_ == nullptr && this->authorizeUserGroupIds_ == nullptr && this->authorizeUserIds_ == nullptr && this->avatarId_ == nullptr && this->productType_ == nullptr
        && this->unAuthorizeUserGroupIds_ == nullptr && this->unAuthorizeUserIds_ == nullptr && this->userMeta_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline AuthorizeInstanceGroupRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline AuthorizeInstanceGroupRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // authorizeUserGroupIds Field Functions 
    bool hasAuthorizeUserGroupIds() const { return this->authorizeUserGroupIds_ != nullptr;};
    void deleteAuthorizeUserGroupIds() { this->authorizeUserGroupIds_ = nullptr;};
    inline const vector<string> & getAuthorizeUserGroupIds() const { DARABONBA_PTR_GET_CONST(authorizeUserGroupIds_, vector<string>) };
    inline vector<string> getAuthorizeUserGroupIds() { DARABONBA_PTR_GET(authorizeUserGroupIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserGroupIds(const vector<string> & authorizeUserGroupIds) { DARABONBA_PTR_SET_VALUE(authorizeUserGroupIds_, authorizeUserGroupIds) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserGroupIds(vector<string> && authorizeUserGroupIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserGroupIds_, authorizeUserGroupIds) };


    // authorizeUserIds Field Functions 
    bool hasAuthorizeUserIds() const { return this->authorizeUserIds_ != nullptr;};
    void deleteAuthorizeUserIds() { this->authorizeUserIds_ = nullptr;};
    inline const vector<string> & getAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(authorizeUserIds_, vector<string>) };
    inline vector<string> getAuthorizeUserIds() { DARABONBA_PTR_GET(authorizeUserIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserIds(const vector<string> & authorizeUserIds) { DARABONBA_PTR_SET_VALUE(authorizeUserIds_, authorizeUserIds) };
    inline AuthorizeInstanceGroupRequest& setAuthorizeUserIds(vector<string> && authorizeUserIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserIds_, authorizeUserIds) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline AuthorizeInstanceGroupRequest& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline AuthorizeInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // unAuthorizeUserGroupIds Field Functions 
    bool hasUnAuthorizeUserGroupIds() const { return this->unAuthorizeUserGroupIds_ != nullptr;};
    void deleteUnAuthorizeUserGroupIds() { this->unAuthorizeUserGroupIds_ = nullptr;};
    inline const vector<string> & getUnAuthorizeUserGroupIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserGroupIds_, vector<string>) };
    inline vector<string> getUnAuthorizeUserGroupIds() { DARABONBA_PTR_GET(unAuthorizeUserGroupIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserGroupIds(const vector<string> & unAuthorizeUserGroupIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserGroupIds_, unAuthorizeUserGroupIds) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserGroupIds(vector<string> && unAuthorizeUserGroupIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserGroupIds_, unAuthorizeUserGroupIds) };


    // unAuthorizeUserIds Field Functions 
    bool hasUnAuthorizeUserIds() const { return this->unAuthorizeUserIds_ != nullptr;};
    void deleteUnAuthorizeUserIds() { this->unAuthorizeUserIds_ = nullptr;};
    inline const vector<string> & getUnAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserIds_, vector<string>) };
    inline vector<string> getUnAuthorizeUserIds() { DARABONBA_PTR_GET(unAuthorizeUserIds_, vector<string>) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserIds(const vector<string> & unAuthorizeUserIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };
    inline AuthorizeInstanceGroupRequest& setUnAuthorizeUserIds(vector<string> && unAuthorizeUserIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };


    // userMeta Field Functions 
    bool hasUserMeta() const { return this->userMeta_ != nullptr;};
    void deleteUserMeta() { this->userMeta_ = nullptr;};
    inline const AuthorizeInstanceGroupRequest::UserMeta & getUserMeta() const { DARABONBA_PTR_GET_CONST(userMeta_, AuthorizeInstanceGroupRequest::UserMeta) };
    inline AuthorizeInstanceGroupRequest::UserMeta getUserMeta() { DARABONBA_PTR_GET(userMeta_, AuthorizeInstanceGroupRequest::UserMeta) };
    inline AuthorizeInstanceGroupRequest& setUserMeta(const AuthorizeInstanceGroupRequest::UserMeta & userMeta) { DARABONBA_PTR_SET_VALUE(userMeta_, userMeta) };
    inline AuthorizeInstanceGroupRequest& setUserMeta(AuthorizeInstanceGroupRequest::UserMeta && userMeta) { DARABONBA_PTR_SET_RVALUE(userMeta_, userMeta) };


  protected:
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // 持久会话ID。
    shared_ptr<string> appInstancePersistentId_ {};
    shared_ptr<vector<string>> authorizeUserGroupIds_ {};
    // The IDs of the users that you want to add to the authorization list of the delivery group. You can specify 1 to 100 user IDs.
    shared_ptr<vector<string>> authorizeUserIds_ {};
    shared_ptr<string> avatarId_ {};
    // This parameter is required.
    shared_ptr<string> productType_ {};
    shared_ptr<vector<string>> unAuthorizeUserGroupIds_ {};
    // The IDs of the users that you want to remove from the authorization list of the delivery group. You can specify 1 to 100 user IDs.
    shared_ptr<vector<string>> unAuthorizeUserIds_ {};
    // The user information.
    shared_ptr<AuthorizeInstanceGroupRequest::UserMeta> userMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
