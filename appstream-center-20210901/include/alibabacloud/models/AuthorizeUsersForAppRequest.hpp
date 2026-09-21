// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEUSERSFORAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEUSERSFORAPPREQUEST_HPP_
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
  class AuthorizeUsersForAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeUsersForAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_TO_JSON(UserMeta, userMeta_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeUsersForAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(UserMeta, userMeta_);
    };
    AuthorizeUsersForAppRequest() = default ;
    AuthorizeUsersForAppRequest(const AuthorizeUsersForAppRequest &) = default ;
    AuthorizeUsersForAppRequest(AuthorizeUsersForAppRequest &&) = default ;
    AuthorizeUsersForAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeUsersForAppRequest() = default ;
    AuthorizeUsersForAppRequest& operator=(const AuthorizeUsersForAppRequest &) = default ;
    AuthorizeUsersForAppRequest& operator=(AuthorizeUsersForAppRequest &&) = default ;
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
      // The AD domain name. Specify this parameter when Type is set to ad. The value must match the AD domain bound to the workspace of the delivery group.
      shared_ptr<string> adDomain_ {};
      // The account type. Default value: simple.
      // 
      // Valid values:
      // 
      // - ad: AD account.
      // - simple: WUYING convenience account.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->authorizeUserIds_ == nullptr && this->productType_ == nullptr && this->unAuthorizeUserIds_ == nullptr && this->userMeta_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AuthorizeUsersForAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline AuthorizeUsersForAppRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // authorizeUserIds Field Functions 
    bool hasAuthorizeUserIds() const { return this->authorizeUserIds_ != nullptr;};
    void deleteAuthorizeUserIds() { this->authorizeUserIds_ = nullptr;};
    inline const vector<string> & getAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(authorizeUserIds_, vector<string>) };
    inline vector<string> getAuthorizeUserIds() { DARABONBA_PTR_GET(authorizeUserIds_, vector<string>) };
    inline AuthorizeUsersForAppRequest& setAuthorizeUserIds(const vector<string> & authorizeUserIds) { DARABONBA_PTR_SET_VALUE(authorizeUserIds_, authorizeUserIds) };
    inline AuthorizeUsersForAppRequest& setAuthorizeUserIds(vector<string> && authorizeUserIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserIds_, authorizeUserIds) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline AuthorizeUsersForAppRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // unAuthorizeUserIds Field Functions 
    bool hasUnAuthorizeUserIds() const { return this->unAuthorizeUserIds_ != nullptr;};
    void deleteUnAuthorizeUserIds() { this->unAuthorizeUserIds_ = nullptr;};
    inline const vector<string> & getUnAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserIds_, vector<string>) };
    inline vector<string> getUnAuthorizeUserIds() { DARABONBA_PTR_GET(unAuthorizeUserIds_, vector<string>) };
    inline AuthorizeUsersForAppRequest& setUnAuthorizeUserIds(const vector<string> & unAuthorizeUserIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };
    inline AuthorizeUsersForAppRequest& setUnAuthorizeUserIds(vector<string> && unAuthorizeUserIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };


    // userMeta Field Functions 
    bool hasUserMeta() const { return this->userMeta_ != nullptr;};
    void deleteUserMeta() { this->userMeta_ = nullptr;};
    inline const AuthorizeUsersForAppRequest::UserMeta & getUserMeta() const { DARABONBA_PTR_GET_CONST(userMeta_, AuthorizeUsersForAppRequest::UserMeta) };
    inline AuthorizeUsersForAppRequest::UserMeta getUserMeta() { DARABONBA_PTR_GET(userMeta_, AuthorizeUsersForAppRequest::UserMeta) };
    inline AuthorizeUsersForAppRequest& setUserMeta(const AuthorizeUsersForAppRequest::UserMeta & userMeta) { DARABONBA_PTR_SET_VALUE(userMeta_, userMeta) };
    inline AuthorizeUsersForAppRequest& setUserMeta(AuthorizeUsersForAppRequest::UserMeta && userMeta) { DARABONBA_PTR_SET_RVALUE(userMeta_, userMeta) };


  protected:
    // The application ID. The application must be deployed in the image used by the delivery group. You can obtain the ID from the Apps list returned by the [GetAppInstanceGroup](https://help.aliyun.com/document_detail/600836.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The delivery group ID. You can call the [ListAppInstanceGroup](https://help.aliyun.com/document_detail/428506.html) operation to obtain the ID.
    // 
    // The application specified by AppId must be deployed in the image used by this delivery group.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The list of usernames to add authorization for the application. A maximum of 100 usernames can be specified in a single request.
    // 
    // At least one of AuthorizeUserIds and UnAuthorizeUserIds must be specified. You can also specify both. Adding authorization is subject to the authorized user quota for the application.
    shared_ptr<vector<string>> authorizeUserIds_ {};
    // The product type. Application-level authorization applies to WUYING Cloud Application delivery groups.
    // 
    // Valid values:
    // 
    // - CloudApp: WUYING Cloud Application.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The list of usernames to be unauthorized for the application. A maximum of 100 usernames can be specified in a single request.
    // 
    // At least one of AuthorizeUserIds and UnAuthorizeUserIds must be specified. You can also specify both. Removing authorizations is not subject to quota limits.
    shared_ptr<vector<string>> unAuthorizeUserIds_ {};
    // The account information of the authorized user, which specifies the account type corresponding to the username.
    // 
    // - If the workspace to which the delivery group belongs is an AD workspace, **this parameter is required**: set Type to ad and set AdDomain to the AD domain bound to the workspace.
    // - If this parameter is not specified, the WUYING convenience account (simple) is used by default.
    shared_ptr<AuthorizeUsersForAppRequest::UserMeta> userMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
