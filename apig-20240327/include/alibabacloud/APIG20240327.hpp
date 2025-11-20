// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_APIG20240327_HPP_
#define ALIBABACLOUD_APIG20240327_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/APIG20240327Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/APIG20240327.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Authorize the security group for gateway to access services
       *
       * @param request AddGatewaySecurityGroupRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewaySecurityGroupRuleResponse
       */
      Models::AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const Models::AddGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorize the security group for gateway to access services
       *
       * @param request AddGatewaySecurityGroupRuleRequest
       * @return AddGatewaySecurityGroupRuleResponse
       */
      Models::AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRule(const string &gatewayId, const Models::AddGatewaySecurityGroupRuleRequest &request);

      /**
       * @summary Removes consumer authentication rules.
       *
       * @param request BatchDeleteConsumerAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteConsumerAuthorizationRuleResponse
       */
      Models::BatchDeleteConsumerAuthorizationRuleResponse batchDeleteConsumerAuthorizationRuleWithOptions(const Models::BatchDeleteConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes consumer authentication rules.
       *
       * @param request BatchDeleteConsumerAuthorizationRuleRequest
       * @return BatchDeleteConsumerAuthorizationRuleResponse
       */
      Models::BatchDeleteConsumerAuthorizationRuleResponse batchDeleteConsumerAuthorizationRule(const Models::BatchDeleteConsumerAuthorizationRuleRequest &request);

      /**
       * @summary Resource Group Transfer
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resource Group Transfer
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Creates and associates a policy.
       *
       * @param request CreateAndAttachPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndAttachPolicyResponse
       */
      Models::CreateAndAttachPolicyResponse createAndAttachPolicyWithOptions(const Models::CreateAndAttachPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and associates a policy.
       *
       * @param request CreateAndAttachPolicyRequest
       * @return CreateAndAttachPolicyResponse
       */
      Models::CreateAndAttachPolicyResponse createAndAttachPolicy(const Models::CreateAndAttachPolicyRequest &request);

      /**
       * @summary Creates a consumer.
       *
       * @param request CreateConsumerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerResponse
       */
      Models::CreateConsumerResponse createConsumerWithOptions(const Models::CreateConsumerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer.
       *
       * @param request CreateConsumerRequest
       * @return CreateConsumerResponse
       */
      Models::CreateConsumerResponse createConsumer(const Models::CreateConsumerRequest &request);

      /**
       * @summary Creates a consumer authorization rule.
       *
       * @param request CreateConsumerAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerAuthorizationRuleResponse
       */
      Models::CreateConsumerAuthorizationRuleResponse createConsumerAuthorizationRuleWithOptions(const string &consumerId, const Models::CreateConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer authorization rule.
       *
       * @param request CreateConsumerAuthorizationRuleRequest
       * @return CreateConsumerAuthorizationRuleResponse
       */
      Models::CreateConsumerAuthorizationRuleResponse createConsumerAuthorizationRule(const string &consumerId, const Models::CreateConsumerAuthorizationRuleRequest &request);

      /**
       * @summary Creates a consumer authentication rule.
       *
       * @param request CreateConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerAuthorizationRulesResponse
       */
      Models::CreateConsumerAuthorizationRulesResponse createConsumerAuthorizationRulesWithOptions(const Models::CreateConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer authentication rule.
       *
       * @param request CreateConsumerAuthorizationRulesRequest
       * @return CreateConsumerAuthorizationRulesResponse
       */
      Models::CreateConsumerAuthorizationRulesResponse createConsumerAuthorizationRules(const Models::CreateConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Creates a domain name.
       *
       * @description Create Domain.
       *
       * @param request CreateDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a domain name.
       *
       * @description Create Domain.
       *
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @deprecated OpenAPI CreateEnvironment is deprecated
       *
       * @summary CreateEnvironment
       *
       * @description Create environment.
       *
       * @param request CreateEnvironmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironmentWithOptions(const Models::CreateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateEnvironment is deprecated
       *
       * @summary CreateEnvironment
       *
       * @description Create environment.
       *
       * @param request CreateEnvironmentRequest
       * @return CreateEnvironmentResponse
       */
      Models::CreateEnvironmentResponse createEnvironment(const Models::CreateEnvironmentRequest &request);

      /**
       * @summary Creates a cloud-native gateway.
       *
       * @param request CreateGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayResponse
       */
      Models::CreateGatewayResponse createGatewayWithOptions(const Models::CreateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud-native gateway.
       *
       * @param request CreateGatewayRequest
       * @return CreateGatewayResponse
       */
      Models::CreateGatewayResponse createGateway(const Models::CreateGatewayRequest &request);

      /**
       * @summary Creates an HTTP API.
       *
       * @param request CreateHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpApiResponse
       */
      Models::CreateHttpApiResponse createHttpApiWithOptions(const Models::CreateHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTP API.
       *
       * @param request CreateHttpApiRequest
       * @return CreateHttpApiResponse
       */
      Models::CreateHttpApiResponse createHttpApi(const Models::CreateHttpApiRequest &request);

      /**
       * @summary Create an Operation for HTTP API
       *
       * @param request CreateHttpApiOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpApiOperationResponse
       */
      Models::CreateHttpApiOperationResponse createHttpApiOperationWithOptions(const string &httpApiId, const Models::CreateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an Operation for HTTP API
       *
       * @param request CreateHttpApiOperationRequest
       * @return CreateHttpApiOperationResponse
       */
      Models::CreateHttpApiOperationResponse createHttpApiOperation(const string &httpApiId, const Models::CreateHttpApiOperationRequest &request);

      /**
       * @summary Creates a route for an HTTP API.
       *
       * @param request CreateHttpApiRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpApiRouteResponse
       */
      Models::CreateHttpApiRouteResponse createHttpApiRouteWithOptions(const string &httpApiId, const Models::CreateHttpApiRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a route for an HTTP API.
       *
       * @param request CreateHttpApiRouteRequest
       * @return CreateHttpApiRouteResponse
       */
      Models::CreateHttpApiRouteResponse createHttpApiRoute(const string &httpApiId, const Models::CreateHttpApiRouteRequest &request);

      /**
       * @summary Creates an MCP server.
       *
       * @param request CreateMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServerWithOptions(const Models::CreateMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an MCP server.
       *
       * @param request CreateMcpServerRequest
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServer(const Models::CreateMcpServerRequest &request);

      /**
       * @summary Attaches a plug-in.
       *
       * @param request CreatePluginAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginAttachmentResponse
       */
      Models::CreatePluginAttachmentResponse createPluginAttachmentWithOptions(const Models::CreatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a plug-in.
       *
       * @param request CreatePluginAttachmentRequest
       * @return CreatePluginAttachmentResponse
       */
      Models::CreatePluginAttachmentResponse createPluginAttachment(const Models::CreatePluginAttachmentRequest &request);

      /**
       * @summary Create Policy
       *
       * @param request CreatePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Policy
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Create policy resource mount
       *
       * @param request CreatePolicyAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyAttachmentResponse
       */
      Models::CreatePolicyAttachmentResponse createPolicyAttachmentWithOptions(const Models::CreatePolicyAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create policy resource mount
       *
       * @param request CreatePolicyAttachmentRequest
       * @return CreatePolicyAttachmentResponse
       */
      Models::CreatePolicyAttachmentResponse createPolicyAttachment(const Models::CreatePolicyAttachmentRequest &request);

      /**
       * @summary Creates a service.
       *
       * @description You can call this operation to create multiple services at a time.
       *
       * @param request CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const Models::CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service.
       *
       * @description You can call this operation to create multiple services at a time.
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const Models::CreateServiceRequest &request);

      /**
       * @summary Deletes a consumer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerResponse
       */
      Models::DeleteConsumerResponse deleteConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer.
       *
       * @return DeleteConsumerResponse
       */
      Models::DeleteConsumerResponse deleteConsumer(const string &consumerId);

      /**
       * @summary Deletes a consumer authorization rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerAuthorizationRuleResponse
       */
      Models::DeleteConsumerAuthorizationRuleResponse deleteConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer authorization rule.
       *
       * @return DeleteConsumerAuthorizationRuleResponse
       */
      Models::DeleteConsumerAuthorizationRuleResponse deleteConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId);

      /**
       * @summary DeleteDomain
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const string &domainId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteDomain
       *
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const string &domainId);

      /**
       * @deprecated OpenAPI DeleteEnvironment is deprecated
       *
       * @summary DeleteEnvironment
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironmentWithOptions(const string &environmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteEnvironment is deprecated
       *
       * @summary DeleteEnvironment
       *
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironment(const string &environmentId);

      /**
       * @summary Delete Gateway
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Gateway
       *
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const string &gatewayId);

      /**
       * @summary Delete the security group rule of a gateway
       *
       * @param request DeleteGatewaySecurityGroupRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewaySecurityGroupRuleResponse
       */
      Models::DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const string &securityGroupRuleId, const Models::DeleteGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the security group rule of a gateway
       *
       * @param request DeleteGatewaySecurityGroupRuleRequest
       * @return DeleteGatewaySecurityGroupRuleResponse
       */
      Models::DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRule(const string &gatewayId, const string &securityGroupRuleId, const Models::DeleteGatewaySecurityGroupRuleRequest &request);

      /**
       * @summary Deletes an HTTP API.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiResponse
       */
      Models::DeleteHttpApiResponse deleteHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an HTTP API.
       *
       * @return DeleteHttpApiResponse
       */
      Models::DeleteHttpApiResponse deleteHttpApi(const string &httpApiId);

      /**
       * @summary Delete Operation
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiOperationResponse
       */
      Models::DeleteHttpApiOperationResponse deleteHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Operation
       *
       * @return DeleteHttpApiOperationResponse
       */
      Models::DeleteHttpApiOperationResponse deleteHttpApiOperation(const string &httpApiId, const string &operationId);

      /**
       * @summary Delete the route of an HttpApi
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiRouteResponse
       */
      Models::DeleteHttpApiRouteResponse deleteHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the route of an HttpApi
       *
       * @return DeleteHttpApiRouteResponse
       */
      Models::DeleteHttpApiRouteResponse deleteHttpApiRoute(const string &httpApiId, const string &routeId);

      /**
       * @summary 删除MCP server
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpServerResponse
       */
      Models::DeleteMcpServerResponse deleteMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除MCP server
       *
       * @return DeleteMcpServerResponse
       */
      Models::DeleteMcpServerResponse deleteMcpServer(const string &mcpServerId);

      /**
       * @summary Deletes a plug-in attachment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePluginAttachmentResponse
       */
      Models::DeletePluginAttachmentResponse deletePluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a plug-in attachment.
       *
       * @return DeletePluginAttachmentResponse
       */
      Models::DeletePluginAttachmentResponse deletePluginAttachment(const string &pluginAttachmentId);

      /**
       * @summary Delete Policy
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Policy
       *
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const string &policyId);

      /**
       * @summary Delete policy resource attachment
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyAttachmentResponse
       */
      Models::DeletePolicyAttachmentResponse deletePolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete policy resource attachment
       *
       * @return DeletePolicyAttachmentResponse
       */
      Models::DeletePolicyAttachmentResponse deletePolicyAttachment(const string &policyAttachmentId);

      /**
       * @summary Deletes a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service.
       *
       * @return DeleteServiceResponse
       */
      Models::DeleteServiceResponse deleteService(const string &serviceId);

      /**
       * @summary Deploy HttpApi
       *
       * @param request DeployHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployHttpApiResponse
       */
      Models::DeployHttpApiResponse deployHttpApiWithOptions(const string &httpApiId, const Models::DeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploy HttpApi
       *
       * @param request DeployHttpApiRequest
       * @return DeployHttpApiResponse
       */
      Models::DeployHttpApiResponse deployHttpApi(const string &httpApiId, const Models::DeployHttpApiRequest &request);

      /**
       * @summary Deploys an MCP server.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployMcpServerResponse
       */
      Models::DeployMcpServerResponse deployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an MCP server.
       *
       * @return DeployMcpServerResponse
       */
      Models::DeployMcpServerResponse deployMcpServer(const string &mcpServerId);

      /**
       * @summary Export HTTP API
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportHttpApiResponse
       */
      Models::ExportHttpApiResponse exportHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Export HTTP API
       *
       * @return ExportHttpApiResponse
       */
      Models::ExportHttpApiResponse exportHttpApi(const string &httpApiId);

      /**
       * @summary Obtains the information of a consumer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerResponse
       */
      Models::GetConsumerResponse getConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information of a consumer.
       *
       * @return GetConsumerResponse
       */
      Models::GetConsumerResponse getConsumer(const string &consumerId);

      /**
       * @summary Obtains a consumer authentication rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerAuthorizationRuleResponse
       */
      Models::GetConsumerAuthorizationRuleResponse getConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a consumer authentication rule.
       *
       * @return GetConsumerAuthorizationRuleResponse
       */
      Models::GetConsumerAuthorizationRuleResponse getConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId);

      /**
       * @summary Obtains data from dashboards.
       *
       * @param tmpReq GetDashboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboardWithOptions(const string &gatewayId, const Models::GetDashboardRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains data from dashboards.
       *
       * @param request GetDashboardRequest
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboard(const string &gatewayId, const Models::GetDashboardRequest &request);

      /**
       * @summary Queries the information about a domain name.
       *
       * @param request GetDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomainWithOptions(const string &domainId, const Models::GetDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a domain name.
       *
       * @param request GetDomainRequest
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomain(const string &domainId, const Models::GetDomainRequest &request);

      /**
       * @deprecated OpenAPI GetEnvironment is deprecated
       *
       * @summary GetEnvironment
       *
       * @param request GetEnvironmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEnvironmentResponse
       */
      Models::GetEnvironmentResponse getEnvironmentWithOptions(const string &environmentId, const Models::GetEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetEnvironment is deprecated
       *
       * @summary GetEnvironment
       *
       * @param request GetEnvironmentRequest
       * @return GetEnvironmentResponse
       */
      Models::GetEnvironmentResponse getEnvironment(const string &environmentId, const Models::GetEnvironmentRequest &request);

      /**
       * @summary Queries the basic information about an instance, such as the virtual private cloud (VPC) and vSwitch to which the instance belongs and its ingress.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about an instance, such as the virtual private cloud (VPC) and vSwitch to which the instance belongs and its ingress.
       *
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGateway(const string &gatewayId);

      /**
       * @summary Read HttpApi
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiResponse
       */
      Models::GetHttpApiResponse getHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Read HttpApi
       *
       * @return GetHttpApiResponse
       */
      Models::GetHttpApiResponse getHttpApi(const string &httpApiId);

      /**
       * @summary Get Operation
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiOperationResponse
       */
      Models::GetHttpApiOperationResponse getHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Operation
       *
       * @return GetHttpApiOperationResponse
       */
      Models::GetHttpApiOperationResponse getHttpApiOperation(const string &httpApiId, const string &operationId);

      /**
       * @summary Queries the details of a route of an HTTP API.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiRouteResponse
       */
      Models::GetHttpApiRouteResponse getHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a route of an HTTP API.
       *
       * @return GetHttpApiRouteResponse
       */
      Models::GetHttpApiRouteResponse getHttpApiRoute(const string &httpApiId, const string &routeId);

      /**
       * @summary Queries the detailed information of an MCP server.
       *
       * @description You can call this operation to create multiple services at a time.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information of an MCP server.
       *
       * @description You can call this operation to create multiple services at a time.
       *
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServer(const string &mcpServerId);

      /**
       * @summary Queries a plug-in attachment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginAttachmentResponse
       */
      Models::GetPluginAttachmentResponse getPluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a plug-in attachment.
       *
       * @return GetPluginAttachmentResponse
       */
      Models::GetPluginAttachmentResponse getPluginAttachment(const string &pluginAttachmentId);

      /**
       * @summary Queries a policy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a policy.
       *
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const string &policyId);

      /**
       * @summary Query Policy Resource Attachment
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyAttachmentResponse
       */
      Models::GetPolicyAttachmentResponse getPolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Policy Resource Attachment
       *
       * @return GetPolicyAttachmentResponse
       */
      Models::GetPolicyAttachmentResponse getPolicyAttachment(const string &policyAttachmentId);

      /**
       * @summary Get resource overview information
       *
       * @param request GetResourceOverviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceOverviewResponse
       */
      Models::GetResourceOverviewResponse getResourceOverviewWithOptions(const Models::GetResourceOverviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get resource overview information
       *
       * @param request GetResourceOverviewRequest
       * @return GetResourceOverviewResponse
       */
      Models::GetResourceOverviewResponse getResourceOverview(const Models::GetResourceOverviewRequest &request);

      /**
       * @summary Queries the details of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a service.
       *
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &serviceId);

      /**
       * @summary Retrieve Tracing Configuration
       *
       * @param request GetTraceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceConfigResponse
       */
      Models::GetTraceConfigResponse getTraceConfigWithOptions(const string &gatewayId, const Models::GetTraceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve Tracing Configuration
       *
       * @param request GetTraceConfigRequest
       * @return GetTraceConfigResponse
       */
      Models::GetTraceConfigResponse getTraceConfig(const string &gatewayId, const Models::GetTraceConfigRequest &request);

      /**
       * @summary Imports HTTP APIs. You can call this operation to import OpenAPI 2.0 and OpenAPI 3.0.x definition files to create REST APIs.
       *
       * @param request ImportHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportHttpApiResponse
       */
      Models::ImportHttpApiResponse importHttpApiWithOptions(const Models::ImportHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports HTTP APIs. You can call this operation to import OpenAPI 2.0 and OpenAPI 3.0.x definition files to create REST APIs.
       *
       * @param request ImportHttpApiRequest
       * @return ImportHttpApiResponse
       */
      Models::ImportHttpApiResponse importHttpApi(const Models::ImportHttpApiRequest &request);

      /**
       * @summary Installs a plug-in.
       *
       * @param request InstallPluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallPluginResponse
       */
      Models::InstallPluginResponse installPluginWithOptions(const Models::InstallPluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a plug-in.
       *
       * @param request InstallPluginRequest
       * @return InstallPluginResponse
       */
      Models::InstallPluginResponse installPlugin(const Models::InstallPluginRequest &request);

      /**
       * @summary Queries a list of consumers.
       *
       * @param request ListConsumersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumersResponse
       */
      Models::ListConsumersResponse listConsumersWithOptions(const Models::ListConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of consumers.
       *
       * @param request ListConsumersRequest
       * @return ListConsumersResponse
       */
      Models::ListConsumersResponse listConsumers(const Models::ListConsumersRequest &request);

      /**
       * @summary Queries a list of domain names.
       *
       * @param request ListDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomainsWithOptions(const Models::ListDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names.
       *
       * @param request ListDomainsRequest
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomains(const Models::ListDomainsRequest &request);

      /**
       * @deprecated OpenAPI ListEnvironments is deprecated
       *
       * @summary ListEnvironments
       *
       * @param request ListEnvironmentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironmentsWithOptions(const Models::ListEnvironmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListEnvironments is deprecated
       *
       * @summary ListEnvironments
       *
       * @param request ListEnvironmentsRequest
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironments(const Models::ListEnvironmentsRequest &request);

      /**
       * @summary 获取Gateway的Features
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayFeaturesResponse
       */
      Models::ListGatewayFeaturesResponse listGatewayFeaturesWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Gateway的Features
       *
       * @return ListGatewayFeaturesResponse
       */
      Models::ListGatewayFeaturesResponse listGatewayFeatures(const string &gatewayId);

      /**
       * @summary Queries a list of instances.
       *
       * @param tmpReq ListGatewaysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewaysResponse
       */
      Models::ListGatewaysResponse listGatewaysWithOptions(const Models::ListGatewaysRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request ListGatewaysRequest
       * @return ListGatewaysResponse
       */
      Models::ListGatewaysResponse listGateways(const Models::ListGatewaysRequest &request);

      /**
       * @summary List Operations
       *
       * @param request ListHttpApiOperationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApiOperationsResponse
       */
      Models::ListHttpApiOperationsResponse listHttpApiOperationsWithOptions(const string &httpApiId, const Models::ListHttpApiOperationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Operations
       *
       * @param request ListHttpApiOperationsRequest
       * @return ListHttpApiOperationsResponse
       */
      Models::ListHttpApiOperationsResponse listHttpApiOperations(const string &httpApiId, const Models::ListHttpApiOperationsRequest &request);

      /**
       * @summary Queries the routes of an HTTP API.
       *
       * @param request ListHttpApiRoutesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApiRoutesResponse
       */
      Models::ListHttpApiRoutesResponse listHttpApiRoutesWithOptions(const string &httpApiId, const Models::ListHttpApiRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the routes of an HTTP API.
       *
       * @param request ListHttpApiRoutesRequest
       * @return ListHttpApiRoutesResponse
       */
      Models::ListHttpApiRoutesResponse listHttpApiRoutes(const string &httpApiId, const Models::ListHttpApiRoutesRequest &request);

      /**
       * @summary Queries a list of HTTP APIs.
       *
       * @param request ListHttpApisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApisResponse
       */
      Models::ListHttpApisResponse listHttpApisWithOptions(const Models::ListHttpApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of HTTP APIs.
       *
       * @param request ListHttpApisRequest
       * @return ListHttpApisResponse
       */
      Models::ListHttpApisResponse listHttpApis(const Models::ListHttpApisRequest &request);

      /**
       * @summary Retrieves a list of MCP servers.
       *
       * @description You can call this operation to create multiple services at a time.
       *
       * @param request ListMcpServersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpServersResponse
       */
      Models::ListMcpServersResponse listMcpServersWithOptions(const Models::ListMcpServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of MCP servers.
       *
       * @description You can call this operation to create multiple services at a time.
       *
       * @param request ListMcpServersRequest
       * @return ListMcpServersResponse
       */
      Models::ListMcpServersResponse listMcpServers(const Models::ListMcpServersRequest &request);

      /**
       * @summary Retrieves a list of plug-in attachments.
       *
       * @param request ListPluginAttachmentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginAttachmentsResponse
       */
      Models::ListPluginAttachmentsResponse listPluginAttachmentsWithOptions(const Models::ListPluginAttachmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of plug-in attachments.
       *
       * @param request ListPluginAttachmentsRequest
       * @return ListPluginAttachmentsResponse
       */
      Models::ListPluginAttachmentsResponse listPluginAttachments(const Models::ListPluginAttachmentsRequest &request);

      /**
       * @summary Queries plug-ins.
       *
       * @param request ListPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPluginsWithOptions(const Models::ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries plug-ins.
       *
       * @param request ListPluginsRequest
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPlugins(const Models::ListPluginsRequest &request);

      /**
       * @summary Queries policies.
       *
       * @param request ListPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary ListPolicyClasses
       *
       * @param request ListPolicyClassesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyClassesResponse
       */
      Models::ListPolicyClassesResponse listPolicyClassesWithOptions(const Models::ListPolicyClassesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListPolicyClasses
       *
       * @param request ListPolicyClassesRequest
       * @return ListPolicyClassesResponse
       */
      Models::ListPolicyClassesResponse listPolicyClasses(const Models::ListPolicyClassesRequest &request);

      /**
       * @summary Queries a list of services.
       *
       * @param request ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Models::ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const Models::ListServicesRequest &request);

      /**
       * @summary ListSslCerts
       *
       * @param request ListSslCertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCertsWithOptions(const Models::ListSslCertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListSslCerts
       *
       * @param request ListSslCertsRequest
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCerts(const Models::ListSslCertsRequest &request);

      /**
       * @summary Retrieve the availability zones under a cloud-native API gateway region
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZonesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the availability zones under a cloud-native API gateway region
       *
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZones();

      /**
       * @summary Queries a list of consumer authentication rules.
       *
       * @param request QueryConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConsumerAuthorizationRulesResponse
       */
      Models::QueryConsumerAuthorizationRulesResponse queryConsumerAuthorizationRulesWithOptions(const Models::QueryConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of consumer authentication rules.
       *
       * @param request QueryConsumerAuthorizationRulesRequest
       * @return QueryConsumerAuthorizationRulesResponse
       */
      Models::QueryConsumerAuthorizationRulesResponse queryConsumerAuthorizationRules(const Models::QueryConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Deletes a consumer authorization rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveConsumerAuthorizationRuleResponse
       */
      Models::RemoveConsumerAuthorizationRuleResponse removeConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer authorization rule.
       *
       * @return RemoveConsumerAuthorizationRuleResponse
       */
      Models::RemoveConsumerAuthorizationRuleResponse removeConsumerAuthorizationRule(const string &consumerAuthorizationRuleId);

      /**
       * @summary Gateway Restart
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartGatewayResponse
       */
      Models::RestartGatewayResponse restartGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gateway Restart
       *
       * @return RestartGatewayResponse
       */
      Models::RestartGatewayResponse restartGateway(const string &gatewayId);

      /**
       * @summary Undeploys an MCP server.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnDeployMcpServerResponse
       */
      Models::UnDeployMcpServerResponse unDeployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Undeploys an MCP server.
       *
       * @return UnDeployMcpServerResponse
       */
      Models::UnDeployMcpServerResponse unDeployMcpServer(const string &mcpServerId);

      /**
       * @summary Unpublishes an HTTP API.
       *
       * @param request UndeployHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UndeployHttpApiResponse
       */
      Models::UndeployHttpApiResponse undeployHttpApiWithOptions(const string &httpApiId, const Models::UndeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes an HTTP API.
       *
       * @param request UndeployHttpApiRequest
       * @return UndeployHttpApiResponse
       */
      Models::UndeployHttpApiResponse undeployHttpApi(const string &httpApiId, const Models::UndeployHttpApiRequest &request);

      /**
       * @summary Uninstalls a plug-in.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPluginWithOptions(const string &pluginId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a plug-in.
       *
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPlugin(const string &pluginId);

      /**
       * @summary Updates and associates a policy.
       *
       * @param request UpdateAndAttachPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAndAttachPolicyResponse
       */
      Models::UpdateAndAttachPolicyResponse updateAndAttachPolicyWithOptions(const string &policyId, const Models::UpdateAndAttachPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates and associates a policy.
       *
       * @param request UpdateAndAttachPolicyRequest
       * @return UpdateAndAttachPolicyResponse
       */
      Models::UpdateAndAttachPolicyResponse updateAndAttachPolicy(const string &policyId, const Models::UpdateAndAttachPolicyRequest &request);

      /**
       * @summary Updates a consumer.
       *
       * @param request UpdateConsumerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerResponse
       */
      Models::UpdateConsumerResponse updateConsumerWithOptions(const string &consumerId, const Models::UpdateConsumerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a consumer.
       *
       * @param request UpdateConsumerRequest
       * @return UpdateConsumerResponse
       */
      Models::UpdateConsumerResponse updateConsumer(const string &consumerId, const Models::UpdateConsumerRequest &request);

      /**
       * @summary Updates a consumer authorization rule.
       *
       * @param request UpdateConsumerAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerAuthorizationRuleResponse
       */
      Models::UpdateConsumerAuthorizationRuleResponse updateConsumerAuthorizationRuleWithOptions(const string &consumerId, const string &consumerAuthorizationRuleId, const Models::UpdateConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a consumer authorization rule.
       *
       * @param request UpdateConsumerAuthorizationRuleRequest
       * @return UpdateConsumerAuthorizationRuleResponse
       */
      Models::UpdateConsumerAuthorizationRuleResponse updateConsumerAuthorizationRule(const string &consumerId, const string &consumerAuthorizationRuleId, const Models::UpdateConsumerAuthorizationRuleRequest &request);

      /**
       * @summary Updates a domain name.
       *
       * @param request UpdateDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainResponse
       */
      Models::UpdateDomainResponse updateDomainWithOptions(const string &domainId, const Models::UpdateDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a domain name.
       *
       * @param request UpdateDomainRequest
       * @return UpdateDomainResponse
       */
      Models::UpdateDomainResponse updateDomain(const string &domainId, const Models::UpdateDomainRequest &request);

      /**
       * @deprecated OpenAPI UpdateEnvironment is deprecated
       *
       * @summary UpdateEnvironment
       *
       * @param request UpdateEnvironmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironmentWithOptions(const string &environmentId, const Models::UpdateEnvironmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateEnvironment is deprecated
       *
       * @summary UpdateEnvironment
       *
       * @param request UpdateEnvironmentRequest
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironment(const string &environmentId, const Models::UpdateEnvironmentRequest &request);

      /**
       * @summary Get the feature configuration of the gateway
       *
       * @param request UpdateGatewayFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayFeatureResponse
       */
      Models::UpdateGatewayFeatureResponse updateGatewayFeatureWithOptions(const string &gatewayId, const string &name, const Models::UpdateGatewayFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the feature configuration of the gateway
       *
       * @param request UpdateGatewayFeatureRequest
       * @return UpdateGatewayFeatureResponse
       */
      Models::UpdateGatewayFeatureResponse updateGatewayFeature(const string &gatewayId, const string &name, const Models::UpdateGatewayFeatureRequest &request);

      /**
       * @summary Change the name of a gateway instance
       *
       * @param request UpdateGatewayNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayNameResponse
       */
      Models::UpdateGatewayNameResponse updateGatewayNameWithOptions(const string &gatewayId, const Models::UpdateGatewayNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the name of a gateway instance
       *
       * @param request UpdateGatewayNameRequest
       * @return UpdateGatewayNameResponse
       */
      Models::UpdateGatewayNameResponse updateGatewayName(const string &gatewayId, const Models::UpdateGatewayNameRequest &request);

      /**
       * @summary Updates an HTTP API.
       *
       * @param request UpdateHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpApiResponse
       */
      Models::UpdateHttpApiResponse updateHttpApiWithOptions(const string &httpApiId, const Models::UpdateHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an HTTP API.
       *
       * @param request UpdateHttpApiRequest
       * @return UpdateHttpApiResponse
       */
      Models::UpdateHttpApiResponse updateHttpApi(const string &httpApiId, const Models::UpdateHttpApiRequest &request);

      /**
       * @summary Update Operation
       *
       * @param request UpdateHttpApiOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpApiOperationResponse
       */
      Models::UpdateHttpApiOperationResponse updateHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const Models::UpdateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Operation
       *
       * @param request UpdateHttpApiOperationRequest
       * @return UpdateHttpApiOperationResponse
       */
      Models::UpdateHttpApiOperationResponse updateHttpApiOperation(const string &httpApiId, const string &operationId, const Models::UpdateHttpApiOperationRequest &request);

      /**
       * @summary Updates the route of an HTTP API.
       *
       * @param request UpdateHttpApiRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpApiRouteResponse
       */
      Models::UpdateHttpApiRouteResponse updateHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const Models::UpdateHttpApiRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the route of an HTTP API.
       *
       * @param request UpdateHttpApiRouteRequest
       * @return UpdateHttpApiRouteResponse
       */
      Models::UpdateHttpApiRouteResponse updateHttpApiRoute(const string &httpApiId, const string &routeId, const Models::UpdateHttpApiRouteRequest &request);

      /**
       * @summary Updates an MCP server.
       *
       * @description You can only update the listening Ingress configuration for sources of the **ACK** type.
       *
       * @param request UpdateMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpServerResponse
       */
      Models::UpdateMcpServerResponse updateMcpServerWithOptions(const string &mcpServerId, const Models::UpdateMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an MCP server.
       *
       * @description You can only update the listening Ingress configuration for sources of the **ACK** type.
       *
       * @param request UpdateMcpServerRequest
       * @return UpdateMcpServerResponse
       */
      Models::UpdateMcpServerResponse updateMcpServer(const string &mcpServerId, const Models::UpdateMcpServerRequest &request);

      /**
       * @summary Updates a plug-in attachment.
       *
       * @param request UpdatePluginAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePluginAttachmentResponse
       */
      Models::UpdatePluginAttachmentResponse updatePluginAttachmentWithOptions(const string &pluginAttachmentId, const Models::UpdatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a plug-in attachment.
       *
       * @param request UpdatePluginAttachmentRequest
       * @return UpdatePluginAttachmentResponse
       */
      Models::UpdatePluginAttachmentResponse updatePluginAttachment(const string &pluginAttachmentId, const Models::UpdatePluginAttachmentRequest &request);

      /**
       * @summary Update Policy
       *
       * @param request UpdatePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicyWithOptions(const string &policyId, const Models::UpdatePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Policy
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const string &policyId, const Models::UpdatePolicyRequest &request);

      /**
       * @summary Upgrade the gateway version
       *
       * @param request UpgradeGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeGatewayResponse
       */
      Models::UpgradeGatewayResponse upgradeGatewayWithOptions(const string &gatewayId, const Models::UpgradeGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrade the gateway version
       *
       * @param request UpgradeGatewayRequest
       * @return UpgradeGatewayResponse
       */
      Models::UpgradeGatewayResponse upgradeGateway(const string &gatewayId, const Models::UpgradeGatewayRequest &request);
  };
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
