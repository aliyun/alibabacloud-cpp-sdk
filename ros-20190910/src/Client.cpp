#include <darabonba/Core.hpp>
#include <alibabacloud/ROS20190910.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::ROS20190910::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ROS20190910
{

AlibabaCloud::ROS20190910::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("ros", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Cancels operations on a stack.
 *
 * @param request CancelStackOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelStackOperationResponse
 */
CancelStackOperationResponse Client::cancelStackOperationWithOptions(const CancelStackOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowedStackOperations()) {
    query["AllowedStackOperations"] = request.allowedStackOperations();
  }

  if (!!request.hasCancelType()) {
    query["CancelType"] = request.cancelType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelStackOperation"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelStackOperationResponse>();
}

/**
 * @summary Cancels operations on a stack.
 *
 * @param request CancelStackOperationRequest
 * @return CancelStackOperationResponse
 */
CancelStackOperationResponse Client::cancelStackOperation(const CancelStackOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelStackOperationWithOptions(request, runtime);
}

/**
 * @summary Cancels an update operation on a stack. You can call this operation to cancel an update operation on a stack when the stack is being updated or created.
 *
 * @param request CancelUpdateStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelUpdateStackResponse
 */
CancelUpdateStackResponse Client::cancelUpdateStackWithOptions(const CancelUpdateStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCancelType()) {
    query["CancelType"] = request.cancelType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelUpdateStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelUpdateStackResponse>();
}

/**
 * @summary Cancels an update operation on a stack. You can call this operation to cancel an update operation on a stack when the stack is being updated or created.
 *
 * @param request CancelUpdateStackRequest
 * @return CancelUpdateStackResponse
 */
CancelUpdateStackResponse Client::cancelUpdateStack(const CancelUpdateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelUpdateStackWithOptions(request, runtime);
}

/**
 * @summary Continues to create a stack after the stack fails to be created.
 *
 * @description This topic provides an example on how to continue to create a stack after the stack fails to be created. In this example, the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is created in the China (Hangzhou) region.
 *
 * @param request ContinueCreateStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueCreateStackResponse
 */
ContinueCreateStackResponse Client::continueCreateStackWithOptions(const ContinueCreateStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.parallelism();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.ramRoleName();
  }

  if (!!request.hasRecreatingOptions()) {
    query["RecreatingOptions"] = request.recreatingOptions();
  }

  if (!!request.hasRecreatingResources()) {
    query["RecreatingResources"] = request.recreatingResources();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateBody()) {
    query["TemplateBody"] = request.templateBody();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ContinueCreateStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinueCreateStackResponse>();
}

/**
 * @summary Continues to create a stack after the stack fails to be created.
 *
 * @description This topic provides an example on how to continue to create a stack after the stack fails to be created. In this example, the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is created in the China (Hangzhou) region.
 *
 * @param request ContinueCreateStackRequest
 * @return ContinueCreateStackResponse
 */
ContinueCreateStackResponse Client::continueCreateStack(const ContinueCreateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return continueCreateStackWithOptions(request, runtime);
}

/**
 * @summary Create AI Task
 *
 * @description This API allows users to create an AI task based on the specified task type, covering a range of capabilities from natural language understanding to resource stack deployment. Users need to provide the task type and any required parameters, and the API will return a unique TaskId for tracking the status and results of the task.
 *
 * @param request CreateAITaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAITaskResponse
 */
CreateAITaskResponse Client::createAITaskWithOptions(const CreateAITaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPrompt()) {
    query["Prompt"] = request.prompt();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  json body = {};
  if (!!request.hasTemplate()) {
    body["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAITask"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAITaskResponse>();
}

/**
 * @summary Create AI Task
 *
 * @description This API allows users to create an AI task based on the specified task type, covering a range of capabilities from natural language understanding to resource stack deployment. Users need to provide the task type and any required parameters, and the API will return a unique TaskId for tracking the status and results of the task.
 *
 * @param request CreateAITaskRequest
 * @return CreateAITaskResponse
 */
CreateAITaskResponse Client::createAITask(const CreateAITaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAITaskWithOptions(request, runtime);
}

/**
 * @summary Creates a change set for a stack. You can view proposed changes before you execute the change set.
 *
 * @description ### [](#)Scenarios
 * #### [](#)Use a change set to create a stack
 * If you want to manage a large number of cloud resources and preview the creation effect of the resources before a stack that contains the resources is created, you can create the stack by using a change set. In this case, you must set `ChangeSetType` to CREATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
 * #### [](#)Use a change set to update a stack
 * If you want to preview the impacts of changes to an existing stack before you update the stack resources, you can create a change set for the stack. In this case, you must set ChangeSetType to UPDATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
 * #### [](#)Use a change set and existing resources to create a stack
 * If you want to add existing cloud resources to a new stack for centralized management, you can use a change set to create a stack and import the resources to the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
 * #### [](#)Use a change set and existing resources to update a stack
 * If you want to import existing resources to an existing stack for centralized management, you can use a change set to update the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
 * ### [](#)Limits
 * *   You can use change sets to update only stacks that are in specific states. For more information, see [Use a change set to update a stack](https://help.aliyun.com/document_detail/155873.html).
 * *   A stack can have up to 20 change sets.
 * *   Change sets reflect only the changes to stacks. Change sets do not reflect whether stacks can be successfully updated.
 * *   A change set does not check if you exceed an account limit, if you update resources that cannot be updated, or if you have insufficient permissions to modify resources, all of which can cause a stack update to fail. If a stack update fails, Resource Orchestration Service (ROS) attempts to roll back your resources to their original status.
 * This topic provides an example on how to use a change set to update a stack. In this example, a change set named `MyChangeSet` is created in the `China (Hangzhou)` region. The template of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is updated to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
 *
 * @param request CreateChangeSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChangeSetResponse
 */
CreateChangeSetResponse Client::createChangeSetWithOptions(const CreateChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetName()) {
    query["ChangeSetName"] = request.changeSetName();
  }

  if (!!request.hasChangeSetType()) {
    query["ChangeSetType"] = request.changeSetType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisableRollback()) {
    query["DisableRollback"] = request.disableRollback();
  }

  if (!!request.hasNotificationURLs()) {
    query["NotificationURLs"] = request.notificationURLs();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.parallelism();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.ramRoleName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplacementOption()) {
    query["ReplacementOption"] = request.replacementOption();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourcesToImport()) {
    query["ResourcesToImport"] = request.resourcesToImport();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStackName()) {
    query["StackName"] = request.stackName();
  }

  if (!!request.hasStackPolicyBody()) {
    query["StackPolicyBody"] = request.stackPolicyBody();
  }

  if (!!request.hasStackPolicyDuringUpdateBody()) {
    query["StackPolicyDuringUpdateBody"] = request.stackPolicyDuringUpdateBody();
  }

  if (!!request.hasStackPolicyDuringUpdateURL()) {
    query["StackPolicyDuringUpdateURL"] = request.stackPolicyDuringUpdateURL();
  }

  if (!!request.hasStackPolicyURL()) {
    query["StackPolicyURL"] = request.stackPolicyURL();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTaintResources()) {
    query["TaintResources"] = request.taintResources();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  if (!!request.hasTimeoutInMinutes()) {
    query["TimeoutInMinutes"] = request.timeoutInMinutes();
  }

  if (!!request.hasUsePreviousParameters()) {
    query["UsePreviousParameters"] = request.usePreviousParameters();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChangeSet"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChangeSetResponse>();
}

/**
 * @summary Creates a change set for a stack. You can view proposed changes before you execute the change set.
 *
 * @description ### [](#)Scenarios
 * #### [](#)Use a change set to create a stack
 * If you want to manage a large number of cloud resources and preview the creation effect of the resources before a stack that contains the resources is created, you can create the stack by using a change set. In this case, you must set `ChangeSetType` to CREATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
 * #### [](#)Use a change set to update a stack
 * If you want to preview the impacts of changes to an existing stack before you update the stack resources, you can create a change set for the stack. In this case, you must set ChangeSetType to UPDATE and configure the relevant parameters. For more information about change sets, see [Change set](https://help.aliyun.com/document_detail/155649.html).
 * #### [](#)Use a change set and existing resources to create a stack
 * If you want to add existing cloud resources to a new stack for centralized management, you can use a change set to create a stack and import the resources to the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
 * #### [](#)Use a change set and existing resources to update a stack
 * If you want to import existing resources to an existing stack for centralized management, you can use a change set to update the stack. In this case, you must set ChangeSetType to IMPORT and configure the relevant parameters. For more information about the resource import feature, see [Overview](https://help.aliyun.com/document_detail/193454.html).
 * ### [](#)Limits
 * *   You can use change sets to update only stacks that are in specific states. For more information, see [Use a change set to update a stack](https://help.aliyun.com/document_detail/155873.html).
 * *   A stack can have up to 20 change sets.
 * *   Change sets reflect only the changes to stacks. Change sets do not reflect whether stacks can be successfully updated.
 * *   A change set does not check if you exceed an account limit, if you update resources that cannot be updated, or if you have insufficient permissions to modify resources, all of which can cause a stack update to fail. If a stack update fails, Resource Orchestration Service (ROS) attempts to roll back your resources to their original status.
 * This topic provides an example on how to use a change set to update a stack. In this example, a change set named `MyChangeSet` is created in the `China (Hangzhou)` region. The template of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is updated to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
 *
 * @param request CreateChangeSetRequest
 * @return CreateChangeSetResponse
 */
CreateChangeSetResponse Client::createChangeSet(const CreateChangeSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChangeSetWithOptions(request, runtime);
}

/**
 * @summary Creates a dignosis task.
 *
 * @param request CreateDiagnosticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDiagnosticResponse
 */
CreateDiagnosticResponse Client::createDiagnosticWithOptions(const CreateDiagnosticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiagnosticKey()) {
    query["DiagnosticKey"] = request.diagnosticKey();
  }

  if (!!request.hasDiagnosticType()) {
    query["DiagnosticType"] = request.diagnosticType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDiagnostic"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDiagnosticResponse>();
}

/**
 * @summary Creates a dignosis task.
 *
 * @param request CreateDiagnosticRequest
 * @return CreateDiagnosticResponse
 */
CreateDiagnosticResponse Client::createDiagnostic(const CreateDiagnosticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDiagnosticWithOptions(request, runtime);
}

/**
 * @summary Creates a stack that contains a collection of resources by using a Resource Orchestration Service (ROS) template.
 *
 * @description A stack is a collection of ROS resources that you can manage as a single unit. To create a collection of resources, you can create a stack. For more information about stacks, see [Overview](https://help.aliyun.com/document_detail/172973.html).\\
 * When you call the operation, take note of the following limits:
 * *   You can create up to 200 stacks within an Alibaba Cloud account.
 * *   You can create up to 200 resources in a stack.
 * This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template. In this example, `TemplateBody` is set to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
 *
 * @param request CreateStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStackResponse
 */
CreateStackResponse Client::createStackWithOptions(const CreateStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCreateOption()) {
    query["CreateOption"] = request.createOption();
  }

  if (!!request.hasCreateOptions()) {
    query["CreateOptions"] = request.createOptions();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.deletionProtection();
  }

  if (!!request.hasDisableRollback()) {
    query["DisableRollback"] = request.disableRollback();
  }

  if (!!request.hasNotificationURLs()) {
    query["NotificationURLs"] = request.notificationURLs();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.parallelism();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.ramRoleName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStackName()) {
    query["StackName"] = request.stackName();
  }

  if (!!request.hasStackPolicyBody()) {
    query["StackPolicyBody"] = request.stackPolicyBody();
  }

  if (!!request.hasStackPolicyURL()) {
    query["StackPolicyURL"] = request.stackPolicyURL();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  if (!!request.hasTemplateScratchRegionId()) {
    query["TemplateScratchRegionId"] = request.templateScratchRegionId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  if (!!request.hasTimeoutInMinutes()) {
    query["TimeoutInMinutes"] = request.timeoutInMinutes();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStackResponse>();
}

/**
 * @summary Creates a stack that contains a collection of resources by using a Resource Orchestration Service (ROS) template.
 *
 * @description A stack is a collection of ROS resources that you can manage as a single unit. To create a collection of resources, you can create a stack. For more information about stacks, see [Overview](https://help.aliyun.com/document_detail/172973.html).\\
 * When you call the operation, take note of the following limits:
 * *   You can create up to 200 stacks within an Alibaba Cloud account.
 * *   You can create up to 200 resources in a stack.
 * This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template. In this example, `TemplateBody` is set to `{"ROSTemplateFormatVersion":"2015-09-01"}`.
 *
 * @param request CreateStackRequest
 * @return CreateStackResponse
 */
CreateStackResponse Client::createStack(const CreateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStackWithOptions(request, runtime);
}

/**
 * @summary Creates stack groups based on Resource Orchestration Service (ROS) templates. Stack groups allow you to create stacks within multiple Alibaba Cloud accounts across regions.
 *
 * @description A stack group is a collection of ROS stacks that you can manage as a unit. You can use an ROS template of a stack group to create stacks within Alibaba Cloud accounts across regions.
 * You can create a stack group that is granted self-managed or service-managed permissions:
 * *   If you use an Alibaba Cloud account to create a self-managed stack group, the administrator account and the execution account are Alibaba Cloud accounts.
 * *   If you enable a resource directory and use the management account or a delegated administrator account of the resource directory to create a service-managed stack group, the administrator account is the management account or delegated administrator account, and the execution account is a member account of the resource directory.
 * For more information about stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
 * In this topic, a stack group named `MyStackGroup` is created in the `China (Hangzhou)` region and granted the self-managed permissions. In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is used.
 *
 * @param tmpReq CreateStackGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStackGroupResponse
 */
CreateStackGroupResponse Client::createStackGroupWithOptions(const CreateStackGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStackGroupShrinkRequest request = CreateStackGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAutoDeployment()) {
    request.setAutoDeploymentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.autoDeployment(), "AutoDeployment", "json"));
  }

  json query = {};
  if (!!request.hasAdministrationRoleName()) {
    query["AdministrationRoleName"] = request.administrationRoleName();
  }

  if (!!request.hasAutoDeploymentShrink()) {
    query["AutoDeployment"] = request.autoDeploymentShrink();
  }

  if (!!request.hasCapabilities()) {
    query["Capabilities"] = request.capabilities();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionRoleName()) {
    query["ExecutionRoleName"] = request.executionRoleName();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasPermissionModel()) {
    query["PermissionModel"] = request.permissionModel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStackArn()) {
    query["StackArn"] = request.stackArn();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStackGroup"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStackGroupResponse>();
}

/**
 * @summary Creates stack groups based on Resource Orchestration Service (ROS) templates. Stack groups allow you to create stacks within multiple Alibaba Cloud accounts across regions.
 *
 * @description A stack group is a collection of ROS stacks that you can manage as a unit. You can use an ROS template of a stack group to create stacks within Alibaba Cloud accounts across regions.
 * You can create a stack group that is granted self-managed or service-managed permissions:
 * *   If you use an Alibaba Cloud account to create a self-managed stack group, the administrator account and the execution account are Alibaba Cloud accounts.
 * *   If you enable a resource directory and use the management account or a delegated administrator account of the resource directory to create a service-managed stack group, the administrator account is the management account or delegated administrator account, and the execution account is a member account of the resource directory.
 * For more information about stack groups, see [Overview](https://help.aliyun.com/document_detail/154578.html).
 * In this topic, a stack group named `MyStackGroup` is created in the `China (Hangzhou)` region and granted the self-managed permissions. In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is used.
 *
 * @param request CreateStackGroupRequest
 * @return CreateStackGroupResponse
 */
CreateStackGroupResponse Client::createStackGroup(const CreateStackGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStackGroupWithOptions(request, runtime);
}

/**
 * @summary Creates stack instances in the specified accounts and regions.
 *
 * @description Before you call this operation, make sure that a stack group is created. For more information, see [CreateStackGroup](https://help.aliyun.com/document_detail/151333.html).
 * In this topic, the stack group named `MyStackGroup` is used. The stack group is created in the China (Hangzhou) region and granted the self-managed permissions. In this example, stacks are created by using Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
 *
 * @param tmpReq CreateStackInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStackInstancesResponse
 */
CreateStackInstancesResponse Client::createStackInstancesWithOptions(const CreateStackInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStackInstancesShrinkRequest request = CreateStackInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "AccountIds", "json"));
  }

  if (!!tmpReq.hasDeploymentTargets()) {
    request.setDeploymentTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deploymentTargets(), "DeploymentTargets", "json"));
  }

  if (!!tmpReq.hasOperationPreferences()) {
    request.setOperationPreferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationPreferences(), "OperationPreferences", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regionIds(), "RegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeploymentOptions()) {
    query["DeploymentOptions"] = request.deploymentOptions();
  }

  if (!!request.hasDeploymentTargetsShrink()) {
    query["DeploymentTargets"] = request.deploymentTargetsShrink();
  }

  if (!!request.hasDisableRollback()) {
    query["DisableRollback"] = request.disableRollback();
  }

  if (!!request.hasOperationDescription()) {
    query["OperationDescription"] = request.operationDescription();
  }

  if (!!request.hasOperationPreferencesShrink()) {
    query["OperationPreferences"] = request.operationPreferencesShrink();
  }

  if (!!request.hasParameterOverrides()) {
    query["ParameterOverrides"] = request.parameterOverrides();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.regionIdsShrink();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasTimeoutInMinutes()) {
    query["TimeoutInMinutes"] = request.timeoutInMinutes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStackInstances"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStackInstancesResponse>();
}

/**
 * @summary Creates stack instances in the specified accounts and regions.
 *
 * @description Before you call this operation, make sure that a stack group is created. For more information, see [CreateStackGroup](https://help.aliyun.com/document_detail/151333.html).
 * In this topic, the stack group named `MyStackGroup` is used. The stack group is created in the China (Hangzhou) region and granted the self-managed permissions. In this example, stacks are created by using Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
 *
 * @param request CreateStackInstancesRequest
 * @return CreateStackInstancesResponse
 */
CreateStackInstancesResponse Client::createStackInstances(const CreateStackInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStackInstancesWithOptions(request, runtime);
}

/**
 * @summary Creates a custom template.
 *
 * @description In this topic, a custom template named `MyTemplate` is created in the `cn-hangzhou` region. The `TemplateBody` parameter of the template is set to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
 *
 * @param request CreateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasValidationOptions()) {
    query["ValidationOptions"] = request.validationOptions();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary Creates a custom template.
 *
 * @description In this topic, a custom template named `MyTemplate` is created in the `cn-hangzhou` region. The `TemplateBody` parameter of the template is set to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a resource scenario.
 *
 * @description ### [](#)Limits
 * Only specific resource types support the resource scenario feature. For more information, see [Resource types that support the scenario feature](https://help.aliyun.com/document_detail/353175.htmll).
 * ### [](#)Description
 * Resource Orchestration Service (ROS) provides the resource scenario feature that allows you to specify the scope of a collection of resources on a user interface (UI) and perform operations, such as replication and management, on the resources. This helps you manage resources in a simplified manner. For more information about resource scenarios, see [Overview](https://help.aliyun.com/document_detail/352074.html).
 * #### [](#)Resource replication scenario
 * If you want to replicate a collection of resources and dependencies between the resources, you can create a resource replication scenario. This type of resource scenario allows you to replicate all existing resources within the specified scope and generate a collection of resources that have the same architecture as the existing resources. For more information, see [Resource replication scenario](https://help.aliyun.com/document_detail/353133.html).
 * #### [](#)Resource detection scenario
 * If the relationships between resources that you want to create are complicated, you can create a resource detection scenario to preview the overall resource architecture or the architecture of a specific resource. This facilitates resource management. For more information, see [Resource detection scenario](https://help.aliyun.com/document_detail/2591901.html).
 * #### [](#)Resource management scenario
 * If you want to import a collection of existing resources to a stack and manage the resources in a centralized manner, you can create a resource management scenario. For more information, see [Resource management scenario](https://help.aliyun.com/document_detail/353163.html).
 * #### [](#)Resource migration scenario
 * If you want to migrate a collection of resources and dependencies between the resources, you can create a resource migration scenario. When you migrate the resources, ROS generates a stack. You can view the migration progress on the Stacks tab of the scenario details page. After you migrate the resources, you can delete source resources. For more information, see [Resource migration scenario](https://help.aliyun.com/document_detail/379902.html).
 * This topic provides an example on how to create a resource replication scenario in the China (Hangzhou) region to replicate a resource. In this example, a virtual private cloud (VPC) whose ID is `vpc-bp1m6fww66xbntjyc****` is replicated.
 *
 * @param tmpReq CreateTemplateScratchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateScratchResponse
 */
CreateTemplateScratchResponse Client::createTemplateScratchWithOptions(const CreateTemplateScratchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTemplateScratchShrinkRequest request = CreateTemplateScratchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPreferenceParameters()) {
    request.setPreferenceParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.preferenceParameters(), "PreferenceParameters", "json"));
  }

  if (!!tmpReq.hasSourceResourceGroup()) {
    request.setSourceResourceGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceResourceGroup(), "SourceResourceGroup", "json"));
  }

  if (!!tmpReq.hasSourceResources()) {
    request.setSourceResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceResources(), "SourceResources", "json"));
  }

  if (!!tmpReq.hasSourceTag()) {
    request.setSourceTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceTag(), "SourceTag", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionMode()) {
    query["ExecutionMode"] = request.executionMode();
  }

  if (!!request.hasLogicalIdStrategy()) {
    query["LogicalIdStrategy"] = request.logicalIdStrategy();
  }

  if (!!request.hasPreferenceParametersShrink()) {
    query["PreferenceParameters"] = request.preferenceParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceResourceGroupShrink()) {
    query["SourceResourceGroup"] = request.sourceResourceGroupShrink();
  }

  if (!!request.hasSourceResourcesShrink()) {
    query["SourceResources"] = request.sourceResourcesShrink();
  }

  if (!!request.hasSourceTagShrink()) {
    query["SourceTag"] = request.sourceTagShrink();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplateScratchType()) {
    query["TemplateScratchType"] = request.templateScratchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTemplateScratch"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateScratchResponse>();
}

