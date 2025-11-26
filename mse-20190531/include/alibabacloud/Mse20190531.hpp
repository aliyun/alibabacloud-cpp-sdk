// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MSE20190531_HPP_
#define ALIBABACLOUD_MSE20190531_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Mse20190531Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Mse20190531.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 新增服务鉴权规则
       *
       * @param request AddAuthPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuthPolicyResponse
       */
      Models::AddAuthPolicyResponse addAuthPolicyWithOptions(const Models::AddAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增服务鉴权规则
       *
       * @param request AddAuthPolicyRequest
       * @return AddAuthPolicyResponse
       */
      Models::AddAuthPolicyResponse addAuthPolicy(const Models::AddAuthPolicyRequest &request);

      /**
       * @summary Creates authorization information for a gateway.
       *
       * @param tmpReq AddAuthResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAuthResourceResponse
       */
      Models::AddAuthResourceResponse addAuthResourceWithOptions(const Models::AddAuthResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates authorization information for a gateway.
       *
       * @param request AddAuthResourceRequest
       * @return AddAuthResourceResponse
       */
      Models::AddAuthResourceResponse addAuthResource(const Models::AddAuthResourceRequest &request);

      /**
       * @summary Creates a blacklist or a whitelist.
       *
       * @param request AddBlackWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBlackWhiteListResponse
       */
      Models::AddBlackWhiteListResponse addBlackWhiteListWithOptions(const Models::AddBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a blacklist or a whitelist.
       *
       * @param request AddBlackWhiteListRequest
       * @return AddBlackWhiteListResponse
       */
      Models::AddBlackWhiteListResponse addBlackWhiteList(const Models::AddBlackWhiteListRequest &request);

      /**
       * @summary Adds a gateway.
       *
       * @param tmpReq AddGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayResponse
       */
      Models::AddGatewayResponse addGatewayWithOptions(const Models::AddGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a gateway.
       *
       * @param request AddGatewayRequest
       * @return AddGatewayResponse
       */
      Models::AddGatewayResponse addGateway(const Models::AddGatewayRequest &request);

      /**
       * @summary Adds an authentication configuration for a gateway.
       *
       * @param tmpReq AddGatewayAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayAuthResponse
       */
      Models::AddGatewayAuthResponse addGatewayAuthWithOptions(const Models::AddGatewayAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an authentication configuration for a gateway.
       *
       * @param request AddGatewayAuthRequest
       * @return AddGatewayAuthResponse
       */
      Models::AddGatewayAuthResponse addGatewayAuth(const Models::AddGatewayAuthRequest &request);

      /**
       * @summary Adds a consumer on which a gateway performs authentication operations.
       *
       * @param request AddGatewayAuthConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayAuthConsumerResponse
       */
      Models::AddGatewayAuthConsumerResponse addGatewayAuthConsumerWithOptions(const Models::AddGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a consumer on which a gateway performs authentication operations.
       *
       * @param request AddGatewayAuthConsumerRequest
       * @return AddGatewayAuthConsumerResponse
       */
      Models::AddGatewayAuthConsumerResponse addGatewayAuthConsumer(const Models::AddGatewayAuthConsumerRequest &request);

      /**
       * @summary Associates a domain name with a gateway.
       *
       * @param tmpReq AddGatewayDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayDomainResponse
       */
      Models::AddGatewayDomainResponse addGatewayDomainWithOptions(const Models::AddGatewayDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a domain name with a gateway.
       *
       * @param request AddGatewayDomainRequest
       * @return AddGatewayDomainResponse
       */
      Models::AddGatewayDomainResponse addGatewayDomain(const Models::AddGatewayDomainRequest &request);

      /**
       * @summary Adds a gateway route.
       *
       * @param tmpReq AddGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayRouteResponse
       */
      Models::AddGatewayRouteResponse addGatewayRouteWithOptions(const Models::AddGatewayRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a gateway route.
       *
       * @param request AddGatewayRouteRequest
       * @return AddGatewayRouteResponse
       */
      Models::AddGatewayRouteResponse addGatewayRoute(const Models::AddGatewayRouteRequest &request);

      /**
       * @summary Adds a service version.
       *
       * @param request AddGatewayServiceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayServiceVersionResponse
       */
      Models::AddGatewayServiceVersionResponse addGatewayServiceVersionWithOptions(const Models::AddGatewayServiceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a service version.
       *
       * @param request AddGatewayServiceVersionRequest
       * @return AddGatewayServiceVersionResponse
       */
      Models::AddGatewayServiceVersionResponse addGatewayServiceVersion(const Models::AddGatewayServiceVersionRequest &request);

      /**
       * @summary Associates a Server Load Balancer (SLB) instance with a gateway.
       *
       * @param tmpReq AddGatewaySlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewaySlbResponse
       */
      Models::AddGatewaySlbResponse addGatewaySlbWithOptions(const Models::AddGatewaySlbRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Server Load Balancer (SLB) instance with a gateway.
       *
       * @param request AddGatewaySlbRequest
       * @return AddGatewaySlbResponse
       */
      Models::AddGatewaySlbResponse addGatewaySlb(const Models::AddGatewaySlbRequest &request);

      /**
       * @summary Create a new migration task
       *
       * @param request AddMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMigrationTaskResponse
       */
      Models::AddMigrationTaskResponse addMigrationTaskWithOptions(const Models::AddMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a new migration task
       *
       * @param request AddMigrationTaskRequest
       * @return AddMigrationTaskResponse
       */
      Models::AddMigrationTaskResponse addMigrationTask(const Models::AddMigrationTaskRequest &request);

      /**
       * @summary Creates a mock rule.
       *
       * @param request AddMockRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMockRuleResponse
       */
      Models::AddMockRuleResponse addMockRuleWithOptions(const Models::AddMockRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mock rule.
       *
       * @param request AddMockRuleRequest
       * @return AddMockRuleResponse
       */
      Models::AddMockRuleResponse addMockRule(const Models::AddMockRuleRequest &request);

      /**
       * @summary Associates a certificate with a domain name of a gateway. You can specify a certificate that is hosted in Alibaba Cloud Security.
       *
       * @param request AddSSLCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSSLCertResponse
       */
      Models::AddSSLCertResponse addSSLCertWithOptions(const Models::AddSSLCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a certificate with a domain name of a gateway. You can specify a certificate that is hosted in Alibaba Cloud Security.
       *
       * @param request AddSSLCertRequest
       * @return AddSSLCertResponse
       */
      Models::AddSSLCertResponse addSSLCert(const Models::AddSSLCertRequest &request);

      /**
       * @summary Creates a security group rule for a gateway.
       *
       * @param request AddSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSecurityGroupRuleResponse
       */
      Models::AddSecurityGroupRuleResponse addSecurityGroupRuleWithOptions(const Models::AddSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group rule for a gateway.
       *
       * @param request AddSecurityGroupRuleRequest
       * @return AddSecurityGroupRuleResponse
       */
      Models::AddSecurityGroupRuleResponse addSecurityGroupRule(const Models::AddSecurityGroupRuleRequest &request);

      /**
       * @summary Adds a Nacos service source.
       *
       * @param tmpReq AddServiceSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddServiceSourceResponse
       */
      Models::AddServiceSourceResponse addServiceSourceWithOptions(const Models::AddServiceSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Nacos service source.
       *
       * @param request AddServiceSourceRequest
       * @return AddServiceSourceResponse
       */
      Models::AddServiceSourceResponse addServiceSource(const Models::AddServiceSourceRequest &request);

      /**
       * @summary Publishes a route for a gateway.
       *
       * @param request ApplyGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyGatewayRouteResponse
       */
      Models::ApplyGatewayRouteResponse applyGatewayRouteWithOptions(const Models::ApplyGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a route for a gateway.
       *
       * @param request ApplyGatewayRouteRequest
       * @return ApplyGatewayRouteResponse
       */
      Models::ApplyGatewayRouteResponse applyGatewayRoute(const Models::ApplyGatewayRouteRequest &request);

      /**
       * @summary Modifies a tag-based routing rule.
       *
       * @param tmpReq ApplyTagPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyTagPoliciesResponse
       */
      Models::ApplyTagPoliciesResponse applyTagPoliciesWithOptions(const Models::ApplyTagPoliciesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a tag-based routing rule.
       *
       * @param request ApplyTagPoliciesRequest
       * @return ApplyTagPoliciesResponse
       */
      Models::ApplyTagPoliciesResponse applyTagPolicies(const Models::ApplyTagPoliciesRequest &request);

      /**
       * @summary Binds traffic protection behavior.
       *
       * @param request BindSentinelBlockFallbackDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindSentinelBlockFallbackDefinitionResponse
       */
      Models::BindSentinelBlockFallbackDefinitionResponse bindSentinelBlockFallbackDefinitionWithOptions(const Models::BindSentinelBlockFallbackDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds traffic protection behavior.
       *
       * @param request BindSentinelBlockFallbackDefinitionRequest
       * @return BindSentinelBlockFallbackDefinitionResponse
       */
      Models::BindSentinelBlockFallbackDefinitionResponse bindSentinelBlockFallbackDefinition(const Models::BindSentinelBlockFallbackDefinitionRequest &request);

      /**
       * @summary Resource Transfer
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resource Transfer
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Copy Nacos Configuration
       *
       * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CloneNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneNacosConfigResponse
       */
      Models::CloneNacosConfigResponse cloneNacosConfigWithOptions(const Models::CloneNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copy Nacos Configuration
       *
       * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CloneNacosConfigRequest
       * @return CloneNacosConfigResponse
       */
      Models::CloneNacosConfigResponse cloneNacosConfig(const Models::CloneNacosConfigRequest &request);

      /**
       * @summary Clones rules from Application High Availability Service.
       *
       * @param request CloneSentinelRuleFromAhasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloneSentinelRuleFromAhasResponse
       */
      Models::CloneSentinelRuleFromAhasResponse cloneSentinelRuleFromAhasWithOptions(const Models::CloneSentinelRuleFromAhasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clones rules from Application High Availability Service.
       *
       * @param request CloneSentinelRuleFromAhasRequest
       * @return CloneSentinelRuleFromAhasResponse
       */
      Models::CloneSentinelRuleFromAhasResponse cloneSentinelRuleFromAhas(const Models::CloneSentinelRuleFromAhasRequest &request);

      /**
       * @summary Creates an application.
       *
       * @param tmpReq CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates a circuit breaking rule.
       *
       * @param request CreateCircuitBreakerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCircuitBreakerRuleResponse
       */
      Models::CreateCircuitBreakerRuleResponse createCircuitBreakerRuleWithOptions(const Models::CreateCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a circuit breaking rule.
       *
       * @param request CreateCircuitBreakerRuleRequest
       * @return CreateCircuitBreakerRuleResponse
       */
      Models::CreateCircuitBreakerRuleResponse createCircuitBreakerRule(const Models::CreateCircuitBreakerRuleRequest &request);

      /**
       * @summary Create an MSE registration and configuration center instance
       *
       * @description Please ensure that you fully understand the billing method and pricing of the MSE (Microservice Engine) product before using this interface.
       *
       * @param request CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an MSE registration and configuration center instance
       *
       * @description Please ensure that you fully understand the billing method and pricing of the MSE (Microservice Engine) product before using this interface.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Creates a namespace in a Nacos instance.
       *
       * @param request CreateEngineNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEngineNamespaceResponse
       */
      Models::CreateEngineNamespaceResponse createEngineNamespaceWithOptions(const Models::CreateEngineNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a namespace in a Nacos instance.
       *
       * @param request CreateEngineNamespaceRequest
       * @return CreateEngineNamespaceResponse
       */
      Models::CreateEngineNamespaceResponse createEngineNamespace(const Models::CreateEngineNamespaceRequest &request);

      /**
       * @summary Creates a throttling rule.
       *
       * @param request CreateFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowRuleResponse
       */
      Models::CreateFlowRuleResponse createFlowRuleWithOptions(const Models::CreateFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a throttling rule.
       *
       * @param request CreateFlowRuleRequest
       * @return CreateFlowRuleResponse
       */
      Models::CreateFlowRuleResponse createFlowRule(const Models::CreateFlowRuleRequest &request);

      /**
       * @summary 创建网关路由熔断规则
       *
       * @param request CreateGatewayCircuitBreakerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayCircuitBreakerRuleResponse
       */
      Models::CreateGatewayCircuitBreakerRuleResponse createGatewayCircuitBreakerRuleWithOptions(const Models::CreateGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建网关路由熔断规则
       *
       * @param request CreateGatewayCircuitBreakerRuleRequest
       * @return CreateGatewayCircuitBreakerRuleResponse
       */
      Models::CreateGatewayCircuitBreakerRuleResponse createGatewayCircuitBreakerRule(const Models::CreateGatewayCircuitBreakerRuleRequest &request);

      /**
       * @summary Creates a throttling rule for a gateway.
       *
       * @param request CreateGatewayFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayFlowRuleResponse
       */
      Models::CreateGatewayFlowRuleResponse createGatewayFlowRuleWithOptions(const Models::CreateGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a throttling rule for a gateway.
       *
       * @param request CreateGatewayFlowRuleRequest
       * @return CreateGatewayFlowRuleResponse
       */
      Models::CreateGatewayFlowRuleResponse createGatewayFlowRule(const Models::CreateGatewayFlowRuleRequest &request);

      /**
       * @summary 创建网关路由隔离规则
       *
       * @param request CreateGatewayIsolationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayIsolationRuleResponse
       */
      Models::CreateGatewayIsolationRuleResponse createGatewayIsolationRuleWithOptions(const Models::CreateGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建网关路由隔离规则
       *
       * @param request CreateGatewayIsolationRuleRequest
       * @return CreateGatewayIsolationRuleResponse
       */
      Models::CreateGatewayIsolationRuleResponse createGatewayIsolationRule(const Models::CreateGatewayIsolationRuleRequest &request);

      /**
       * @summary 创建隔离规则
       *
       * @param request CreateIsolationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIsolationRuleResponse
       */
      Models::CreateIsolationRuleResponse createIsolationRuleWithOptions(const Models::CreateIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建隔离规则
       *
       * @param request CreateIsolationRuleRequest
       * @return CreateIsolationRuleResponse
       */
      Models::CreateIsolationRuleResponse createIsolationRule(const Models::CreateIsolationRuleRequest &request);

      /**
       * @deprecated OpenAPI CreateMseServiceApplication is deprecated, please use mse::2019-05-31::CreateApplication instead.
       *
       * @summary Creates an application.
       *
       * @param request CreateMseServiceApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMseServiceApplicationResponse
       */
      Models::CreateMseServiceApplicationResponse createMseServiceApplicationWithOptions(const Models::CreateMseServiceApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateMseServiceApplication is deprecated, please use mse::2019-05-31::CreateApplication instead.
       *
       * @summary Creates an application.
       *
       * @param request CreateMseServiceApplicationRequest
       * @return CreateMseServiceApplicationResponse
       */
      Models::CreateMseServiceApplicationResponse createMseServiceApplication(const Models::CreateMseServiceApplicationRequest &request);

      /**
       * @summary Creates a Nacos configuration.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CreateNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNacosConfigResponse
       */
      Models::CreateNacosConfigResponse createNacosConfigWithOptions(const Models::CreateNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Nacos configuration.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CreateNacosConfigRequest
       * @return CreateNacosConfigResponse
       */
      Models::CreateNacosConfigResponse createNacosConfig(const Models::CreateNacosConfigRequest &request);

      /**
       * @summary Creates a Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CreateNacosInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNacosInstanceResponse
       */
      Models::CreateNacosInstanceResponse createNacosInstanceWithOptions(const Models::CreateNacosInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CreateNacosInstanceRequest
       * @return CreateNacosInstanceResponse
       */
      Models::CreateNacosInstanceResponse createNacosInstance(const Models::CreateNacosInstanceRequest &request);

      /**
       * @summary 创建一个MCP Server
       *
       * @param request CreateNacosMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNacosMcpServerResponse
       */
      Models::CreateNacosMcpServerResponse createNacosMcpServerWithOptions(const Models::CreateNacosMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个MCP Server
       *
       * @param request CreateNacosMcpServerRequest
       * @return CreateNacosMcpServerResponse
       */
      Models::CreateNacosMcpServerResponse createNacosMcpServer(const Models::CreateNacosMcpServerRequest &request);

      /**
       * @summary Creates a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CreateNacosServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNacosServiceResponse
       */
      Models::CreateNacosServiceResponse createNacosServiceWithOptions(const Models::CreateNacosServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request CreateNacosServiceRequest
       * @return CreateNacosServiceResponse
       */
      Models::CreateNacosServiceResponse createNacosService(const Models::CreateNacosServiceRequest &request);

      /**
       * @summary CreateNamespace
       *
       * @param tmpReq CreateNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespaceWithOptions(const Models::CreateNamespaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateNamespace
       *
       * @param request CreateNamespaceRequest
       * @return CreateNamespaceResponse
       */
      Models::CreateNamespaceResponse createNamespace(const Models::CreateNamespaceRequest &request);

      /**
       * @summary Creates or updates a lane for end-to-end canary release.
       *
       * @param tmpReq CreateOrUpdateSwimmingLaneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateSwimmingLaneResponse
       */
      Models::CreateOrUpdateSwimmingLaneResponse createOrUpdateSwimmingLaneWithOptions(const Models::CreateOrUpdateSwimmingLaneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a lane for end-to-end canary release.
       *
       * @param request CreateOrUpdateSwimmingLaneRequest
       * @return CreateOrUpdateSwimmingLaneResponse
       */
      Models::CreateOrUpdateSwimmingLaneResponse createOrUpdateSwimmingLane(const Models::CreateOrUpdateSwimmingLaneRequest &request);

      /**
       * @summary Creates or updates a lane group for end-to-end canary release.
       *
       * @param tmpReq CreateOrUpdateSwimmingLaneGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrUpdateSwimmingLaneGroupResponse
       */
      Models::CreateOrUpdateSwimmingLaneGroupResponse createOrUpdateSwimmingLaneGroupWithOptions(const Models::CreateOrUpdateSwimmingLaneGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a lane group for end-to-end canary release.
       *
       * @param request CreateOrUpdateSwimmingLaneGroupRequest
       * @return CreateOrUpdateSwimmingLaneGroupResponse
       */
      Models::CreateOrUpdateSwimmingLaneGroupResponse createOrUpdateSwimmingLaneGroup(const Models::CreateOrUpdateSwimmingLaneGroupRequest &request);

      /**
       * @summary Creates a plug-in configuration.
       *
       * @param tmpReq CreatePluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginConfigResponse
       */
      Models::CreatePluginConfigResponse createPluginConfigWithOptions(const Models::CreatePluginConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a plug-in configuration.
       *
       * @param request CreatePluginConfigRequest
       * @return CreatePluginConfigResponse
       */
      Models::CreatePluginConfigResponse createPluginConfig(const Models::CreatePluginConfigRequest &request);

      /**
       * @summary 创建行为管理
       *
       * @param request CreateSentinelBlockFallbackDefinitionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSentinelBlockFallbackDefinitionResponse
       */
      Models::CreateSentinelBlockFallbackDefinitionResponse createSentinelBlockFallbackDefinitionWithOptions(const Models::CreateSentinelBlockFallbackDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建行为管理
       *
       * @param request CreateSentinelBlockFallbackDefinitionRequest
       * @return CreateSentinelBlockFallbackDefinitionResponse
       */
      Models::CreateSentinelBlockFallbackDefinitionResponse createSentinelBlockFallbackDefinition(const Models::CreateSentinelBlockFallbackDefinitionRequest &request);

      /**
       * @summary 创建热点参数防护规则（HTTP 请求）
       *
       * @param request CreateWebFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWebFlowRuleResponse
       */
      Models::CreateWebFlowRuleResponse createWebFlowRuleWithOptions(const Models::CreateWebFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建热点参数防护规则（HTTP 请求）
       *
       * @param request CreateWebFlowRuleRequest
       * @return CreateWebFlowRuleResponse
       */
      Models::CreateWebFlowRuleResponse createWebFlowRule(const Models::CreateWebFlowRuleRequest &request);

      /**
       * @summary Creates a znode.
       *
       * @param request CreateZnodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateZnodeResponse
       */
      Models::CreateZnodeResponse createZnodeWithOptions(const Models::CreateZnodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a znode.
       *
       * @param request CreateZnodeRequest
       * @return CreateZnodeResponse
       */
      Models::CreateZnodeResponse createZnode(const Models::CreateZnodeRequest &request);

      /**
       * @summary Deletes an authorized resource.
       *
       * @param request DeleteAuthResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuthResourceResponse
       */
      Models::DeleteAuthResourceResponse deleteAuthResourceWithOptions(const Models::DeleteAuthResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an authorized resource.
       *
       * @param request DeleteAuthResourceRequest
       * @return DeleteAuthResourceResponse
       */
      Models::DeleteAuthResourceResponse deleteAuthResource(const Models::DeleteAuthResourceRequest &request);

      /**
       * @summary Deletes circuit breaking rules.
       *
       * @param tmpReq DeleteCircuitBreakerRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCircuitBreakerRulesResponse
       */
      Models::DeleteCircuitBreakerRulesResponse deleteCircuitBreakerRulesWithOptions(const Models::DeleteCircuitBreakerRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes circuit breaking rules.
       *
       * @param request DeleteCircuitBreakerRulesRequest
       * @return DeleteCircuitBreakerRulesResponse
       */
      Models::DeleteCircuitBreakerRulesResponse deleteCircuitBreakerRules(const Models::DeleteCircuitBreakerRulesRequest &request);

      /**
       * @summary Deletes a Microservices Engine (MSE) instance.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Microservices Engine (MSE) instance.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes a namespace from a Nacos instance.
       *
       * @param request DeleteEngineNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEngineNamespaceResponse
       */
      Models::DeleteEngineNamespaceResponse deleteEngineNamespaceWithOptions(const Models::DeleteEngineNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace from a Nacos instance.
       *
       * @param request DeleteEngineNamespaceRequest
       * @return DeleteEngineNamespaceResponse
       */
      Models::DeleteEngineNamespaceResponse deleteEngineNamespace(const Models::DeleteEngineNamespaceRequest &request);

      /**
       * @summary Deletes throttling rules.
       *
       * @param tmpReq DeleteFlowRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowRulesResponse
       */
      Models::DeleteFlowRulesResponse deleteFlowRulesWithOptions(const Models::DeleteFlowRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes throttling rules.
       *
       * @param request DeleteFlowRulesRequest
       * @return DeleteFlowRulesResponse
       */
      Models::DeleteFlowRulesResponse deleteFlowRules(const Models::DeleteFlowRulesRequest &request);

      /**
       * @summary Deletes a gateway.
       *
       * @param request DeleteGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const Models::DeleteGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a gateway.
       *
       * @param request DeleteGatewayRequest
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const Models::DeleteGatewayRequest &request);

      /**
       * @summary Deletes a consumer on which a gateway performs authentication operations.
       *
       * @param request DeleteGatewayAuthConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayAuthConsumerResponse
       */
      Models::DeleteGatewayAuthConsumerResponse deleteGatewayAuthConsumerWithOptions(const Models::DeleteGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer on which a gateway performs authentication operations.
       *
       * @param request DeleteGatewayAuthConsumerRequest
       * @return DeleteGatewayAuthConsumerResponse
       */
      Models::DeleteGatewayAuthConsumerResponse deleteGatewayAuthConsumer(const Models::DeleteGatewayAuthConsumerRequest &request);

      /**
       * @summary Deletes resource permissions from the consumer on which a gateway performs authentication operations.
       *
       * @param request DeleteGatewayAuthConsumerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayAuthConsumerResourceResponse
       */
      Models::DeleteGatewayAuthConsumerResourceResponse deleteGatewayAuthConsumerResourceWithOptions(const Models::DeleteGatewayAuthConsumerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes resource permissions from the consumer on which a gateway performs authentication operations.
       *
       * @param request DeleteGatewayAuthConsumerResourceRequest
       * @return DeleteGatewayAuthConsumerResourceResponse
       */
      Models::DeleteGatewayAuthConsumerResourceResponse deleteGatewayAuthConsumerResource(const Models::DeleteGatewayAuthConsumerResourceRequest &request);

      /**
       * @summary 删除网关路由熔断规则
       *
       * @param request DeleteGatewayCircuitBreakerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayCircuitBreakerRuleResponse
       */
      Models::DeleteGatewayCircuitBreakerRuleResponse deleteGatewayCircuitBreakerRuleWithOptions(const Models::DeleteGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网关路由熔断规则
       *
       * @param request DeleteGatewayCircuitBreakerRuleRequest
       * @return DeleteGatewayCircuitBreakerRuleResponse
       */
      Models::DeleteGatewayCircuitBreakerRuleResponse deleteGatewayCircuitBreakerRule(const Models::DeleteGatewayCircuitBreakerRuleRequest &request);

      /**
       * @summary Disassociates a domain name from a gateway.
       *
       * @param request DeleteGatewayDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayDomainResponse
       */
      Models::DeleteGatewayDomainResponse deleteGatewayDomainWithOptions(const Models::DeleteGatewayDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a domain name from a gateway.
       *
       * @param request DeleteGatewayDomainRequest
       * @return DeleteGatewayDomainResponse
       */
      Models::DeleteGatewayDomainResponse deleteGatewayDomain(const Models::DeleteGatewayDomainRequest &request);

      /**
       * @summary 删除网关路由流控规则
       *
       * @param request DeleteGatewayFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayFlowRuleResponse
       */
      Models::DeleteGatewayFlowRuleResponse deleteGatewayFlowRuleWithOptions(const Models::DeleteGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网关路由流控规则
       *
       * @param request DeleteGatewayFlowRuleRequest
       * @return DeleteGatewayFlowRuleResponse
       */
      Models::DeleteGatewayFlowRuleResponse deleteGatewayFlowRule(const Models::DeleteGatewayFlowRuleRequest &request);

      /**
       * @summary 删除网关路由隔离规则
       *
       * @param request DeleteGatewayIsolationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayIsolationRuleResponse
       */
      Models::DeleteGatewayIsolationRuleResponse deleteGatewayIsolationRuleWithOptions(const Models::DeleteGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网关路由隔离规则
       *
       * @param request DeleteGatewayIsolationRuleRequest
       * @return DeleteGatewayIsolationRuleResponse
       */
      Models::DeleteGatewayIsolationRuleResponse deleteGatewayIsolationRule(const Models::DeleteGatewayIsolationRuleRequest &request);

      /**
       * @summary Deletes a route from a gateway.
       *
       * @param request DeleteGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayRouteResponse
       */
      Models::DeleteGatewayRouteResponse deleteGatewayRouteWithOptions(const Models::DeleteGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route from a gateway.
       *
       * @param request DeleteGatewayRouteRequest
       * @return DeleteGatewayRouteResponse
       */
      Models::DeleteGatewayRouteResponse deleteGatewayRoute(const Models::DeleteGatewayRouteRequest &request);

      /**
       * @summary Deletes a service from a gateway.
       *
       * @param request DeleteGatewayServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayServiceResponse
       */
      Models::DeleteGatewayServiceResponse deleteGatewayServiceWithOptions(const Models::DeleteGatewayServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service from a gateway.
       *
       * @param request DeleteGatewayServiceRequest
       * @return DeleteGatewayServiceResponse
       */
      Models::DeleteGatewayServiceResponse deleteGatewayService(const Models::DeleteGatewayServiceRequest &request);

      /**
       * @summary Deletes a service version from a gateway.
       *
       * @param request DeleteGatewayServiceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayServiceVersionResponse
       */
      Models::DeleteGatewayServiceVersionResponse deleteGatewayServiceVersionWithOptions(const Models::DeleteGatewayServiceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service version from a gateway.
       *
       * @param request DeleteGatewayServiceVersionRequest
       * @return DeleteGatewayServiceVersionResponse
       */
      Models::DeleteGatewayServiceVersionResponse deleteGatewayServiceVersion(const Models::DeleteGatewayServiceVersionRequest &request);

      /**
       * @summary Deletes the Server Load Balancer (SLB) instance that is associated with a gateway.
       *
       * @param request DeleteGatewaySlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewaySlbResponse
       */
      Models::DeleteGatewaySlbResponse deleteGatewaySlbWithOptions(const Models::DeleteGatewaySlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the Server Load Balancer (SLB) instance that is associated with a gateway.
       *
       * @param request DeleteGatewaySlbRequest
       * @return DeleteGatewaySlbResponse
       */
      Models::DeleteGatewaySlbResponse deleteGatewaySlb(const Models::DeleteGatewaySlbRequest &request);

      /**
       * @summary 删除隔离规则
       *
       * @param tmpReq DeleteIsolationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIsolationRulesResponse
       */
      Models::DeleteIsolationRulesResponse deleteIsolationRulesWithOptions(const Models::DeleteIsolationRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除隔离规则
       *
       * @param request DeleteIsolationRulesRequest
       * @return DeleteIsolationRulesResponse
       */
      Models::DeleteIsolationRulesResponse deleteIsolationRules(const Models::DeleteIsolationRulesRequest &request);

      /**
       * @summary Deletes a migration task.
       *
       * @param request DeleteMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMigrationTaskResponse
       */
      Models::DeleteMigrationTaskResponse deleteMigrationTaskWithOptions(const Models::DeleteMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a migration task.
       *
       * @param request DeleteMigrationTaskRequest
       * @return DeleteMigrationTaskResponse
       */
      Models::DeleteMigrationTaskResponse deleteMigrationTask(const Models::DeleteMigrationTaskRequest &request);

      /**
       * @summary Delete specified Nacos configuration
       *
       * @description > The current OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNacosConfigResponse
       */
      Models::DeleteNacosConfigResponse deleteNacosConfigWithOptions(const Models::DeleteNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete specified Nacos configuration
       *
       * @description > The current OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosConfigRequest
       * @return DeleteNacosConfigResponse
       */
      Models::DeleteNacosConfigResponse deleteNacosConfig(const Models::DeleteNacosConfigRequest &request);

      /**
       * @summary Deletes multiple Nacos configurations at a time.
       *
       * @description >  The current API operation is not provided in Nacos SDK. For more information about the Nacos-SDK API, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNacosConfigsResponse
       */
      Models::DeleteNacosConfigsResponse deleteNacosConfigsWithOptions(const Models::DeleteNacosConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple Nacos configurations at a time.
       *
       * @description >  The current API operation is not provided in Nacos SDK. For more information about the Nacos-SDK API, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosConfigsRequest
       * @return DeleteNacosConfigsResponse
       */
      Models::DeleteNacosConfigsResponse deleteNacosConfigs(const Models::DeleteNacosConfigsRequest &request);

      /**
       * @summary Deletes a persistent application instance from a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNacosInstanceResponse
       */
      Models::DeleteNacosInstanceResponse deleteNacosInstanceWithOptions(const Models::DeleteNacosInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a persistent application instance from a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosInstanceRequest
       * @return DeleteNacosInstanceResponse
       */
      Models::DeleteNacosInstanceResponse deleteNacosInstance(const Models::DeleteNacosInstanceRequest &request);

      /**
       * @summary 删除一个MCP Server
       *
       * @param request DeleteNacosMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNacosMcpServerResponse
       */
      Models::DeleteNacosMcpServerResponse deleteNacosMcpServerWithOptions(const Models::DeleteNacosMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个MCP Server
       *
       * @param request DeleteNacosMcpServerRequest
       * @return DeleteNacosMcpServerResponse
       */
      Models::DeleteNacosMcpServerResponse deleteNacosMcpServer(const Models::DeleteNacosMcpServerRequest &request);

      /**
       * @summary Deletes a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNacosServiceResponse
       */
      Models::DeleteNacosServiceResponse deleteNacosServiceWithOptions(const Models::DeleteNacosServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request DeleteNacosServiceRequest
       * @return DeleteNacosServiceResponse
       */
      Models::DeleteNacosServiceResponse deleteNacosService(const Models::DeleteNacosServiceRequest &request);

      /**
       * @summary 删除MSE命名空间
       *
       * @param request DeleteNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespaceWithOptions(const Models::DeleteNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除MSE命名空间
       *
       * @param request DeleteNamespaceRequest
       * @return DeleteNamespaceResponse
       */
      Models::DeleteNamespaceResponse deleteNamespace(const Models::DeleteNamespaceRequest &request);

      /**
       * @summary Deletes a plug-in configuration.
       *
       * @param request DeletePluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePluginConfigResponse
       */
      Models::DeletePluginConfigResponse deletePluginConfigWithOptions(const Models::DeletePluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a plug-in configuration.
       *
       * @param request DeletePluginConfigRequest
       * @return DeletePluginConfigResponse
       */
      Models::DeletePluginConfigResponse deletePluginConfig(const Models::DeletePluginConfigRequest &request);

      /**
       * @summary Deletes a security group rule from a gateway.
       *
       * @param request DeleteSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityGroupRuleResponse
       */
      Models::DeleteSecurityGroupRuleResponse deleteSecurityGroupRuleWithOptions(const Models::DeleteSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group rule from a gateway.
       *
       * @param request DeleteSecurityGroupRuleRequest
       * @return DeleteSecurityGroupRuleResponse
       */
      Models::DeleteSecurityGroupRuleResponse deleteSecurityGroupRule(const Models::DeleteSecurityGroupRuleRequest &request);

      /**
       * @summary Deletes a gateway service source.
       *
       * @param request DeleteServiceSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceSourceResponse
       */
      Models::DeleteServiceSourceResponse deleteServiceSourceWithOptions(const Models::DeleteServiceSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a gateway service source.
       *
       * @param request DeleteServiceSourceRequest
       * @return DeleteServiceSourceResponse
       */
      Models::DeleteServiceSourceResponse deleteServiceSource(const Models::DeleteServiceSourceRequest &request);

      /**
       * @summary Deletes a lane.
       *
       * @param request DeleteSwimmingLaneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSwimmingLaneResponse
       */
      Models::DeleteSwimmingLaneResponse deleteSwimmingLaneWithOptions(const Models::DeleteSwimmingLaneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lane.
       *
       * @param request DeleteSwimmingLaneRequest
       * @return DeleteSwimmingLaneResponse
       */
      Models::DeleteSwimmingLaneResponse deleteSwimmingLane(const Models::DeleteSwimmingLaneRequest &request);

      /**
       * @summary Deletes a lane group.
       *
       * @param request DeleteSwimmingLaneGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSwimmingLaneGroupResponse
       */
      Models::DeleteSwimmingLaneGroupResponse deleteSwimmingLaneGroupWithOptions(const Models::DeleteSwimmingLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a lane group.
       *
       * @param request DeleteSwimmingLaneGroupRequest
       * @return DeleteSwimmingLaneGroupResponse
       */
      Models::DeleteSwimmingLaneGroupResponse deleteSwimmingLaneGroup(const Models::DeleteSwimmingLaneGroupRequest &request);

      /**
       * @summary 删除热点参数防护规则（HTTP 请求）
       *
       * @param request DeleteWebFlowRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebFlowRulesResponse
       */
      Models::DeleteWebFlowRulesResponse deleteWebFlowRulesWithOptions(const Models::DeleteWebFlowRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除热点参数防护规则（HTTP 请求）
       *
       * @param request DeleteWebFlowRulesRequest
       * @return DeleteWebFlowRulesResponse
       */
      Models::DeleteWebFlowRulesResponse deleteWebFlowRules(const Models::DeleteWebFlowRulesRequest &request);

      /**
       * @summary Deletes a ZooKeeper node.
       *
       * @param request DeleteZnodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteZnodeResponse
       */
      Models::DeleteZnodeResponse deleteZnodeWithOptions(const Models::DeleteZnodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a ZooKeeper node.
       *
       * @param request DeleteZnodeRequest
       * @return DeleteZnodeResponse
       */
      Models::DeleteZnodeResponse deleteZnode(const Models::DeleteZnodeRequest &request);

      /**
       * @summary Enables HTTP/2 for negotiation between the server and client. The modification takes effect in one to two minutes.
       *
       * @param request EnableHttp2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHttp2Response
       */
      Models::EnableHttp2Response enableHttp2WithOptions(const Models::EnableHttp2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables HTTP/2 for negotiation between the server and client. The modification takes effect in one to two minutes.
       *
       * @param request EnableHttp2Request
       * @return EnableHttp2Response
       */
      Models::EnableHttp2Response enableHttp2(const Models::EnableHttp2Request &request);

      /**
       * @summary Enables the proxy protocol. When an NLB instance is used as an ingress, you cannot obtain the real IP address of the client if you do not enable the proxy protocol. After you enable the proxy protocol, non-proxy requests are not adversely affected.
       *
       * @param request EnableProxyProtocolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableProxyProtocolResponse
       */
      Models::EnableProxyProtocolResponse enableProxyProtocolWithOptions(const Models::EnableProxyProtocolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the proxy protocol. When an NLB instance is used as an ingress, you cannot obtain the real IP address of the client if you do not enable the proxy protocol. After you enable the proxy protocol, non-proxy requests are not adversely affected.
       *
       * @param request EnableProxyProtocolRequest
       * @return EnableProxyProtocolResponse
       */
      Models::EnableProxyProtocolResponse enableProxyProtocol(const Models::EnableProxyProtocolRequest &request);

      /**
       * @summary Exports specified Nacos configurations.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ExportNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportNacosConfigResponse
       */
      Models::ExportNacosConfigResponse exportNacosConfigWithOptions(const Models::ExportNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports specified Nacos configurations.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ExportNacosConfigRequest
       * @return ExportNacosConfigResponse
       */
      Models::ExportNacosConfigResponse exportNacosConfig(const Models::ExportNacosConfigRequest &request);

      /**
       * @summary Initiates a task to export ZooKeeper data.
       *
       * @description Only one task can run at a time.
       *
       * @param request ExportZookeeperDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportZookeeperDataResponse
       */
      Models::ExportZookeeperDataResponse exportZookeeperDataWithOptions(const Models::ExportZookeeperDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a task to export ZooKeeper data.
       *
       * @description Only one task can run at a time.
       *
       * @param request ExportZookeeperDataRequest
       * @return ExportZookeeperDataResponse
       */
      Models::ExportZookeeperDataResponse exportZookeeperData(const Models::ExportZookeeperDataRequest &request);

      /**
       * @summary Obtains the rules for graceful start and shutdown.
       *
       * @description You can call this operation to query the rules for graceful start and shutdown.
       *
       * @param request FetchLosslessRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchLosslessRuleListResponse
       */
      Models::FetchLosslessRuleListResponse fetchLosslessRuleListWithOptions(const Models::FetchLosslessRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the rules for graceful start and shutdown.
       *
       * @description You can call this operation to query the rules for graceful start and shutdown.
       *
       * @param request FetchLosslessRuleListRequest
       * @return FetchLosslessRuleListResponse
       */
      Models::FetchLosslessRuleListResponse fetchLosslessRuleList(const Models::FetchLosslessRuleListRequest &request);

      /**
       * @summary Queries a list of blacklists and whitelists of a gateway.
       *
       * @param tmpReq GatewayBlackWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GatewayBlackWhiteListResponse
       */
      Models::GatewayBlackWhiteListResponse gatewayBlackWhiteListWithOptions(const Models::GatewayBlackWhiteListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of blacklists and whitelists of a gateway.
       *
       * @param request GatewayBlackWhiteListRequest
       * @return GatewayBlackWhiteListResponse
       */
      Models::GatewayBlackWhiteListResponse gatewayBlackWhiteList(const Models::GatewayBlackWhiteListRequest &request);

      /**
       * @summary Queries information about canary release for messaging of an application.
       *
       * @param request GetAppMessageQueueRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppMessageQueueRouteResponse
       */
      Models::GetAppMessageQueueRouteResponse getAppMessageQueueRouteWithOptions(const Models::GetAppMessageQueueRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about canary release for messaging of an application.
       *
       * @param request GetAppMessageQueueRouteRequest
       * @return GetAppMessageQueueRouteResponse
       */
      Models::GetAppMessageQueueRouteResponse getAppMessageQueueRoute(const Models::GetAppMessageQueueRouteRequest &request);

      /**
       * @summary Queries the list of microservice application instances.
       *
       * @param request GetApplicationInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationInstanceListResponse
       */
      Models::GetApplicationInstanceListResponse getApplicationInstanceListWithOptions(const Models::GetApplicationInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of microservice application instances.
       *
       * @param request GetApplicationInstanceListRequest
       * @return GetApplicationInstanceListResponse
       */
      Models::GetApplicationInstanceListResponse getApplicationInstanceList(const Models::GetApplicationInstanceListRequest &request);

      /**
       * @summary Obtains the list of applications.
       *
       * @param tmpReq GetApplicationListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationListResponse
       */
      Models::GetApplicationListResponse getApplicationListWithOptions(const Models::GetApplicationListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list of applications.
       *
       * @param request GetApplicationListRequest
       * @return GetApplicationListResponse
       */
      Models::GetApplicationListResponse getApplicationList(const Models::GetApplicationListRequest &request);

      /**
       * @deprecated OpenAPI GetBlackWhiteList is deprecated, please use mse::2019-05-31::GatewayBlackWhiteList instead.
       *
       * @summary Queries the blacklist or whitelist of a gateway.
       *
       * @param request GetBlackWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBlackWhiteListResponse
       */
      Models::GetBlackWhiteListResponse getBlackWhiteListWithOptions(const Models::GetBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetBlackWhiteList is deprecated, please use mse::2019-05-31::GatewayBlackWhiteList instead.
       *
       * @summary Queries the blacklist or whitelist of a gateway.
       *
       * @param request GetBlackWhiteListRequest
       * @return GetBlackWhiteListResponse
       */
      Models::GetBlackWhiteListResponse getBlackWhiteList(const Models::GetBlackWhiteListRequest &request);

      /**
       * @summary Queries the namespaces of a Nacos instance.
       *
       * @param request GetEngineNamepaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEngineNamepaceResponse
       */
      Models::GetEngineNamepaceResponse getEngineNamepaceWithOptions(const Models::GetEngineNamepaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespaces of a Nacos instance.
       *
       * @param request GetEngineNamepaceRequest
       * @return GetEngineNamepaceResponse
       */
      Models::GetEngineNamepaceResponse getEngineNamepace(const Models::GetEngineNamepaceRequest &request);

      /**
       * @summary Obtains the basic information about a gateway, such as the virtual private cloud (VPC) and vSwitch to which the gateway belongs.
       *
       * @param request GetGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGatewayWithOptions(const Models::GetGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the basic information about a gateway, such as the virtual private cloud (VPC) and vSwitch to which the gateway belongs.
       *
       * @param request GetGatewayRequest
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGateway(const Models::GetGatewayRequest &request);

      /**
       * @summary Queries the details of the consumer on which a gateway performs authentication operations.
       *
       * @param request GetGatewayAuthConsumerDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayAuthConsumerDetailResponse
       */
      Models::GetGatewayAuthConsumerDetailResponse getGatewayAuthConsumerDetailWithOptions(const Models::GetGatewayAuthConsumerDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the consumer on which a gateway performs authentication operations.
       *
       * @param request GetGatewayAuthConsumerDetailRequest
       * @return GetGatewayAuthConsumerDetailResponse
       */
      Models::GetGatewayAuthConsumerDetailResponse getGatewayAuthConsumerDetail(const Models::GetGatewayAuthConsumerDetailRequest &request);

      /**
       * @summary 查询网关认证详情
       *
       * @param request GetGatewayAuthDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayAuthDetailResponse
       */
      Models::GetGatewayAuthDetailResponse getGatewayAuthDetailWithOptions(const Models::GetGatewayAuthDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网关认证详情
       *
       * @param request GetGatewayAuthDetailRequest
       * @return GetGatewayAuthDetailResponse
       */
      Models::GetGatewayAuthDetailResponse getGatewayAuthDetail(const Models::GetGatewayAuthDetailRequest &request);

      /**
       * @summary 获取网关全局配置
       *
       * @param request GetGatewayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayConfigResponse
       */
      Models::GetGatewayConfigResponse getGatewayConfigWithOptions(const Models::GetGatewayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网关全局配置
       *
       * @param request GetGatewayConfigRequest
       * @return GetGatewayConfigResponse
       */
      Models::GetGatewayConfigResponse getGatewayConfig(const Models::GetGatewayConfigRequest &request);

      /**
       * @summary Queries the details of a domain name associated with a gateway.
       *
       * @param request GetGatewayDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayDomainDetailResponse
       */
      Models::GetGatewayDomainDetailResponse getGatewayDomainDetailWithOptions(const Models::GetGatewayDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a domain name associated with a gateway.
       *
       * @param request GetGatewayDomainDetailRequest
       * @return GetGatewayDomainDetailResponse
       */
      Models::GetGatewayDomainDetailResponse getGatewayDomainDetail(const Models::GetGatewayDomainDetailRequest &request);

      /**
       * @summary Obtains the global parameters of a gateway.
       *
       * @param request GetGatewayOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayOptionResponse
       */
      Models::GetGatewayOptionResponse getGatewayOptionWithOptions(const Models::GetGatewayOptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the global parameters of a gateway.
       *
       * @param request GetGatewayOptionRequest
       * @return GetGatewayOptionResponse
       */
      Models::GetGatewayOptionResponse getGatewayOption(const Models::GetGatewayOptionRequest &request);

      /**
       * @summary Queries the details of a route for a gateway.
       *
       * @param request GetGatewayRouteDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayRouteDetailResponse
       */
      Models::GetGatewayRouteDetailResponse getGatewayRouteDetailWithOptions(const Models::GetGatewayRouteDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a route for a gateway.
       *
       * @param request GetGatewayRouteDetailRequest
       * @return GetGatewayRouteDetailResponse
       */
      Models::GetGatewayRouteDetailResponse getGatewayRouteDetail(const Models::GetGatewayRouteDetailRequest &request);

      /**
       * @summary Queries the details of a service.
       *
       * @param request GetGatewayServiceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayServiceDetailResponse
       */
      Models::GetGatewayServiceDetailResponse getGatewayServiceDetailWithOptions(const Models::GetGatewayServiceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a service.
       *
       * @param request GetGatewayServiceDetailRequest
       * @return GetGatewayServiceDetailResponse
       */
      Models::GetGatewayServiceDetailResponse getGatewayServiceDetail(const Models::GetGatewayServiceDetailRequest &request);

      /**
       * @summary Queries the information about a Container Service for Kubernetes (ACK) cluster for which Microservices Governance is enabled.
       *
       * @param request GetGovernanceKubernetesClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceKubernetesClusterResponse
       */
      Models::GetGovernanceKubernetesClusterResponse getGovernanceKubernetesClusterWithOptions(const Models::GetGovernanceKubernetesClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Container Service for Kubernetes (ACK) cluster for which Microservices Governance is enabled.
       *
       * @param request GetGovernanceKubernetesClusterRequest
       * @return GetGovernanceKubernetesClusterResponse
       */
      Models::GetGovernanceKubernetesClusterResponse getGovernanceKubernetesCluster(const Models::GetGovernanceKubernetesClusterRequest &request);

      /**
       * @summary Queries the maximum version number to which the current version can be upgraded.
       *
       * @param request GetImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const Models::GetImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum version number to which the current version can be upgraded.
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const Models::GetImageRequest &request);

      /**
       * @summary Obtains the URL that is used to upload a configuration file when you import the configuration file into a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).\\n
       *
       * @param request GetImportFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImportFileUrlResponse
       */
      Models::GetImportFileUrlResponse getImportFileUrlWithOptions(const Models::GetImportFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the URL that is used to upload a configuration file when you import the configuration file into a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).\\n
       *
       * @param request GetImportFileUrlRequest
       * @return GetImportFileUrlResponse
       */
      Models::GetImportFileUrlResponse getImportFileUrl(const Models::GetImportFileUrlRequest &request);

      /**
       * @summary Obtains sources of all Container Service for Kubernetes (ACK) services in a gateway.
       *
       * @param request GetKubernetesSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKubernetesSourceResponse
       */
      Models::GetKubernetesSourceResponse getKubernetesSourceWithOptions(const Models::GetKubernetesSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains sources of all Container Service for Kubernetes (ACK) services in a gateway.
       *
       * @param request GetKubernetesSourceRequest
       * @return GetKubernetesSourceResponse
       */
      Models::GetKubernetesSourceResponse getKubernetesSource(const Models::GetKubernetesSourceRequest &request);

      /**
       * @summary 获取同AZ路由规则
       *
       * @param request GetLocalityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLocalityRuleResponse
       */
      Models::GetLocalityRuleResponse getLocalityRuleWithOptions(const Models::GetLocalityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取同AZ路由规则
       *
       * @param request GetLocalityRuleRequest
       * @return GetLocalityRuleResponse
       */
      Models::GetLocalityRuleResponse getLocalityRule(const Models::GetLocalityRuleRequest &request);

      /**
       * @summary Queries the rules for graceful start and shutdown of an application.
       *
       * @description You can call this operation to query the rules for graceful start and shutdown of an application.
       * You can query the rules for graceful start and shutdown of an application preferentially by using the AppId parameter.
       * If the AppId parameter is left empty, you can use the RegionId, Namespace, and AppName parameters to query the rules for graceful start and shutdown of an application.
       *
       * @param request GetLosslessRuleByAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLosslessRuleByAppResponse
       */
      Models::GetLosslessRuleByAppResponse getLosslessRuleByAppWithOptions(const Models::GetLosslessRuleByAppRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rules for graceful start and shutdown of an application.
       *
       * @description You can call this operation to query the rules for graceful start and shutdown of an application.
       * You can query the rules for graceful start and shutdown of an application preferentially by using the AppId parameter.
       * If the AppId parameter is left empty, you can use the RegionId, Namespace, and AppName parameters to query the rules for graceful start and shutdown of an application.
       *
       * @param request GetLosslessRuleByAppRequest
       * @return GetLosslessRuleByAppResponse
       */
      Models::GetLosslessRuleByAppResponse getLosslessRuleByApp(const Models::GetLosslessRuleByAppRequest &request);

      /**
       * @summary Queries the information about the MSE feature switch.
       *
       * @param request GetMseFeatureSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMseFeatureSwitchResponse
       */
      Models::GetMseFeatureSwitchResponse getMseFeatureSwitchWithOptions(const Models::GetMseFeatureSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the MSE feature switch.
       *
       * @param request GetMseFeatureSwitchRequest
       * @return GetMseFeatureSwitchResponse
       */
      Models::GetMseFeatureSwitchResponse getMseFeatureSwitch(const Models::GetMseFeatureSwitchRequest &request);

      /**
       * @summary Queries the existing Microservices Engine (MSE) Nacos instances that are service sources of a gateway.
       *
       * @param request GetMseSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMseSourceResponse
       */
      Models::GetMseSourceResponse getMseSourceWithOptions(const Models::GetMseSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the existing Microservices Engine (MSE) Nacos instances that are service sources of a gateway.
       *
       * @param request GetMseSourceRequest
       * @return GetMseSourceResponse
       */
      Models::GetMseSourceResponse getMseSource(const Models::GetMseSourceRequest &request);

      /**
       * @summary Get Nacos Configuration
       *
       * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request GetNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNacosConfigResponse
       */
      Models::GetNacosConfigResponse getNacosConfigWithOptions(const Models::GetNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Nacos Configuration
       *
       * @description > This OpenAPI is not the Nacos-SDK API. For information related to the Nacos-SDK API, please refer to the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request GetNacosConfigRequest
       * @return GetNacosConfigResponse
       */
      Models::GetNacosConfigResponse getNacosConfig(const Models::GetNacosConfigRequest &request);

      /**
       * @summary Queries the historical details of Nacos configuration changes.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request GetNacosHistoryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNacosHistoryConfigResponse
       */
      Models::GetNacosHistoryConfigResponse getNacosHistoryConfigWithOptions(const Models::GetNacosHistoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical details of Nacos configuration changes.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request GetNacosHistoryConfigRequest
       * @return GetNacosHistoryConfigResponse
       */
      Models::GetNacosHistoryConfigResponse getNacosHistoryConfig(const Models::GetNacosHistoryConfigRequest &request);

      /**
       * @summary 获取MCP Server的详情
       *
       * @param request GetNacosMcpServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNacosMcpServerResponse
       */
      Models::GetNacosMcpServerResponse getNacosMcpServerWithOptions(const Models::GetNacosMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取MCP Server的详情
       *
       * @param request GetNacosMcpServerRequest
       * @return GetNacosMcpServerResponse
       */
      Models::GetNacosMcpServerResponse getNacosMcpServer(const Models::GetNacosMcpServerRequest &request);

      /**
       * @summary Queries information about service governance.
       *
       * @description You can call this operation to query overview information about service governance.
       *
       * @param request GetOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOverviewResponse
       */
      Models::GetOverviewResponse getOverviewWithOptions(const Models::GetOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about service governance.
       *
       * @description You can call this operation to query overview information about service governance.
       *
       * @param request GetOverviewRequest
       * @return GetOverviewResponse
       */
      Models::GetOverviewResponse getOverview(const Models::GetOverviewRequest &request);

      /**
       * @summary Obtains plug-in configurations.
       *
       * @param request GetPluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginConfigResponse
       */
      Models::GetPluginConfigResponse getPluginConfigWithOptions(const Models::GetPluginConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains plug-in configurations.
       *
       * @param request GetPluginConfigRequest
       * @return GetPluginConfigResponse
       */
      Models::GetPluginConfigResponse getPluginConfig(const Models::GetPluginConfigRequest &request);

      /**
       * @summary Obtains plug-ins.
       *
       * @param request GetPluginsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginsResponse
       */
      Models::GetPluginsResponse getPluginsWithOptions(const Models::GetPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains plug-ins.
       *
       * @param request GetPluginsRequest
       * @return GetPluginsResponse
       */
      Models::GetPluginsResponse getPlugins(const Models::GetPluginsRequest &request);

      /**
       * @summary Queries the services of an application.
       *
       * @param request GetServiceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceListResponse
       */
      Models::GetServiceListResponse getServiceListWithOptions(const Models::GetServiceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the services of an application.
       *
       * @param request GetServiceListRequest
       * @return GetServiceListResponse
       */
      Models::GetServiceListResponse getServiceList(const Models::GetServiceListRequest &request);

      /**
       * @summary Queries the version of a microservices application.
       *
       * @param request GetServiceListPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceListPageResponse
       */
      Models::GetServiceListPageResponse getServiceListPageWithOptions(const Models::GetServiceListPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version of a microservices application.
       *
       * @param request GetServiceListPageRequest
       * @return GetServiceListPageResponse
       */
      Models::GetServiceListPageResponse getServiceListPage(const Models::GetServiceListPageRequest &request);

      /**
       * @summary Queries the list of listeners for the destination service.
       *
       * @param request GetServiceListenersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceListenersResponse
       */
      Models::GetServiceListenersResponse getServiceListenersWithOptions(const Models::GetServiceListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of listeners for the destination service.
       *
       * @param request GetServiceListenersRequest
       * @return GetServiceListenersResponse
       */
      Models::GetServiceListenersResponse getServiceListeners(const Models::GetServiceListenersRequest &request);

      /**
       * @summary 获取服务接口列表
       *
       * @param request GetServiceMethodPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceMethodPageResponse
       */
      Models::GetServiceMethodPageResponse getServiceMethodPageWithOptions(const Models::GetServiceMethodPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务接口列表
       *
       * @param request GetServiceMethodPageRequest
       * @return GetServiceMethodPageResponse
       */
      Models::GetServiceMethodPageResponse getServiceMethodPage(const Models::GetServiceMethodPageRequest &request);

      /**
       * @summary Obtains all tags in the current lane group.
       *
       * @param request GetTagsBySwimmingLaneGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTagsBySwimmingLaneGroupIdResponse
       */
      Models::GetTagsBySwimmingLaneGroupIdResponse getTagsBySwimmingLaneGroupIdWithOptions(const Models::GetTagsBySwimmingLaneGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains all tags in the current lane group.
       *
       * @param request GetTagsBySwimmingLaneGroupIdRequest
       * @return GetTagsBySwimmingLaneGroupIdResponse
       */
      Models::GetTagsBySwimmingLaneGroupIdResponse getTagsBySwimmingLaneGroupId(const Models::GetTagsBySwimmingLaneGroupIdRequest &request);

      /**
       * @summary mse-200-105
       *
       * @param request GetZookeeperDataImportUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetZookeeperDataImportUrlResponse
       */
      Models::GetZookeeperDataImportUrlResponse getZookeeperDataImportUrlWithOptions(const Models::GetZookeeperDataImportUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary mse-200-105
       *
       * @param request GetZookeeperDataImportUrlRequest
       * @return GetZookeeperDataImportUrlResponse
       */
      Models::GetZookeeperDataImportUrlResponse getZookeeperDataImportUrl(const Models::GetZookeeperDataImportUrlRequest &request);

      /**
       * @summary Imports Nacos configurations as a file.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ImportNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportNacosConfigResponse
       */
      Models::ImportNacosConfigResponse importNacosConfigWithOptions(const Models::ImportNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports Nacos configurations as a file.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ImportNacosConfigRequest
       * @return ImportNacosConfigResponse
       */
      Models::ImportNacosConfigResponse importNacosConfig(const Models::ImportNacosConfigRequest &request);

      /**
       * @summary Imports services to a gateway.
       *
       * @param tmpReq ImportServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportServicesResponse
       */
      Models::ImportServicesResponse importServicesWithOptions(const Models::ImportServicesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports services to a gateway.
       *
       * @param request ImportServicesRequest
       * @return ImportServicesResponse
       */
      Models::ImportServicesResponse importServices(const Models::ImportServicesRequest &request);

      /**
       * @summary Initiates a task to import data from a destination URL to a Microservices Engine (MSE) ZooKeeper instance.
       *
       * @description **Danger** This operation clears existing data. Exercise caution when you call this API operation.
       *
       * @param request ImportZookeeperDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportZookeeperDataResponse
       */
      Models::ImportZookeeperDataResponse importZookeeperDataWithOptions(const Models::ImportZookeeperDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a task to import data from a destination URL to a Microservices Engine (MSE) ZooKeeper instance.
       *
       * @description **Danger** This operation clears existing data. Exercise caution when you call this API operation.
       *
       * @param request ImportZookeeperDataRequest
       * @return ImportZookeeperDataResponse
       */
      Models::ImportZookeeperDataResponse importZookeeperData(const Models::ImportZookeeperDataRequest &request);

      /**
       * @summary 用户授权mseSLR
       *
       * @param request InitializeServiceLinkRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeServiceLinkRoleResponse
       */
      Models::InitializeServiceLinkRoleResponse initializeServiceLinkRoleWithOptions(const Models::InitializeServiceLinkRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户授权mseSLR
       *
       * @param request InitializeServiceLinkRoleRequest
       * @return InitializeServiceLinkRoleResponse
       */
      Models::InitializeServiceLinkRoleResponse initializeServiceLinkRole(const Models::InitializeServiceLinkRoleRequest &request);

      /**
       * @summary Queries application instances that are registered with a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListAnsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnsInstancesResponse
       */
      Models::ListAnsInstancesResponse listAnsInstancesWithOptions(const Models::ListAnsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries application instances that are registered with a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListAnsInstancesRequest
       * @return ListAnsInstancesResponse
       */
      Models::ListAnsInstancesResponse listAnsInstances(const Models::ListAnsInstancesRequest &request);

      /**
       * @summary Queries the clusters of a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListAnsServiceClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnsServiceClustersResponse
       */
      Models::ListAnsServiceClustersResponse listAnsServiceClustersWithOptions(const Models::ListAnsServiceClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the clusters of a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListAnsServiceClustersRequest
       * @return ListAnsServiceClustersResponse
       */
      Models::ListAnsServiceClustersResponse listAnsServiceClusters(const Models::ListAnsServiceClustersRequest &request);

      /**
       * @summary Queries Nacos services.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListAnsServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAnsServicesResponse
       */
      Models::ListAnsServicesResponse listAnsServicesWithOptions(const Models::ListAnsServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Nacos services.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListAnsServicesRequest
       * @return ListAnsServicesResponse
       */
      Models::ListAnsServicesResponse listAnsServices(const Models::ListAnsServicesRequest &request);

      /**
       * @deprecated OpenAPI ListAppBySwimmingLaneGroupTag is deprecated, please use mse::2019-05-31::ListAppBySwimmingLaneGroupTags instead.
       *
       * @summary Queries the applications in a lane group by tag.
       *
       * @param request ListAppBySwimmingLaneGroupTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppBySwimmingLaneGroupTagResponse
       */
      Models::ListAppBySwimmingLaneGroupTagResponse listAppBySwimmingLaneGroupTagWithOptions(const Models::ListAppBySwimmingLaneGroupTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListAppBySwimmingLaneGroupTag is deprecated, please use mse::2019-05-31::ListAppBySwimmingLaneGroupTags instead.
       *
       * @summary Queries the applications in a lane group by tag.
       *
       * @param request ListAppBySwimmingLaneGroupTagRequest
       * @return ListAppBySwimmingLaneGroupTagResponse
       */
      Models::ListAppBySwimmingLaneGroupTagResponse listAppBySwimmingLaneGroupTag(const Models::ListAppBySwimmingLaneGroupTagRequest &request);

      /**
       * @summary Lists applications by tag in a specified lane group.
       *
       * @param tmpReq ListAppBySwimmingLaneGroupTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppBySwimmingLaneGroupTagsResponse
       */
      Models::ListAppBySwimmingLaneGroupTagsResponse listAppBySwimmingLaneGroupTagsWithOptions(const Models::ListAppBySwimmingLaneGroupTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists applications by tag in a specified lane group.
       *
       * @param request ListAppBySwimmingLaneGroupTagsRequest
       * @return ListAppBySwimmingLaneGroupTagsResponse
       */
      Models::ListAppBySwimmingLaneGroupTagsResponse listAppBySwimmingLaneGroupTags(const Models::ListAppBySwimmingLaneGroupTagsRequest &request);

      /**
       * @summary Queries the routing rules of an application.
       *
       * @param request ListApplicationsWithTagRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsWithTagRulesResponse
       */
      Models::ListApplicationsWithTagRulesResponse listApplicationsWithTagRulesWithOptions(const Models::ListApplicationsWithTagRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routing rules of an application.
       *
       * @param request ListApplicationsWithTagRulesRequest
       * @return ListApplicationsWithTagRulesResponse
       */
      Models::ListApplicationsWithTagRulesResponse listApplicationsWithTagRules(const Models::ListApplicationsWithTagRulesRequest &request);

      /**
       * @summary Queries a list of service authentication rules.
       *
       * @param request ListAuthPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthPolicyResponse
       */
      Models::ListAuthPolicyResponse listAuthPolicyWithOptions(const Models::ListAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of service authentication rules.
       *
       * @param request ListAuthPolicyRequest
       * @return ListAuthPolicyResponse
       */
      Models::ListAuthPolicyResponse listAuthPolicy(const Models::ListAuthPolicyRequest &request);

      /**
       * @summary Queries a list of circuit breaking rules.
       *
       * @param request ListCircuitBreakerRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCircuitBreakerRulesResponse
       */
      Models::ListCircuitBreakerRulesResponse listCircuitBreakerRulesWithOptions(const Models::ListCircuitBreakerRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of circuit breaking rules.
       *
       * @param request ListCircuitBreakerRulesRequest
       * @return ListCircuitBreakerRulesResponse
       */
      Models::ListCircuitBreakerRulesResponse listCircuitBreakerRules(const Models::ListCircuitBreakerRulesRequest &request);

      /**
       * @summary Queries available cluster connection types.
       *
       * @param request ListClusterConnectionTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterConnectionTypesResponse
       */
      Models::ListClusterConnectionTypesResponse listClusterConnectionTypesWithOptions(const Models::ListClusterConnectionTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available cluster connection types.
       *
       * @param request ListClusterConnectionTypesRequest
       * @return ListClusterConnectionTypesResponse
       */
      Models::ListClusterConnectionTypesResponse listClusterConnectionTypes(const Models::ListClusterConnectionTypesRequest &request);

      /**
       * @summary Obtains information about historical health check tasks.
       *
       * @param request ListClusterHealthCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterHealthCheckTaskResponse
       */
      Models::ListClusterHealthCheckTaskResponse listClusterHealthCheckTaskWithOptions(const Models::ListClusterHealthCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains information about historical health check tasks.
       *
       * @param request ListClusterHealthCheckTaskRequest
       * @return ListClusterHealthCheckTaskResponse
       */
      Models::ListClusterHealthCheckTaskResponse listClusterHealthCheckTask(const Models::ListClusterHealthCheckTaskRequest &request);

      /**
       * @summary Queries the engine types that can be activated.
       *
       * @param request ListClusterTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterTypesResponse
       */
      Models::ListClusterTypesResponse listClusterTypesWithOptions(const Models::ListClusterTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the engine types that can be activated.
       *
       * @param request ListClusterTypesRequest
       * @return ListClusterTypesResponse
       */
      Models::ListClusterTypesResponse listClusterTypes(const Models::ListClusterTypesRequest &request);

      /**
       * @summary Queries the information about supported instance versions.
       *
       * @param request ListClusterVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterVersionsResponse
       */
      Models::ListClusterVersionsResponse listClusterVersionsWithOptions(const Models::ListClusterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about supported instance versions.
       *
       * @param request ListClusterVersionsRequest
       * @return ListClusterVersionsResponse
       */
      Models::ListClusterVersionsResponse listClusterVersions(const Models::ListClusterVersionsRequest &request);

      /**
       * @summary Queries Microservices Engine (MSE) instances.
       *
       * @param request ListClustersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClustersWithOptions(const Models::ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Microservices Engine (MSE) instances.
       *
       * @param request ListClustersRequest
       * @return ListClustersResponse
       */
      Models::ListClustersResponse listClusters(const Models::ListClustersRequest &request);

      /**
       * @summary Obtains the track data of a Nacos configuration center.
       *
       * @param request ListConfigTrackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConfigTrackResponse
       */
      Models::ListConfigTrackResponse listConfigTrackWithOptions(const Models::ListConfigTrackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the track data of a Nacos configuration center.
       *
       * @param request ListConfigTrackRequest
       * @return ListConfigTrackResponse
       */
      Models::ListConfigTrackResponse listConfigTrack(const Models::ListConfigTrackRequest &request);

      /**
       * @summary Queries the namespaces of a Nacos instance.
       *
       * @param request ListEngineNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEngineNamespacesResponse
       */
      Models::ListEngineNamespacesResponse listEngineNamespacesWithOptions(const Models::ListEngineNamespacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the namespaces of a Nacos instance.
       *
       * @param request ListEngineNamespacesRequest
       * @return ListEngineNamespacesResponse
       */
      Models::ListEngineNamespacesResponse listEngineNamespaces(const Models::ListEngineNamespacesRequest &request);

      /**
       * @summary Queries Eureka instances.
       *
       * @param request ListEurekaInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEurekaInstancesResponse
       */
      Models::ListEurekaInstancesResponse listEurekaInstancesWithOptions(const Models::ListEurekaInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Eureka instances.
       *
       * @param request ListEurekaInstancesRequest
       * @return ListEurekaInstancesResponse
       */
      Models::ListEurekaInstancesResponse listEurekaInstances(const Models::ListEurekaInstancesRequest &request);

      /**
       * @summary Queries Eureka services.
       *
       * @param request ListEurekaServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEurekaServicesResponse
       */
      Models::ListEurekaServicesResponse listEurekaServicesWithOptions(const Models::ListEurekaServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Eureka services.
       *
       * @param request ListEurekaServicesRequest
       * @return ListEurekaServicesResponse
       */
      Models::ListEurekaServicesResponse listEurekaServices(const Models::ListEurekaServicesRequest &request);

      /**
       * @summary Lists historical data export tasks of a Microservices Engine (MSE) Zookeeper instance.
       *
       * @param request ListExportZookeeperDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExportZookeeperDataResponse
       */
      Models::ListExportZookeeperDataResponse listExportZookeeperDataWithOptions(const Models::ListExportZookeeperDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists historical data export tasks of a Microservices Engine (MSE) Zookeeper instance.
       *
       * @param request ListExportZookeeperDataRequest
       * @return ListExportZookeeperDataResponse
       */
      Models::ListExportZookeeperDataResponse listExportZookeeperData(const Models::ListExportZookeeperDataRequest &request);

      /**
       * @summary Obtains a list of throttling rules.
       *
       * @param request ListFlowRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowRulesResponse
       */
      Models::ListFlowRulesResponse listFlowRulesWithOptions(const Models::ListFlowRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of throttling rules.
       *
       * @param request ListFlowRulesRequest
       * @return ListFlowRulesResponse
       */
      Models::ListFlowRulesResponse listFlowRules(const Models::ListFlowRulesRequest &request);

      /**
       * @summary Queries a list of gateways.
       *
       * @param tmpReq ListGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGatewayWithOptions(const Models::ListGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of gateways.
       *
       * @param request ListGatewayRequest
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGateway(const Models::ListGatewayRequest &request);

      /**
       * @summary Queries the list of consumers on which a gateway performs authentication operations.
       *
       * @param request ListGatewayAuthConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayAuthConsumerResponse
       */
      Models::ListGatewayAuthConsumerResponse listGatewayAuthConsumerWithOptions(const Models::ListGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of consumers on which a gateway performs authentication operations.
       *
       * @param request ListGatewayAuthConsumerRequest
       * @return ListGatewayAuthConsumerResponse
       */
      Models::ListGatewayAuthConsumerResponse listGatewayAuthConsumer(const Models::ListGatewayAuthConsumerRequest &request);

      /**
       * @summary Queries the list of authorized resources for the consumer on which a gateway performs authentication operations.
       *
       * @param request ListGatewayAuthConsumerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayAuthConsumerResourceResponse
       */
      Models::ListGatewayAuthConsumerResourceResponse listGatewayAuthConsumerResourceWithOptions(const Models::ListGatewayAuthConsumerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of authorized resources for the consumer on which a gateway performs authentication operations.
       *
       * @param request ListGatewayAuthConsumerResourceRequest
       * @return ListGatewayAuthConsumerResourceResponse
       */
      Models::ListGatewayAuthConsumerResourceResponse listGatewayAuthConsumerResource(const Models::ListGatewayAuthConsumerResourceRequest &request);

      /**
       * @summary 查看网关路由熔断规则
       *
       * @param request ListGatewayCircuitBreakerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayCircuitBreakerRuleResponse
       */
      Models::ListGatewayCircuitBreakerRuleResponse listGatewayCircuitBreakerRuleWithOptions(const Models::ListGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看网关路由熔断规则
       *
       * @param request ListGatewayCircuitBreakerRuleRequest
       * @return ListGatewayCircuitBreakerRuleResponse
       */
      Models::ListGatewayCircuitBreakerRuleResponse listGatewayCircuitBreakerRule(const Models::ListGatewayCircuitBreakerRuleRequest &request);

      /**
       * @summary Queries the domain names that are associated with a gateway.
       *
       * @param request ListGatewayDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayDomainResponse
       */
      Models::ListGatewayDomainResponse listGatewayDomainWithOptions(const Models::ListGatewayDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that are associated with a gateway.
       *
       * @param request ListGatewayDomainRequest
       * @return ListGatewayDomainResponse
       */
      Models::ListGatewayDomainResponse listGatewayDomain(const Models::ListGatewayDomainRequest &request);

      /**
       * @summary 查看网关路由流控规则
       *
       * @param request ListGatewayFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayFlowRuleResponse
       */
      Models::ListGatewayFlowRuleResponse listGatewayFlowRuleWithOptions(const Models::ListGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看网关路由流控规则
       *
       * @param request ListGatewayFlowRuleRequest
       * @return ListGatewayFlowRuleResponse
       */
      Models::ListGatewayFlowRuleResponse listGatewayFlowRule(const Models::ListGatewayFlowRuleRequest &request);

      /**
       * @summary 查看网关路由隔离规则
       *
       * @param request ListGatewayIsolationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayIsolationRuleResponse
       */
      Models::ListGatewayIsolationRuleResponse listGatewayIsolationRuleWithOptions(const Models::ListGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看网关路由隔离规则
       *
       * @param request ListGatewayIsolationRuleRequest
       * @return ListGatewayIsolationRuleResponse
       */
      Models::ListGatewayIsolationRuleResponse listGatewayIsolationRule(const Models::ListGatewayIsolationRuleRequest &request);

      /**
       * @summary Queries the routes of a gateway.
       *
       * @param tmpReq ListGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayRouteResponse
       */
      Models::ListGatewayRouteResponse listGatewayRouteWithOptions(const Models::ListGatewayRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routes of a gateway.
       *
       * @param request ListGatewayRouteRequest
       * @return ListGatewayRouteResponse
       */
      Models::ListGatewayRouteResponse listGatewayRoute(const Models::ListGatewayRouteRequest &request);

      /**
       * @summary Queries a list of routes for which authentication is enabled.
       *
       * @param request ListGatewayRouteOnAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayRouteOnAuthResponse
       */
      Models::ListGatewayRouteOnAuthResponse listGatewayRouteOnAuthWithOptions(const Models::ListGatewayRouteOnAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of routes for which authentication is enabled.
       *
       * @param request ListGatewayRouteOnAuthRequest
       * @return ListGatewayRouteOnAuthResponse
       */
      Models::ListGatewayRouteOnAuthResponse listGatewayRouteOnAuth(const Models::ListGatewayRouteOnAuthRequest &request);

      /**
       * @summary Queries a list of services that are subscribed with a gateway.
       *
       * @param tmpReq ListGatewayServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayServiceResponse
       */
      Models::ListGatewayServiceResponse listGatewayServiceWithOptions(const Models::ListGatewayServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of services that are subscribed with a gateway.
       *
       * @param request ListGatewayServiceRequest
       * @return ListGatewayServiceResponse
       */
      Models::ListGatewayServiceResponse listGatewayService(const Models::ListGatewayServiceRequest &request);

      /**
       * @summary Queries the Server Load Balancer (SLB) instances that are associated with a gateway.
       *
       * @param request ListGatewaySlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewaySlbResponse
       */
      Models::ListGatewaySlbResponse listGatewaySlbWithOptions(const Models::ListGatewaySlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Server Load Balancer (SLB) instances that are associated with a gateway.
       *
       * @param request ListGatewaySlbRequest
       * @return ListGatewaySlbResponse
       */
      Models::ListGatewaySlbResponse listGatewaySlb(const Models::ListGatewaySlbRequest &request);

      /**
       * @summary Obtains a list of zones where a gateway is available.
       *
       * @param request ListGatewayZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayZoneResponse
       */
      Models::ListGatewayZoneResponse listGatewayZoneWithOptions(const Models::ListGatewayZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of zones where a gateway is available.
       *
       * @param request ListGatewayZoneRequest
       * @return ListGatewayZoneResponse
       */
      Models::ListGatewayZoneResponse listGatewayZone(const Models::ListGatewayZoneRequest &request);

      /**
       * @summary Displays the number of nodes that can be deployed for an instance.
       *
       * @param request ListInstanceCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstanceCountResponse
       */
      Models::ListInstanceCountResponse listInstanceCountWithOptions(const Models::ListInstanceCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Displays the number of nodes that can be deployed for an instance.
       *
       * @param request ListInstanceCountRequest
       * @return ListInstanceCountResponse
       */
      Models::ListInstanceCountResponse listInstanceCount(const Models::ListInstanceCountRequest &request);

      /**
       * @summary 查询隔离规则
       *
       * @param request ListIsolationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIsolationRulesResponse
       */
      Models::ListIsolationRulesResponse listIsolationRulesWithOptions(const Models::ListIsolationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询隔离规则
       *
       * @param request ListIsolationRulesRequest
       * @return ListIsolationRulesResponse
       */
      Models::ListIsolationRulesResponse listIsolationRules(const Models::ListIsolationRulesRequest &request);

      /**
       * @summary Queries listeners based on configuration information.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param tmpReq ListListenersByConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenersByConfigResponse
       */
      Models::ListListenersByConfigResponse listListenersByConfigWithOptions(const Models::ListListenersByConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries listeners based on configuration information.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListListenersByConfigRequest
       * @return ListListenersByConfigResponse
       */
      Models::ListListenersByConfigResponse listListenersByConfig(const Models::ListListenersByConfigRequest &request);

      /**
       * @summary Queries the information about listeners based on IP addresses.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListListenersByIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenersByIpResponse
       */
      Models::ListListenersByIpResponse listListenersByIpWithOptions(const Models::ListListenersByIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about listeners based on IP addresses.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListListenersByIpRequest
       * @return ListListenersByIpResponse
       */
      Models::ListListenersByIpResponse listListenersByIp(const Models::ListListenersByIpRequest &request);

      /**
       * @summary Queries information about a migration task.
       *
       * @param request ListMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationTaskResponse
       */
      Models::ListMigrationTaskResponse listMigrationTaskWithOptions(const Models::ListMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a migration task.
       *
       * @param request ListMigrationTaskRequest
       * @return ListMigrationTaskResponse
       */
      Models::ListMigrationTaskResponse listMigrationTask(const Models::ListMigrationTaskRequest &request);

      /**
       * @summary Queries Nacos configurations.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListNacosConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNacosConfigsResponse
       */
      Models::ListNacosConfigsResponse listNacosConfigsWithOptions(const Models::ListNacosConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Nacos configurations.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListNacosConfigsRequest
       * @return ListNacosConfigsResponse
       */
      Models::ListNacosConfigsResponse listNacosConfigs(const Models::ListNacosConfigsRequest &request);

      /**
       * @summary Queries the configuration history of a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListNacosHistoryConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNacosHistoryConfigsResponse
       */
      Models::ListNacosHistoryConfigsResponse listNacosHistoryConfigsWithOptions(const Models::ListNacosHistoryConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration history of a Microservices Engine (MSE) Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request ListNacosHistoryConfigsRequest
       * @return ListNacosHistoryConfigsResponse
       */
      Models::ListNacosHistoryConfigsResponse listNacosHistoryConfigs(const Models::ListNacosHistoryConfigsRequest &request);

      /**
       * @summary 获取McpServer列表
       *
       * @param request ListNacosMcpServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNacosMcpServersResponse
       */
      Models::ListNacosMcpServersResponse listNacosMcpServersWithOptions(const Models::ListNacosMcpServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取McpServer列表
       *
       * @param request ListNacosMcpServersRequest
       * @return ListNacosMcpServersResponse
       */
      Models::ListNacosMcpServersResponse listNacosMcpServers(const Models::ListNacosMcpServersRequest &request);

      /**
       * @summary 展示命名空间列表
       *
       * @param tmpReq ListNamespacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespacesWithOptions(const Models::ListNamespacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示命名空间列表
       *
       * @param request ListNamespacesRequest
       * @return ListNamespacesResponse
       */
      Models::ListNamespacesResponse listNamespaces(const Models::ListNamespacesRequest &request);

      /**
       * @summary Obtains the trajectory data of a Nacos registry.
       *
       * @param request ListNamingTrackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNamingTrackResponse
       */
      Models::ListNamingTrackResponse listNamingTrackWithOptions(const Models::ListNamingTrackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the trajectory data of a Nacos registry.
       *
       * @param request ListNamingTrackRequest
       * @return ListNamingTrackResponse
       */
      Models::ListNamingTrackResponse listNamingTrack(const Models::ListNamingTrackRequest &request);

      /**
       * @summary Obtains a list of gateway certificates.
       *
       * @param request ListSSLCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSSLCertResponse
       */
      Models::ListSSLCertResponse listSSLCertWithOptions(const Models::ListSSLCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a list of gateway certificates.
       *
       * @param request ListSSLCertRequest
       * @return ListSSLCertResponse
       */
      Models::ListSSLCertResponse listSSLCert(const Models::ListSSLCertRequest &request);

      /**
       * @summary Obtains the information about security groups.
       *
       * @param request ListSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityGroupResponse
       */
      Models::ListSecurityGroupResponse listSecurityGroupWithOptions(const Models::ListSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about security groups.
       *
       * @param request ListSecurityGroupRequest
       * @return ListSecurityGroupResponse
       */
      Models::ListSecurityGroupResponse listSecurityGroup(const Models::ListSecurityGroupRequest &request);

      /**
       * @summary Queries the security group rules of a gateway.
       *
       * @param request ListSecurityGroupRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityGroupRuleResponse
       */
      Models::ListSecurityGroupRuleResponse listSecurityGroupRuleWithOptions(const Models::ListSecurityGroupRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security group rules of a gateway.
       *
       * @param request ListSecurityGroupRuleRequest
       * @return ListSecurityGroupRuleResponse
       */
      Models::ListSecurityGroupRuleResponse listSecurityGroupRule(const Models::ListSecurityGroupRuleRequest &request);

      /**
       * @summary Obtains the custom behavior of traffic protection.
       *
       * @param tmpReq ListSentinelBlockFallbackDefinitionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSentinelBlockFallbackDefinitionsResponse
       */
      Models::ListSentinelBlockFallbackDefinitionsResponse listSentinelBlockFallbackDefinitionsWithOptions(const Models::ListSentinelBlockFallbackDefinitionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the custom behavior of traffic protection.
       *
       * @param request ListSentinelBlockFallbackDefinitionsRequest
       * @return ListSentinelBlockFallbackDefinitionsResponse
       */
      Models::ListSentinelBlockFallbackDefinitionsResponse listSentinelBlockFallbackDefinitions(const Models::ListSentinelBlockFallbackDefinitionsRequest &request);

      /**
       * @summary Queries a list of associated sources.
       *
       * @param request ListServiceSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceSourceResponse
       */
      Models::ListServiceSourceResponse listServiceSourceWithOptions(const Models::ListServiceSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of associated sources.
       *
       * @param request ListServiceSourceRequest
       * @return ListServiceSourceResponse
       */
      Models::ListServiceSourceResponse listServiceSource(const Models::ListServiceSourceRequest &request);

      /**
       * @summary Queries tagged resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tagged resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 查询热点参数防护规则（HTTP 请求）
       *
       * @param request ListWebFlowRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWebFlowRulesResponse
       */
      Models::ListWebFlowRulesResponse listWebFlowRulesWithOptions(const Models::ListWebFlowRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询热点参数防护规则（HTTP 请求）
       *
       * @param request ListWebFlowRulesRequest
       * @return ListWebFlowRulesResponse
       */
      Models::ListWebFlowRulesResponse listWebFlowRules(const Models::ListWebFlowRulesRequest &request);

      /**
       * @summary Obtains the track data of a ZooKeeper instance.
       *
       * @param request ListZkTrackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListZkTrackResponse
       */
      Models::ListZkTrackResponse listZkTrackWithOptions(const Models::ListZkTrackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the track data of a ZooKeeper instance.
       *
       * @param request ListZkTrackRequest
       * @return ListZkTrackResponse
       */
      Models::ListZkTrackResponse listZkTrack(const Models::ListZkTrackRequest &request);

      /**
       * @summary Queries the child nodes of a ZooKeeper node.
       *
       * @param request ListZnodeChildrenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListZnodeChildrenResponse
       */
      Models::ListZnodeChildrenResponse listZnodeChildrenWithOptions(const Models::ListZnodeChildrenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the child nodes of a ZooKeeper node.
       *
       * @param request ListZnodeChildrenRequest
       * @return ListZnodeChildrenResponse
       */
      Models::ListZnodeChildrenResponse listZnodeChildren(const Models::ListZnodeChildrenRequest &request);

      /**
       * @summary Modifies the information about a cluster for which Microservice Governance is enabled.
       *
       * @param tmpReq ModifyGovernanceKubernetesClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGovernanceKubernetesClusterResponse
       */
      Models::ModifyGovernanceKubernetesClusterResponse modifyGovernanceKubernetesClusterWithOptions(const Models::ModifyGovernanceKubernetesClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a cluster for which Microservice Governance is enabled.
       *
       * @param request ModifyGovernanceKubernetesClusterRequest
       * @return ModifyGovernanceKubernetesClusterResponse
       */
      Models::ModifyGovernanceKubernetesClusterResponse modifyGovernanceKubernetesCluster(const Models::ModifyGovernanceKubernetesClusterRequest &request);

      /**
       * @summary Modifies configurations of the lossless online and offline feature.
       *
       * @param request ModifyLosslessRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLosslessRuleResponse
       */
      Models::ModifyLosslessRuleResponse modifyLosslessRuleWithOptions(const Models::ModifyLosslessRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies configurations of the lossless online and offline feature.
       *
       * @param request ModifyLosslessRuleRequest
       * @return ModifyLosslessRuleResponse
       */
      Models::ModifyLosslessRuleResponse modifyLosslessRule(const Models::ModifyLosslessRuleRequest &request);

      /**
       * @summary Unpublishes a route for a gateway.
       *
       * @param request OfflineGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineGatewayRouteResponse
       */
      Models::OfflineGatewayRouteResponse offlineGatewayRouteWithOptions(const Models::OfflineGatewayRouteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a route for a gateway.
       *
       * @param request OfflineGatewayRouteRequest
       * @return OfflineGatewayRouteResponse
       */
      Models::OfflineGatewayRouteResponse offlineGatewayRoute(const Models::OfflineGatewayRouteRequest &request);

      /**
       * @summary Subscribes to the notification feature if a risk is detected during a health check.
       *
       * @param request OrderClusterHealthCheckRiskNoticeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderClusterHealthCheckRiskNoticeResponse
       */
      Models::OrderClusterHealthCheckRiskNoticeResponse orderClusterHealthCheckRiskNoticeWithOptions(const Models::OrderClusterHealthCheckRiskNoticeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to the notification feature if a risk is detected during a health check.
       *
       * @param request OrderClusterHealthCheckRiskNoticeRequest
       * @return OrderClusterHealthCheckRiskNoticeResponse
       */
      Models::OrderClusterHealthCheckRiskNoticeResponse orderClusterHealthCheckRiskNotice(const Models::OrderClusterHealthCheckRiskNoticeRequest &request);

      /**
       * @summary Specifies whether to convert all letters of a header into lowercase letters. For requests and responses, HTTP/1.1 headers are not case-sensitive. By default, all letters of headers are converted into lowercase letters.
       *
       * @param request PreserveHeaderFormatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreserveHeaderFormatResponse
       */
      Models::PreserveHeaderFormatResponse preserveHeaderFormatWithOptions(const Models::PreserveHeaderFormatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies whether to convert all letters of a header into lowercase letters. For requests and responses, HTTP/1.1 headers are not case-sensitive. By default, all letters of headers are converted into lowercase letters.
       *
       * @param request PreserveHeaderFormatRequest
       * @return PreserveHeaderFormatResponse
       */
      Models::PreserveHeaderFormatResponse preserveHeaderFormat(const Models::PreserveHeaderFormatRequest &request);

      /**
       * @summary Queries all the microservices of a service source.
       *
       * @param request PullServicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PullServicesResponse
       */
      Models::PullServicesResponse pullServicesWithOptions(const Models::PullServicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all the microservices of a service source.
       *
       * @param request PullServicesRequest
       * @return PullServicesResponse
       */
      Models::PullServicesResponse pullServices(const Models::PullServicesRequest &request);

      /**
       * @summary Initiates a task to check risk evaluation for an instance.
       *
       * @param request PutClusterHealthCheckTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutClusterHealthCheckTaskResponse
       */
      Models::PutClusterHealthCheckTaskResponse putClusterHealthCheckTaskWithOptions(const Models::PutClusterHealthCheckTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a task to check risk evaluation for an instance.
       *
       * @param request PutClusterHealthCheckTaskRequest
       * @return PutClusterHealthCheckTaskResponse
       */
      Models::PutClusterHealthCheckTaskResponse putClusterHealthCheckTask(const Models::PutClusterHealthCheckTaskRequest &request);

      /**
       * @summary Queries all the lanes in a lane group.
       *
       * @param request QueryAllSwimmingLaneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAllSwimmingLaneResponse
       */
      Models::QueryAllSwimmingLaneResponse queryAllSwimmingLaneWithOptions(const Models::QueryAllSwimmingLaneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all the lanes in a lane group.
       *
       * @param request QueryAllSwimmingLaneRequest
       * @return QueryAllSwimmingLaneResponse
       */
      Models::QueryAllSwimmingLaneResponse queryAllSwimmingLane(const Models::QueryAllSwimmingLaneRequest &request);

      /**
       * @summary Queries all lane groups.
       *
       * @param request QueryAllSwimmingLaneGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAllSwimmingLaneGroupResponse
       */
      Models::QueryAllSwimmingLaneGroupResponse queryAllSwimmingLaneGroupWithOptions(const Models::QueryAllSwimmingLaneGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all lane groups.
       *
       * @param request QueryAllSwimmingLaneGroupRequest
       * @return QueryAllSwimmingLaneGroupResponse
       */
      Models::QueryAllSwimmingLaneGroupResponse queryAllSwimmingLaneGroup(const Models::QueryAllSwimmingLaneGroupRequest &request);

      /**
       * @summary Queries information about regions.
       *
       * @param request QueryBusinessLocationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBusinessLocationsResponse
       */
      Models::QueryBusinessLocationsResponse queryBusinessLocationsWithOptions(const Models::QueryBusinessLocationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about regions.
       *
       * @param request QueryBusinessLocationsRequest
       * @return QueryBusinessLocationsResponse
       */
      Models::QueryBusinessLocationsResponse queryBusinessLocations(const Models::QueryBusinessLocationsRequest &request);

      /**
       * @summary Queries the details of an instance.
       *
       * @param request QueryClusterDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryClusterDetailResponse
       */
      Models::QueryClusterDetailResponse queryClusterDetailWithOptions(const Models::QueryClusterDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance.
       *
       * @param request QueryClusterDetailRequest
       * @return QueryClusterDetailResponse
       */
      Models::QueryClusterDetailResponse queryClusterDetail(const Models::QueryClusterDetailRequest &request);

      /**
       * @summary Queries disk specifications that are supported by an instance.
       *
       * @param request QueryClusterDiskSpecificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryClusterDiskSpecificationResponse
       */
      Models::QueryClusterDiskSpecificationResponse queryClusterDiskSpecificationWithOptions(const Models::QueryClusterDiskSpecificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries disk specifications that are supported by an instance.
       *
       * @param request QueryClusterDiskSpecificationRequest
       * @return QueryClusterDiskSpecificationResponse
       */
      Models::QueryClusterDiskSpecificationResponse queryClusterDiskSpecification(const Models::QueryClusterDiskSpecificationRequest &request);

      /**
       * @summary Queries the static information of an instance.
       *
       * @param request QueryClusterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryClusterInfoResponse
       */
      Models::QueryClusterInfoResponse queryClusterInfoWithOptions(const Models::QueryClusterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the static information of an instance.
       *
       * @param request QueryClusterInfoRequest
       * @return QueryClusterInfoResponse
       */
      Models::QueryClusterInfoResponse queryClusterInfo(const Models::QueryClusterInfoRequest &request);

      /**
       * @summary Queries the information of supported instance specifications.
       *
       * @param request QueryClusterSpecificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryClusterSpecificationResponse
       */
      Models::QueryClusterSpecificationResponse queryClusterSpecificationWithOptions(const Models::QueryClusterSpecificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of supported instance specifications.
       *
       * @param request QueryClusterSpecificationRequest
       * @return QueryClusterSpecificationResponse
       */
      Models::QueryClusterSpecificationResponse queryClusterSpecification(const Models::QueryClusterSpecificationRequest &request);

      /**
       * @summary Queries configuration information of an instance.
       *
       * @param request QueryConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConfigResponse
       */
      Models::QueryConfigResponse queryConfigWithOptions(const Models::QueryConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configuration information of an instance.
       *
       * @param request QueryConfigRequest
       * @return QueryConfigResponse
       */
      Models::QueryConfigResponse queryConfig(const Models::QueryConfigRequest &request);

      /**
       * @summary Queries the regions supported by a gateway.
       *
       * @param request QueryGatewayRegionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGatewayRegionResponse
       */
      Models::QueryGatewayRegionResponse queryGatewayRegionWithOptions(const Models::QueryGatewayRegionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions supported by a gateway.
       *
       * @param request QueryGatewayRegionRequest
       * @return QueryGatewayRegionResponse
       */
      Models::QueryGatewayRegionResponse queryGatewayRegion(const Models::QueryGatewayRegionRequest &request);

      /**
       * @summary Queries available gateway types.
       *
       * @param request QueryGatewayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGatewayTypeResponse
       */
      Models::QueryGatewayTypeResponse queryGatewayTypeWithOptions(const Models::QueryGatewayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available gateway types.
       *
       * @param request QueryGatewayTypeRequest
       * @return QueryGatewayTypeResponse
       */
      Models::QueryGatewayTypeResponse queryGatewayType(const Models::QueryGatewayTypeRequest &request);

      /**
       * @summary Queries the Kubernetes clusters for which Microservices Governance is activated.
       *
       * @param request QueryGovernanceKubernetesClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGovernanceKubernetesClusterResponse
       */
      Models::QueryGovernanceKubernetesClusterResponse queryGovernanceKubernetesClusterWithOptions(const Models::QueryGovernanceKubernetesClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Kubernetes clusters for which Microservices Governance is activated.
       *
       * @param request QueryGovernanceKubernetesClusterRequest
       * @return QueryGovernanceKubernetesClusterResponse
       */
      Models::QueryGovernanceKubernetesClusterResponse queryGovernanceKubernetesCluster(const Models::QueryGovernanceKubernetesClusterRequest &request);

      /**
       * @summary Queries the runtime data of a specified cluster.
       *
       * @param request QueryInstancesInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstancesInfoResponse
       */
      Models::QueryInstancesInfoResponse queryInstancesInfoWithOptions(const Models::QueryInstancesInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the runtime data of a specified cluster.
       *
       * @param request QueryInstancesInfoRequest
       * @return QueryInstancesInfoResponse
       */
      Models::QueryInstancesInfoResponse queryInstancesInfo(const Models::QueryInstancesInfoRequest &request);

      /**
       * @summary Queries monitoring information.
       *
       * @param request QueryMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMonitorResponse
       */
      Models::QueryMonitorResponse queryMonitorWithOptions(const Models::QueryMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring information.
       *
       * @param request QueryMonitorRequest
       * @return QueryMonitorResponse
       */
      Models::QueryMonitorResponse queryMonitor(const Models::QueryMonitorRequest &request);

      /**
       * @summary 查询nacos灰度配置
       *
       * @param request QueryNacosGrayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNacosGrayConfigResponse
       */
      Models::QueryNacosGrayConfigResponse queryNacosGrayConfigWithOptions(const Models::QueryNacosGrayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询nacos灰度配置
       *
       * @param request QueryNacosGrayConfigRequest
       * @return QueryNacosGrayConfigResponse
       */
      Models::QueryNacosGrayConfigResponse queryNacosGrayConfig(const Models::QueryNacosGrayConfigRequest &request);

      /**
       * @summary 查询MSE命名空间
       *
       * @param request QueryNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryNamespaceResponse
       */
      Models::QueryNamespaceResponse queryNamespaceWithOptions(const Models::QueryNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询MSE命名空间
       *
       * @param request QueryNamespaceRequest
       * @return QueryNamespaceResponse
       */
      Models::QueryNamespaceResponse queryNamespace(const Models::QueryNamespaceRequest &request);

      /**
       * @summary Queries the type of a Server Load Balancer (SLB) instance.
       *
       * @param request QuerySlbSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySlbSpecResponse
       */
      Models::QuerySlbSpecResponse querySlbSpecWithOptions(const Models::QuerySlbSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the type of a Server Load Balancer (SLB) instance.
       *
       * @param request QuerySlbSpecRequest
       * @return QuerySlbSpecResponse
       */
      Models::QuerySlbSpecResponse querySlbSpec(const Models::QuerySlbSpecRequest &request);

      /**
       * @summary Queries the information about a lane based on the lane ID.
       *
       * @param request QuerySwimmingLaneByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySwimmingLaneByIdResponse
       */
      Models::QuerySwimmingLaneByIdResponse querySwimmingLaneByIdWithOptions(const Models::QuerySwimmingLaneByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a lane based on the lane ID.
       *
       * @param request QuerySwimmingLaneByIdRequest
       * @return QuerySwimmingLaneByIdResponse
       */
      Models::QuerySwimmingLaneByIdResponse querySwimmingLaneById(const Models::QuerySwimmingLaneByIdRequest &request);

      /**
       * @summary Queries the information about a ZooKeeper node.
       *
       * @param request QueryZnodeDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryZnodeDetailResponse
       */
      Models::QueryZnodeDetailResponse queryZnodeDetailWithOptions(const Models::QueryZnodeDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a ZooKeeper node.
       *
       * @param request QueryZnodeDetailRequest
       * @return QueryZnodeDetailResponse
       */
      Models::QueryZnodeDetailResponse queryZnodeDetail(const Models::QueryZnodeDetailRequest &request);

      /**
       * @summary 删除单个应用
       *
       * @param request RemoveApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApplicationResponse
       */
      Models::RemoveApplicationResponse removeApplicationWithOptions(const Models::RemoveApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除单个应用
       *
       * @param request RemoveApplicationRequest
       * @return RemoveApplicationResponse
       */
      Models::RemoveApplicationResponse removeApplication(const Models::RemoveApplicationRequest &request);

      /**
       * @param request RemoveAuthPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAuthPolicyResponse
       */
      Models::RemoveAuthPolicyResponse removeAuthPolicyWithOptions(const Models::RemoveAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveAuthPolicyRequest
       * @return RemoveAuthPolicyResponse
       */
      Models::RemoveAuthPolicyResponse removeAuthPolicy(const Models::RemoveAuthPolicyRequest &request);

      /**
       * @summary Restarts a registry.
       *
       * @param request RestartClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartClusterResponse
       */
      Models::RestartClusterResponse restartClusterWithOptions(const Models::RestartClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a registry.
       *
       * @param request RestartClusterRequest
       * @return RestartClusterResponse
       */
      Models::RestartClusterResponse restartCluster(const Models::RestartClusterRequest &request);

      /**
       * @summary Retries a cluster.
       *
       * @param request RetryClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryClusterResponse
       */
      Models::RetryClusterResponse retryClusterWithOptions(const Models::RetryClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a cluster.
       *
       * @param request RetryClusterRequest
       * @return RetryClusterResponse
       */
      Models::RetryClusterResponse retryCluster(const Models::RetryClusterRequest &request);

      /**
       * @summary Queries an idle Server Load Balancer (SLB) instance that is associated with a gateway.
       *
       * @param request SelectGatewaySlbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectGatewaySlbResponse
       */
      Models::SelectGatewaySlbResponse selectGatewaySlbWithOptions(const Models::SelectGatewaySlbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an idle Server Load Balancer (SLB) instance that is associated with a gateway.
       *
       * @param request SelectGatewaySlbRequest
       * @return SelectGatewaySlbResponse
       */
      Models::SelectGatewaySlbResponse selectGatewaySlb(const Models::SelectGatewaySlbRequest &request);

      /**
       * @summary Tags a specified resource.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tags a specified resource.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Untags resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Untags resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies an IP address whitelist.
       *
       * @param request UpdateAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAclResponse
       */
      Models::UpdateAclResponse updateAclWithOptions(const Models::UpdateAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an IP address whitelist.
       *
       * @param request UpdateAclRequest
       * @return UpdateAclResponse
       */
      Models::UpdateAclResponse updateAcl(const Models::UpdateAclRequest &request);

      /**
       * @summary Updates a service authentication rule.
       *
       * @param request UpdateAuthPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthPolicyResponse
       */
      Models::UpdateAuthPolicyResponse updateAuthPolicyWithOptions(const Models::UpdateAuthPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service authentication rule.
       *
       * @param request UpdateAuthPolicyRequest
       * @return UpdateAuthPolicyResponse
       */
      Models::UpdateAuthPolicyResponse updateAuthPolicy(const Models::UpdateAuthPolicyRequest &request);

      /**
       * @summary Modifies the blacklist or whitelist of a gateway.
       *
       * @param request UpdateBlackWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBlackWhiteListResponse
       */
      Models::UpdateBlackWhiteListResponse updateBlackWhiteListWithOptions(const Models::UpdateBlackWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the blacklist or whitelist of a gateway.
       *
       * @param request UpdateBlackWhiteListRequest
       * @return UpdateBlackWhiteListResponse
       */
      Models::UpdateBlackWhiteListResponse updateBlackWhiteList(const Models::UpdateBlackWhiteListRequest &request);

      /**
       * @summary Updates a circuit breaking rule.
       *
       * @param request UpdateCircuitBreakerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCircuitBreakerRuleResponse
       */
      Models::UpdateCircuitBreakerRuleResponse updateCircuitBreakerRuleWithOptions(const Models::UpdateCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a circuit breaking rule.
       *
       * @param request UpdateCircuitBreakerRuleRequest
       * @return UpdateCircuitBreakerRuleResponse
       */
      Models::UpdateCircuitBreakerRuleResponse updateCircuitBreakerRule(const Models::UpdateCircuitBreakerRuleRequest &request);

      /**
       * @summary Modifies the information about an instance.
       *
       * @param request UpdateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateClusterWithOptions(const Models::UpdateClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an instance.
       *
       * @param request UpdateClusterRequest
       * @return UpdateClusterResponse
       */
      Models::UpdateClusterResponse updateCluster(const Models::UpdateClusterRequest &request);

      /**
       * @summary Updates the number or specifications of nodes in a pay-as-you-go Microservices Engine (MSE) instance.
       *
       * @description You can call this operation to update the number or specifications of nodes in a pay-as-you-go MSE instance. You are charged when you add nodes or upgrade node specifications. For more information, see [Pricing] (`~~1806469~~`).
       *
       * @param request UpdateClusterSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterSpecResponse
       */
      Models::UpdateClusterSpecResponse updateClusterSpecWithOptions(const Models::UpdateClusterSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the number or specifications of nodes in a pay-as-you-go Microservices Engine (MSE) instance.
       *
       * @description You can call this operation to update the number or specifications of nodes in a pay-as-you-go MSE instance. You are charged when you add nodes or upgrade node specifications. For more information, see [Pricing] (`~~1806469~~`).
       *
       * @param request UpdateClusterSpecRequest
       * @return UpdateClusterSpecResponse
       */
      Models::UpdateClusterSpecResponse updateClusterSpec(const Models::UpdateClusterSpecRequest &request);

      /**
       * @summary Updates the configurations of an instance.
       *
       * @param request UpdateConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfigWithOptions(const Models::UpdateConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of an instance.
       *
       * @param request UpdateConfigRequest
       * @return UpdateConfigResponse
       */
      Models::UpdateConfigResponse updateConfig(const Models::UpdateConfigRequest &request);

      /**
       * @summary Updates a namespace for the Nacos engine.
       *
       * @param request UpdateEngineNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEngineNamespaceResponse
       */
      Models::UpdateEngineNamespaceResponse updateEngineNamespaceWithOptions(const Models::UpdateEngineNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a namespace for the Nacos engine.
       *
       * @param request UpdateEngineNamespaceRequest
       * @return UpdateEngineNamespaceResponse
       */
      Models::UpdateEngineNamespaceResponse updateEngineNamespace(const Models::UpdateEngineNamespaceRequest &request);

      /**
       * @summary Updates a throttling rule.
       *
       * @param request UpdateFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowRuleResponse
       */
      Models::UpdateFlowRuleResponse updateFlowRuleWithOptions(const Models::UpdateFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a throttling rule.
       *
       * @param request UpdateFlowRuleRequest
       * @return UpdateFlowRuleResponse
       */
      Models::UpdateFlowRuleResponse updateFlowRule(const Models::UpdateFlowRuleRequest &request);

      /**
       * @summary Updates the consumer on which a gateway performs authentication operations.
       *
       * @param request UpdateGatewayAuthConsumerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayAuthConsumerResponse
       */
      Models::UpdateGatewayAuthConsumerResponse updateGatewayAuthConsumerWithOptions(const Models::UpdateGatewayAuthConsumerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the consumer on which a gateway performs authentication operations.
       *
       * @param request UpdateGatewayAuthConsumerRequest
       * @return UpdateGatewayAuthConsumerResponse
       */
      Models::UpdateGatewayAuthConsumerResponse updateGatewayAuthConsumer(const Models::UpdateGatewayAuthConsumerRequest &request);

      /**
       * @summary Updates a list of resources on which permissions are granted to a gateway authentication consumer.
       *
       * @param tmpReq UpdateGatewayAuthConsumerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayAuthConsumerResourceResponse
       */
      Models::UpdateGatewayAuthConsumerResourceResponse updateGatewayAuthConsumerResourceWithOptions(const Models::UpdateGatewayAuthConsumerResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a list of resources on which permissions are granted to a gateway authentication consumer.
       *
       * @param request UpdateGatewayAuthConsumerResourceRequest
       * @return UpdateGatewayAuthConsumerResourceResponse
       */
      Models::UpdateGatewayAuthConsumerResourceResponse updateGatewayAuthConsumerResource(const Models::UpdateGatewayAuthConsumerResourceRequest &request);

      /**
       * @summary Updates the resource authorization status for the consumer on which a gateway performs authentication operations.
       *
       * @param request UpdateGatewayAuthConsumerResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayAuthConsumerResourceStatusResponse
       */
      Models::UpdateGatewayAuthConsumerResourceStatusResponse updateGatewayAuthConsumerResourceStatusWithOptions(const Models::UpdateGatewayAuthConsumerResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the resource authorization status for the consumer on which a gateway performs authentication operations.
       *
       * @param request UpdateGatewayAuthConsumerResourceStatusRequest
       * @return UpdateGatewayAuthConsumerResourceStatusResponse
       */
      Models::UpdateGatewayAuthConsumerResourceStatusResponse updateGatewayAuthConsumerResourceStatus(const Models::UpdateGatewayAuthConsumerResourceStatusRequest &request);

      /**
       * @summary Updates the status of the consumer on which a gateway performs authentication operations.
       *
       * @param request UpdateGatewayAuthConsumerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayAuthConsumerStatusResponse
       */
      Models::UpdateGatewayAuthConsumerStatusResponse updateGatewayAuthConsumerStatusWithOptions(const Models::UpdateGatewayAuthConsumerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of the consumer on which a gateway performs authentication operations.
       *
       * @param request UpdateGatewayAuthConsumerStatusRequest
       * @return UpdateGatewayAuthConsumerStatusResponse
       */
      Models::UpdateGatewayAuthConsumerStatusResponse updateGatewayAuthConsumerStatus(const Models::UpdateGatewayAuthConsumerStatusRequest &request);

      /**
       * @summary 更新网关路由熔断规则
       *
       * @param request UpdateGatewayCircuitBreakerRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayCircuitBreakerRuleResponse
       */
      Models::UpdateGatewayCircuitBreakerRuleResponse updateGatewayCircuitBreakerRuleWithOptions(const Models::UpdateGatewayCircuitBreakerRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网关路由熔断规则
       *
       * @param request UpdateGatewayCircuitBreakerRuleRequest
       * @return UpdateGatewayCircuitBreakerRuleResponse
       */
      Models::UpdateGatewayCircuitBreakerRuleResponse updateGatewayCircuitBreakerRule(const Models::UpdateGatewayCircuitBreakerRuleRequest &request);

      /**
       * @summary 更新网关配置
       *
       * @param request UpdateGatewayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayConfigResponse
       */
      Models::UpdateGatewayConfigResponse updateGatewayConfigWithOptions(const Models::UpdateGatewayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网关配置
       *
       * @param request UpdateGatewayConfigRequest
       * @return UpdateGatewayConfigResponse
       */
      Models::UpdateGatewayConfigResponse updateGatewayConfig(const Models::UpdateGatewayConfigRequest &request);

      /**
       * @summary Modifies the information about the domain name associated with a gateway.
       *
       * @param tmpReq UpdateGatewayDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayDomainResponse
       */
      Models::UpdateGatewayDomainResponse updateGatewayDomainWithOptions(const Models::UpdateGatewayDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about the domain name associated with a gateway.
       *
       * @param request UpdateGatewayDomainRequest
       * @return UpdateGatewayDomainResponse
       */
      Models::UpdateGatewayDomainResponse updateGatewayDomain(const Models::UpdateGatewayDomainRequest &request);

      /**
       * @summary 更新网关路由流控规则
       *
       * @param request UpdateGatewayFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayFlowRuleResponse
       */
      Models::UpdateGatewayFlowRuleResponse updateGatewayFlowRuleWithOptions(const Models::UpdateGatewayFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网关路由流控规则
       *
       * @param request UpdateGatewayFlowRuleRequest
       * @return UpdateGatewayFlowRuleResponse
       */
      Models::UpdateGatewayFlowRuleResponse updateGatewayFlowRule(const Models::UpdateGatewayFlowRuleRequest &request);

      /**
       * @summary 更新网关路由隔离规则
       *
       * @param request UpdateGatewayIsolationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayIsolationRuleResponse
       */
      Models::UpdateGatewayIsolationRuleResponse updateGatewayIsolationRuleWithOptions(const Models::UpdateGatewayIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网关路由隔离规则
       *
       * @param request UpdateGatewayIsolationRuleRequest
       * @return UpdateGatewayIsolationRuleResponse
       */
      Models::UpdateGatewayIsolationRuleResponse updateGatewayIsolationRule(const Models::UpdateGatewayIsolationRuleRequest &request);

      /**
       * @summary Renames a gateway.
       *
       * @param request UpdateGatewayNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayNameResponse
       */
      Models::UpdateGatewayNameResponse updateGatewayNameWithOptions(const Models::UpdateGatewayNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a gateway.
       *
       * @param request UpdateGatewayNameRequest
       * @return UpdateGatewayNameResponse
       */
      Models::UpdateGatewayNameResponse updateGatewayName(const Models::UpdateGatewayNameRequest &request);

      /**
       * @summary Updates the configurations of a gateway.
       *
       * @param tmpReq UpdateGatewayOptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayOptionResponse
       */
      Models::UpdateGatewayOptionResponse updateGatewayOptionWithOptions(const Models::UpdateGatewayOptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a gateway.
       *
       * @param request UpdateGatewayOptionRequest
       * @return UpdateGatewayOptionResponse
       */
      Models::UpdateGatewayOptionResponse updateGatewayOption(const Models::UpdateGatewayOptionRequest &request);

      /**
       * @summary Updates a route for a gateway.
       *
       * @param tmpReq UpdateGatewayRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteResponse
       */
      Models::UpdateGatewayRouteResponse updateGatewayRouteWithOptions(const Models::UpdateGatewayRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a route for a gateway.
       *
       * @param request UpdateGatewayRouteRequest
       * @return UpdateGatewayRouteResponse
       */
      Models::UpdateGatewayRouteResponse updateGatewayRoute(const Models::UpdateGatewayRouteRequest &request);

      /**
       * @summary Updates the authentication configurations of a route.
       *
       * @param tmpReq UpdateGatewayRouteAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteAuthResponse
       */
      Models::UpdateGatewayRouteAuthResponse updateGatewayRouteAuthWithOptions(const Models::UpdateGatewayRouteAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the authentication configurations of a route.
       *
       * @param request UpdateGatewayRouteAuthRequest
       * @return UpdateGatewayRouteAuthResponse
       */
      Models::UpdateGatewayRouteAuthResponse updateGatewayRouteAuth(const Models::UpdateGatewayRouteAuthRequest &request);

      /**
       * @summary Modifies the cross-origin resource sharing (CORS) policy of a route.
       *
       * @param tmpReq UpdateGatewayRouteCORSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteCORSResponse
       */
      Models::UpdateGatewayRouteCORSResponse updateGatewayRouteCORSWithOptions(const Models::UpdateGatewayRouteCORSRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cross-origin resource sharing (CORS) policy of a route.
       *
       * @param request UpdateGatewayRouteCORSRequest
       * @return UpdateGatewayRouteCORSResponse
       */
      Models::UpdateGatewayRouteCORSResponse updateGatewayRouteCORS(const Models::UpdateGatewayRouteCORSRequest &request);

      /**
       * @summary Updates the rewrite policy of a route for a gateway.
       *
       * @param request UpdateGatewayRouteHTTPRewriteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteHTTPRewriteResponse
       */
      Models::UpdateGatewayRouteHTTPRewriteResponse updateGatewayRouteHTTPRewriteWithOptions(const Models::UpdateGatewayRouteHTTPRewriteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the rewrite policy of a route for a gateway.
       *
       * @param request UpdateGatewayRouteHTTPRewriteRequest
       * @return UpdateGatewayRouteHTTPRewriteResponse
       */
      Models::UpdateGatewayRouteHTTPRewriteResponse updateGatewayRouteHTTPRewrite(const Models::UpdateGatewayRouteHTTPRewriteRequest &request);

      /**
       * @summary Modifies the header configuration policy of a route.
       *
       * @param request UpdateGatewayRouteHeaderOpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteHeaderOpResponse
       */
      Models::UpdateGatewayRouteHeaderOpResponse updateGatewayRouteHeaderOpWithOptions(const Models::UpdateGatewayRouteHeaderOpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the header configuration policy of a route.
       *
       * @param request UpdateGatewayRouteHeaderOpRequest
       * @return UpdateGatewayRouteHeaderOpResponse
       */
      Models::UpdateGatewayRouteHeaderOpResponse updateGatewayRouteHeaderOp(const Models::UpdateGatewayRouteHeaderOpRequest &request);

      /**
       * @summary Modifies the retry policy of a route.
       *
       * @param tmpReq UpdateGatewayRouteRetryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteRetryResponse
       */
      Models::UpdateGatewayRouteRetryResponse updateGatewayRouteRetryWithOptions(const Models::UpdateGatewayRouteRetryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the retry policy of a route.
       *
       * @param request UpdateGatewayRouteRetryRequest
       * @return UpdateGatewayRouteRetryResponse
       */
      Models::UpdateGatewayRouteRetryResponse updateGatewayRouteRetry(const Models::UpdateGatewayRouteRetryRequest &request);

      /**
       * @summary Modifies the timeout policy of a route.
       *
       * @param tmpReq UpdateGatewayRouteTimeoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteTimeoutResponse
       */
      Models::UpdateGatewayRouteTimeoutResponse updateGatewayRouteTimeoutWithOptions(const Models::UpdateGatewayRouteTimeoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the timeout policy of a route.
       *
       * @param request UpdateGatewayRouteTimeoutRequest
       * @return UpdateGatewayRouteTimeoutResponse
       */
      Models::UpdateGatewayRouteTimeoutResponse updateGatewayRouteTimeout(const Models::UpdateGatewayRouteTimeoutRequest &request);

      /**
       * @summary Updates the WAF status of a route.
       *
       * @param request UpdateGatewayRouteWafStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayRouteWafStatusResponse
       */
      Models::UpdateGatewayRouteWafStatusResponse updateGatewayRouteWafStatusWithOptions(const Models::UpdateGatewayRouteWafStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the WAF status of a route.
       *
       * @param request UpdateGatewayRouteWafStatusRequest
       * @return UpdateGatewayRouteWafStatusResponse
       */
      Models::UpdateGatewayRouteWafStatusResponse updateGatewayRouteWafStatus(const Models::UpdateGatewayRouteWafStatusRequest &request);

      /**
       * @summary 更新服务
       *
       * @param tmpReq UpdateGatewayServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayServiceResponse
       */
      Models::UpdateGatewayServiceResponse updateGatewayServiceWithOptions(const Models::UpdateGatewayServiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新服务
       *
       * @param request UpdateGatewayServiceRequest
       * @return UpdateGatewayServiceResponse
       */
      Models::UpdateGatewayServiceResponse updateGatewayService(const Models::UpdateGatewayServiceRequest &request);

      /**
       * @summary Updates the health check policy of a specified service in a cloud-native gateway.
       *
       * @param tmpReq UpdateGatewayServiceCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayServiceCheckResponse
       */
      Models::UpdateGatewayServiceCheckResponse updateGatewayServiceCheckWithOptions(const Models::UpdateGatewayServiceCheckRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the health check policy of a specified service in a cloud-native gateway.
       *
       * @param request UpdateGatewayServiceCheckRequest
       * @return UpdateGatewayServiceCheckResponse
       */
      Models::UpdateGatewayServiceCheckResponse updateGatewayServiceCheck(const Models::UpdateGatewayServiceCheckRequest &request);

      /**
       * @summary Updates the traffic policy of a service.
       *
       * @param tmpReq UpdateGatewayServiceTrafficPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayServiceTrafficPolicyResponse
       */
      Models::UpdateGatewayServiceTrafficPolicyResponse updateGatewayServiceTrafficPolicyWithOptions(const Models::UpdateGatewayServiceTrafficPolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the traffic policy of a service.
       *
       * @param request UpdateGatewayServiceTrafficPolicyRequest
       * @return UpdateGatewayServiceTrafficPolicyResponse
       */
      Models::UpdateGatewayServiceTrafficPolicyResponse updateGatewayServiceTrafficPolicy(const Models::UpdateGatewayServiceTrafficPolicyRequest &request);

      /**
       * @summary Modifies the version of a service.
       *
       * @param request UpdateGatewayServiceVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayServiceVersionResponse
       */
      Models::UpdateGatewayServiceVersionResponse updateGatewayServiceVersionWithOptions(const Models::UpdateGatewayServiceVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the version of a service.
       *
       * @param request UpdateGatewayServiceVersionRequest
       * @return UpdateGatewayServiceVersionResponse
       */
      Models::UpdateGatewayServiceVersionResponse updateGatewayServiceVersion(const Models::UpdateGatewayServiceVersionRequest &request);

      /**
       * @summary Updates the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway.
       *
       * @description You can call this operation to update the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway. If you add nodes or increase the specifications, you will incur fees. For more information, see [Pricing](https://help.aliyun.com/document_detail/250950.html).
       *
       * @param request UpdateGatewaySpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewaySpecResponse
       */
      Models::UpdateGatewaySpecResponse updateGatewaySpecWithOptions(const Models::UpdateGatewaySpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway.
       *
       * @description You can call this operation to update the number of nodes or the specifications of nodes in a pay-as-you-go or subscription cloud-native gateway. If you add nodes or increase the specifications, you will incur fees. For more information, see [Pricing](https://help.aliyun.com/document_detail/250950.html).
       *
       * @param request UpdateGatewaySpecRequest
       * @return UpdateGatewaySpecResponse
       */
      Models::UpdateGatewaySpecResponse updateGatewaySpec(const Models::UpdateGatewaySpecRequest &request);

      /**
       * @summary Updates the version number of the destination cluster.
       *
       * @param request UpdateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImageWithOptions(const Models::UpdateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version number of the destination cluster.
       *
       * @param request UpdateImageRequest
       * @return UpdateImageResponse
       */
      Models::UpdateImageResponse updateImage(const Models::UpdateImageRequest &request);

      /**
       * @summary 更新隔离规则
       *
       * @param request UpdateIsolationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIsolationRuleResponse
       */
      Models::UpdateIsolationRuleResponse updateIsolationRuleWithOptions(const Models::UpdateIsolationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新隔离规则
       *
       * @param request UpdateIsolationRuleRequest
       * @return UpdateIsolationRuleResponse
       */
      Models::UpdateIsolationRuleResponse updateIsolationRule(const Models::UpdateIsolationRuleRequest &request);

      /**
       * @summary 更新同AZ路由规则
       *
       * @param request UpdateLocalityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLocalityRuleResponse
       */
      Models::UpdateLocalityRuleResponse updateLocalityRuleWithOptions(const Models::UpdateLocalityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新同AZ路由规则
       *
       * @param request UpdateLocalityRuleRequest
       * @return UpdateLocalityRuleResponse
       */
      Models::UpdateLocalityRuleResponse updateLocalityRule(const Models::UpdateLocalityRuleRequest &request);

      /**
       * @summary Updates the configuration of a canary release for messaging of an application.
       *
       * @param tmpReq UpdateMessageQueueRouteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMessageQueueRouteResponse
       */
      Models::UpdateMessageQueueRouteResponse updateMessageQueueRouteWithOptions(const Models::UpdateMessageQueueRouteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a canary release for messaging of an application.
       *
       * @param request UpdateMessageQueueRouteRequest
       * @return UpdateMessageQueueRouteResponse
       */
      Models::UpdateMessageQueueRouteResponse updateMessageQueueRoute(const Models::UpdateMessageQueueRouteRequest &request);

      /**
       * @summary Updates a migration task.
       *
       * @param request UpdateMigrationTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMigrationTaskResponse
       */
      Models::UpdateMigrationTaskResponse updateMigrationTaskWithOptions(const Models::UpdateMigrationTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a migration task.
       *
       * @param request UpdateMigrationTaskRequest
       * @return UpdateMigrationTaskResponse
       */
      Models::UpdateMigrationTaskResponse updateMigrationTask(const Models::UpdateMigrationTaskRequest &request);

      /**
       * @summary Updates the information about a Nacos cluster.
       *
       * @param request UpdateNacosClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacosClusterResponse
       */
      Models::UpdateNacosClusterResponse updateNacosClusterWithOptions(const Models::UpdateNacosClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Nacos cluster.
       *
       * @param request UpdateNacosClusterRequest
       * @return UpdateNacosClusterResponse
       */
      Models::UpdateNacosClusterResponse updateNacosCluster(const Models::UpdateNacosClusterRequest &request);

      /**
       * @summary Updates a Nacos configuration.
       *
       * @description >  The current API operation is not provided in Nacos SDK. For more information about Nacos SDK, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request UpdateNacosConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacosConfigResponse
       */
      Models::UpdateNacosConfigResponse updateNacosConfigWithOptions(const Models::UpdateNacosConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Nacos configuration.
       *
       * @description >  The current API operation is not provided in Nacos SDK. For more information about Nacos SDK, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request UpdateNacosConfigRequest
       * @return UpdateNacosConfigResponse
       */
      Models::UpdateNacosConfigResponse updateNacosConfig(const Models::UpdateNacosConfigRequest &request);

      /**
       * @summary 更新nacos灰度配置
       *
       * @param request UpdateNacosGrayConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacosGrayConfigResponse
       */
      Models::UpdateNacosGrayConfigResponse updateNacosGrayConfigWithOptions(const Models::UpdateNacosGrayConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新nacos灰度配置
       *
       * @param request UpdateNacosGrayConfigRequest
       * @return UpdateNacosGrayConfigResponse
       */
      Models::UpdateNacosGrayConfigResponse updateNacosGrayConfig(const Models::UpdateNacosGrayConfigRequest &request);

      /**
       * @summary Updates the information about application instances that are registered with a Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request UpdateNacosInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacosInstanceResponse
       */
      Models::UpdateNacosInstanceResponse updateNacosInstanceWithOptions(const Models::UpdateNacosInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about application instances that are registered with a Nacos instance.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request UpdateNacosInstanceRequest
       * @return UpdateNacosInstanceResponse
       */
      Models::UpdateNacosInstanceResponse updateNacosInstance(const Models::UpdateNacosInstanceRequest &request);

      /**
       * @summary Updates the information about a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request UpdateNacosServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNacosServiceResponse
       */
      Models::UpdateNacosServiceResponse updateNacosServiceWithOptions(const Models::UpdateNacosServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Nacos service.
       *
       * @description > The operation is not provided in Nacos SDKs. For information about Nacos SDKs, see the [official documentation](https://nacos.io/zh-cn/docs/sdk.html).
       *
       * @param request UpdateNacosServiceRequest
       * @return UpdateNacosServiceResponse
       */
      Models::UpdateNacosServiceResponse updateNacosService(const Models::UpdateNacosServiceRequest &request);

      /**
       * @summary Updates the configuration of a plug-in.
       *
       * @param tmpReq UpdatePluginConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePluginConfigResponse
       */
      Models::UpdatePluginConfigResponse updatePluginConfigWithOptions(const Models::UpdatePluginConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a plug-in.
       *
       * @param request UpdatePluginConfigRequest
       * @return UpdatePluginConfigResponse
       */
      Models::UpdatePluginConfigResponse updatePluginConfig(const Models::UpdatePluginConfigRequest &request);

      /**
       * @summary Updates a certificate.
       *
       * @param request UpdateSSLCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSSLCertResponse
       */
      Models::UpdateSSLCertResponse updateSSLCertWithOptions(const Models::UpdateSSLCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a certificate.
       *
       * @param request UpdateSSLCertRequest
       * @return UpdateSSLCertResponse
       */
      Models::UpdateSSLCertResponse updateSSLCert(const Models::UpdateSSLCertRequest &request);

      /**
       * @summary Modifies service sources of a cloud-native gateway. You can modify only Container Service for Kubernetes (ACK) service sources that contain configurations related to Ingress resource monitoring.
       *
       * @param tmpReq UpdateServiceSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceSourceResponse
       */
      Models::UpdateServiceSourceResponse updateServiceSourceWithOptions(const Models::UpdateServiceSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies service sources of a cloud-native gateway. You can modify only Container Service for Kubernetes (ACK) service sources that contain configurations related to Ingress resource monitoring.
       *
       * @param request UpdateServiceSourceRequest
       * @return UpdateServiceSourceResponse
       */
      Models::UpdateServiceSourceResponse updateServiceSource(const Models::UpdateServiceSourceRequest &request);

      /**
       * @summary 更新热点参数防护规则（HTTP 请求）
       *
       * @param request UpdateWebFlowRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWebFlowRuleResponse
       */
      Models::UpdateWebFlowRuleResponse updateWebFlowRuleWithOptions(const Models::UpdateWebFlowRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新热点参数防护规则（HTTP 请求）
       *
       * @param request UpdateWebFlowRuleRequest
       * @return UpdateWebFlowRuleResponse
       */
      Models::UpdateWebFlowRuleResponse updateWebFlowRule(const Models::UpdateWebFlowRuleRequest &request);

      /**
       * @summary Updates the information about a ZooKeeper node.
       *
       * @param request UpdateZnodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateZnodeResponse
       */
      Models::UpdateZnodeResponse updateZnodeWithOptions(const Models::UpdateZnodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a ZooKeeper node.
       *
       * @param request UpdateZnodeRequest
       * @return UpdateZnodeResponse
       */
      Models::UpdateZnodeResponse updateZnode(const Models::UpdateZnodeRequest &request);

      /**
       * @summary Upgrades the version of a cluster.
       *
       * @param request UpgradeClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterResponse
       */
      Models::UpgradeClusterResponse upgradeClusterWithOptions(const Models::UpgradeClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of a cluster.
       *
       * @param request UpgradeClusterRequest
       * @return UpgradeClusterResponse
       */
      Models::UpgradeClusterResponse upgradeCluster(const Models::UpgradeClusterRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
