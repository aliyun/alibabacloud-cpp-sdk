// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class GetConnectionTicketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_TO_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AutoConnectInQueue, autoConnectInQueue_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_TO_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EnvironmentConfig, environmentConfig_);
      DARABONBA_PTR_TO_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RequireUuidValidation, requireUuidValidation_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
      DARABONBA_PTR_FROM_JSON(AppPolicyId, appPolicyId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AutoConnectInQueue, autoConnectInQueue_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ClientOS, clientOS_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClientVersion, clientVersion_);
      DARABONBA_PTR_FROM_JSON(ConnectionProperties, connectionProperties_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EnvironmentConfig, environmentConfig_);
      DARABONBA_PTR_FROM_JSON(LoginRegionId, loginRegionId_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RequireUuidValidation, requireUuidValidation_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetConnectionTicketRequest() = default ;
    GetConnectionTicketRequest(const GetConnectionTicketRequest &) = default ;
    GetConnectionTicketRequest(GetConnectionTicketRequest &&) = default ;
    GetConnectionTicketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionTicketRequest() = default ;
    GetConnectionTicketRequest& operator=(const GetConnectionTicketRequest &) = default ;
    GetConnectionTicketRequest& operator=(GetConnectionTicketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->appId_ == nullptr && this->appInstanceGroupId_ == nullptr && this->appInstanceId_ == nullptr && this->appPolicyId_ == nullptr && this->appVersion_ == nullptr
        && this->autoConnectInQueue_ == nullptr && this->bizRegionId_ == nullptr && this->clientId_ == nullptr && this->clientIp_ == nullptr && this->clientOS_ == nullptr
        && this->clientType_ == nullptr && this->clientVersion_ == nullptr && this->connectionProperties_ == nullptr && this->endUserId_ == nullptr && this->environmentConfig_ == nullptr
        && this->loginRegionId_ == nullptr && this->loginToken_ == nullptr && this->param_ == nullptr && this->productType_ == nullptr && this->requireUuidValidation_ == nullptr
        && this->resourceId_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr && this->tenantId_ == nullptr && this->uuid_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetConnectionTicketRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetConnectionTicketRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline GetConnectionTicketRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceId Field Functions 
    bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
    void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
    inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
    inline GetConnectionTicketRequest& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


    // appPolicyId Field Functions 
    bool hasAppPolicyId() const { return this->appPolicyId_ != nullptr;};
    void deleteAppPolicyId() { this->appPolicyId_ = nullptr;};
    inline string getAppPolicyId() const { DARABONBA_PTR_GET_DEFAULT(appPolicyId_, "") };
    inline GetConnectionTicketRequest& setAppPolicyId(string appPolicyId) { DARABONBA_PTR_SET_VALUE(appPolicyId_, appPolicyId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetConnectionTicketRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // autoConnectInQueue Field Functions 
    bool hasAutoConnectInQueue() const { return this->autoConnectInQueue_ != nullptr;};
    void deleteAutoConnectInQueue() { this->autoConnectInQueue_ = nullptr;};
    inline bool getAutoConnectInQueue() const { DARABONBA_PTR_GET_DEFAULT(autoConnectInQueue_, false) };
    inline GetConnectionTicketRequest& setAutoConnectInQueue(bool autoConnectInQueue) { DARABONBA_PTR_SET_VALUE(autoConnectInQueue_, autoConnectInQueue) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetConnectionTicketRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetConnectionTicketRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline GetConnectionTicketRequest& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientOS Field Functions 
    bool hasClientOS() const { return this->clientOS_ != nullptr;};
    void deleteClientOS() { this->clientOS_ = nullptr;};
    inline string getClientOS() const { DARABONBA_PTR_GET_DEFAULT(clientOS_, "") };
    inline GetConnectionTicketRequest& setClientOS(string clientOS) { DARABONBA_PTR_SET_VALUE(clientOS_, clientOS) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline GetConnectionTicketRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clientVersion Field Functions 
    bool hasClientVersion() const { return this->clientVersion_ != nullptr;};
    void deleteClientVersion() { this->clientVersion_ = nullptr;};
    inline string getClientVersion() const { DARABONBA_PTR_GET_DEFAULT(clientVersion_, "") };
    inline GetConnectionTicketRequest& setClientVersion(string clientVersion) { DARABONBA_PTR_SET_VALUE(clientVersion_, clientVersion) };


    // connectionProperties Field Functions 
    bool hasConnectionProperties() const { return this->connectionProperties_ != nullptr;};
    void deleteConnectionProperties() { this->connectionProperties_ = nullptr;};
    inline string getConnectionProperties() const { DARABONBA_PTR_GET_DEFAULT(connectionProperties_, "") };
    inline GetConnectionTicketRequest& setConnectionProperties(string connectionProperties) { DARABONBA_PTR_SET_VALUE(connectionProperties_, connectionProperties) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetConnectionTicketRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // environmentConfig Field Functions 
    bool hasEnvironmentConfig() const { return this->environmentConfig_ != nullptr;};
    void deleteEnvironmentConfig() { this->environmentConfig_ = nullptr;};
    inline string getEnvironmentConfig() const { DARABONBA_PTR_GET_DEFAULT(environmentConfig_, "") };
    inline GetConnectionTicketRequest& setEnvironmentConfig(string environmentConfig) { DARABONBA_PTR_SET_VALUE(environmentConfig_, environmentConfig) };


    // loginRegionId Field Functions 
    bool hasLoginRegionId() const { return this->loginRegionId_ != nullptr;};
    void deleteLoginRegionId() { this->loginRegionId_ = nullptr;};
    inline string getLoginRegionId() const { DARABONBA_PTR_GET_DEFAULT(loginRegionId_, "") };
    inline GetConnectionTicketRequest& setLoginRegionId(string loginRegionId) { DARABONBA_PTR_SET_VALUE(loginRegionId_, loginRegionId) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline GetConnectionTicketRequest& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline GetConnectionTicketRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetConnectionTicketRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // requireUuidValidation Field Functions 
    bool hasRequireUuidValidation() const { return this->requireUuidValidation_ != nullptr;};
    void deleteRequireUuidValidation() { this->requireUuidValidation_ = nullptr;};
    inline bool getRequireUuidValidation() const { DARABONBA_PTR_GET_DEFAULT(requireUuidValidation_, false) };
    inline GetConnectionTicketRequest& setRequireUuidValidation(bool requireUuidValidation) { DARABONBA_PTR_SET_VALUE(requireUuidValidation_, requireUuidValidation) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetConnectionTicketRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetConnectionTicketRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetConnectionTicketRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetConnectionTicketRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetConnectionTicketRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The access type. If this parameter is not passed, both types are displayed. Valid values: INTERNET (Internet) and VPC (Express Connect circuit).
    shared_ptr<string> accessType_ {};
    // The application ID.
    // 
    // > Required for the first call, and optional for subsequent calls.
    shared_ptr<string> appId_ {};
    // The delivery group ID.
    // > 
    // > - When this parameter is passed, an application instance is assigned only from the specified and authorized delivery groups.
    // > - When the AppInstanceId parameter is passed, this parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // The application instance ID.
    // 
    // > 
    // > - When this parameter is passed, the system only attempts to assign the specified application instance.
    // > - When this parameter is passed, the AppInstanceGroupId parameter must also be passed.
    shared_ptr<string> appInstanceId_ {};
    // The policy ID.
    shared_ptr<string> appPolicyId_ {};
    // The application version number.
    shared_ptr<string> appVersion_ {};
    // Specifies whether to automatically connect when the turn is reached.
    // 
    // > This parameter is not available.
    shared_ptr<bool> autoConnectInQueue_ {};
    // The region ID.
    // 
    // > When this parameter is passed, an application instance is assigned only from the delivery groups in the specified region.
    shared_ptr<string> bizRegionId_ {};
    // The client ID.
    shared_ptr<string> clientId_ {};
    // The client IP address.
    shared_ptr<string> clientIp_ {};
    // The client operating system.
    shared_ptr<string> clientOS_ {};
    // The client type.
    shared_ptr<string> clientType_ {};
    // The client version.
    shared_ptr<string> clientVersion_ {};
    // The connection properties in JSON format.
    // The following parameters are supported:
    // 
    // - authMode: the authorization mode, which is determined based on the authorization mode of the delivery group. Valid values: App (application authorization), AppInstanceGroup (delivery group authorization), and Session (persistent session authorization).
    // - appInstanceGroupScheduleTags: the delivery group scheduling tags. Multiple tag key-value pairs are supported for filtering. Multiple tag pairs have an AND relationship. The key must have a value, and the value can be empty. Format example: [{"key":"Resolution","value":"720p"},{"key":"Name"}].
    // - appInstanceGroupIds: the list of specified delivery group IDs.
    // - appInstancePersistentId: the specified persistent session ID.
    // - avatarId: the user avatar ID. Default value: default. This parameter is used to support assigning multiple session instances to a single user.
    // 
    // > Used when connecting to a cloud phone. Pass the fixed value `{"authMode":"Session"}`.
    shared_ptr<string> connectionProperties_ {};
    // The username of the convenience account.
    shared_ptr<string> endUserId_ {};
    // The environment configuration.
    shared_ptr<string> environmentConfig_ {};
    // The logon region ID. When a user logs on to a workspace, this parameter specifies the ID of the region to which the workspace belongs.
    shared_ptr<string> loginRegionId_ {};
    // The logon token.
    // Obtained by calling the GetLoginToken or GetStsToken API operation.
    // The GetLoginToken and GetStsToken API operations belong to the client logon authentication APIs of the 2021-02-20 version of WUYING Cloud App (product code: appstream-center). These two API operations are not provided in the 2021-09-03 version. OpenAPI Explorer links: https://api.aliyun.com/api/appstream-center/2021-02-20/GetLoginToken and https://api.aliyun.com/api/appstream-center/2021-02-20/GetStsToken.
    // Note: This parameter is required. If it is not provided, the API returns InvalidParameter.loginToken(400).
    shared_ptr<string> loginToken_ {};
    // The application startup parameters.
    shared_ptr<string> param_ {};
    // The product type.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // Specifies whether UUID validation is required.
    shared_ptr<bool> requireUuidValidation_ {};
    // The resource ID.
    // 
    // > Used when connecting to a cloud phone. Pass the persistent session ID that corresponds to the cloud phone instance.
    // > When connecting to a cloud browser, pass the cloud browser ID.
    // > When connecting to a cloud application, pass the application ID for the application authorization scenario, the delivery group ID for the delivery group authorization scenario, or the persistent session ID for the persistent session authorization scenario.
    shared_ptr<string> resourceId_ {};
    // The logon session ID. Obtained by calling the GetLoginToken or GetStsToken API operation. This parameter is used together with LoginToken.
    // The GetLoginToken and GetStsToken API operations belong to the client logon authentication APIs of the 2021-02-20 version of WUYING Cloud App (product code: appstream-center). These two API operations are not provided in the 2021-09-03 version. OpenAPI Explorer links: https://api.aliyun.com/api/appstream-center/2021-02-20/GetLoginToken and https://api.aliyun.com/api/appstream-center/2021-02-20/GetStsToken.
    // Note: This parameter is required. If it is not provided, the API returns InvalidParameter.sessionId(400). This parameter must be used together with LoginToken.
    shared_ptr<string> sessionId_ {};
    // The node ID.
    // 
    // > Required when you invoke the API not for the first time. Use this parameter query to check the node status and connection credentials.
    shared_ptr<string> taskId_ {};
    // The tenant ID, which is the Alibaba Cloud account UID.
    shared_ptr<string> tenantId_ {};
    // The unique identifier of the logon device.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