/**
 * @summary Creates a resource scenario.
 *
 * @description ### [](#)Limits
 * Only specific resource types support the resource scenario feature. For more information, see [Resource types that support the scenario feature](https://help.aliyun.com/document_detail/353175.htmll).
 * ### [](#)Description
 * Resource Orchestration Service (ROS) provides the resource scenario feature that allows you to specify the scope of a collection of resources on a user interface (UI) and perform operations, such as replication and management, on the resources. This helps you manage resources in a simplified manner. For more information about resource scenarios, see [Overview](https://help.aliyun.com/document_detail/352074.html).
 * #### [](#)Resource replication scenario
 * If you want to replicate a collection of resources and dependencies between the resources, you can create a resource replication scenario. This type of resource scenario allows you to replicate all existing resources within the specified scope and generate a collection of resources that have the same architecture as the existing resources. For more information, see [Resource replication scenario](https://help.aliyun.com/document_detail/353133.html).
 * #### [](#)Resource detection scenario
 * If the relationships between resources that you want to create are complicated, you can create a resource detection scenario to preview the overall resource architecture or the architecture of a specific resource. This facilitates resource management. For more information, see [Resource detection scenario](https://help.aliyun.com/document_detail/2591901.html).
 * #### [](#)Resource management scenario
 * If you want to import a collection of existing resources to a stack and manage the resources in a centralized manner, you can create a resource management scenario. For more information, see [Resource management scenario](https://help.aliyun.com/document_detail/353163.html).
 * #### [](#)Resource migration scenario
 * If you want to migrate a collection of resources and dependencies between the resources, you can create a resource migration scenario. When you migrate the resources, ROS generates a stack. You can view the migration progress on the Stacks tab of the scenario details page. After you migrate the resources, you can delete source resources. For more information, see [Resource migration scenario](https://help.aliyun.com/document_detail/379902.html).
 * This topic provides an example on how to create a resource replication scenario in the China (Hangzhou) region to replicate a resource. In this example, a virtual private cloud (VPC) whose ID is `vpc-bp1m6fww66xbntjyc****` is replicated.
 *
 * @param request CreateTemplateScratchRequest
 * @return CreateTemplateScratchResponse
 */
CreateTemplateScratchResponse Client::createTemplateScratch(const CreateTemplateScratchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTemplateScratchWithOptions(request, runtime);
}

/**
 * @summary Deletes change sets.
 *
 * @description *   Before you call this operation, make sure that the following requirements are met:
 *     *   The status of the change set is CREATE_COMPLETE, CREATE_FAILED, or DELETE_FAILED.
 *     *   The execution status is UNAVAILABLE or AVAILABLE.
 * *   After a change set is executed, other change sets associated with the same stack as this change set are also deleted.
 * *   After a stack is deleted, change sets associated with the stack are deleted.
 * *   If a change set of the CREATE type is deleted, you must delete stacks associated with the change set.
 * In this example, a change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is deleted. The change set is created in the China (Hangzhou) region.
 *
 * @param request DeleteChangeSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChangeSetResponse
 */
DeleteChangeSetResponse Client::deleteChangeSetWithOptions(const DeleteChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetId()) {
    query["ChangeSetId"] = request.changeSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChangeSet"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChangeSetResponse>();
}

/**
 * @summary Deletes change sets.
 *
 * @description *   Before you call this operation, make sure that the following requirements are met:
 *     *   The status of the change set is CREATE_COMPLETE, CREATE_FAILED, or DELETE_FAILED.
 *     *   The execution status is UNAVAILABLE or AVAILABLE.
 * *   After a change set is executed, other change sets associated with the same stack as this change set are also deleted.
 * *   After a stack is deleted, change sets associated with the stack are deleted.
 * *   If a change set of the CREATE type is deleted, you must delete stacks associated with the change set.
 * In this example, a change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is deleted. The change set is created in the China (Hangzhou) region.
 *
 * @param request DeleteChangeSetRequest
 * @return DeleteChangeSetResponse
 */
DeleteChangeSetResponse Client::deleteChangeSet(const DeleteChangeSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChangeSetWithOptions(request, runtime);
}

/**
 * @summary Deletes a diagnostic record.
 *
 * @param request DeleteDiagnosticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDiagnosticResponse
 */
DeleteDiagnosticResponse Client::deleteDiagnosticWithOptions(const DeleteDiagnosticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDiagnostic"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDiagnosticResponse>();
}

/**
 * @summary Deletes a diagnostic record.
 *
 * @param request DeleteDiagnosticRequest
 * @return DeleteDiagnosticResponse
 */
DeleteDiagnosticResponse Client::deleteDiagnostic(const DeleteDiagnosticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDiagnosticWithOptions(request, runtime);
}

/**
 * @summary Deletes a stack. You can specify whether to retain resources.
 *
 * @param request DeleteStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStackResponse
 */
