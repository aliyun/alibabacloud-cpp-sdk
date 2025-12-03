// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDAPI20160714_HPP_
#define ALIBABACLOUD_CLOUDAPI20160714_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudAPI20160714Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudAPI20160714.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Unpublishes a specified API from a specified runtime environment.
       *
       * @description *   This operation is intended for API providers and is the opposite of DeployApi.
       * *   An API can be unpublished from a specified runtime environment in under 5 seconds.
       * *   An unpublished API cannot be called in the specified runtime environment.
       *
       * @param request AbolishApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbolishApiResponse
       */
      Models::AbolishApiResponse abolishApiWithOptions(const Models::AbolishApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a specified API from a specified runtime environment.
       *
       * @description *   This operation is intended for API providers and is the opposite of DeployApi.
       * *   An API can be unpublished from a specified runtime environment in under 5 seconds.
       * *   An unpublished API cannot be called in the specified runtime environment.
       *
       * @param request AbolishApiRequest
       * @return AbolishApiResponse
       */
      Models::AbolishApiResponse abolishApi(const Models::AbolishApiRequest &request);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated instances. Adds an IP address entry to the access control polocy of an instance.
       *
       * @param request AddAccessControlListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAccessControlListEntryResponse
       */
      Models::AddAccessControlListEntryResponse addAccessControlListEntryWithOptions(const Models::AddAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated instances. Adds an IP address entry to the access control polocy of an instance.
       *
       * @param request AddAccessControlListEntryRequest
       * @return AddAccessControlListEntryResponse
       */
      Models::AddAccessControlListEntryResponse addAccessControlListEntry(const Models::AddAccessControlListEntryRequest &request);

      /**
       * @summary Adds a policy to an existing ACL.
       *
       * @description When you call this operation, note that:
       * *   This operation is intended for API providers.
       * *   An added policy immediately takes effect on all APIs that are bound to the access control list (ACL).
       * *   A maximum of 100 policies can be added to an ACL.
       *
       * @param request AddIpControlPolicyItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIpControlPolicyItemResponse
       */
      Models::AddIpControlPolicyItemResponse addIpControlPolicyItemWithOptions(const Models::AddIpControlPolicyItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a policy to an existing ACL.
       *
       * @description When you call this operation, note that:
       * *   This operation is intended for API providers.
       * *   An added policy immediately takes effect on all APIs that are bound to the access control list (ACL).
       * *   A maximum of 100 policies can be added to an ACL.
       *
       * @param request AddIpControlPolicyItemRequest
       * @return AddIpControlPolicyItemResponse
       */
      Models::AddIpControlPolicyItemResponse addIpControlPolicyItem(const Models::AddIpControlPolicyItemRequest &request);

      /**
       * @summary Adds a custom special policy to a specified throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   If the input SpecialKey already exists, the previous configuration is overwritten. Use caution when calling this operation.
       * *   Special throttling policies must be added to an existing throttling policy, and can take effect on all the APIs to which the throttling policy is bound.
       *
       * @param request AddTrafficSpecialControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTrafficSpecialControlResponse
       */
      Models::AddTrafficSpecialControlResponse addTrafficSpecialControlWithOptions(const Models::AddTrafficSpecialControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom special policy to a specified throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   If the input SpecialKey already exists, the previous configuration is overwritten. Use caution when calling this operation.
       * *   Special throttling policies must be added to an existing throttling policy, and can take effect on all the APIs to which the throttling policy is bound.
       *
       * @param request AddTrafficSpecialControlRequest
       * @return AddTrafficSpecialControlResponse
       */
      Models::AddTrafficSpecialControlResponse addTrafficSpecialControl(const Models::AddTrafficSpecialControlRequest &request);

      /**
       * @summary Associates an internal domain name resolution with a dedicated instance.
       *
       * @description An internal domain name resolution can be associated only with a dedicated instance, not with a shared instance or shared instance cluster.
       *
       * @param tmpReq AssociateInstanceWithPrivateDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateInstanceWithPrivateDNSResponse
       */
      Models::AssociateInstanceWithPrivateDNSResponse associateInstanceWithPrivateDNSWithOptions(const Models::AssociateInstanceWithPrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an internal domain name resolution with a dedicated instance.
       *
       * @description An internal domain name resolution can be associated only with a dedicated instance, not with a shared instance or shared instance cluster.
       *
       * @param request AssociateInstanceWithPrivateDNSRequest
       * @return AssociateInstanceWithPrivateDNSResponse
       */
      Models::AssociateInstanceWithPrivateDNSResponse associateInstanceWithPrivateDNS(const Models::AssociateInstanceWithPrivateDNSRequest &request);

      /**
       * @summary Attaches APIs to an API product. If the API product does not exist, the system automatically creates the API product.
       *
       * @param request AttachApiProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachApiProductResponse
       */
      Models::AttachApiProductResponse attachApiProductWithOptions(const Models::AttachApiProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches APIs to an API product. If the API product does not exist, the system automatically creates the API product.
       *
       * @param request AttachApiProductRequest
       * @return AttachApiProductResponse
       */
      Models::AttachApiProductResponse attachApiProduct(const Models::AttachApiProductRequest &request);

      /**
       * @summary Attach plugin to API group.
       *
       * @param request AttachGroupPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachGroupPluginResponse
       */
      Models::AttachGroupPluginResponse attachGroupPluginWithOptions(const Models::AttachGroupPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attach plugin to API group.
       *
       * @param request AttachGroupPluginRequest
       * @return AttachGroupPluginResponse
       */
      Models::AttachGroupPluginResponse attachGroupPlugin(const Models::AttachGroupPluginRequest &request);

      /**
       * @summary Binds a plug-in to an API.
       *
       * @description *   This operation is intended for API providers.
       * *   You can only bind plug-ins to published APIs.
       * *   The plug-in takes effect immediately after it is bound to an API.
       * *   If you bind a different plug-in to an API, this plug-in takes effect immediately.
       *
       * @param request AttachPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPluginResponse
       */
      Models::AttachPluginResponse attachPluginWithOptions(const Models::AttachPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a plug-in to an API.
       *
       * @description *   This operation is intended for API providers.
       * *   You can only bind plug-ins to published APIs.
       * *   The plug-in takes effect immediately after it is bound to an API.
       * *   If you bind a different plug-in to an API, this plug-in takes effect immediately.
       *
       * @param request AttachPluginRequest
       * @return AttachPluginResponse
       */
      Models::AttachPluginResponse attachPlugin(const Models::AttachPluginRequest &request);

      /**
       * @summary Unpublishes multiple published APIs at a time.
       *
       * @param request BatchAbolishApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAbolishApisResponse
       */
      Models::BatchAbolishApisResponse batchAbolishApisWithOptions(const Models::BatchAbolishApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes multiple published APIs at a time.
       *
       * @param request BatchAbolishApisRequest
       * @return BatchAbolishApisResponse
       */
      Models::BatchAbolishApisResponse batchAbolishApis(const Models::BatchAbolishApisRequest &request);

      /**
       * @summary Publishes multiple APIs at a time.
       *
       * @param request BatchDeployApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeployApisResponse
       */
      Models::BatchDeployApisResponse batchDeployApisWithOptions(const Models::BatchDeployApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes multiple APIs at a time.
       *
       * @param request BatchDeployApisRequest
       * @return BatchDeployApisResponse
       */
      Models::BatchDeployApisResponse batchDeployApis(const Models::BatchDeployApisRequest &request);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated instances. Creates an Access Control List (ACL). Each user is allowed to create five ACLs in each region.
       *
       * @param request CreateAccessControlListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessControlListResponse
       */
      Models::CreateAccessControlListResponse createAccessControlListWithOptions(const Models::CreateAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated instances. Creates an Access Control List (ACL). Each user is allowed to create five ACLs in each region.
       *
       * @param request CreateAccessControlListRequest
       * @return CreateAccessControlListResponse
       */
      Models::CreateAccessControlListResponse createAccessControlList(const Models::CreateAccessControlListRequest &request);

      /**
       * @summary Creates an API.
       *
       * @description *   This operation is intended for API providers.
       * *   The name of an API must be unique within an API group.
       * *   A request path must be unique within an API group.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request CreateApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiResponse
       */
      Models::CreateApiResponse createApiWithOptions(const Models::CreateApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API.
       *
       * @description *   This operation is intended for API providers.
       * *   The name of an API must be unique within an API group.
       * *   A request path must be unique within an API group.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request CreateApiRequest
       * @return CreateApiResponse
       */
      Models::CreateApiResponse createApi(const Models::CreateApiRequest &request);

      /**
       * @summary 创建API分组
       *
       * @param request CreateApiGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiGroupResponse
       */
      Models::CreateApiGroupResponse createApiGroupWithOptions(const Models::CreateApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建API分组
       *
       * @param request CreateApiGroupRequest
       * @return CreateApiGroupResponse
       */
      Models::CreateApiGroupResponse createApiGroup(const Models::CreateApiGroupRequest &request);

      /**
       * @summary Adds a variable to an environment.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request CreateApiStageVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiStageVariableResponse
       */
      Models::CreateApiStageVariableResponse createApiStageVariableWithOptions(const Models::CreateApiStageVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a variable to an environment.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request CreateApiStageVariableRequest
       * @return CreateApiStageVariableResponse
       */
      Models::CreateApiStageVariableResponse createApiStageVariable(const Models::CreateApiStageVariableRequest &request);

      /**
       * @summary Creates an application for calling APIs in API Gateway.
       *
       * @description *   This operation is intended for API callers.
       * *   Each application has a key-value pair which is used for identity verification when you call an API.
       * *   An application must be authorized to call an API.
       * *   Each application has only one key-value pair, which can be reset if the pair is leaked.
       * *   A maximum of 1,000 applications can be created for each Alibaba Cloud account.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request CreateAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createAppWithOptions(const Models::CreateAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application for calling APIs in API Gateway.
       *
       * @description *   This operation is intended for API callers.
       * *   Each application has a key-value pair which is used for identity verification when you call an API.
       * *   An application must be authorized to call an API.
       * *   Each application has only one key-value pair, which can be reset if the pair is leaked.
       * *   A maximum of 1,000 applications can be created for each Alibaba Cloud account.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request CreateAppRequest
       * @return CreateAppResponse
       */
      Models::CreateAppResponse createApp(const Models::CreateAppRequest &request);

      /**
       * @summary Adds an AppCode to an application.
       *
       * @param request CreateAppCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppCodeResponse
       */
      Models::CreateAppCodeResponse createAppCodeWithOptions(const Models::CreateAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AppCode to an application.
       *
       * @param request CreateAppCodeRequest
       * @return CreateAppCodeResponse
       */
      Models::CreateAppCodeResponse createAppCode(const Models::CreateAppCodeRequest &request);

      /**
       * @summary Adds an AppKey and AppSecret pair to an application.
       *
       * @param request CreateAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppKeyResponse
       */
      Models::CreateAppKeyResponse createAppKeyWithOptions(const Models::CreateAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AppKey and AppSecret pair to an application.
       *
       * @param request CreateAppKeyRequest
       * @return CreateAppKeyResponse
       */
      Models::CreateAppKeyResponse createAppKey(const Models::CreateAppKeyRequest &request);

      /**
       * @summary Creates a backend service in API Gateway.
       *
       * @param request CreateBackendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackendResponse
       */
      Models::CreateBackendResponse createBackendWithOptions(const Models::CreateBackendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backend service in API Gateway.
       *
       * @param request CreateBackendRequest
       * @return CreateBackendResponse
       */
      Models::CreateBackendResponse createBackend(const Models::CreateBackendRequest &request);

      /**
       * @summary 创建后端服务在环境上的配置
       *
       * @param request CreateBackendModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBackendModelResponse
       */
      Models::CreateBackendModelResponse createBackendModelWithOptions(const Models::CreateBackendModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建后端服务在环境上的配置
       *
       * @param request CreateBackendModelRequest
       * @return CreateBackendModelResponse
       */
      Models::CreateBackendModelResponse createBackendModel(const Models::CreateBackendModelRequest &request);

      /**
       * @summary Creates a custom dataset.
       *
       * @param request CreateDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDatasetWithOptions(const Models::CreateDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom dataset.
       *
       * @param request CreateDatasetRequest
       * @return CreateDatasetResponse
       */
      Models::CreateDatasetResponse createDataset(const Models::CreateDatasetRequest &request);

      /**
       * @summary 创建自定义数据集条目
       *
       * @param request CreateDatasetItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDatasetItemResponse
       */
      Models::CreateDatasetItemResponse createDatasetItemWithOptions(const Models::CreateDatasetItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义数据集条目
       *
       * @param request CreateDatasetItemRequest
       * @return CreateDatasetItemResponse
       */
      Models::CreateDatasetItemResponse createDatasetItem(const Models::CreateDatasetItemRequest &request);

      /**
       * @summary Creates an API Gateway instance.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API Gateway instance.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 创建内网域名
       *
       * @param request CreateIntranetDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIntranetDomainResponse
       */
      Models::CreateIntranetDomainResponse createIntranetDomainWithOptions(const Models::CreateIntranetDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建内网域名
       *
       * @param request CreateIntranetDomainRequest
       * @return CreateIntranetDomainResponse
       */
      Models::CreateIntranetDomainResponse createIntranetDomain(const Models::CreateIntranetDomainRequest &request);

      /**
       * @summary Creates an access control list (ACL) in a region.
       *
       * @description *   This operation is intended for API providers.
       * *   An ACL must be bound to an API to take effect. After an ACL is bound to an API, the ACL takes effect on the API immediately.
       * *   You can add policies to an ACL when you create the ACL.
       * *   If an ACL does not have any policy, the ACL is ineffective.
       *
       * @param request CreateIpControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpControlResponse
       */
      Models::CreateIpControlResponse createIpControlWithOptions(const Models::CreateIpControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access control list (ACL) in a region.
       *
       * @description *   This operation is intended for API providers.
       * *   An ACL must be bound to an API to take effect. After an ACL is bound to an API, the ACL takes effect on the API immediately.
       * *   You can add policies to an ACL when you create the ACL.
       * *   If an ACL does not have any policy, the ACL is ineffective.
       *
       * @param request CreateIpControlRequest
       * @return CreateIpControlResponse
       */
      Models::CreateIpControlResponse createIpControl(const Models::CreateIpControlRequest &request);

      /**
       * @summary Creates a Simple Log Service configuration for an API.
       *
       * @param request CreateLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogConfigResponse
       */
      Models::CreateLogConfigResponse createLogConfigWithOptions(const Models::CreateLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Simple Log Service configuration for an API.
       *
       * @param request CreateLogConfigRequest
       * @return CreateLogConfigResponse
       */
      Models::CreateLogConfigResponse createLogConfig(const Models::CreateLogConfigRequest &request);

      /**
       * @summary Creates a model for an API group.
       *
       * @description *   For more information about the model definition, see [JSON Schema Draft 4](https://tools.ietf.org/html/draft-zyp-json-schema-04?spm=a2c4g.11186623.2.10.2e977ff7p4BpQd).
       * *   JSON Schema supports only element attributes of the Object type.
       *
       * @param request CreateModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const Models::CreateModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model for an API group.
       *
       * @description *   For more information about the model definition, see [JSON Schema Draft 4](https://tools.ietf.org/html/draft-zyp-json-schema-04?spm=a2c4g.11186623.2.10.2e977ff7p4BpQd).
       * *   JSON Schema supports only element attributes of the Object type.
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const Models::CreateModelRequest &request);

      /**
       * @summary Enables CloudMonitor alerting for a specified API group.
       *
       * @param request CreateMonitorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupResponse
       */
      Models::CreateMonitorGroupResponse createMonitorGroupWithOptions(const Models::CreateMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables CloudMonitor alerting for a specified API group.
       *
       * @param request CreateMonitorGroupRequest
       * @return CreateMonitorGroupResponse
       */
      Models::CreateMonitorGroupResponse createMonitorGroup(const Models::CreateMonitorGroupRequest &request);

      /**
       * @summary Creates a plug-in.
       *
       * @description *   This operation is intended for API providers.
       * *   The number of plug-ins of the same type that each user can create is limited. Different limits apply to different plug-in types.
       * *   The plug-in definitions for advanced features are restricted.
       * *   Plug-ins must be bound to APIs to take effect. After a plug-in is bound, it takes effect on that API immediately.
       *
       * @param request CreatePluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginResponse
       */
      Models::CreatePluginResponse createPluginWithOptions(const Models::CreatePluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a plug-in.
       *
       * @description *   This operation is intended for API providers.
       * *   The number of plug-ins of the same type that each user can create is limited. Different limits apply to different plug-in types.
       * *   The plug-in definitions for advanced features are restricted.
       * *   Plug-ins must be bound to APIs to take effect. After a plug-in is bound, it takes effect on that API immediately.
       *
       * @param request CreatePluginRequest
       * @return CreatePluginResponse
       */
      Models::CreatePluginResponse createPlugin(const Models::CreatePluginRequest &request);

      /**
       * @summary Creates an internal domain name resolution and adds a resolution record.
       *
       * @description An internal domain name resolution of the virtual private cloud (VPC) type can be bound only to traditional dedicated instances. An internal domain name resolution of the A type can be bound only to VPC integration dedicated instances.
       *
       * @param tmpReq CreatePrivateDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePrivateDNSResponse
       */
      Models::CreatePrivateDNSResponse createPrivateDNSWithOptions(const Models::CreatePrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an internal domain name resolution and adds a resolution record.
       *
       * @description An internal domain name resolution of the virtual private cloud (VPC) type can be bound only to traditional dedicated instances. An internal domain name resolution of the A type can be bound only to VPC integration dedicated instances.
       *
       * @param request CreatePrivateDNSRequest
       * @return CreatePrivateDNSResponse
       */
      Models::CreatePrivateDNSResponse createPrivateDNS(const Models::CreatePrivateDNSRequest &request);

      /**
       * @summary Creates a backend signature key.
       *
       * @description *   This API is intended for API providers.
       * *   The API operation only creates a key policy. You must call the binding operation to bind the key to an API.
       * *   After the key is bound to the API, requests sent from API Gateway to the backend service contain signature strings. You can specify whether your backend service verifies these signature strings.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request CreateSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSignatureResponse
       */
      Models::CreateSignatureResponse createSignatureWithOptions(const Models::CreateSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backend signature key.
       *
       * @description *   This API is intended for API providers.
       * *   The API operation only creates a key policy. You must call the binding operation to bind the key to an API.
       * *   After the key is bound to the API, requests sent from API Gateway to the backend service contain signature strings. You can specify whether your backend service verifies these signature strings.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request CreateSignatureRequest
       * @return CreateSignatureResponse
       */
      Models::CreateSignatureResponse createSignature(const Models::CreateSignatureRequest &request);

      /**
       * @summary Creates a custom throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   Throttling policies must be bound to APIs to take effect. After a policy is bound to an API, it goes into effect on that API immediately.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request CreateTrafficControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTrafficControlResponse
       */
      Models::CreateTrafficControlResponse createTrafficControlWithOptions(const Models::CreateTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   Throttling policies must be bound to APIs to take effect. After a policy is bound to an API, it goes into effect on that API immediately.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request CreateTrafficControlRequest
       * @return CreateTrafficControlResponse
       */
      Models::CreateTrafficControlResponse createTrafficControl(const Models::CreateTrafficControlRequest &request);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated instances. Deletes an access control policy.
       *
       * @param request DeleteAccessControlListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessControlListResponse
       */
      Models::DeleteAccessControlListResponse deleteAccessControlListWithOptions(const Models::DeleteAccessControlListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated instances. Deletes an access control policy.
       *
       * @param request DeleteAccessControlListRequest
       * @return DeleteAccessControlListResponse
       */
      Models::DeleteAccessControlListResponse deleteAccessControlList(const Models::DeleteAccessControlListRequest &request);

      /**
       * @summary Deletes all custom special policies of a specified throttling policy.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DeleteAllTrafficSpecialControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAllTrafficSpecialControlResponse
       */
      Models::DeleteAllTrafficSpecialControlResponse deleteAllTrafficSpecialControlWithOptions(const Models::DeleteAllTrafficSpecialControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all custom special policies of a specified throttling policy.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DeleteAllTrafficSpecialControlRequest
       * @return DeleteAllTrafficSpecialControlResponse
       */
      Models::DeleteAllTrafficSpecialControlResponse deleteAllTrafficSpecialControl(const Models::DeleteAllTrafficSpecialControlRequest &request);

      /**
       * @summary Deletes the definition of a specified API.
       *
       * @description *   This operation is intended for API providers and cannot be undone after it is complete.
       * *   An API that is running in the runtime environment must be unpublished before you can delete the API.****
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiResponse
       */
      Models::DeleteApiResponse deleteApiWithOptions(const Models::DeleteApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the definition of a specified API.
       *
       * @description *   This operation is intended for API providers and cannot be undone after it is complete.
       * *   An API that is running in the runtime environment must be unpublished before you can delete the API.****
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteApiRequest
       * @return DeleteApiResponse
       */
      Models::DeleteApiResponse deleteApi(const Models::DeleteApiRequest &request);

      /**
       * @summary Deletes an API group.
       *
       * @description *   This operation is intended for API providers.
       * *   An API group that contains APIs cannot be deleted. To delete the API group, you must first delete its APIs.
       * *   After an API group is deleted, the second-level domain name bound to the API group is automatically invalidated.
       * *   If the specified API group does not exist, a success response is returned.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteApiGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiGroupResponse
       */
      Models::DeleteApiGroupResponse deleteApiGroupWithOptions(const Models::DeleteApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API group.
       *
       * @description *   This operation is intended for API providers.
       * *   An API group that contains APIs cannot be deleted. To delete the API group, you must first delete its APIs.
       * *   After an API group is deleted, the second-level domain name bound to the API group is automatically invalidated.
       * *   If the specified API group does not exist, a success response is returned.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteApiGroupRequest
       * @return DeleteApiGroupResponse
       */
      Models::DeleteApiGroupResponse deleteApiGroup(const Models::DeleteApiGroupRequest &request);

      /**
       * @summary Deletes an API product. Deleting an API product causes the association between APIs and the deleted API product to be deleted as well. Exercise caution when you delete an API product. If any API in the API product is associated with an application, the API product fails to be deleted.
       *
       * @param request DeleteApiProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiProductResponse
       */
      Models::DeleteApiProductResponse deleteApiProductWithOptions(const Models::DeleteApiProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API product. Deleting an API product causes the association between APIs and the deleted API product to be deleted as well. Exercise caution when you delete an API product. If any API in the API product is associated with an application, the API product fails to be deleted.
       *
       * @param request DeleteApiProductRequest
       * @return DeleteApiProductResponse
       */
      Models::DeleteApiProductResponse deleteApiProduct(const Models::DeleteApiProductRequest &request);

      /**
       * @summary Deletes a specified variable in a specified environment.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DeleteApiStageVariableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiStageVariableResponse
       */
      Models::DeleteApiStageVariableResponse deleteApiStageVariableWithOptions(const Models::DeleteApiStageVariableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified variable in a specified environment.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DeleteApiStageVariableRequest
       * @return DeleteApiStageVariableResponse
       */
      Models::DeleteApiStageVariableResponse deleteApiStageVariable(const Models::DeleteApiStageVariableRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @description *   This operation is intended for API callers.
       * *   After an application is deleted, the application and its API authorization cannot be restored.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request DeleteAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteAppWithOptions(const Models::DeleteAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @description *   This operation is intended for API callers.
       * *   After an application is deleted, the application and its API authorization cannot be restored.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request DeleteAppRequest
       * @return DeleteAppResponse
       */
      Models::DeleteAppResponse deleteApp(const Models::DeleteAppRequest &request);

      /**
       * @summary Deletes the AppCode of an application.
       *
       * @param request DeleteAppCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppCodeResponse
       */
      Models::DeleteAppCodeResponse deleteAppCodeWithOptions(const Models::DeleteAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the AppCode of an application.
       *
       * @param request DeleteAppCodeRequest
       * @return DeleteAppCodeResponse
       */
      Models::DeleteAppCodeResponse deleteAppCode(const Models::DeleteAppCodeRequest &request);

      /**
       * @summary Deletes the AppKey and AppSecret of an application.
       *
       * @param request DeleteAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppKeyResponse
       */
      Models::DeleteAppKeyResponse deleteAppKeyWithOptions(const Models::DeleteAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the AppKey and AppSecret of an application.
       *
       * @param request DeleteAppKeyRequest
       * @return DeleteAppKeyResponse
       */
      Models::DeleteAppKeyResponse deleteAppKey(const Models::DeleteAppKeyRequest &request);

      /**
       * @summary Deletes a backend service.
       *
       * @param request DeleteBackendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackendResponse
       */
      Models::DeleteBackendResponse deleteBackendWithOptions(const Models::DeleteBackendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backend service.
       *
       * @param request DeleteBackendRequest
       * @return DeleteBackendResponse
       */
      Models::DeleteBackendResponse deleteBackend(const Models::DeleteBackendRequest &request);

      /**
       * @summary Deletes the definition of a backend service in an environment. After the definition is deleted, the API that uses the backend service and is published to this environment will be unpublished.
       *
       * @param request DeleteBackendModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackendModelResponse
       */
      Models::DeleteBackendModelResponse deleteBackendModelWithOptions(const Models::DeleteBackendModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the definition of a backend service in an environment. After the definition is deleted, the API that uses the backend service and is published to this environment will be unpublished.
       *
       * @param request DeleteBackendModelRequest
       * @return DeleteBackendModelResponse
       */
      Models::DeleteBackendModelResponse deleteBackendModel(const Models::DeleteBackendModelRequest &request);

      /**
       * @summary 删除自定义数据集
       *
       * @param request DeleteDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDatasetWithOptions(const Models::DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义数据集
       *
       * @param request DeleteDatasetRequest
       * @return DeleteDatasetResponse
       */
      Models::DeleteDatasetResponse deleteDataset(const Models::DeleteDatasetRequest &request);

      /**
       * @summary Deletes a data entry from a custom dataset.
       *
       * @param request DeleteDatasetItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDatasetItemResponse
       */
      Models::DeleteDatasetItemResponse deleteDatasetItemWithOptions(const Models::DeleteDatasetItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data entry from a custom dataset.
       *
       * @param request DeleteDatasetItemRequest
       * @return DeleteDatasetItemResponse
       */
      Models::DeleteDatasetItemResponse deleteDatasetItem(const Models::DeleteDatasetItemRequest &request);

      /**
       * @summary Unbinds a custom domain name from an API group.
       *
       * @description *   This operation is intended for API providers.
       * *   If the specified domain name does not exist, a successful response will still appear.
       * *   Unbinding a domain name from an API group will affect access to the APIs in the group. Exercise caution when using this operation.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a custom domain name from an API group.
       *
       * @description *   This operation is intended for API providers.
       * *   If the specified domain name does not exist, a successful response will still appear.
       * *   Unbinding a domain name from an API group will affect access to the APIs in the group. Exercise caution when using this operation.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Deletes the SSL certificate of a specified domain name. This operation is intended for API providers. If the SSL certificate does not exist, a success response is still returned. If the specified API group does not exist, the InvalidGroupId.NotFound error is returned. Access over HTTPS is not supported after the SSL certificate is deleted. Exercise caution when using this API operation.
       *
       * @param request DeleteDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainCertificateResponse
       */
      Models::DeleteDomainCertificateResponse deleteDomainCertificateWithOptions(const Models::DeleteDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the SSL certificate of a specified domain name. This operation is intended for API providers. If the SSL certificate does not exist, a success response is still returned. If the specified API group does not exist, the InvalidGroupId.NotFound error is returned. Access over HTTPS is not supported after the SSL certificate is deleted. Exercise caution when using this API operation.
       *
       * @param request DeleteDomainCertificateRequest
       * @return DeleteDomainCertificateResponse
       */
      Models::DeleteDomainCertificateResponse deleteDomainCertificate(const Models::DeleteDomainCertificateRequest &request);

      /**
       * @summary Deletes an API Gateway instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API Gateway instance.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       * *   If the ACL is bound to an API, you must unbind the ACL from the API before you can delete the ACL. Otherwise, an error is returned.
       * *   If you call this operation on an ACL that does not exist, a success message is returned.
       *
       * @param request DeleteIpControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpControlResponse
       */
      Models::DeleteIpControlResponse deleteIpControlWithOptions(const Models::DeleteIpControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       * *   If the ACL is bound to an API, you must unbind the ACL from the API before you can delete the ACL. Otherwise, an error is returned.
       * *   If you call this operation on an ACL that does not exist, a success message is returned.
       *
       * @param request DeleteIpControlRequest
       * @return DeleteIpControlResponse
       */
      Models::DeleteIpControlResponse deleteIpControl(const Models::DeleteIpControlRequest &request);

      /**
       * @summary Delete the specified log configuration.
       *
       * @param request DeleteLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogConfigResponse
       */
      Models::DeleteLogConfigResponse deleteLogConfigWithOptions(const Models::DeleteLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the specified log configuration.
       *
       * @param request DeleteLogConfigRequest
       * @return DeleteLogConfigResponse
       */
      Models::DeleteLogConfigResponse deleteLogConfig(const Models::DeleteLogConfigRequest &request);

      /**
       * @summary Deletes a model.
       *
       * @param request DeleteModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const Models::DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model.
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const Models::DeleteModelRequest &request);

      /**
       * @summary Deletes a CloudMonitor application group corresponding to an API group.
       *
       * @param request DeleteMonitorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorGroupResponse
       */
      Models::DeleteMonitorGroupResponse deleteMonitorGroupWithOptions(const Models::DeleteMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a CloudMonitor application group corresponding to an API group.
       *
       * @param request DeleteMonitorGroupRequest
       * @return DeleteMonitorGroupResponse
       */
      Models::DeleteMonitorGroupResponse deleteMonitorGroup(const Models::DeleteMonitorGroupRequest &request);

      /**
       * @summary Deletes a plug-in.
       *
       * @description *   This operation is intended for API providers.
       * *   You must first unbind the plug-in from the API. Otherwise, an error is reported when you delete the plug-in.
       *
       * @param request DeletePluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePluginResponse
       */
      Models::DeletePluginResponse deletePluginWithOptions(const Models::DeletePluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a plug-in.
       *
       * @description *   This operation is intended for API providers.
       * *   You must first unbind the plug-in from the API. Otherwise, an error is reported when you delete the plug-in.
       *
       * @param request DeletePluginRequest
       * @return DeletePluginResponse
       */
      Models::DeletePluginResponse deletePlugin(const Models::DeletePluginRequest &request);

      /**
       * @summary Deletes an internal domain name resolution.
       *
       * @param request DeletePrivateDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePrivateDNSResponse
       */
      Models::DeletePrivateDNSResponse deletePrivateDNSWithOptions(const Models::DeletePrivateDNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an internal domain name resolution.
       *
       * @param request DeletePrivateDNSRequest
       * @return DeletePrivateDNSResponse
       */
      Models::DeletePrivateDNSResponse deletePrivateDNS(const Models::DeletePrivateDNSRequest &request);

      /**
       * @summary Deletes a backend signature key.
       *
       * @description *   This API is intended for API providers.
       * *   This API operation deletes an existing backend signature key.
       * *   You cannot delete a key that is bound to an API. To delete the key, you must unbind it first.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSignatureResponse
       */
      Models::DeleteSignatureResponse deleteSignatureWithOptions(const Models::DeleteSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backend signature key.
       *
       * @description *   This API is intended for API providers.
       * *   This API operation deletes an existing backend signature key.
       * *   You cannot delete a key that is bound to an API. To delete the key, you must unbind it first.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteSignatureRequest
       * @return DeleteSignatureResponse
       */
      Models::DeleteSignatureResponse deleteSignature(const Models::DeleteSignatureRequest &request);

      /**
       * @summary Deletes a custom throttling policy and the special throttling rules in the policy.
       *
       * @description *   This API is intended for API providers.
       * *   If the throttling policy you want to delete is bound to APIs, you need to unbind the policy first. Otherwise, an error is reported when you delete the policy.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteTrafficControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficControlResponse
       */
      Models::DeleteTrafficControlResponse deleteTrafficControlWithOptions(const Models::DeleteTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom throttling policy and the special throttling rules in the policy.
       *
       * @description *   This API is intended for API providers.
       * *   If the throttling policy you want to delete is bound to APIs, you need to unbind the policy first. Otherwise, an error is reported when you delete the policy.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeleteTrafficControlRequest
       * @return DeleteTrafficControlResponse
       */
      Models::DeleteTrafficControlResponse deleteTrafficControl(const Models::DeleteTrafficControlRequest &request);

      /**
       * @summary Deletes a custom special throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   You can obtain the input parameters required in this operation by calling other APIs.
       *
       * @param request DeleteTrafficSpecialControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTrafficSpecialControlResponse
       */
      Models::DeleteTrafficSpecialControlResponse deleteTrafficSpecialControlWithOptions(const Models::DeleteTrafficSpecialControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom special throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   You can obtain the input parameters required in this operation by calling other APIs.
       *
       * @param request DeleteTrafficSpecialControlRequest
       * @return DeleteTrafficSpecialControlResponse
       */
      Models::DeleteTrafficSpecialControlResponse deleteTrafficSpecialControl(const Models::DeleteTrafficSpecialControlRequest &request);

      /**
       * @summary Publishes an API to an environment.
       *
       * @description *   This operation is intended for API providers. Only the API that you have defined and published to a runtime environment can be called.
       * *   An API is published to a cluster in under 5 seconds.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeployApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployApiResponse
       */
      Models::DeployApiResponse deployApiWithOptions(const Models::DeployApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an API to an environment.
       *
       * @description *   This operation is intended for API providers. Only the API that you have defined and published to a runtime environment can be called.
       * *   An API is published to a cluster in under 5 seconds.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request DeployApiRequest
       * @return DeployApiResponse
       */
      Models::DeployApiResponse deployApi(const Models::DeployApiRequest &request);

      /**
       * @summary 查询批量下线API任务
       *
       * @param request DescribeAbolishApiTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAbolishApiTaskResponse
       */
      Models::DescribeAbolishApiTaskResponse describeAbolishApiTaskWithOptions(const Models::DescribeAbolishApiTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询批量下线API任务
       *
       * @param request DescribeAbolishApiTaskRequest
       * @return DescribeAbolishApiTaskResponse
       */
      Models::DescribeAbolishApiTaskResponse describeAbolishApiTask(const Models::DescribeAbolishApiTaskRequest &request);

      /**
       * @summary This feature provides instance-level access control for dedicated instances. Queries the details of an access control policy.
       *
       * @param request DescribeAccessControlListAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessControlListAttributeResponse
       */
      Models::DescribeAccessControlListAttributeResponse describeAccessControlListAttributeWithOptions(const Models::DescribeAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control for dedicated instances. Queries the details of an access control policy.
       *
       * @param request DescribeAccessControlListAttributeRequest
       * @return DescribeAccessControlListAttributeResponse
       */
      Models::DescribeAccessControlListAttributeResponse describeAccessControlListAttribute(const Models::DescribeAccessControlListAttributeRequest &request);

      /**
       * @summary This feature provides instance-level access control for dedicated instances. Queries access control policies.
       *
       * @param request DescribeAccessControlListsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAccessControlListsResponse
       */
      Models::DescribeAccessControlListsResponse describeAccessControlListsWithOptions(const Models::DescribeAccessControlListsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control for dedicated instances. Queries access control policies.
       *
       * @param request DescribeAccessControlListsRequest
       * @return DescribeAccessControlListsResponse
       */
      Models::DescribeAccessControlListsResponse describeAccessControlLists(const Models::DescribeAccessControlListsRequest &request);

      /**
       * @summary Queries the definition of an API.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DescribeApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiResponse
       */
      Models::DescribeApiResponse describeApiWithOptions(const Models::DescribeApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the definition of an API.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DescribeApiRequest
       * @return DescribeApiResponse
       */
      Models::DescribeApiResponse describeApi(const Models::DescribeApiRequest &request);

      /**
       * @summary Queries the documentation of an API.
       *
       * @description *   For API callers, the specified API must be a public or authorized private API that has been published to a runtime environment.
       * *   When you call this operation as an API caller, the service information, parameter definitions, and other details of the API you specify are returned.
       * *   When you call this operation as an API provider, the definition of the specified API running in the specified runtime environment is returned. The returned definition takes effect in the runtime environment, and may be different from the definition of the API you modify.
       * *   Before you call this operation as an API provider, ensure that the API to be queried is a public one or that your application has been authorized to call the API, because authentication on API callers is required.
       *
       * @param request DescribeApiDocRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiDocResponse
       */
      Models::DescribeApiDocResponse describeApiDocWithOptions(const Models::DescribeApiDocRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the documentation of an API.
       *
       * @description *   For API callers, the specified API must be a public or authorized private API that has been published to a runtime environment.
       * *   When you call this operation as an API caller, the service information, parameter definitions, and other details of the API you specify are returned.
       * *   When you call this operation as an API provider, the definition of the specified API running in the specified runtime environment is returned. The returned definition takes effect in the runtime environment, and may be different from the definition of the API you modify.
       * *   Before you call this operation as an API provider, ensure that the API to be queried is a public one or that your application has been authorized to call the API, because authentication on API callers is required.
       *
       * @param request DescribeApiDocRequest
       * @return DescribeApiDocResponse
       */
      Models::DescribeApiDocResponse describeApiDoc(const Models::DescribeApiDocRequest &request);

      /**
       * @summary You can call this operation to query details about an API group, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DescribeApiGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiGroupResponse
       */
      Models::DescribeApiGroupResponse describeApiGroupWithOptions(const Models::DescribeApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query details about an API group, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DescribeApiGroupRequest
       * @return DescribeApiGroupResponse
       */
      Models::DescribeApiGroupResponse describeApiGroup(const Models::DescribeApiGroupRequest &request);

      /**
       * @summary Queries the VPC whitelist that is allowed to access an API group.
       *
       * @param request DescribeApiGroupVpcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiGroupVpcWhitelistResponse
       */
      Models::DescribeApiGroupVpcWhitelistResponse describeApiGroupVpcWhitelistWithOptions(const Models::DescribeApiGroupVpcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the VPC whitelist that is allowed to access an API group.
       *
       * @param request DescribeApiGroupVpcWhitelistRequest
       * @return DescribeApiGroupVpcWhitelistResponse
       */
      Models::DescribeApiGroupVpcWhitelistResponse describeApiGroupVpcWhitelist(const Models::DescribeApiGroupVpcWhitelistRequest &request);

      /**
       * @summary Queries existing API groups and their basic information.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DescribeApiGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiGroupsResponse
       */
      Models::DescribeApiGroupsResponse describeApiGroupsWithOptions(const Models::DescribeApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries existing API groups and their basic information.
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request DescribeApiGroupsRequest
       * @return DescribeApiGroupsResponse
       */
      Models::DescribeApiGroupsResponse describeApiGroups(const Models::DescribeApiGroupsRequest &request);

      /**
       * @summary Queries the historical versions of a specified API.
       *
       * @description *   This operation is intended for API providers. Only APIs that have been published have historical version records.
       * *   This operation allows you to obtain the historical versions of an API. This operation is always called by other operations.
       *
       * @param request DescribeApiHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiHistoriesResponse
       */
      Models::DescribeApiHistoriesResponse describeApiHistoriesWithOptions(const Models::DescribeApiHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical versions of a specified API.
       *
       * @description *   This operation is intended for API providers. Only APIs that have been published have historical version records.
       * *   This operation allows you to obtain the historical versions of an API. This operation is always called by other operations.
       *
       * @param request DescribeApiHistoriesRequest
       * @return DescribeApiHistoriesResponse
       */
      Models::DescribeApiHistoriesResponse describeApiHistories(const Models::DescribeApiHistoriesRequest &request);

      /**
       * @summary Queries the details of a specified historical version of a specified API definition.
       *
       * @description Queries the details of a specified historical version of a specified API definition.
       * *   This API is intended for API providers.
       * *   API Gateway records the time and definition of an API every time the API is published. You can use the version number obtained from other operations to query definition details at a certain publication.
       *
       * @param request DescribeApiHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiHistoryResponse
       */
      Models::DescribeApiHistoryResponse describeApiHistoryWithOptions(const Models::DescribeApiHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified historical version of a specified API definition.
       *
       * @description Queries the details of a specified historical version of a specified API definition.
       * *   This API is intended for API providers.
       * *   API Gateway records the time and definition of an API every time the API is published. You can use the version number obtained from other operations to query definition details at a certain publication.
       *
       * @param request DescribeApiHistoryRequest
       * @return DescribeApiHistoryResponse
       */
      Models::DescribeApiHistoryResponse describeApiHistory(const Models::DescribeApiHistoryRequest &request);

      /**
       * @summary Queries the access control lists (ACLs) that are bound to all the APIs in an API group in a specified environment.
       *
       * @description *   This operation is intended for API callers.
       * *   If an optional parameter is not specified, all results are returned on separate pages.
       * ·
       *
       * @param request DescribeApiIpControlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiIpControlsResponse
       */
      Models::DescribeApiIpControlsResponse describeApiIpControlsWithOptions(const Models::DescribeApiIpControlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control lists (ACLs) that are bound to all the APIs in an API group in a specified environment.
       *
       * @description *   This operation is intended for API callers.
       * *   If an optional parameter is not specified, all results are returned on separate pages.
       * ·
       *
       * @param request DescribeApiIpControlsRequest
       * @return DescribeApiIpControlsResponse
       */
      Models::DescribeApiIpControlsResponse describeApiIpControls(const Models::DescribeApiIpControlsRequest &request);

      /**
       * @summary Queries the response time statistics of an API.
       *
       * @description You can call this operation to query the latency metrics in milliseconds for a specified API.
       * *   This API is intended for API providers.
       * *   Only statistics for API calls made in the release environment are collected by default.
       *
       * @param request DescribeApiLatencyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiLatencyDataResponse
       */
      Models::DescribeApiLatencyDataResponse describeApiLatencyDataWithOptions(const Models::DescribeApiLatencyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the response time statistics of an API.
       *
       * @description You can call this operation to query the latency metrics in milliseconds for a specified API.
       * *   This API is intended for API providers.
       * *   Only statistics for API calls made in the release environment are collected by default.
       *
       * @param request DescribeApiLatencyDataRequest
       * @return DescribeApiLatencyDataResponse
       */
      Models::DescribeApiLatencyDataResponse describeApiLatencyData(const Models::DescribeApiLatencyDataRequest &request);

      /**
       * @summary Queries the Alibaba Cloud Marketplace attributes of an API.
       *
       * @param request DescribeApiMarketAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiMarketAttributesResponse
       */
      Models::DescribeApiMarketAttributesResponse describeApiMarketAttributesWithOptions(const Models::DescribeApiMarketAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud Marketplace attributes of an API.
       *
       * @param request DescribeApiMarketAttributesRequest
       * @return DescribeApiMarketAttributesResponse
       */
      Models::DescribeApiMarketAttributesResponse describeApiMarketAttributes(const Models::DescribeApiMarketAttributesRequest &request);

      /**
       * @summary Queries the attached APIs of an API product.
       *
       * @param request DescribeApiProductApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiProductApisResponse
       */
      Models::DescribeApiProductApisResponse describeApiProductApisWithOptions(const Models::DescribeApiProductApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attached APIs of an API product.
       *
       * @param request DescribeApiProductApisRequest
       * @return DescribeApiProductApisResponse
       */
      Models::DescribeApiProductApisResponse describeApiProductApis(const Models::DescribeApiProductApisRequest &request);

      /**
       * @summary Queries API products by application.
       *
       * @param request DescribeApiProductsByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiProductsByAppResponse
       */
      Models::DescribeApiProductsByAppResponse describeApiProductsByAppWithOptions(const Models::DescribeApiProductsByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API products by application.
       *
       * @param request DescribeApiProductsByAppRequest
       * @return DescribeApiProductsByAppResponse
       */
      Models::DescribeApiProductsByAppResponse describeApiProductsByApp(const Models::DescribeApiProductsByAppRequest &request);

      /**
       * @summary Queries the QPS statistics of an API.
       *
       * @description *   This API is intended for API providers.
       * *   Only statistics for API calls made in the release environment are collected by default.
       *
       * @param request DescribeApiQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiQpsDataResponse
       */
      Models::DescribeApiQpsDataResponse describeApiQpsDataWithOptions(const Models::DescribeApiQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the QPS statistics of an API.
       *
       * @description *   This API is intended for API providers.
       * *   Only statistics for API calls made in the release environment are collected by default.
       *
       * @param request DescribeApiQpsDataRequest
       * @return DescribeApiQpsDataResponse
       */
      Models::DescribeApiQpsDataResponse describeApiQpsData(const Models::DescribeApiQpsDataRequest &request);

      /**
       * @summary Queries the backend signature keys that are bound to the APIs of a specified API group in a specified environment.
       *
       * @description *   This API is intended for API providers.
       * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
       *
       * @param request DescribeApiSignaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiSignaturesResponse
       */
      Models::DescribeApiSignaturesResponse describeApiSignaturesWithOptions(const Models::DescribeApiSignaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backend signature keys that are bound to the APIs of a specified API group in a specified environment.
       *
       * @description *   This API is intended for API providers.
       * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
       *
       * @param request DescribeApiSignaturesRequest
       * @return DescribeApiSignaturesResponse
       */
      Models::DescribeApiSignaturesResponse describeApiSignatures(const Models::DescribeApiSignaturesRequest &request);

      /**
       * @summary Queries the throttling policies bound to all members of an API group in a specified environment.
       *
       * @description *   This API is intended for API providers.
       * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
       *
       * @param request DescribeApiTrafficControlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiTrafficControlsResponse
       */
      Models::DescribeApiTrafficControlsResponse describeApiTrafficControlsWithOptions(const Models::DescribeApiTrafficControlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the throttling policies bound to all members of an API group in a specified environment.
       *
       * @description *   This API is intended for API providers.
       * *   The ApiIds parameter is optional. If this parameter is not specified, all results in the specified environment of an API group are returned.
       *
       * @param request DescribeApiTrafficControlsRequest
       * @return DescribeApiTrafficControlsResponse
       */
      Models::DescribeApiTrafficControlsResponse describeApiTrafficControls(const Models::DescribeApiTrafficControlsRequest &request);

      /**
       * @summary Queries the statistics on the traffic of an API.
       *
       * @description *   This API is intended for API providers.
       * *   Only statistics for API calls made in the release environment are collected by default.
       *
       * @param request DescribeApiTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApiTrafficDataResponse
       */
      Models::DescribeApiTrafficDataResponse describeApiTrafficDataWithOptions(const Models::DescribeApiTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the traffic of an API.
       *
       * @description *   This API is intended for API providers.
       * *   Only statistics for API calls made in the release environment are collected by default.
       *
       * @param request DescribeApiTrafficDataRequest
       * @return DescribeApiTrafficDataResponse
       */
      Models::DescribeApiTrafficDataResponse describeApiTrafficData(const Models::DescribeApiTrafficDataRequest &request);

      /**
       * @summary Queries a list of APIs that are being defined.
       *
       * @description *   This operation is intended for API callers.
       * *   This operation returns a list of all APIs that are being defined. The basic information about these APIs is also returned in the list.
       * *   This operation returns all APIs that are being edited, regardless of their environments. The returned definitions may be different from the definitions in the environments.
       *
       * @param request DescribeApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisResponse
       */
      Models::DescribeApisResponse describeApisWithOptions(const Models::DescribeApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of APIs that are being defined.
       *
       * @description *   This operation is intended for API callers.
       * *   This operation returns a list of all APIs that are being defined. The basic information about these APIs is also returned in the list.
       * *   This operation returns all APIs that are being edited, regardless of their environments. The returned definitions may be different from the definitions in the environments.
       *
       * @param request DescribeApisRequest
       * @return DescribeApisResponse
       */
      Models::DescribeApisResponse describeApis(const Models::DescribeApisRequest &request);

      /**
       * @summary Queries the APIs with which an application is associated.
       *
       * @param request DescribeApisByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisByAppResponse
       */
      Models::DescribeApisByAppResponse describeApisByAppWithOptions(const Models::DescribeApisByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs with which an application is associated.
       *
       * @param request DescribeApisByAppRequest
       * @return DescribeApisByAppResponse
       */
      Models::DescribeApisByAppResponse describeApisByApp(const Models::DescribeApisByAppRequest &request);

      /**
       * @summary Queries APIs in the draft or published state that are created by using a specified backend service.
       *
       * @param request DescribeApisByBackendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisByBackendResponse
       */
      Models::DescribeApisByBackendResponse describeApisByBackendWithOptions(const Models::DescribeApisByBackendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries APIs in the draft or published state that are created by using a specified backend service.
       *
       * @param request DescribeApisByBackendRequest
       * @return DescribeApisByBackendResponse
       */
      Models::DescribeApisByBackendResponse describeApisByBackend(const Models::DescribeApisByBackendRequest &request);

      /**
       * @summary Queries the APIs that are bound to an access control list (ACL).
       *
       * @description *   This operation is intended for API callers.
       * *   You can specify PageNumber to obtain the result on the specified page.
       *
       * @param request DescribeApisByIpControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisByIpControlResponse
       */
      Models::DescribeApisByIpControlResponse describeApisByIpControlWithOptions(const Models::DescribeApisByIpControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs that are bound to an access control list (ACL).
       *
       * @description *   This operation is intended for API callers.
       * *   You can specify PageNumber to obtain the result on the specified page.
       *
       * @param request DescribeApisByIpControlRequest
       * @return DescribeApisByIpControlResponse
       */
      Models::DescribeApisByIpControlResponse describeApisByIpControl(const Models::DescribeApisByIpControlRequest &request);

      /**
       * @summary Queries the APIs to which a specified backend signature key is bound.
       *
       * @description *   This API is intended for API providers.
       * *   The results are returned on separate pages. You can specify PageNumber to obtain the result on the specified page.
       *
       * @param request DescribeApisBySignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisBySignatureResponse
       */
      Models::DescribeApisBySignatureResponse describeApisBySignatureWithOptions(const Models::DescribeApisBySignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs to which a specified backend signature key is bound.
       *
       * @description *   This API is intended for API providers.
       * *   The results are returned on separate pages. You can specify PageNumber to obtain the result on the specified page.
       *
       * @param request DescribeApisBySignatureRequest
       * @return DescribeApisBySignatureResponse
       */
      Models::DescribeApisBySignatureResponse describeApisBySignature(const Models::DescribeApisBySignatureRequest &request);

      /**
       * @summary Queries the APIs to which a specified throttling policy is bound.
       *
       * @description *   This API is intended for API providers.
       * *   You can specify PageNumber to obtain the result on the specified page.
       *
       * @param request DescribeApisByTrafficControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisByTrafficControlResponse
       */
      Models::DescribeApisByTrafficControlResponse describeApisByTrafficControlWithOptions(const Models::DescribeApisByTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs to which a specified throttling policy is bound.
       *
       * @description *   This API is intended for API providers.
       * *   You can specify PageNumber to obtain the result on the specified page.
       *
       * @param request DescribeApisByTrafficControlRequest
       * @return DescribeApisByTrafficControlResponse
       */
      Models::DescribeApisByTrafficControlResponse describeApisByTrafficControl(const Models::DescribeApisByTrafficControlRequest &request);

      /**
       * @summary Queries the APIs that are associated with a virtual private cloud (VPC) access authorization in a region.
       *
       * @param request DescribeApisByVpcAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisByVpcAccessResponse
       */
      Models::DescribeApisByVpcAccessResponse describeApisByVpcAccessWithOptions(const Models::DescribeApisByVpcAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs that are associated with a virtual private cloud (VPC) access authorization in a region.
       *
       * @param request DescribeApisByVpcAccessRequest
       * @return DescribeApisByVpcAccessResponse
       */
      Models::DescribeApisByVpcAccessResponse describeApisByVpcAccess(const Models::DescribeApisByVpcAccessRequest &request);

      /**
       * @summary Queries APIs by application. The environment information is also returned.
       *
       * @param request DescribeApisWithStageNameIntegratedByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApisWithStageNameIntegratedByAppResponse
       */
      Models::DescribeApisWithStageNameIntegratedByAppResponse describeApisWithStageNameIntegratedByAppWithOptions(const Models::DescribeApisWithStageNameIntegratedByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries APIs by application. The environment information is also returned.
       *
       * @param request DescribeApisWithStageNameIntegratedByAppRequest
       * @return DescribeApisWithStageNameIntegratedByAppResponse
       */
      Models::DescribeApisWithStageNameIntegratedByAppResponse describeApisWithStageNameIntegratedByApp(const Models::DescribeApisWithStageNameIntegratedByAppRequest &request);

      /**
       * @summary Queries the apps that can be authorized.
       *
       * @param request DescribeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppResponse
       */
      Models::DescribeAppResponse describeAppWithOptions(const Models::DescribeAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the apps that can be authorized.
       *
       * @param request DescribeAppRequest
       * @return DescribeAppResponse
       */
      Models::DescribeAppResponse describeApp(const Models::DescribeAppRequest &request);

      /**
       * @summary Queries apps and their basic information.
       *
       * @description *   This operation is intended for API callers.
       * *   AppId is optional.
       *
       * @param request DescribeAppAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppAttributesResponse
       */
      Models::DescribeAppAttributesResponse describeAppAttributesWithOptions(const Models::DescribeAppAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries apps and their basic information.
       *
       * @description *   This operation is intended for API callers.
       * *   AppId is optional.
       *
       * @param request DescribeAppAttributesRequest
       * @return DescribeAppAttributesResponse
       */
      Models::DescribeAppAttributesResponse describeAppAttributes(const Models::DescribeAppAttributesRequest &request);

      /**
       * @summary Queries the key-related information of an application.
       *
       * @param request DescribeAppSecuritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppSecuritiesResponse
       */
      Models::DescribeAppSecuritiesResponse describeAppSecuritiesWithOptions(const Models::DescribeAppSecuritiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the key-related information of an application.
       *
       * @param request DescribeAppSecuritiesRequest
       * @return DescribeAppSecuritiesResponse
       */
      Models::DescribeAppSecuritiesResponse describeAppSecurities(const Models::DescribeAppSecuritiesRequest &request);

      /**
       * @summary This key is used for authentication when an API call is made.
       *
       * @description *   This operation is intended for API callers.
       *
       * @param request DescribeAppSecurityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppSecurityResponse
       */
      Models::DescribeAppSecurityResponse describeAppSecurityWithOptions(const Models::DescribeAppSecurityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This key is used for authentication when an API call is made.
       *
       * @description *   This operation is intended for API callers.
       *
       * @param request DescribeAppSecurityRequest
       * @return DescribeAppSecurityResponse
       */
      Models::DescribeAppSecurityResponse describeAppSecurity(const Models::DescribeAppSecurityRequest &request);

      /**
       * @summary Queries the apps of a user. App information is returned only to the app owner.
       *
       * @description *   This API is intended for API providers.
       * *   API providers can use the app IDs or their Alibaba Cloud accounts to query app information.
       * *   Each provider can call this operation for a maximum of 200 times every day in a region.
       *
       * @param request DescribeAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeAppsWithOptions(const Models::DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the apps of a user. App information is returned only to the app owner.
       *
       * @description *   This API is intended for API providers.
       * *   API providers can use the app IDs or their Alibaba Cloud accounts to query app information.
       * *   Each provider can call this operation for a maximum of 200 times every day in a region.
       *
       * @param request DescribeAppsRequest
       * @return DescribeAppsResponse
       */
      Models::DescribeAppsResponse describeApps(const Models::DescribeAppsRequest &request);

      /**
       * @summary Queries authorized applications by API product.
       *
       * @param request DescribeAppsByApiProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAppsByApiProductResponse
       */
      Models::DescribeAppsByApiProductResponse describeAppsByApiProductWithOptions(const Models::DescribeAppsByApiProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries authorized applications by API product.
       *
       * @param request DescribeAppsByApiProductRequest
       * @return DescribeAppsByApiProductResponse
       */
      Models::DescribeAppsByApiProductResponse describeAppsByApiProduct(const Models::DescribeAppsByApiProductRequest &request);

      /**
       * @summary Queries the authorized APIs of a specified APP.
       *
       * @description *   This operation is intended for API callers.
       * *   The specified application can call all APIs included in the responses.
       *
       * @param request DescribeAuthorizedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthorizedApisResponse
       */
      Models::DescribeAuthorizedApisResponse describeAuthorizedApisWithOptions(const Models::DescribeAuthorizedApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorized APIs of a specified APP.
       *
       * @description *   This operation is intended for API callers.
       * *   The specified application can call all APIs included in the responses.
       *
       * @param request DescribeAuthorizedApisRequest
       * @return DescribeAuthorizedApisResponse
       */
      Models::DescribeAuthorizedApisResponse describeAuthorizedApis(const Models::DescribeAuthorizedApisRequest &request);

      /**
       * @summary Queries the current apps.
       *
       * @description *   This operation is intended for API providers.
       * *   All applications included in the responses have access to the specified API.
       *
       * @param request DescribeAuthorizedAppsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthorizedAppsResponse
       */
      Models::DescribeAuthorizedAppsResponse describeAuthorizedAppsWithOptions(const Models::DescribeAuthorizedAppsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current apps.
       *
       * @description *   This operation is intended for API providers.
       * *   All applications included in the responses have access to the specified API.
       *
       * @param request DescribeAuthorizedAppsRequest
       * @return DescribeAuthorizedAppsResponse
       */
      Models::DescribeAuthorizedAppsResponse describeAuthorizedApps(const Models::DescribeAuthorizedAppsRequest &request);

      /**
       * @summary Queries the information about a backend service and its URL configured for each environment.
       *
       * @param request DescribeBackendInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackendInfoResponse
       */
      Models::DescribeBackendInfoResponse describeBackendInfoWithOptions(const Models::DescribeBackendInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a backend service and its URL configured for each environment.
       *
       * @param request DescribeBackendInfoRequest
       * @return DescribeBackendInfoResponse
       */
      Models::DescribeBackendInfoResponse describeBackendInfo(const Models::DescribeBackendInfoRequest &request);

      /**
       * @summary Queries backend services. You can filter backend services by backend service name and backend service type.
       *
       * @param request DescribeBackendListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackendListResponse
       */
      Models::DescribeBackendListResponse describeBackendListWithOptions(const Models::DescribeBackendListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backend services. You can filter backend services by backend service name and backend service type.
       *
       * @param request DescribeBackendListRequest
       * @return DescribeBackendListResponse
       */
      Models::DescribeBackendListResponse describeBackendList(const Models::DescribeBackendListRequest &request);

      /**
       * @summary Queries the information about a single dataset.
       *
       * @param request DescribeDatasetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatasetInfoResponse
       */
      Models::DescribeDatasetInfoResponse describeDatasetInfoWithOptions(const Models::DescribeDatasetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a single dataset.
       *
       * @param request DescribeDatasetInfoRequest
       * @return DescribeDatasetInfoResponse
       */
      Models::DescribeDatasetInfoResponse describeDatasetInfo(const Models::DescribeDatasetInfoRequest &request);

      /**
       * @summary Queries a data entry in a custom dataset.
       *
       * @param request DescribeDatasetItemInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatasetItemInfoResponse
       */
      Models::DescribeDatasetItemInfoResponse describeDatasetItemInfoWithOptions(const Models::DescribeDatasetItemInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a data entry in a custom dataset.
       *
       * @param request DescribeDatasetItemInfoRequest
       * @return DescribeDatasetItemInfoResponse
       */
      Models::DescribeDatasetItemInfoResponse describeDatasetItemInfo(const Models::DescribeDatasetItemInfoRequest &request);

      /**
       * @summary Queries the data entries of a custom dataset.
       *
       * @param request DescribeDatasetItemListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatasetItemListResponse
       */
      Models::DescribeDatasetItemListResponse describeDatasetItemListWithOptions(const Models::DescribeDatasetItemListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data entries of a custom dataset.
       *
       * @param request DescribeDatasetItemListRequest
       * @return DescribeDatasetItemListResponse
       */
      Models::DescribeDatasetItemListResponse describeDatasetItemList(const Models::DescribeDatasetItemListRequest &request);

      /**
       * @summary Queries custom datasets.
       *
       * @param request DescribeDatasetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDatasetListResponse
       */
      Models::DescribeDatasetListResponse describeDatasetListWithOptions(const Models::DescribeDatasetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom datasets.
       *
       * @param request DescribeDatasetListRequest
       * @return DescribeDatasetListResponse
       */
      Models::DescribeDatasetListResponse describeDatasetList(const Models::DescribeDatasetListRequest &request);

      /**
       * @summary Queries the progress of an asynchronous API publishing task.
       *
       * @param request DescribeDeployApiTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeployApiTaskResponse
       */
      Models::DescribeDeployApiTaskResponse describeDeployApiTaskWithOptions(const Models::DescribeDeployApiTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the progress of an asynchronous API publishing task.
       *
       * @param request DescribeDeployApiTaskRequest
       * @return DescribeDeployApiTaskResponse
       */
      Models::DescribeDeployApiTaskResponse describeDeployApiTask(const Models::DescribeDeployApiTaskRequest &request);

      /**
       * @summary Queries the definition of an API that takes effect in an environment. The definition may differ from the definition being edited.
       *
       * @param request DescribeDeployedApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeployedApiResponse
       */
      Models::DescribeDeployedApiResponse describeDeployedApiWithOptions(const Models::DescribeDeployedApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the definition of an API that takes effect in an environment. The definition may differ from the definition being edited.
       *
       * @param request DescribeDeployedApiRequest
       * @return DescribeDeployedApiResponse
       */
      Models::DescribeDeployedApiResponse describeDeployedApi(const Models::DescribeDeployedApiRequest &request);

      /**
       * @summary Queries the APIs that have been published to a specified environment.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DescribeDeployedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeployedApisResponse
       */
      Models::DescribeDeployedApisResponse describeDeployedApisWithOptions(const Models::DescribeDeployedApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs that have been published to a specified environment.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DescribeDeployedApisRequest
       * @return DescribeDeployedApisResponse
       */
      Models::DescribeDeployedApisResponse describeDeployedApis(const Models::DescribeDeployedApisRequest &request);

      /**
       * @summary Queries details about a bound custom domain name, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
       *
       * @param request DescribeDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainResponse
       */
      Models::DescribeDomainResponse describeDomainWithOptions(const Models::DescribeDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about a bound custom domain name, including the automatically assigned second-level domain name, custom domain name, and SSL certificate.
       *
       * @param request DescribeDomainRequest
       * @return DescribeDomainResponse
       */
      Models::DescribeDomainResponse describeDomain(const Models::DescribeDomainRequest &request);

      /**
       * @summary Queries the average latency of an API group in an environment.
       *
       * @param request DescribeGroupLatencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupLatencyResponse
       */
      Models::DescribeGroupLatencyResponse describeGroupLatencyWithOptions(const Models::DescribeGroupLatencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the average latency of an API group in an environment.
       *
       * @param request DescribeGroupLatencyRequest
       * @return DescribeGroupLatencyResponse
       */
      Models::DescribeGroupLatencyResponse describeGroupLatency(const Models::DescribeGroupLatencyRequest &request);

      /**
       * @summary Queries the statistics on the number of requests directed to an API group within a period of time.
       *
       * @param request DescribeGroupQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupQpsResponse
       */
      Models::DescribeGroupQpsResponse describeGroupQpsWithOptions(const Models::DescribeGroupQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on the number of requests directed to an API group within a period of time.
       *
       * @param request DescribeGroupQpsRequest
       * @return DescribeGroupQpsResponse
       */
      Models::DescribeGroupQpsResponse describeGroupQps(const Models::DescribeGroupQpsRequest &request);

      /**
       * @summary Queries the traffic of an API group.
       *
       * @param request DescribeGroupTrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupTrafficResponse
       */
      Models::DescribeGroupTrafficResponse describeGroupTrafficWithOptions(const Models::DescribeGroupTrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic of an API group.
       *
       * @param request DescribeGroupTrafficRequest
       * @return DescribeGroupTrafficResponse
       */
      Models::DescribeGroupTrafficResponse describeGroupTraffic(const Models::DescribeGroupTrafficRequest &request);

      /**
       * @summary Queries the historical versions of an API.
       *
       * @param request DescribeHistoryApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryApisResponse
       */
      Models::DescribeHistoryApisResponse describeHistoryApisWithOptions(const Models::DescribeHistoryApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical versions of an API.
       *
       * @param request DescribeHistoryApisRequest
       * @return DescribeHistoryApisResponse
       */
      Models::DescribeHistoryApisResponse describeHistoryApis(const Models::DescribeHistoryApisRequest &request);

      /**
       * @summary Queries the result of an OAS API import task.
       *
       * @param request DescribeImportOASTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportOASTaskResponse
       */
      Models::DescribeImportOASTaskResponse describeImportOASTaskWithOptions(const Models::DescribeImportOASTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the result of an OAS API import task.
       *
       * @param request DescribeImportOASTaskRequest
       * @return DescribeImportOASTaskResponse
       */
      Models::DescribeImportOASTaskResponse describeImportOASTask(const Models::DescribeImportOASTaskRequest &request);

      /**
       * @summary Queries the information about a dedicated instance cluster.
       *
       * @param request DescribeInstanceClusterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceClusterInfoResponse
       */
      Models::DescribeInstanceClusterInfoResponse describeInstanceClusterInfoWithOptions(const Models::DescribeInstanceClusterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a dedicated instance cluster.
       *
       * @param request DescribeInstanceClusterInfoRequest
       * @return DescribeInstanceClusterInfoResponse
       */
      Models::DescribeInstanceClusterInfoResponse describeInstanceClusterInfo(const Models::DescribeInstanceClusterInfoRequest &request);

      /**
       * @summary Queries dedicated instance clusters.
       *
       * @param request DescribeInstanceClusterListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceClusterListResponse
       */
      Models::DescribeInstanceClusterListResponse describeInstanceClusterListWithOptions(const Models::DescribeInstanceClusterListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries dedicated instance clusters.
       *
       * @param request DescribeInstanceClusterListRequest
       * @return DescribeInstanceClusterListResponse
       */
      Models::DescribeInstanceClusterListResponse describeInstanceClusterList(const Models::DescribeInstanceClusterListRequest &request);

      /**
       * @summary Queries the number of lost connections to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceDropConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDropConnectionsResponse
       */
      Models::DescribeInstanceDropConnectionsResponse describeInstanceDropConnectionsWithOptions(const Models::DescribeInstanceDropConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of lost connections to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceDropConnectionsRequest
       * @return DescribeInstanceDropConnectionsResponse
       */
      Models::DescribeInstanceDropConnectionsResponse describeInstanceDropConnections(const Models::DescribeInstanceDropConnectionsRequest &request);

      /**
       * @summary Queries the number of dropped packets within a period of time.
       *
       * @param request DescribeInstanceDropPacketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDropPacketResponse
       */
      Models::DescribeInstanceDropPacketResponse describeInstanceDropPacketWithOptions(const Models::DescribeInstanceDropPacketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of dropped packets within a period of time.
       *
       * @param request DescribeInstanceDropPacketRequest
       * @return DescribeInstanceDropPacketResponse
       */
      Models::DescribeInstanceDropPacketResponse describeInstanceDropPacket(const Models::DescribeInstanceDropPacketRequest &request);

      /**
       * @summary Queries the distribution of HTTP status codes of requests to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceHttpCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceHttpCodeResponse
       */
      Models::DescribeInstanceHttpCodeResponse describeInstanceHttpCodeWithOptions(const Models::DescribeInstanceHttpCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of HTTP status codes of requests to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceHttpCodeRequest
       * @return DescribeInstanceHttpCodeResponse
       */
      Models::DescribeInstanceHttpCodeResponse describeInstanceHttpCode(const Models::DescribeInstanceHttpCodeRequest &request);

      /**
       * @summary Queries the average latency of a dedicated instance over a period of time.
       *
       * @param request DescribeInstanceLatencyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceLatencyResponse
       */
      Models::DescribeInstanceLatencyResponse describeInstanceLatencyWithOptions(const Models::DescribeInstanceLatencyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the average latency of a dedicated instance over a period of time.
       *
       * @param request DescribeInstanceLatencyRequest
       * @return DescribeInstanceLatencyResponse
       */
      Models::DescribeInstanceLatencyResponse describeInstanceLatency(const Models::DescribeInstanceLatencyRequest &request);

      /**
       * @summary Queries the number of new connections to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceNewConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceNewConnectionsResponse
       */
      Models::DescribeInstanceNewConnectionsResponse describeInstanceNewConnectionsWithOptions(const Models::DescribeInstanceNewConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of new connections to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceNewConnectionsRequest
       * @return DescribeInstanceNewConnectionsResponse
       */
      Models::DescribeInstanceNewConnectionsResponse describeInstanceNewConnections(const Models::DescribeInstanceNewConnectionsRequest &request);

      /**
       * @summary Queries the numbers of inbound and outbound packets of a dedicated instance within a period of time.
       *
       * @param request DescribeInstancePacketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancePacketsResponse
       */
      Models::DescribeInstancePacketsResponse describeInstancePacketsWithOptions(const Models::DescribeInstancePacketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the numbers of inbound and outbound packets of a dedicated instance within a period of time.
       *
       * @param request DescribeInstancePacketsRequest
       * @return DescribeInstancePacketsResponse
       */
      Models::DescribeInstancePacketsResponse describeInstancePackets(const Models::DescribeInstancePacketsRequest &request);

      /**
       * @summary Queries the number of requests to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceQpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceQpsResponse
       */
      Models::DescribeInstanceQpsResponse describeInstanceQpsWithOptions(const Models::DescribeInstanceQpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of requests to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceQpsRequest
       * @return DescribeInstanceQpsResponse
       */
      Models::DescribeInstanceQpsResponse describeInstanceQps(const Models::DescribeInstanceQpsRequest &request);

      /**
       * @summary Queries the number of concurrent connections to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceSlbConnectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSlbConnectResponse
       */
      Models::DescribeInstanceSlbConnectResponse describeInstanceSlbConnectWithOptions(const Models::DescribeInstanceSlbConnectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of concurrent connections to a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceSlbConnectRequest
       * @return DescribeInstanceSlbConnectResponse
       */
      Models::DescribeInstanceSlbConnectResponse describeInstanceSlbConnect(const Models::DescribeInstanceSlbConnectRequest &request);

      /**
       * @summary Queries the request traffic and response traffic of a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceTrafficRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTrafficResponse
       */
      Models::DescribeInstanceTrafficResponse describeInstanceTrafficWithOptions(const Models::DescribeInstanceTrafficRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request traffic and response traffic of a dedicated instance within a period of time.
       *
       * @param request DescribeInstanceTrafficRequest
       * @return DescribeInstanceTrafficResponse
       */
      Models::DescribeInstanceTrafficResponse describeInstanceTraffic(const Models::DescribeInstanceTrafficRequest &request);

      /**
       * @summary Queries the details of instances in a region. The instances include shared instances and dedicated instances.
       *
       * @param request DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of instances in a region. The instances include shared instances and dedicated instances.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries the rule entries of an IP address-based traffic control policy.
       *
       * @description *   This operation is intended for API providers.
       * *   You can filter the query results by policy ID.
       *
       * @param request DescribeIpControlPolicyItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpControlPolicyItemsResponse
       */
      Models::DescribeIpControlPolicyItemsResponse describeIpControlPolicyItemsWithOptions(const Models::DescribeIpControlPolicyItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rule entries of an IP address-based traffic control policy.
       *
       * @description *   This operation is intended for API providers.
       * *   You can filter the query results by policy ID.
       *
       * @param request DescribeIpControlPolicyItemsRequest
       * @return DescribeIpControlPolicyItemsResponse
       */
      Models::DescribeIpControlPolicyItemsResponse describeIpControlPolicyItems(const Models::DescribeIpControlPolicyItemsRequest &request);

      /**
       * @summary Queries custom access control lists (ACLs) on separate pages.
       *
       * @description *   This operation is intended for API providers.
       * *   This operation is used to query the ACLs in a region. Region is a system parameter.
       * *   You can filter the query results by ACL ID, name, or type.
       * *   This operation cannot be used to query specific policies. If you want to query specific policies, call the [DescribeIpControlPolicyItems](~~DescribeIpControlPolicyItems~~) operation.
       *
       * @param request DescribeIpControlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpControlsResponse
       */
      Models::DescribeIpControlsResponse describeIpControlsWithOptions(const Models::DescribeIpControlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom access control lists (ACLs) on separate pages.
       *
       * @description *   This operation is intended for API providers.
       * *   This operation is used to query the ACLs in a region. Region is a system parameter.
       * *   You can filter the query results by ACL ID, name, or type.
       * *   This operation cannot be used to query specific policies. If you want to query specific policies, call the [DescribeIpControlPolicyItems](~~DescribeIpControlPolicyItems~~) operation.
       *
       * @param request DescribeIpControlsRequest
       * @return DescribeIpControlsResponse
       */
      Models::DescribeIpControlsResponse describeIpControls(const Models::DescribeIpControlsRequest &request);

      /**
       * @summary 查询日志配置
       *
       * @param request DescribeLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogConfigResponse
       */
      Models::DescribeLogConfigResponse describeLogConfigWithOptions(const Models::DescribeLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询日志配置
       *
       * @param request DescribeLogConfigRequest
       * @return DescribeLogConfigResponse
       */
      Models::DescribeLogConfigResponse describeLogConfig(const Models::DescribeLogConfigRequest &request);

      /**
       * @summary Queries the number of remaining ordered relationships for a purchaser.
       *
       * @param request DescribeMarketRemainsQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMarketRemainsQuotaResponse
       */
      Models::DescribeMarketRemainsQuotaResponse describeMarketRemainsQuotaWithOptions(const Models::DescribeMarketRemainsQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of remaining ordered relationships for a purchaser.
       *
       * @param request DescribeMarketRemainsQuotaRequest
       * @return DescribeMarketRemainsQuotaResponse
       */
      Models::DescribeMarketRemainsQuotaResponse describeMarketRemainsQuota(const Models::DescribeMarketRemainsQuotaRequest &request);

      /**
       * @summary Queries the created models of an API group.
       *
       * @description *   Fuzzy queries are supported.
       *
       * @param request DescribeModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeModelsResponse
       */
      Models::DescribeModelsResponse describeModelsWithOptions(const Models::DescribeModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the created models of an API group.
       *
       * @description *   Fuzzy queries are supported.
       *
       * @param request DescribeModelsRequest
       * @return DescribeModelsResponse
       */
      Models::DescribeModelsResponse describeModels(const Models::DescribeModelsRequest &request);

      /**
       * @summary Queries the APIs to which a specified plug-in is bound.
       *
       * @param request DescribePluginApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginApisResponse
       */
      Models::DescribePluginApisResponse describePluginApisWithOptions(const Models::DescribePluginApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the APIs to which a specified plug-in is bound.
       *
       * @param request DescribePluginApisRequest
       * @return DescribePluginApisResponse
       */
      Models::DescribePluginApisResponse describePluginApis(const Models::DescribePluginApisRequest &request);

      /**
       * @summary Query the list of groups bound to a plugin based on the plugin ID
       *
       * @param request DescribePluginGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginGroupsResponse
       */
      Models::DescribePluginGroupsResponse describePluginGroupsWithOptions(const Models::DescribePluginGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of groups bound to a plugin based on the plugin ID
       *
       * @param request DescribePluginGroupsRequest
       * @return DescribePluginGroupsResponse
       */
      Models::DescribePluginGroupsResponse describePluginGroups(const Models::DescribePluginGroupsRequest &request);

      /**
       * @summary 查询插件列表
       *
       * @param request DescribePluginSchemasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginSchemasResponse
       */
      Models::DescribePluginSchemasResponse describePluginSchemasWithOptions(const Models::DescribePluginSchemasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询插件列表
       *
       * @param request DescribePluginSchemasRequest
       * @return DescribePluginSchemasResponse
       */
      Models::DescribePluginSchemasResponse describePluginSchemas(const Models::DescribePluginSchemasRequest &request);

      /**
       * @summary 查询插件模板
       *
       * @param request DescribePluginTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginTemplatesResponse
       */
      Models::DescribePluginTemplatesResponse describePluginTemplatesWithOptions(const Models::DescribePluginTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询插件模板
       *
       * @param request DescribePluginTemplatesRequest
       * @return DescribePluginTemplatesResponse
       */
      Models::DescribePluginTemplatesResponse describePluginTemplates(const Models::DescribePluginTemplatesRequest &request);

      /**
       * @summary Queries API Gateway plug-ins and the details of the plug-ins.
       *
       * @description *   This operation supports pagination.
       * *   This operation allows you to query plug-ins by business type.
       * *   This operation allows you to query plug-ins by ID.
       * *   This operation allows you to query plug-ins by name.
       *
       * @param request DescribePluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginsResponse
       */
      Models::DescribePluginsResponse describePluginsWithOptions(const Models::DescribePluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries API Gateway plug-ins and the details of the plug-ins.
       *
       * @description *   This operation supports pagination.
       * *   This operation allows you to query plug-ins by business type.
       * *   This operation allows you to query plug-ins by ID.
       * *   This operation allows you to query plug-ins by name.
       *
       * @param request DescribePluginsRequest
       * @return DescribePluginsResponse
       */
      Models::DescribePluginsResponse describePlugins(const Models::DescribePluginsRequest &request);

      /**
       * @summary Queries the plug-ins that are bound to a running API in an environment.
       *
       * @description *   This operation is intended for API callers.
       * *   This operation supports pagination.
       *
       * @param request DescribePluginsByApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginsByApiResponse
       */
      Models::DescribePluginsByApiResponse describePluginsByApiWithOptions(const Models::DescribePluginsByApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the plug-ins that are bound to a running API in an environment.
       *
       * @description *   This operation is intended for API callers.
       * *   This operation supports pagination.
       *
       * @param request DescribePluginsByApiRequest
       * @return DescribePluginsByApiResponse
       */
      Models::DescribePluginsByApiResponse describePluginsByApi(const Models::DescribePluginsByApiRequest &request);

      /**
       * @summary Query Plugins Bound to API Group
       *
       * @param request DescribePluginsByGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePluginsByGroupResponse
       */
      Models::DescribePluginsByGroupResponse describePluginsByGroupWithOptions(const Models::DescribePluginsByGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Plugins Bound to API Group
       *
       * @param request DescribePluginsByGroupRequest
       * @return DescribePluginsByGroupResponse
       */
      Models::DescribePluginsByGroupResponse describePluginsByGroup(const Models::DescribePluginsByGroupRequest &request);

      /**
       * @summary Queries the details about an API group purchased from Alibaba Cloud Marketplace.
       *
       * @param request DescribePurchasedApiGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedApiGroupResponse
       */
      Models::DescribePurchasedApiGroupResponse describePurchasedApiGroupWithOptions(const Models::DescribePurchasedApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about an API group purchased from Alibaba Cloud Marketplace.
       *
       * @param request DescribePurchasedApiGroupRequest
       * @return DescribePurchasedApiGroupResponse
       */
      Models::DescribePurchasedApiGroupResponse describePurchasedApiGroup(const Models::DescribePurchasedApiGroupRequest &request);

      /**
       * @summary Queries the API groups purchased from Alibaba Cloud Marketplace.
       *
       * @param request DescribePurchasedApiGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedApiGroupsResponse
       */
      Models::DescribePurchasedApiGroupsResponse describePurchasedApiGroupsWithOptions(const Models::DescribePurchasedApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the API groups purchased from Alibaba Cloud Marketplace.
       *
       * @param request DescribePurchasedApiGroupsRequest
       * @return DescribePurchasedApiGroupsResponse
       */
      Models::DescribePurchasedApiGroupsResponse describePurchasedApiGroups(const Models::DescribePurchasedApiGroupsRequest &request);

      /**
       * @summary Queries APIs that are purchased from Alibaba Cloud Marketplace.
       *
       * @param request DescribePurchasedApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePurchasedApisResponse
       */
      Models::DescribePurchasedApisResponse describePurchasedApisWithOptions(const Models::DescribePurchasedApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries APIs that are purchased from Alibaba Cloud Marketplace.
       *
       * @param request DescribePurchasedApisRequest
       * @return DescribePurchasedApisResponse
       */
      Models::DescribePurchasedApisResponse describePurchasedApis(const Models::DescribePurchasedApisRequest &request);

      /**
       * @summary Queries the Alibaba Cloud regions that are supported by API Gateway.
       *
       * @description This operation queries regions in which API Gateway is available.
       * *   This operation is intended for API providers and callers.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud regions that are supported by API Gateway.
       *
       * @description This operation queries regions in which API Gateway is available.
       * *   This operation is intended for API providers and callers.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries backend signature keys.
       *
       * @description *   This API is intended for API providers.
       * *   This operation is used to query the backend signature keys in a Region. Region is a system parameter.
       *
       * @param request DescribeSignaturesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSignaturesResponse
       */
      Models::DescribeSignaturesResponse describeSignaturesWithOptions(const Models::DescribeSignaturesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries backend signature keys.
       *
       * @description *   This API is intended for API providers.
       * *   This operation is used to query the backend signature keys in a Region. Region is a system parameter.
       *
       * @param request DescribeSignaturesRequest
       * @return DescribeSignaturesResponse
       */
      Models::DescribeSignaturesResponse describeSignatures(const Models::DescribeSignaturesRequest &request);

      /**
       * @summary Queries the backend signature keys that are bound to a specified API.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DescribeSignaturesByApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSignaturesByApiResponse
       */
      Models::DescribeSignaturesByApiResponse describeSignaturesByApiWithOptions(const Models::DescribeSignaturesByApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the backend signature keys that are bound to a specified API.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DescribeSignaturesByApiRequest
       * @return DescribeSignaturesByApiResponse
       */
      Models::DescribeSignaturesByApiResponse describeSignaturesByApi(const Models::DescribeSignaturesByApiRequest &request);

      /**
       * @summary Queries the number of API Gateway resources in a region.
       *
       * @param request DescribeSummaryDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSummaryDataResponse
       */
      Models::DescribeSummaryDataResponse describeSummaryDataWithOptions(const Models::DescribeSummaryDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of API Gateway resources in a region.
       *
       * @param request DescribeSummaryDataRequest
       * @return DescribeSummaryDataResponse
       */
      Models::DescribeSummaryDataResponse describeSummaryData(const Models::DescribeSummaryDataRequest &request);

      /**
       * @summary Queries the common parameters supported by the system.
       *
       * @description *   This API is intended for API callers.
       * *   The response of this API contains the system parameters that are optional in API definitions.
       *
       * @param request DescribeSystemParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemParametersResponse
       */
      Models::DescribeSystemParametersResponse describeSystemParametersWithOptions(const Models::DescribeSystemParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the common parameters supported by the system.
       *
       * @description *   This API is intended for API callers.
       * *   The response of this API contains the system parameters that are optional in API definitions.
       *
       * @param request DescribeSystemParametersRequest
       * @return DescribeSystemParametersResponse
       */
      Models::DescribeSystemParametersResponse describeSystemParameters(const Models::DescribeSystemParametersRequest &request);

      /**
       * @summary Queries custom throttling policies and their details. Conditional queries are supported.
       *
       * @description *   This API is intended for API providers.
       * *   This API can be used to query all existing throttling policies (including special throttling policies) and their details.
       * *   You can specify query conditions. For example, you can query the throttling policies bound to a specified API or in a specified environment.
       *
       * @param request DescribeTrafficControlsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrafficControlsResponse
       */
      Models::DescribeTrafficControlsResponse describeTrafficControlsWithOptions(const Models::DescribeTrafficControlsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom throttling policies and their details. Conditional queries are supported.
       *
       * @description *   This API is intended for API providers.
       * *   This API can be used to query all existing throttling policies (including special throttling policies) and their details.
       * *   You can specify query conditions. For example, you can query the throttling policies bound to a specified API or in a specified environment.
       *
       * @param request DescribeTrafficControlsRequest
       * @return DescribeTrafficControlsResponse
       */
      Models::DescribeTrafficControlsResponse describeTrafficControls(const Models::DescribeTrafficControlsRequest &request);

      /**
       * @summary Queries the throttling policy that is bound to a specific API.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DescribeTrafficControlsByApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTrafficControlsByApiResponse
       */
      Models::DescribeTrafficControlsByApiResponse describeTrafficControlsByApiWithOptions(const Models::DescribeTrafficControlsByApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the throttling policy that is bound to a specific API.
       *
       * @description *   This API is intended for API providers.
       *
       * @param request DescribeTrafficControlsByApiRequest
       * @return DescribeTrafficControlsByApiResponse
       */
      Models::DescribeTrafficControlsByApiResponse describeTrafficControlsByApi(const Models::DescribeTrafficControlsByApiRequest &request);

      /**
       * @summary 查询批量更新API后端元定结果
       *
       * @param request DescribeUpdateBackendTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpdateBackendTaskResponse
       */
      Models::DescribeUpdateBackendTaskResponse describeUpdateBackendTaskWithOptions(const Models::DescribeUpdateBackendTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询批量更新API后端元定结果
       *
       * @param request DescribeUpdateBackendTaskRequest
       * @return DescribeUpdateBackendTaskResponse
       */
      Models::DescribeUpdateBackendTaskResponse describeUpdateBackendTask(const Models::DescribeUpdateBackendTaskRequest &request);

      /**
       * @summary 查询更新VPC授权的任务
       *
       * @param request DescribeUpdateVpcInfoTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUpdateVpcInfoTaskResponse
       */
      Models::DescribeUpdateVpcInfoTaskResponse describeUpdateVpcInfoTaskWithOptions(const Models::DescribeUpdateVpcInfoTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询更新VPC授权的任务
       *
       * @param request DescribeUpdateVpcInfoTaskRequest
       * @return DescribeUpdateVpcInfoTaskResponse
       */
      Models::DescribeUpdateVpcInfoTaskResponse describeUpdateVpcInfoTask(const Models::DescribeUpdateVpcInfoTaskRequest &request);

      /**
       * @summary Queries VPC access authorizations.
       *
       * @param request DescribeVpcAccessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVpcAccessesResponse
       */
      Models::DescribeVpcAccessesResponse describeVpcAccessesWithOptions(const Models::DescribeVpcAccessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries VPC access authorizations.
       *
       * @param request DescribeVpcAccessesRequest
       * @return DescribeVpcAccessesResponse
       */
      Models::DescribeVpcAccessesResponse describeVpcAccesses(const Models::DescribeVpcAccessesRequest &request);

      /**
       * @summary Queries zones in a region.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries zones in a region.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Detaches APIs from an API product.
       *
       * @param request DetachApiProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachApiProductResponse
       */
      Models::DetachApiProductResponse detachApiProductWithOptions(const Models::DetachApiProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches APIs from an API product.
       *
       * @param request DetachApiProductRequest
       * @return DetachApiProductResponse
       */
      Models::DetachApiProductResponse detachApiProduct(const Models::DetachApiProductRequest &request);

      /**
       * @summary Unbind group plugin
       *
       * @param request DetachGroupPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachGroupPluginResponse
       */
      Models::DetachGroupPluginResponse detachGroupPluginWithOptions(const Models::DetachGroupPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind group plugin
       *
       * @param request DetachGroupPluginRequest
       * @return DetachGroupPluginResponse
       */
      Models::DetachGroupPluginResponse detachGroupPlugin(const Models::DetachGroupPluginRequest &request);

      /**
       * @summary 解绑插件
       *
       * @param request DetachPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPluginResponse
       */
      Models::DetachPluginResponse detachPluginWithOptions(const Models::DetachPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑插件
       *
       * @param request DetachPluginRequest
       * @return DetachPluginResponse
       */
      Models::DetachPluginResponse detachPlugin(const Models::DetachPluginRequest &request);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Disables access control on an instance.
       *
       * @param request DisableInstanceAccessControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInstanceAccessControlResponse
       */
      Models::DisableInstanceAccessControlResponse disableInstanceAccessControlWithOptions(const Models::DisableInstanceAccessControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Disables access control on an instance.
       *
       * @param request DisableInstanceAccessControlRequest
       * @return DisableInstanceAccessControlResponse
       */
      Models::DisableInstanceAccessControlResponse disableInstanceAccessControl(const Models::DisableInstanceAccessControlRequest &request);

      /**
       * @summary Disassociates an internal domain name resolution from a dedicated instance.
       *
       * @param tmpReq DissociateInstanceWithPrivateDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateInstanceWithPrivateDNSResponse
       */
      Models::DissociateInstanceWithPrivateDNSResponse dissociateInstanceWithPrivateDNSWithOptions(const Models::DissociateInstanceWithPrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an internal domain name resolution from a dedicated instance.
       *
       * @param request DissociateInstanceWithPrivateDNSRequest
       * @return DissociateInstanceWithPrivateDNSResponse
       */
      Models::DissociateInstanceWithPrivateDNSResponse dissociateInstanceWithPrivateDNS(const Models::DissociateInstanceWithPrivateDNSRequest &request);

      /**
       * @summary Checks the syntax before Swagger-compliant data is imported.
       *
       * @param tmpReq DryRunSwaggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DryRunSwaggerResponse
       */
      Models::DryRunSwaggerResponse dryRunSwaggerWithOptions(const Models::DryRunSwaggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the syntax before Swagger-compliant data is imported.
       *
       * @param request DryRunSwaggerRequest
       * @return DryRunSwaggerResponse
       */
      Models::DryRunSwaggerResponse dryRunSwagger(const Models::DryRunSwaggerRequest &request);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Specifies the access control policy of an instance.
       *
       * @param request EnableInstanceAccessControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInstanceAccessControlResponse
       */
      Models::EnableInstanceAccessControlResponse enableInstanceAccessControlWithOptions(const Models::EnableInstanceAccessControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This feature provides instance-level access control capabilities for dedicated API Gateway instances. Specifies the access control policy of an instance.
       *
       * @param request EnableInstanceAccessControlRequest
       * @return EnableInstanceAccessControlResponse
       */
      Models::EnableInstanceAccessControlResponse enableInstanceAccessControl(const Models::EnableInstanceAccessControlRequest &request);

      /**
       * @summary 导出OAS
       *
       * @param tmpReq ExportOASRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportOASResponse
       */
      Models::ExportOASResponse exportOASWithOptions(const Models::ExportOASRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导出OAS
       *
       * @param request ExportOASRequest
       * @return ExportOASResponse
       */
      Models::ExportOASResponse exportOAS(const Models::ExportOASRequest &request);

      /**
       * @summary Imports APIs based on the OAS standard.
       *
       * @param request ImportOASRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportOASResponse
       */
      Models::ImportOASResponse importOASWithOptions(const Models::ImportOASRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports APIs based on the OAS standard.
       *
       * @param request ImportOASRequest
       * @return ImportOASResponse
       */
      Models::ImportOASResponse importOAS(const Models::ImportOASRequest &request);

      /**
       * @summary Creates an API by importing Swagger-compliant data.
       *
       * @description *   Alibaba Cloud supports extensions based on Swagger 2.0.
       * *   Alibaba Cloud supports Swagger configuration files in JSON and YAML formats.
       *
       * @param tmpReq ImportSwaggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportSwaggerResponse
       */
      Models::ImportSwaggerResponse importSwaggerWithOptions(const Models::ImportSwaggerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API by importing Swagger-compliant data.
       *
       * @description *   Alibaba Cloud supports extensions based on Swagger 2.0.
       * *   Alibaba Cloud supports Swagger configuration files in JSON and YAML formats.
       *
       * @param request ImportSwaggerRequest
       * @return ImportSwaggerResponse
       */
      Models::ImportSwaggerResponse importSwagger(const Models::ImportSwaggerRequest &request);

      /**
       * @summary Queries internal domain name resolutions by domain name or resolution type.
       *
       * @param request ListPrivateDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateDNSResponse
       */
      Models::ListPrivateDNSResponse listPrivateDNSWithOptions(const Models::ListPrivateDNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries internal domain name resolutions by domain name or resolution type.
       *
       * @param request ListPrivateDNSRequest
       * @return ListPrivateDNSResponse
       */
      Models::ListPrivateDNSResponse listPrivateDNS(const Models::ListPrivateDNSRequest &request);

      /**
       * @summary Queries the visible resource tags.
       *
       * @description *   The Tag.N.Key and Tag.N.Value parameters constitute a key-value pair.
       * *   ResourceId.N must meet all the key-value pairs that are entered. If you enter multiple key-value pairs, resources that contain the specified key-value pairs are returned.
       * *   This operation is used to query resource tags based on conditions. If no relationship matches the conditions, an empty list is returned.
       * *   You can query both user tags and visible system tags.
       * *   In addition to the required parameters, you can also specify ResourceId.N to query the visible resource tags of a specified resource in a region.
       * *   You can also specify Tag.N.Key to query the visible keys of a specified key in a region.
       * *   At least one of ResourceId.N, Tag.N.Key, and Tag.N.Value exists.
       * *   You can query tags of the same type or different types in a single operation.
       * *   You can query all your user types and visible system tags.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the visible resource tags.
       *
       * @description *   The Tag.N.Key and Tag.N.Value parameters constitute a key-value pair.
       * *   ResourceId.N must meet all the key-value pairs that are entered. If you enter multiple key-value pairs, resources that contain the specified key-value pairs are returned.
       * *   This operation is used to query resource tags based on conditions. If no relationship matches the conditions, an empty list is returned.
       * *   You can query both user tags and visible system tags.
       * *   In addition to the required parameters, you can also specify ResourceId.N to query the visible resource tags of a specified resource in a region.
       * *   You can also specify Tag.N.Key to query the visible keys of a specified key in a region.
       * *   At least one of ResourceId.N, Tag.N.Key, and Tag.N.Value exists.
       * *   You can query tags of the same type or different types in a single operation.
       * *   You can query all your user types and visible system tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the definition of an API.
       *
       * @description **This operation is intended for API providers.**
       * *   This API operation requires a full update. Updates of partial parameters are not supported.
       * *   When you modify an API name, make sure that the name of each API within the same group is unique.
       * *   When you modify the request path, make sure that each request path within the same group is unique.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiResponse
       */
      Models::ModifyApiResponse modifyApiWithOptions(const Models::ModifyApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the definition of an API.
       *
       * @description **This operation is intended for API providers.**
       * *   This API operation requires a full update. Updates of partial parameters are not supported.
       * *   When you modify an API name, make sure that the name of each API within the same group is unique.
       * *   When you modify the request path, make sure that each request path within the same group is unique.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyApiRequest
       * @return ModifyApiResponse
       */
      Models::ModifyApiResponse modifyApi(const Models::ModifyApiRequest &request);

      /**
       * @summary Modifies the draft definition of an API. This operation is different from the ModifyApi operation. This operation does not require all information about the API. You need to only specify the parameters that you want to modify. For example, if you want to change the authentication method of the API from Anonymous to APP, you specify APP as the value of AuthType and do not need to configure other parameters.
       *
       * @param request ModifyApiConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiConfigurationResponse
       */
      Models::ModifyApiConfigurationResponse modifyApiConfigurationWithOptions(const Models::ModifyApiConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the draft definition of an API. This operation is different from the ModifyApi operation. This operation does not require all information about the API. You need to only specify the parameters that you want to modify. For example, if you want to change the authentication method of the API from Anonymous to APP, you specify APP as the value of AuthType and do not need to configure other parameters.
       *
       * @param request ModifyApiConfigurationRequest
       * @return ModifyApiConfigurationResponse
       */
      Models::ModifyApiConfigurationResponse modifyApiConfiguration(const Models::ModifyApiConfigurationRequest &request);

      /**
       * @summary Modifies the name, description, or basepath of an existing API group.
       *
       * @description *   This operation is intended for API providers.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyApiGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiGroupResponse
       */
      Models::ModifyApiGroupResponse modifyApiGroupWithOptions(const Models::ModifyApiGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, or basepath of an existing API group.
       *
       * @description *   This operation is intended for API providers.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyApiGroupRequest
       * @return ModifyApiGroupResponse
       */
      Models::ModifyApiGroupResponse modifyApiGroup(const Models::ModifyApiGroupRequest &request);

      /**
       * @summary 变更分组实例
       *
       * @param request ModifyApiGroupInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiGroupInstanceResponse
       */
      Models::ModifyApiGroupInstanceResponse modifyApiGroupInstanceWithOptions(const Models::ModifyApiGroupInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变更分组实例
       *
       * @param request ModifyApiGroupInstanceRequest
       * @return ModifyApiGroupInstanceResponse
       */
      Models::ModifyApiGroupInstanceResponse modifyApiGroupInstance(const Models::ModifyApiGroupInstanceRequest &request);

      /**
       * @summary Modifies the network policy of an API group.
       *
       * @param request ModifyApiGroupNetworkPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiGroupNetworkPolicyResponse
       */
      Models::ModifyApiGroupNetworkPolicyResponse modifyApiGroupNetworkPolicyWithOptions(const Models::ModifyApiGroupNetworkPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network policy of an API group.
       *
       * @param request ModifyApiGroupNetworkPolicyRequest
       * @return ModifyApiGroupNetworkPolicyResponse
       */
      Models::ModifyApiGroupNetworkPolicyResponse modifyApiGroupNetworkPolicy(const Models::ModifyApiGroupNetworkPolicyRequest &request);

      /**
       * @summary Modifies the VPC whitelist of an API group.
       *
       * @param request ModifyApiGroupVpcWhitelistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyApiGroupVpcWhitelistResponse
       */
      Models::ModifyApiGroupVpcWhitelistResponse modifyApiGroupVpcWhitelistWithOptions(const Models::ModifyApiGroupVpcWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the VPC whitelist of an API group.
       *
       * @param request ModifyApiGroupVpcWhitelistRequest
       * @return ModifyApiGroupVpcWhitelistResponse
       */
      Models::ModifyApiGroupVpcWhitelistResponse modifyApiGroupVpcWhitelist(const Models::ModifyApiGroupVpcWhitelistRequest &request);

      /**
       * @summary Modifies a specified app.
       *
       * @description *   This operation is intended for API callers.
       * *   AppName or Description can be modified. If these parameters are not specified, no modifications are made and the operation will directly return a successful response.********
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyAppWithOptions(const Models::ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a specified app.
       *
       * @description *   This operation is intended for API callers.
       * *   AppName or Description can be modified. If these parameters are not specified, no modifications are made and the operation will directly return a successful response.********
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyAppRequest
       * @return ModifyAppResponse
       */
      Models::ModifyAppResponse modifyApp(const Models::ModifyAppRequest &request);

      /**
       * @summary 修改后端服务
       *
       * @param request ModifyBackendRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackendResponse
       */
      Models::ModifyBackendResponse modifyBackendWithOptions(const Models::ModifyBackendRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改后端服务
       *
       * @param request ModifyBackendRequest
       * @return ModifyBackendResponse
       */
      Models::ModifyBackendResponse modifyBackend(const Models::ModifyBackendRequest &request);

      /**
       * @summary 修改后端服务在环境上的定义
       *
       * @param request ModifyBackendModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBackendModelResponse
       */
      Models::ModifyBackendModelResponse modifyBackendModelWithOptions(const Models::ModifyBackendModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改后端服务在环境上的定义
       *
       * @param request ModifyBackendModelRequest
       * @return ModifyBackendModelResponse
       */
      Models::ModifyBackendModelResponse modifyBackendModel(const Models::ModifyBackendModelRequest &request);

      /**
       * @summary Modifies the name of a custom dataset.
       *
       * @param request ModifyDatasetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatasetResponse
       */
      Models::ModifyDatasetResponse modifyDatasetWithOptions(const Models::ModifyDatasetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a custom dataset.
       *
       * @param request ModifyDatasetRequest
       * @return ModifyDatasetResponse
       */
      Models::ModifyDatasetResponse modifyDataset(const Models::ModifyDatasetRequest &request);

      /**
       * @summary Modifies the expiration time and description of a data entry in a custom dataset.
       *
       * @param request ModifyDatasetItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDatasetItemResponse
       */
      Models::ModifyDatasetItemResponse modifyDatasetItemWithOptions(const Models::ModifyDatasetItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the expiration time and description of a data entry in a custom dataset.
       *
       * @param request ModifyDatasetItemRequest
       * @return ModifyDatasetItemResponse
       */
      Models::ModifyDatasetItemResponse modifyDatasetItem(const Models::ModifyDatasetItemRequest &request);

      /**
       * @summary Modifies the properties of an API Gateway instance.
       *
       * @param tmpReq ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the properties of an API Gateway instance.
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Upgrades or downgrades the configurations of an API Gateway instance.
       *
       * @param request ModifyInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpecWithOptions(const Models::ModifyInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the configurations of an API Gateway instance.
       *
       * @param request ModifyInstanceSpecRequest
       * @return ModifyInstanceSpecResponse
       */
      Models::ModifyInstanceSpecResponse modifyInstanceSpec(const Models::ModifyInstanceSpecRequest &request);

      /**
       * @summary Modify instance client VPC config.
       *
       * @param request ModifyInstanceVpcAttributeForConsoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceVpcAttributeForConsoleResponse
       */
      Models::ModifyInstanceVpcAttributeForConsoleResponse modifyInstanceVpcAttributeForConsoleWithOptions(const Models::ModifyInstanceVpcAttributeForConsoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify instance client VPC config.
       *
       * @param request ModifyInstanceVpcAttributeForConsoleRequest
       * @return ModifyInstanceVpcAttributeForConsoleResponse
       */
      Models::ModifyInstanceVpcAttributeForConsoleResponse modifyInstanceVpcAttributeForConsole(const Models::ModifyInstanceVpcAttributeForConsoleRequest &request);

      /**
       * @summary Modifies the VPC domain name policy of an API group.
       *
       * @param request ModifyIntranetDomainPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIntranetDomainPolicyResponse
       */
      Models::ModifyIntranetDomainPolicyResponse modifyIntranetDomainPolicyWithOptions(const Models::ModifyIntranetDomainPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the VPC domain name policy of an API group.
       *
       * @param request ModifyIntranetDomainPolicyRequest
       * @return ModifyIntranetDomainPolicyResponse
       */
      Models::ModifyIntranetDomainPolicyResponse modifyIntranetDomainPolicy(const Models::ModifyIntranetDomainPolicyRequest &request);

      /**
       * @summary Modifies an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       * *   This operation allows you to modify only the name and description of an ACL. You cannot modify the type of the ACL.
       *
       * @param request ModifyIpControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpControlResponse
       */
      Models::ModifyIpControlResponse modifyIpControlWithOptions(const Models::ModifyIpControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       * *   This operation allows you to modify only the name and description of an ACL. You cannot modify the type of the ACL.
       *
       * @param request ModifyIpControlRequest
       * @return ModifyIpControlResponse
       */
      Models::ModifyIpControlResponse modifyIpControl(const Models::ModifyIpControlRequest &request);

      /**
       * @summary Modifies a policy in an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       * *   The modification immediately takes effect on all the APIs that are bound to the policy.
       * *   This operation causes a full modification of the content of a policy.
       *
       * @param request ModifyIpControlPolicyItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyIpControlPolicyItemResponse
       */
      Models::ModifyIpControlPolicyItemResponse modifyIpControlPolicyItemWithOptions(const Models::ModifyIpControlPolicyItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a policy in an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       * *   The modification immediately takes effect on all the APIs that are bound to the policy.
       * *   This operation causes a full modification of the content of a policy.
       *
       * @param request ModifyIpControlPolicyItemRequest
       * @return ModifyIpControlPolicyItemResponse
       */
      Models::ModifyIpControlPolicyItemResponse modifyIpControlPolicyItem(const Models::ModifyIpControlPolicyItemRequest &request);

      /**
       * @summary 修改日志配置
       *
       * @param request ModifyLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLogConfigResponse
       */
      Models::ModifyLogConfigResponse modifyLogConfigWithOptions(const Models::ModifyLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改日志配置
       *
       * @param request ModifyLogConfigRequest
       * @return ModifyLogConfigResponse
       */
      Models::ModifyLogConfigResponse modifyLogConfig(const Models::ModifyLogConfigRequest &request);

      /**
       * @summary Updates the model of an API group.
       *
       * @param request ModifyModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyModelResponse
       */
      Models::ModifyModelResponse modifyModelWithOptions(const Models::ModifyModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the model of an API group.
       *
       * @param request ModifyModelRequest
       * @return ModifyModelResponse
       */
      Models::ModifyModelResponse modifyModel(const Models::ModifyModelRequest &request);

      /**
       * @summary Modifies the information of a plug-in.
       *
       * @description *   This operation is intended for API providers.
       * *   The name of the plug-in must be unique.
       *
       * @param request ModifyPluginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPluginResponse
       */
      Models::ModifyPluginResponse modifyPluginWithOptions(const Models::ModifyPluginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of a plug-in.
       *
       * @description *   This operation is intended for API providers.
       * *   The name of the plug-in must be unique.
       *
       * @param request ModifyPluginRequest
       * @return ModifyPluginResponse
       */
      Models::ModifyPluginResponse modifyPlugin(const Models::ModifyPluginRequest &request);

      /**
       * @summary Modifies a backend signature key.
       *
       * @description *   This API is intended for API providers.
       * *   This API operation modifies the name, Key value, and Secret value of an existing signature key.
       * *   Note that the modification takes effect immediately. If the key has been bound to an API, you must adjust the backend signature verification based on the new key accordingly.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifySignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySignatureResponse
       */
      Models::ModifySignatureResponse modifySignatureWithOptions(const Models::ModifySignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a backend signature key.
       *
       * @description *   This API is intended for API providers.
       * *   This API operation modifies the name, Key value, and Secret value of an existing signature key.
       * *   Note that the modification takes effect immediately. If the key has been bound to an API, you must adjust the backend signature verification based on the new key accordingly.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifySignatureRequest
       * @return ModifySignatureResponse
       */
      Models::ModifySignatureResponse modifySignature(const Models::ModifySignatureRequest &request);

      /**
       * @summary Modifies the settings of a custom throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   The modifications take effect on the bound APIs instantly.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyTrafficControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTrafficControlResponse
       */
      Models::ModifyTrafficControlResponse modifyTrafficControlWithOptions(const Models::ModifyTrafficControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the settings of a custom throttling policy.
       *
       * @description *   This API is intended for API providers.
       * *   The modifications take effect on the bound APIs instantly.
       * *   The QPS limit on this operation is 50 per user.
       *
       * @param request ModifyTrafficControlRequest
       * @return ModifyTrafficControlResponse
       */
      Models::ModifyTrafficControlResponse modifyTrafficControl(const Models::ModifyTrafficControlRequest &request);

      /**
       * @summary Modifies a virtual private cloud (VPC) authorization and updates the metadata of the API associated with the VPC authorization.
       *
       * @param request ModifyVpcAccessAndUpdateApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVpcAccessAndUpdateApisResponse
       */
      Models::ModifyVpcAccessAndUpdateApisResponse modifyVpcAccessAndUpdateApisWithOptions(const Models::ModifyVpcAccessAndUpdateApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a virtual private cloud (VPC) authorization and updates the metadata of the API associated with the VPC authorization.
       *
       * @param request ModifyVpcAccessAndUpdateApisRequest
       * @return ModifyVpcAccessAndUpdateApisResponse
       */
      Models::ModifyVpcAccessAndUpdateApisResponse modifyVpcAccessAndUpdateApis(const Models::ModifyVpcAccessAndUpdateApisRequest &request);

      /**
       * @summary 开通API网关服务
       *
       * @param request OpenApiGatewayServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenApiGatewayServiceResponse
       */
      Models::OpenApiGatewayServiceResponse openApiGatewayServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通API网关服务
       *
       * @return OpenApiGatewayServiceResponse
       */
      Models::OpenApiGatewayServiceResponse openApiGatewayService();

      /**
       * @summary Queries the request logs of a user.
       *
       * @param request QueryRequestLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRequestLogsResponse
       */
      Models::QueryRequestLogsResponse queryRequestLogsWithOptions(const Models::QueryRequestLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request logs of a user.
       *
       * @param request QueryRequestLogsRequest
       * @return QueryRequestLogsResponse
       */
      Models::QueryRequestLogsResponse queryRequestLogs(const Models::QueryRequestLogsRequest &request);

      /**
       * @summary Reactivates a custom domain name whose validity status is Abnormal.
       *
       * @description *   This operation is intended for API providers.
       * *   You must solve the problem that is mentioned in the domain name exception prompt before you can reactivate the domain name.
       * *   A typical reason why a custom domain name becomes abnormal is that the domain name does not have an ICP filing or the domain name is included in a blacklist by the administration. When a custom domain name is abnormal, users cannot use it to call APIs.
       * *   You can call this operation to reactivate the domain name to resume normal access.
       *
       * @param request ReactivateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReactivateDomainResponse
       */
      Models::ReactivateDomainResponse reactivateDomainWithOptions(const Models::ReactivateDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reactivates a custom domain name whose validity status is Abnormal.
       *
       * @description *   This operation is intended for API providers.
       * *   You must solve the problem that is mentioned in the domain name exception prompt before you can reactivate the domain name.
       * *   A typical reason why a custom domain name becomes abnormal is that the domain name does not have an ICP filing or the domain name is included in a blacklist by the administration. When a custom domain name is abnormal, users cannot use it to call APIs.
       * *   You can call this operation to reactivate the domain name to resume normal access.
       *
       * @param request ReactivateDomainRequest
       * @return ReactivateDomainResponse
       */
      Models::ReactivateDomainResponse reactivateDomain(const Models::ReactivateDomainRequest &request);

      /**
       * @summary 删除访问控制策略中IP条目
       *
       * @param request RemoveAccessControlListEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAccessControlListEntryResponse
       */
      Models::RemoveAccessControlListEntryResponse removeAccessControlListEntryWithOptions(const Models::RemoveAccessControlListEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除访问控制策略中IP条目
       *
       * @param request RemoveAccessControlListEntryRequest
       * @return RemoveAccessControlListEntryResponse
       */
      Models::RemoveAccessControlListEntryResponse removeAccessControlListEntry(const Models::RemoveAccessControlListEntryRequest &request);

      /**
       * @summary Revokes permissions on API products from an application.
       *
       * @param tmpReq RemoveApiProductsAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApiProductsAuthoritiesResponse
       */
      Models::RemoveApiProductsAuthoritiesResponse removeApiProductsAuthoritiesWithOptions(const Models::RemoveApiProductsAuthoritiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes permissions on API products from an application.
       *
       * @param request RemoveApiProductsAuthoritiesRequest
       * @return RemoveApiProductsAuthoritiesResponse
       */
      Models::RemoveApiProductsAuthoritiesResponse removeApiProductsAuthorities(const Models::RemoveApiProductsAuthoritiesRequest &request);

      /**
       * @summary Revokes the access permissions on multiple APIs from a specified application.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
       *
       * @param request RemoveApisAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApisAuthoritiesResponse
       */
      Models::RemoveApisAuthoritiesResponse removeApisAuthoritiesWithOptions(const Models::RemoveApisAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the access permissions on multiple APIs from a specified application.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
       *
       * @param request RemoveApisAuthoritiesRequest
       * @return RemoveApisAuthoritiesResponse
       */
      Models::RemoveApisAuthoritiesResponse removeApisAuthorities(const Models::RemoveApisAuthoritiesRequest &request);

      /**
       * @summary Revokes the access permissions on a specified API from multiple applications. In this case, multiple applications map to a single API.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
       *
       * @param request RemoveAppsAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAppsAuthoritiesResponse
       */
      Models::RemoveAppsAuthoritiesResponse removeAppsAuthoritiesWithOptions(const Models::RemoveAppsAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the access permissions on a specified API from multiple applications. In this case, multiple applications map to a single API.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   Before you revoke access permissions, check by whom the permissions were granted. API providers can only revoke permissions granted by a Provider, and API callers can only revoke permissions granted by a Consumer.
       *
       * @param request RemoveAppsAuthoritiesRequest
       * @return RemoveAppsAuthoritiesResponse
       */
      Models::RemoveAppsAuthoritiesResponse removeAppsAuthorities(const Models::RemoveAppsAuthoritiesRequest &request);

      /**
       * @summary Unbinds an API from an access control list (ACL).
       *
       * @description *   This operation is intended for API callers.
       * *   The unbinding takes effect immediately. After the API is unbound from the ACL, the corresponding environment does not have any IP address access control in place for the API.
       *
       * @param request RemoveIpControlApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveIpControlApisResponse
       */
      Models::RemoveIpControlApisResponse removeIpControlApisWithOptions(const Models::RemoveIpControlApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds an API from an access control list (ACL).
       *
       * @description *   This operation is intended for API callers.
       * *   The unbinding takes effect immediately. After the API is unbound from the ACL, the corresponding environment does not have any IP address access control in place for the API.
       *
       * @param request RemoveIpControlApisRequest
       * @return RemoveIpControlApisResponse
       */
      Models::RemoveIpControlApisResponse removeIpControlApis(const Models::RemoveIpControlApisRequest &request);

      /**
       * @summary Removes one or more policies from an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request RemoveIpControlPolicyItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveIpControlPolicyItemResponse
       */
      Models::RemoveIpControlPolicyItemResponse removeIpControlPolicyItemWithOptions(const Models::RemoveIpControlPolicyItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more policies from an access control list (ACL).
       *
       * @description *   This operation is intended for API providers.
       *
       * @param request RemoveIpControlPolicyItemRequest
       * @return RemoveIpControlPolicyItemResponse
       */
      Models::RemoveIpControlPolicyItemResponse removeIpControlPolicyItem(const Models::RemoveIpControlPolicyItemRequest &request);

      /**
       * @summary Unbinds a backend signature key from APIs.
       *
       * @description *   This API is intended for API providers.
       * *   The operation takes effect immediately. The request sent from API Gateway to the backend service does not contain the signature string. The corresponding verification step can be removed from the backend.
       *
       * @param request RemoveSignatureApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSignatureApisResponse
       */
      Models::RemoveSignatureApisResponse removeSignatureApisWithOptions(const Models::RemoveSignatureApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a backend signature key from APIs.
       *
       * @description *   This API is intended for API providers.
       * *   The operation takes effect immediately. The request sent from API Gateway to the backend service does not contain the signature string. The corresponding verification step can be removed from the backend.
       *
       * @param request RemoveSignatureApisRequest
       * @return RemoveSignatureApisResponse
       */
      Models::RemoveSignatureApisResponse removeSignatureApis(const Models::RemoveSignatureApisRequest &request);

      /**
       * @summary Unbinds a specified throttling policy from APIs.
       *
       * @description *   This API is intended for API providers.
       * *   This API allows you to unbind a specified throttling policy from up to 100 APIs at a time.
       *
       * @param request RemoveTrafficControlApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTrafficControlApisResponse
       */
      Models::RemoveTrafficControlApisResponse removeTrafficControlApisWithOptions(const Models::RemoveTrafficControlApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a specified throttling policy from APIs.
       *
       * @description *   This API is intended for API providers.
       * *   This API allows you to unbind a specified throttling policy from up to 100 APIs at a time.
       *
       * @param request RemoveTrafficControlApisRequest
       * @return RemoveTrafficControlApisResponse
       */
      Models::RemoveTrafficControlApisResponse removeTrafficControlApis(const Models::RemoveTrafficControlApisRequest &request);

      /**
       * @summary Deletes a VPC authorization without unpublishing the associated APIs.
       *
       * @description *   This API is intended for API providers.
       * *   Revokes the permissions of API Gateway to access your VPC instance.
       * >  Deleting an authorization affects the associated API. Before you delete the authorization, make sure that it is not used by the API.
       *
       * @param request RemoveVpcAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveVpcAccessResponse
       */
      Models::RemoveVpcAccessResponse removeVpcAccessWithOptions(const Models::RemoveVpcAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a VPC authorization without unpublishing the associated APIs.
       *
       * @description *   This API is intended for API providers.
       * *   Revokes the permissions of API Gateway to access your VPC instance.
       * >  Deleting an authorization affects the associated API. Before you delete the authorization, make sure that it is not used by the API.
       *
       * @param request RemoveVpcAccessRequest
       * @return RemoveVpcAccessResponse
       */
      Models::RemoveVpcAccessResponse removeVpcAccess(const Models::RemoveVpcAccessRequest &request);

      /**
       * @summary 删除VPC授权并下线关联API
       *
       * @param request RemoveVpcAccessAndAbolishApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveVpcAccessAndAbolishApisResponse
       */
      Models::RemoveVpcAccessAndAbolishApisResponse removeVpcAccessAndAbolishApisWithOptions(const Models::RemoveVpcAccessAndAbolishApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除VPC授权并下线关联API
       *
       * @param request RemoveVpcAccessAndAbolishApisRequest
       * @return RemoveVpcAccessAndAbolishApisResponse
       */
      Models::RemoveVpcAccessAndAbolishApisResponse removeVpcAccessAndAbolishApis(const Models::RemoveVpcAccessAndAbolishApisRequest &request);

      /**
       * @summary Resets the AppCode of an application. You can call this operation only once per minute.
       *
       * @param request ResetAppCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAppCodeResponse
       */
      Models::ResetAppCodeResponse resetAppCodeWithOptions(const Models::ResetAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the AppCode of an application. You can call this operation only once per minute.
       *
       * @param request ResetAppCodeRequest
       * @return ResetAppCodeResponse
       */
      Models::ResetAppCodeResponse resetAppCode(const Models::ResetAppCodeRequest &request);

      /**
       * @summary Resets the key of an application.
       *
       * @description *   This operation is intended for API callers.
       * *   A new secret is automatically generated after you have called this operation. This secret cannot be customized.
       * *   The results returned by this operation do not contain the application secret. You can obtain the secret by calling DescribeAppSecurity.
       *
       * @param request ResetAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAppSecretResponse
       */
      Models::ResetAppSecretResponse resetAppSecretWithOptions(const Models::ResetAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the key of an application.
       *
       * @description *   This operation is intended for API callers.
       * *   A new secret is automatically generated after you have called this operation. This secret cannot be customized.
       * *   The results returned by this operation do not contain the application secret. You can obtain the secret by calling DescribeAppSecurity.
       *
       * @param request ResetAppSecretRequest
       * @return ResetAppSecretResponse
       */
      Models::ResetAppSecretResponse resetAppSecret(const Models::ResetAppSecretRequest &request);

      /**
       * @summary 根据APP生成SDK
       *
       * @param request SdkGenerateByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdkGenerateByAppResponse
       */
      Models::SdkGenerateByAppResponse sdkGenerateByAppWithOptions(const Models::SdkGenerateByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据APP生成SDK
       *
       * @param request SdkGenerateByAppRequest
       * @return SdkGenerateByAppResponse
       */
      Models::SdkGenerateByAppResponse sdkGenerateByApp(const Models::SdkGenerateByAppRequest &request);

      /**
       * @summary 生成与App关联的API的SDK
       *
       * @param request SdkGenerateByAppForRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdkGenerateByAppForRegionResponse
       */
      Models::SdkGenerateByAppForRegionResponse sdkGenerateByAppForRegionWithOptions(const Models::SdkGenerateByAppForRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成与App关联的API的SDK
       *
       * @param request SdkGenerateByAppForRegionRequest
       * @return SdkGenerateByAppForRegionResponse
       */
      Models::SdkGenerateByAppForRegionResponse sdkGenerateByAppForRegion(const Models::SdkGenerateByAppForRegionRequest &request);

      /**
       * @summary 根据分组生成SDK
       *
       * @param request SdkGenerateByGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SdkGenerateByGroupResponse
       */
      Models::SdkGenerateByGroupResponse sdkGenerateByGroupWithOptions(const Models::SdkGenerateByGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据分组生成SDK
       *
       * @param request SdkGenerateByGroupRequest
       * @return SdkGenerateByGroupResponse
       */
      Models::SdkGenerateByGroupResponse sdkGenerateByGroup(const Models::SdkGenerateByGroupRequest &request);

      /**
       * @summary 修改访问控制策略的名称
       *
       * @param request SetAccessControlListAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccessControlListAttributeResponse
       */
      Models::SetAccessControlListAttributeResponse setAccessControlListAttributeWithOptions(const Models::SetAccessControlListAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改访问控制策略的名称
       *
       * @param request SetAccessControlListAttributeRequest
       * @return SetAccessControlListAttributeResponse
       */
      Models::SetAccessControlListAttributeResponse setAccessControlListAttribute(const Models::SetAccessControlListAttributeRequest &request);

      /**
       * @summary Grants permissions on API products to an application.
       *
       * @param tmpReq SetApiProductsAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApiProductsAuthoritiesResponse
       */
      Models::SetApiProductsAuthoritiesResponse setApiProductsAuthoritiesWithOptions(const Models::SetApiProductsAuthoritiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants permissions on API products to an application.
       *
       * @param request SetApiProductsAuthoritiesRequest
       * @return SetApiProductsAuthoritiesResponse
       */
      Models::SetApiProductsAuthoritiesResponse setApiProductsAuthorities(const Models::SetApiProductsAuthoritiesRequest &request);

      /**
       * @summary Authorizes a specified application to call multiple APIs.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   API providers can authorize all applications to call their APIs.
       * *   API callers can authorize their own applications to call the APIs that they have purchased.
       *
       * @param request SetApisAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApisAuthoritiesResponse
       */
      Models::SetApisAuthoritiesResponse setApisAuthoritiesWithOptions(const Models::SetApisAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a specified application to call multiple APIs.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   API providers can authorize all applications to call their APIs.
       * *   API callers can authorize their own applications to call the APIs that they have purchased.
       *
       * @param request SetApisAuthoritiesRequest
       * @return SetApisAuthoritiesResponse
       */
      Models::SetApisAuthoritiesResponse setApisAuthorities(const Models::SetApisAuthoritiesRequest &request);

      /**
       * @summary Authorizes multiple applications to call APIs in an API product.
       *
       * @param request SetAppsAuthToApiProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAppsAuthToApiProductResponse
       */
      Models::SetAppsAuthToApiProductResponse setAppsAuthToApiProductWithOptions(const Models::SetAppsAuthToApiProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes multiple applications to call APIs in an API product.
       *
       * @param request SetAppsAuthToApiProductRequest
       * @return SetAppsAuthToApiProductResponse
       */
      Models::SetAppsAuthToApiProductResponse setAppsAuthToApiProduct(const Models::SetAppsAuthToApiProductRequest &request);

      /**
       * @summary Grants access permissions on a specified API to multiple applications.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   API providers can authorize all applications to call their APIs.
       * *   API callers can authorize their own applications to call the APIs that they have purchased.
       *
       * @param request SetAppsAuthoritiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAppsAuthoritiesResponse
       */
      Models::SetAppsAuthoritiesResponse setAppsAuthoritiesWithOptions(const Models::SetAppsAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants access permissions on a specified API to multiple applications.
       *
       * @description *   This operation is intended for API providers and callers.
       * *   API providers can authorize all applications to call their APIs.
       * *   API callers can authorize their own applications to call the APIs that they have purchased.
       *
       * @param request SetAppsAuthoritiesRequest
       * @return SetAppsAuthoritiesResponse
       */
      Models::SetAppsAuthoritiesResponse setAppsAuthorities(const Models::SetAppsAuthoritiesRequest &request);

      /**
       * @summary Binds a custom domain name to a specified API group.
       *
       * @param request SetDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainResponse
       */
      Models::SetDomainResponse setDomainWithOptions(const Models::SetDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a custom domain name to a specified API group.
       *
       * @param request SetDomainRequest
       * @return SetDomainResponse
       */
      Models::SetDomainResponse setDomain(const Models::SetDomainRequest &request);

      /**
       * @summary Uploads an SSL certificate for a specified custom domain name.
       *
       * @description *   This operation is intended for API providers.
       * *   The SSL certificate must match the custom domain name.
       * *   After the SSL certificate is bound, HTTPS-based API services become available.
       *
       * @param request SetDomainCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainCertificateResponse
       */
      Models::SetDomainCertificateResponse setDomainCertificateWithOptions(const Models::SetDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an SSL certificate for a specified custom domain name.
       *
       * @description *   This operation is intended for API providers.
       * *   The SSL certificate must match the custom domain name.
       * *   After the SSL certificate is bound, HTTPS-based API services become available.
       *
       * @param request SetDomainCertificateRequest
       * @return SetDomainCertificateResponse
       */
      Models::SetDomainCertificateResponse setDomainCertificate(const Models::SetDomainCertificateRequest &request);

      /**
       * @summary Enables or disables WebSocket for a custom domain name.
       *
       * @param request SetDomainWebSocketStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainWebSocketStatusResponse
       */
      Models::SetDomainWebSocketStatusResponse setDomainWebSocketStatusWithOptions(const Models::SetDomainWebSocketStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables WebSocket for a custom domain name.
       *
       * @param request SetDomainWebSocketStatusRequest
       * @return SetDomainWebSocketStatusResponse
       */
      Models::SetDomainWebSocketStatusResponse setDomainWebSocketStatus(const Models::SetDomainWebSocketStatusRequest &request);

      /**
       * @summary 设置分组授权AppCode
       *
       * @param request SetGroupAuthAppCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetGroupAuthAppCodeResponse
       */
      Models::SetGroupAuthAppCodeResponse setGroupAuthAppCodeWithOptions(const Models::SetGroupAuthAppCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置分组授权AppCode
       *
       * @param request SetGroupAuthAppCodeRequest
       * @return SetGroupAuthAppCodeResponse
       */
      Models::SetGroupAuthAppCodeResponse setGroupAuthAppCode(const Models::SetGroupAuthAppCodeRequest &request);

      /**
       * @summary Creates a binding relationship between specified access control lists (ACLs) and APIs.
       *
       * @description *   This operation is intended for API callers.
       * *   A maximum of 100 APIs can be bound at a time.
       *
       * @param request SetIpControlApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIpControlApisResponse
       */
      Models::SetIpControlApisResponse setIpControlApisWithOptions(const Models::SetIpControlApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a binding relationship between specified access control lists (ACLs) and APIs.
       *
       * @description *   This operation is intended for API callers.
       * *   A maximum of 100 APIs can be bound at a time.
       *
       * @param request SetIpControlApisRequest
       * @return SetIpControlApisResponse
       */
      Models::SetIpControlApisResponse setIpControlApis(const Models::SetIpControlApisRequest &request);

      /**
       * @summary Binds a signature key to APIs.
       *
       * @param request SetSignatureApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSignatureApisResponse
       */
      Models::SetSignatureApisResponse setSignatureApisWithOptions(const Models::SetSignatureApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a signature key to APIs.
       *
       * @param request SetSignatureApisRequest
       * @return SetSignatureApisResponse
       */
      Models::SetSignatureApisResponse setSignatureApis(const Models::SetSignatureApisRequest &request);

      /**
       * @summary Binds a throttling policy to APIs.
       *
       * @description *   This API is intended for API providers.
       * *   This API allows you to bind a specific throttling policy to up to 100 APIs at a time.
       *
       * @param request SetTrafficControlApisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTrafficControlApisResponse
       */
      Models::SetTrafficControlApisResponse setTrafficControlApisWithOptions(const Models::SetTrafficControlApisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a throttling policy to APIs.
       *
       * @description *   This API is intended for API providers.
       * *   This API allows you to bind a specific throttling policy to up to 100 APIs at a time.
       *
       * @param request SetTrafficControlApisRequest
       * @return SetTrafficControlApisResponse
       */
      Models::SetTrafficControlApisResponse setTrafficControlApis(const Models::SetTrafficControlApisRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC) access authorization and enables reverse access.
       *
       * @description * This operation is intended for API providers.
       * * This operation is used to authorize API Gateway to access your VPC instance.
       *
       * @param request SetVpcAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVpcAccessResponse
       */
      Models::SetVpcAccessResponse setVpcAccessWithOptions(const Models::SetVpcAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC) access authorization and enables reverse access.
       *
       * @description * This operation is intended for API providers.
       * * This operation is used to authorize API Gateway to access your VPC instance.
       *
       * @param request SetVpcAccessRequest
       * @return SetVpcAccessResponse
       */
      Models::SetVpcAccessResponse setVpcAccess(const Models::SetVpcAccessRequest &request);

      /**
       * @summary Specifies a wildcard domain name template for a bound custom domain name.
       *
       * @param request SetWildcardDomainPatternsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWildcardDomainPatternsResponse
       */
      Models::SetWildcardDomainPatternsResponse setWildcardDomainPatternsWithOptions(const Models::SetWildcardDomainPatternsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a wildcard domain name template for a bound custom domain name.
       *
       * @param request SetWildcardDomainPatternsRequest
       * @return SetWildcardDomainPatternsResponse
       */
      Models::SetWildcardDomainPatternsResponse setWildcardDomainPatterns(const Models::SetWildcardDomainPatternsRequest &request);

      /**
       * @summary Switches the definition of an API in a specified runtime environment to a historical version.
       *
       * @param request SwitchApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchApiResponse
       */
      Models::SwitchApiResponse switchApiWithOptions(const Models::SwitchApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the definition of an API in a specified runtime environment to a historical version.
       *
       * @param request SwitchApiRequest
       * @return SwitchApiResponse
       */
      Models::SwitchApiResponse switchApi(const Models::SwitchApiRequest &request);

      /**
       * @summary Creates a tag-resource relationship.
       *
       * @description *   All tags (key-value pairs) are applied to all resources of a specified ResourceId, with each resource specified as ResourceId.N.
       * *   Tag.N is a resource tag consisting of a key-value pair: Tag.N.Key and Tag.N.Value.
       * *   If you call this operation to tag multiple resources simultaneously, either all or none of the resources will be tagged.
       * *   If you specify Tag.1.Value in addition to required parameters, you must also specify Tag.1.Key. Otherwise, an InvalidParameter.TagKey error is reported. A tag that has a value must have the corresponding key, but the key can be an empty string.
       * *   If a tag with the same key has been bound to a resource, the new tag will overwrite the existing one.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tag-resource relationship.
       *
       * @description *   All tags (key-value pairs) are applied to all resources of a specified ResourceId, with each resource specified as ResourceId.N.
       * *   Tag.N is a resource tag consisting of a key-value pair: Tag.N.Key and Tag.N.Value.
       * *   If you call this operation to tag multiple resources simultaneously, either all or none of the resources will be tagged.
       * *   If you specify Tag.1.Value in addition to required parameters, you must also specify Tag.1.Key. Otherwise, an InvalidParameter.TagKey error is reported. A tag that has a value must have the corresponding key, but the key can be an empty string.
       * *   If a tag with the same key has been bound to a resource, the new tag will overwrite the existing one.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @description *   If you call this operation to untag multiple resources simultaneously, either all or none of the resources will be untagged.
       * *   If you specify resource IDs without specifying tag keys and set the All parameter to true, all tags bound to the specified resources will be deleted. If a resource does not have any tags, the request is not processed but a success is returned.
       * *   If you specify resource IDs without specifying tag keys and set the All parameter to false, the request is not processed but a success is returned.
       * *   When tag keys are specified, the All parameter is invalid.
       * *   When multiple resources and key-value pairs are specified, the specified tags bound to the resources are deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @description *   If you call this operation to untag multiple resources simultaneously, either all or none of the resources will be untagged.
       * *   If you specify resource IDs without specifying tag keys and set the All parameter to true, all tags bound to the specified resources will be deleted. If a resource does not have any tags, the request is not processed but a success is returned.
       * *   If you specify resource IDs without specifying tag keys and set the All parameter to false, the request is not processed but a success is returned.
       * *   When tag keys are specified, the All parameter is invalid.
       * *   When multiple resources and key-value pairs are specified, the specified tags bound to the resources are deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies an internal domain name resolution.
       *
       * @param tmpReq UpdatePrivateDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePrivateDNSResponse
       */
      Models::UpdatePrivateDNSResponse updatePrivateDNSWithOptions(const Models::UpdatePrivateDNSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an internal domain name resolution.
       *
       * @param request UpdatePrivateDNSRequest
       * @return UpdatePrivateDNSResponse
       */
      Models::UpdatePrivateDNSResponse updatePrivateDNS(const Models::UpdatePrivateDNSRequest &request);

      /**
       * @summary Tests the network connectivity between an API Gateway instance and a port on an Elastic Compute Service (ECS) or Server Load Balance (SLB) instance in a virtual private cloud (VPC) access authorization.
       *
       * @param request ValidateVpcConnectivityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateVpcConnectivityResponse
       */
      Models::ValidateVpcConnectivityResponse validateVpcConnectivityWithOptions(const Models::ValidateVpcConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tests the network connectivity between an API Gateway instance and a port on an Elastic Compute Service (ECS) or Server Load Balance (SLB) instance in a virtual private cloud (VPC) access authorization.
       *
       * @param request ValidateVpcConnectivityRequest
       * @return ValidateVpcConnectivityResponse
       */
      Models::ValidateVpcConnectivityResponse validateVpcConnectivity(const Models::ValidateVpcConnectivityRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
