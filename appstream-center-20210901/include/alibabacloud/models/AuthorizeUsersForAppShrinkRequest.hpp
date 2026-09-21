// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEUSERSFORAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEUSERSFORAPPSHRINKREQUEST_HPP_
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
  class AuthorizeUsersForAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeUsersForAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_TO_JSON(UserMeta, userMetaShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeUsersForAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AuthorizeUserIds, authorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UnAuthorizeUserIds, unAuthorizeUserIds_);
      DARABONBA_PTR_FROM_JSON(UserMeta, userMetaShrink_);
    };
    AuthorizeUsersForAppShrinkRequest() = default ;
    AuthorizeUsersForAppShrinkRequest(const AuthorizeUsersForAppShrinkRequest &) = default ;
    AuthorizeUsersForAppShrinkRequest(AuthorizeUsersForAppShrinkRequest &&) = default ;
    AuthorizeUsersForAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeUsersForAppShrinkRequest() = default ;
    AuthorizeUsersForAppShrinkRequest& operator=(const AuthorizeUsersForAppShrinkRequest &) = default ;
    AuthorizeUsersForAppShrinkRequest& operator=(AuthorizeUsersForAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->authorizeUserIds_ == nullptr && this->productType_ == nullptr && this->unAuthorizeUserIds_ == nullptr && this->userMetaShrink_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AuthorizeUsersForAppShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline AuthorizeUsersForAppShrinkRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // authorizeUserIds Field Functions 
    bool hasAuthorizeUserIds() const { return this->authorizeUserIds_ != nullptr;};
    void deleteAuthorizeUserIds() { this->authorizeUserIds_ = nullptr;};
    inline const vector<string> & getAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(authorizeUserIds_, vector<string>) };
    inline vector<string> getAuthorizeUserIds() { DARABONBA_PTR_GET(authorizeUserIds_, vector<string>) };
    inline AuthorizeUsersForAppShrinkRequest& setAuthorizeUserIds(const vector<string> & authorizeUserIds) { DARABONBA_PTR_SET_VALUE(authorizeUserIds_, authorizeUserIds) };
    inline AuthorizeUsersForAppShrinkRequest& setAuthorizeUserIds(vector<string> && authorizeUserIds) { DARABONBA_PTR_SET_RVALUE(authorizeUserIds_, authorizeUserIds) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline AuthorizeUsersForAppShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // unAuthorizeUserIds Field Functions 
    bool hasUnAuthorizeUserIds() const { return this->unAuthorizeUserIds_ != nullptr;};
    void deleteUnAuthorizeUserIds() { this->unAuthorizeUserIds_ = nullptr;};
    inline const vector<string> & getUnAuthorizeUserIds() const { DARABONBA_PTR_GET_CONST(unAuthorizeUserIds_, vector<string>) };
    inline vector<string> getUnAuthorizeUserIds() { DARABONBA_PTR_GET(unAuthorizeUserIds_, vector<string>) };
    inline AuthorizeUsersForAppShrinkRequest& setUnAuthorizeUserIds(const vector<string> & unAuthorizeUserIds) { DARABONBA_PTR_SET_VALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };
    inline AuthorizeUsersForAppShrinkRequest& setUnAuthorizeUserIds(vector<string> && unAuthorizeUserIds) { DARABONBA_PTR_SET_RVALUE(unAuthorizeUserIds_, unAuthorizeUserIds) };


    // userMetaShrink Field Functions 
    bool hasUserMetaShrink() const { return this->userMetaShrink_ != nullptr;};
    void deleteUserMetaShrink() { this->userMetaShrink_ = nullptr;};
    inline string getUserMetaShrink() const { DARABONBA_PTR_GET_DEFAULT(userMetaShrink_, "") };
    inline AuthorizeUsersForAppShrinkRequest& setUserMetaShrink(string userMetaShrink) { DARABONBA_PTR_SET_VALUE(userMetaShrink_, userMetaShrink) };


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
    shared_ptr<string> userMetaShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
