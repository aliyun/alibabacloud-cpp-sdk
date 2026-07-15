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
       * @summary Creates a gateway quota throttling rule.
       *
       * @description Creates a consumer-based quota rule for an AI gateway. This operation takes effect only on AI gateways of version 2.1.19 or later.
       * > 
       * >  Recommended call sequence:
       * > - Step 1: Perform a dry run to check for rule conflicts.
       * > - - Set dryRun to true.
       * > - - The response contains a conflict preview with a conflictHash value.
       * > - Step 2: Submit the request after confirmation.
       * > - - No conflicts: Set dryRun to false and overwrite to false.
       * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
       *
       * @param request AddGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayQuotaRuleResponse
       */
      Models::AddGatewayQuotaRuleResponse addGatewayQuotaRuleWithOptions(const string &gatewayId, const Models::AddGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a gateway quota throttling rule.
       *
       * @description Creates a consumer-based quota rule for an AI gateway. This operation takes effect only on AI gateways of version 2.1.19 or later.
       * > 
       * >  Recommended call sequence:
       * > - Step 1: Perform a dry run to check for rule conflicts.
       * > - - Set dryRun to true.
       * > - - The response contains a conflict preview with a conflictHash value.
       * > - Step 2: Submit the request after confirmation.
       * > - - No conflicts: Set dryRun to false and overwrite to false.
       * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
       *
       * @param request AddGatewayQuotaRuleRequest
       * @return AddGatewayQuotaRuleResponse
       */
      Models::AddGatewayQuotaRuleResponse addGatewayQuotaRule(const string &gatewayId, const Models::AddGatewayQuotaRuleRequest &request);

      /**
       * @summary Authorizes a security group that allows a gateway to access services.
       *
       * @param request AddGatewaySecurityGroupRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewaySecurityGroupRuleResponse
       */
      Models::AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const Models::AddGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a security group that allows a gateway to access services.
       *
       * @param request AddGatewaySecurityGroupRuleRequest
       * @return AddGatewaySecurityGroupRuleResponse
       */
      Models::AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRule(const string &gatewayId, const Models::AddGatewaySecurityGroupRuleRequest &request);

      /**
       * @summary Revokes consumer authorization rules in batches.
       *
       * @param request BatchDeleteConsumerAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteConsumerAuthorizationRuleResponse
       */
      Models::BatchDeleteConsumerAuthorizationRuleResponse batchDeleteConsumerAuthorizationRuleWithOptions(const Models::BatchDeleteConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes consumer authorization rules in batches.
       *
       * @param request BatchDeleteConsumerAuthorizationRuleRequest
       * @return BatchDeleteConsumerAuthorizationRuleResponse
       */
      Models::BatchDeleteConsumerAuthorizationRuleResponse batchDeleteConsumerAuthorizationRule(const Models::BatchDeleteConsumerAuthorizationRuleRequest &request);

      /**
       * @summary Moves a resource to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a resource to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 创建AI模型供应商
       *
       * @param request CreateAiModelProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiModelProviderResponse
       */
      Models::CreateAiModelProviderResponse createAiModelProviderWithOptions(const Models::CreateAiModelProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建AI模型供应商
       *
       * @param request CreateAiModelProviderRequest
       * @return CreateAiModelProviderResponse
       */
      Models::CreateAiModelProviderResponse createAiModelProvider(const Models::CreateAiModelProviderRequest &request);

      /**
       * @summary Creates and attaches a policy.
       *
       * @param request CreateAndAttachPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndAttachPolicyResponse
       */
      Models::CreateAndAttachPolicyResponse createAndAttachPolicyWithOptions(const Models::CreateAndAttachPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches a policy.
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
       * @summary Creates consumer authorization rules.
       *
       * @param request CreateConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerAuthorizationRulesResponse
       */
      Models::CreateConsumerAuthorizationRulesResponse createConsumerAuthorizationRulesWithOptions(const Models::CreateConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates consumer authorization rules.
       *
       * @param request CreateConsumerAuthorizationRulesRequest
       * @return CreateConsumerAuthorizationRulesResponse
       */
      Models::CreateConsumerAuthorizationRulesResponse createConsumerAuthorizationRules(const Models::CreateConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Creates a domain name.
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
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @deprecated OpenAPI CreateEnvironment is deprecated
       *
       * @summary Creates an environment.
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
       * @summary Creates an environment.
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
       * @summary Creates operations for an HTTP API.
       *
       * @param request CreateHttpApiOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpApiOperationResponse
       */
      Models::CreateHttpApiOperationResponse createHttpApiOperationWithOptions(const string &httpApiId, const Models::CreateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates operations for an HTTP API.
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
       * @summary Creates a Model Context Protocol (MCP) server.
       *
       * @param request CreateMcpServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServerWithOptions(const Models::CreateMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Model Context Protocol (MCP) server.
       *
       * @param request CreateMcpServerRequest
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServer(const Models::CreateMcpServerRequest &request);

      /**
       * @summary Mounts a plug-in.
       *
       * @param request CreatePluginAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginAttachmentResponse
       */
      Models::CreatePluginAttachmentResponse createPluginAttachmentWithOptions(const Models::CreatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mounts a plug-in.
       *
       * @param request CreatePluginAttachmentRequest
       * @return CreatePluginAttachmentResponse
       */
      Models::CreatePluginAttachmentResponse createPluginAttachment(const Models::CreatePluginAttachmentRequest &request);

      /**
       * @summary Creates a custom plugin class.
       *
       * @param request CreatePluginClassRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginClassResponse
       */
      Models::CreatePluginClassResponse createPluginClassWithOptions(const Models::CreatePluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom plugin class.
       *
       * @param request CreatePluginClassRequest
       * @return CreatePluginClassResponse
       */
      Models::CreatePluginClassResponse createPluginClass(const Models::CreatePluginClassRequest &request);

      /**
       * @summary Creates a policy.
       *
       * @param request CreatePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates a policy attachment to a resource.
       *
       * @param request CreatePolicyAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyAttachmentResponse
       */
      Models::CreatePolicyAttachmentResponse createPolicyAttachmentWithOptions(const Models::CreatePolicyAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy attachment to a resource.
       *
       * @param request CreatePolicyAttachmentRequest
       * @return CreatePolicyAttachmentResponse
       */
      Models::CreatePolicyAttachmentResponse createPolicyAttachment(const Models::CreatePolicyAttachmentRequest &request);

      /**
       * @summary Generates a key.
       *
       * @param request CreateSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a key.
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Creates services.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request CreateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createServiceWithOptions(const Models::CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates services.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request CreateServiceRequest
       * @return CreateServiceResponse
       */
      Models::CreateServiceResponse createService(const Models::CreateServiceRequest &request);

      /**
       * @summary Creates a service version.
       *
       * @param request CreateServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceVersionResponse
       */
      Models::CreateServiceVersionResponse createServiceVersionWithOptions(const string &serviceId, const Models::CreateServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service version.
       *
       * @param request CreateServiceVersionRequest
       * @return CreateServiceVersionResponse
       */
      Models::CreateServiceVersionResponse createServiceVersion(const string &serviceId, const Models::CreateServiceVersionRequest &request);

      /**
       * @summary Creates a source.
       *
       * @param request CreateSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSourceResponse
       */
      Models::CreateSourceResponse createSourceWithOptions(const Models::CreateSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a source.
       *
       * @param request CreateSourceRequest
       * @return CreateSourceResponse
       */
      Models::CreateSourceResponse createSource(const Models::CreateSourceRequest &request);

      /**
       * @summary Deletes an API consumer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerResponse
       */
      Models::DeleteConsumerResponse deleteConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API consumer.
       *
       * @return DeleteConsumerResponse
       */
      Models::DeleteConsumerResponse deleteConsumer(const string &consumerId);

      /**
       * @summary Deletes an API consumer authorization rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerAuthorizationRuleResponse
       */
      Models::DeleteConsumerAuthorizationRuleResponse deleteConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API consumer authorization rule.
       *
       * @return DeleteConsumerAuthorizationRuleResponse
       */
      Models::DeleteConsumerAuthorizationRuleResponse deleteConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId);

      /**
       * @summary Deletes a domain name.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const string &domainId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name.
       *
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const string &domainId);

      /**
       * @deprecated OpenAPI DeleteEnvironment is deprecated
       *
       * @summary Deletes an environment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironmentWithOptions(const string &environmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteEnvironment is deprecated
       *
       * @summary Deletes an environment.
       *
       * @return DeleteEnvironmentResponse
       */
      Models::DeleteEnvironmentResponse deleteEnvironment(const string &environmentId);

      /**
       * @summary Deletes a gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a gateway.
       *
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const string &gatewayId);

      /**
       * @summary Deletes a quota throttling rule from a gateway.
       *
       * @description Deletes a consumer-based quota rule from an AI gateway. This operation takes effect only for AI gateways of version 2.1.19 or later.
       *
       * @param request DeleteGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayQuotaRuleResponse
       */
      Models::DeleteGatewayQuotaRuleResponse deleteGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::DeleteGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota throttling rule from a gateway.
       *
       * @description Deletes a consumer-based quota rule from an AI gateway. This operation takes effect only for AI gateways of version 2.1.19 or later.
       *
       * @param request DeleteGatewayQuotaRuleRequest
       * @return DeleteGatewayQuotaRuleResponse
       */
      Models::DeleteGatewayQuotaRuleResponse deleteGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::DeleteGatewayQuotaRuleRequest &request);

      /**
       * @summary Deletes a security group rule from a gateway.
       *
       * @param request DeleteGatewaySecurityGroupRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewaySecurityGroupRuleResponse
       */
      Models::DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const string &securityGroupRuleId, const Models::DeleteGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group rule from a gateway.
       *
       * @param request DeleteGatewaySecurityGroupRuleRequest
       * @return DeleteGatewaySecurityGroupRuleResponse
       */
      Models::DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRule(const string &gatewayId, const string &securityGroupRuleId, const Models::DeleteGatewaySecurityGroupRuleRequest &request);

      /**
       * @summary Deletes a specified HTTP API.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiResponse
       */
      Models::DeleteHttpApiResponse deleteHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified HTTP API.
       *
       * @return DeleteHttpApiResponse
       */
      Models::DeleteHttpApiResponse deleteHttpApi(const string &httpApiId);

      /**
       * @summary Deletes a specified operation.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiOperationResponse
       */
      Models::DeleteHttpApiOperationResponse deleteHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified operation.
       *
       * @return DeleteHttpApiOperationResponse
       */
      Models::DeleteHttpApiOperationResponse deleteHttpApiOperation(const string &httpApiId, const string &operationId);

      /**
       * @summary Deletes a route of an HTTP API.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiRouteResponse
       */
      Models::DeleteHttpApiRouteResponse deleteHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a route of an HTTP API.
       *
       * @return DeleteHttpApiRouteResponse
       */
      Models::DeleteHttpApiRouteResponse deleteHttpApiRoute(const string &httpApiId, const string &routeId);

      /**
       * @summary Deletes an MCP server.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpServerResponse
       */
      Models::DeleteMcpServerResponse deleteMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an MCP server.
       *
       * @return DeleteMcpServerResponse
       */
      Models::DeleteMcpServerResponse deleteMcpServer(const string &mcpServerId);

      /**
       * @summary Deletes a plugin mount.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePluginAttachmentResponse
       */
      Models::DeletePluginAttachmentResponse deletePluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a plugin mount.
       *
       * @return DeletePluginAttachmentResponse
       */
      Models::DeletePluginAttachmentResponse deletePluginAttachment(const string &pluginAttachmentId);

      /**
       * @summary DeletePluginClass
       *
       * @param request DeletePluginClassRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePluginClassResponse
       */
      Models::DeletePluginClassResponse deletePluginClassWithOptions(const string &pluginClassId, const Models::DeletePluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeletePluginClass
       *
       * @param request DeletePluginClassRequest
       * @return DeletePluginClassResponse
       */
      Models::DeletePluginClassResponse deletePluginClass(const string &pluginClassId, const Models::DeletePluginClassRequest &request);

      /**
       * @summary Deletes a policy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy.
       *
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const string &policyId);

      /**
       * @summary Deletes a policy attachment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyAttachmentResponse
       */
      Models::DeletePolicyAttachmentResponse deletePolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy attachment.
       *
       * @return DeletePolicyAttachmentResponse
       */
      Models::DeletePolicyAttachmentResponse deletePolicyAttachment(const string &policyAttachmentId);

      /**
       * @summary Deletes a key value.
       *
       * @description The operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const string &secretId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a key value.
       *
       * @description The operation supports creating multiple services.
       *
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecret(const string &secretId);

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
       * @summary Deletes a service version.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServiceVersionResponse
       */
      Models::DeleteServiceVersionResponse deleteServiceVersionWithOptions(const string &serviceId, const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service version.
       *
       * @return DeleteServiceVersionResponse
       */
      Models::DeleteServiceVersionResponse deleteServiceVersion(const string &serviceId, const string &name);

      /**
       * @summary Deletes a service source.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSourceResponse
       */
      Models::DeleteSourceResponse deleteSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a service source.
       *
       * @return DeleteSourceResponse
       */
      Models::DeleteSourceResponse deleteSource(const string &sourceId);

      /**
       * @summary Publishes an HTTP API. This includes REST APIs and routes within HTTP APIs.
       *
       * @param request DeployHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployHttpApiResponse
       */
      Models::DeployHttpApiResponse deployHttpApiWithOptions(const string &httpApiId, const Models::DeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an HTTP API. This includes REST APIs and routes within HTTP APIs.
       *
       * @param request DeployHttpApiRequest
       * @return DeployHttpApiResponse
       */
      Models::DeployHttpApiResponse deployHttpApi(const string &httpApiId, const Models::DeployHttpApiRequest &request);

      /**
       * @summary Publishes an MCP server.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployMcpServerResponse
       */
      Models::DeployMcpServerResponse deployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an MCP server.
       *
       * @return DeployMcpServerResponse
       */
      Models::DeployMcpServerResponse deployMcpServer(const string &mcpServerId);

      /**
       * @summary Queries the regions where the cloud-native API gateway is available for the current account.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where the cloud-native API gateway is available for the current account.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Exports a specified HTTP API.
       *
       * @param request ExportHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportHttpApiResponse
       */
      Models::ExportHttpApiResponse exportHttpApiWithOptions(const string &httpApiId, const Models::ExportHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a specified HTTP API.
       *
       * @param request ExportHttpApiRequest
       * @return ExportHttpApiResponse
       */
      Models::ExportHttpApiResponse exportHttpApi(const string &httpApiId, const Models::ExportHttpApiRequest &request);

      /**
       * @summary Retrieves an API consumer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerResponse
       */
      Models::GetConsumerResponse getConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an API consumer.
       *
       * @return GetConsumerResponse
       */
      Models::GetConsumerResponse getConsumer(const string &consumerId);

      /**
       * @summary Retrieves a consumer authorization rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerAuthorizationRuleResponse
       */
      Models::GetConsumerAuthorizationRuleResponse getConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a consumer authorization rule.
       *
       * @return GetConsumerAuthorizationRuleResponse
       */
      Models::GetConsumerAuthorizationRuleResponse getConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId);

      /**
       * @summary Retrieves the monitoring log dashboard.
       *
       * @param tmpReq GetDashboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboardWithOptions(const string &gatewayId, const Models::GetDashboardRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the monitoring log dashboard.
       *
       * @param request GetDashboardRequest
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboard(const string &gatewayId, const Models::GetDashboardRequest &request);

      /**
       * @summary Queries a domain name.
       *
       * @param request GetDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomainWithOptions(const string &domainId, const Models::GetDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a domain name.
       *
       * @param request GetDomainRequest
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomain(const string &domainId, const Models::GetDomainRequest &request);

      /**
       * @deprecated OpenAPI GetEnvironment is deprecated
       *
       * @summary Queries an environment.
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
       * @summary Queries an environment.
       *
       * @param request GetEnvironmentRequest
       * @return GetEnvironmentResponse
       */
      Models::GetEnvironmentResponse getEnvironment(const string &environmentId, const Models::GetEnvironmentRequest &request);

      /**
       * @summary Retrieves basic information about a gateway, including the associated VPC, vSwitch, and gateway ingress.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves basic information about a gateway, including the associated VPC, vSwitch, and gateway ingress.
       *
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGateway(const string &gatewayId);

      /**
       * @summary Queries the details of a gateway quota rate limiting rule.
       *
       * @description Queries the details of a consumer quota rule on an AI gateway.
       *
       * @param request GetGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayQuotaRuleResponse
       */
      Models::GetGatewayQuotaRuleResponse getGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::GetGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a gateway quota rate limiting rule.
       *
       * @description Queries the details of a consumer quota rule on an AI gateway.
       *
       * @param request GetGatewayQuotaRuleRequest
       * @return GetGatewayQuotaRuleResponse
       */
      Models::GetGatewayQuotaRuleResponse getGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::GetGatewayQuotaRuleRequest &request);

      /**
       * @summary Queries the usage details of a subject under a gateway quota throttling rule, including used quota, total quota, whether the limit is exceeded, usage details, and consumption records.
       *
       * @description Retrieves the usage details of a specific consumer under a quota rule. This operation takes effect only for AI gateways with a version later than 2.1.19.
       *
       * @param request GetGatewayQuotaRuleSubjectUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayQuotaRuleSubjectUsageResponse
       */
      Models::GetGatewayQuotaRuleSubjectUsageResponse getGatewayQuotaRuleSubjectUsageWithOptions(const string &gatewayId, const string &ruleId, const string &subjectId, const Models::GetGatewayQuotaRuleSubjectUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of a subject under a gateway quota throttling rule, including used quota, total quota, whether the limit is exceeded, usage details, and consumption records.
       *
       * @description Retrieves the usage details of a specific consumer under a quota rule. This operation takes effect only for AI gateways with a version later than 2.1.19.
       *
       * @param request GetGatewayQuotaRuleSubjectUsageRequest
       * @return GetGatewayQuotaRuleSubjectUsageResponse
       */
      Models::GetGatewayQuotaRuleSubjectUsageResponse getGatewayQuotaRuleSubjectUsage(const string &gatewayId, const string &ruleId, const string &subjectId, const Models::GetGatewayQuotaRuleSubjectUsageRequest &request);

      /**
       * @summary Retrieves HTTP API information.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiResponse
       */
      Models::GetHttpApiResponse getHttpApiWithOptions(const string &httpApiId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves HTTP API information.
       *
       * @return GetHttpApiResponse
       */
      Models::GetHttpApiResponse getHttpApi(const string &httpApiId);

      /**
       * @summary Retrieves operation information.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiOperationResponse
       */
      Models::GetHttpApiOperationResponse getHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves operation information.
       *
       * @return GetHttpApiOperationResponse
       */
      Models::GetHttpApiOperationResponse getHttpApiOperation(const string &httpApiId, const string &operationId);

      /**
       * @summary Retrieves the route details of an HTTP API.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiRouteResponse
       */
      Models::GetHttpApiRouteResponse getHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the route details of an HTTP API.
       *
       * @return GetHttpApiRouteResponse
       */
      Models::GetHttpApiRouteResponse getHttpApiRoute(const string &httpApiId, const string &routeId);

      /**
       * @summary Retrieves an MCP server.
       *
       * @description The operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an MCP server.
       *
       * @description The operation supports creating multiple services.
       *
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServer(const string &mcpServerId);

      /**
       * @summary Queries a plugin mount.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginAttachmentResponse
       */
      Models::GetPluginAttachmentResponse getPluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a plugin mount.
       *
       * @return GetPluginAttachmentResponse
       */
      Models::GetPluginAttachmentResponse getPluginAttachment(const string &pluginAttachmentId);

      /**
       * @summary Retrieves a custom plug-in class.
       *
       * @param request GetPluginClassRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginClassResponse
       */
      Models::GetPluginClassResponse getPluginClassWithOptions(const string &pluginClassId, const Models::GetPluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a custom plug-in class.
       *
       * @param request GetPluginClassRequest
       * @return GetPluginClassResponse
       */
      Models::GetPluginClassResponse getPluginClass(const string &pluginClassId, const Models::GetPluginClassRequest &request);

      /**
       * @summary Retrieves a policy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a policy.
       *
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const string &policyId);

      /**
       * @summary Queries the resource attachment of a policy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyAttachmentResponse
       */
      Models::GetPolicyAttachmentResponse getPolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource attachment of a policy.
       *
       * @return GetPolicyAttachmentResponse
       */
      Models::GetPolicyAttachmentResponse getPolicyAttachment(const string &policyAttachmentId);

      /**
       * @summary Retrieves resource overview information.
       *
       * @param request GetResourceOverviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceOverviewResponse
       */
      Models::GetResourceOverviewResponse getResourceOverviewWithOptions(const Models::GetResourceOverviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves resource overview information.
       *
       * @param request GetResourceOverviewRequest
       * @return GetResourceOverviewResponse
       */
      Models::GetResourceOverviewResponse getResourceOverview(const Models::GetResourceOverviewRequest &request);

      /**
       * @summary Retrieves a key.
       *
       * @description The operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretResponse
       */
      Models::GetSecretResponse getSecretWithOptions(const string &secretId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a key.
       *
       * @description The operation supports creating multiple services.
       *
       * @return GetSecretResponse
       */
      Models::GetSecretResponse getSecret(const string &secretId);

      /**
       * @summary Retrieves the value of a key.
       *
       * @description The operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValueWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the value of a key.
       *
       * @description The operation supports creating multiple services.
       *
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValue(const string &name);

      /**
       * @summary Retrieves the details of a service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a service.
       *
       * @return GetServiceResponse
       */
      Models::GetServiceResponse getService(const string &serviceId);

      /**
       * @summary Retrieves the details of a service source.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSourceWithOptions(const string &sourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a service source.
       *
       * @return GetSourceResponse
       */
      Models::GetSourceResponse getSource(const string &sourceId);

      /**
       * @summary Retrieves the Tracing Analysis configuration.
       *
       * @param request GetTraceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTraceConfigResponse
       */
      Models::GetTraceConfigResponse getTraceConfigWithOptions(const string &gatewayId, const Models::GetTraceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Tracing Analysis configuration.
       *
       * @param request GetTraceConfigRequest
       * @return GetTraceConfigResponse
       */
      Models::GetTraceConfigResponse getTraceConfig(const string &gatewayId, const Models::GetTraceConfigRequest &request);

      /**
       * @summary Imports an HTTP API. This operation supports importing OpenAPI 2.0 and OpenAPI 3.0.x definition files as REST-type APIs.
       *
       * @param request ImportHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportHttpApiResponse
       */
      Models::ImportHttpApiResponse importHttpApiWithOptions(const Models::ImportHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an HTTP API. This operation supports importing OpenAPI 2.0 and OpenAPI 3.0.x definition files as REST-type APIs.
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
       * @summary Retrieves the list of consumer authorization rules.
       *
       * @param request ListConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerAuthorizationRulesResponse
       */
      Models::ListConsumerAuthorizationRulesResponse listConsumerAuthorizationRulesWithOptions(const string &consumerId, const Models::ListConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of consumer authorization rules.
       *
       * @param request ListConsumerAuthorizationRulesRequest
       * @return ListConsumerAuthorizationRulesResponse
       */
      Models::ListConsumerAuthorizationRulesResponse listConsumerAuthorizationRules(const string &consumerId, const Models::ListConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Queries the list of quota rules configured for a specific consumer.
       *
       * @param request ListConsumerQuotaRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerQuotaRulesResponse
       */
      Models::ListConsumerQuotaRulesResponse listConsumerQuotaRulesWithOptions(const string &consumerId, const Models::ListConsumerQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of quota rules configured for a specific consumer.
       *
       * @param request ListConsumerQuotaRulesRequest
       * @return ListConsumerQuotaRulesResponse
       */
      Models::ListConsumerQuotaRulesResponse listConsumerQuotaRules(const string &consumerId, const Models::ListConsumerQuotaRulesRequest &request);

      /**
       * @summary Retrieves a list of consumers.
       *
       * @param request ListConsumersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumersResponse
       */
      Models::ListConsumersResponse listConsumersWithOptions(const Models::ListConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of consumers.
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
       * @summary Queries the list of environments.
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
       * @summary Queries the list of environments.
       *
       * @param request ListEnvironmentsRequest
       * @return ListEnvironmentsResponse
       */
      Models::ListEnvironmentsResponse listEnvironments(const Models::ListEnvironmentsRequest &request);

      /**
       * @summary Retrieves the external service information of a gateway.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request ListExternalServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalServicesResponse
       */
      Models::ListExternalServicesResponse listExternalServicesWithOptions(const string &gatewayId, const Models::ListExternalServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the external service information of a gateway.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request ListExternalServicesRequest
       * @return ListExternalServicesResponse
       */
      Models::ListExternalServicesResponse listExternalServices(const string &gatewayId, const Models::ListExternalServicesRequest &request);

      /**
       * @summary Queries the list of gateway attribute parameter settings.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayFeaturesResponse
       */
      Models::ListGatewayFeaturesResponse listGatewayFeaturesWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of gateway attribute parameter settings.
       *
       * @return ListGatewayFeaturesResponse
       */
      Models::ListGatewayFeaturesResponse listGatewayFeatures(const string &gatewayId);

      /**
       * @summary Queries the list of consumer quota rules bound to a gateway.
       *
       * @description Queries the list of consumer quota rules bound to a gateway.
       *
       * @param request ListGatewayQuotaRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayQuotaRulesResponse
       */
      Models::ListGatewayQuotaRulesResponse listGatewayQuotaRulesWithOptions(const string &gatewayId, const Models::ListGatewayQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of consumer quota rules bound to a gateway.
       *
       * @description Queries the list of consumer quota rules bound to a gateway.
       *
       * @param request ListGatewayQuotaRulesRequest
       * @return ListGatewayQuotaRulesResponse
       */
      Models::ListGatewayQuotaRulesResponse listGatewayQuotaRules(const string &gatewayId, const Models::ListGatewayQuotaRulesRequest &request);

      /**
       * @summary Queries a list of gateways.
       *
       * @param tmpReq ListGatewaysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewaysResponse
       */
      Models::ListGatewaysResponse listGatewaysWithOptions(const Models::ListGatewaysRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of gateways.
       *
       * @param request ListGatewaysRequest
       * @return ListGatewaysResponse
       */
      Models::ListGatewaysResponse listGateways(const Models::ListGatewaysRequest &request);

      /**
       * @summary Retrieves a list of API operations.
       *
       * @param request ListHttpApiOperationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApiOperationsResponse
       */
      Models::ListHttpApiOperationsResponse listHttpApiOperationsWithOptions(const string &httpApiId, const Models::ListHttpApiOperationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of API operations.
       *
       * @param request ListHttpApiOperationsRequest
       * @return ListHttpApiOperationsResponse
       */
      Models::ListHttpApiOperationsResponse listHttpApiOperations(const string &httpApiId, const Models::ListHttpApiOperationsRequest &request);

      /**
       * @summary Queries the route list of an HTTP API.
       *
       * @param request ListHttpApiRoutesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApiRoutesResponse
       */
      Models::ListHttpApiRoutesResponse listHttpApiRoutesWithOptions(const string &httpApiId, const Models::ListHttpApiRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route list of an HTTP API.
       *
       * @param request ListHttpApiRoutesRequest
       * @return ListHttpApiRoutesResponse
       */
      Models::ListHttpApiRoutesResponse listHttpApiRoutes(const string &httpApiId, const Models::ListHttpApiRoutesRequest &request);

      /**
       * @summary Retrieves a list of HTTP APIs.
       *
       * @param request ListHttpApisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApisResponse
       */
      Models::ListHttpApisResponse listHttpApisWithOptions(const Models::ListHttpApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of HTTP APIs.
       *
       * @param request ListHttpApisRequest
       * @return ListHttpApisResponse
       */
      Models::ListHttpApisResponse listHttpApis(const Models::ListHttpApisRequest &request);

      /**
       * @summary Retrieves a list of MCP servers.
       *
       * @description The operation supports creating multiple services.
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
       * @description The operation supports creating multiple services.
       *
       * @param request ListMcpServersRequest
       * @return ListMcpServersResponse
       */
      Models::ListMcpServersResponse listMcpServers(const Models::ListMcpServersRequest &request);

      /**
       * @summary Retrieves the list of plug-in mounts.
       *
       * @param request ListPluginAttachmentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginAttachmentsResponse
       */
      Models::ListPluginAttachmentsResponse listPluginAttachmentsWithOptions(const Models::ListPluginAttachmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of plug-in mounts.
       *
       * @param request ListPluginAttachmentsRequest
       * @return ListPluginAttachmentsResponse
       */
      Models::ListPluginAttachmentsResponse listPluginAttachments(const Models::ListPluginAttachmentsRequest &request);

      /**
       * @summary Retrieves plug-ins.
       *
       * @description The operation supports creating multiple services.
       *
       * @param request ListPluginClassesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginClassesResponse
       */
      Models::ListPluginClassesResponse listPluginClassesWithOptions(const Models::ListPluginClassesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves plug-ins.
       *
       * @description The operation supports creating multiple services.
       *
       * @param request ListPluginClassesRequest
       * @return ListPluginClassesResponse
       */
      Models::ListPluginClassesResponse listPluginClasses(const Models::ListPluginClassesRequest &request);

      /**
       * @summary Retrieves a list of plugins.
       *
       * @param request ListPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPluginsWithOptions(const Models::ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of plugins.
       *
       * @param request ListPluginsRequest
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPlugins(const Models::ListPluginsRequest &request);

      /**
       * @summary Queries a list of policies.
       *
       * @param request ListPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Retrieves policy templates.
       *
       * @param request ListPolicyClassesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyClassesResponse
       */
      Models::ListPolicyClassesResponse listPolicyClassesWithOptions(const Models::ListPolicyClassesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves policy templates.
       *
       * @param request ListPolicyClassesRequest
       * @return ListPolicyClassesResponse
       */
      Models::ListPolicyClassesResponse listPolicyClasses(const Models::ListPolicyClassesRequest &request);

      /**
       * @summary Lists secret references.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request ListSecretReferencesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretReferencesResponse
       */
      Models::ListSecretReferencesResponse listSecretReferencesWithOptions(const string &secretId, const Models::ListSecretReferencesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists secret references.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request ListSecretReferencesRequest
       * @return ListSecretReferencesResponse
       */
      Models::ListSecretReferencesResponse listSecretReferences(const string &secretId, const Models::ListSecretReferencesRequest &request);

      /**
       * @summary Lists keys.
       *
       * @description The operation supports creating multiple services.
       *
       * @param request ListSecretsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecretsWithOptions(const Models::ListSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists keys.
       *
       * @description The operation supports creating multiple services.
       *
       * @param request ListSecretsRequest
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecrets(const Models::ListSecretsRequest &request);

      /**
       * @summary Retrieves a list of services.
       *
       * @param request ListServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServicesWithOptions(const Models::ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of services.
       *
       * @param request ListServicesRequest
       * @return ListServicesResponse
       */
      Models::ListServicesResponse listServices(const Models::ListServicesRequest &request);

      /**
       * @summary Retrieves a list of certificates.
       *
       * @param request ListSslCertsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCertsWithOptions(const Models::ListSslCertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of certificates.
       *
       * @param request ListSslCertsRequest
       * @return ListSslCertsResponse
       */
      Models::ListSslCertsResponse listSslCerts(const Models::ListSslCertsRequest &request);

      /**
       * @summary Retrieves the list of resource labels.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of resource labels.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Retrieves the zones available for a cloud-native API gateway in a specific region.
       *
       * @param request ListZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZonesWithOptions(const Models::ListZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the zones available for a cloud-native API gateway in a specific region.
       *
       * @param request ListZonesRequest
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZones(const Models::ListZonesRequest &request);

      /**
       * @summary Queries the list of consumer authorization rules.
       *
       * @param request QueryConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConsumerAuthorizationRulesResponse
       */
      Models::QueryConsumerAuthorizationRulesResponse queryConsumerAuthorizationRulesWithOptions(const Models::QueryConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of consumer authorization rules.
       *
       * @param request QueryConsumerAuthorizationRulesRequest
       * @return QueryConsumerAuthorizationRulesResponse
       */
      Models::QueryConsumerAuthorizationRulesResponse queryConsumerAuthorizationRules(const Models::QueryConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Deletes an API consumer authorization rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveConsumerAuthorizationRuleResponse
       */
      Models::RemoveConsumerAuthorizationRuleResponse removeConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API consumer authorization rule.
       *
       * @return RemoveConsumerAuthorizationRuleResponse
       */
      Models::RemoveConsumerAuthorizationRuleResponse removeConsumerAuthorizationRule(const string &consumerAuthorizationRuleId);

      /**
       * @summary Resets a quota throttling rule on a gateway.
       *
       * @description Resets a quota throttling rule on a gateway. This operation takes effect only on AI gateways running version 2.1.19 or later. Resetting a rule clears the historical usage of consumers associated with the rule.
       * > 
       * >  Recommended call sequence:
       * > - 1. Perform a dry run to check for rule conflicts.
       * > - - Set dryRun to true.
       * > - - The response contains a conflict preview with conflictHash.
       * > - 2. Submit the request after confirmation.
       * > - - No conflicts: Set dryRun to false and overwrite to false.
       * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
       *
       * @param request ResetGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetGatewayQuotaRuleResponse
       */
      Models::ResetGatewayQuotaRuleResponse resetGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::ResetGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a quota throttling rule on a gateway.
       *
       * @description Resets a quota throttling rule on a gateway. This operation takes effect only on AI gateways running version 2.1.19 or later. Resetting a rule clears the historical usage of consumers associated with the rule.
       * > 
       * >  Recommended call sequence:
       * > - 1. Perform a dry run to check for rule conflicts.
       * > - - Set dryRun to true.
       * > - - The response contains a conflict preview with conflictHash.
       * > - 2. Submit the request after confirmation.
       * > - - No conflicts: Set dryRun to false and overwrite to false.
       * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
       *
       * @param request ResetGatewayQuotaRuleRequest
       * @return ResetGatewayQuotaRuleResponse
       */
      Models::ResetGatewayQuotaRuleResponse resetGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::ResetGatewayQuotaRuleRequest &request);

      /**
       * @summary Restarts a gateway.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartGatewayResponse
       */
      Models::RestartGatewayResponse restartGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a gateway.
       *
       * @return RestartGatewayResponse
       */
      Models::RestartGatewayResponse restartGateway(const string &gatewayId);

      /**
       * @summary Syncs an external MCP server.
       *
       * @param request SyncMCPServersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMCPServersResponse
       */
      Models::SyncMCPServersResponse syncMCPServersWithOptions(const Models::SyncMCPServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Syncs an external MCP server.
       *
       * @param request SyncMCPServersRequest
       * @return SyncMCPServersResponse
       */
      Models::SyncMCPServersResponse syncMCPServers(const Models::SyncMCPServersRequest &request);

      /**
       * @summary Adds labels to resources.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds labels to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Cancels the publication of an MCP server.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnDeployMcpServerResponse
       */
      Models::UnDeployMcpServerResponse unDeployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the publication of an MCP server.
       *
       * @return UnDeployMcpServerResponse
       */
      Models::UnDeployMcpServerResponse unDeployMcpServer(const string &mcpServerId);

      /**
       * @summary Cancels the deployment of an HTTP API.
       *
       * @param request UndeployHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UndeployHttpApiResponse
       */
      Models::UndeployHttpApiResponse undeployHttpApiWithOptions(const string &httpApiId, const Models::UndeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the deployment of an HTTP API.
       *
       * @param request UndeployHttpApiRequest
       * @return UndeployHttpApiResponse
       */
      Models::UndeployHttpApiResponse undeployHttpApi(const string &httpApiId, const Models::UndeployHttpApiRequest &request);

      /**
       * @summary Uninstalls a plugin.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPluginWithOptions(const string &pluginId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls a plugin.
       *
       * @return UninstallPluginResponse
       */
      Models::UninstallPluginResponse uninstallPlugin(const string &pluginId);

      /**
       * @summary Removes tags from resources.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates and mounts a policy.
       *
       * @param request UpdateAndAttachPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAndAttachPolicyResponse
       */
      Models::UpdateAndAttachPolicyResponse updateAndAttachPolicyWithOptions(const string &policyId, const Models::UpdateAndAttachPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates and mounts a policy.
       *
       * @param request UpdateAndAttachPolicyRequest
       * @return UpdateAndAttachPolicyResponse
       */
      Models::UpdateAndAttachPolicyResponse updateAndAttachPolicy(const string &policyId, const Models::UpdateAndAttachPolicyRequest &request);

      /**
       * @summary Updates an API consumer.
       *
       * @param request UpdateConsumerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerResponse
       */
      Models::UpdateConsumerResponse updateConsumerWithOptions(const string &consumerId, const Models::UpdateConsumerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an API consumer.
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
       * @description Only sources of the **Container Service** type allow you to update the listener Ingress configuration.
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
       * @description Only sources of the **Container Service** type allow you to update the listener Ingress configuration.
       *
       * @param request UpdateDomainRequest
       * @return UpdateDomainResponse
       */
      Models::UpdateDomainResponse updateDomain(const string &domainId, const Models::UpdateDomainRequest &request);

      /**
       * @deprecated OpenAPI UpdateEnvironment is deprecated
       *
       * @summary Updates an environment.
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
       * @summary Updates an environment.
       *
       * @param request UpdateEnvironmentRequest
       * @return UpdateEnvironmentResponse
       */
      Models::UpdateEnvironmentResponse updateEnvironment(const string &environmentId, const Models::UpdateEnvironmentRequest &request);

      /**
       * @summary Updates the attribute parameters of a gateway.
       *
       * @param request UpdateGatewayFeatureRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayFeatureResponse
       */
      Models::UpdateGatewayFeatureResponse updateGatewayFeatureWithOptions(const string &gatewayId, const string &name, const Models::UpdateGatewayFeatureRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attribute parameters of a gateway.
       *
       * @param request UpdateGatewayFeatureRequest
       * @return UpdateGatewayFeatureResponse
       */
      Models::UpdateGatewayFeatureResponse updateGatewayFeature(const string &gatewayId, const string &name, const Models::UpdateGatewayFeatureRequest &request);

      /**
       * @deprecated OpenAPI UpdateGatewayName is deprecated
       *
       * @summary Modifies the name of a gateway.
       *
       * @param request UpdateGatewayNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayNameResponse
       */
      Models::UpdateGatewayNameResponse updateGatewayNameWithOptions(const string &gatewayId, const Models::UpdateGatewayNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateGatewayName is deprecated
       *
       * @summary Modifies the name of a gateway.
       *
       * @param request UpdateGatewayNameRequest
       * @return UpdateGatewayNameResponse
       */
      Models::UpdateGatewayNameResponse updateGatewayName(const string &gatewayId, const Models::UpdateGatewayNameRequest &request);

      /**
       * @summary Edits a quota throttling rule on a gateway.
       *
       * @description Edits a quota rule on a gateway. This operation takes effect only on AI gateways with a version later than 2.1.19. Editing a rule preserves the historical usage of consumers on the rule.
       * >  Recommended call logic:
       * > - Step 1: Perform a dry run to check for rule conflicts.
       * > - - Set dryRun to true.
       * > - - The response contains a conflict preview with conflictHash.
       * > - Step 2: Submit the request after confirmation.
       * > - - No conflicts: Set dryRun to false and overwrite to false.
       * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
       *
       * @param request UpdateGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayQuotaRuleResponse
       */
      Models::UpdateGatewayQuotaRuleResponse updateGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::UpdateGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits a quota throttling rule on a gateway.
       *
       * @description Edits a quota rule on a gateway. This operation takes effect only on AI gateways with a version later than 2.1.19. Editing a rule preserves the historical usage of consumers on the rule.
       * >  Recommended call logic:
       * > - Step 1: Perform a dry run to check for rule conflicts.
       * > - - Set dryRun to true.
       * > - - The response contains a conflict preview with conflictHash.
       * > - Step 2: Submit the request after confirmation.
       * > - - No conflicts: Set dryRun to false and overwrite to false.
       * > - - Conflicts exist and you confirm the overwrite: Set dryRun to false, overwrite to true, and conflictHash to the value returned in the previous step.
       *
       * @param request UpdateGatewayQuotaRuleRequest
       * @return UpdateGatewayQuotaRuleResponse
       */
      Models::UpdateGatewayQuotaRuleResponse updateGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::UpdateGatewayQuotaRuleRequest &request);

      /**
       * @summary Enables or disables a quota throttling rule for a gateway.
       *
       * @description Enables or disables a quota rule on a gateway. This operation takes effect only for AI gateways with a version later than 2.1.19.
       *
       * @param request UpdateGatewayQuotaRuleStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayQuotaRuleStatusResponse
       */
      Models::UpdateGatewayQuotaRuleStatusResponse updateGatewayQuotaRuleStatusWithOptions(const string &gatewayId, const string &ruleId, const Models::UpdateGatewayQuotaRuleStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a quota throttling rule for a gateway.
       *
       * @description Enables or disables a quota rule on a gateway. This operation takes effect only for AI gateways with a version later than 2.1.19.
       *
       * @param request UpdateGatewayQuotaRuleStatusRequest
       * @return UpdateGatewayQuotaRuleStatusResponse
       */
      Models::UpdateGatewayQuotaRuleStatusResponse updateGatewayQuotaRuleStatus(const string &gatewayId, const string &ruleId, const Models::UpdateGatewayQuotaRuleStatusRequest &request);

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
       * @summary Updates an API operation.
       *
       * @param request UpdateHttpApiOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpApiOperationResponse
       */
      Models::UpdateHttpApiOperationResponse updateHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const Models::UpdateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an API operation.
       *
       * @param request UpdateHttpApiOperationRequest
       * @return UpdateHttpApiOperationResponse
       */
      Models::UpdateHttpApiOperationResponse updateHttpApiOperation(const string &httpApiId, const string &operationId, const Models::UpdateHttpApiOperationRequest &request);

      /**
       * @summary Updates a route of an HttpApi.
       *
       * @param request UpdateHttpApiRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpApiRouteResponse
       */
      Models::UpdateHttpApiRouteResponse updateHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const Models::UpdateHttpApiRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a route of an HttpApi.
       *
       * @param request UpdateHttpApiRouteRequest
       * @return UpdateHttpApiRouteResponse
       */
      Models::UpdateHttpApiRouteResponse updateHttpApiRoute(const string &httpApiId, const string &routeId, const Models::UpdateHttpApiRouteRequest &request);

      /**
       * @summary Updates an MCP server.
       *
       * @description Only sources of the **Container Service** type can update the Ingress listener configuration.
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
       * @description Only sources of the **Container Service** type can update the Ingress listener configuration.
       *
       * @param request UpdateMcpServerRequest
       * @return UpdateMcpServerResponse
       */
      Models::UpdateMcpServerResponse updateMcpServer(const string &mcpServerId, const Models::UpdateMcpServerRequest &request);

      /**
       * @summary Updates a plugin mount.
       *
       * @param request UpdatePluginAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePluginAttachmentResponse
       */
      Models::UpdatePluginAttachmentResponse updatePluginAttachmentWithOptions(const string &pluginAttachmentId, const Models::UpdatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a plugin mount.
       *
       * @param request UpdatePluginAttachmentRequest
       * @return UpdatePluginAttachmentResponse
       */
      Models::UpdatePluginAttachmentResponse updatePluginAttachment(const string &pluginAttachmentId, const Models::UpdatePluginAttachmentRequest &request);

      /**
       * @summary Updates a policy.
       *
       * @param request UpdatePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicyWithOptions(const string &policyId, const Models::UpdatePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a policy.
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const string &policyId, const Models::UpdatePolicyRequest &request);

      /**
       * @summary Updates a key pair.
       *
       * @description Only sources of the **container service** type allow you to update the configuration for listening to Ingress.
       *
       * @param request UpdateSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecretWithOptions(const string &secretId, const Models::UpdateSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a key pair.
       *
       * @description Only sources of the **container service** type allow you to update the configuration for listening to Ingress.
       *
       * @param request UpdateSecretRequest
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecret(const string &secretId, const Models::UpdateSecretRequest &request);

      /**
       * @summary Updates a service. You can update the health check configuration, DNS domain name, and address configuration of fixed addresses for the service.
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &serviceId, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service. You can update the health check configuration, DNS domain name, and address configuration of fixed addresses for the service.
       *
       * @param request UpdateServiceRequest
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateService(const string &serviceId, const Models::UpdateServiceRequest &request);

      /**
       * @summary Updates a service version.
       *
       * @param request UpdateServiceVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceVersionResponse
       */
      Models::UpdateServiceVersionResponse updateServiceVersionWithOptions(const string &serviceId, const string &name, const Models::UpdateServiceVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service version.
       *
       * @param request UpdateServiceVersionRequest
       * @return UpdateServiceVersionResponse
       */
      Models::UpdateServiceVersionResponse updateServiceVersion(const string &serviceId, const string &name, const Models::UpdateServiceVersionRequest &request);

      /**
       * @summary Upgrades the gateway version.
       *
       * @param request UpgradeGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeGatewayResponse
       */
      Models::UpgradeGatewayResponse upgradeGatewayWithOptions(const string &gatewayId, const Models::UpgradeGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the gateway version.
       *
       * @param request UpgradeGatewayRequest
       * @return UpgradeGatewayResponse
       */
      Models::UpgradeGatewayResponse upgradeGateway(const string &gatewayId, const Models::UpgradeGatewayRequest &request);
  };
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
