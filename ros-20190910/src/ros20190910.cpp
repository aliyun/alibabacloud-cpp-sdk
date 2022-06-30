// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ros20190910.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ROS20190910;

Alibabacloud_ROS20190910::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ros"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ROS20190910::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CancelUpdateStackResponse Alibabacloud_ROS20190910::Client::cancelUpdateStackWithOptions(shared_ptr<CancelUpdateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cancelType)) {
    query->insert(pair<string, string>("CancelType", *request->cancelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelUpdateStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelUpdateStackResponse(callApi(params, req, runtime));
}

CancelUpdateStackResponse Alibabacloud_ROS20190910::Client::cancelUpdateStack(shared_ptr<CancelUpdateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelUpdateStackWithOptions(request, runtime);
}

ContinueCreateStackResponse Alibabacloud_ROS20190910::Client::continueCreateStackWithOptions(shared_ptr<ContinueCreateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parallelism)) {
    query->insert(pair<string, long>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ContinueCreateStackRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<ContinueCreateStackRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recreatingResources)) {
    query->insert(pair<string, vector<string>>("RecreatingResources", *request->recreatingResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContinueCreateStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContinueCreateStackResponse(callApi(params, req, runtime));
}

ContinueCreateStackResponse Alibabacloud_ROS20190910::Client::continueCreateStack(shared_ptr<ContinueCreateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continueCreateStackWithOptions(request, runtime);
}

CreateChangeSetResponse Alibabacloud_ROS20190910::Client::createChangeSetWithOptions(shared_ptr<CreateChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetName)) {
    query->insert(pair<string, string>("ChangeSetName", *request->changeSetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetType)) {
    query->insert(pair<string, string>("ChangeSetType", *request->changeSetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    query->insert(pair<string, bool>("DisableRollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notificationURLs)) {
    query->insert(pair<string, vector<string>>("NotificationURLs", *request->notificationURLs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parallelism)) {
    query->insert(pair<string, long>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateChangeSetRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<CreateChangeSetRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replacementOption)) {
    query->insert(pair<string, string>("ReplacementOption", *request->replacementOption));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateChangeSetRequestResourcesToImport>>(request->resourcesToImport)) {
    query->insert(pair<string, vector<CreateChangeSetRequestResourcesToImport>>("ResourcesToImport", *request->resourcesToImport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackName)) {
    query->insert(pair<string, string>("StackName", *request->stackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyBody)) {
    query->insert(pair<string, string>("StackPolicyBody", *request->stackPolicyBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyDuringUpdateBody)) {
    query->insert(pair<string, string>("StackPolicyDuringUpdateBody", *request->stackPolicyDuringUpdateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyDuringUpdateURL)) {
    query->insert(pair<string, string>("StackPolicyDuringUpdateURL", *request->stackPolicyDuringUpdateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyURL)) {
    query->insert(pair<string, string>("StackPolicyURL", *request->stackPolicyURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePreviousParameters)) {
    query->insert(pair<string, bool>("UsePreviousParameters", *request->usePreviousParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChangeSet"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateChangeSetResponse(callApi(params, req, runtime));
}

CreateChangeSetResponse Alibabacloud_ROS20190910::Client::createChangeSet(shared_ptr<CreateChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChangeSetWithOptions(request, runtime);
}

CreateStackResponse Alibabacloud_ROS20190910::Client::createStackWithOptions(shared_ptr<CreateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createOption)) {
    query->insert(pair<string, string>("CreateOption", *request->createOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deletionProtection)) {
    query->insert(pair<string, string>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    query->insert(pair<string, bool>("DisableRollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->notificationURLs)) {
    query->insert(pair<string, vector<string>>("NotificationURLs", *request->notificationURLs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parallelism)) {
    query->insert(pair<string, long>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateStackRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<CreateStackRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackName)) {
    query->insert(pair<string, string>("StackName", *request->stackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyBody)) {
    query->insert(pair<string, string>("StackPolicyBody", *request->stackPolicyBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyURL)) {
    query->insert(pair<string, string>("StackPolicyURL", *request->stackPolicyURL));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateStackRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<CreateStackRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchRegionId)) {
    query->insert(pair<string, string>("TemplateScratchRegionId", *request->templateScratchRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStackResponse(callApi(params, req, runtime));
}

CreateStackResponse Alibabacloud_ROS20190910::Client::createStack(shared_ptr<CreateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStackWithOptions(request, runtime);
}

CreateStackGroupResponse Alibabacloud_ROS20190910::Client::createStackGroupWithOptions(shared_ptr<CreateStackGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStackGroupShrinkRequest> request = make_shared<CreateStackGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateStackGroupRequestAutoDeployment>(tmpReq->autoDeployment)) {
    request->autoDeploymentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->autoDeployment->toMap()), make_shared<string>("AutoDeployment"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->administrationRoleName)) {
    query->insert(pair<string, string>("AdministrationRoleName", *request->administrationRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoDeploymentShrink)) {
    query->insert(pair<string, string>("AutoDeployment", *request->autoDeploymentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionRoleName)) {
    query->insert(pair<string, string>("ExecutionRoleName", *request->executionRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateStackGroupShrinkRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<CreateStackGroupShrinkRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionModel)) {
    query->insert(pair<string, string>("PermissionModel", *request->permissionModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStackGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStackGroupResponse(callApi(params, req, runtime));
}

CreateStackGroupResponse Alibabacloud_ROS20190910::Client::createStackGroup(shared_ptr<CreateStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStackGroupWithOptions(request, runtime);
}

CreateStackInstancesResponse Alibabacloud_ROS20190910::Client::createStackInstancesWithOptions(shared_ptr<CreateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStackInstancesShrinkRequest> request = make_shared<CreateStackInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateStackInstancesRequestDeploymentTargets>(tmpReq->deploymentTargets)) {
    request->deploymentTargetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deploymentTargets->toMap()), make_shared<string>("DeploymentTargets"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsShrink)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentTargetsShrink)) {
    query->insert(pair<string, string>("DeploymentTargets", *request->deploymentTargetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    query->insert(pair<string, bool>("DisableRollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationDescription)) {
    query->insert(pair<string, string>("OperationDescription", *request->operationDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationPreferencesShrink)) {
    query->insert(pair<string, string>("OperationPreferences", *request->operationPreferencesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateStackInstancesShrinkRequestParameterOverrides>>(request->parameterOverrides)) {
    query->insert(pair<string, vector<CreateStackInstancesShrinkRequestParameterOverrides>>("ParameterOverrides", *request->parameterOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStackInstances"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStackInstancesResponse(callApi(params, req, runtime));
}

CreateStackInstancesResponse Alibabacloud_ROS20190910::Client::createStackInstances(shared_ptr<CreateStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStackInstancesWithOptions(request, runtime);
}

CreateTemplateResponse Alibabacloud_ROS20190910::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateResponse(callApi(params, req, runtime));
}

CreateTemplateResponse Alibabacloud_ROS20190910::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateWithOptions(request, runtime);
}

CreateTemplateScratchResponse Alibabacloud_ROS20190910::Client::createTemplateScratchWithOptions(shared_ptr<CreateTemplateScratchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTemplateScratchShrinkRequest> request = make_shared<CreateTemplateScratchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateTemplateScratchRequestPreferenceParameters>>(tmpReq->preferenceParameters)) {
    request->preferenceParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->preferenceParameters, make_shared<string>("PreferenceParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTemplateScratchRequestSourceResourceGroup>(tmpReq->sourceResourceGroup)) {
    request->sourceResourceGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->sourceResourceGroup->toMap()), make_shared<string>("SourceResourceGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTemplateScratchRequestSourceResources>>(tmpReq->sourceResources)) {
    request->sourceResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceResources, make_shared<string>("SourceResources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTemplateScratchRequestSourceTag>(tmpReq->sourceTag)) {
    request->sourceTagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->sourceTag->toMap()), make_shared<string>("SourceTag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionMode)) {
    query->insert(pair<string, string>("ExecutionMode", *request->executionMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalIdStrategy)) {
    query->insert(pair<string, string>("LogicalIdStrategy", *request->logicalIdStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferenceParametersShrink)) {
    query->insert(pair<string, string>("PreferenceParameters", *request->preferenceParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceResourceGroupShrink)) {
    query->insert(pair<string, string>("SourceResourceGroup", *request->sourceResourceGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceResourcesShrink)) {
    query->insert(pair<string, string>("SourceResources", *request->sourceResourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTagShrink)) {
    query->insert(pair<string, string>("SourceTag", *request->sourceTagShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchType)) {
    query->insert(pair<string, string>("TemplateScratchType", *request->templateScratchType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTemplateScratch"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTemplateScratchResponse(callApi(params, req, runtime));
}

CreateTemplateScratchResponse Alibabacloud_ROS20190910::Client::createTemplateScratch(shared_ptr<CreateTemplateScratchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateScratchWithOptions(request, runtime);
}

DeleteChangeSetResponse Alibabacloud_ROS20190910::Client::deleteChangeSetWithOptions(shared_ptr<DeleteChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetId)) {
    query->insert(pair<string, string>("ChangeSetId", *request->changeSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChangeSet"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChangeSetResponse(callApi(params, req, runtime));
}

DeleteChangeSetResponse Alibabacloud_ROS20190910::Client::deleteChangeSet(shared_ptr<DeleteChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChangeSetWithOptions(request, runtime);
}

DeleteStackResponse Alibabacloud_ROS20190910::Client::deleteStackWithOptions(shared_ptr<DeleteStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainAllResources)) {
    query->insert(pair<string, bool>("RetainAllResources", *request->retainAllResources));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->retainResources)) {
    query->insert(pair<string, vector<string>>("RetainResources", *request->retainResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStackResponse(callApi(params, req, runtime));
}

DeleteStackResponse Alibabacloud_ROS20190910::Client::deleteStack(shared_ptr<DeleteStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStackWithOptions(request, runtime);
}

DeleteStackGroupResponse Alibabacloud_ROS20190910::Client::deleteStackGroupWithOptions(shared_ptr<DeleteStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStackGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStackGroupResponse(callApi(params, req, runtime));
}

DeleteStackGroupResponse Alibabacloud_ROS20190910::Client::deleteStackGroup(shared_ptr<DeleteStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStackGroupWithOptions(request, runtime);
}

DeleteStackInstancesResponse Alibabacloud_ROS20190910::Client::deleteStackInstancesWithOptions(shared_ptr<DeleteStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteStackInstancesShrinkRequest> request = make_shared<DeleteStackInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteStackInstancesRequestDeploymentTargets>(tmpReq->deploymentTargets)) {
    request->deploymentTargetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deploymentTargets->toMap()), make_shared<string>("DeploymentTargets"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsShrink)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentTargetsShrink)) {
    query->insert(pair<string, string>("DeploymentTargets", *request->deploymentTargetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationDescription)) {
    query->insert(pair<string, string>("OperationDescription", *request->operationDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationPreferencesShrink)) {
    query->insert(pair<string, string>("OperationPreferences", *request->operationPreferencesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainStacks)) {
    query->insert(pair<string, bool>("RetainStacks", *request->retainStacks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStackInstances"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStackInstancesResponse(callApi(params, req, runtime));
}

DeleteStackInstancesResponse Alibabacloud_ROS20190910::Client::deleteStackInstances(shared_ptr<DeleteStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStackInstancesWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_ROS20190910::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_ROS20190910::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DeleteTemplateScratchResponse Alibabacloud_ROS20190910::Client::deleteTemplateScratchWithOptions(shared_ptr<DeleteTemplateScratchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplateScratch"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateScratchResponse(callApi(params, req, runtime));
}

DeleteTemplateScratchResponse Alibabacloud_ROS20190910::Client::deleteTemplateScratch(shared_ptr<DeleteTemplateScratchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateScratchWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_ROS20190910::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptLanguage)) {
    query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_ROS20190910::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetectStackDriftResponse Alibabacloud_ROS20190910::Client::detectStackDriftWithOptions(shared_ptr<DetectStackDriftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logicalResourceId)) {
    query->insert(pair<string, vector<string>>("LogicalResourceId", *request->logicalResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectStackDrift"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectStackDriftResponse(callApi(params, req, runtime));
}

DetectStackDriftResponse Alibabacloud_ROS20190910::Client::detectStackDrift(shared_ptr<DetectStackDriftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectStackDriftWithOptions(request, runtime);
}

DetectStackGroupDriftResponse Alibabacloud_ROS20190910::Client::detectStackGroupDriftWithOptions(shared_ptr<DetectStackGroupDriftRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetectStackGroupDriftShrinkRequest> request = make_shared<DetectStackGroupDriftShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationPreferencesShrink)) {
    query->insert(pair<string, string>("OperationPreferences", *request->operationPreferencesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectStackGroupDrift"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectStackGroupDriftResponse(callApi(params, req, runtime));
}

DetectStackGroupDriftResponse Alibabacloud_ROS20190910::Client::detectStackGroupDrift(shared_ptr<DetectStackGroupDriftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectStackGroupDriftWithOptions(request, runtime);
}

DetectStackResourceDriftResponse Alibabacloud_ROS20190910::Client::detectStackResourceDriftWithOptions(shared_ptr<DetectStackResourceDriftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalResourceId)) {
    query->insert(pair<string, string>("LogicalResourceId", *request->logicalResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectStackResourceDrift"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectStackResourceDriftResponse(callApi(params, req, runtime));
}

DetectStackResourceDriftResponse Alibabacloud_ROS20190910::Client::detectStackResourceDrift(shared_ptr<DetectStackResourceDriftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectStackResourceDriftWithOptions(request, runtime);
}

ExecuteChangeSetResponse Alibabacloud_ROS20190910::Client::executeChangeSetWithOptions(shared_ptr<ExecuteChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetId)) {
    query->insert(pair<string, string>("ChangeSetId", *request->changeSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteChangeSet"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteChangeSetResponse(callApi(params, req, runtime));
}

ExecuteChangeSetResponse Alibabacloud_ROS20190910::Client::executeChangeSet(shared_ptr<ExecuteChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeChangeSetWithOptions(request, runtime);
}

GenerateTemplateByScratchResponse Alibabacloud_ROS20190910::Client::generateTemplateByScratchWithOptions(shared_ptr<GenerateTemplateByScratchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->provisionRegionId)) {
    query->insert(pair<string, string>("ProvisionRegionId", *request->provisionRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateTemplateByScratch"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateTemplateByScratchResponse(callApi(params, req, runtime));
}

GenerateTemplateByScratchResponse Alibabacloud_ROS20190910::Client::generateTemplateByScratch(shared_ptr<GenerateTemplateByScratchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateTemplateByScratchWithOptions(request, runtime);
}

GenerateTemplatePolicyResponse Alibabacloud_ROS20190910::Client::generateTemplatePolicyWithOptions(shared_ptr<GenerateTemplatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateTemplatePolicy"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateTemplatePolicyResponse(callApi(params, req, runtime));
}

GenerateTemplatePolicyResponse Alibabacloud_ROS20190910::Client::generateTemplatePolicy(shared_ptr<GenerateTemplatePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateTemplatePolicyWithOptions(request, runtime);
}

GetChangeSetResponse Alibabacloud_ROS20190910::Client::getChangeSetWithOptions(shared_ptr<GetChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetId)) {
    query->insert(pair<string, string>("ChangeSetId", *request->changeSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showTemplate)) {
    query->insert(pair<string, bool>("ShowTemplate", *request->showTemplate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChangeSet"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetChangeSetResponse(callApi(params, req, runtime));
}

GetChangeSetResponse Alibabacloud_ROS20190910::Client::getChangeSet(shared_ptr<GetChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChangeSetWithOptions(request, runtime);
}

GetFeatureDetailsResponse Alibabacloud_ROS20190910::Client::getFeatureDetailsWithOptions(shared_ptr<GetFeatureDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->feature)) {
    query->insert(pair<string, string>("Feature", *request->feature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFeatureDetails"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFeatureDetailsResponse(callApi(params, req, runtime));
}

GetFeatureDetailsResponse Alibabacloud_ROS20190910::Client::getFeatureDetails(shared_ptr<GetFeatureDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFeatureDetailsWithOptions(request, runtime);
}

GetResourceTypeResponse Alibabacloud_ROS20190910::Client::getResourceTypeWithOptions(shared_ptr<GetResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceType"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceTypeResponse(callApi(params, req, runtime));
}

GetResourceTypeResponse Alibabacloud_ROS20190910::Client::getResourceType(shared_ptr<GetResourceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceTypeWithOptions(request, runtime);
}

GetResourceTypeTemplateResponse Alibabacloud_ROS20190910::Client::getResourceTypeTemplateWithOptions(shared_ptr<GetResourceTypeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceTypeTemplate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceTypeTemplateResponse(callApi(params, req, runtime));
}

GetResourceTypeTemplateResponse Alibabacloud_ROS20190910::Client::getResourceTypeTemplate(shared_ptr<GetResourceTypeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceTypeTemplateWithOptions(request, runtime);
}

GetServiceProvisionsResponse Alibabacloud_ROS20190910::Client::getServiceProvisionsWithOptions(shared_ptr<GetServiceProvisionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetServiceProvisionsRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<GetServiceProvisionsRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetServiceProvisionsRequestServices>>(request->services)) {
    query->insert(pair<string, vector<GetServiceProvisionsRequestServices>>("Services", *request->services));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceProvisions"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceProvisionsResponse(callApi(params, req, runtime));
}

GetServiceProvisionsResponse Alibabacloud_ROS20190910::Client::getServiceProvisions(shared_ptr<GetServiceProvisionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceProvisionsWithOptions(request, runtime);
}

GetStackResponse Alibabacloud_ROS20190910::Client::getStackWithOptions(shared_ptr<GetStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logOption)) {
    query->insert(pair<string, string>("LogOption", *request->logOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputOption)) {
    query->insert(pair<string, string>("OutputOption", *request->outputOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showResourceProgress)) {
    query->insert(pair<string, string>("ShowResourceProgress", *request->showResourceProgress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackResponse(callApi(params, req, runtime));
}

GetStackResponse Alibabacloud_ROS20190910::Client::getStack(shared_ptr<GetStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackWithOptions(request, runtime);
}

GetStackDriftDetectionStatusResponse Alibabacloud_ROS20190910::Client::getStackDriftDetectionStatusWithOptions(shared_ptr<GetStackDriftDetectionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driftDetectionId)) {
    query->insert(pair<string, string>("DriftDetectionId", *request->driftDetectionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStackDriftDetectionStatus"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackDriftDetectionStatusResponse(callApi(params, req, runtime));
}

GetStackDriftDetectionStatusResponse Alibabacloud_ROS20190910::Client::getStackDriftDetectionStatus(shared_ptr<GetStackDriftDetectionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackDriftDetectionStatusWithOptions(request, runtime);
}

GetStackGroupResponse Alibabacloud_ROS20190910::Client::getStackGroupWithOptions(shared_ptr<GetStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupId)) {
    query->insert(pair<string, string>("StackGroupId", *request->stackGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStackGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackGroupResponse(callApi(params, req, runtime));
}

GetStackGroupResponse Alibabacloud_ROS20190910::Client::getStackGroup(shared_ptr<GetStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackGroupWithOptions(request, runtime);
}

GetStackGroupOperationResponse Alibabacloud_ROS20190910::Client::getStackGroupOperationWithOptions(shared_ptr<GetStackGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operationId)) {
    query->insert(pair<string, string>("OperationId", *request->operationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStackGroupOperation"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackGroupOperationResponse(callApi(params, req, runtime));
}

GetStackGroupOperationResponse Alibabacloud_ROS20190910::Client::getStackGroupOperation(shared_ptr<GetStackGroupOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackGroupOperationWithOptions(request, runtime);
}

GetStackInstanceResponse Alibabacloud_ROS20190910::Client::getStackInstanceWithOptions(shared_ptr<GetStackInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackInstanceAccountId)) {
    query->insert(pair<string, string>("StackInstanceAccountId", *request->stackInstanceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackInstanceRegionId)) {
    query->insert(pair<string, string>("StackInstanceRegionId", *request->stackInstanceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStackInstance"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackInstanceResponse(callApi(params, req, runtime));
}

GetStackInstanceResponse Alibabacloud_ROS20190910::Client::getStackInstance(shared_ptr<GetStackInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackInstanceWithOptions(request, runtime);
}

GetStackPolicyResponse Alibabacloud_ROS20190910::Client::getStackPolicyWithOptions(shared_ptr<GetStackPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStackPolicy"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackPolicyResponse(callApi(params, req, runtime));
}

GetStackPolicyResponse Alibabacloud_ROS20190910::Client::getStackPolicy(shared_ptr<GetStackPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackPolicyWithOptions(request, runtime);
}

GetStackResourceResponse Alibabacloud_ROS20190910::Client::getStackResourceWithOptions(shared_ptr<GetStackResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalResourceId)) {
    query->insert(pair<string, string>("LogicalResourceId", *request->logicalResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceAttributes)) {
    query->insert(pair<string, vector<string>>("ResourceAttributes", *request->resourceAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showResourceAttributes)) {
    query->insert(pair<string, bool>("ShowResourceAttributes", *request->showResourceAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStackResource"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStackResourceResponse(callApi(params, req, runtime));
}

GetStackResourceResponse Alibabacloud_ROS20190910::Client::getStackResource(shared_ptr<GetStackResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackResourceWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_ROS20190910::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetId)) {
    query->insert(pair<string, string>("ChangeSetId", *request->changeSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includePermission)) {
    query->insert(pair<string, string>("IncludePermission", *request->includePermission));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeTags)) {
    query->insert(pair<string, string>("IncludeTags", *request->includeTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateStage)) {
    query->insert(pair<string, string>("TemplateStage", *request->templateStage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_ROS20190910::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

GetTemplateEstimateCostResponse Alibabacloud_ROS20190910::Client::getTemplateEstimateCostWithOptions(shared_ptr<GetTemplateEstimateCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetTemplateEstimateCostRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<GetTemplateEstimateCostRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchRegionId)) {
    query->insert(pair<string, string>("TemplateScratchRegionId", *request->templateScratchRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateEstimateCost"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateEstimateCostResponse(callApi(params, req, runtime));
}

GetTemplateEstimateCostResponse Alibabacloud_ROS20190910::Client::getTemplateEstimateCost(shared_ptr<GetTemplateEstimateCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateEstimateCostWithOptions(request, runtime);
}

GetTemplateParameterConstraintsResponse Alibabacloud_ROS20190910::Client::getTemplateParameterConstraintsWithOptions(shared_ptr<GetTemplateParameterConstraintsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetTemplateParameterConstraintsShrinkRequest> request = make_shared<GetTemplateParameterConstraintsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->parametersKeyFilter)) {
    request->parametersKeyFilterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parametersKeyFilter, make_shared<string>("ParametersKeyFilter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetTemplateParameterConstraintsShrinkRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<GetTemplateParameterConstraintsShrinkRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersKeyFilterShrink)) {
    query->insert(pair<string, string>("ParametersKeyFilter", *request->parametersKeyFilterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateParameterConstraints"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateParameterConstraintsResponse(callApi(params, req, runtime));
}

GetTemplateParameterConstraintsResponse Alibabacloud_ROS20190910::Client::getTemplateParameterConstraints(shared_ptr<GetTemplateParameterConstraintsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateParameterConstraintsWithOptions(request, runtime);
}

GetTemplateScratchResponse Alibabacloud_ROS20190910::Client::getTemplateScratchWithOptions(shared_ptr<GetTemplateScratchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showDataOption)) {
    query->insert(pair<string, string>("ShowDataOption", *request->showDataOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateScratch"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateScratchResponse(callApi(params, req, runtime));
}

GetTemplateScratchResponse Alibabacloud_ROS20190910::Client::getTemplateScratch(shared_ptr<GetTemplateScratchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateScratchWithOptions(request, runtime);
}

GetTemplateSummaryResponse Alibabacloud_ROS20190910::Client::getTemplateSummaryWithOptions(shared_ptr<GetTemplateSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetId)) {
    query->insert(pair<string, string>("ChangeSetId", *request->changeSetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateSummary"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateSummaryResponse(callApi(params, req, runtime));
}

GetTemplateSummaryResponse Alibabacloud_ROS20190910::Client::getTemplateSummary(shared_ptr<GetTemplateSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateSummaryWithOptions(request, runtime);
}

ListChangeSetsResponse Alibabacloud_ROS20190910::Client::listChangeSetsWithOptions(shared_ptr<ListChangeSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSetId)) {
    query->insert(pair<string, string>("ChangeSetId", *request->changeSetId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->changeSetName)) {
    query->insert(pair<string, vector<string>>("ChangeSetName", *request->changeSetName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->executionStatus)) {
    query->insert(pair<string, vector<string>>("ExecutionStatus", *request->executionStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    query->insert(pair<string, vector<string>>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChangeSets"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChangeSetsResponse(callApi(params, req, runtime));
}

ListChangeSetsResponse Alibabacloud_ROS20190910::Client::listChangeSets(shared_ptr<ListChangeSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChangeSetsWithOptions(request, runtime);
}

ListResourceTypesResponse Alibabacloud_ROS20190910::Client::listResourceTypesWithOptions(shared_ptr<ListResourceTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityType)) {
    query->insert(pair<string, string>("EntityType", *request->entityType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceTypes"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListResourceTypesResponse(callApi(params, req, runtime));
}

ListResourceTypesResponse Alibabacloud_ROS20190910::Client::listResourceTypes(shared_ptr<ListResourceTypesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTypesWithOptions(request, runtime);
}

ListStackEventsResponse Alibabacloud_ROS20190910::Client::listStackEventsWithOptions(shared_ptr<ListStackEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logicalResourceId)) {
    query->insert(pair<string, vector<string>>("LogicalResourceId", *request->logicalResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceType)) {
    query->insert(pair<string, vector<string>>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    query->insert(pair<string, vector<string>>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackEvents"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackEventsResponse(callApi(params, req, runtime));
}

ListStackEventsResponse Alibabacloud_ROS20190910::Client::listStackEvents(shared_ptr<ListStackEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackEventsWithOptions(request, runtime);
}

ListStackGroupOperationResultsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperationResultsWithOptions(shared_ptr<ListStackGroupOperationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operationId)) {
    query->insert(pair<string, string>("OperationId", *request->operationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackGroupOperationResults"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackGroupOperationResultsResponse(callApi(params, req, runtime));
}

ListStackGroupOperationResultsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperationResults(shared_ptr<ListStackGroupOperationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackGroupOperationResultsWithOptions(request, runtime);
}

ListStackGroupOperationsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperationsWithOptions(shared_ptr<ListStackGroupOperationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackGroupOperations"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackGroupOperationsResponse(callApi(params, req, runtime));
}

ListStackGroupOperationsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperations(shared_ptr<ListStackGroupOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackGroupOperationsWithOptions(request, runtime);
}

ListStackGroupsResponse Alibabacloud_ROS20190910::Client::listStackGroupsWithOptions(shared_ptr<ListStackGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackGroups"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackGroupsResponse(callApi(params, req, runtime));
}

ListStackGroupsResponse Alibabacloud_ROS20190910::Client::listStackGroups(shared_ptr<ListStackGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackGroupsWithOptions(request, runtime);
}

ListStackInstancesResponse Alibabacloud_ROS20190910::Client::listStackInstancesWithOptions(shared_ptr<ListStackInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackInstanceAccountId)) {
    query->insert(pair<string, string>("StackInstanceAccountId", *request->stackInstanceAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackInstanceRegionId)) {
    query->insert(pair<string, string>("StackInstanceRegionId", *request->stackInstanceRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackInstances"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackInstancesResponse(callApi(params, req, runtime));
}

ListStackInstancesResponse Alibabacloud_ROS20190910::Client::listStackInstances(shared_ptr<ListStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackInstancesWithOptions(request, runtime);
}

ListStackOperationRisksResponse Alibabacloud_ROS20190910::Client::listStackOperationRisksWithOptions(shared_ptr<ListStackOperationRisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationType)) {
    query->insert(pair<string, string>("OperationType", *request->operationType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->retainAllResources)) {
    query->insert(pair<string, bool>("RetainAllResources", *request->retainAllResources));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->retainResources)) {
    query->insert(pair<string, vector<string>>("RetainResources", *request->retainResources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackOperationRisks"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackOperationRisksResponse(callApi(params, req, runtime));
}

ListStackOperationRisksResponse Alibabacloud_ROS20190910::Client::listStackOperationRisks(shared_ptr<ListStackOperationRisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackOperationRisksWithOptions(request, runtime);
}

ListStackResourceDriftsResponse Alibabacloud_ROS20190910::Client::listStackResourceDriftsWithOptions(shared_ptr<ListStackResourceDriftsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceDriftStatus)) {
    query->insert(pair<string, vector<string>>("ResourceDriftStatus", *request->resourceDriftStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackResourceDrifts"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackResourceDriftsResponse(callApi(params, req, runtime));
}

ListStackResourceDriftsResponse Alibabacloud_ROS20190910::Client::listStackResourceDrifts(shared_ptr<ListStackResourceDriftsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackResourceDriftsWithOptions(request, runtime);
}

ListStackResourcesResponse Alibabacloud_ROS20190910::Client::listStackResourcesWithOptions(shared_ptr<ListStackResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStackResources"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStackResourcesResponse(callApi(params, req, runtime));
}

ListStackResourcesResponse Alibabacloud_ROS20190910::Client::listStackResources(shared_ptr<ListStackResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackResourcesWithOptions(request, runtime);
}

ListStacksResponse Alibabacloud_ROS20190910::Client::listStacksWithOptions(shared_ptr<ListStacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentStackId)) {
    query->insert(pair<string, string>("ParentStackId", *request->parentStackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showNestedStack)) {
    query->insert(pair<string, bool>("ShowNestedStack", *request->showNestedStack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->stackIds)) {
    query->insert(pair<string, vector<string>>("StackIds", *request->stackIds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->stackName)) {
    query->insert(pair<string, vector<string>>("StackName", *request->stackName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    query->insert(pair<string, vector<string>>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListStacksRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListStacksRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStacks"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStacksResponse(callApi(params, req, runtime));
}

ListStacksResponse Alibabacloud_ROS20190910::Client::listStacks(shared_ptr<ListStacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStacksWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_ROS20190910::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagKeys"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagKeysResponse(callApi(params, req, runtime));
}

ListTagKeysResponse Alibabacloud_ROS20190910::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_ROS20190910::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_ROS20190910::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_ROS20190910::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagValues"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagValuesResponse(callApi(params, req, runtime));
}

ListTagValuesResponse Alibabacloud_ROS20190910::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListTemplateScratchesResponse Alibabacloud_ROS20190910::Client::listTemplateScratchesWithOptions(shared_ptr<ListTemplateScratchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchType)) {
    query->insert(pair<string, string>("TemplateScratchType", *request->templateScratchType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplateScratches"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplateScratchesResponse(callApi(params, req, runtime));
}

ListTemplateScratchesResponse Alibabacloud_ROS20190910::Client::listTemplateScratches(shared_ptr<ListTemplateScratchesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplateScratchesWithOptions(request, runtime);
}

ListTemplateVersionsResponse Alibabacloud_ROS20190910::Client::listTemplateVersionsWithOptions(shared_ptr<ListTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplateVersions"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplateVersionsResponse(callApi(params, req, runtime));
}

ListTemplateVersionsResponse Alibabacloud_ROS20190910::Client::listTemplateVersions(shared_ptr<ListTemplateVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplateVersionsWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ROS20190910::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->includeTags)) {
    query->insert(pair<string, string>("IncludeTags", *request->includeTags));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareType)) {
    query->insert(pair<string, string>("ShareType", *request->shareType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTemplatesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTemplatesRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_ROS20190910::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_ROS20190910::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MoveResourceGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MoveResourceGroupResponse(callApi(params, req, runtime));
}

MoveResourceGroupResponse Alibabacloud_ROS20190910::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

PreviewStackResponse Alibabacloud_ROS20190910::Client::previewStackWithOptions(shared_ptr<PreviewStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    query->insert(pair<string, bool>("DisableRollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parallelism)) {
    query->insert(pair<string, long>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PreviewStackRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<PreviewStackRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackName)) {
    query->insert(pair<string, string>("StackName", *request->stackName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyBody)) {
    query->insert(pair<string, string>("StackPolicyBody", *request->stackPolicyBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyURL)) {
    query->insert(pair<string, string>("StackPolicyURL", *request->stackPolicyURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchRegionId)) {
    query->insert(pair<string, string>("TemplateScratchRegionId", *request->templateScratchRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreviewStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreviewStackResponse(callApi(params, req, runtime));
}

PreviewStackResponse Alibabacloud_ROS20190910::Client::previewStack(shared_ptr<PreviewStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return previewStackWithOptions(request, runtime);
}

SetDeletionProtectionResponse Alibabacloud_ROS20190910::Client::setDeletionProtectionWithOptions(shared_ptr<SetDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deletionProtection)) {
    query->insert(pair<string, string>("DeletionProtection", *request->deletionProtection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeletionProtection"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeletionProtectionResponse(callApi(params, req, runtime));
}

SetDeletionProtectionResponse Alibabacloud_ROS20190910::Client::setDeletionProtection(shared_ptr<SetDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeletionProtectionWithOptions(request, runtime);
}

SetStackPolicyResponse Alibabacloud_ROS20190910::Client::setStackPolicyWithOptions(shared_ptr<SetStackPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyBody)) {
    query->insert(pair<string, string>("StackPolicyBody", *request->stackPolicyBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyURL)) {
    query->insert(pair<string, string>("StackPolicyURL", *request->stackPolicyURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetStackPolicy"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetStackPolicyResponse(callApi(params, req, runtime));
}

SetStackPolicyResponse Alibabacloud_ROS20190910::Client::setStackPolicy(shared_ptr<SetStackPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setStackPolicyWithOptions(request, runtime);
}

SetTemplatePermissionResponse Alibabacloud_ROS20190910::Client::setTemplatePermissionWithOptions(shared_ptr<SetTemplatePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->accountIds)) {
    query->insert(pair<string, vector<string>>("AccountIds", *request->accountIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareOption)) {
    query->insert(pair<string, string>("ShareOption", *request->shareOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionOption)) {
    query->insert(pair<string, string>("VersionOption", *request->versionOption));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetTemplatePermission"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetTemplatePermissionResponse(callApi(params, req, runtime));
}

SetTemplatePermissionResponse Alibabacloud_ROS20190910::Client::setTemplatePermission(shared_ptr<SetTemplatePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTemplatePermissionWithOptions(request, runtime);
}

SignalResourceResponse Alibabacloud_ROS20190910::Client::signalResourceWithOptions(shared_ptr<SignalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalResourceId)) {
    query->insert(pair<string, string>("LogicalResourceId", *request->logicalResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueId)) {
    query->insert(pair<string, string>("UniqueId", *request->uniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SignalResource"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SignalResourceResponse(callApi(params, req, runtime));
}

SignalResourceResponse Alibabacloud_ROS20190910::Client::signalResource(shared_ptr<SignalResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return signalResourceWithOptions(request, runtime);
}

StopStackGroupOperationResponse Alibabacloud_ROS20190910::Client::stopStackGroupOperationWithOptions(shared_ptr<StopStackGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operationId)) {
    query->insert(pair<string, string>("OperationId", *request->operationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopStackGroupOperation"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopStackGroupOperationResponse(callApi(params, req, runtime));
}

StopStackGroupOperationResponse Alibabacloud_ROS20190910::Client::stopStackGroupOperation(shared_ptr<StopStackGroupOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopStackGroupOperationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_ROS20190910::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_ROS20190910::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_ROS20190910::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_ROS20190910::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateStackResponse Alibabacloud_ROS20190910::Client::updateStackWithOptions(shared_ptr<UpdateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableRollback)) {
    query->insert(pair<string, bool>("DisableRollback", *request->disableRollback));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parallelism)) {
    query->insert(pair<string, long>("Parallelism", *request->parallelism));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStackRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<UpdateStackRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramRoleName)) {
    query->insert(pair<string, string>("RamRoleName", *request->ramRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->replacementOption)) {
    query->insert(pair<string, string>("ReplacementOption", *request->replacementOption));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyBody)) {
    query->insert(pair<string, string>("StackPolicyBody", *request->stackPolicyBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyDuringUpdateBody)) {
    query->insert(pair<string, string>("StackPolicyDuringUpdateBody", *request->stackPolicyDuringUpdateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyDuringUpdateURL)) {
    query->insert(pair<string, string>("StackPolicyDuringUpdateURL", *request->stackPolicyDuringUpdateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackPolicyURL)) {
    query->insert(pair<string, string>("StackPolicyURL", *request->stackPolicyURL));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStackRequestTags>>(request->tags)) {
    query->insert(pair<string, vector<UpdateStackRequestTags>>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->usePreviousParameters)) {
    query->insert(pair<string, bool>("UsePreviousParameters", *request->usePreviousParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStack"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStackResponse(callApi(params, req, runtime));
}

UpdateStackResponse Alibabacloud_ROS20190910::Client::updateStack(shared_ptr<UpdateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackWithOptions(request, runtime);
}

UpdateStackGroupResponse Alibabacloud_ROS20190910::Client::updateStackGroupWithOptions(shared_ptr<UpdateStackGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateStackGroupShrinkRequest> request = make_shared<UpdateStackGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateStackGroupRequestAutoDeployment>(tmpReq->autoDeployment)) {
    request->autoDeploymentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->autoDeployment->toMap()), make_shared<string>("AutoDeployment"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateStackGroupRequestDeploymentTargets>(tmpReq->deploymentTargets)) {
    request->deploymentTargetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deploymentTargets->toMap()), make_shared<string>("DeploymentTargets"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsShrink)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->administrationRoleName)) {
    query->insert(pair<string, string>("AdministrationRoleName", *request->administrationRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoDeploymentShrink)) {
    query->insert(pair<string, string>("AutoDeployment", *request->autoDeploymentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentTargetsShrink)) {
    query->insert(pair<string, string>("DeploymentTargets", *request->deploymentTargetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionRoleName)) {
    query->insert(pair<string, string>("ExecutionRoleName", *request->executionRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationDescription)) {
    query->insert(pair<string, string>("OperationDescription", *request->operationDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationPreferencesShrink)) {
    query->insert(pair<string, string>("OperationPreferences", *request->operationPreferencesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStackGroupShrinkRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<UpdateStackGroupShrinkRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->permissionModel)) {
    query->insert(pair<string, string>("PermissionModel", *request->permissionModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateVersion)) {
    query->insert(pair<string, string>("TemplateVersion", *request->templateVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStackGroup"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStackGroupResponse(callApi(params, req, runtime));
}

UpdateStackGroupResponse Alibabacloud_ROS20190910::Client::updateStackGroup(shared_ptr<UpdateStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackGroupWithOptions(request, runtime);
}

UpdateStackInstancesResponse Alibabacloud_ROS20190910::Client::updateStackInstancesWithOptions(shared_ptr<UpdateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateStackInstancesShrinkRequest> request = make_shared<UpdateStackInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateStackInstancesRequestDeploymentTargets>(tmpReq->deploymentTargets)) {
    request->deploymentTargetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->deploymentTargets->toMap()), make_shared<string>("DeploymentTargets"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsShrink)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentTargetsShrink)) {
    query->insert(pair<string, string>("DeploymentTargets", *request->deploymentTargetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationDescription)) {
    query->insert(pair<string, string>("OperationDescription", *request->operationDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationPreferencesShrink)) {
    query->insert(pair<string, string>("OperationPreferences", *request->operationPreferencesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStackInstancesShrinkRequestParameterOverrides>>(request->parameterOverrides)) {
    query->insert(pair<string, vector<UpdateStackInstancesShrinkRequestParameterOverrides>>("ParameterOverrides", *request->parameterOverrides));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackGroupName)) {
    query->insert(pair<string, string>("StackGroupName", *request->stackGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStackInstances"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStackInstancesResponse(callApi(params, req, runtime));
}

UpdateStackInstancesResponse Alibabacloud_ROS20190910::Client::updateStackInstances(shared_ptr<UpdateStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackInstancesWithOptions(request, runtime);
}

UpdateStackTemplateByResourcesResponse Alibabacloud_ROS20190910::Client::updateStackTemplateByResourcesWithOptions(shared_ptr<UpdateStackTemplateByResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->logicalResourceId)) {
    query->insert(pair<string, vector<string>>("LogicalResourceId", *request->logicalResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stackId)) {
    query->insert(pair<string, string>("StackId", *request->stackId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateFormat)) {
    query->insert(pair<string, string>("TemplateFormat", *request->templateFormat));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStackTemplateByResources"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStackTemplateByResourcesResponse(callApi(params, req, runtime));
}

UpdateStackTemplateByResourcesResponse Alibabacloud_ROS20190910::Client::updateStackTemplateByResources(shared_ptr<UpdateStackTemplateByResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackTemplateByResourcesWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_ROS20190910::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_ROS20190910::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

UpdateTemplateScratchResponse Alibabacloud_ROS20190910::Client::updateTemplateScratchWithOptions(shared_ptr<UpdateTemplateScratchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTemplateScratchShrinkRequest> request = make_shared<UpdateTemplateScratchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTemplateScratchRequestPreferenceParameters>>(tmpReq->preferenceParameters)) {
    request->preferenceParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->preferenceParameters, make_shared<string>("PreferenceParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTemplateScratchRequestSourceResourceGroup>(tmpReq->sourceResourceGroup)) {
    request->sourceResourceGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->sourceResourceGroup->toMap()), make_shared<string>("SourceResourceGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTemplateScratchRequestSourceResources>>(tmpReq->sourceResources)) {
    request->sourceResourcesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceResources, make_shared<string>("SourceResources"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTemplateScratchRequestSourceTag>(tmpReq->sourceTag)) {
    request->sourceTagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->sourceTag->toMap()), make_shared<string>("SourceTag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executionMode)) {
    query->insert(pair<string, string>("ExecutionMode", *request->executionMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logicalIdStrategy)) {
    query->insert(pair<string, string>("LogicalIdStrategy", *request->logicalIdStrategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preferenceParametersShrink)) {
    query->insert(pair<string, string>("PreferenceParameters", *request->preferenceParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceResourceGroupShrink)) {
    query->insert(pair<string, string>("SourceResourceGroup", *request->sourceResourceGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceResourcesShrink)) {
    query->insert(pair<string, string>("SourceResources", *request->sourceResourcesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceTagShrink)) {
    query->insert(pair<string, string>("SourceTag", *request->sourceTagShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateScratchId)) {
    query->insert(pair<string, string>("TemplateScratchId", *request->templateScratchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplateScratch"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateScratchResponse(callApi(params, req, runtime));
}

UpdateTemplateScratchResponse Alibabacloud_ROS20190910::Client::updateTemplateScratch(shared_ptr<UpdateTemplateScratchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateScratchWithOptions(request, runtime);
}

ValidateTemplateResponse Alibabacloud_ROS20190910::Client::validateTemplateWithOptions(shared_ptr<ValidateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBody)) {
    query->insert(pair<string, string>("TemplateBody", *request->templateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateURL)) {
    query->insert(pair<string, string>("TemplateURL", *request->templateURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validationOption)) {
    query->insert(pair<string, string>("ValidationOption", *request->validationOption));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateTemplate"))},
    {"version", boost::any(string("2019-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateTemplateResponse(callApi(params, req, runtime));
}

ValidateTemplateResponse Alibabacloud_ROS20190910::Client::validateTemplate(shared_ptr<ValidateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateTemplateWithOptions(request, runtime);
}