DeleteStackResponse Client::deleteStackWithOptions(const DeleteStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteOptions()) {
    query["DeleteOptions"] = request.deleteOptions();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.parallelism();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.ramRoleName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRetainAllResources()) {
    query["RetainAllResources"] = request.retainAllResources();
  }

  if (!!request.hasRetainResources()) {
    query["RetainResources"] = request.retainResources();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStackResponse>();
}

/**
 * @summary Deletes a stack. You can specify whether to retain resources.
 *
 * @param request DeleteStackRequest
 * @return DeleteStackResponse
 */
DeleteStackResponse Client::deleteStack(const DeleteStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStackWithOptions(request, runtime);
}

/**
 * @summary Deletes a stack group.
 *
 * @description A stack group can be deleted only when the stack group does not contain stacks. You can call the [DeleteStackInstances](https://help.aliyun.com/document_detail/151715.html) operation to delete stacks.
 * This topic provides an example on how to delete a stack group. In this example, a stack group named `MyStackGroup` in the China (Hangzhou) region is deleted.
 *
 * @param request DeleteStackGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStackGroupResponse
 */
DeleteStackGroupResponse Client::deleteStackGroupWithOptions(const DeleteStackGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStackGroup"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStackGroupResponse>();
}

/**
 * @summary Deletes a stack group.
 *
 * @description A stack group can be deleted only when the stack group does not contain stacks. You can call the [DeleteStackInstances](https://help.aliyun.com/document_detail/151715.html) operation to delete stacks.
 * This topic provides an example on how to delete a stack group. In this example, a stack group named `MyStackGroup` in the China (Hangzhou) region is deleted.
 *
 * @param request DeleteStackGroupRequest
 * @return DeleteStackGroupResponse
 */
DeleteStackGroupResponse Client::deleteStackGroup(const DeleteStackGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStackGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes stack instances in the specified accounts and regions. You can retain specific resources based on your business requirements when you call this operation.
 *
 * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. In this example, the stacks of the stack group that are deployed in the China (Beijing) region by using the Alibaba Cloud account whose ID is `151266687691****` are deleted.
 *
 * @param tmpReq DeleteStackInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStackInstancesResponse
 */
DeleteStackInstancesResponse Client::deleteStackInstancesWithOptions(const DeleteStackInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteStackInstancesShrinkRequest request = DeleteStackInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "AccountIds", "json"));
  }

  if (!!tmpReq.hasDeploymentTargets()) {
    request.setDeploymentTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deploymentTargets(), "DeploymentTargets", "json"));
  }

  if (!!tmpReq.hasOperationPreferences()) {
    request.setOperationPreferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationPreferences(), "OperationPreferences", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regionIds(), "RegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeploymentTargetsShrink()) {
    query["DeploymentTargets"] = request.deploymentTargetsShrink();
  }

  if (!!request.hasOperationDescription()) {
    query["OperationDescription"] = request.operationDescription();
  }

  if (!!request.hasOperationPreferencesShrink()) {
    query["OperationPreferences"] = request.operationPreferencesShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.regionIdsShrink();
  }

  if (!!request.hasRetainStacks()) {
    query["RetainStacks"] = request.retainStacks();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStackInstances"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStackInstancesResponse>();
}

/**
 * @summary Deletes stack instances in the specified accounts and regions. You can retain specific resources based on your business requirements when you call this operation.
 *
 * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. In this example, the stacks of the stack group that are deployed in the China (Beijing) region by using the Alibaba Cloud account whose ID is `151266687691****` are deleted.
 *
 * @param request DeleteStackInstancesRequest
 * @return DeleteStackInstancesResponse
 */
DeleteStackInstancesResponse Client::deleteStackInstances(const DeleteStackInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStackInstancesWithOptions(request, runtime);
}

/**
 * @summary Deletes a template.
 *
 * @description If a template is shared with other Alibaba Cloud accounts, you must unshare the template before you delete it.
 *
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Deletes a template.
 *
 * @description If a template is shared with other Alibaba Cloud accounts, you must unshare the template before you delete it.
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a scenario.
 *
 * @description In this topic, a scenario whose ID is `ts-4f83704400994409****` is deleted in the China (Hangzhou) region.
 *
 * @param request DeleteTemplateScratchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateScratchResponse
 */
DeleteTemplateScratchResponse Client::deleteTemplateScratchWithOptions(const DeleteTemplateScratchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplateScratch"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateScratchResponse>();
}

/**
 * @summary Deletes a scenario.
 *
 * @description In this topic, a scenario whose ID is `ts-4f83704400994409****` is deleted in the China (Hangzhou) region.
 *
 * @param request DeleteTemplateScratchRequest
 * @return DeleteTemplateScratchResponse
 */
