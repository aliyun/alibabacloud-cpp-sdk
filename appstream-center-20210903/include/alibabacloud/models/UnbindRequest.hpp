// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class UnbindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SessionToken, sessionToken_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SessionToken, sessionToken_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    UnbindRequest() = default ;
    UnbindRequest(const UnbindRequest &) = default ;
    UnbindRequest(UnbindRequest &&) = default ;
    UnbindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindRequest() = default ;
    UnbindRequest& operator=(const UnbindRequest &) = default ;
    UnbindRequest& operator=(UnbindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->clientId_ == nullptr && this->clientIp_ == nullptr
        && this->clientOS_ == nullptr && this->clientVersion_ == nullptr && this->endUserId_ == nullptr && this->loginRegionId_ == nullptr && this->loginToken_ == nullptr
        && this->productType_ == nullptr && this->sessionId_ == nullptr && this->sessionToken_ == nullptr && this->tenantId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UnbindRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline UnbindRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline UnbindRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline UnbindRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline UnbindRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline UnbindRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline UnbindRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline UnbindRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline UnbindRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string getLoginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline UnbindRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline UnbindRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline UnbindRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline UnbindRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionToken Field Functions 
    bool hasSessionToken() const { return this->sessionToken_ != nullptr;};
    void deleteSessionToken() { this->sessionToken_ = nullptr;};
    inline string getSessionToken() const { DARABONBA_PTR_GET_DEFAULT(sessionToken_, "") };
    inline UnbindRequest& setSessionToken(string sessionToken) { DARABONBA_PTR_SET_VALUE(sessionToken_, sessionToken) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline UnbindRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the application. You can call the ListPublishedAppInfo operation to obtain the ID.
    shared_ptr<string> appId_ {};
    // The ID of the delivery group.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The application instance ID.
    shared_ptr<string> appInstanceId_ {};
    // The persistent session ID.
    shared_ptr<string> appInstancePersistentId_ {};
    // The unique ID generated by the client.
    shared_ptr<string> clientId_ {};
    // The IP address of the client.
    shared_ptr<string> clientIp_ {};
    // The operating system of the client.
    shared_ptr<string> clientOS_ {};
    // The version number of the client.
    shared_ptr<string> clientVersion_ {};
    // The username of the convenience user.
    shared_ptr<string> endUserId_ {};
    // The region ID of appstream-center.
    shared_ptr<string> loginRegionId_ {};
    // The logon credential. It is issued after an end user successfully logs on through the WUYING client (including the mobile SDK) or the console logon flow, and is used together with SessionId to complete the logon authentication for this operation. The appstream-center 2021-09-03 public API catalog does not provide an operation to obtain or refresh this credential. This parameter applies only to client integration scenarios, and server-side programmatic calls cannot obtain a valid LoginToken.
    shared_ptr<string> loginToken_ {};
    // The product type. Valid value: `CloudApp`, which indicates a cloud application.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The logon session ID. It is issued after an end user successfully logs on through the WUYING client (including the mobile SDK) or the console logon flow, and is used together with LoginToken to complete the logon authentication for this operation. The appstream-center 2021-09-03 public API catalog does not provide an operation to obtain this session ID. This parameter applies only to client integration scenarios, and server-side programmatic calls are not supported.
    shared_ptr<string> sessionId_ {};
    // The SessionToken used for authentication. You must choose either the LoginToken and SessionId combination or SessionToken for authentication.
    shared_ptr<string> sessionToken_ {};
    // The tenant ID, which is the Alibaba Cloud account UID. After an end user successfully logs on through the WUYING client (including the mobile SDK) or the console logon flow, you can obtain the ID from the logon result. The ID must be consistent with the tenant to which the LoginToken belongs.
    shared_ptr<int64_t> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
