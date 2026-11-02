// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYAPISHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYAPISHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CreateGatewayApiShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayApiShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuthRuleName, authRuleName_);
      DARABONBA_PTR_TO_JSON(CacheRule, cacheRuleShrink_);
      DARABONBA_PTR_TO_JSON(Charset, charset_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(DefaultLimitRule, defaultLimitRuleShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HeaderRules, headerRulesShrink_);
      DARABONBA_PTR_TO_JSON(InterfaceType, interfaceType_);
      DARABONBA_PTR_TO_JSON(LimitRule, limitRuleShrink_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(MethodName, methodName_);
      DARABONBA_PTR_TO_JSON(MigrateRule, migrateRuleShrink_);
      DARABONBA_PTR_TO_JSON(MockRule, mockRuleShrink_);
      DARABONBA_PTR_TO_JSON(NeedEncrypt, needEncrypt_);
      DARABONBA_PTR_TO_JSON(NeedJsonp, needJsonp_);
      DARABONBA_PTR_TO_JSON(NeedSign, needSign_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RequestBodyModel, requestBodyModel_);
      DARABONBA_PTR_TO_JSON(RequestParams, requestParamsShrink_);
      DARABONBA_PTR_TO_JSON(ResponseBodyModel, responseBodyModel_);
      DARABONBA_PTR_TO_JSON(RpcParameterTypes, rpcParameterTypesShrink_);
      DARABONBA_PTR_TO_JSON(Serialization, serialization_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayApiShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuthRuleName, authRuleName_);
      DARABONBA_PTR_FROM_JSON(CacheRule, cacheRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Charset, charset_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(DefaultLimitRule, defaultLimitRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HeaderRules, headerRulesShrink_);
      DARABONBA_PTR_FROM_JSON(InterfaceType, interfaceType_);
      DARABONBA_PTR_FROM_JSON(LimitRule, limitRuleShrink_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(MethodName, methodName_);
      DARABONBA_PTR_FROM_JSON(MigrateRule, migrateRuleShrink_);
      DARABONBA_PTR_FROM_JSON(MockRule, mockRuleShrink_);
      DARABONBA_PTR_FROM_JSON(NeedEncrypt, needEncrypt_);
      DARABONBA_PTR_FROM_JSON(NeedJsonp, needJsonp_);
      DARABONBA_PTR_FROM_JSON(NeedSign, needSign_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RequestBodyModel, requestBodyModel_);
      DARABONBA_PTR_FROM_JSON(RequestParams, requestParamsShrink_);
      DARABONBA_PTR_FROM_JSON(ResponseBodyModel, responseBodyModel_);
      DARABONBA_PTR_FROM_JSON(RpcParameterTypes, rpcParameterTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Serialization, serialization_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateGatewayApiShrinkRequest() = default ;
    CreateGatewayApiShrinkRequest(const CreateGatewayApiShrinkRequest &) = default ;
    CreateGatewayApiShrinkRequest(CreateGatewayApiShrinkRequest &&) = default ;
    CreateGatewayApiShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayApiShrinkRequest() = default ;
    CreateGatewayApiShrinkRequest& operator=(const CreateGatewayApiShrinkRequest &) = default ;
    CreateGatewayApiShrinkRequest& operator=(CreateGatewayApiShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && this->apiStatus_ == nullptr && this->apiType_ == nullptr && this->appId_ == nullptr && this->authRuleName_ == nullptr && this->cacheRuleShrink_ == nullptr
        && this->charset_ == nullptr && this->contentType_ == nullptr && this->defaultLimitRuleShrink_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr
        && this->headerRulesShrink_ == nullptr && this->interfaceType_ == nullptr && this->limitRuleShrink_ == nullptr && this->method_ == nullptr && this->methodName_ == nullptr
        && this->migrateRuleShrink_ == nullptr && this->mockRuleShrink_ == nullptr && this->needEncrypt_ == nullptr && this->needJsonp_ == nullptr && this->needSign_ == nullptr
        && this->operationType_ == nullptr && this->path_ == nullptr && this->requestBodyModel_ == nullptr && this->requestParamsShrink_ == nullptr && this->responseBodyModel_ == nullptr
        && this->rpcParameterTypesShrink_ == nullptr && this->serialization_ == nullptr && this->tenantId_ == nullptr && this->timeout_ == nullptr && this->workspaceId_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline CreateGatewayApiShrinkRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline string getApiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
    inline CreateGatewayApiShrinkRequest& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string getApiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline CreateGatewayApiShrinkRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateGatewayApiShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // authRuleName Field Functions 
    bool hasAuthRuleName() const { return this->authRuleName_ != nullptr;};
    void deleteAuthRuleName() { this->authRuleName_ = nullptr;};
    inline string getAuthRuleName() const { DARABONBA_PTR_GET_DEFAULT(authRuleName_, "") };
    inline CreateGatewayApiShrinkRequest& setAuthRuleName(string authRuleName) { DARABONBA_PTR_SET_VALUE(authRuleName_, authRuleName) };


    // cacheRuleShrink Field Functions 
    bool hasCacheRuleShrink() const { return this->cacheRuleShrink_ != nullptr;};
    void deleteCacheRuleShrink() { this->cacheRuleShrink_ = nullptr;};
    inline string getCacheRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(cacheRuleShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setCacheRuleShrink(string cacheRuleShrink) { DARABONBA_PTR_SET_VALUE(cacheRuleShrink_, cacheRuleShrink) };


    // charset Field Functions 
    bool hasCharset() const { return this->charset_ != nullptr;};
    void deleteCharset() { this->charset_ = nullptr;};
    inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
    inline CreateGatewayApiShrinkRequest& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreateGatewayApiShrinkRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // defaultLimitRuleShrink Field Functions 
    bool hasDefaultLimitRuleShrink() const { return this->defaultLimitRuleShrink_ != nullptr;};
    void deleteDefaultLimitRuleShrink() { this->defaultLimitRuleShrink_ = nullptr;};
    inline string getDefaultLimitRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(defaultLimitRuleShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setDefaultLimitRuleShrink(string defaultLimitRuleShrink) { DARABONBA_PTR_SET_VALUE(defaultLimitRuleShrink_, defaultLimitRuleShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGatewayApiShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateGatewayApiShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // headerRulesShrink Field Functions 
    bool hasHeaderRulesShrink() const { return this->headerRulesShrink_ != nullptr;};
    void deleteHeaderRulesShrink() { this->headerRulesShrink_ = nullptr;};
    inline string getHeaderRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(headerRulesShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setHeaderRulesShrink(string headerRulesShrink) { DARABONBA_PTR_SET_VALUE(headerRulesShrink_, headerRulesShrink) };


    // interfaceType Field Functions 
    bool hasInterfaceType() const { return this->interfaceType_ != nullptr;};
    void deleteInterfaceType() { this->interfaceType_ = nullptr;};
    inline string getInterfaceType() const { DARABONBA_PTR_GET_DEFAULT(interfaceType_, "") };
    inline CreateGatewayApiShrinkRequest& setInterfaceType(string interfaceType) { DARABONBA_PTR_SET_VALUE(interfaceType_, interfaceType) };


    // limitRuleShrink Field Functions 
    bool hasLimitRuleShrink() const { return this->limitRuleShrink_ != nullptr;};
    void deleteLimitRuleShrink() { this->limitRuleShrink_ = nullptr;};
    inline string getLimitRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(limitRuleShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setLimitRuleShrink(string limitRuleShrink) { DARABONBA_PTR_SET_VALUE(limitRuleShrink_, limitRuleShrink) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateGatewayApiShrinkRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // methodName Field Functions 
    bool hasMethodName() const { return this->methodName_ != nullptr;};
    void deleteMethodName() { this->methodName_ = nullptr;};
    inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
    inline CreateGatewayApiShrinkRequest& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


    // migrateRuleShrink Field Functions 
    bool hasMigrateRuleShrink() const { return this->migrateRuleShrink_ != nullptr;};
    void deleteMigrateRuleShrink() { this->migrateRuleShrink_ = nullptr;};
    inline string getMigrateRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(migrateRuleShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setMigrateRuleShrink(string migrateRuleShrink) { DARABONBA_PTR_SET_VALUE(migrateRuleShrink_, migrateRuleShrink) };


    // mockRuleShrink Field Functions 
    bool hasMockRuleShrink() const { return this->mockRuleShrink_ != nullptr;};
    void deleteMockRuleShrink() { this->mockRuleShrink_ = nullptr;};
    inline string getMockRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(mockRuleShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setMockRuleShrink(string mockRuleShrink) { DARABONBA_PTR_SET_VALUE(mockRuleShrink_, mockRuleShrink) };


    // needEncrypt Field Functions 
    bool hasNeedEncrypt() const { return this->needEncrypt_ != nullptr;};
    void deleteNeedEncrypt() { this->needEncrypt_ = nullptr;};
    inline bool getNeedEncrypt() const { DARABONBA_PTR_GET_DEFAULT(needEncrypt_, false) };
    inline CreateGatewayApiShrinkRequest& setNeedEncrypt(bool needEncrypt) { DARABONBA_PTR_SET_VALUE(needEncrypt_, needEncrypt) };


    // needJsonp Field Functions 
    bool hasNeedJsonp() const { return this->needJsonp_ != nullptr;};
    void deleteNeedJsonp() { this->needJsonp_ = nullptr;};
    inline bool getNeedJsonp() const { DARABONBA_PTR_GET_DEFAULT(needJsonp_, false) };
    inline CreateGatewayApiShrinkRequest& setNeedJsonp(bool needJsonp) { DARABONBA_PTR_SET_VALUE(needJsonp_, needJsonp) };


    // needSign Field Functions 
    bool hasNeedSign() const { return this->needSign_ != nullptr;};
    void deleteNeedSign() { this->needSign_ = nullptr;};
    inline bool getNeedSign() const { DARABONBA_PTR_GET_DEFAULT(needSign_, false) };
    inline CreateGatewayApiShrinkRequest& setNeedSign(bool needSign) { DARABONBA_PTR_SET_VALUE(needSign_, needSign) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CreateGatewayApiShrinkRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateGatewayApiShrinkRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestBodyModel Field Functions 
    bool hasRequestBodyModel() const { return this->requestBodyModel_ != nullptr;};
    void deleteRequestBodyModel() { this->requestBodyModel_ = nullptr;};
    inline string getRequestBodyModel() const { DARABONBA_PTR_GET_DEFAULT(requestBodyModel_, "") };
    inline CreateGatewayApiShrinkRequest& setRequestBodyModel(string requestBodyModel) { DARABONBA_PTR_SET_VALUE(requestBodyModel_, requestBodyModel) };


    // requestParamsShrink Field Functions 
    bool hasRequestParamsShrink() const { return this->requestParamsShrink_ != nullptr;};
    void deleteRequestParamsShrink() { this->requestParamsShrink_ = nullptr;};
    inline string getRequestParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(requestParamsShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setRequestParamsShrink(string requestParamsShrink) { DARABONBA_PTR_SET_VALUE(requestParamsShrink_, requestParamsShrink) };


    // responseBodyModel Field Functions 
    bool hasResponseBodyModel() const { return this->responseBodyModel_ != nullptr;};
    void deleteResponseBodyModel() { this->responseBodyModel_ = nullptr;};
    inline string getResponseBodyModel() const { DARABONBA_PTR_GET_DEFAULT(responseBodyModel_, "") };
    inline CreateGatewayApiShrinkRequest& setResponseBodyModel(string responseBodyModel) { DARABONBA_PTR_SET_VALUE(responseBodyModel_, responseBodyModel) };


    // rpcParameterTypesShrink Field Functions 
    bool hasRpcParameterTypesShrink() const { return this->rpcParameterTypesShrink_ != nullptr;};
    void deleteRpcParameterTypesShrink() { this->rpcParameterTypesShrink_ = nullptr;};
    inline string getRpcParameterTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(rpcParameterTypesShrink_, "") };
    inline CreateGatewayApiShrinkRequest& setRpcParameterTypesShrink(string rpcParameterTypesShrink) { DARABONBA_PTR_SET_VALUE(rpcParameterTypesShrink_, rpcParameterTypesShrink) };


    // serialization Field Functions 
    bool hasSerialization() const { return this->serialization_ != nullptr;};
    void deleteSerialization() { this->serialization_ = nullptr;};
    inline string getSerialization() const { DARABONBA_PTR_GET_DEFAULT(serialization_, "") };
    inline CreateGatewayApiShrinkRequest& setSerialization(string serialization) { DARABONBA_PTR_SET_VALUE(serialization_, serialization) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateGatewayApiShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CreateGatewayApiShrinkRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateGatewayApiShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> apiName_ {};
    shared_ptr<string> apiStatus_ {};
    // This parameter is required.
    shared_ptr<string> apiType_ {};
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> authRuleName_ {};
    shared_ptr<string> cacheRuleShrink_ {};
    shared_ptr<string> charset_ {};
    shared_ptr<string> contentType_ {};
    shared_ptr<string> defaultLimitRuleShrink_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    shared_ptr<string> headerRulesShrink_ {};
    shared_ptr<string> interfaceType_ {};
    shared_ptr<string> limitRuleShrink_ {};
    shared_ptr<string> method_ {};
    shared_ptr<string> methodName_ {};
    shared_ptr<string> migrateRuleShrink_ {};
    shared_ptr<string> mockRuleShrink_ {};
    shared_ptr<bool> needEncrypt_ {};
    shared_ptr<bool> needJsonp_ {};
    shared_ptr<bool> needSign_ {};
    // This parameter is required.
    shared_ptr<string> operationType_ {};
    shared_ptr<string> path_ {};
    shared_ptr<string> requestBodyModel_ {};
    shared_ptr<string> requestParamsShrink_ {};
    shared_ptr<string> responseBodyModel_ {};
    shared_ptr<string> rpcParameterTypesShrink_ {};
    shared_ptr<string> serialization_ {};
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    shared_ptr<int32_t> timeout_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
