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
       * @description This operation adds a quota rule based on consumers or consumer groups for an AI gateway. Note that this operation takes effect only for AI gateways of a version later than 2.1.21.
       * > 
       * >  Recommended call logic:
       * > - 1. First, perform a dry run to check for rule conflicts.
       * > - - Set dryRun=true.
       * > - - The response returns a conflict preview containing a conflictHash.
       * > - 2. After confirmation, formally submit the request.
       * > - - No conflicts: Set dryRun=false and overwrite=false.
       * > - - Conflicts exist and you confirm to overwrite: Set dryRun=false, overwrite=true, and conflictHash=<the value returned in the previous step>.
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
       * @description This operation adds a quota rule based on consumers or consumer groups for an AI gateway. Note that this operation takes effect only for AI gateways of a version later than 2.1.21.
       * > 
       * >  Recommended call logic:
       * > - 1. First, perform a dry run to check for rule conflicts.
       * > - - Set dryRun=true.
       * > - - The response returns a conflict preview containing a conflictHash.
       * > - 2. After confirmation, formally submit the request.
       * > - - No conflicts: Set dryRun=false and overwrite=false.
       * > - - Conflicts exist and you confirm to overwrite: Set dryRun=false, overwrite=true, and conflictHash=<the value returned in the previous step>.
       *
       * @param request AddGatewayQuotaRuleRequest
       * @return AddGatewayQuotaRuleResponse
       */
      Models::AddGatewayQuotaRuleResponse addGatewayQuotaRule(const string &gatewayId, const Models::AddGatewayQuotaRuleRequest &request);

      /**
       * @summary Authorizes a security group for gateway access to services.
       *
       * @param request AddGatewaySecurityGroupRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewaySecurityGroupRuleResponse
       */
      Models::AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const Models::AddGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a security group for gateway access to services.
       *
       * @param request AddGatewaySecurityGroupRuleRequest
       * @return AddGatewaySecurityGroupRuleResponse
       */
      Models::AddGatewaySecurityGroupRuleResponse addGatewaySecurityGroupRule(const string &gatewayId, const Models::AddGatewaySecurityGroupRuleRequest &request);

      /**
       * @summary Grants model card licenses to a consumer.
       *
       * @param request AuthorizeConsumerModelCardGrantsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeConsumerModelCardGrantsResponse
       */
      Models::AuthorizeConsumerModelCardGrantsResponse authorizeConsumerModelCardGrantsWithOptions(const string &httpApiId, const Models::AuthorizeConsumerModelCardGrantsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants model card licenses to a consumer.
       *
       * @param request AuthorizeConsumerModelCardGrantsRequest
       * @return AuthorizeConsumerModelCardGrantsResponse
       */
      Models::AuthorizeConsumerModelCardGrantsResponse authorizeConsumerModelCardGrants(const string &httpApiId, const Models::AuthorizeConsumerModelCardGrantsRequest &request);

      /**
       * @summary Adds members to a consumer group in batches.
       *
       * @param request BatchAddConsumerGroupConsumersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddConsumerGroupConsumersResponse
       */
      Models::BatchAddConsumerGroupConsumersResponse batchAddConsumerGroupConsumersWithOptions(const string &consumerGroupId, const Models::BatchAddConsumerGroupConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds members to a consumer group in batches.
       *
       * @param request BatchAddConsumerGroupConsumersRequest
       * @return BatchAddConsumerGroupConsumersResponse
       */
      Models::BatchAddConsumerGroupConsumersResponse batchAddConsumerGroupConsumers(const string &consumerGroupId, const Models::BatchAddConsumerGroupConsumersRequest &request);

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
       * @summary Publishes specified routes or all visible routes under the same HTTP API in batches.
       *
       * @description Batch requests are processed individually after passing route ownership validation. If some routes fail to be published, other successfully published routes remain valid.
       *
       * @param request BatchDeployHttpApiRoutesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeployHttpApiRoutesResponse
       */
      Models::BatchDeployHttpApiRoutesResponse batchDeployHttpApiRoutesWithOptions(const string &httpApiId, const Models::BatchDeployHttpApiRoutesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes specified routes or all visible routes under the same HTTP API in batches.
       *
       * @description Batch requests are processed individually after passing route ownership validation. If some routes fail to be published, other successfully published routes remain valid.
       *
       * @param request BatchDeployHttpApiRoutesRequest
       * @return BatchDeployHttpApiRoutesResponse
       */
      Models::BatchDeployHttpApiRoutesResponse batchDeployHttpApiRoutes(const string &httpApiId, const Models::BatchDeployHttpApiRoutesRequest &request);

      /**
       * @summary Performs a batch export of HTTP APIs.
       *
       * @param request BatchExportHttpApisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchExportHttpApisResponse
       */
      Models::BatchExportHttpApisResponse batchExportHttpApisWithOptions(const Models::BatchExportHttpApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a batch export of HTTP APIs.
       *
       * @param request BatchExportHttpApisRequest
       * @return BatchExportHttpApisResponse
       */
      Models::BatchExportHttpApisResponse batchExportHttpApis(const Models::BatchExportHttpApisRequest &request);

      /**
       * @summary Imports HTTP APIs in batches.
       *
       * @param request BatchImportHttpApisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchImportHttpApisResponse
       */
      Models::BatchImportHttpApisResponse batchImportHttpApisWithOptions(const Models::BatchImportHttpApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports HTTP APIs in batches.
       *
       * @param request BatchImportHttpApisRequest
       * @return BatchImportHttpApisResponse
       */
      Models::BatchImportHttpApisResponse batchImportHttpApis(const Models::BatchImportHttpApisRequest &request);

      /**
       * @summary Removes members from a consumer group in batches.
       *
       * @param request BatchRemoveConsumerGroupConsumersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRemoveConsumerGroupConsumersResponse
       */
      Models::BatchRemoveConsumerGroupConsumersResponse batchRemoveConsumerGroupConsumersWithOptions(const string &consumerGroupId, const Models::BatchRemoveConsumerGroupConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes members from a consumer group in batches.
       *
       * @param request BatchRemoveConsumerGroupConsumersRequest
       * @return BatchRemoveConsumerGroupConsumersResponse
       */
      Models::BatchRemoveConsumerGroupConsumersResponse batchRemoveConsumerGroupConsumers(const string &consumerGroupId, const Models::BatchRemoveConsumerGroupConsumersRequest &request);

      /**
       * @summary Batch updates HTTP API operations.
       *
       * @param request BatchUpdateHttpApiOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateHttpApiOperationResponse
       */
      Models::BatchUpdateHttpApiOperationResponse batchUpdateHttpApiOperationWithOptions(const string &httpApiId, const Models::BatchUpdateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch updates HTTP API operations.
       *
       * @param request BatchUpdateHttpApiOperationRequest
       * @return BatchUpdateHttpApiOperationResponse
       */
      Models::BatchUpdateHttpApiOperationResponse batchUpdateHttpApiOperation(const string &httpApiId, const Models::BatchUpdateHttpApiOperationRequest &request);

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
       * @summary Retrieves the activation status of the API management service.
       *
       * @param request CheckCommodityStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCommodityStatusResponse
       */
      Models::CheckCommodityStatusResponse checkCommodityStatusWithOptions(const Models::CheckCommodityStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the activation status of the API management service.
       *
       * @param request CheckCommodityStatusRequest
       * @return CheckCommodityStatusResponse
       */
      Models::CheckCommodityStatusResponse checkCommodityStatus(const Models::CheckCommodityStatusRequest &request);

      /**
       * @summary Creates an AI model card.
       *
       * @description Performs model creation for a model card under an existing model provider of a specified AI gateway instance. The target gateway must exist, belong to the current account, and be of the AI gateway type. The modelProvider parameter must reference an existing model provider in the gateway. The modelName must be unique within the same AI gateway instance and the same model provider. You can create up to 1,000 model cards for a single gateway instance. The credit parameter currently supports only the fixed type, and the billing unit is Credits per million tokens. If this parameter is not specified, the type defaults to fixed and all costs default to 0. Each item in availablePaths must include both path and type.
       *
       * @param request CreateAiModelCardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiModelCardResponse
       */
      Models::CreateAiModelCardResponse createAiModelCardWithOptions(const Models::CreateAiModelCardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI model card.
       *
       * @description Performs model creation for a model card under an existing model provider of a specified AI gateway instance. The target gateway must exist, belong to the current account, and be of the AI gateway type. The modelProvider parameter must reference an existing model provider in the gateway. The modelName must be unique within the same AI gateway instance and the same model provider. You can create up to 1,000 model cards for a single gateway instance. The credit parameter currently supports only the fixed type, and the billing unit is Credits per million tokens. If this parameter is not specified, the type defaults to fixed and all costs default to 0. Each item in availablePaths must include both path and type.
       *
       * @param request CreateAiModelCardRequest
       * @return CreateAiModelCardResponse
       */
      Models::CreateAiModelCardResponse createAiModelCard(const Models::CreateAiModelCardRequest &request);

      /**
       * @summary Creates an AI model provider.
       *
       * @param request CreateAiModelProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiModelProviderResponse
       */
      Models::CreateAiModelProviderResponse createAiModelProviderWithOptions(const Models::CreateAiModelProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AI model provider.
       *
       * @param request CreateAiModelProviderRequest
       * @return CreateAiModelProviderResponse
       */
      Models::CreateAiModelProviderResponse createAiModelProvider(const Models::CreateAiModelProviderRequest &request);

      /**
       * @summary Creates a standalone AI model source.
       *
       * @param request CreateAiModelSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiModelSourceResponse
       */
      Models::CreateAiModelSourceResponse createAiModelSourceWithOptions(const Models::CreateAiModelSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a standalone AI model source.
       *
       * @param request CreateAiModelSourceRequest
       * @return CreateAiModelSourceResponse
       */
      Models::CreateAiModelSourceResponse createAiModelSource(const Models::CreateAiModelSourceRequest &request);

      /**
       * @summary Creates an in-source AI model.
       *
       * @param request CreateAiModelSourceModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiModelSourceModelResponse
       */
      Models::CreateAiModelSourceModelResponse createAiModelSourceModelWithOptions(const Models::CreateAiModelSourceModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an in-source AI model.
       *
       * @param request CreateAiModelSourceModelRequest
       * @return CreateAiModelSourceModelResponse
       */
      Models::CreateAiModelSourceModelResponse createAiModelSourceModel(const Models::CreateAiModelSourceModelRequest &request);

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
       * @summary Creates a HiMarket chat session with a specified conversation type and associated products, and returns the ID of the newly created session.
       *
       * @param request CreateChatSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatSessionResponse
       */
      Models::CreateChatSessionResponse createChatSessionWithOptions(const Models::CreateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a HiMarket chat session with a specified conversation type and associated products, and returns the ID of the newly created session.
       *
       * @param request CreateChatSessionRequest
       * @return CreateChatSessionResponse
       */
      Models::CreateChatSessionResponse createChatSession(const Models::CreateChatSessionRequest &request);

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
       * @deprecated OpenAPI CreateConsumerAuthorizationRule is deprecated
       *
       * @summary Creates a consumer authorization rule.
       *
       * @param request CreateConsumerAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerAuthorizationRuleResponse
       */
      Models::CreateConsumerAuthorizationRuleResponse createConsumerAuthorizationRuleWithOptions(const string &consumerId, const Models::CreateConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateConsumerAuthorizationRule is deprecated
       *
       * @summary Creates a consumer authorization rule.
       *
       * @param request CreateConsumerAuthorizationRuleRequest
       * @return CreateConsumerAuthorizationRuleResponse
       */
      Models::CreateConsumerAuthorizationRuleResponse createConsumerAuthorizationRule(const string &consumerId, const Models::CreateConsumerAuthorizationRuleRequest &request);

      /**
       * @summary Creates a consumer authorization rule.
       *
       * @description Prerequisites: Before you create a consumer authorization rule, prepare resources based on the following dependency chain (the parentheses indicate the corresponding creation API and ID passing relationship):
       * Gateway instance (CreateGateway → gatewayId, gw- prefix)
       * Environment (A default environment is created with the gateway. You can also call CreateEnvironment → environmentId, env- prefix, and associate it with the gatewayId from Step 1.)
       * HTTP API (CreateHttpApi → httpApiId, api- prefix)
       * Route and publish (CreateHttpApiRoute → routeId, hr- prefix, belonging to the API in Step 3; then call DeployHttpApi to publish it to the environment in Step 2. Unpublished routes cannot be authorized.)
       * Consumer (CreateConsumer → consumerId, cs- prefix; or consumer group consumerGroupId, csg- prefix. Choose one of consumerId and consumerGroupId.)
       *
       * @param request CreateConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerAuthorizationRulesResponse
       */
      Models::CreateConsumerAuthorizationRulesResponse createConsumerAuthorizationRulesWithOptions(const Models::CreateConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer authorization rule.
       *
       * @description Prerequisites: Before you create a consumer authorization rule, prepare resources based on the following dependency chain (the parentheses indicate the corresponding creation API and ID passing relationship):
       * Gateway instance (CreateGateway → gatewayId, gw- prefix)
       * Environment (A default environment is created with the gateway. You can also call CreateEnvironment → environmentId, env- prefix, and associate it with the gatewayId from Step 1.)
       * HTTP API (CreateHttpApi → httpApiId, api- prefix)
       * Route and publish (CreateHttpApiRoute → routeId, hr- prefix, belonging to the API in Step 3; then call DeployHttpApi to publish it to the environment in Step 2. Unpublished routes cannot be authorized.)
       * Consumer (CreateConsumer → consumerId, cs- prefix; or consumer group consumerGroupId, csg- prefix. Choose one of consumerId and consumerGroupId.)
       *
       * @param request CreateConsumerAuthorizationRulesRequest
       * @return CreateConsumerAuthorizationRulesResponse
       */
      Models::CreateConsumerAuthorizationRulesResponse createConsumerAuthorizationRules(const Models::CreateConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Creates a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroupWithOptions(const Models::CreateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a consumer group.
       *
       * @param request CreateConsumerGroupRequest
       * @return CreateConsumerGroupResponse
       */
      Models::CreateConsumerGroupResponse createConsumerGroup(const Models::CreateConsumerGroupRequest &request);

      /**
       * @summary Registers a HiMarket developer account and returns the ID of the new developer.
       *
       * @param request CreateDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeveloperResponse
       */
      Models::CreateDeveloperResponse createDeveloperWithOptions(const Models::CreateDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers a HiMarket developer account and returns the ID of the new developer.
       *
       * @param request CreateDeveloperRequest
       * @return CreateDeveloperResponse
       */
      Models::CreateDeveloperResponse createDeveloper(const Models::CreateDeveloperRequest &request);

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
       * @summary Creates an asynchronous export task for the consumption details of a single consumer or consumer group under a gateway quota rule.
       *
       * @description ## Call procedure
       * This operation creates an export task for the consumption details of a consumer or consumer group under a specified gateway quota rule. The exported content is derived from gateway access logs.
       * 1. Call this operation to obtain the taskId. A new task returns Pending, indicating that the task is submitted and the file is not yet generated.
       * 2. Use the same gatewayId, ruleId, subjectId, and the returned taskId to call GetGatewayQuotaRuleSubjectUsageExportTask and poll the task status.
       * 3. When the polled status is Success and the file has not expired, download the csv.gz file by using GetGatewayQuotaRuleSubjectUsageExportTask. If the status is Failed, troubleshoot the issue based on the errorMessage and recreate the task.
       * ## Prerequisites and limits
       * - When you create a task, the quota rule must exist, and the target subject must be bound to the rule. Use the consumer ID for consumer rules and the consumer group ID for consumer group rules.
       * - The details within the valid export time range depend on the delivery of gateway access logs. Enable log delivery first and ensure that the logs for the required time period are queryable.
       * - The time span for a single export cannot exceed one rule period. A single export can contain up to 100,000 details. If the background statistics exceed the limit, the task fails. Narrow the time range and try again.
       * - If the same user already has a Pending or Running task for the same gateway, rule, and subject in the current region within the last 10 minutes, repeated creation is rejected. Creation is also rejected if the total number of export tasks created within the last 10 minutes that are still Pending or Running reaches 3. Wait for the existing tasks to complete. Idempotent retries with the same clientToken and identical parameters can reuse existing tasks.
       * - The processing timeout for a task is 10 minutes from the time of creation. After the timeout, the task is processed as Failed. This is not a guarantee that the task will definitely complete successfully within this time limit.
       * - The export time range, metering dimension, and subject name are determined at creation time, and subsequent queries do not recalculate these conditions. After the file is successfully generated, the download link can be obtained within 24 hours. The signed link generated for each query is valid for 10 minutes, subject to the actual query result.
       *
       * @param request CreateGatewayQuotaRuleSubjectUsageExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGatewayQuotaRuleSubjectUsageExportTaskResponse
       */
      Models::CreateGatewayQuotaRuleSubjectUsageExportTaskResponse createGatewayQuotaRuleSubjectUsageExportTaskWithOptions(const string &gatewayId, const string &ruleId, const string &subjectId, const Models::CreateGatewayQuotaRuleSubjectUsageExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an asynchronous export task for the consumption details of a single consumer or consumer group under a gateway quota rule.
       *
       * @description ## Call procedure
       * This operation creates an export task for the consumption details of a consumer or consumer group under a specified gateway quota rule. The exported content is derived from gateway access logs.
       * 1. Call this operation to obtain the taskId. A new task returns Pending, indicating that the task is submitted and the file is not yet generated.
       * 2. Use the same gatewayId, ruleId, subjectId, and the returned taskId to call GetGatewayQuotaRuleSubjectUsageExportTask and poll the task status.
       * 3. When the polled status is Success and the file has not expired, download the csv.gz file by using GetGatewayQuotaRuleSubjectUsageExportTask. If the status is Failed, troubleshoot the issue based on the errorMessage and recreate the task.
       * ## Prerequisites and limits
       * - When you create a task, the quota rule must exist, and the target subject must be bound to the rule. Use the consumer ID for consumer rules and the consumer group ID for consumer group rules.
       * - The details within the valid export time range depend on the delivery of gateway access logs. Enable log delivery first and ensure that the logs for the required time period are queryable.
       * - The time span for a single export cannot exceed one rule period. A single export can contain up to 100,000 details. If the background statistics exceed the limit, the task fails. Narrow the time range and try again.
       * - If the same user already has a Pending or Running task for the same gateway, rule, and subject in the current region within the last 10 minutes, repeated creation is rejected. Creation is also rejected if the total number of export tasks created within the last 10 minutes that are still Pending or Running reaches 3. Wait for the existing tasks to complete. Idempotent retries with the same clientToken and identical parameters can reuse existing tasks.
       * - The processing timeout for a task is 10 minutes from the time of creation. After the timeout, the task is processed as Failed. This is not a guarantee that the task will definitely complete successfully within this time limit.
       * - The export time range, metering dimension, and subject name are determined at creation time, and subsequent queries do not recalculate these conditions. After the file is successfully generated, the download link can be obtained within 24 hours. The signed link generated for each query is valid for 10 minutes, subject to the actual query result.
       *
       * @param request CreateGatewayQuotaRuleSubjectUsageExportTaskRequest
       * @return CreateGatewayQuotaRuleSubjectUsageExportTaskResponse
       */
      Models::CreateGatewayQuotaRuleSubjectUsageExportTaskResponse createGatewayQuotaRuleSubjectUsageExportTask(const string &gatewayId, const string &ruleId, const string &subjectId, const Models::CreateGatewayQuotaRuleSubjectUsageExportTaskRequest &request);

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
       * @summary Creates an API operation for an HTTP API.
       *
       * @param request CreateHttpApiOperationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpApiOperationResponse
       */
      Models::CreateHttpApiOperationResponse createHttpApiOperationWithOptions(const string &httpApiId, const Models::CreateHttpApiOperationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API operation for an HTTP API.
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
       * @summary Creates an API version.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request CreateHttpApiVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHttpApiVersionResponse
       */
      Models::CreateHttpApiVersionResponse createHttpApiVersionWithOptions(const string &httpApiId, const Models::CreateHttpApiVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API version.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request CreateHttpApiVersionRequest
       * @return CreateHttpApiVersionResponse
       */
      Models::CreateHttpApiVersionResponse createHttpApiVersion(const string &httpApiId, const Models::CreateHttpApiVersionRequest &request);

      /**
       * @summary Creates a logical model.
       *
       * @param request CreateLogicalModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLogicalModelResponse
       */
      Models::CreateLogicalModelResponse createLogicalModelWithOptions(const Models::CreateLogicalModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a logical model.
       *
       * @param request CreateLogicalModelRequest
       * @return CreateLogicalModelResponse
       */
      Models::CreateLogicalModelResponse createLogicalModel(const Models::CreateLogicalModelRequest &request);

      /**
       * @summary Creates a Model Context Protocol (MCP) server.
       *
       * @description Only sources of the **Container Service** type are allowed to update Ingress listener configurations.
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
       * @description Only sources of the **Container Service** type are allowed to update Ingress listener configurations.
       *
       * @param request CreateMcpServerRequest
       * @return CreateMcpServerResponse
       */
      Models::CreateMcpServerResponse createMcpServer(const Models::CreateMcpServerRequest &request);

      /**
       * @summary Creates a migration task.
       *
       * @param request CreateMigrationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMigrationTaskResponse
       */
      Models::CreateMigrationTaskResponse createMigrationTaskWithOptions(const Models::CreateMigrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a migration task.
       *
       * @param request CreateMigrationTaskRequest
       * @return CreateMigrationTaskResponse
       */
      Models::CreateMigrationTaskResponse createMigrationTask(const Models::CreateMigrationTaskRequest &request);

      /**
       * @summary Creates a model creation API.
       *
       * @param request CreateModelApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelApiResponse
       */
      Models::CreateModelApiResponse createModelApiWithOptions(const Models::CreateModelApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model creation API.
       *
       * @param request CreateModelApiRequest
       * @return CreateModelApiResponse
       */
      Models::CreateModelApiResponse createModelApi(const Models::CreateModelApiRequest &request);

      /**
       * @summary Creates a model group.
       *
       * @param request CreateModelGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelGroupResponse
       */
      Models::CreateModelGroupResponse createModelGroupWithOptions(const Models::CreateModelGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model group.
       *
       * @param request CreateModelGroupRequest
       * @return CreateModelGroupResponse
       */
      Models::CreateModelGroupResponse createModelGroup(const Models::CreateModelGroupRequest &request);

      /**
       * @summary Mounts a plugin.
       *
       * @param request CreatePluginAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginAttachmentResponse
       */
      Models::CreatePluginAttachmentResponse createPluginAttachmentWithOptions(const Models::CreatePluginAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Mounts a plugin.
       *
       * @param request CreatePluginAttachmentRequest
       * @return CreatePluginAttachmentResponse
       */
      Models::CreatePluginAttachmentResponse createPluginAttachment(const Models::CreatePluginAttachmentRequest &request);

      /**
       * @summary Creates a custom plug-in class.
       *
       * @param request CreatePluginClassRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginClassResponse
       */
      Models::CreatePluginClassResponse createPluginClassWithOptions(const Models::CreatePluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom plug-in class.
       *
       * @param request CreatePluginClassRequest
       * @return CreatePluginClassResponse
       */
      Models::CreatePluginClassResponse createPluginClass(const Models::CreatePluginClassRequest &request);

      /**
       * @summary Creates a plugin WebIDE workspace.
       *
       * @param request CreatePluginWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePluginWorkspaceResponse
       */
      Models::CreatePluginWorkspaceResponse createPluginWorkspaceWithOptions(const Models::CreatePluginWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a plugin WebIDE workspace.
       *
       * @param request CreatePluginWorkspaceRequest
       * @return CreatePluginWorkspaceResponse
       */
      Models::CreatePluginWorkspaceResponse createPluginWorkspace(const Models::CreatePluginWorkspaceRequest &request);

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
       * @summary Creates a policy resource attachment.
       *
       * @param request CreatePolicyAttachmentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyAttachmentResponse
       */
      Models::CreatePolicyAttachmentResponse createPolicyAttachmentWithOptions(const Models::CreatePolicyAttachmentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy resource attachment.
       *
       * @param request CreatePolicyAttachmentRequest
       * @return CreatePolicyAttachmentResponse
       */
      Models::CreatePolicyAttachmentResponse createPolicyAttachment(const Models::CreatePolicyAttachmentRequest &request);

      /**
       * @summary Creates a HiMarket developer portal and returns the ID of the newly created portal upon success.
       *
       * @param request CreatePortalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePortalResponse
       */
      Models::CreatePortalResponse createPortalWithOptions(const Models::CreatePortalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a HiMarket developer portal and returns the ID of the newly created portal upon success.
       *
       * @param request CreatePortalRequest
       * @return CreatePortalResponse
       */
      Models::CreatePortalResponse createPortal(const Models::CreatePortalRequest &request);

      /**
       * @summary Creates an API product in the product catalog of the HiMarket portal and returns the ID of the new product upon successful creation.
       *
       * @description Creates an API product with a specified name and type.
       *
       * @param request CreateProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProductWithOptions(const Models::CreateProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API product in the product catalog of the HiMarket portal and returns the ID of the new product upon successful creation.
       *
       * @description Creates an API product with a specified name and type.
       *
       * @param request CreateProductRequest
       * @return CreateProductResponse
       */
      Models::CreateProductResponse createProduct(const Models::CreateProductRequest &request);

      /**
       * @summary Creates a product category for an API product and returns the ID and name of the new category.
       *
       * @param request CreateProductCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductCategoryResponse
       */
      Models::CreateProductCategoryResponse createProductCategoryWithOptions(const Models::CreateProductCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a product category for an API product and returns the ID and name of the new category.
       *
       * @param request CreateProductCategoryRequest
       * @return CreateProductCategoryResponse
       */
      Models::CreateProductCategoryResponse createProductCategory(const Models::CreateProductCategoryRequest &request);

      /**
       * @summary Associates an API configuration with a specified API product by submitting the gateway ID and API gateway reference configuration to the /himarket/v1/products/{productId}/ref endpoint. The association can be queried by GetProductRef and removed by DeleteProductRef on the same path.
       *
       * @param request CreateProductRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProductRefResponse
       */
      Models::CreateProductRefResponse createProductRefWithOptions(const string &productId, const Models::CreateProductRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an API configuration with a specified API product by submitting the gateway ID and API gateway reference configuration to the /himarket/v1/products/{productId}/ref endpoint. The association can be queried by GetProductRef and removed by DeleteProductRef on the same path.
       *
       * @param request CreateProductRefRequest
       * @return CreateProductRefResponse
       */
      Models::CreateProductRefResponse createProductRef(const string &productId, const Models::CreateProductRefRequest &request);

      /**
       * @summary Creates a risk check task.
       *
       * @param request CreateRiskCheckTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRiskCheckTaskResponse
       */
      Models::CreateRiskCheckTaskResponse createRiskCheckTaskWithOptions(const string &gatewayId, const Models::CreateRiskCheckTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a risk check task.
       *
       * @param request CreateRiskCheckTaskRequest
       * @return CreateRiskCheckTaskResponse
       */
      Models::CreateRiskCheckTaskResponse createRiskCheckTask(const string &gatewayId, const Models::CreateRiskCheckTaskRequest &request);

      /**
       * @summary Generates a secret.
       *
       * @description ## Before you begin
       * Before calling this operation, you must prepare the following resources in Key Management Service (KMS):
       * - KMS instance: Create an instance in KMS and obtain the instance ID. Pass the instance ID as the kmsConfig.kmsInstanceId parameter.
       * - KMS key: Create a key in the instance and obtain the key ID. Pass the key ID as the kmsConfig.kmsKeyId parameter.
       * When calling this operation, you must set secretSource to KMS and pass the preceding two identifiers in kmsConfig. After the secret is created, you can call ListSecrets to query the list of secrets under your account.
       *
       * @param request CreateSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecretWithOptions(const Models::CreateSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a secret.
       *
       * @description ## Before you begin
       * Before calling this operation, you must prepare the following resources in Key Management Service (KMS):
       * - KMS instance: Create an instance in KMS and obtain the instance ID. Pass the instance ID as the kmsConfig.kmsInstanceId parameter.
       * - KMS key: Create a key in the instance and obtain the key ID. Pass the key ID as the kmsConfig.kmsKeyId parameter.
       * When calling this operation, you must set secretSource to KMS and pass the preceding two identifiers in kmsConfig. After the secret is created, you can call ListSecrets to query the list of secrets under your account.
       *
       * @param request CreateSecretRequest
       * @return CreateSecretResponse
       */
      Models::CreateSecretResponse createSecret(const Models::CreateSecretRequest &request);

      /**
       * @summary Creates a service.
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
       * @summary Creates a service.
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
       * @description Before creating a source, you must prepare the dependent resources for the source. For the K8S type, an existing ACK container service cluster is required. You can invoke ListK8sClusterSources to query active clusters. For the MSE_NACOS type, an existing MSE Nacos instance is required. You can invoke ListMseNacosSources to query active instances.
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
       * @description Before creating a source, you must prepare the dependent resources for the source. For the K8S type, an existing ACK container service cluster is required. You can invoke ListK8sClusterSources to query active clusters. For the MSE_NACOS type, an existing MSE Nacos instance is required. You can invoke ListMseNacosSources to query active instances.
       *
       * @param request CreateSourceRequest
       * @return CreateSourceResponse
       */
      Models::CreateSourceResponse createSource(const Models::CreateSourceRequest &request);

      /**
       * @summary Deletes an AI model card.
       *
       * @param request DeleteAiModelCardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAiModelCardResponse
       */
      Models::DeleteAiModelCardResponse deleteAiModelCardWithOptions(const string &modelCardId, const Models::DeleteAiModelCardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI model card.
       *
       * @param request DeleteAiModelCardRequest
       * @return DeleteAiModelCardResponse
       */
      Models::DeleteAiModelCardResponse deleteAiModelCard(const string &modelCardId, const Models::DeleteAiModelCardRequest &request);

      /**
       * @summary Deletes an AI model provider.
       *
       * @param request DeleteAiModelProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAiModelProviderResponse
       */
      Models::DeleteAiModelProviderResponse deleteAiModelProviderWithOptions(const string &modelProviderId, const Models::DeleteAiModelProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI model provider.
       *
       * @param request DeleteAiModelProviderRequest
       * @return DeleteAiModelProviderResponse
       */
      Models::DeleteAiModelProviderResponse deleteAiModelProvider(const string &modelProviderId, const Models::DeleteAiModelProviderRequest &request);

      /**
       * @summary Deletes a standalone AI model source.
       *
       * @param request DeleteAiModelSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAiModelSourceResponse
       */
      Models::DeleteAiModelSourceResponse deleteAiModelSourceWithOptions(const string &modelSourceId, const Models::DeleteAiModelSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a standalone AI model source.
       *
       * @param request DeleteAiModelSourceRequest
       * @return DeleteAiModelSourceResponse
       */
      Models::DeleteAiModelSourceResponse deleteAiModelSource(const string &modelSourceId, const Models::DeleteAiModelSourceRequest &request);

      /**
       * @summary Deletes an AI model in the source.
       *
       * @param request DeleteAiModelSourceModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAiModelSourceModelResponse
       */
      Models::DeleteAiModelSourceModelResponse deleteAiModelSourceModelWithOptions(const string &modelCardId, const Models::DeleteAiModelSourceModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AI model in the source.
       *
       * @param request DeleteAiModelSourceModelRequest
       * @return DeleteAiModelSourceModelResponse
       */
      Models::DeleteAiModelSourceModelResponse deleteAiModelSourceModel(const string &modelCardId, const Models::DeleteAiModelSourceModelRequest &request);

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
       * @deprecated OpenAPI DeleteConsumerAuthorizationRule is deprecated
       *
       * @summary Deletes a consumer authorization rule.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerAuthorizationRuleResponse
       */
      Models::DeleteConsumerAuthorizationRuleResponse deleteConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DeleteConsumerAuthorizationRule is deprecated
       *
       * @summary Deletes a consumer authorization rule.
       *
       * @return DeleteConsumerAuthorizationRuleResponse
       */
      Models::DeleteConsumerAuthorizationRuleResponse deleteConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(const string &consumerGroupId, const Models::DeleteConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a consumer group.
       *
       * @param request DeleteConsumerGroupRequest
       * @return DeleteConsumerGroupResponse
       */
      Models::DeleteConsumerGroupResponse deleteConsumerGroup(const string &consumerGroupId, const Models::DeleteConsumerGroupRequest &request);

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
       * @summary Deletes a quota throttling rule for a gateway.
       *
       * @description Deletes a quota rule based on an API consumer or API consumer group for an AI gateway. Note that this operation applies only to AI gateways of a version later than 2.1.19.
       *
       * @param request DeleteGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayQuotaRuleResponse
       */
      Models::DeleteGatewayQuotaRuleResponse deleteGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::DeleteGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota throttling rule for a gateway.
       *
       * @description Deletes a quota rule based on an API consumer or API consumer group for an AI gateway. Note that this operation applies only to AI gateways of a version later than 2.1.19.
       *
       * @param request DeleteGatewayQuotaRuleRequest
       * @return DeleteGatewayQuotaRuleResponse
       */
      Models::DeleteGatewayQuotaRuleResponse deleteGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::DeleteGatewayQuotaRuleRequest &request);

      /**
       * @summary Deletes a gateway security group rule.
       *
       * @param request DeleteGatewaySecurityGroupRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewaySecurityGroupRuleResponse
       */
      Models::DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRuleWithOptions(const string &gatewayId, const string &securityGroupRuleId, const Models::DeleteGatewaySecurityGroupRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a gateway security group rule.
       *
       * @param request DeleteGatewaySecurityGroupRuleRequest
       * @return DeleteGatewaySecurityGroupRuleResponse
       */
      Models::DeleteGatewaySecurityGroupRuleResponse deleteGatewaySecurityGroupRule(const string &gatewayId, const string &securityGroupRuleId, const Models::DeleteGatewaySecurityGroupRuleRequest &request);

      /**
       * @summary Deletes a specified HTTP API.
       *
       * @param request DeleteHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiResponse
       */
      Models::DeleteHttpApiResponse deleteHttpApiWithOptions(const string &httpApiId, const Models::DeleteHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified HTTP API.
       *
       * @param request DeleteHttpApiRequest
       * @return DeleteHttpApiResponse
       */
      Models::DeleteHttpApiResponse deleteHttpApi(const string &httpApiId, const Models::DeleteHttpApiRequest &request);

      /**
       * @summary Deletes a specified API operation.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHttpApiOperationResponse
       */
      Models::DeleteHttpApiOperationResponse deleteHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified API operation.
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
       * @summary Deletes the specified logical model.
       *
       * @param request DeleteLogicalModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogicalModelResponse
       */
      Models::DeleteLogicalModelResponse deleteLogicalModelWithOptions(const string &logicalModelId, const Models::DeleteLogicalModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified logical model.
       *
       * @param request DeleteLogicalModelRequest
       * @return DeleteLogicalModelResponse
       */
      Models::DeleteLogicalModelResponse deleteLogicalModel(const string &logicalModelId, const Models::DeleteLogicalModelRequest &request);

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
       * @summary Deletes a migration task.
       *
       * @param request DeleteMigrationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMigrationTaskResponse
       */
      Models::DeleteMigrationTaskResponse deleteMigrationTaskWithOptions(const string &taskId, const Models::DeleteMigrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a migration task.
       *
       * @param request DeleteMigrationTaskRequest
       * @return DeleteMigrationTaskResponse
       */
      Models::DeleteMigrationTaskResponse deleteMigrationTask(const string &taskId, const Models::DeleteMigrationTaskRequest &request);

      /**
       * @summary Deletes a model API.
       *
       * @description Automatically stops the service and cleans up the resources owned by the API when a published new-version model API is deleted. A successful response indicates that the request is accepted or is an idempotent replay of a completed deletion, but does not indicate that all background steps are complete. Monitor the progress by checking the deleteStatus parameter of GetModelApi. Only a NotFound.ModelApi error explicitly indicates that the deletion is fully complete. The object is retained during deletion or upon failure. Shared model sources, model groups, models, services, consumers, and keys are not deleted.
       *
       * @param request DeleteModelApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelApiResponse
       */
      Models::DeleteModelApiResponse deleteModelApiWithOptions(const string &httpApiId, const Models::DeleteModelApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model API.
       *
       * @description Automatically stops the service and cleans up the resources owned by the API when a published new-version model API is deleted. A successful response indicates that the request is accepted or is an idempotent replay of a completed deletion, but does not indicate that all background steps are complete. Monitor the progress by checking the deleteStatus parameter of GetModelApi. Only a NotFound.ModelApi error explicitly indicates that the deletion is fully complete. The object is retained during deletion or upon failure. Shared model sources, model groups, models, services, consumers, and keys are not deleted.
       *
       * @param request DeleteModelApiRequest
       * @return DeleteModelApiResponse
       */
      Models::DeleteModelApiResponse deleteModelApi(const string &httpApiId, const Models::DeleteModelApiRequest &request);

      /**
       * @summary Deletes a model group.
       *
       * @param request DeleteModelGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelGroupResponse
       */
      Models::DeleteModelGroupResponse deleteModelGroupWithOptions(const string &modelGroupId, const Models::DeleteModelGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model group.
       *
       * @param request DeleteModelGroupRequest
       * @return DeleteModelGroupResponse
       */
      Models::DeleteModelGroupResponse deleteModelGroup(const string &modelGroupId, const Models::DeleteModelGroupRequest &request);

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
       * @summary Deletes a custom plugin class.
       *
       * @param request DeletePluginClassRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePluginClassResponse
       */
      Models::DeletePluginClassResponse deletePluginClassWithOptions(const string &pluginClassId, const Models::DeletePluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom plugin class.
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
       * @summary Deletes a specified HiMarket developer portal by portal ID.
       *
       * @param request DeletePortalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePortalResponse
       */
      Models::DeletePortalResponse deletePortalWithOptions(const string &portalId, const Models::DeletePortalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified HiMarket developer portal by portal ID.
       *
       * @param request DeletePortalRequest
       * @return DeletePortalResponse
       */
      Models::DeletePortalResponse deletePortal(const string &portalId, const Models::DeletePortalRequest &request);

      /**
       * @summary Deletes a specified API product by API product ID.
       *
       * @description Deletes an API product by product ID.
       *
       * @param request DeleteProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProductWithOptions(const string &productId, const Models::DeleteProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified API product by API product ID.
       *
       * @description Deletes an API product by product ID.
       *
       * @param request DeleteProductRequest
       * @return DeleteProductResponse
       */
      Models::DeleteProductResponse deleteProduct(const string &productId, const Models::DeleteProductRequest &request);

      /**
       * @summary Deletes a specified product category by its ID.
       *
       * @param request DeleteProductCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductCategoryResponse
       */
      Models::DeleteProductCategoryResponse deleteProductCategoryWithOptions(const string &categoryId, const Models::DeleteProductCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified product category by its ID.
       *
       * @param request DeleteProductCategoryRequest
       * @return DeleteProductCategoryResponse
       */
      Models::DeleteProductCategoryResponse deleteProductCategory(const string &categoryId, const Models::DeleteProductCategoryRequest &request);

      /**
       * @summary Dissociates an API product from an API by API product ID. The association is created by CreateProductRef on the same resource path and can be queried by GetProductRef.
       *
       * @param request DeleteProductRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteProductRefResponse
       */
      Models::DeleteProductRefResponse deleteProductRefWithOptions(const string &productId, const Models::DeleteProductRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates an API product from an API by API product ID. The association is created by CreateProductRef on the same resource path and can be queried by GetProductRef.
       *
       * @param request DeleteProductRefRequest
       * @return DeleteProductRefResponse
       */
      Models::DeleteProductRefResponse deleteProductRef(const string &productId, const Models::DeleteProductRefRequest &request);

      /**
       * @summary Deletes a secret value.
       *
       * @description This operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecretResponse
       */
      Models::DeleteSecretResponse deleteSecretWithOptions(const string &secretId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a secret value.
       *
       * @description This operation supports creating multiple services.
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
       * @summary Publishes an HTTP API, including routes in REST APIs and HTTP APIs.
       *
       * @description Before deployment, the following prerequisites must be met in order: (1) A gateway is created. (2) An HTTP API is created and associated with the gateway by using belongGatewayId. (3) A route is created and associated with an environment by using environmentId. (4) The route is associated with the default subdomain of the environment. Associating only a custom dedicated domain name is insufficient to trigger deployment. You must first call UpdateHttpApiRoute to add the default subdomain of the environment to the route.
       *
       * @param request DeployHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployHttpApiResponse
       */
      Models::DeployHttpApiResponse deployHttpApiWithOptions(const string &httpApiId, const Models::DeployHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an HTTP API, including routes in REST APIs and HTTP APIs.
       *
       * @description Before deployment, the following prerequisites must be met in order: (1) A gateway is created. (2) An HTTP API is created and associated with the gateway by using belongGatewayId. (3) A route is created and associated with an environment by using environmentId. (4) The route is associated with the default subdomain of the environment. Associating only a custom dedicated domain name is insufficient to trigger deployment. You must first call UpdateHttpApiRoute to add the default subdomain of the environment to the route.
       *
       * @param request DeployHttpApiRequest
       * @return DeployHttpApiResponse
       */
      Models::DeployHttpApiResponse deployHttpApi(const string &httpApiId, const Models::DeployHttpApiRequest &request);

      /**
       * @summary Publishes an MCP server.
       *
       * @description Before deployment, the MCP server must have domainIds configured through CreateMcpServer or UpdateMcpServer. Call GetMcpServer to verify the domain binding status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployMcpServerResponse
       */
      Models::DeployMcpServerResponse deployMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes an MCP server.
       *
       * @description Before deployment, the MCP server must have domainIds configured through CreateMcpServer or UpdateMcpServer. Call GetMcpServer to verify the domain binding status.
       *
       * @return DeployMcpServerResponse
       */
      Models::DeployMcpServerResponse deployMcpServer(const string &mcpServerId);

      /**
       * @summary Queries the regions where Cloud-native API Gateway is available for the current account.
       *
       * @param request DescribeRegionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where Cloud-native API Gateway is available for the current account.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Unmounts and deletes a policy.
       *
       * @param request DetachAndDeletePolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachAndDeletePolicyResponse
       */
      Models::DetachAndDeletePolicyResponse detachAndDeletePolicyWithOptions(const string &policyId, const Models::DetachAndDeletePolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmounts and deletes a policy.
       *
       * @param request DetachAndDeletePolicyRequest
       * @return DetachAndDeletePolicyResponse
       */
      Models::DetachAndDeletePolicyResponse detachAndDeletePolicy(const string &policyId, const Models::DetachAndDeletePolicyRequest &request);

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
       * @summary Queries the details of an AI model card.
       *
       * @param request GetAiModelCardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiModelCardResponse
       */
      Models::GetAiModelCardResponse getAiModelCardWithOptions(const string &modelCardId, const Models::GetAiModelCardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an AI model card.
       *
       * @param request GetAiModelCardRequest
       * @return GetAiModelCardResponse
       */
      Models::GetAiModelCardResponse getAiModelCard(const string &modelCardId, const Models::GetAiModelCardRequest &request);

      /**
       * @summary Queries the details of an AI model provider.
       *
       * @param request GetAiModelProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiModelProviderResponse
       */
      Models::GetAiModelProviderResponse getAiModelProviderWithOptions(const string &modelProviderId, const Models::GetAiModelProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an AI model provider.
       *
       * @param request GetAiModelProviderRequest
       * @return GetAiModelProviderResponse
       */
      Models::GetAiModelProviderResponse getAiModelProvider(const string &modelProviderId, const Models::GetAiModelProviderRequest &request);

      /**
       * @summary Queries a standalone AI model source.
       *
       * @param request GetAiModelSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiModelSourceResponse
       */
      Models::GetAiModelSourceResponse getAiModelSourceWithOptions(const string &modelSourceId, const Models::GetAiModelSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a standalone AI model source.
       *
       * @param request GetAiModelSourceRequest
       * @return GetAiModelSourceResponse
       */
      Models::GetAiModelSourceResponse getAiModelSource(const string &modelSourceId, const Models::GetAiModelSourceRequest &request);

      /**
       * @summary Queries the impact of editing an AI model source.
       *
       * @param request GetAiModelSourceEditImpactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiModelSourceEditImpactResponse
       */
      Models::GetAiModelSourceEditImpactResponse getAiModelSourceEditImpactWithOptions(const string &modelSourceId, const Models::GetAiModelSourceEditImpactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the impact of editing an AI model source.
       *
       * @param request GetAiModelSourceEditImpactRequest
       * @return GetAiModelSourceEditImpactResponse
       */
      Models::GetAiModelSourceEditImpactResponse getAiModelSourceEditImpact(const string &modelSourceId, const Models::GetAiModelSourceEditImpactRequest &request);

      /**
       * @summary Queries AI models in a model source.
       *
       * @param request GetAiModelSourceModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiModelSourceModelResponse
       */
      Models::GetAiModelSourceModelResponse getAiModelSourceModelWithOptions(const string &modelCardId, const Models::GetAiModelSourceModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AI models in a model source.
       *
       * @param request GetAiModelSourceModelRequest
       * @return GetAiModelSourceModelResponse
       */
      Models::GetAiModelSourceModelResponse getAiModelSourceModel(const string &modelCardId, const Models::GetAiModelSourceModelRequest &request);

      /**
       * @summary Queries the effective field collection configurations for each URI of the request of an HTTP API under a specified cloud-native API gateway, including the field source, JSONPath, collection status, switch permission, and template origin.
       *
       * @param request GetApiPathFieldConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiPathFieldConfigResponse
       */
      Models::GetApiPathFieldConfigResponse getApiPathFieldConfigWithOptions(const Models::GetApiPathFieldConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the effective field collection configurations for each URI of the request of an HTTP API under a specified cloud-native API gateway, including the field source, JSONPath, collection status, switch permission, and template origin.
       *
       * @param request GetApiPathFieldConfigRequest
       * @return GetApiPathFieldConfigResponse
       */
      Models::GetApiPathFieldConfigResponse getApiPathFieldConfig(const Models::GetApiPathFieldConfigRequest &request);

      /**
       * @summary Queries the field template corresponding to the API request path and returns the template name, applicable protocol, template description, and the set of fields defined by the template, including field keys, JSONPaths, value sources, and statistical categories.
       *
       * @param request GetApiPathFieldTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiPathFieldTemplateResponse
       */
      Models::GetApiPathFieldTemplateResponse getApiPathFieldTemplateWithOptions(const Models::GetApiPathFieldTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the field template corresponding to the API request path and returns the template name, applicable protocol, template description, and the set of fields defined by the template, including field keys, JSONPaths, value sources, and statistical categories.
       *
       * @param request GetApiPathFieldTemplateRequest
       * @return GetApiPathFieldTemplateResponse
       */
      Models::GetApiPathFieldTemplateResponse getApiPathFieldTemplate(const Models::GetApiPathFieldTemplateRequest &request);

      /**
       * @summary Queries batch export tasks.
       *
       * @param request GetBatchExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchExportTaskResponse
       */
      Models::GetBatchExportTaskResponse getBatchExportTaskWithOptions(const string &taskId, const Models::GetBatchExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries batch export tasks.
       *
       * @param request GetBatchExportTaskRequest
       * @return GetBatchExportTaskResponse
       */
      Models::GetBatchExportTaskResponse getBatchExportTask(const string &taskId, const Models::GetBatchExportTaskRequest &request);

      /**
       * @summary Queries batch import tasks. The task ID is returned after a batch import task is created by calling BatchImportHttpApis. Pass an empty string to list all existing batch import tasks.
       *
       * @param request GetBatchImportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBatchImportTaskResponse
       */
      Models::GetBatchImportTaskResponse getBatchImportTaskWithOptions(const string &taskId, const Models::GetBatchImportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries batch import tasks. The task ID is returned after a batch import task is created by calling BatchImportHttpApis. Pass an empty string to list all existing batch import tasks.
       *
       * @param request GetBatchImportTaskRequest
       * @return GetBatchImportTaskResponse
       */
      Models::GetBatchImportTaskResponse getBatchImportTask(const string &taskId, const Models::GetBatchImportTaskRequest &request);

      /**
       * @summary Retrieves a consumer.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerResponse
       */
      Models::GetConsumerResponse getConsumerWithOptions(const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a consumer.
       *
       * @return GetConsumerResponse
       */
      Models::GetConsumerResponse getConsumer(const string &consumerId);

      /**
       * @summary Queries the consumer access overview.
       *
       * @param request GetConsumerAccessOverviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerAccessOverviewResponse
       */
      Models::GetConsumerAccessOverviewResponse getConsumerAccessOverviewWithOptions(const string &consumerId, const Models::GetConsumerAccessOverviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the consumer access overview.
       *
       * @param request GetConsumerAccessOverviewRequest
       * @return GetConsumerAccessOverviewResponse
       */
      Models::GetConsumerAccessOverviewResponse getConsumerAccessOverview(const string &consumerId, const Models::GetConsumerAccessOverviewRequest &request);

      /**
       * @deprecated OpenAPI GetConsumerAuthorizationRule is deprecated
       *
       * @summary Retrieves consumer authorization rules.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerAuthorizationRuleResponse
       */
      Models::GetConsumerAuthorizationRuleResponse getConsumerAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const string &consumerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetConsumerAuthorizationRule is deprecated
       *
       * @summary Retrieves consumer authorization rules.
       *
       * @return GetConsumerAuthorizationRuleResponse
       */
      Models::GetConsumerAuthorizationRuleResponse getConsumerAuthorizationRule(const string &consumerAuthorizationRuleId, const string &consumerId);

      /**
       * @summary Queries a consumer group.
       *
       * @param request GetConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsumerGroupResponse
       */
      Models::GetConsumerGroupResponse getConsumerGroupWithOptions(const string &consumerGroupId, const Models::GetConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a consumer group.
       *
       * @param request GetConsumerGroupRequest
       * @return GetConsumerGroupResponse
       */
      Models::GetConsumerGroupResponse getConsumerGroup(const string &consumerGroupId, const Models::GetConsumerGroupRequest &request);

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
       * @summary Queries the account information of the currently logged-on developer and returns the developer ID, portal ID, username, and status.
       *
       * @description ## Before you begin and call sequence
       * This operation queries the account information of the currently logged-on developer. You must complete the following steps in order:
       * 1. Call CreatePortal to create a developer portal and obtain the portalId.
       * 2. Call CreateDeveloper to register a developer account under the portal.
       * 3. Call LoginDeveloper to log on to the developer account and obtain the accessToken.
       * 4. Call this operation with the accessToken obtained in the previous step.
       * Related operations: CreatePortal, CreateDeveloper, and LoginDeveloper.
       *
       * @param request GetDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDeveloperResponse
       */
      Models::GetDeveloperResponse getDeveloperWithOptions(const Models::GetDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account information of the currently logged-on developer and returns the developer ID, portal ID, username, and status.
       *
       * @description ## Before you begin and call sequence
       * This operation queries the account information of the currently logged-on developer. You must complete the following steps in order:
       * 1. Call CreatePortal to create a developer portal and obtain the portalId.
       * 2. Call CreateDeveloper to register a developer account under the portal.
       * 3. Call LoginDeveloper to log on to the developer account and obtain the accessToken.
       * 4. Call this operation with the accessToken obtained in the previous step.
       * Related operations: CreatePortal, CreateDeveloper, and LoginDeveloper.
       *
       * @param request GetDeveloperRequest
       * @return GetDeveloperResponse
       */
      Models::GetDeveloperResponse getDeveloper(const Models::GetDeveloperRequest &request);

      /**
       * @summary Queries the direct-supply models and candidate models for a specified gateway, including billing, capabilities, and available invocation paths.
       *
       * @param request GetDirectSupplyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectSupplyResponse
       */
      Models::GetDirectSupplyResponse getDirectSupplyWithOptions(const Models::GetDirectSupplyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the direct-supply models and candidate models for a specified gateway, including billing, capabilities, and available invocation paths.
       *
       * @param request GetDirectSupplyRequest
       * @return GetDirectSupplyResponse
       */
      Models::GetDirectSupplyResponse getDirectSupply(const Models::GetDirectSupplyRequest &request);

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
       * @summary Retrieves the basic information of a gateway, such as the associated VPC, vSwitch, and gateway ingress.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGatewayWithOptions(const string &gatewayId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information of a gateway, such as the associated VPC, vSwitch, and gateway ingress.
       *
       * @return GetGatewayResponse
       */
      Models::GetGatewayResponse getGateway(const string &gatewayId);

      /**
       * @summary Retrieves the dynamic forwarding ExtProc service bound to a gateway.
       *
       * @description Queries the dynamic forwarding ExtProc gRPC service and port currently bound to a specified gateway. If no service is bound, bound=false is returned.
       *
       * @param request GetGatewayDfpExtProcServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayDfpExtProcServiceResponse
       */
      Models::GetGatewayDfpExtProcServiceResponse getGatewayDfpExtProcServiceWithOptions(const string &gatewayId, const Models::GetGatewayDfpExtProcServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the dynamic forwarding ExtProc service bound to a gateway.
       *
       * @description Queries the dynamic forwarding ExtProc gRPC service and port currently bound to a specified gateway. If no service is bound, bound=false is returned.
       *
       * @param request GetGatewayDfpExtProcServiceRequest
       * @return GetGatewayDfpExtProcServiceResponse
       */
      Models::GetGatewayDfpExtProcServiceResponse getGatewayDfpExtProcService(const string &gatewayId, const Models::GetGatewayDfpExtProcServiceRequest &request);

      /**
       * @summary Retrieves the elastic rules of a gateway.
       *
       * @param request GetGatewayElasticPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayElasticPolicyResponse
       */
      Models::GetGatewayElasticPolicyResponse getGatewayElasticPolicyWithOptions(const string &gatewayId, const Models::GetGatewayElasticPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the elastic rules of a gateway.
       *
       * @param request GetGatewayElasticPolicyRequest
       * @return GetGatewayElasticPolicyResponse
       */
      Models::GetGatewayElasticPolicyResponse getGatewayElasticPolicy(const string &gatewayId, const Models::GetGatewayElasticPolicyRequest &request);

      /**
       * @summary Queries the details of a gateway quota throttling rule.
       *
       * @description Queries a specific consumer quota rule on an AI gateway.
       *
       * @param request GetGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayQuotaRuleResponse
       */
      Models::GetGatewayQuotaRuleResponse getGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::GetGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a gateway quota throttling rule.
       *
       * @description Queries a specific consumer quota rule on an AI gateway.
       *
       * @param request GetGatewayQuotaRuleRequest
       * @return GetGatewayQuotaRuleResponse
       */
      Models::GetGatewayQuotaRuleResponse getGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::GetGatewayQuotaRuleRequest &request);

      /**
       * @summary Queries the usage details of a subject under a gateway quota throttling rule, including the used quota, total quota, whether the limit is exceeded, usage details, and consumption records.
       *
       * @description This operation retrieves the usage details of a specific consumption subject under a quota rule. Note that this operation takes effect only for AI gateways of a version later than 2.1.19.
       * Before you begin: Make sure that the target gateway has enabled the Simple Log Service (SLS) log delivery feature by calling UpdateGatewayFeature(name=log-config, value={"enable":true}). Otherwise, the CloudProductInactive.LogDeliveryNotEnabled error is returned.
       *
       * @param request GetGatewayQuotaRuleSubjectUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayQuotaRuleSubjectUsageResponse
       */
      Models::GetGatewayQuotaRuleSubjectUsageResponse getGatewayQuotaRuleSubjectUsageWithOptions(const string &gatewayId, const string &ruleId, const string &subjectId, const Models::GetGatewayQuotaRuleSubjectUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage details of a subject under a gateway quota throttling rule, including the used quota, total quota, whether the limit is exceeded, usage details, and consumption records.
       *
       * @description This operation retrieves the usage details of a specific consumption subject under a quota rule. Note that this operation takes effect only for AI gateways of a version later than 2.1.19.
       * Before you begin: Make sure that the target gateway has enabled the Simple Log Service (SLS) log delivery feature by calling UpdateGatewayFeature(name=log-config, value={"enable":true}). Otherwise, the CloudProductInactive.LogDeliveryNotEnabled error is returned.
       *
       * @param request GetGatewayQuotaRuleSubjectUsageRequest
       * @return GetGatewayQuotaRuleSubjectUsageResponse
       */
      Models::GetGatewayQuotaRuleSubjectUsageResponse getGatewayQuotaRuleSubjectUsage(const string &gatewayId, const string &ruleId, const string &subjectId, const Models::GetGatewayQuotaRuleSubjectUsageRequest &request);

      /**
       * @summary Queries the status, processing progress, failure cause, and file download information of an export task for quota rule subject consumption details.
       *
       * @description ## Call flow
       * First, call CreateGatewayQuotaRuleSubjectUsageExportTask to create a task. Then, use the returned taskId along with the same gatewayId, ruleId, and subjectId to call this operation in the same region.
       * - Pending or Running: The task is not completed. You can query the task again after a period of time.
       * - Success: Check result.fileExpired and result.downloadUrl. If the file is not expired and a link is returned, you can download the file.
       * - Failed: Troubleshoot the issue based on errorMessage. To export the data again, call the create operation with a new clientToken.
       * ## Download link and file validity period
       * For each successful query where the file is not expired, a signed link with a validity period of 10 minutes is generated. Download the file promptly based on downloadUrlExpiredAt. If the link expires but the file has not reached fileExpiredAt, you can query the task again to obtain a new link. Querying the task again does not regenerate the file or extend the 24-hour validity period of the file.
       * After the file reaches fileExpiredAt, this operation no longer issues new links. It returns fileExpired=true and omits downloadUrl and downloadUrlExpiredAt. The task status remains Success. To export the data again, create a new task.
       * ## Query scope and task progress
       * This operation returns only the export tasks of the current user in the current region that match the gateway, rule, and subject paths. If the paths do not match or the task does not exist, a not found error is returned. Existing tasks are queried based on the information recorded at creation. The export conditions are not recalculated due to subsequent rule resets or subject name changes.
       * If a task remains in the Pending or Running state for more than 10 minutes after creation, the query treats it as a timeout failure. Determine whether the task is completed based on the status, not only on totalCount or processedCount.
       *
       * @param request GetGatewayQuotaRuleSubjectUsageExportTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayQuotaRuleSubjectUsageExportTaskResponse
       */
      Models::GetGatewayQuotaRuleSubjectUsageExportTaskResponse getGatewayQuotaRuleSubjectUsageExportTaskWithOptions(const string &gatewayId, const string &ruleId, const string &subjectId, const string &taskId, const Models::GetGatewayQuotaRuleSubjectUsageExportTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, processing progress, failure cause, and file download information of an export task for quota rule subject consumption details.
       *
       * @description ## Call flow
       * First, call CreateGatewayQuotaRuleSubjectUsageExportTask to create a task. Then, use the returned taskId along with the same gatewayId, ruleId, and subjectId to call this operation in the same region.
       * - Pending or Running: The task is not completed. You can query the task again after a period of time.
       * - Success: Check result.fileExpired and result.downloadUrl. If the file is not expired and a link is returned, you can download the file.
       * - Failed: Troubleshoot the issue based on errorMessage. To export the data again, call the create operation with a new clientToken.
       * ## Download link and file validity period
       * For each successful query where the file is not expired, a signed link with a validity period of 10 minutes is generated. Download the file promptly based on downloadUrlExpiredAt. If the link expires but the file has not reached fileExpiredAt, you can query the task again to obtain a new link. Querying the task again does not regenerate the file or extend the 24-hour validity period of the file.
       * After the file reaches fileExpiredAt, this operation no longer issues new links. It returns fileExpired=true and omits downloadUrl and downloadUrlExpiredAt. The task status remains Success. To export the data again, create a new task.
       * ## Query scope and task progress
       * This operation returns only the export tasks of the current user in the current region that match the gateway, rule, and subject paths. If the paths do not match or the task does not exist, a not found error is returned. Existing tasks are queried based on the information recorded at creation. The export conditions are not recalculated due to subsequent rule resets or subject name changes.
       * If a task remains in the Pending or Running state for more than 10 minutes after creation, the query treats it as a timeout failure. Determine whether the task is completed based on the status, not only on totalCount or processedCount.
       *
       * @param request GetGatewayQuotaRuleSubjectUsageExportTaskRequest
       * @return GetGatewayQuotaRuleSubjectUsageExportTaskResponse
       */
      Models::GetGatewayQuotaRuleSubjectUsageExportTaskResponse getGatewayQuotaRuleSubjectUsageExportTask(const string &gatewayId, const string &ruleId, const string &subjectId, const string &taskId, const Models::GetGatewayQuotaRuleSubjectUsageExportTaskRequest &request);

      /**
       * @summary Queries the resource quotas and usage of a gateway.
       *
       * @description Queries the usage, effective limits, and statistical scopes of nine resource quotas for a specified API gateway or AI gateway. This operation is read-only, and a successful response includes all nine items. Quota values for custom plug-ins are not displayed. The result is a current observation read independently from various sources and does not guarantee the success of adding new resources.
       *
       * @param request GetGatewayResourceQuotaUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayResourceQuotaUsageResponse
       */
      Models::GetGatewayResourceQuotaUsageResponse getGatewayResourceQuotaUsageWithOptions(const string &gatewayId, const Models::GetGatewayResourceQuotaUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource quotas and usage of a gateway.
       *
       * @description Queries the usage, effective limits, and statistical scopes of nine resource quotas for a specified API gateway or AI gateway. This operation is read-only, and a successful response includes all nine items. Quota values for custom plug-ins are not displayed. The result is a current observation read independently from various sources and does not guarantee the success of adding new resources.
       *
       * @param request GetGatewayResourceQuotaUsageRequest
       * @return GetGatewayResourceQuotaUsageResponse
       */
      Models::GetGatewayResourceQuotaUsageResponse getGatewayResourceQuotaUsage(const string &gatewayId, const Models::GetGatewayResourceQuotaUsageRequest &request);

      /**
       * @summary Retrieves the current cycle usage of the configured metering policy for a dedicated Professional AI gateway. Returns a specific error if cycle metering is not configured, and does not pad with zeros when no cycle data is available.
       *
       * @description Retrieves the current half-open cycle Redis summary for the configured metering policy of the current user\\"s dedicated Professional AI gateway. Only total instance counts are supported. Filters for time ranges, models, connections, or SLS destinations are not accepted. If data_present is false, it indicates that no cycle data is available, and the value is not padded with zeros.
       *
       * @param request GetGatewayWebsocketUsageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayWebsocketUsageResponse
       */
      Models::GetGatewayWebsocketUsageResponse getGatewayWebsocketUsageWithOptions(const string &gatewayId, const Models::GetGatewayWebsocketUsageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current cycle usage of the configured metering policy for a dedicated Professional AI gateway. Returns a specific error if cycle metering is not configured, and does not pad with zeros when no cycle data is available.
       *
       * @description Retrieves the current half-open cycle Redis summary for the configured metering policy of the current user\\"s dedicated Professional AI gateway. Only total instance counts are supported. Filters for time ranges, models, connections, or SLS destinations are not accepted. If data_present is false, it indicates that no cycle data is available, and the value is not padded with zeros.
       *
       * @param request GetGatewayWebsocketUsageRequest
       * @return GetGatewayWebsocketUsageResponse
       */
      Models::GetGatewayWebsocketUsageResponse getGatewayWebsocketUsage(const string &gatewayId, const Models::GetGatewayWebsocketUsageRequest &request);

      /**
       * @summary Queries the details of a single HiMarket consumer by consumer ID and returns the consumer ID, name, description, and whether the consumer is a primary consumer.
       *
       * @param request GetHiMarketConsumerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHiMarketConsumerResponse
       */
      Models::GetHiMarketConsumerResponse getHiMarketConsumerWithOptions(const string &consumerId, const Models::GetHiMarketConsumerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single HiMarket consumer by consumer ID and returns the consumer ID, name, description, and whether the consumer is a primary consumer.
       *
       * @param request GetHiMarketConsumerRequest
       * @return GetHiMarketConsumerResponse
       */
      Models::GetHiMarketConsumerResponse getHiMarketConsumer(const string &consumerId, const Models::GetHiMarketConsumerRequest &request);

      /**
       * @summary Queries the credential information of a HiMarket consumer by consumer ID. The response returns two types of containers: API key credential configuration and HMAC credential configuration. The credential members are defined by the common data structures HiMarketApiKeyConfig and HiMarketHmacConfig.
       *
       * @param request GetHiMarketConsumerCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHiMarketConsumerCredentialResponse
       */
      Models::GetHiMarketConsumerCredentialResponse getHiMarketConsumerCredentialWithOptions(const string &consumerId, const Models::GetHiMarketConsumerCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the credential information of a HiMarket consumer by consumer ID. The response returns two types of containers: API key credential configuration and HMAC credential configuration. The credential members are defined by the common data structures HiMarketApiKeyConfig and HiMarketHmacConfig.
       *
       * @param request GetHiMarketConsumerCredentialRequest
       * @return GetHiMarketConsumerCredentialResponse
       */
      Models::GetHiMarketConsumerCredentialResponse getHiMarketConsumerCredential(const string &consumerId, const Models::GetHiMarketConsumerCredentialRequest &request);

      /**
       * @summary Retrieves the HTTP API information.
       *
       * @param request GetHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiResponse
       */
      Models::GetHttpApiResponse getHttpApiWithOptions(const string &httpApiId, const Models::GetHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the HTTP API information.
       *
       * @param request GetHttpApiRequest
       * @return GetHttpApiResponse
       */
      Models::GetHttpApiResponse getHttpApi(const string &httpApiId, const Models::GetHttpApiRequest &request);

      /**
       * @summary Retrieves API operation information.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiOperationResponse
       */
      Models::GetHttpApiOperationResponse getHttpApiOperationWithOptions(const string &httpApiId, const string &operationId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves API operation information.
       *
       * @return GetHttpApiOperationResponse
       */
      Models::GetHttpApiOperationResponse getHttpApiOperation(const string &httpApiId, const string &operationId);

      /**
       * @summary Retrieves the details of a route for an HTTP API.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHttpApiRouteResponse
       */
      Models::GetHttpApiRouteResponse getHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a route for an HTTP API.
       *
       * @return GetHttpApiRouteResponse
       */
      Models::GetHttpApiRouteResponse getHttpApiRoute(const string &httpApiId, const string &routeId);

      /**
       * @summary Queries the details of a logical model.
       *
       * @param request GetLogicalModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogicalModelResponse
       */
      Models::GetLogicalModelResponse getLogicalModelWithOptions(const string &logicalModelId, const Models::GetLogicalModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a logical model.
       *
       * @param request GetLogicalModelRequest
       * @return GetLogicalModelResponse
       */
      Models::GetLogicalModelResponse getLogicalModel(const string &logicalModelId, const Models::GetLogicalModelRequest &request);

      /**
       * @summary Queries the configuration delivery of a logical model.
       *
       * @param request GetLogicalModelDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLogicalModelDeploymentResponse
       */
      Models::GetLogicalModelDeploymentResponse getLogicalModelDeploymentWithOptions(const string &operationId, const Models::GetLogicalModelDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration delivery of a logical model.
       *
       * @param request GetLogicalModelDeploymentRequest
       * @return GetLogicalModelDeploymentResponse
       */
      Models::GetLogicalModelDeploymentResponse getLogicalModelDeployment(const string &operationId, const Models::GetLogicalModelDeploymentRequest &request);

      /**
       * @summary Retrieves an MCP server.
       *
       * @description This operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServerWithOptions(const string &mcpServerId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an MCP server.
       *
       * @description This operation supports creating multiple services.
       *
       * @return GetMcpServerResponse
       */
      Models::GetMcpServerResponse getMcpServer(const string &mcpServerId);

      /**
       * @summary Retrieves the namespaced services for migration.
       *
       * @param request GetMigrationNamespacedServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationNamespacedServicesResponse
       */
      Models::GetMigrationNamespacedServicesResponse getMigrationNamespacedServicesWithOptions(const string &taskId, const Models::GetMigrationNamespacedServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the namespaced services for migration.
       *
       * @param request GetMigrationNamespacedServicesRequest
       * @return GetMigrationNamespacedServicesResponse
       */
      Models::GetMigrationNamespacedServicesResponse getMigrationNamespacedServices(const string &taskId, const Models::GetMigrationNamespacedServicesRequest &request);

      /**
       * @summary Retrieves a migration task.
       *
       * @param request GetMigrationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMigrationTaskResponse
       */
      Models::GetMigrationTaskResponse getMigrationTaskWithOptions(const string &taskId, const Models::GetMigrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a migration task.
       *
       * @param request GetMigrationTaskRequest
       * @return GetMigrationTaskResponse
       */
      Models::GetMigrationTaskResponse getMigrationTask(const string &taskId, const Models::GetMigrationTaskRequest &request);

      /**
       * @summary Queries the details of a model API.
       *
       * @description During deletion, check deleteStatus for Deleting or DeleteFailed, and review deployErrorMessage. The NotFound.ModelApi error is returned only after the target model API is completely deleted. Missing dependencies, permission issues, or storage errors do not indicate that the deletion is complete.
       *
       * @param request GetModelApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelApiResponse
       */
      Models::GetModelApiResponse getModelApiWithOptions(const string &httpApiId, const Models::GetModelApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a model API.
       *
       * @description During deletion, check deleteStatus for Deleting or DeleteFailed, and review deployErrorMessage. The NotFound.ModelApi error is returned only after the target model API is completely deleted. Missing dependencies, permission issues, or storage errors do not indicate that the deletion is complete.
       *
       * @param request GetModelApiRequest
       * @return GetModelApiResponse
       */
      Models::GetModelApiResponse getModelApi(const string &httpApiId, const Models::GetModelApiRequest &request);

      /**
       * @summary Queries the configuration, entitlement status, and the summary of the latest configuration deployment for a specified model group.
       *
       * @param request GetModelGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelGroupResponse
       */
      Models::GetModelGroupResponse getModelGroupWithOptions(const string &modelGroupId, const Models::GetModelGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration, entitlement status, and the summary of the latest configuration deployment for a specified model group.
       *
       * @param request GetModelGroupRequest
       * @return GetModelGroupResponse
       */
      Models::GetModelGroupResponse getModelGroup(const string &modelGroupId, const Models::GetModelGroupRequest &request);

      /**
       * @summary Queries the token throttling rules for a model.
       *
       * @param request GetModelTokenRateLimitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelTokenRateLimitResponse
       */
      Models::GetModelTokenRateLimitResponse getModelTokenRateLimitWithOptions(const string &gatewayId, const string &modelId, const Models::GetModelTokenRateLimitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token throttling rules for a model.
       *
       * @param request GetModelTokenRateLimitRequest
       * @return GetModelTokenRateLimitResponse
       */
      Models::GetModelTokenRateLimitResponse getModelTokenRateLimit(const string &gatewayId, const string &modelId, const Models::GetModelTokenRateLimitRequest &request);

      /**
       * @summary Queries a plugin attachment.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginAttachmentResponse
       */
      Models::GetPluginAttachmentResponse getPluginAttachmentWithOptions(const string &pluginAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a plugin attachment.
       *
       * @return GetPluginAttachmentResponse
       */
      Models::GetPluginAttachmentResponse getPluginAttachment(const string &pluginAttachmentId);

      /**
       * @summary Retrieves a custom plugin class.
       *
       * @param request GetPluginClassRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginClassResponse
       */
      Models::GetPluginClassResponse getPluginClassWithOptions(const string &pluginClassId, const Models::GetPluginClassRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a custom plugin class.
       *
       * @param request GetPluginClassRequest
       * @return GetPluginClassResponse
       */
      Models::GetPluginClassResponse getPluginClass(const string &pluginClassId, const Models::GetPluginClassRequest &request);

      /**
       * @summary Queries the plug-in WebIDE workspace.
       *
       * @param request GetPluginWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPluginWorkspaceResponse
       */
      Models::GetPluginWorkspaceResponse getPluginWorkspaceWithOptions(const string &workspaceId, const Models::GetPluginWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the plug-in WebIDE workspace.
       *
       * @param request GetPluginWorkspaceRequest
       * @return GetPluginWorkspaceResponse
       */
      Models::GetPluginWorkspaceResponse getPluginWorkspace(const string &workspaceId, const Models::GetPluginWorkspaceRequest &request);

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
       * @summary Queries policy resource attachments.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyAttachmentResponse
       */
      Models::GetPolicyAttachmentResponse getPolicyAttachmentWithOptions(const string &policyAttachmentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries policy resource attachments.
       *
       * @return GetPolicyAttachmentResponse
       */
      Models::GetPolicyAttachmentResponse getPolicyAttachment(const string &policyAttachmentId);

      /**
       * @summary Queries the details of a single HiMarket developer portal by portal ID and returns the portal name, description, region ID, portal configurations, and portal domain name configurations.
       *
       * @param request GetPortalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPortalResponse
       */
      Models::GetPortalResponse getPortalWithOptions(const string &portalId, const Models::GetPortalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single HiMarket developer portal by portal ID and returns the portal name, description, region ID, portal configurations, and portal domain name configurations.
       *
       * @param request GetPortalRequest
       * @return GetPortalResponse
       */
      Models::GetPortalResponse getPortal(const string &portalId, const Models::GetPortalRequest &request);

      /**
       * @summary Queries the details of a single API product by API product ID and returns information such as the name, description, status, type, documentation, icon, automatic subscription approval setting, MCP, agent, and model configurations, product capability configurations, and region.
       *
       * @param request GetProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductResponse
       */
      Models::GetProductResponse getProductWithOptions(const string &productId, const Models::GetProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single API product by API product ID and returns information such as the name, description, status, type, documentation, icon, automatic subscription approval setting, MCP, agent, and model configurations, product capability configurations, and region.
       *
       * @param request GetProductRequest
       * @return GetProductResponse
       */
      Models::GetProductResponse getProduct(const string &productId, const Models::GetProductRequest &request);

      /**
       * @summary Queries the details of a single product category by category ID and returns the ID, name, description, and icon of the category.
       *
       * @param request GetProductCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductCategoryResponse
       */
      Models::GetProductCategoryResponse getProductCategoryWithOptions(const string &categoryId, const Models::GetProductCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a single product category by category ID and returns the ID, name, description, and icon of the category.
       *
       * @param request GetProductCategoryRequest
       * @return GetProductCategoryResponse
       */
      Models::GetProductCategoryResponse getProductCategory(const string &categoryId, const Models::GetProductCategoryRequest &request);

      /**
       * @summary Queries the API configurations associated with an API product by product ID, and returns the gateway ID and APIG association configurations.
       *
       * @param request GetProductRefRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductRefResponse
       */
      Models::GetProductRefResponse getProductRefWithOptions(const string &productId, const Models::GetProductRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the API configurations associated with an API product by product ID, and returns the gateway ID and APIG association configurations.
       *
       * @param request GetProductRefRequest
       * @return GetProductRefResponse
       */
      Models::GetProductRefResponse getProductRef(const string &productId, const Models::GetProductRefRequest &request);

      /**
       * @summary Retrieves the resource overview information.
       *
       * @param request GetResourceOverviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceOverviewResponse
       */
      Models::GetResourceOverviewResponse getResourceOverviewWithOptions(const Models::GetResourceOverviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the resource overview information.
       *
       * @param request GetResourceOverviewRequest
       * @return GetResourceOverviewResponse
       */
      Models::GetResourceOverviewResponse getResourceOverview(const Models::GetResourceOverviewRequest &request);

      /**
       * @summary Retrieves the risk item notification configuration.
       *
       * @param request GetRiskNotificationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRiskNotificationResponse
       */
      Models::GetRiskNotificationResponse getRiskNotificationWithOptions(const string &gatewayId, const Models::GetRiskNotificationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the risk item notification configuration.
       *
       * @param request GetRiskNotificationRequest
       * @return GetRiskNotificationResponse
       */
      Models::GetRiskNotificationResponse getRiskNotification(const string &gatewayId, const Models::GetRiskNotificationRequest &request);

      /**
       * @summary Retrieves a secret.
       *
       * @description This operation supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretResponse
       */
      Models::GetSecretResponse getSecretWithOptions(const string &secretId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a secret.
       *
       * @description This operation supports creating multiple services.
       *
       * @return GetSecretResponse
       */
      Models::GetSecretResponse getSecret(const string &secretId);

      /**
       * @summary Retrieves the secret value.
       *
       * @description The API supports creating multiple services.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecretValueResponse
       */
      Models::GetSecretValueResponse getSecretValueWithOptions(const string &name, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the secret value.
       *
       * @description The API supports creating multiple services.
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
       * @summary Executes the callback step in the OIDC logon flow by submitting the code and state query parameters via the GET method. The response data includes the accessToken, tokenType, and expiresIn fields.
       *
       * @param request HandleOidcCallbackRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleOidcCallbackResponse
       */
      Models::HandleOidcCallbackResponse handleOidcCallbackWithOptions(const Models::HandleOidcCallbackRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes the callback step in the OIDC logon flow by submitting the code and state query parameters via the GET method. The response data includes the accessToken, tokenType, and expiresIn fields.
       *
       * @param request HandleOidcCallbackRequest
       * @return HandleOidcCallbackResponse
       */
      Models::HandleOidcCallbackResponse handleOidcCallback(const Models::HandleOidcCallbackRequest &request);

      /**
       * @summary Imports an HTTP API and supports importing OpenAPI 2.0 and OpenAPI 3.0.x definition files as REST APIs.
       *
       * @param request ImportHttpApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportHttpApiResponse
       */
      Models::ImportHttpApiResponse importHttpApiWithOptions(const Models::ImportHttpApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an HTTP API and supports importing OpenAPI 2.0 and OpenAPI 3.0.x definition files as REST APIs.
       *
       * @param request ImportHttpApiRequest
       * @return ImportHttpApiResponse
       */
      Models::ImportHttpApiResponse importHttpApi(const Models::ImportHttpApiRequest &request);

      /**
       * @summary Initiates the Authorize step in the OIDC logon process based on the OIDC provider identifier. The response body contains only the requestId, code, and message fields, and does not include the business output parameter data.
       *
       * @param request InitiateOidcAuthRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitiateOidcAuthResponse
       */
      Models::InitiateOidcAuthResponse initiateOidcAuthWithOptions(const Models::InitiateOidcAuthRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates the Authorize step in the OIDC logon process based on the OIDC provider identifier. The response body contains only the requestId, code, and message fields, and does not include the business output parameter data.
       *
       * @param request InitiateOidcAuthRequest
       * @return InitiateOidcAuthResponse
       */
      Models::InitiateOidcAuthResponse initiateOidcAuth(const Models::InitiateOidcAuthRequest &request);

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
       * @summary Invokes an AI agent.
       *
       * @param request InvokeAIAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAIAgentResponse
       */
      FutureGenerator<Models::InvokeAIAgentResponse> invokeAIAgentWithSSE(const Models::InvokeAIAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes an AI agent.
       *
       * @param request InvokeAIAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeAIAgentResponse
       */
      Models::InvokeAIAgentResponse invokeAIAgentWithOptions(const Models::InvokeAIAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes an AI agent.
       *
       * @param request InvokeAIAgentRequest
       * @return InvokeAIAgentResponse
       */
      Models::InvokeAIAgentResponse invokeAIAgent(const Models::InvokeAIAgentRequest &request);

      /**
       * @summary Queries the list of AI model cards.
       *
       * @param request ListAiModelCardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAiModelCardsResponse
       */
      Models::ListAiModelCardsResponse listAiModelCardsWithOptions(const Models::ListAiModelCardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI model cards.
       *
       * @param request ListAiModelCardsRequest
       * @return ListAiModelCardsResponse
       */
      Models::ListAiModelCardsResponse listAiModelCards(const Models::ListAiModelCardsRequest &request);

      /**
       * @summary Queries the list of AI model providers.
       *
       * @param request ListAiModelProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAiModelProvidersResponse
       */
      Models::ListAiModelProvidersResponse listAiModelProvidersWithOptions(const Models::ListAiModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AI model providers.
       *
       * @param request ListAiModelProvidersRequest
       * @return ListAiModelProvidersResponse
       */
      Models::ListAiModelProvidersResponse listAiModelProviders(const Models::ListAiModelProvidersRequest &request);

      /**
       * @summary Queries the AI models in a model source.
       *
       * @param request ListAiModelSourceModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAiModelSourceModelsResponse
       */
      Models::ListAiModelSourceModelsResponse listAiModelSourceModelsWithOptions(const Models::ListAiModelSourceModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AI models in a model source.
       *
       * @param request ListAiModelSourceModelsRequest
       * @return ListAiModelSourceModelsResponse
       */
      Models::ListAiModelSourceModelsResponse listAiModelSourceModels(const Models::ListAiModelSourceModelsRequest &request);

      /**
       * @summary Queries a list of standalone AI model sources.
       *
       * @param request ListAiModelSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAiModelSourcesResponse
       */
      Models::ListAiModelSourcesResponse listAiModelSourcesWithOptions(const Models::ListAiModelSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of standalone AI model sources.
       *
       * @param request ListAiModelSourcesRequest
       * @return ListAiModelSourcesResponse
       */
      Models::ListAiModelSourcesResponse listAiModelSources(const Models::ListAiModelSourcesRequest &request);

      /**
       * @summary Performs a paging query on the field template list and returns the template ID, API request path, and applicable protocol for each template record.
       *
       * @param request ListApiPathFieldTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiPathFieldTemplatesResponse
       */
      Models::ListApiPathFieldTemplatesResponse listApiPathFieldTemplatesWithOptions(const Models::ListApiPathFieldTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the field template list and returns the template ID, API request path, and applicable protocol for each template record.
       *
       * @param request ListApiPathFieldTemplatesRequest
       * @return ListApiPathFieldTemplatesResponse
       */
      Models::ListApiPathFieldTemplatesResponse listApiPathFieldTemplates(const Models::ListApiPathFieldTemplatesRequest &request);

      /**
       * @summary Queries the list of batch export tasks.
       *
       * @param request ListBatchExportTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBatchExportTasksResponse
       */
      Models::ListBatchExportTasksResponse listBatchExportTasksWithOptions(const Models::ListBatchExportTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of batch export tasks.
       *
       * @param request ListBatchExportTasksRequest
       * @return ListBatchExportTasksResponse
       */
      Models::ListBatchExportTasksResponse listBatchExportTasks(const Models::ListBatchExportTasksRequest &request);

      /**
       * @summary Queries the list of batch import tasks.
       *
       * @param request ListBatchImportTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBatchImportTasksResponse
       */
      Models::ListBatchImportTasksResponse listBatchImportTasksWithOptions(const Models::ListBatchImportTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of batch import tasks.
       *
       * @param request ListBatchImportTasksRequest
       * @return ListBatchImportTasksResponse
       */
      Models::ListBatchImportTasksResponse listBatchImportTasks(const Models::ListBatchImportTasksRequest &request);

      /**
       * @summary Performs a paged query on the HiMarket chat session list, returning the session ID, name, conversation type, and associated API products for each session. The response also returns the paging page number, paging size, and total count.
       *
       * @param request ListChatSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatSessionsResponse
       */
      Models::ListChatSessionsResponse listChatSessionsWithOptions(const Models::ListChatSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the HiMarket chat session list, returning the session ID, name, conversation type, and associated API products for each session. The response also returns the paging page number, paging size, and total count.
       *
       * @param request ListChatSessionsRequest
       * @return ListChatSessionsResponse
       */
      Models::ListChatSessionsResponse listChatSessions(const Models::ListChatSessionsRequest &request);

      /**
       * @deprecated OpenAPI ListConsumerAuthorizationRules is deprecated
       *
       * @summary Retrieves a list of consumer authorization rules.
       *
       * @param request ListConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerAuthorizationRulesResponse
       */
      Models::ListConsumerAuthorizationRulesResponse listConsumerAuthorizationRulesWithOptions(const string &consumerId, const Models::ListConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListConsumerAuthorizationRules is deprecated
       *
       * @summary Retrieves a list of consumer authorization rules.
       *
       * @param request ListConsumerAuthorizationRulesRequest
       * @return ListConsumerAuthorizationRulesResponse
       */
      Models::ListConsumerAuthorizationRulesResponse listConsumerAuthorizationRules(const string &consumerId, const Models::ListConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Queries the summary list of consumers in the console.
       *
       * @param request ListConsumerConsoleSummariesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerConsoleSummariesResponse
       */
      Models::ListConsumerConsoleSummariesResponse listConsumerConsoleSummariesWithOptions(const Models::ListConsumerConsoleSummariesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary list of consumers in the console.
       *
       * @param request ListConsumerConsoleSummariesRequest
       * @return ListConsumerConsoleSummariesResponse
       */
      Models::ListConsumerConsoleSummariesResponse listConsumerConsoleSummaries(const Models::ListConsumerConsoleSummariesRequest &request);

      /**
       * @summary Queries the members of a consumer group.
       *
       * @param request ListConsumerGroupConsumersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupConsumersResponse
       */
      Models::ListConsumerGroupConsumersResponse listConsumerGroupConsumersWithOptions(const string &consumerGroupId, const Models::ListConsumerGroupConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the members of a consumer group.
       *
       * @param request ListConsumerGroupConsumersRequest
       * @return ListConsumerGroupConsumersResponse
       */
      Models::ListConsumerGroupConsumersResponse listConsumerGroupConsumers(const string &consumerGroupId, const Models::ListConsumerGroupConsumersRequest &request);

      /**
       * @summary Queries the quota throttling rules for a consumer group.
       *
       * @description Queries the quota rules directly bound to a specified consumer group without expanding the rules bound to individual consumers within the group. Returns an empty list if no direct binding exists.
       *
       * @param request ListConsumerGroupQuotaRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupQuotaRulesResponse
       */
      Models::ListConsumerGroupQuotaRulesResponse listConsumerGroupQuotaRulesWithOptions(const string &consumerGroupId, const Models::ListConsumerGroupQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota throttling rules for a consumer group.
       *
       * @description Queries the quota rules directly bound to a specified consumer group without expanding the rules bound to individual consumers within the group. Returns an empty list if no direct binding exists.
       *
       * @param request ListConsumerGroupQuotaRulesRequest
       * @return ListConsumerGroupQuotaRulesResponse
       */
      Models::ListConsumerGroupQuotaRulesResponse listConsumerGroupQuotaRules(const string &consumerGroupId, const Models::ListConsumerGroupQuotaRulesRequest &request);

      /**
       * @summary Queries consumer groups.
       *
       * @param request ListConsumerGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerGroupsResponse
       */
      Models::ListConsumerGroupsResponse listConsumerGroupsWithOptions(const Models::ListConsumerGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries consumer groups.
       *
       * @param request ListConsumerGroupsRequest
       * @return ListConsumerGroupsResponse
       */
      Models::ListConsumerGroupsResponse listConsumerGroups(const Models::ListConsumerGroupsRequest &request);

      /**
       * @summary Queries the list of model card entitlements for consumers.
       *
       * @param request ListConsumerModelCardGrantsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerModelCardGrantsResponse
       */
      Models::ListConsumerModelCardGrantsResponse listConsumerModelCardGrantsWithOptions(const string &httpApiId, const Models::ListConsumerModelCardGrantsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of model card entitlements for consumers.
       *
       * @param request ListConsumerModelCardGrantsRequest
       * @return ListConsumerModelCardGrantsResponse
       */
      Models::ListConsumerModelCardGrantsResponse listConsumerModelCardGrants(const string &httpApiId, const Models::ListConsumerModelCardGrantsRequest &request);

      /**
       * @summary Queries the configured quota rules for a consumer.
       *
       * @param request ListConsumerQuotaRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsumerQuotaRulesResponse
       */
      Models::ListConsumerQuotaRulesResponse listConsumerQuotaRulesWithOptions(const string &consumerId, const Models::ListConsumerQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configured quota rules for a consumer.
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
       * @summary Queries the HiMarket developer list with paging. You can filter developers by portal ID, username, and developer status. The response includes the developer ID, portal ID, username, and status.
       *
       * @param request ListDevelopersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDevelopersResponse
       */
      Models::ListDevelopersResponse listDevelopersWithOptions(const Models::ListDevelopersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the HiMarket developer list with paging. You can filter developers by portal ID, username, and developer status. The response includes the developer ID, portal ID, username, and status.
       *
       * @param request ListDevelopersRequest
       * @return ListDevelopersResponse
       */
      Models::ListDevelopersResponse listDevelopers(const Models::ListDevelopersRequest &request);

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
       * @summary Queries the list of security groups that can be authorized for a gateway.
       *
       * @param request ListGatewayAuthorizableSecurityGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayAuthorizableSecurityGroupsResponse
       */
      Models::ListGatewayAuthorizableSecurityGroupsResponse listGatewayAuthorizableSecurityGroupsWithOptions(const string &gatewayId, const Models::ListGatewayAuthorizableSecurityGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of security groups that can be authorized for a gateway.
       *
       * @param request ListGatewayAuthorizableSecurityGroupsRequest
       * @return ListGatewayAuthorizableSecurityGroupsResponse
       */
      Models::ListGatewayAuthorizableSecurityGroupsResponse listGatewayAuthorizableSecurityGroups(const string &gatewayId, const Models::ListGatewayAuthorizableSecurityGroupsRequest &request);

      /**
       * @summary Queries the authorized security group rules for a gateway.
       *
       * @param request ListGatewayAuthorizedSecurityGroupRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayAuthorizedSecurityGroupRulesResponse
       */
      Models::ListGatewayAuthorizedSecurityGroupRulesResponse listGatewayAuthorizedSecurityGroupRulesWithOptions(const string &gatewayId, const Models::ListGatewayAuthorizedSecurityGroupRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorized security group rules for a gateway.
       *
       * @param request ListGatewayAuthorizedSecurityGroupRulesRequest
       * @return ListGatewayAuthorizedSecurityGroupRulesResponse
       */
      Models::ListGatewayAuthorizedSecurityGroupRulesResponse listGatewayAuthorizedSecurityGroupRules(const string &gatewayId, const Models::ListGatewayAuthorizedSecurityGroupRulesRequest &request);

      /**
       * @summary Lists gateway error access logs.
       *
       * @param request ListGatewayErrorAccessLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayErrorAccessLogsResponse
       */
      Models::ListGatewayErrorAccessLogsResponse listGatewayErrorAccessLogsWithOptions(const string &gatewayId, const Models::ListGatewayErrorAccessLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists gateway error access logs.
       *
       * @param request ListGatewayErrorAccessLogsRequest
       * @return ListGatewayErrorAccessLogsResponse
       */
      Models::ListGatewayErrorAccessLogsResponse listGatewayErrorAccessLogs(const string &gatewayId, const Models::ListGatewayErrorAccessLogsRequest &request);

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
       * @summary Queries the list of gateway load balancers.
       *
       * @param request ListGatewayLoadBalancersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayLoadBalancersResponse
       */
      Models::ListGatewayLoadBalancersResponse listGatewayLoadBalancersWithOptions(const string &gatewayId, const Models::ListGatewayLoadBalancersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of gateway load balancers.
       *
       * @param request ListGatewayLoadBalancersRequest
       * @return ListGatewayLoadBalancersResponse
       */
      Models::ListGatewayLoadBalancersResponse listGatewayLoadBalancers(const string &gatewayId, const Models::ListGatewayLoadBalancersRequest &request);

      /**
       * @summary Queries the FinOps quota rules associated with a gateway.
       *
       * @description Queries the FinOps quota rules associated with a gateway.
       *
       * @param request ListGatewayQuotaRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayQuotaRulesResponse
       */
      Models::ListGatewayQuotaRulesResponse listGatewayQuotaRulesWithOptions(const string &gatewayId, const Models::ListGatewayQuotaRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the FinOps quota rules associated with a gateway.
       *
       * @description Queries the FinOps quota rules associated with a gateway.
       *
       * @param request ListGatewayQuotaRulesRequest
       * @return ListGatewayQuotaRulesResponse
       */
      Models::ListGatewayQuotaRulesResponse listGatewayQuotaRules(const string &gatewayId, const Models::ListGatewayQuotaRulesRequest &request);

      /**
       * @summary Queries the historical WebSocket events delivered by a dedicated Professional AI gateway to the Simple Log Service (SLS) of the current user. Supports a time range of up to 31 days, conditional filtering, and cursor-based pagination. The results do not represent the online connection status.
       *
       * @description Retrieves the historical events delivered by the dedicated Professional AI gateway of the current user to Simple Log Service (SLS). Standard user log delivery and the corresponding indexes must be enabled. The query time range is a left-closed and right-open interval. The time span cannot exceed 31 days and cannot include future time. Uses maxResults and nextToken for cursor-based pagination. The results do not represent an online connection directory, and missing logs do not indicate that no calls occurred.
       *
       * @param request ListGatewayWebsocketEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayWebsocketEventsResponse
       */
      Models::ListGatewayWebsocketEventsResponse listGatewayWebsocketEventsWithOptions(const string &gatewayId, const Models::ListGatewayWebsocketEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical WebSocket events delivered by a dedicated Professional AI gateway to the Simple Log Service (SLS) of the current user. Supports a time range of up to 31 days, conditional filtering, and cursor-based pagination. The results do not represent the online connection status.
       *
       * @description Retrieves the historical events delivered by the dedicated Professional AI gateway of the current user to Simple Log Service (SLS). Standard user log delivery and the corresponding indexes must be enabled. The query time range is a left-closed and right-open interval. The time span cannot exceed 31 days and cannot include future time. Uses maxResults and nextToken for cursor-based pagination. The results do not represent an online connection directory, and missing logs do not indicate that no calls occurred.
       *
       * @param request ListGatewayWebsocketEventsRequest
       * @return ListGatewayWebsocketEventsResponse
       */
      Models::ListGatewayWebsocketEventsResponse listGatewayWebsocketEvents(const string &gatewayId, const Models::ListGatewayWebsocketEventsRequest &request);

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
       * @summary Retrieves global policies.
       *
       * @param request ListGlobalPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGlobalPoliciesResponse
       */
      Models::ListGlobalPoliciesResponse listGlobalPoliciesWithOptions(const Models::ListGlobalPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves global policies.
       *
       * @param request ListGlobalPoliciesRequest
       * @return ListGlobalPoliciesResponse
       */
      Models::ListGlobalPoliciesResponse listGlobalPolicies(const Models::ListGlobalPoliciesRequest &request);

      /**
       * @summary Performs a paged query to retrieve the API product subscriptions of a specified HiMarket consumer. You can filter the subscriptions by status and use paging to navigate through the results. Each subscription record includes the subscription ID, the ID, name, and type of the subscribed API product, the consumer ID and name, and the subscription status.
       *
       * @param request ListHiMarketConsumerSubscriptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHiMarketConsumerSubscriptionsResponse
       */
      Models::ListHiMarketConsumerSubscriptionsResponse listHiMarketConsumerSubscriptionsWithOptions(const string &consumerId, const Models::ListHiMarketConsumerSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to retrieve the API product subscriptions of a specified HiMarket consumer. You can filter the subscriptions by status and use paging to navigate through the results. Each subscription record includes the subscription ID, the ID, name, and type of the subscribed API product, the consumer ID and name, and the subscription status.
       *
       * @param request ListHiMarketConsumerSubscriptionsRequest
       * @return ListHiMarketConsumerSubscriptionsResponse
       */
      Models::ListHiMarketConsumerSubscriptionsResponse listHiMarketConsumerSubscriptions(const string &consumerId, const Models::ListHiMarketConsumerSubscriptionsRequest &request);

      /**
       * @summary Performs a paging query on the HiMarket consumer list. You can filter the results by consumer name keyword, portal ID, or developer ID. For each consumer, the response returns the consumer ID, name, description, and whether the consumer is a primary consumer.
       *
       * @param request ListHiMarketConsumersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHiMarketConsumersResponse
       */
      Models::ListHiMarketConsumersResponse listHiMarketConsumersWithOptions(const Models::ListHiMarketConsumersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the HiMarket consumer list. You can filter the results by consumer name keyword, portal ID, or developer ID. For each consumer, the response returns the consumer ID, name, description, and whether the consumer is a primary consumer.
       *
       * @param request ListHiMarketConsumersRequest
       * @return ListHiMarketConsumersResponse
       */
      Models::ListHiMarketConsumersResponse listHiMarketConsumers(const Models::ListHiMarketConsumersRequest &request);

      /**
       * @summary Retrieves the list of API operations.
       *
       * @param request ListHttpApiOperationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApiOperationsResponse
       */
      Models::ListHttpApiOperationsResponse listHttpApiOperationsWithOptions(const string &httpApiId, const Models::ListHttpApiOperationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of API operations.
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
       * @summary Retrieves the list of HTTP APIs.
       *
       * @param request ListHttpApisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHttpApisResponse
       */
      Models::ListHttpApisResponse listHttpApisWithOptions(const Models::ListHttpApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of HTTP APIs.
       *
       * @param request ListHttpApisRequest
       * @return ListHttpApisResponse
       */
      Models::ListHttpApisResponse listHttpApis(const Models::ListHttpApisRequest &request);

      /**
       * @summary Retrieves installable gateways.
       *
       * @param request ListInstallableGatewaysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstallableGatewaysResponse
       */
      Models::ListInstallableGatewaysResponse listInstallableGatewaysWithOptions(const string &pluginClassId, const Models::ListInstallableGatewaysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves installable gateways.
       *
       * @param request ListInstallableGatewaysRequest
       * @return ListInstallableGatewaysResponse
       */
      Models::ListInstallableGatewaysResponse listInstallableGateways(const string &pluginClassId, const Models::ListInstallableGatewaysRequest &request);

      /**
       * @summary Queries the list of clusters that can be added as Kubernetes sources.
       *
       * @param request ListK8sClusterSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListK8sClusterSourcesResponse
       */
      Models::ListK8sClusterSourcesResponse listK8sClusterSourcesWithOptions(const string &gatewayId, const Models::ListK8sClusterSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of clusters that can be added as Kubernetes sources.
       *
       * @param request ListK8sClusterSourcesRequest
       * @return ListK8sClusterSourcesResponse
       */
      Models::ListK8sClusterSourcesResponse listK8sClusterSources(const string &gatewayId, const Models::ListK8sClusterSourcesRequest &request);

      /**
       * @summary Queries the logical models under a specified gateway. Supports keyword filtering and token-based pagination with maxResults and nextToken.
       *
       * @param request ListLogicalModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLogicalModelsResponse
       */
      Models::ListLogicalModelsResponse listLogicalModelsWithOptions(const Models::ListLogicalModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logical models under a specified gateway. Supports keyword filtering and token-based pagination with maxResults and nextToken.
       *
       * @param request ListLogicalModelsRequest
       * @return ListLogicalModelsResponse
       */
      Models::ListLogicalModelsResponse listLogicalModels(const Models::ListLogicalModelsRequest &request);

      /**
       * @summary Queries the details of Model Context Protocol (MCP) tools in an MCP Server-type API product and returns a list of tools. Each tool contains three text fields (name, title, and description) and four map fields (inputSchema, outputSchema, annotations, and meta).
       *
       * @param request ListMcpProductToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpProductToolsResponse
       */
      Models::ListMcpProductToolsResponse listMcpProductToolsWithOptions(const string &productId, const Models::ListMcpProductToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of Model Context Protocol (MCP) tools in an MCP Server-type API product and returns a list of tools. Each tool contains three text fields (name, title, and description) and four map fields (inputSchema, outputSchema, annotations, and meta).
       *
       * @param request ListMcpProductToolsRequest
       * @return ListMcpProductToolsResponse
       */
      Models::ListMcpProductToolsResponse listMcpProductTools(const string &productId, const Models::ListMcpProductToolsRequest &request);

      /**
       * @summary Retrieves a list of MCP servers.
       *
       * @description This operation supports creating multiple services.
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
       * @description This operation supports creating multiple services.
       *
       * @param request ListMcpServersRequest
       * @return ListMcpServersResponse
       */
      Models::ListMcpServersResponse listMcpServers(const Models::ListMcpServersRequest &request);

      /**
       * @summary Lists migration tasks.
       *
       * @param request ListMigrationTasksRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMigrationTasksResponse
       */
      Models::ListMigrationTasksResponse listMigrationTasksWithOptions(const Models::ListMigrationTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists migration tasks.
       *
       * @param request ListMigrationTasksRequest
       * @return ListMigrationTasksResponse
       */
      Models::ListMigrationTasksResponse listMigrationTasks(const Models::ListMigrationTasksRequest &request);

      /**
       * @summary Queries the list of model APIs.
       *
       * @param request ListModelApisRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelApisResponse
       */
      Models::ListModelApisResponse listModelApisWithOptions(const Models::ListModelApisRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of model APIs.
       *
       * @param request ListModelApisRequest
       * @return ListModelApisResponse
       */
      Models::ListModelApisResponse listModelApis(const Models::ListModelApisRequest &request);

      /**
       * @summary Queries a list of model cards and returns the model name, provider, and source identifier for each card, along with its features, pricing, metadata, available paths, and snapshots. The only request parameter is the provider identifier.
       *
       * @param request ListModelCardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelCardsResponse
       */
      Models::ListModelCardsResponse listModelCardsWithOptions(const Models::ListModelCardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of model cards and returns the model name, provider, and source identifier for each card, along with its features, pricing, metadata, available paths, and snapshots. The only request parameter is the provider identifier.
       *
       * @param request ListModelCardsRequest
       * @return ListModelCardsResponse
       */
      Models::ListModelCardsResponse listModelCards(const Models::ListModelCardsRequest &request);

      /**
       * @summary Queries a list of model groups.
       *
       * @param request ListModelGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelGroupsResponse
       */
      Models::ListModelGroupsResponse listModelGroupsWithOptions(const Models::ListModelGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of model groups.
       *
       * @param request ListModelGroupsRequest
       * @return ListModelGroupsResponse
       */
      Models::ListModelGroupsResponse listModelGroups(const Models::ListModelGroupsRequest &request);

      /**
       * @summary Queries the list of instances that can be added as Nacos sources.
       *
       * @param request ListMseNacosSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMseNacosSourcesResponse
       */
      Models::ListMseNacosSourcesResponse listMseNacosSourcesWithOptions(const string &gatewayId, const Models::ListMseNacosSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of instances that can be added as Nacos sources.
       *
       * @param request ListMseNacosSourcesRequest
       * @return ListMseNacosSourcesResponse
       */
      Models::ListMseNacosSourcesResponse listMseNacosSources(const string &gatewayId, const Models::ListMseNacosSourcesRequest &request);

      /**
       * @summary Retrieves the list of plugin mounts.
       *
       * @param request ListPluginAttachmentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginAttachmentsResponse
       */
      Models::ListPluginAttachmentsResponse listPluginAttachmentsWithOptions(const Models::ListPluginAttachmentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of plugin mounts.
       *
       * @param request ListPluginAttachmentsRequest
       * @return ListPluginAttachmentsResponse
       */
      Models::ListPluginAttachmentsResponse listPluginAttachments(const Models::ListPluginAttachmentsRequest &request);

      /**
       * @summary Retrieves plugins.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request ListPluginClassesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginClassesResponse
       */
      Models::ListPluginClassesResponse listPluginClassesWithOptions(const Models::ListPluginClassesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves plugins.
       *
       * @description This operation supports creating multiple services.
       *
       * @param request ListPluginClassesRequest
       * @return ListPluginClassesResponse
       */
      Models::ListPluginClassesResponse listPluginClasses(const Models::ListPluginClassesRequest &request);

      /**
       * @summary Queries the list of repositories and organization information for custom plug-ins hosted on Codeup. Before calling this operation, enable code hosting, create an organization and a repository in Codeup, and authorize APIG to access your Codeup account.
       *
       * @param request ListPluginRepositoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginRepositoriesResponse
       */
      Models::ListPluginRepositoriesResponse listPluginRepositoriesWithOptions(const Models::ListPluginRepositoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of repositories and organization information for custom plug-ins hosted on Codeup. Before calling this operation, enable code hosting, create an organization and a repository in Codeup, and authorize APIG to access your Codeup account.
       *
       * @param request ListPluginRepositoriesRequest
       * @return ListPluginRepositoriesResponse
       */
      Models::ListPluginRepositoriesResponse listPluginRepositories(const Models::ListPluginRepositoriesRequest &request);

      /**
       * @summary Retrieves the list of WebIDE workspaces for user plugins.
       *
       * @param request ListPluginWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginWorkspaceResponse
       */
      Models::ListPluginWorkspaceResponse listPluginWorkspaceWithOptions(const Models::ListPluginWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of WebIDE workspaces for user plugins.
       *
       * @param request ListPluginWorkspaceRequest
       * @return ListPluginWorkspaceResponse
       */
      Models::ListPluginWorkspaceResponse listPluginWorkspace(const Models::ListPluginWorkspaceRequest &request);

      /**
       * @summary Retrieves a list of plug-ins.
       *
       * @param request ListPluginsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPluginsWithOptions(const Models::ListPluginsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of plug-ins.
       *
       * @param request ListPluginsRequest
       * @return ListPluginsResponse
       */
      Models::ListPluginsResponse listPlugins(const Models::ListPluginsRequest &request);

      /**
       * @summary Queries the list of policies.
       *
       * @param request ListPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of policies.
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
       * @summary Performs a paging query for the list of published API products on a specified HiMarket developer portal. Each list item returns the publication record ID, API product ID, API product name, and API product type.
       *
       * @param request ListPortalPublicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPortalPublicationsResponse
       */
      Models::ListPortalPublicationsResponse listPortalPublicationsWithOptions(const string &portalId, const Models::ListPortalPublicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query for the list of published API products on a specified HiMarket developer portal. Each list item returns the publication record ID, API product ID, API product name, and API product type.
       *
       * @param request ListPortalPublicationsRequest
       * @return ListPortalPublicationsResponse
       */
      Models::ListPortalPublicationsResponse listPortalPublications(const string &portalId, const Models::ListPortalPublicationsRequest &request);

      /**
       * @summary Performs a paging query on the list of HiMarket developer portals under the current tenant. Each list item returns the portal ID, portal name, portal description, region ID, portal settings, and portal domain name configurations.
       *
       * @param request ListPortalsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPortalsResponse
       */
      Models::ListPortalsResponse listPortalsWithOptions(const Models::ListPortalsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on the list of HiMarket developer portals under the current tenant. Each list item returns the portal ID, portal name, portal description, region ID, portal settings, and portal domain name configurations.
       *
       * @param request ListPortalsRequest
       * @return ListPortalsResponse
       */
      Models::ListPortalsResponse listPortals(const Models::ListPortalsRequest &request);

      /**
       * @summary Queries the unmanaged security groups available for private endpoints.
       *
       * @description The API supports creating multiple services.
       *
       * @param request ListPrivateLinkSecurityGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPrivateLinkSecurityGroupsResponse
       */
      Models::ListPrivateLinkSecurityGroupsResponse listPrivateLinkSecurityGroupsWithOptions(const Models::ListPrivateLinkSecurityGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the unmanaged security groups available for private endpoints.
       *
       * @description The API supports creating multiple services.
       *
       * @param request ListPrivateLinkSecurityGroupsRequest
       * @return ListPrivateLinkSecurityGroupsResponse
       */
      Models::ListPrivateLinkSecurityGroupsResponse listPrivateLinkSecurityGroups(const Models::ListPrivateLinkSecurityGroupsRequest &request);

      /**
       * @summary Performs a paged query on the list of product categories under the current tenant. The paging request supports searching by category name keywords. Each list item returns the category ID, name, description, and icon.
       *
       * @param request ListProductCategoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductCategoriesResponse
       */
      Models::ListProductCategoriesResponse listProductCategoriesWithOptions(const Models::ListProductCategoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the list of product categories under the current tenant. The paging request supports searching by category name keywords. Each list item returns the category ID, name, description, and icon.
       *
       * @param request ListProductCategoriesRequest
       * @return ListProductCategoriesResponse
       */
      Models::ListProductCategoriesResponse listProductCategories(const Models::ListProductCategoriesRequest &request);

      /**
       * @summary Performs a paged query on the publication information of a specified API product, which is the list of portal records to which the product has been published. The list items include the publication record ID, portal ID, portal name, API product ID, API product name, and API product type. You can also perform a parameter query by portal name and paging parameters.
       *
       * @param request ListProductPublicationsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductPublicationsResponse
       */
      Models::ListProductPublicationsResponse listProductPublicationsWithOptions(const string &productId, const Models::ListProductPublicationsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the publication information of a specified API product, which is the list of portal records to which the product has been published. The list items include the publication record ID, portal ID, portal name, API product ID, API product name, and API product type. You can also perform a parameter query by portal name and paging parameters.
       *
       * @param request ListProductPublicationsRequest
       * @return ListProductPublicationsResponse
       */
      Models::ListProductPublicationsResponse listProductPublications(const string &productId, const Models::ListProductPublicationsRequest &request);

      /**
       * @summary Queries the list of subscription records for a specified API product with paging. You can filter the records by subscription status or search by consumer name keywords. Each record includes the subscription ID, API product ID and name, API product type, consumer ID and name, and subscription status.
       *
       * @param request ListProductSubscriptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductSubscriptionsResponse
       */
      Models::ListProductSubscriptionsResponse listProductSubscriptionsWithOptions(const string &productId, const Models::ListProductSubscriptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of subscription records for a specified API product with paging. You can filter the records by subscription status or search by consumer name keywords. Each record includes the subscription ID, API product ID and name, API product type, consumer ID and name, and subscription status.
       *
       * @param request ListProductSubscriptionsRequest
       * @return ListProductSubscriptionsResponse
       */
      Models::ListProductSubscriptionsResponse listProductSubscriptions(const string &productId, const Models::ListProductSubscriptionsRequest &request);

      /**
       * @summary Queries the API products under the current tenant by using paging. You can specify the product name, type, status, category, and the portal where the product is published. The response includes the product ID, name, description, status, type, documentation, icon, product category, whether automatic approval of subscriptions is enabled, and the MCP, agent, model, and product capability configurations.
       *
       * @param request ListProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the API products under the current tenant by using paging. You can specify the product name, type, status, category, and the portal where the product is published. The response includes the product ID, name, description, status, type, documentation, icon, product category, whether automatic approval of subscriptions is enabled, and the MCP, agent, model, and product capability configurations.
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Performs a paged query on the list of API products that can be published to a specified HiMarket developer portal. You can specify the portal ID, API product name, and paging parameters in the request. The list items return the API product ID, API product name, and API product description.
       *
       * @param request ListPublishableProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPublishableProductsResponse
       */
      Models::ListPublishableProductsResponse listPublishableProductsWithOptions(const string &portalId, const Models::ListPublishableProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the list of API products that can be published to a specified HiMarket developer portal. You can specify the portal ID, API product name, and paging parameters in the request. The list items return the API product ID, API product name, and API product description.
       *
       * @param request ListPublishableProductsRequest
       * @return ListPublishableProductsResponse
       */
      Models::ListPublishableProductsResponse listPublishableProducts(const string &portalId, const Models::ListPublishableProductsRequest &request);

      /**
       * @summary Queries the risk detection results.
       *
       * @param request ListRiskCheckResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRiskCheckResultsResponse
       */
      Models::ListRiskCheckResultsResponse listRiskCheckResultsWithOptions(const string &gatewayId, const Models::ListRiskCheckResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the risk detection results.
       *
       * @param request ListRiskCheckResultsRequest
       * @return ListRiskCheckResultsResponse
       */
      Models::ListRiskCheckResultsResponse listRiskCheckResults(const string &gatewayId, const Models::ListRiskCheckResultsRequest &request);

      /**
       * @summary Lists secret references.
       *
       * @description The operation supports creating multiple services.
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
       * @description The operation supports creating multiple services.
       *
       * @param request ListSecretReferencesRequest
       * @return ListSecretReferencesResponse
       */
      Models::ListSecretReferencesResponse listSecretReferences(const string &secretId, const Models::ListSecretReferencesRequest &request);

      /**
       * @summary Lists secrets.
       *
       * @description The API operation supports creating multiple services.
       *
       * @param request ListSecretsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecretsResponse
       */
      Models::ListSecretsResponse listSecretsWithOptions(const Models::ListSecretsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists secrets.
       *
       * @description The API operation supports creating multiple services.
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
       * @summary Retrieves a list of sources.
       *
       * @param request ListSourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSourcesResponse
       */
      Models::ListSourcesResponse listSourcesWithOptions(const Models::ListSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of sources.
       *
       * @param request ListSourcesRequest
       * @return ListSourcesResponse
       */
      Models::ListSourcesResponse listSources(const Models::ListSourcesRequest &request);

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
       * @summary Lists the MCP servers to be synchronized.
       *
       * @param request ListSyncMCPServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSyncMCPServerResponse
       */
      Models::ListSyncMCPServerResponse listSyncMCPServerWithOptions(const Models::ListSyncMCPServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the MCP servers to be synchronized.
       *
       * @param request ListSyncMCPServerRequest
       * @return ListSyncMCPServerResponse
       */
      Models::ListSyncMCPServerResponse listSyncMCPServer(const Models::ListSyncMCPServerRequest &request);

      /**
       * @summary Retrieves a list of resource tags.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of resource tags.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Retrieves the zones available for a cloud-native API gateway in a specified region.
       *
       * @param request ListZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZonesWithOptions(const Models::ListZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the zones available for a cloud-native API gateway in a specified region.
       *
       * @param request ListZonesRequest
       * @return ListZonesResponse
       */
      Models::ListZonesResponse listZones(const Models::ListZonesRequest &request);

      /**
       * @summary Logs in to a HiMarket developer account by using a developer username and password, and returns the accessToken and expiresIn fields in the data object of a successful response.
       *
       * @param request LoginDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoginDeveloperResponse
       */
      Models::LoginDeveloperResponse loginDeveloperWithOptions(const Models::LoginDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logs in to a HiMarket developer account by using a developer username and password, and returns the accessToken and expiresIn fields in the data object of a successful response.
       *
       * @param request LoginDeveloperRequest
       * @return LoginDeveloperResponse
       */
      Models::LoginDeveloperResponse loginDeveloper(const Models::LoginDeveloperRequest &request);

      /**
       * @summary Logs out a developer from a HiMarket developer account. This operation does not require business request parameters. A successful response returns only the requestId, code, and message fields.
       *
       * @param request LogoutDeveloperRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return LogoutDeveloperResponse
       */
      Models::LogoutDeveloperResponse logoutDeveloperWithOptions(const Models::LogoutDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Logs out a developer from a HiMarket developer account. This operation does not require business request parameters. A successful response returns only the requestId, code, and message fields.
       *
       * @param request LogoutDeveloperRequest
       * @return LogoutDeveloperResponse
       */
      Models::LogoutDeveloperResponse logoutDeveloper(const Models::LogoutDeveloperRequest &request);

      /**
       * @summary Simulates the impact of logical model modifications.
       *
       * @param request PreviewLogicalModelUpdateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewLogicalModelUpdateResponse
       */
      Models::PreviewLogicalModelUpdateResponse previewLogicalModelUpdateWithOptions(const string &logicalModelId, const Models::PreviewLogicalModelUpdateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Simulates the impact of logical model modifications.
       *
       * @param request PreviewLogicalModelUpdateRequest
       * @return PreviewLogicalModelUpdateResponse
       */
      Models::PreviewLogicalModelUpdateResponse previewLogicalModelUpdate(const string &logicalModelId, const Models::PreviewLogicalModelUpdateRequest &request);

      /**
       * @summary Publishes a specified API product to a specified HiMarket portal. The path parameter specifies the API product ID, and the request body specifies the target portal ID. This operation returns the publication record ID for the publication. You can query the publication record by calling ListProductPublications and unpublish the product by calling UnpublishProduct at /himarket/v1/products/{productId}/publications/{publicationId}.
       *
       * @param request PublishProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishProductResponse
       */
      Models::PublishProductResponse publishProductWithOptions(const string &productId, const Models::PublishProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified API product to a specified HiMarket portal. The path parameter specifies the API product ID, and the request body specifies the target portal ID. This operation returns the publication record ID for the publication. You can query the publication record by calling ListProductPublications and unpublish the product by calling UnpublishProduct at /himarket/v1/products/{productId}/publications/{publicationId}.
       *
       * @param request PublishProductRequest
       * @return PublishProductResponse
       */
      Models::PublishProductResponse publishProduct(const string &productId, const Models::PublishProductRequest &request);

      /**
       * @summary Queries consumer authorization rules.
       *
       * @param request QueryConsumerAuthorizationRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConsumerAuthorizationRulesResponse
       */
      Models::QueryConsumerAuthorizationRulesResponse queryConsumerAuthorizationRulesWithOptions(const Models::QueryConsumerAuthorizationRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries consumer authorization rules.
       *
       * @param request QueryConsumerAuthorizationRulesRequest
       * @return QueryConsumerAuthorizationRulesResponse
       */
      Models::QueryConsumerAuthorizationRulesResponse queryConsumerAuthorizationRules(const Models::QueryConsumerAuthorizationRulesRequest &request);

      /**
       * @summary Refreshes the OAuth code for the plugin hosted repository.
       *
       * @param request RefreshPluginOAuthCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshPluginOAuthCodeResponse
       */
      Models::RefreshPluginOAuthCodeResponse refreshPluginOAuthCodeWithOptions(const Models::RefreshPluginOAuthCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the OAuth code for the plugin hosted repository.
       *
       * @param request RefreshPluginOAuthCodeRequest
       * @return RefreshPluginOAuthCodeResponse
       */
      Models::RefreshPluginOAuthCodeResponse refreshPluginOAuthCode(const Models::RefreshPluginOAuthCodeRequest &request);

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
       * @summary Resets a quota throttling rule on a gateway.
       *
       * @description This operation resets a quota throttling rule on a gateway. Note that this operation takes effect only on AI gateways of a version later than 2.1.21. The reset clears the historical usage of the consumption subjects associated with the rule.
       * > 
       * > Recommended call logic:
       * > - 1. Perform a dry run to check for rule conflicts.
       * > - - Set dryRun=true.
       * > - - The response returns a conflict preview that contains a conflictHash.
       * > - 2. Formally submit the request after confirmation.
       * > - - If no conflicts exist: Set dryRun=false and overwrite=false.
       * > - - If conflicts exist and you confirm to overwrite: Set dryRun=false, overwrite=true, and conflictHash=<the value returned in the previous step>.
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
       * @description This operation resets a quota throttling rule on a gateway. Note that this operation takes effect only on AI gateways of a version later than 2.1.21. The reset clears the historical usage of the consumption subjects associated with the rule.
       * > 
       * > Recommended call logic:
       * > - 1. Perform a dry run to check for rule conflicts.
       * > - - Set dryRun=true.
       * > - - The response returns a conflict preview that contains a conflictHash.
       * > - 2. Formally submit the request after confirmation.
       * > - - If no conflicts exist: Set dryRun=false and overwrite=false.
       * > - - If conflicts exist and you confirm to overwrite: Set dryRun=false, overwrite=true, and conflictHash=<the value returned in the previous step>.
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
       * @summary Retries the delivery of logical model configurations.
       *
       * @param request RetryLogicalModelDeploymentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryLogicalModelDeploymentResponse
       */
      Models::RetryLogicalModelDeploymentResponse retryLogicalModelDeploymentWithOptions(const string &operationId, const Models::RetryLogicalModelDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries the delivery of logical model configurations.
       *
       * @param request RetryLogicalModelDeploymentRequest
       * @return RetryLogicalModelDeploymentResponse
       */
      Models::RetryLogicalModelDeploymentResponse retryLogicalModelDeployment(const string &operationId, const Models::RetryLogicalModelDeploymentRequest &request);

      /**
       * @summary Queries the currently active credentials for an AI service.
       *
       * @description Queries the currently active credentials for an AI service.
       *
       * @param request RevealServiceCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevealServiceCredentialResponse
       */
      Models::RevealServiceCredentialResponse revealServiceCredentialWithOptions(const string &serviceId, const Models::RevealServiceCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the currently active credentials for an AI service.
       *
       * @description Queries the currently active credentials for an AI service.
       *
       * @param request RevealServiceCredentialRequest
       * @return RevealServiceCredentialResponse
       */
      Models::RevealServiceCredentialResponse revealServiceCredential(const string &serviceId, const Models::RevealServiceCredentialRequest &request);

      /**
       * @summary Revokes the model card entitlements for a consumer.
       *
       * @param request RevokeConsumerModelCardGrantsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeConsumerModelCardGrantsResponse
       */
      Models::RevokeConsumerModelCardGrantsResponse revokeConsumerModelCardGrantsWithOptions(const string &httpApiId, const Models::RevokeConsumerModelCardGrantsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the model card entitlements for a consumer.
       *
       * @param request RevokeConsumerModelCardGrantsRequest
       * @return RevokeConsumerModelCardGrantsResponse
       */
      Models::RevokeConsumerModelCardGrantsResponse revokeConsumerModelCardGrants(const string &httpApiId, const Models::RevokeConsumerModelCardGrantsRequest &request);

      /**
       * @summary Runs a pipeline in a plug-in workspace.
       *
       * @param request RunPluginPipelineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunPluginPipelineResponse
       */
      Models::RunPluginPipelineResponse runPluginPipelineWithOptions(const string &workspaceId, const Models::RunPluginPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a pipeline in a plug-in workspace.
       *
       * @param request RunPluginPipelineRequest
       * @return RunPluginPipelineResponse
       */
      Models::RunPluginPipelineResponse runPluginPipeline(const string &workspaceId, const Models::RunPluginPipelineRequest &request);

      /**
       * @summary Subscribes to an API product for a specified HiMarket consumer. The path parameter specifies the consumer ID, and the request body specifies the ID of the API product to subscribe to. The response includes the subscription ID, API product ID and name, API product type, consumer ID and name, and subscription status of the subscription record.
       *
       * @param request SubscribeProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubscribeProductResponse
       */
      Models::SubscribeProductResponse subscribeProductWithOptions(const string &consumerId, const Models::SubscribeProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Subscribes to an API product for a specified HiMarket consumer. The path parameter specifies the consumer ID, and the request body specifies the ID of the API product to subscribe to. The response includes the subscription ID, API product ID and name, API product type, consumer ID and name, and subscription status of the subscription record.
       *
       * @param request SubscribeProductRequest
       * @return SubscribeProductResponse
       */
      Models::SubscribeProductResponse subscribeProduct(const string &consumerId, const Models::SubscribeProductRequest &request);

      /**
       * @summary Syncs MCP servers from an external Nacos registry to a gateway.
       *
       * @description ## Before you begin
       * Before you call this operation, complete the following preparations:
       * 1. Create a Nacos instance in Microservices Engine (MSE) and register an MCP server in the instance.
       * 2. Call CreateSource to register a service source for the target gateway. Set the type parameter to MSE_NACOS and point it to the Nacos instance.
       * 3. Call ListGateways to obtain the system default domain name ID (subDomainInfos[].domainId) of the gateway for the domainIds parameter.
       * After you complete the preceding steps, pass the gatewayId, domainIds, and namespace parameters to call this operation. This syncs the MCP servers in the specified namespace to the gateway.
       *
       * @param request SyncMCPServersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncMCPServersResponse
       */
      Models::SyncMCPServersResponse syncMCPServersWithOptions(const Models::SyncMCPServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Syncs MCP servers from an external Nacos registry to a gateway.
       *
       * @description ## Before you begin
       * Before you call this operation, complete the following preparations:
       * 1. Create a Nacos instance in Microservices Engine (MSE) and register an MCP server in the instance.
       * 2. Call CreateSource to register a service source for the target gateway. Set the type parameter to MSE_NACOS and point it to the Nacos instance.
       * 3. Call ListGateways to obtain the system default domain name ID (subDomainInfos[].domainId) of the gateway for the domainIds parameter.
       * After you complete the preceding steps, pass the gatewayId, domainIds, and namespace parameters to call this operation. This syncs the MCP servers in the specified namespace to the gateway.
       *
       * @param request SyncMCPServersRequest
       * @return SyncMCPServersResponse
       */
      Models::SyncMCPServersResponse syncMCPServers(const Models::SyncMCPServersRequest &request);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
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
       * @summary Unpublishes a publication record of an API product based on the API product ID and publication record ID. Both identifiers are parameters in the /himarket/v1/products/{productId}/publications/{publicationId} path. The publication record is generated by PublishProduct and can be queried by ListProductPublications. This operation only affects the publication record and does not delete the API product itself. To delete a product, use DeleteProduct. The response returns only the requestId, code, and message.
       *
       * @param request UnpublishProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnpublishProductResponse
       */
      Models::UnpublishProductResponse unpublishProductWithOptions(const string &productId, const string &publicationId, const Models::UnpublishProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublishes a publication record of an API product based on the API product ID and publication record ID. Both identifiers are parameters in the /himarket/v1/products/{productId}/publications/{publicationId} path. The publication record is generated by PublishProduct and can be queried by ListProductPublications. This operation only affects the publication record and does not delete the API product itself. To delete a product, use DeleteProduct. The response returns only the requestId, code, and message.
       *
       * @param request UnpublishProductRequest
       * @return UnpublishProductResponse
       */
      Models::UnpublishProductResponse unpublishProduct(const string &productId, const string &publicationId, const Models::UnpublishProductRequest &request);

      /**
       * @summary Removes resource tags.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes resource tags.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates an AI model card.
       *
       * @param request UpdateAiModelCardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiModelCardResponse
       */
      Models::UpdateAiModelCardResponse updateAiModelCardWithOptions(const string &modelCardId, const Models::UpdateAiModelCardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an AI model card.
       *
       * @param request UpdateAiModelCardRequest
       * @return UpdateAiModelCardResponse
       */
      Models::UpdateAiModelCardResponse updateAiModelCard(const string &modelCardId, const Models::UpdateAiModelCardRequest &request);

      /**
       * @summary Updates an AI model provider.
       *
       * @param request UpdateAiModelProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiModelProviderResponse
       */
      Models::UpdateAiModelProviderResponse updateAiModelProviderWithOptions(const string &modelProviderId, const Models::UpdateAiModelProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an AI model provider.
       *
       * @param request UpdateAiModelProviderRequest
       * @return UpdateAiModelProviderResponse
       */
      Models::UpdateAiModelProviderResponse updateAiModelProvider(const string &modelProviderId, const Models::UpdateAiModelProviderRequest &request);

      /**
       * @summary Updates a standalone AI model source.
       *
       * @param request UpdateAiModelSourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiModelSourceResponse
       */
      Models::UpdateAiModelSourceResponse updateAiModelSourceWithOptions(const string &modelSourceId, const Models::UpdateAiModelSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a standalone AI model source.
       *
       * @param request UpdateAiModelSourceRequest
       * @return UpdateAiModelSourceResponse
       */
      Models::UpdateAiModelSourceResponse updateAiModelSource(const string &modelSourceId, const Models::UpdateAiModelSourceRequest &request);

      /**
       * @summary Updates an AI model in a source.
       *
       * @param request UpdateAiModelSourceModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiModelSourceModelResponse
       */
      Models::UpdateAiModelSourceModelResponse updateAiModelSourceModelWithOptions(const string &modelCardId, const Models::UpdateAiModelSourceModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an AI model in a source.
       *
       * @param request UpdateAiModelSourceModelRequest
       * @return UpdateAiModelSourceModelResponse
       */
      Models::UpdateAiModelSourceModelResponse updateAiModelSourceModel(const string &modelCardId, const Models::UpdateAiModelSourceModelRequest &request);

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
       * @summary Updates an authorization rule.
       *
       * @param request UpdateAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleResponse
       */
      Models::UpdateAuthorizationRuleResponse updateAuthorizationRuleWithOptions(const string &consumerAuthorizationRuleId, const Models::UpdateAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an authorization rule.
       *
       * @param request UpdateAuthorizationRuleRequest
       * @return UpdateAuthorizationRuleResponse
       */
      Models::UpdateAuthorizationRuleResponse updateAuthorizationRule(const string &consumerAuthorizationRuleId, const Models::UpdateAuthorizationRuleRequest &request);

      /**
       * @summary Adds or removes API products in batches under a specified product category. The path parameter specifies the category ID, the action in the request body specifies the operation direction, and productIds specifies the list of API product IDs to process. The response returns only the requestId, code, and message, without item-level processing results.
       *
       * @param request UpdateCategoryProductsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCategoryProductsResponse
       */
      Models::UpdateCategoryProductsResponse updateCategoryProductsWithOptions(const string &categoryId, const Models::UpdateCategoryProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or removes API products in batches under a specified product category. The path parameter specifies the category ID, the action in the request body specifies the operation direction, and productIds specifies the list of API product IDs to process. The response returns only the requestId, code, and message, without item-level processing results.
       *
       * @param request UpdateCategoryProductsRequest
       * @return UpdateCategoryProductsResponse
       */
      Models::UpdateCategoryProductsResponse updateCategoryProducts(const string &categoryId, const Models::UpdateCategoryProductsRequest &request);

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
       * @deprecated OpenAPI UpdateConsumerAuthorizationRule is deprecated
       *
       * @summary Updates a consumer authorization rule.
       *
       * @description This API operation has been replaced by UpdateAuthorizationRule. The new API path is /v1/authorization-rules/{consumerAuthorizationRuleId}. When you call the new API operation, you only need to provide consumerAuthorizationRuleId in the path and the resources array in the request body. The consumerId parameter is no longer required.
       *
       * @param request UpdateConsumerAuthorizationRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerAuthorizationRuleResponse
       */
      Models::UpdateConsumerAuthorizationRuleResponse updateConsumerAuthorizationRuleWithOptions(const string &consumerId, const string &consumerAuthorizationRuleId, const Models::UpdateConsumerAuthorizationRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI UpdateConsumerAuthorizationRule is deprecated
       *
       * @summary Updates a consumer authorization rule.
       *
       * @description This API operation has been replaced by UpdateAuthorizationRule. The new API path is /v1/authorization-rules/{consumerAuthorizationRuleId}. When you call the new API operation, you only need to provide consumerAuthorizationRuleId in the path and the resources array in the request body. The consumerId parameter is no longer required.
       *
       * @param request UpdateConsumerAuthorizationRuleRequest
       * @return UpdateConsumerAuthorizationRuleResponse
       */
      Models::UpdateConsumerAuthorizationRuleResponse updateConsumerAuthorizationRule(const string &consumerId, const string &consumerAuthorizationRuleId, const Models::UpdateConsumerAuthorizationRuleRequest &request);

      /**
       * @summary Updates a consumer group.
       *
       * @param request UpdateConsumerGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConsumerGroupResponse
       */
      Models::UpdateConsumerGroupResponse updateConsumerGroupWithOptions(const string &consumerGroupId, const Models::UpdateConsumerGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a consumer group.
       *
       * @param request UpdateConsumerGroupRequest
       * @return UpdateConsumerGroupResponse
       */
      Models::UpdateConsumerGroupResponse updateConsumerGroup(const string &consumerGroupId, const Models::UpdateConsumerGroupRequest &request);

      /**
       * @summary Updates the status of a HiMarket developer by developer ID. The request body specifies the target status and portal ID. A successful response returns only the requestId, code, and message, and does not return the updated developer information.
       *
       * @param request UpdateDeveloperStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeveloperStatusResponse
       */
      Models::UpdateDeveloperStatusResponse updateDeveloperStatusWithOptions(const string &developerId, const Models::UpdateDeveloperStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a HiMarket developer by developer ID. The request body specifies the target status and portal ID. A successful response returns only the requestId, code, and message, and does not return the updated developer information.
       *
       * @param request UpdateDeveloperStatusRequest
       * @return UpdateDeveloperStatusResponse
       */
      Models::UpdateDeveloperStatusResponse updateDeveloperStatus(const string &developerId, const Models::UpdateDeveloperStatusRequest &request);

      /**
       * @summary Updates a domain name.
       *
       * @description Only sources of the **container service** type are allowed to update the listener Ingress configurations.
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
       * @description Only sources of the **container service** type are allowed to update the listener Ingress configurations.
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
       * @summary Updates the elastic policy of a gateway.
       *
       * @param request UpdateGatewayElasticPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayElasticPolicyResponse
       */
      Models::UpdateGatewayElasticPolicyResponse updateGatewayElasticPolicyWithOptions(const string &gatewayId, const Models::UpdateGatewayElasticPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the elastic policy of a gateway.
       *
       * @param request UpdateGatewayElasticPolicyRequest
       * @return UpdateGatewayElasticPolicyResponse
       */
      Models::UpdateGatewayElasticPolicyResponse updateGatewayElasticPolicy(const string &gatewayId, const Models::UpdateGatewayElasticPolicyRequest &request);

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
       * @summary Updates a gateway load balancer.
       *
       * @param request UpdateGatewayLoadBalancerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayLoadBalancerResponse
       */
      Models::UpdateGatewayLoadBalancerResponse updateGatewayLoadBalancerWithOptions(const string &gatewayId, const Models::UpdateGatewayLoadBalancerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a gateway load balancer.
       *
       * @param request UpdateGatewayLoadBalancerRequest
       * @return UpdateGatewayLoadBalancerResponse
       */
      Models::UpdateGatewayLoadBalancerResponse updateGatewayLoadBalancer(const string &gatewayId, const Models::UpdateGatewayLoadBalancerRequest &request);

      /**
       * @summary Updates the O&M window of a gateway.
       *
       * @description Updates the O&M time window of a gateway. This feature is supported only by specific gateway types. If the current gateway does not support modifying the O&M time window, the API returns 409 Conflict.GatewayNotSupportAutoMaintenance.
       *
       * @param request UpdateGatewayMaintenancePeriodRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayMaintenancePeriodResponse
       */
      Models::UpdateGatewayMaintenancePeriodResponse updateGatewayMaintenancePeriodWithOptions(const string &gatewayId, const Models::UpdateGatewayMaintenancePeriodRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the O&M window of a gateway.
       *
       * @description Updates the O&M time window of a gateway. This feature is supported only by specific gateway types. If the current gateway does not support modifying the O&M time window, the API returns 409 Conflict.GatewayNotSupportAutoMaintenance.
       *
       * @param request UpdateGatewayMaintenancePeriodRequest
       * @return UpdateGatewayMaintenancePeriodResponse
       */
      Models::UpdateGatewayMaintenancePeriodResponse updateGatewayMaintenancePeriod(const string &gatewayId, const Models::UpdateGatewayMaintenancePeriodRequest &request);

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
       * @summary Updates a quota throttling rule on a gateway.
       *
       * @description This operation updates a quota rule on a gateway. Note that this operation takes effect only on AI gateways of versions later than 2.1.21. The update retains the historical usage of the consumers associated with the rule.
       * > Recommended call logic:
       * > - 1. Perform a dry run to check for rule conflicts.
       * > - - Set dryRun=true.
       * > - - The response returns a conflict preview containing a conflictHash.
       * > - 2. Formally submit the request after confirmation.
       * > - - No conflicts: Set dryRun=false and overwrite=false.
       * > - - Conflicts exist and you confirm to overwrite: Set dryRun=false, overwrite=true, and conflictHash=<the value returned in the previous step>.
       *
       * @param request UpdateGatewayQuotaRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayQuotaRuleResponse
       */
      Models::UpdateGatewayQuotaRuleResponse updateGatewayQuotaRuleWithOptions(const string &gatewayId, const string &ruleId, const Models::UpdateGatewayQuotaRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a quota throttling rule on a gateway.
       *
       * @description This operation updates a quota rule on a gateway. Note that this operation takes effect only on AI gateways of versions later than 2.1.21. The update retains the historical usage of the consumers associated with the rule.
       * > Recommended call logic:
       * > - 1. Perform a dry run to check for rule conflicts.
       * > - - Set dryRun=true.
       * > - - The response returns a conflict preview containing a conflictHash.
       * > - 2. Formally submit the request after confirmation.
       * > - - No conflicts: Set dryRun=false and overwrite=false.
       * > - - Conflicts exist and you confirm to overwrite: Set dryRun=false, overwrite=true, and conflictHash=<the value returned in the previous step>.
       *
       * @param request UpdateGatewayQuotaRuleRequest
       * @return UpdateGatewayQuotaRuleResponse
       */
      Models::UpdateGatewayQuotaRuleResponse updateGatewayQuotaRule(const string &gatewayId, const string &ruleId, const Models::UpdateGatewayQuotaRuleRequest &request);

      /**
       * @summary Enables or disables a quota throttling rule for a gateway.
       *
       * @description This operation enables or disables a quota rule on a gateway. Note that this operation takes effect only for AI gateways of a version later than 2.1.21.
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
       * @description This operation enables or disables a quota rule on a gateway. Note that this operation takes effect only for AI gateways of a version later than 2.1.21.
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
       * @summary Updates a route of an HTTP API.
       *
       * @param request UpdateHttpApiRouteRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateHttpApiRouteResponse
       */
      Models::UpdateHttpApiRouteResponse updateHttpApiRouteWithOptions(const string &httpApiId, const string &routeId, const Models::UpdateHttpApiRouteRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a route of an HTTP API.
       *
       * @param request UpdateHttpApiRouteRequest
       * @return UpdateHttpApiRouteResponse
       */
      Models::UpdateHttpApiRouteResponse updateHttpApiRoute(const string &httpApiId, const string &routeId, const Models::UpdateHttpApiRouteRequest &request);

      /**
       * @summary Modifies a logical model.
       *
       * @param request UpdateLogicalModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogicalModelResponse
       */
      Models::UpdateLogicalModelResponse updateLogicalModelWithOptions(const string &logicalModelId, const Models::UpdateLogicalModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a logical model.
       *
       * @param request UpdateLogicalModelRequest
       * @return UpdateLogicalModelResponse
       */
      Models::UpdateLogicalModelResponse updateLogicalModel(const string &logicalModelId, const Models::UpdateLogicalModelRequest &request);

      /**
       * @summary Updates an MCP server.
       *
       * @description Only sources of the **container service** type are allowed to update the configurations of Ingress listeners.
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
       * @description Only sources of the **container service** type are allowed to update the configurations of Ingress listeners.
       *
       * @param request UpdateMcpServerRequest
       * @return UpdateMcpServerResponse
       */
      Models::UpdateMcpServerResponse updateMcpServer(const string &mcpServerId, const Models::UpdateMcpServerRequest &request);

      /**
       * @summary Updates a migration task.
       *
       * @param request UpdateMigrationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMigrationTaskResponse
       */
      Models::UpdateMigrationTaskResponse updateMigrationTaskWithOptions(const string &taskId, const Models::UpdateMigrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a migration task.
       *
       * @param request UpdateMigrationTaskRequest
       * @return UpdateMigrationTaskResponse
       */
      Models::UpdateMigrationTaskResponse updateMigrationTask(const string &taskId, const Models::UpdateMigrationTaskRequest &request);

      /**
       * @summary Updates a model API.
       *
       * @param request UpdateModelApiRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelApiResponse
       */
      Models::UpdateModelApiResponse updateModelApiWithOptions(const string &httpApiId, const Models::UpdateModelApiRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model API.
       *
       * @param request UpdateModelApiRequest
       * @return UpdateModelApiResponse
       */
      Models::UpdateModelApiResponse updateModelApi(const string &httpApiId, const Models::UpdateModelApiRequest &request);

      /**
       * @summary Updates a model group.
       *
       * @param request UpdateModelGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelGroupResponse
       */
      Models::UpdateModelGroupResponse updateModelGroupWithOptions(const string &modelGroupId, const Models::UpdateModelGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model group.
       *
       * @param request UpdateModelGroupRequest
       * @return UpdateModelGroupResponse
       */
      Models::UpdateModelGroupResponse updateModelGroup(const string &modelGroupId, const Models::UpdateModelGroupRequest &request);

      /**
       * @summary Modifies the token throttling rules for a model.
       *
       * @param request UpdateModelTokenRateLimitRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelTokenRateLimitResponse
       */
      Models::UpdateModelTokenRateLimitResponse updateModelTokenRateLimitWithOptions(const string &gatewayId, const string &modelId, const Models::UpdateModelTokenRateLimitRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the token throttling rules for a model.
       *
       * @param request UpdateModelTokenRateLimitRequest
       * @return UpdateModelTokenRateLimitResponse
       */
      Models::UpdateModelTokenRateLimitResponse updateModelTokenRateLimit(const string &gatewayId, const string &modelId, const Models::UpdateModelTokenRateLimitRequest &request);

      /**
       * @summary Modifies the network access type of a gateway.
       *
       * @param request UpdateNetworkAccessRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkAccessResponse
       */
      Models::UpdateNetworkAccessResponse updateNetworkAccessWithOptions(const string &gatewayId, const Models::UpdateNetworkAccessRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network access type of a gateway.
       *
       * @param request UpdateNetworkAccessRequest
       * @return UpdateNetworkAccessResponse
       */
      Models::UpdateNetworkAccessResponse updateNetworkAccess(const string &gatewayId, const Models::UpdateNetworkAccessRequest &request);

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
       * @summary Updates the name, description, and portal configurations of a HiMarket developer portal by portal ID. The request body is in JSON format. A successful response returns the ID of the updated portal.
       *
       * @param request UpdatePortalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePortalResponse
       */
      Models::UpdatePortalResponse updatePortalWithOptions(const string &portalId, const Models::UpdatePortalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, and portal configurations of a HiMarket developer portal by portal ID. The request body is in JSON format. A successful response returns the ID of the updated portal.
       *
       * @param request UpdatePortalRequest
       * @return UpdatePortalResponse
       */
      Models::UpdatePortalResponse updatePortal(const string &portalId, const Models::UpdatePortalRequest &request);

      /**
       * @summary Updates the name, description, type, documentation, icon, automatic subscription approval, product category, and product capabilities of an API product by API product ID. The request body is in JSON format. A successful response returns only the requestId, code, and message, and does not return the updated product information.
       *
       * @param request UpdateProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProductWithOptions(const string &productId, const Models::UpdateProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, type, documentation, icon, automatic subscription approval, product category, and product capabilities of an API product by API product ID. The request body is in JSON format. A successful response returns only the requestId, code, and message, and does not return the updated product information.
       *
       * @param request UpdateProductRequest
       * @return UpdateProductResponse
       */
      Models::UpdateProductResponse updateProduct(const string &productId, const Models::UpdateProductRequest &request);

      /**
       * @summary Updates the name, description, and icon of a product category by its ID. The request body is in JSON format, and the response returns only the request ID, response status code, and response message.
       *
       * @param request UpdateProductCategoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateProductCategoryResponse
       */
      Models::UpdateProductCategoryResponse updateProductCategoryWithOptions(const string &categoryId, const Models::UpdateProductCategoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name, description, and icon of a product category by its ID. The request body is in JSON format, and the response returns only the request ID, response status code, and response message.
       *
       * @param request UpdateProductCategoryRequest
       * @return UpdateProductCategoryResponse
       */
      Models::UpdateProductCategoryResponse updateProductCategory(const string &categoryId, const Models::UpdateProductCategoryRequest &request);

      /**
       * @summary Updates the notification configuration for risk items.
       *
       * @param request UpdateRiskNotificationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRiskNotificationResponse
       */
      Models::UpdateRiskNotificationResponse updateRiskNotificationWithOptions(const string &gatewayId, const Models::UpdateRiskNotificationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the notification configuration for risk items.
       *
       * @param request UpdateRiskNotificationRequest
       * @return UpdateRiskNotificationResponse
       */
      Models::UpdateRiskNotificationResponse updateRiskNotification(const string &gatewayId, const Models::UpdateRiskNotificationRequest &request);

      /**
       * @summary Updates a secret.
       *
       * @description Updates a secret. Only sources of the **Container Service** type are allowed to update Ingress listener configurations.
       *
       * @param request UpdateSecretRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecretWithOptions(const string &secretId, const Models::UpdateSecretRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a secret.
       *
       * @description Updates a secret. Only sources of the **Container Service** type are allowed to update Ingress listener configurations.
       *
       * @param request UpdateSecretRequest
       * @return UpdateSecretResponse
       */
      Models::UpdateSecretResponse updateSecret(const string &secretId, const Models::UpdateSecretRequest &request);

      /**
       * @summary Updates a service. Supports updating the health check configuration, DNS domain names, and static address configurations of the service.
       *
       * @param request UpdateServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceResponse
       */
      Models::UpdateServiceResponse updateServiceWithOptions(const string &serviceId, const Models::UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a service. Supports updating the health check configuration, DNS domain names, and static address configurations of the service.
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

      /**
       * @summary Validates a migration task.
       *
       * @param request VerifyMigrationTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyMigrationTaskResponse
       */
      Models::VerifyMigrationTaskResponse verifyMigrationTaskWithOptions(const string &taskId, const Models::VerifyMigrationTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates a migration task.
       *
       * @param request VerifyMigrationTaskRequest
       * @return VerifyMigrationTaskResponse
       */
      Models::VerifyMigrationTaskResponse verifyMigrationTask(const string &taskId, const Models::VerifyMigrationTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