DeleteTemplateScratchResponse Client::deleteTemplateScratch(const DeleteTemplateScratchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateScratchWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource type or a version of a resource type.
 *
 * @description *   If you delete a resource type, you can no longer use the resource type in Resource Orchestration Service (ROS).
 * *   If you delete a version of a resource type, you can no longer use the version in ROS.
 * *   If a resource type has only one version, you can delete the version by calling the operation. If a resource type has more than one version, you must manually delete the remaining versions.
 * *   When a resource type has more than one version, you cannot delete the default version by calling the operation.
 * *   When a resource type has only one version, you can delete the resource type and the version by calling the operation.
 *
 * @param request DeregisterResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeregisterResourceTypeResponse
 */
DeregisterResourceTypeResponse Client::deregisterResourceTypeWithOptions(const DeregisterResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeregisterResourceType"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeregisterResourceTypeResponse>();
}

/**
 * @summary Deletes a resource type or a version of a resource type.
 *
 * @description *   If you delete a resource type, you can no longer use the resource type in Resource Orchestration Service (ROS).
 * *   If you delete a version of a resource type, you can no longer use the version in ROS.
 * *   If a resource type has only one version, you can delete the version by calling the operation. If a resource type has more than one version, you must manually delete the remaining versions.
 * *   When a resource type has more than one version, you cannot delete the default version by calling the operation.
 * *   When a resource type has only one version, you can delete the resource type and the version by calling the operation.
 *
 * @param request DeregisterResourceTypeRequest
 * @return DeregisterResourceTypeResponse
 */
DeregisterResourceTypeResponse Client::deregisterResourceType(const DeregisterResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deregisterResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available regions.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries a list of available regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to detect drift on a stack.
 *
 * @param request DetectStackDriftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectStackDriftResponse
 */
DetectStackDriftResponse Client::detectStackDriftWithOptions(const DetectStackDriftRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLogicalResourceId()) {
    query["LogicalResourceId"] = request.logicalResourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectStackDrift"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectStackDriftResponse>();
}

/**
 * @summary You can call this operation to detect drift on a stack.
 *
 * @param request DetectStackDriftRequest
 * @return DetectStackDriftResponse
 */
DetectStackDriftResponse Client::detectStackDrift(const DetectStackDriftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectStackDriftWithOptions(request, runtime);
}

/**
 * @summary 对资源栈组进行偏差检测
 *
 * @param tmpReq DetectStackGroupDriftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectStackGroupDriftResponse
 */
DetectStackGroupDriftResponse Client::detectStackGroupDriftWithOptions(const DetectStackGroupDriftRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetectStackGroupDriftShrinkRequest request = DetectStackGroupDriftShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationPreferences()) {
    request.setOperationPreferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationPreferences(), "OperationPreferences", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOperationPreferencesShrink()) {
    query["OperationPreferences"] = request.operationPreferencesShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectStackGroupDrift"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectStackGroupDriftResponse>();
}

/**
 * @summary 对资源栈组进行偏差检测
 *
 * @param request DetectStackGroupDriftRequest
 * @return DetectStackGroupDriftResponse
 */
DetectStackGroupDriftResponse Client::detectStackGroupDrift(const DetectStackGroupDriftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectStackGroupDriftWithOptions(request, runtime);
}

/**
 * @summary Performs drift detection on resources in a stack to determine whether the resources have drifted from the expected configurations.
 *
 * @param request DetectStackResourceDriftRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectStackResourceDriftResponse
 */
DetectStackResourceDriftResponse Client::detectStackResourceDriftWithOptions(const DetectStackResourceDriftRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLogicalResourceId()) {
    query["LogicalResourceId"] = request.logicalResourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectStackResourceDrift"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectStackResourceDriftResponse>();
}

/**
 * @summary Performs drift detection on resources in a stack to determine whether the resources have drifted from the expected configurations.
 *
 * @param request DetectStackResourceDriftRequest
 * @return DetectStackResourceDriftResponse
 */
DetectStackResourceDriftResponse Client::detectStackResourceDrift(const DetectStackResourceDriftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectStackResourceDriftWithOptions(request, runtime);
}

/**
 * @summary Executes change sets.
 *
 * @description In this example, the change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is executed. The change set is created in the `China (Hangzhou)` region.
 *
 * @param request ExecuteChangeSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteChangeSetResponse
 */
ExecuteChangeSetResponse Client::executeChangeSetWithOptions(const ExecuteChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetId()) {
    query["ChangeSetId"] = request.changeSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteChangeSet"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteChangeSetResponse>();
}

/**
 * @summary Executes change sets.
 *
 * @description In this example, the change set whose ID is `1f6521a4-05af-4975-afe9-bc4b45ad****` is executed. The change set is created in the `China (Hangzhou)` region.
 *
 * @param request ExecuteChangeSetRequest
 * @return ExecuteChangeSetResponse
 */
ExecuteChangeSetResponse Client::executeChangeSet(const ExecuteChangeSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeChangeSetWithOptions(request, runtime);
}

/**
 * @summary Generates a template for a resource scenario.
 *
 * @description In this example, a template is generated for a resource management scenario that resides in the China (Hangzhou) region. The ID of the resource scenario is `ts-aa9c62feab844a6b****`.
 * >  You cannot generate a template for a resource detection scenario.
 *
 * @param request GenerateTemplateByScratchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTemplateByScratchResponse
 */
GenerateTemplateByScratchResponse Client::generateTemplateByScratchWithOptions(const GenerateTemplateByScratchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProvisionRegionId()) {
    query["ProvisionRegionId"] = request.provisionRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateTemplateByScratch"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTemplateByScratchResponse>();
}

/**
 * @summary Generates a template for a resource scenario.
 *
 * @description In this example, a template is generated for a resource management scenario that resides in the China (Hangzhou) region. The ID of the resource scenario is `ts-aa9c62feab844a6b****`.
 * >  You cannot generate a template for a resource detection scenario.
 *
 * @param request GenerateTemplateByScratchRequest
 * @return GenerateTemplateByScratchResponse
 */
GenerateTemplateByScratchResponse Client::generateTemplateByScratch(const GenerateTemplateByScratchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateTemplateByScratchWithOptions(request, runtime);
}

/**
 * @summary Generates the information about a policy that is required by a template.
 *
 * @description If the policy information is related to Enterprise Distributed Application Service (EDAS), you must log on to your Alibaba Cloud account and grant the required permissions to the relevant RAM users.
 * In this example, a policy is generated for a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****`.
 *
 * @param request GenerateTemplatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTemplatePolicyResponse
 */
GenerateTemplatePolicyResponse Client::generateTemplatePolicyWithOptions(const GenerateTemplatePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationTypes()) {
    query["OperationTypes"] = request.operationTypes();
  }

  if (!!request.hasTemplateBody()) {
    query["TemplateBody"] = request.templateBody();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateTemplatePolicy"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTemplatePolicyResponse>();
}

/**
 * @summary Generates the information about a policy that is required by a template.
 *
 * @description If the policy information is related to Enterprise Distributed Application Service (EDAS), you must log on to your Alibaba Cloud account and grant the required permissions to the relevant RAM users.
 * In this example, a policy is generated for a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****`.
 *
 * @param request GenerateTemplatePolicyRequest
 * @return GenerateTemplatePolicyResponse
 */
GenerateTemplatePolicyResponse Client::generateTemplatePolicy(const GenerateTemplatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateTemplatePolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AI task by task ID.
 *
 * @param request GetAITaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAITaskResponse
 */
GetAITaskResponse Client::getAITaskWithOptions(const GetAITaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputOption()) {
    query["OutputOption"] = request.outputOption();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAITask"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAITaskResponse>();
}

/**
 * @summary Queries the information about an AI task by task ID.
 *
 * @param request GetAITaskRequest
 * @return GetAITaskResponse
 */
GetAITaskResponse Client::getAITask(const GetAITaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAITaskWithOptions(request, runtime);
}

/**
 * @summary Queries change sets. You can determine whether to query the templates of change sets.
 *
 * @description In this example, the details of a change set whose ID is `4c11658d-bd47-4dd0-ba64-727edc62****` is queried. The change set is created in the China (Hangzhou) region.
 *
 * @param request GetChangeSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChangeSetResponse
 */
GetChangeSetResponse Client::getChangeSetWithOptions(const GetChangeSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetId()) {
    query["ChangeSetId"] = request.changeSetId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShowTemplate()) {
    query["ShowTemplate"] = request.showTemplate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChangeSet"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChangeSetResponse>();
}

/**
 * @summary Queries change sets. You can determine whether to query the templates of change sets.
 *
 * @description In this example, the details of a change set whose ID is `4c11658d-bd47-4dd0-ba64-727edc62****` is queried. The change set is created in the China (Hangzhou) region.
 *
 * @param request GetChangeSetRequest
 * @return GetChangeSetResponse
 */
GetChangeSetResponse Client::getChangeSet(const GetChangeSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChangeSetWithOptions(request, runtime);
}

/**
 * @summary Obtains the diagnosis details based on a specified diagnostic report ID.
 *
 * @param request GetDiagnosticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDiagnosticResponse
 */
GetDiagnosticResponse Client::getDiagnosticWithOptions(const GetDiagnosticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.reportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDiagnostic"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDiagnosticResponse>();
}

/**
 * @summary Obtains the diagnosis details based on a specified diagnostic report ID.
 *
 * @param request GetDiagnosticRequest
 * @return GetDiagnosticResponse
 */
GetDiagnosticResponse Client::getDiagnostic(const GetDiagnosticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDiagnosticWithOptions(request, runtime);
}

/**
 * @summary Queries the details of features that are supported by Resource Orchestration Service (ROS).
 *
 * @description You can call this operation to query the Terraform hosting, resource cleaner, and scenario features.
 * This topic provides an example on how to query the details of features supported by ROS in the China (Hangzhou) region. The details include Terraform versions, provider versions, and supported resource types.
 * >  In the Examples section, only part of the sample code is provided.
 *
 * @param request GetFeatureDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFeatureDetailsResponse
 */
GetFeatureDetailsResponse Client::getFeatureDetailsWithOptions(const GetFeatureDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeature()) {
    query["Feature"] = request.feature();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFeatureDetails"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFeatureDetailsResponse>();
}

/**
 * @summary Queries the details of features that are supported by Resource Orchestration Service (ROS).
 *
 * @description You can call this operation to query the Terraform hosting, resource cleaner, and scenario features.
 * This topic provides an example on how to query the details of features supported by ROS in the China (Hangzhou) region. The details include Terraform versions, provider versions, and supported resource types.
 * >  In the Examples section, only part of the sample code is provided.
 *
 * @param request GetFeatureDetailsRequest
 * @return GetFeatureDetailsResponse
 */
GetFeatureDetailsResponse Client::getFeatureDetails(const GetFeatureDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFeatureDetailsWithOptions(request, runtime);
}

/**
 * @summary This topic provides an example on how to query the details of `ALIYUN::ROS::WaitConditionHandle`.
 *
 * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
 *
 * @param request GetResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceTypeResponse
 */
GetResourceTypeResponse Client::getResourceTypeWithOptions(const GetResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceType"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceTypeResponse>();
}

/**
 * @summary This topic provides an example on how to query the details of `ALIYUN::ROS::WaitConditionHandle`.
 *
 * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
 *
 * @param request GetResourceTypeRequest
 * @return GetResourceTypeResponse
 */
GetResourceTypeResponse Client::getResourceType(const GetResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceTypeWithOptions(request, runtime);
}

/**
 * @summary Generates a sample template based on a resource type.
 *
 * @param request GetResourceTypeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceTypeTemplateResponse
 */
GetResourceTypeTemplateResponse Client::getResourceTypeTemplateWithOptions(const GetResourceTypeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceTypeTemplate"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceTypeTemplateResponse>();
}

/**
 * @summary Generates a sample template based on a resource type.
 *
 * @param request GetResourceTypeTemplateRequest
 * @return GetResourceTypeTemplateResponse
 */
GetResourceTypeTemplateResponse Client::getResourceTypeTemplate(const GetResourceTypeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceTypeTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the activation status and the RAM roles of an Alibaba Cloud service.
 *
 * @description ### Description
 * This topic describes how to query the activation status and the RAM roles of an Alibaba Cloud service. In this example, the Elastic High Performance Computing (E-HPC) service that is deployed in the China (Hangzhou) region is queried.
 * > Make sure that you have the permissions to call the [GetRole](https://help.aliyun.com/document_detail/28711.html) operation.
 *
 * @param request GetServiceProvisionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceProvisionsResponse
 */
GetServiceProvisionsResponse Client::getServiceProvisionsWithOptions(const GetServiceProvisionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasServices()) {
    query["Services"] = request.services();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetServiceProvisions"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceProvisionsResponse>();
}

/**
 * @summary Queries the activation status and the RAM roles of an Alibaba Cloud service.
 *
 * @description ### Description
 * This topic describes how to query the activation status and the RAM roles of an Alibaba Cloud service. In this example, the Elastic High Performance Computing (E-HPC) service that is deployed in the China (Hangzhou) region is queried.
 * > Make sure that you have the permissions to call the [GetRole](https://help.aliyun.com/document_detail/28711.html) operation.
 *
 * @param request GetServiceProvisionsRequest
 * @return GetServiceProvisionsResponse
 */
GetServiceProvisionsResponse Client::getServiceProvisions(const GetServiceProvisionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceProvisionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a stack in Resource Orchestration Service (ROS).
 *
 * @description In this example, the information about a stack whose ID is `c754d2a4-28f1-46df-b557-9586173a****` in the China (Hangzhou) region is queried.
 *
 * @param request GetStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackResponse
 */
GetStackResponse Client::getStackWithOptions(const GetStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLogOption()) {
    query["LogOption"] = request.logOption();
  }

  if (!!request.hasOutputOption()) {
    query["OutputOption"] = request.outputOption();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShowResourceProgress()) {
    query["ShowResourceProgress"] = request.showResourceProgress();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackResponse>();
}

/**
 * @summary Queries the information about a stack in Resource Orchestration Service (ROS).
 *
 * @description In this example, the information about a stack whose ID is `c754d2a4-28f1-46df-b557-9586173a****` in the China (Hangzhou) region is queried.
 *
 * @param request GetStackRequest
 * @return GetStackResponse
 */
GetStackResponse Client::getStack(const GetStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackWithOptions(request, runtime);
}

/**
 * @summary Queries the drift detection status of a stack.
 *
 * @description In this topic, the status of a drift detection operation whose ID is `a7044f0d-6f2e-4128-a307-4524ef88****` is queried. The operation is performed in the China (Hangzhou) region.
 *
 * @param request GetStackDriftDetectionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackDriftDetectionStatusResponse
 */
GetStackDriftDetectionStatusResponse Client::getStackDriftDetectionStatusWithOptions(const GetStackDriftDetectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDriftDetectionId()) {
    query["DriftDetectionId"] = request.driftDetectionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackDriftDetectionStatus"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackDriftDetectionStatusResponse>();
}

/**
 * @summary Queries the drift detection status of a stack.
 *
 * @description In this topic, the status of a drift detection operation whose ID is `a7044f0d-6f2e-4128-a307-4524ef88****` is queried. The operation is performed in the China (Hangzhou) region.
 *
 * @param request GetStackDriftDetectionStatusRequest
 * @return GetStackDriftDetectionStatusResponse
 */
GetStackDriftDetectionStatusResponse Client::getStackDriftDetectionStatus(const GetStackDriftDetectionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackDriftDetectionStatusWithOptions(request, runtime);
}

/**
 * @summary In this example, the information about a stack group named \\`MyStackGroup\\` is queried. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
 *
 * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
 *
 * @param request GetStackGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackGroupResponse
 */
GetStackGroupResponse Client::getStackGroupWithOptions(const GetStackGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupId()) {
    query["StackGroupId"] = request.stackGroupId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackGroup"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackGroupResponse>();
}

/**
 * @summary In this example, the information about a stack group named \\`MyStackGroup\\` is queried. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
 *
 * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
 *
 * @param request GetStackGroupRequest
 * @return GetStackGroupResponse
 */
GetStackGroupResponse Client::getStackGroup(const GetStackGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a stack group operation in an Alibaba Cloud region.
 *
 * @description In this example, the information about the stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863d****` is queried. The stack group named `MyStackGroup` is granted self-managed permissions and deployed in the China (Hangzhou) region.
 *
 * @param request GetStackGroupOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackGroupOperationResponse
 */
GetStackGroupOperationResponse Client::getStackGroupOperationWithOptions(const GetStackGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationId()) {
    query["OperationId"] = request.operationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackGroupOperation"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackGroupOperationResponse>();
}

/**
 * @summary Queries the information about a stack group operation in an Alibaba Cloud region.
 *
 * @description In this example, the information about the stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863d****` is queried. The stack group named `MyStackGroup` is granted self-managed permissions and deployed in the China (Hangzhou) region.
 *
 * @param request GetStackGroupOperationRequest
 * @return GetStackGroupOperationResponse
 */
GetStackGroupOperationResponse Client::getStackGroupOperation(const GetStackGroupOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackGroupOperationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a stack instance that is associated with a stack group.
 *
 * @description In this example, the information about a stack instance associated with a stack group named `MyStackGroup` is queried. The stack instance is deployed in the China (Beijing) region within the `151266687691****` Alibaba Cloud account. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
 *
 * @param request GetStackInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackInstanceResponse
 */
GetStackInstanceResponse Client::getStackInstanceWithOptions(const GetStackInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputOption()) {
    query["OutputOption"] = request.outputOption();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasStackInstanceAccountId()) {
    query["StackInstanceAccountId"] = request.stackInstanceAccountId();
  }

  if (!!request.hasStackInstanceRegionId()) {
    query["StackInstanceRegionId"] = request.stackInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackInstance"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackInstanceResponse>();
}

/**
 * @summary Queries the information about a stack instance that is associated with a stack group.
 *
 * @description In this example, the information about a stack instance associated with a stack group named `MyStackGroup` is queried. The stack instance is deployed in the China (Beijing) region within the `151266687691****` Alibaba Cloud account. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
 *
 * @param request GetStackInstanceRequest
 * @return GetStackInstanceResponse
 */
GetStackInstanceResponse Client::getStackInstance(const GetStackInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackInstanceWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query information about a stack policy.
 *
 * @description In this example, the stack policy of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is queried. The stack is deployed in the China (Hangzhou) region.
 *
 * @param request GetStackPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackPolicyResponse
 */
GetStackPolicyResponse Client::getStackPolicyWithOptions(const GetStackPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackPolicy"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackPolicyResponse>();
}

/**
 * @summary You can call this operation to query information about a stack policy.
 *
 * @description In this example, the stack policy of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` is queried. The stack is deployed in the China (Hangzhou) region.
 *
 * @param request GetStackPolicyRequest
 * @return GetStackPolicyResponse
 */
GetStackPolicyResponse Client::getStackPolicy(const GetStackPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackPolicyWithOptions(request, runtime);
}

/**
 * @summary For more information about common request parameters, see [Common parameters]\\(~~131957~~).
 *
 * @description | Http status code | Error code | Error message | Description |
 * | ---------------- | ---------- | ------------- | ----------- |
 * | 404 | ResourceNotFound | The Resource ({name}) could not be found in Stack {stack}. | The error message returned because the specified resource does not exist in the stack. name indicates the resource name. stack indicates the stack name or ID. |
 * | 404 | StackNotFound | The Stack ({name}) could not be found. | The error message returned because the stack does not exist. name indicates the name or ID of the stack. |
 *
 * @param request GetStackResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackResourceResponse
 */
GetStackResourceResponse Client::getStackResourceWithOptions(const GetStackResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLogicalResourceId()) {
    query["LogicalResourceId"] = request.logicalResourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceAttributes()) {
    query["ResourceAttributes"] = request.resourceAttributes();
  }

  if (!!request.hasShowResourceAttributes()) {
    query["ShowResourceAttributes"] = request.showResourceAttributes();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackResource"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackResourceResponse>();
}

/**
 * @summary For more information about common request parameters, see [Common parameters]\\(~~131957~~).
 *
 * @description | Http status code | Error code | Error message | Description |
 * | ---------------- | ---------- | ------------- | ----------- |
 * | 404 | ResourceNotFound | The Resource ({name}) could not be found in Stack {stack}. | The error message returned because the specified resource does not exist in the stack. name indicates the resource name. stack indicates the stack name or ID. |
 * | 404 | StackNotFound | The Stack ({name}) could not be found. | The error message returned because the stack does not exist. name indicates the name or ID of the stack. |
 *
 * @param request GetStackResourceRequest
 * @return GetStackResourceResponse
 */
GetStackResourceResponse Client::getStackResource(const GetStackResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStackResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a template based on stacks, stack groups, change sets, or any custom template information.
 *
 * @description In this example, the details of a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is queried. The region ID of the template is `cn-hangzhou`.
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetId()) {
    query["ChangeSetId"] = request.changeSetId();
  }

  if (!!request.hasIncludePermission()) {
    query["IncludePermission"] = request.includePermission();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateStage()) {
    query["TemplateStage"] = request.templateStage();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Queries the details of a template based on stacks, stack groups, change sets, or any custom template information.
 *
 * @description In this example, the details of a template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is queried. The region ID of the template is `cn-hangzhou`.
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the estimated prices of the resources in a template.
 *
 * @description ###
 * *   For more information about the resources that support price inquiry in Resource Orchestration Service (ROS) templates, see the "**Resource types that support price inquiry**" section of the [Estimate resource prices](https://help.aliyun.com/document_detail/203165.html) topic.
 * *   For more information about the resources that support price inquiry in Terraform templates, see the "**ROS resources supported by Terraform**" section of the [ROS features and resources supported by Terraform](https://help.aliyun.com/document_detail/184389.html) topic.
 * The following sample code provides an example on how to query the estimated price of an elastic IP address (EIP) that you want to create based on a template. In this example, the following template is used:
 *     {
 *       "ROSTemplateFormatVersion": "2015-09-01",
 *       "Parameters": {
 *         "Isp": {
 *           "Type": "String",
 *           "Default": "BGP"
 *         },
 *         "Name": {
 *           "Type": "String",
 *           "Default": "test"
 *         },
 *         "Netmode": {
 *           "Type": "String",
 *           "Default": "public"
 *         },
 *         "Bandwidth": {
 *           "Type": "Number",
 *           "Default": 5
 *         }
 *       },
 *       "Resources": {
 *         "NewEip": {
 *           "Type": "ALIYUN::VPC::EIP",
 *           "Properties": {
 *             "InstanceChargeType": "Prepaid",
 *             "PricingCycle": "Month",
 *             "Isp": {
 *               "Ref": "Isp"
 *             },
 *             "Period": 1,
 *             "DeletionProtection": false,
 *             "AutoPay": false,
 *             "Name": {
 *               "Ref": "Name"
 *             },
 *             "InternetChargeType": "PayByTraffic",
 *             "Netmode": {
 *               "Ref": "Netmode"
 *             },
 *             "Bandwidth": {
 *               "Ref": "Bandwidth"
 *             }
 *           }
 *         }
 *       }
 *     }
 *
 * @param request GetTemplateEstimateCostRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateEstimateCostResponse
 */
GetTemplateEstimateCostResponse Client::getTemplateEstimateCostWithOptions(const GetTemplateEstimateCostRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  if (!!request.hasTemplateScratchRegionId()) {
    query["TemplateScratchRegionId"] = request.templateScratchRegionId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTemplateEstimateCost"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateEstimateCostResponse>();
}

/**
 * @summary Queries the estimated prices of the resources in a template.
 *
 * @description ###
 * *   For more information about the resources that support price inquiry in Resource Orchestration Service (ROS) templates, see the "**Resource types that support price inquiry**" section of the [Estimate resource prices](https://help.aliyun.com/document_detail/203165.html) topic.
 * *   For more information about the resources that support price inquiry in Terraform templates, see the "**ROS resources supported by Terraform**" section of the [ROS features and resources supported by Terraform](https://help.aliyun.com/document_detail/184389.html) topic.
 * The following sample code provides an example on how to query the estimated price of an elastic IP address (EIP) that you want to create based on a template. In this example, the following template is used:
 *     {
 *       "ROSTemplateFormatVersion": "2015-09-01",
 *       "Parameters": {
 *         "Isp": {
 *           "Type": "String",
 *           "Default": "BGP"
 *         },
 *         "Name": {
 *           "Type": "String",
 *           "Default": "test"
 *         },
 *         "Netmode": {
 *           "Type": "String",
 *           "Default": "public"
 *         },
 *         "Bandwidth": {
 *           "Type": "Number",
 *           "Default": 5
 *         }
 *       },
 *       "Resources": {
 *         "NewEip": {
 *           "Type": "ALIYUN::VPC::EIP",
 *           "Properties": {
 *             "InstanceChargeType": "Prepaid",
 *             "PricingCycle": "Month",
 *             "Isp": {
 *               "Ref": "Isp"
 *             },
 *             "Period": 1,
 *             "DeletionProtection": false,
 *             "AutoPay": false,
 *             "Name": {
 *               "Ref": "Name"
 *             },
 *             "InternetChargeType": "PayByTraffic",
 *             "Netmode": {
 *               "Ref": "Netmode"
 *             },
 *             "Bandwidth": {
 *               "Ref": "Bandwidth"
 *             }
 *           }
 *         }
 *       }
 *     }
 *
 * @param request GetTemplateEstimateCostRequest
 * @return GetTemplateEstimateCostResponse
 */
GetTemplateEstimateCostResponse Client::getTemplateEstimateCost(const GetTemplateEstimateCostRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateEstimateCostWithOptions(request, runtime);
}

/**
 * @summary Queries the values of one or more parameters in a template.
 *
 * @description This topic provides an example on how to query the values of a parameter. In this example, the values of the `ZoneInfo` parameter in a template that is created in the China (Hangzhou) region are queried. The template body is `{"Parameters":{"ZoneInfo":{"Type": "String"},"InstanceType": {"Type": "String"}},"ROSTemplateFormatVersion": "2015-09-01","Resources":{"ECS":{"Properties":{"ZoneId":{"Ref": "ZoneInfo"},"InstanceType": {"Ref": "InstanceType"}},"Type": "ALIYUN::ECS::Instance"}}}`.
 * For more information about the template parameters whose values you can query by calling this operation and the sample code of the template, see [Query the constraints of parameters](https://help.aliyun.com/document_detail/432820.html).
 *
 * @param tmpReq GetTemplateParameterConstraintsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateParameterConstraintsResponse
 */
GetTemplateParameterConstraintsResponse Client::getTemplateParameterConstraintsWithOptions(const GetTemplateParameterConstraintsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTemplateParameterConstraintsShrinkRequest request = GetTemplateParameterConstraintsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParametersKeyFilter()) {
    request.setParametersKeyFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parametersKeyFilter(), "ParametersKeyFilter", "json"));
  }

  if (!!tmpReq.hasParametersOrder()) {
    request.setParametersOrderShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parametersOrder(), "ParametersOrder", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasParametersKeyFilterShrink()) {
    query["ParametersKeyFilter"] = request.parametersKeyFilterShrink();
  }

  if (!!request.hasParametersOrderShrink()) {
    query["ParametersOrder"] = request.parametersOrderShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTemplateParameterConstraints"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateParameterConstraintsResponse>();
}

/**
 * @summary Queries the values of one or more parameters in a template.
 *
 * @description This topic provides an example on how to query the values of a parameter. In this example, the values of the `ZoneInfo` parameter in a template that is created in the China (Hangzhou) region are queried. The template body is `{"Parameters":{"ZoneInfo":{"Type": "String"},"InstanceType": {"Type": "String"}},"ROSTemplateFormatVersion": "2015-09-01","Resources":{"ECS":{"Properties":{"ZoneId":{"Ref": "ZoneInfo"},"InstanceType": {"Ref": "InstanceType"}},"Type": "ALIYUN::ECS::Instance"}}}`.
 * For more information about the template parameters whose values you can query by calling this operation and the sample code of the template, see [Query the constraints of parameters](https://help.aliyun.com/document_detail/432820.html).
 *
 * @param request GetTemplateParameterConstraintsRequest
 * @return GetTemplateParameterConstraintsResponse
 */
GetTemplateParameterConstraintsResponse Client::getTemplateParameterConstraints(const GetTemplateParameterConstraintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateParameterConstraintsWithOptions(request, runtime);
}

/**
 * @summary 推荐参数
 *
 * @param request GetTemplateRecommendParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateRecommendParametersResponse
 */
GetTemplateRecommendParametersResponse Client::getTemplateRecommendParametersWithOptions(const GetTemplateRecommendParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateBody()) {
    query["TemplateBody"] = request.templateBody();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateRecommendParameters"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateRecommendParametersResponse>();
}

/**
 * @summary 推荐参数
 *
 * @param request GetTemplateRecommendParametersRequest
 * @return GetTemplateRecommendParametersResponse
 */
GetTemplateRecommendParametersResponse Client::getTemplateRecommendParameters(const GetTemplateRecommendParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateRecommendParametersWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a resource scenario.
 *
 * @description In this example, the details of the resource scenario whose ID is `ts-7f7a704cf71c49a6****` is queried. In the response, the source node data is displayed.
 *
 * @param request GetTemplateScratchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateScratchResponse
 */
GetTemplateScratchResponse Client::getTemplateScratchWithOptions(const GetTemplateScratchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasShowDataOption()) {
    query["ShowDataOption"] = request.showDataOption();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateScratch"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateScratchResponse>();
}

/**
 * @summary Queries the details of a resource scenario.
 *
 * @description In this example, the details of the resource scenario whose ID is `ts-7f7a704cf71c49a6****` is queried. In the response, the source node data is displayed.
 *
 * @param request GetTemplateScratchRequest
 * @return GetTemplateScratchResponse
 */
GetTemplateScratchResponse Client::getTemplateScratch(const GetTemplateScratchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateScratchWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a template resource by using the relevant template, stack, stack group, or change set.
 *
 * @param request GetTemplateSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateSummaryResponse
 */
GetTemplateSummaryResponse Client::getTemplateSummaryWithOptions(const GetTemplateSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetId()) {
    query["ChangeSetId"] = request.changeSetId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateBody()) {
    query["TemplateBody"] = request.templateBody();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateSummary"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateSummaryResponse>();
}

/**
 * @summary Queries the information about a template resource by using the relevant template, stack, stack group, or change set.
 *
 * @param request GetTemplateSummaryRequest
 * @return GetTemplateSummaryResponse
 */
GetTemplateSummaryResponse Client::getTemplateSummary(const GetTemplateSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateSummaryWithOptions(request, runtime);
}

/**
 * @summary Import stacks from multiple different accounts into a stack group.
 *
 * @param tmpReq ImportStacksToStackGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportStacksToStackGroupResponse
 */
ImportStacksToStackGroupResponse Client::importStacksToStackGroupWithOptions(const ImportStacksToStackGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportStacksToStackGroupShrinkRequest request = ImportStacksToStackGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationPreferences()) {
    request.setOperationPreferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationPreferences(), "OperationPreferences", "json"));
  }

  if (!!tmpReq.hasResourceDirectoryFolderIds()) {
    request.setResourceDirectoryFolderIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceDirectoryFolderIds(), "ResourceDirectoryFolderIds", "json"));
  }

  if (!!tmpReq.hasStackArns()) {
    request.setStackArnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.stackArns(), "StackArns", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOperationDescription()) {
    query["OperationDescription"] = request.operationDescription();
  }

  if (!!request.hasOperationPreferencesShrink()) {
    query["OperationPreferences"] = request.operationPreferencesShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceDirectoryFolderIdsShrink()) {
    query["ResourceDirectoryFolderIds"] = request.resourceDirectoryFolderIdsShrink();
  }

  if (!!request.hasStackArnsShrink()) {
    query["StackArns"] = request.stackArnsShrink();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportStacksToStackGroup"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportStacksToStackGroupResponse>();
}

/**
 * @summary Import stacks from multiple different accounts into a stack group.
 *
 * @param request ImportStacksToStackGroupRequest
 * @return ImportStacksToStackGroupResponse
 */
ImportStacksToStackGroupResponse Client::importStacksToStackGroup(const ImportStacksToStackGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importStacksToStackGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the events of an AI task.
 *
 * @param request ListAITaskEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAITaskEventsResponse
 */
ListAITaskEventsResponse Client::listAITaskEventsWithOptions(const ListAITaskEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAITaskEvents"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAITaskEventsResponse>();
}

/**
 * @summary Queries the events of an AI task.
 *
 * @param request ListAITaskEventsRequest
 * @return ListAITaskEventsResponse
 */
ListAITaskEventsResponse Client::listAITaskEvents(const ListAITaskEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAITaskEventsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AI tasks.
 *
 * @param request ListAITasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAITasksResponse
 */
ListAITasksResponse Client::listAITasksWithOptions(const ListAITasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAITasks"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAITasksResponse>();
}

/**
 * @summary Queries a list of AI tasks.
 *
 * @param request ListAITasksRequest
 * @return ListAITasksResponse
 */
ListAITasksResponse Client::listAITasks(const ListAITasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAITasksWithOptions(request, runtime);
}

/**
 * @summary Queries change sets.
 *
 * @param request ListChangeSetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChangeSetsResponse
 */
ListChangeSetsResponse Client::listChangeSetsWithOptions(const ListChangeSetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeSetId()) {
    query["ChangeSetId"] = request.changeSetId();
  }

  if (!!request.hasChangeSetName()) {
    query["ChangeSetName"] = request.changeSetName();
  }

  if (!!request.hasExecutionStatus()) {
    query["ExecutionStatus"] = request.executionStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChangeSets"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChangeSetsResponse>();
}

/**
 * @summary Queries change sets.
 *
 * @param request ListChangeSetsRequest
 * @return ListChangeSetsResponse
 */
ListChangeSetsResponse Client::listChangeSets(const ListChangeSetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChangeSetsWithOptions(request, runtime);
}

/**
 * @summary Queries a diagnostic report.
 *
 * @param request ListDiagnosticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDiagnosticsResponse
 */
ListDiagnosticsResponse Client::listDiagnosticsWithOptions(const ListDiagnosticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDiagnosticKey()) {
    query["DiagnosticKey"] = request.diagnosticKey();
  }

  if (!!request.hasDiagnosticProduct()) {
    query["DiagnosticProduct"] = request.diagnosticProduct();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDiagnostics"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDiagnosticsResponse>();
}

/**
 * @summary Queries a diagnostic report.
 *
 * @param request ListDiagnosticsRequest
 * @return ListDiagnosticsResponse
 */
ListDiagnosticsResponse Client::listDiagnostics(const ListDiagnosticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDiagnosticsWithOptions(request, runtime);
}

/**
 * @summary Queries the registration records of a resource.
 *
 * @param request ListResourceTypeRegistrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTypeRegistrationsResponse
 */
ListResourceTypeRegistrationsResponse Client::listResourceTypeRegistrationsWithOptions(const ListResourceTypeRegistrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegistrationId()) {
    query["RegistrationId"] = request.registrationId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTypeRegistrations"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceTypeRegistrationsResponse>();
}

/**
 * @summary Queries the registration records of a resource.
 *
 * @param request ListResourceTypeRegistrationsRequest
 * @return ListResourceTypeRegistrationsResponse
 */
ListResourceTypeRegistrationsResponse Client::listResourceTypeRegistrations(const ListResourceTypeRegistrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceTypeRegistrationsWithOptions(request, runtime);
}

/**
 * @summary Queries the versions of resource types, including the resource types created by you and provided by Resource Orchestration Service (ROS).
 *
 * @param request ListResourceTypeVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTypeVersionsResponse
 */
ListResourceTypeVersionsResponse Client::listResourceTypeVersionsWithOptions(const ListResourceTypeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTypeVersions"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceTypeVersionsResponse>();
}

/**
 * @summary Queries the versions of resource types, including the resource types created by you and provided by Resource Orchestration Service (ROS).
 *
 * @param request ListResourceTypeVersionsRequest
 * @return ListResourceTypeVersionsResponse
 */
ListResourceTypeVersionsResponse Client::listResourceTypeVersions(const ListResourceTypeVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceTypeVersionsWithOptions(request, runtime);
}

/**
 * @summary This topic provides an example on how to query the list of resource types supported by Resource Orchestration Service (ROS).
 *
 * @description For more information about errors common to all operations, see [Common error codes](/help/en/resource-orchestration-service/latest/common-error-codes).
 *
 * @param request ListResourceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypesWithOptions(const ListResourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.provider();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTypes"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceTypesResponse>();
}

/**
 * @summary This topic provides an example on how to query the list of resource types supported by Resource Orchestration Service (ROS).
 *
 * @description For more information about errors common to all operations, see [Common error codes](/help/en/resource-orchestration-service/latest/common-error-codes).
 *
 * @param request ListResourceTypesRequest
 * @return ListResourceTypesResponse
 */
ListResourceTypesResponse Client::listResourceTypes(const ListResourceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceTypesWithOptions(request, runtime);
}

/**
 * @summary Queries a stack and the resource events of the stack.
 *
 * @param request ListStackEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackEventsResponse
 */
ListStackEventsResponse Client::listStackEventsWithOptions(const ListStackEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogicalResourceId()) {
    query["LogicalResourceId"] = request.logicalResourceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackEvents"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackEventsResponse>();
}

/**
 * @summary Queries a stack and the resource events of the stack.
 *
 * @param request ListStackEventsRequest
 * @return ListStackEventsResponse
 */
ListStackEventsResponse Client::listStackEvents(const ListStackEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the results of an operation on a stack group.
 *
 * @description In this example, the operation ID `6da106ca-1784-4a6f-a7e1-e723863d∗∗∗∗` is set to query the results of an operation on a stack group named `MyStackGroup`. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
 *
 * @param request ListStackGroupOperationResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackGroupOperationResultsResponse
 */
ListStackGroupOperationResultsResponse Client::listStackGroupOperationResultsWithOptions(const ListStackGroupOperationResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationId()) {
    query["OperationId"] = request.operationId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackGroupOperationResults"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackGroupOperationResultsResponse>();
}

/**
 * @summary Queries the results of an operation on a stack group.
 *
 * @description In this example, the operation ID `6da106ca-1784-4a6f-a7e1-e723863d∗∗∗∗` is set to query the results of an operation on a stack group named `MyStackGroup`. The stack group is granted self-managed permissions and created in the China (Hangzhou) region.
 *
 * @param request ListStackGroupOperationResultsRequest
 * @return ListStackGroupOperationResultsResponse
 */
ListStackGroupOperationResultsResponse Client::listStackGroupOperationResults(const ListStackGroupOperationResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackGroupOperationResultsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about stack group operations in an Alibaba Cloud region.
 *
 * @param request ListStackGroupOperationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackGroupOperationsResponse
 */
ListStackGroupOperationsResponse Client::listStackGroupOperationsWithOptions(const ListStackGroupOperationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackGroupOperations"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackGroupOperationsResponse>();
}

/**
 * @summary Queries the information about stack group operations in an Alibaba Cloud region.
 *
 * @param request ListStackGroupOperationsRequest
 * @return ListStackGroupOperationsResponse
 */
ListStackGroupOperationsResponse Client::listStackGroupOperations(const ListStackGroupOperationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackGroupOperationsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of stack groups in an Alibaba Cloud region.
 *
 * @description In this example, the list of stack groups that are in the ACTIVE state and deployed in the China (Hangzhou) region is queried.
 *
 * @param request ListStackGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackGroupsResponse
 */
ListStackGroupsResponse Client::listStackGroupsWithOptions(const ListStackGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackGroups"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackGroupsResponse>();
}

/**
 * @summary Queries a list of stack groups in an Alibaba Cloud region.
 *
 * @description In this example, the list of stack groups that are in the ACTIVE state and deployed in the China (Hangzhou) region is queried.
 *
 * @param request ListStackGroupsRequest
 * @return ListStackGroupsResponse
 */
ListStackGroupsResponse Client::listStackGroups(const ListStackGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of stack instances that are associated with a stack group in an Alibaba Cloud region.
 *
 * @description In this example, the list of stack instances that are associated with a stack group named `MyStackGroup` is queried. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
 *
 * @param request ListStackInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackInstancesResponse
 */
ListStackInstancesResponse Client::listStackInstancesWithOptions(const ListStackInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasStackInstanceAccountId()) {
    query["StackInstanceAccountId"] = request.stackInstanceAccountId();
  }

  if (!!request.hasStackInstanceRegionId()) {
    query["StackInstanceRegionId"] = request.stackInstanceRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackInstances"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackInstancesResponse>();
}

/**
 * @summary Queries the list of stack instances that are associated with a stack group in an Alibaba Cloud region.
 *
 * @description In this example, the list of stack instances that are associated with a stack group named `MyStackGroup` is queried. The stack group is granted self-managed permissions and deployed in the China (Hangzhou) region.
 *
 * @param request ListStackInstancesRequest
 * @return ListStackInstancesResponse
 */
ListStackInstancesResponse Client::listStackInstances(const ListStackInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackInstancesWithOptions(request, runtime);
}

/**
 * @summary Detects stack-related operation risks and returns missing permissions and the causes of the risks.
 *
 * @description The ListStackOperationRisks operation is suitable for the following scenarios:
 * *   You want to detect high risks that may arise in resources when you delete a stack that contains the resources, and query the cause of each risk in a resource.
 * *   When you create a stack, the creation may fail. In this case, you can call this operation to check which types of permissions that are required to create stacks are missing.
 *
 * @param request ListStackOperationRisksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackOperationRisksResponse
 */
ListStackOperationRisksResponse Client::listStackOperationRisksWithOptions(const ListStackOperationRisksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.operationType();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.ramRoleName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRetainAllResources()) {
    query["RetainAllResources"] = request.retainAllResources();
  }

  if (!!request.hasRetainResources()) {
    query["RetainResources"] = request.retainResources();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListStackOperationRisks"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackOperationRisksResponse>();
}

/**
 * @summary Detects stack-related operation risks and returns missing permissions and the causes of the risks.
 *
 * @description The ListStackOperationRisks operation is suitable for the following scenarios:
 * *   You want to detect high risks that may arise in resources when you delete a stack that contains the resources, and query the cause of each risk in a resource.
 * *   When you create a stack, the creation may fail. In this case, you can call this operation to check which types of permissions that are required to create stacks are missing.
 *
 * @param request ListStackOperationRisksRequest
 * @return ListStackOperationRisksResponse
 */
ListStackOperationRisksResponse Client::listStackOperationRisks(const ListStackOperationRisksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackOperationRisksWithOptions(request, runtime);
}

/**
 * @summary The query token. Set this parameter to the NextToken value returned in the last API call.
 *
 * @param request ListStackResourceDriftsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackResourceDriftsResponse
 */
ListStackResourceDriftsResponse Client::listStackResourceDriftsWithOptions(const ListStackResourceDriftsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceDriftStatus()) {
    query["ResourceDriftStatus"] = request.resourceDriftStatus();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackResourceDrifts"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackResourceDriftsResponse>();
}

/**
 * @summary The query token. Set this parameter to the NextToken value returned in the last API call.
 *
 * @param request ListStackResourceDriftsRequest
 * @return ListStackResourceDriftsResponse
 */
ListStackResourceDriftsResponse Client::listStackResourceDrifts(const ListStackResourceDriftsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackResourceDriftsWithOptions(request, runtime);
}

/**
 * @summary This topic provides an example on how to query the resources in a specified stack. In this example, the resources in the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Hangzhou) region are queried.
 *
 * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
 *
 * @param request ListStackResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStackResourcesResponse
 */
ListStackResourcesResponse Client::listStackResourcesWithOptions(const ListStackResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStackResources"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStackResourcesResponse>();
}

/**
 * @summary This topic provides an example on how to query the resources in a specified stack. In this example, the resources in the stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Hangzhou) region are queried.
 *
 * @description For more information about common request parameters, see [Common parameters](https://help.aliyun.com/document_detail/131957.html).
 *
 * @param request ListStackResourcesRequest
 * @return ListStackResourcesResponse
 */
ListStackResourcesResponse Client::listStackResources(const ListStackResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStackResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of stacks.
 *
 * @description ###
 * This topic provides an example on how to query a list of stacks. In this example, the stacks that are deployed in the China (Hangzhou) region are queried.
 *
 * @param request ListStacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStacksResponse
 */
ListStacksResponse Client::listStacksWithOptions(const ListStacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentStackId()) {
    query["ParentStackId"] = request.parentStackId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShowNestedStack()) {
    query["ShowNestedStack"] = request.showNestedStack();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStackIds()) {
    query["StackIds"] = request.stackIds();
  }

  if (!!request.hasStackName()) {
    query["StackName"] = request.stackName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStacks"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStacksResponse>();
}

/**
 * @summary Queries a list of stacks.
 *
 * @description ###
 * This topic provides an example on how to query a list of stacks. In this example, the stacks that are deployed in the China (Hangzhou) region are queried.
 *
 * @param request ListStacksRequest
 * @return ListStacksResponse
 */
ListStacksResponse Client::listStacks(const ListStacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStacksWithOptions(request, runtime);
}

/**
 * @summary Queries the tag keys that are added to resources in a template or stack in an Alibaba Cloud region.
 *
 * @description In this example, the tag keys that are added to a stack in the China (Hangzhou) region are queried.
 *
 * @param request ListTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeysWithOptions(const ListTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagKeys"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagKeysResponse>();
}

/**
 * @summary Queries the tag keys that are added to resources in a template or stack in an Alibaba Cloud region.
 *
 * @description In this example, the tag keys that are added to a stack in the China (Hangzhou) region are queried.
 *
 * @param request ListTagKeysRequest
 * @return ListTagKeysResponse
 */
ListTagKeysResponse Client::listTagKeys(const ListTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to resources in a template or stack in an Alibaba Cloud region.
 *
 * @description ###
 * *   To specify the query object, specify ResourceId or Tag in the request. Tag consists of Key and Value.
 * *   If you specify Tag and ResourceId, ROS resources that match both the parameters are returned.
 * This topic provides an example on how to query the tags that are added to a stack. In this example, the stack ID is `6bc589b5-9c02-4944-8fc3-f3624234****`. The stack is deployed in the China (Hangzhou) region.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are added to resources in a template or stack in an Alibaba Cloud region.
 *
 * @description ###
 * *   To specify the query object, specify ResourceId or Tag in the request. Tag consists of Key and Value.
 * *   If you specify Tag and ResourceId, ROS resources that match both the parameters are returned.
 * This topic provides an example on how to query the tags that are added to a stack. In this example, the stack ID is `6bc589b5-9c02-4944-8fc3-f3624234****`. The stack is deployed in the China (Hangzhou) region.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tag values that are added to resources in a template or stack in an Alibaba Cloud region.
 *
 * @description In this example, the tag values of `TagKey1` that is added to a stack in the China (Hangzhou) region are queried.
 *
 * @param request ListTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValuesWithOptions(const ListTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagValues"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagValuesResponse>();
}

/**
 * @summary Queries the tag values that are added to resources in a template or stack in an Alibaba Cloud region.
 *
 * @description In this example, the tag values of `TagKey1` that is added to a stack in the China (Hangzhou) region are queried.
 *
 * @param request ListTagValuesRequest
 * @return ListTagValuesResponse
 */
ListTagValuesResponse Client::listTagValues(const ListTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagValuesWithOptions(request, runtime);
}

/**
 * @summary Queries scenarios.
 *
 * @description In this example, the scenarios that are created in the China (Hangzhou) region are queried. In the response, a scenario of the Resource Management and a scenario of the Resource Replication type are returned.
 *
 * @param request ListTemplateScratchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateScratchesResponse
 */
ListTemplateScratchesResponse Client::listTemplateScratchesWithOptions(const ListTemplateScratchesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  if (!!request.hasTemplateScratchType()) {
    query["TemplateScratchType"] = request.templateScratchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplateScratches"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateScratchesResponse>();
}

/**
 * @summary Queries scenarios.
 *
 * @description In this example, the scenarios that are created in the China (Hangzhou) region are queried. In the response, a scenario of the Resource Management and a scenario of the Resource Replication type are returned.
 *
 * @param request ListTemplateScratchesRequest
 * @return ListTemplateScratchesResponse
 */
ListTemplateScratchesResponse Client::listTemplateScratches(const ListTemplateScratchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplateScratchesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of versions of a template.
 *
 * @param request ListTemplateVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateVersionsResponse
 */
ListTemplateVersionsResponse Client::listTemplateVersionsWithOptions(const ListTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplateVersions"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateVersionsResponse>();
}

/**
 * @summary Queries the list of versions of a template.
 *
 * @param request ListTemplateVersionsRequest
 * @return ListTemplateVersionsResponse
 */
ListTemplateVersionsResponse Client::listTemplateVersions(const ListTemplateVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplateVersionsWithOptions(request, runtime);
}

/**
 * @summary List Templates
 *
 * @param request ListTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasIncludeTags()) {
    query["IncludeTags"] = request.includeTags();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShareType()) {
    query["ShareType"] = request.shareType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary List Templates
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatesWithOptions(request, runtime);
}

/**
 * @summary Moves a resource to a specific resource group.
 *
 * @description In this example, a stack deployed in the `China (Hangzhou)` region is moved to a specific resource group. The ID of the stack is `4e8611cb-251e-42b7-b9cb-3496362c****` and the ID of the resource group is `rg-acfm3peow3k****`.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Moves a resource to a specific resource group.
 *
 * @description In this example, a stack deployed in the `China (Hangzhou)` region is moved to a specific resource group. The ID of the stack is `4e8611cb-251e-42b7-b9cb-3496362c****` and the ID of the resource group is `rg-acfm3peow3k****`.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Previews the information about a stack that you want to create based on a template. You can call this operation to verify whether the template resources are valid.
 *
 * @description This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template and preview the information about the stack. In this example, the `template body` is `{"ROSTemplateFormatVersion":"2015-09-01"}`.
 *
 * @param request PreviewStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewStackResponse
 */
PreviewStackResponse Client::previewStackWithOptions(const PreviewStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisableRollback()) {
    query["DisableRollback"] = request.disableRollback();
  }

  if (!!request.hasEnablePreConfig()) {
    query["EnablePreConfig"] = request.enablePreConfig();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.parallelism();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStackName()) {
    query["StackName"] = request.stackName();
  }

  if (!!request.hasStackPolicyBody()) {
    query["StackPolicyBody"] = request.stackPolicyBody();
  }

  if (!!request.hasStackPolicyURL()) {
    query["StackPolicyURL"] = request.stackPolicyURL();
  }

  if (!!request.hasTaintResources()) {
    query["TaintResources"] = request.taintResources();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  if (!!request.hasTemplateScratchRegionId()) {
    query["TemplateScratchRegionId"] = request.templateScratchRegionId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  if (!!request.hasTimeoutInMinutes()) {
    query["TimeoutInMinutes"] = request.timeoutInMinutes();
  }

  if (!!request.hasUsePreviousParameters()) {
    query["UsePreviousParameters"] = request.usePreviousParameters();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviewStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewStackResponse>();
}

/**
 * @summary Previews the information about a stack that you want to create based on a template. You can call this operation to verify whether the template resources are valid.
 *
 * @description This topic provides an example on how to create a stack named `MyStack` in the China (Hangzhou) region by using a template and preview the information about the stack. In this example, the `template body` is `{"ROSTemplateFormatVersion":"2015-09-01"}`.
 *
 * @param request PreviewStackRequest
 * @return PreviewStackResponse
 */
PreviewStackResponse Client::previewStack(const PreviewStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return previewStackWithOptions(request, runtime);
}

/**
 * @summary Creates a new resource type, or creates a new version for an existing resource type.
 *
 * @description *   Versions increase from v1.
 * *   If you create a new resource type, v1 is used as the default version of the resource type. You can call the SetResourceType operation to change the default version of a resource type.
 *
 * @param request RegisterResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterResourceTypeResponse
 */
RegisterResourceTypeResponse Client::registerResourceTypeWithOptions(const RegisterResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RegisterResourceType"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterResourceTypeResponse>();
}

/**
 * @summary Creates a new resource type, or creates a new version for an existing resource type.
 *
 * @description *   Versions increase from v1.
 * *   If you create a new resource type, v1 is used as the default version of the resource type. You can call the SetResourceType operation to change the default version of a resource type.
 *
 * @param request RegisterResourceTypeRequest
 * @return RegisterResourceTypeResponse
 */
RegisterResourceTypeResponse Client::registerResourceType(const RegisterResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerResourceTypeWithOptions(request, runtime);
}

/**
 * @summary 修改资源栈的删除保护属性
 *
 * @param request SetDeletionProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDeletionProtectionResponse
 */
SetDeletionProtectionResponse Client::setDeletionProtectionWithOptions(const SetDeletionProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.deletionProtection();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDeletionProtection"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDeletionProtectionResponse>();
}

/**
 * @summary 修改资源栈的删除保护属性
 *
 * @param request SetDeletionProtectionRequest
 * @return SetDeletionProtectionResponse
 */
SetDeletionProtectionResponse Client::setDeletionProtection(const SetDeletionProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDeletionProtectionWithOptions(request, runtime);
}

/**
 * @summary Modifies a resource type or a version of a resource type.
 *
 * @param request SetResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetResourceTypeResponse
 */
SetResourceTypeResponse Client::setResourceTypeWithOptions(const SetResourceTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultVersionId()) {
    query["DefaultVersionId"] = request.defaultVersionId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetResourceType"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetResourceTypeResponse>();
}

/**
 * @summary Modifies a resource type or a version of a resource type.
 *
 * @param request SetResourceTypeRequest
 * @return SetResourceTypeResponse
 */
SetResourceTypeResponse Client::setResourceType(const SetResourceTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setResourceTypeWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to configure a stack policy.
 *
 * @description In this example, a stack policy is configured for a stack deployed in the `China (Hangzhou)` region whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The URL to the stack policy body is `oss://ros/stack-policy/demo`.
 *
 * @param request SetStackPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetStackPolicyResponse
 */
SetStackPolicyResponse Client::setStackPolicyWithOptions(const SetStackPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStackPolicyBody()) {
    query["StackPolicyBody"] = request.stackPolicyBody();
  }

  if (!!request.hasStackPolicyURL()) {
    query["StackPolicyURL"] = request.stackPolicyURL();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetStackPolicy"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetStackPolicyResponse>();
}

/**
 * @summary You can call this operation to configure a stack policy.
 *
 * @description In this example, a stack policy is configured for a stack deployed in the `China (Hangzhou)` region whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The URL to the stack policy body is `oss://ros/stack-policy/demo`.
 *
 * @param request SetStackPolicyRequest
 * @return SetStackPolicyResponse
 */
SetStackPolicyResponse Client::setStackPolicy(const SetStackPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setStackPolicyWithOptions(request, runtime);
}

/**
 * @summary Shares or unshares a template.
 *
 * @description In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is shared with an Alibaba Cloud account. The ID of the Alibaba Cloud account is `151266687691****`.
 * > The recipient Alibaba Cloud account (ID: `151266687691****`) can authorize RAM users to use the shared template.
 *
 * @param request SetTemplatePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetTemplatePermissionResponse
 */
SetTemplatePermissionResponse Client::setTemplatePermissionWithOptions(const SetTemplatePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.accountIds();
  }

  if (!!request.hasShareOption()) {
    query["ShareOption"] = request.shareOption();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  if (!!request.hasVersionOption()) {
    query["VersionOption"] = request.versionOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTemplatePermission"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTemplatePermissionResponse>();
}

/**
 * @summary Shares or unshares a template.
 *
 * @description In this example, the template whose ID is `5ecd1e10-b0e9-4389-a565-e4c15efc****` is shared with an Alibaba Cloud account. The ID of the Alibaba Cloud account is `151266687691****`.
 * > The recipient Alibaba Cloud account (ID: `151266687691****`) can authorize RAM users to use the shared template.
 *
 * @param request SetTemplatePermissionRequest
 * @return SetTemplatePermissionResponse
 */
SetTemplatePermissionResponse Client::setTemplatePermission(const SetTemplatePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTemplatePermissionWithOptions(request, runtime);
}

/**
 * @summary Sends a signal to a resource in a stack.
 *
 * @param request SignalResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignalResourceResponse
 */
SignalResourceResponse Client::signalResourceWithOptions(const SignalResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLogicalResourceId()) {
    query["LogicalResourceId"] = request.logicalResourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.uniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SignalResource"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SignalResourceResponse>();
}

/**
 * @summary Sends a signal to a resource in a stack.
 *
 * @param request SignalResourceRequest
 * @return SignalResourceResponse
 */
SignalResourceResponse Client::signalResource(const SignalResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signalResourceWithOptions(request, runtime);
}

/**
 * @summary Stops a stack group operation.
 *
 * @description This topic provides an example on how to stop a stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863****` in the China (Hangzhou) region.
 *
 * @param request StopStackGroupOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopStackGroupOperationResponse
 */
StopStackGroupOperationResponse Client::stopStackGroupOperationWithOptions(const StopStackGroupOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationId()) {
    query["OperationId"] = request.operationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopStackGroupOperation"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopStackGroupOperationResponse>();
}

/**
 * @summary Stops a stack group operation.
 *
 * @description This topic provides an example on how to stop a stack group operation whose ID is `6da106ca-1784-4a6f-a7e1-e723863****` in the China (Hangzhou) region.
 *
 * @param request StopStackGroupOperationRequest
 * @return StopStackGroupOperationResponse
 */
StopStackGroupOperationResponse Client::stopStackGroupOperation(const StopStackGroupOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopStackGroupOperationWithOptions(request, runtime);
}

/**
 * @summary Creates and adds tags to resources.
 *
 * @description This topic provides an example on how to create a tag and add the tag to a stack. In this example, the stack ID is `7fee80e1-8c48-4c2f-8300-0f6dc40b****`, the tag key is `FinanceDept`, and the tag value is `FinanceJoshua`.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates and adds tags to resources.
 *
 * @description This topic provides an example on how to create a tag and add the tag to a stack. In this example, the stack ID is `7fee80e1-8c48-4c2f-8300-0f6dc40b****`, the tag key is `FinanceDept`, and the tag value is `FinanceJoshua`.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources and then deletes the tags.
 *
 * @description This topic provides an example on how to remove all tags from a stack that is deployed in the China (Hangzhou) region. In this example, the stack ID is `46ec7b78-9d5e-4b21-aefd-448c90aa****`.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from resources and then deletes the tags.
 *
 * @description This topic provides an example on how to remove all tags from a stack that is deployed in the China (Hangzhou) region. In this example, the stack ID is `46ec7b78-9d5e-4b21-aefd-448c90aa****`.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a stack.
 *
 * @description The values of parameters in the Parameters section vary based on the value that you specify for the UsePreviousParameters parameter in the request. If you do not add the parameters that are defined in the template to the Parameters section, take note of the following items:
 * *   UsePreviousParameters is set to false: If the template parameters have default values, the default values are used. Otherwise, you must specify values for the template parameters in the Parameters section.
 * *   UsePreviousParameters is set to true: If you specify values for the template parameters when you create a stack, the values are used. If you leave the template parameters empty when you create a stack but the template parameters have default values, the default values are used.
 * This topic describes how to update a stack. In this example, the template body of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Beijing) region is updated to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
 *
 * @param request UpdateStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStackResponse
 */
UpdateStackResponse Client::updateStackWithOptions(const UpdateStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisableRollback()) {
    query["DisableRollback"] = request.disableRollback();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasDryRunOptions()) {
    query["DryRunOptions"] = request.dryRunOptions();
  }

  if (!!request.hasParallelism()) {
    query["Parallelism"] = request.parallelism();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRamRoleName()) {
    query["RamRoleName"] = request.ramRoleName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReplacementOption()) {
    query["ReplacementOption"] = request.replacementOption();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasStackPolicyBody()) {
    query["StackPolicyBody"] = request.stackPolicyBody();
  }

  if (!!request.hasStackPolicyDuringUpdateBody()) {
    query["StackPolicyDuringUpdateBody"] = request.stackPolicyDuringUpdateBody();
  }

  if (!!request.hasStackPolicyDuringUpdateURL()) {
    query["StackPolicyDuringUpdateURL"] = request.stackPolicyDuringUpdateURL();
  }

  if (!!request.hasStackPolicyURL()) {
    query["StackPolicyURL"] = request.stackPolicyURL();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTaintResources()) {
    query["TaintResources"] = request.taintResources();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  if (!!request.hasTimeoutInMinutes()) {
    query["TimeoutInMinutes"] = request.timeoutInMinutes();
  }

  if (!!request.hasUsePreviousParameters()) {
    query["UsePreviousParameters"] = request.usePreviousParameters();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStack"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStackResponse>();
}

/**
 * @summary Updates a stack.
 *
 * @description The values of parameters in the Parameters section vary based on the value that you specify for the UsePreviousParameters parameter in the request. If you do not add the parameters that are defined in the template to the Parameters section, take note of the following items:
 * *   UsePreviousParameters is set to false: If the template parameters have default values, the default values are used. Otherwise, you must specify values for the template parameters in the Parameters section.
 * *   UsePreviousParameters is set to true: If you specify values for the template parameters when you create a stack, the values are used. If you leave the template parameters empty when you create a stack but the template parameters have default values, the default values are used.
 * This topic describes how to update a stack. In this example, the template body of a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****` in the China (Beijing) region is updated to `{"ROSTemplateFormatVersion": "2015-09-01"}`.
 *
 * @param request UpdateStackRequest
 * @return UpdateStackResponse
 */
UpdateStackResponse Client::updateStack(const UpdateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStackWithOptions(request, runtime);
}

/**
 * @summary The region ID of the stack group. You can call the [DescribeRegions]\\(~~131035~~) operation to query the latest list of Alibaba Cloud regions.
 *
 * @description The name of the stack group. The name must be unique within a region.
 * The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
 *
 * @param tmpReq UpdateStackGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStackGroupResponse
 */
UpdateStackGroupResponse Client::updateStackGroupWithOptions(const UpdateStackGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStackGroupShrinkRequest request = UpdateStackGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "AccountIds", "json"));
  }

  if (!!tmpReq.hasAutoDeployment()) {
    request.setAutoDeploymentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.autoDeployment(), "AutoDeployment", "json"));
  }

  if (!!tmpReq.hasDeploymentTargets()) {
    request.setDeploymentTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deploymentTargets(), "DeploymentTargets", "json"));
  }

  if (!!tmpReq.hasOperationPreferences()) {
    request.setOperationPreferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationPreferences(), "OperationPreferences", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regionIds(), "RegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasAdministrationRoleName()) {
    query["AdministrationRoleName"] = request.administrationRoleName();
  }

  if (!!request.hasAutoDeploymentShrink()) {
    query["AutoDeployment"] = request.autoDeploymentShrink();
  }

  if (!!request.hasCapabilities()) {
    query["Capabilities"] = request.capabilities();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeploymentOptions()) {
    query["DeploymentOptions"] = request.deploymentOptions();
  }

  if (!!request.hasDeploymentTargetsShrink()) {
    query["DeploymentTargets"] = request.deploymentTargetsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionRoleName()) {
    query["ExecutionRoleName"] = request.executionRoleName();
  }

  if (!!request.hasOperationDescription()) {
    query["OperationDescription"] = request.operationDescription();
  }

  if (!!request.hasOperationPreferencesShrink()) {
    query["OperationPreferences"] = request.operationPreferencesShrink();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasPermissionModel()) {
    query["PermissionModel"] = request.permissionModel();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.regionIdsShrink();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStackGroup"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStackGroupResponse>();
}

/**
 * @summary The region ID of the stack group. You can call the [DescribeRegions]\\(~~131035~~) operation to query the latest list of Alibaba Cloud regions.
 *
 * @description The name of the stack group. The name must be unique within a region.
 * The name can be up to 255 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must start with a digit or a letter.
 *
 * @param request UpdateStackGroupRequest
 * @return UpdateStackGroupResponse
 */
UpdateStackGroupResponse Client::updateStackGroup(const UpdateStackGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStackGroupWithOptions(request, runtime);
}

/**
 * @summary Updates stack instances in the specified accounts and regions.
 *
 * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. The stack group is granted the self-managed permissions. In this example, stacks of the stack group are updated by using the Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
 *
 * @param tmpReq UpdateStackInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStackInstancesResponse
 */
UpdateStackInstancesResponse Client::updateStackInstancesWithOptions(const UpdateStackInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStackInstancesShrinkRequest request = UpdateStackInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "AccountIds", "json"));
  }

  if (!!tmpReq.hasDeploymentTargets()) {
    request.setDeploymentTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.deploymentTargets(), "DeploymentTargets", "json"));
  }

  if (!!tmpReq.hasOperationPreferences()) {
    request.setOperationPreferencesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationPreferences(), "OperationPreferences", "json"));
  }

  if (!!tmpReq.hasRegionIds()) {
    request.setRegionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regionIds(), "RegionIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDeploymentTargetsShrink()) {
    query["DeploymentTargets"] = request.deploymentTargetsShrink();
  }

  if (!!request.hasOperationDescription()) {
    query["OperationDescription"] = request.operationDescription();
  }

  if (!!request.hasOperationPreferencesShrink()) {
    query["OperationPreferences"] = request.operationPreferencesShrink();
  }

  if (!!request.hasParameterOverrides()) {
    query["ParameterOverrides"] = request.parameterOverrides();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionIdsShrink()) {
    query["RegionIds"] = request.regionIdsShrink();
  }

  if (!!request.hasStackGroupName()) {
    query["StackGroupName"] = request.stackGroupName();
  }

  if (!!request.hasTimeoutInMinutes()) {
    query["TimeoutInMinutes"] = request.timeoutInMinutes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateStackInstances"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStackInstancesResponse>();
}

/**
 * @summary Updates stack instances in the specified accounts and regions.
 *
 * @description In this topic, the stack group named `MyStackGroup` that is created in the China (Hangzhou) region is used. The stack group is granted the self-managed permissions. In this example, stacks of the stack group are updated by using the Alibaba Cloud accounts whose IDs are `151266687691****` and `141261387191****` in the China (Hangzhou) region and China (Beijing) region.
 *
 * @param request UpdateStackInstancesRequest
 * @return UpdateStackInstancesResponse
 */
UpdateStackInstancesResponse Client::updateStackInstances(const UpdateStackInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStackInstancesWithOptions(request, runtime);
}

/**
 * @summary Corrects a template to eliminate stack drift.
 *
 * @description Limits: You can eliminate only drift on stacks that have drifted. You must call the [DetectStackDrift](https://help.aliyun.com/document_detail/155094.html) operation to perform drift detection on a stack, call the [GetStackDriftDetectionStatus](https://help.aliyun.com/document_detail/155097.html) operation to query the drift status of the stack to make sure that the stack has drifted, and then call the UpdateStackTemplateByResources operation to eliminate drift.
 * In this topic, drift is eliminated for a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The stack is deployed in the China (Hangzhou) region.
 *
 * @param request UpdateStackTemplateByResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStackTemplateByResourcesResponse
 */
UpdateStackTemplateByResourcesResponse Client::updateStackTemplateByResourcesWithOptions(const UpdateStackTemplateByResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasLogicalResourceId()) {
    query["LogicalResourceId"] = request.logicalResourceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStackId()) {
    query["StackId"] = request.stackId();
  }

  if (!!request.hasTemplateFormat()) {
    query["TemplateFormat"] = request.templateFormat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateStackTemplateByResources"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStackTemplateByResourcesResponse>();
}

/**
 * @summary Corrects a template to eliminate stack drift.
 *
 * @description Limits: You can eliminate only drift on stacks that have drifted. You must call the [DetectStackDrift](https://help.aliyun.com/document_detail/155094.html) operation to perform drift detection on a stack, call the [GetStackDriftDetectionStatus](https://help.aliyun.com/document_detail/155097.html) operation to query the drift status of the stack to make sure that the stack has drifted, and then call the UpdateStackTemplateByResources operation to eliminate drift.
 * In this topic, drift is eliminated for a stack whose ID is `4a6c9851-3b0f-4f5f-b4ca-a14bf691****`. The stack is deployed in the China (Hangzhou) region.
 *
 * @param request UpdateStackTemplateByResourcesRequest
 * @return UpdateStackTemplateByResourcesResponse
 */
UpdateStackTemplateByResourcesResponse Client::updateStackTemplateByResources(const UpdateStackTemplateByResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStackTemplateByResourcesWithOptions(request, runtime);
}

/**
 * @summary Update Template
 *
 * @description When updating a template, please note:   
 * - If you specify `TemplateBody` or `TemplateURL`, the template version will be incremented by 1 after a successful update. For example, the version changes from v1 to v2.
 * - If neither `TemplateBody` nor `TemplateURL` is specified, the template version remains unchanged.
 * - A template can have up to 100 versions. If the version limit is reached, the template update will fail, and you need to recreate the template.
 *
 * @param request UpdateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasIsDraft()) {
    query["IsDraft"] = request.isDraft();
  }

  if (!!request.hasRotateStrategy()) {
    query["RotateStrategy"] = request.rotateStrategy();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasValidationOptions()) {
    query["ValidationOptions"] = request.validationOptions();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary Update Template
 *
 * @description When updating a template, please note:   
 * - If you specify `TemplateBody` or `TemplateURL`, the template version will be incremented by 1 after a successful update. For example, the version changes from v1 to v2.
 * - If neither `TemplateBody` nor `TemplateURL` is specified, the template version remains unchanged.
 * - A template can have up to 100 versions. If the version limit is reached, the template update will fail, and you need to recreate the template.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a scenario.
 *
 * @description ### [](#)Resource replication scenario
 * Resource Orchestration Service (ROS) allows you to update a resource replication scenario. The updates that you make to a resource replication scenario do not affect the stack that is generated by using the resource scenario. You can call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 * ### [](#)Resource migration scenario
 * *   If you want to update a resource migration scenario in which the migrated source resources are retained, you can delete the source resources to manage the updated resource migration scenario. You can also call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 *     **
 *     **Note** Make sure that the source resources that you want to delete from a resource migration scenario are associated only with the resource scenario. Otherwise, the source resources fail to be deleted.
 * *   If you want to update a resource migration scenario in which the migrated source resources are deleted, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 * ### [](#)Resource management scenario
 * If you want to update a resource management scenario after you use the resource scenario to manage resources, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 * ### [](#)Resource detection scenario
 * After you update a resource detection scenario, ROS obtains the most recent data from Resource Center and renders the architecture diagram.
 * This topic provides an example on how to update a resource scenario. In this example, the ID of a virtual private cloud (VPC) in a resource scenario whose ID is `ts-7f7a704cf71c49a6****` is updated to `vpc-bp1m6fww66xbntjyc****`.
 *
 * @param tmpReq UpdateTemplateScratchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateScratchResponse
 */
UpdateTemplateScratchResponse Client::updateTemplateScratchWithOptions(const UpdateTemplateScratchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTemplateScratchShrinkRequest request = UpdateTemplateScratchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPreferenceParameters()) {
    request.setPreferenceParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.preferenceParameters(), "PreferenceParameters", "json"));
  }

  if (!!tmpReq.hasSourceResourceGroup()) {
    request.setSourceResourceGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceResourceGroup(), "SourceResourceGroup", "json"));
  }

  if (!!tmpReq.hasSourceResources()) {
    request.setSourceResourcesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceResources(), "SourceResources", "json"));
  }

  if (!!tmpReq.hasSourceTag()) {
    request.setSourceTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceTag(), "SourceTag", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecutionMode()) {
    query["ExecutionMode"] = request.executionMode();
  }

  if (!!request.hasLogicalIdStrategy()) {
    query["LogicalIdStrategy"] = request.logicalIdStrategy();
  }

  if (!!request.hasPreferenceParametersShrink()) {
    query["PreferenceParameters"] = request.preferenceParametersShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceResourceGroupShrink()) {
    query["SourceResourceGroup"] = request.sourceResourceGroupShrink();
  }

  if (!!request.hasSourceResourcesShrink()) {
    query["SourceResources"] = request.sourceResourcesShrink();
  }

  if (!!request.hasSourceTagShrink()) {
    query["SourceTag"] = request.sourceTagShrink();
  }

  if (!!request.hasTemplateScratchId()) {
    query["TemplateScratchId"] = request.templateScratchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTemplateScratch"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateScratchResponse>();
}

/**
 * @summary Updates a scenario.
 *
 * @description ### [](#)Resource replication scenario
 * Resource Orchestration Service (ROS) allows you to update a resource replication scenario. The updates that you make to a resource replication scenario do not affect the stack that is generated by using the resource scenario. You can call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 * ### [](#)Resource migration scenario
 * *   If you want to update a resource migration scenario in which the migrated source resources are retained, you can delete the source resources to manage the updated resource migration scenario. You can also call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 *     **
 *     **Note** Make sure that the source resources that you want to delete from a resource migration scenario are associated only with the resource scenario. Otherwise, the source resources fail to be deleted.
 * *   If you want to update a resource migration scenario in which the migrated source resources are deleted, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 * ### [](#)Resource management scenario
 * If you want to update a resource management scenario after you use the resource scenario to manage resources, you can only call the [GenerateTemplateByScratch](https://help.aliyun.com/document_detail/610829.html) operation to generate a template for the resource scenario.
 * ### [](#)Resource detection scenario
 * After you update a resource detection scenario, ROS obtains the most recent data from Resource Center and renders the architecture diagram.
 * This topic provides an example on how to update a resource scenario. In this example, the ID of a virtual private cloud (VPC) in a resource scenario whose ID is `ts-7f7a704cf71c49a6****` is updated to `vpc-bp1m6fww66xbntjyc****`.
 *
 * @param request UpdateTemplateScratchRequest
 * @return UpdateTemplateScratchResponse
 */
UpdateTemplateScratchResponse Client::updateTemplateScratch(const UpdateTemplateScratchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTemplateScratchWithOptions(request, runtime);
}

/**
 * @summary Validates a template by using a template URL or template body. The template is used to create a stack.
 *
 * @description In this example, a template that you want to use to create a stack is validated. `TemplateURL` is set to `oss://ros/template/demo`.
 *
 * @param request ValidateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateTemplateResponse
 */
ValidateTemplateResponse Client::validateTemplateWithOptions(const ValidateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateURL()) {
    query["TemplateURL"] = request.templateURL();
  }

  if (!!request.hasUpdateInfoOptions()) {
    query["UpdateInfoOptions"] = request.updateInfoOptions();
  }

  if (!!request.hasValidationOption()) {
    query["ValidationOption"] = request.validationOption();
  }

  json body = {};
  if (!!request.hasTemplateBody()) {
    body["TemplateBody"] = request.templateBody();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ValidateTemplate"},
    {"version" , "2019-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateTemplateResponse>();
}

/**
 * @summary Validates a template by using a template URL or template body. The template is used to create a stack.
 *
 * @description In this example, a template that you want to use to create a stack is validated. `TemplateURL` is set to `oss://ros/template/demo`.
 *
 * @param request ValidateTemplateRequest
 * @return ValidateTemplateResponse
 */
ValidateTemplateResponse Client::validateTemplate(const ValidateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ROS20190910