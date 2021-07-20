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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelUpdateStackResponse(doRPCRequest(make_shared<string>("CancelUpdateStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelUpdateStackResponse Alibabacloud_ROS20190910::Client::cancelUpdateStack(shared_ptr<CancelUpdateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelUpdateStackWithOptions(request, runtime);
}

ContinueCreateStackResponse Alibabacloud_ROS20190910::Client::continueCreateStackWithOptions(shared_ptr<ContinueCreateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ContinueCreateStackResponse(doRPCRequest(make_shared<string>("ContinueCreateStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ContinueCreateStackResponse Alibabacloud_ROS20190910::Client::continueCreateStack(shared_ptr<ContinueCreateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continueCreateStackWithOptions(request, runtime);
}

CreateChangeSetResponse Alibabacloud_ROS20190910::Client::createChangeSetWithOptions(shared_ptr<CreateChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateChangeSetResponse(doRPCRequest(make_shared<string>("CreateChangeSet"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateChangeSetResponse Alibabacloud_ROS20190910::Client::createChangeSet(shared_ptr<CreateChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChangeSetWithOptions(request, runtime);
}

CreateStackResponse Alibabacloud_ROS20190910::Client::createStackWithOptions(shared_ptr<CreateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateStackResponse(doRPCRequest(make_shared<string>("CreateStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateStackResponse Alibabacloud_ROS20190910::Client::createStack(shared_ptr<CreateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStackWithOptions(request, runtime);
}

CreateStackGroupResponse Alibabacloud_ROS20190910::Client::createStackGroupWithOptions(shared_ptr<CreateStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateStackGroupResponse(doRPCRequest(make_shared<string>("CreateStackGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateStackGroupResponse Alibabacloud_ROS20190910::Client::createStackGroup(shared_ptr<CreateStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStackGroupWithOptions(request, runtime);
}

CreateStackInstancesResponse Alibabacloud_ROS20190910::Client::createStackInstancesWithOptions(shared_ptr<CreateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateStackInstancesShrinkRequest> request = make_shared<CreateStackInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateStackInstancesResponse(doRPCRequest(make_shared<string>("CreateStackInstances"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateStackInstancesResponse Alibabacloud_ROS20190910::Client::createStackInstances(shared_ptr<CreateStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStackInstancesWithOptions(request, runtime);
}

CreateTemplateResponse Alibabacloud_ROS20190910::Client::createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTemplateResponse(doRPCRequest(make_shared<string>("CreateTemplate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTemplateResponse Alibabacloud_ROS20190910::Client::createTemplate(shared_ptr<CreateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTemplateWithOptions(request, runtime);
}

DeleteChangeSetResponse Alibabacloud_ROS20190910::Client::deleteChangeSetWithOptions(shared_ptr<DeleteChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteChangeSetResponse(doRPCRequest(make_shared<string>("DeleteChangeSet"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteChangeSetResponse Alibabacloud_ROS20190910::Client::deleteChangeSet(shared_ptr<DeleteChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChangeSetWithOptions(request, runtime);
}

DeleteStackResponse Alibabacloud_ROS20190910::Client::deleteStackWithOptions(shared_ptr<DeleteStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteStackResponse(doRPCRequest(make_shared<string>("DeleteStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteStackResponse Alibabacloud_ROS20190910::Client::deleteStack(shared_ptr<DeleteStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStackWithOptions(request, runtime);
}

DeleteStackGroupResponse Alibabacloud_ROS20190910::Client::deleteStackGroupWithOptions(shared_ptr<DeleteStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteStackGroupResponse(doRPCRequest(make_shared<string>("DeleteStackGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteStackGroupResponse Alibabacloud_ROS20190910::Client::deleteStackGroup(shared_ptr<DeleteStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStackGroupWithOptions(request, runtime);
}

DeleteStackInstancesResponse Alibabacloud_ROS20190910::Client::deleteStackInstancesWithOptions(shared_ptr<DeleteStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteStackInstancesShrinkRequest> request = make_shared<DeleteStackInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteStackInstancesResponse(doRPCRequest(make_shared<string>("DeleteStackInstances"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteStackInstancesResponse Alibabacloud_ROS20190910::Client::deleteStackInstances(shared_ptr<DeleteStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStackInstancesWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_ROS20190910::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTemplateResponse(doRPCRequest(make_shared<string>("DeleteTemplate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTemplateResponse Alibabacloud_ROS20190910::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_ROS20190910::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_ROS20190910::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DetectStackDriftResponse Alibabacloud_ROS20190910::Client::detectStackDriftWithOptions(shared_ptr<DetectStackDriftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectStackDriftResponse(doRPCRequest(make_shared<string>("DetectStackDrift"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectStackGroupDriftResponse(doRPCRequest(make_shared<string>("DetectStackGroupDrift"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectStackGroupDriftResponse Alibabacloud_ROS20190910::Client::detectStackGroupDrift(shared_ptr<DetectStackGroupDriftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectStackGroupDriftWithOptions(request, runtime);
}

DetectStackResourceDriftResponse Alibabacloud_ROS20190910::Client::detectStackResourceDriftWithOptions(shared_ptr<DetectStackResourceDriftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectStackResourceDriftResponse(doRPCRequest(make_shared<string>("DetectStackResourceDrift"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectStackResourceDriftResponse Alibabacloud_ROS20190910::Client::detectStackResourceDrift(shared_ptr<DetectStackResourceDriftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectStackResourceDriftWithOptions(request, runtime);
}

ExecuteChangeSetResponse Alibabacloud_ROS20190910::Client::executeChangeSetWithOptions(shared_ptr<ExecuteChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteChangeSetResponse(doRPCRequest(make_shared<string>("ExecuteChangeSet"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteChangeSetResponse Alibabacloud_ROS20190910::Client::executeChangeSet(shared_ptr<ExecuteChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeChangeSetWithOptions(request, runtime);
}

GenerateTemplatePolicyResponse Alibabacloud_ROS20190910::Client::generateTemplatePolicyWithOptions(shared_ptr<GenerateTemplatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateTemplatePolicyResponse(doRPCRequest(make_shared<string>("GenerateTemplatePolicy"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateTemplatePolicyResponse Alibabacloud_ROS20190910::Client::generateTemplatePolicy(shared_ptr<GenerateTemplatePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateTemplatePolicyWithOptions(request, runtime);
}

GetChangeSetResponse Alibabacloud_ROS20190910::Client::getChangeSetWithOptions(shared_ptr<GetChangeSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetChangeSetResponse(doRPCRequest(make_shared<string>("GetChangeSet"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetChangeSetResponse Alibabacloud_ROS20190910::Client::getChangeSet(shared_ptr<GetChangeSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChangeSetWithOptions(request, runtime);
}

GetResourceTypeResponse Alibabacloud_ROS20190910::Client::getResourceTypeWithOptions(shared_ptr<GetResourceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResourceTypeResponse(doRPCRequest(make_shared<string>("GetResourceType"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourceTypeResponse Alibabacloud_ROS20190910::Client::getResourceType(shared_ptr<GetResourceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceTypeWithOptions(request, runtime);
}

GetResourceTypeTemplateResponse Alibabacloud_ROS20190910::Client::getResourceTypeTemplateWithOptions(shared_ptr<GetResourceTypeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResourceTypeTemplateResponse(doRPCRequest(make_shared<string>("GetResourceTypeTemplate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourceTypeTemplateResponse Alibabacloud_ROS20190910::Client::getResourceTypeTemplate(shared_ptr<GetResourceTypeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceTypeTemplateWithOptions(request, runtime);
}

GetStackResponse Alibabacloud_ROS20190910::Client::getStackWithOptions(shared_ptr<GetStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackResponse(doRPCRequest(make_shared<string>("GetStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackResponse Alibabacloud_ROS20190910::Client::getStack(shared_ptr<GetStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackWithOptions(request, runtime);
}

GetStackDriftDetectionStatusResponse Alibabacloud_ROS20190910::Client::getStackDriftDetectionStatusWithOptions(shared_ptr<GetStackDriftDetectionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackDriftDetectionStatusResponse(doRPCRequest(make_shared<string>("GetStackDriftDetectionStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackDriftDetectionStatusResponse Alibabacloud_ROS20190910::Client::getStackDriftDetectionStatus(shared_ptr<GetStackDriftDetectionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackDriftDetectionStatusWithOptions(request, runtime);
}

GetStackGroupResponse Alibabacloud_ROS20190910::Client::getStackGroupWithOptions(shared_ptr<GetStackGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackGroupResponse(doRPCRequest(make_shared<string>("GetStackGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackGroupResponse Alibabacloud_ROS20190910::Client::getStackGroup(shared_ptr<GetStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackGroupWithOptions(request, runtime);
}

GetStackGroupOperationResponse Alibabacloud_ROS20190910::Client::getStackGroupOperationWithOptions(shared_ptr<GetStackGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackGroupOperationResponse(doRPCRequest(make_shared<string>("GetStackGroupOperation"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackGroupOperationResponse Alibabacloud_ROS20190910::Client::getStackGroupOperation(shared_ptr<GetStackGroupOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackGroupOperationWithOptions(request, runtime);
}

GetStackInstanceResponse Alibabacloud_ROS20190910::Client::getStackInstanceWithOptions(shared_ptr<GetStackInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackInstanceResponse(doRPCRequest(make_shared<string>("GetStackInstance"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackInstanceResponse Alibabacloud_ROS20190910::Client::getStackInstance(shared_ptr<GetStackInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackInstanceWithOptions(request, runtime);
}

GetStackPolicyResponse Alibabacloud_ROS20190910::Client::getStackPolicyWithOptions(shared_ptr<GetStackPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackPolicyResponse(doRPCRequest(make_shared<string>("GetStackPolicy"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackPolicyResponse Alibabacloud_ROS20190910::Client::getStackPolicy(shared_ptr<GetStackPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackPolicyWithOptions(request, runtime);
}

GetStackResourceResponse Alibabacloud_ROS20190910::Client::getStackResourceWithOptions(shared_ptr<GetStackResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStackResourceResponse(doRPCRequest(make_shared<string>("GetStackResource"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStackResourceResponse Alibabacloud_ROS20190910::Client::getStackResource(shared_ptr<GetStackResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStackResourceWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_ROS20190910::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTemplateResponse(doRPCRequest(make_shared<string>("GetTemplate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTemplateResponse Alibabacloud_ROS20190910::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

GetTemplateEstimateCostResponse Alibabacloud_ROS20190910::Client::getTemplateEstimateCostWithOptions(shared_ptr<GetTemplateEstimateCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTemplateEstimateCostResponse(doRPCRequest(make_shared<string>("GetTemplateEstimateCost"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTemplateEstimateCostResponse Alibabacloud_ROS20190910::Client::getTemplateEstimateCost(shared_ptr<GetTemplateEstimateCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateEstimateCostWithOptions(request, runtime);
}

GetTemplateSummaryResponse Alibabacloud_ROS20190910::Client::getTemplateSummaryWithOptions(shared_ptr<GetTemplateSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTemplateSummaryResponse(doRPCRequest(make_shared<string>("GetTemplateSummary"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTemplateSummaryResponse Alibabacloud_ROS20190910::Client::getTemplateSummary(shared_ptr<GetTemplateSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateSummaryWithOptions(request, runtime);
}

ListChangeSetsResponse Alibabacloud_ROS20190910::Client::listChangeSetsWithOptions(shared_ptr<ListChangeSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListChangeSetsResponse(doRPCRequest(make_shared<string>("ListChangeSets"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListChangeSetsResponse Alibabacloud_ROS20190910::Client::listChangeSets(shared_ptr<ListChangeSetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChangeSetsWithOptions(request, runtime);
}

ListResourceTypesResponse Alibabacloud_ROS20190910::Client::listResourceTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListResourceTypesResponse(doRPCRequest(make_shared<string>("ListResourceTypes"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListResourceTypesResponse Alibabacloud_ROS20190910::Client::listResourceTypes() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTypesWithOptions(runtime);
}

ListStackEventsResponse Alibabacloud_ROS20190910::Client::listStackEventsWithOptions(shared_ptr<ListStackEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackEventsResponse(doRPCRequest(make_shared<string>("ListStackEvents"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackEventsResponse Alibabacloud_ROS20190910::Client::listStackEvents(shared_ptr<ListStackEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackEventsWithOptions(request, runtime);
}

ListStackGroupOperationResultsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperationResultsWithOptions(shared_ptr<ListStackGroupOperationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackGroupOperationResultsResponse(doRPCRequest(make_shared<string>("ListStackGroupOperationResults"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackGroupOperationResultsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperationResults(shared_ptr<ListStackGroupOperationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackGroupOperationResultsWithOptions(request, runtime);
}

ListStackGroupOperationsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperationsWithOptions(shared_ptr<ListStackGroupOperationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackGroupOperationsResponse(doRPCRequest(make_shared<string>("ListStackGroupOperations"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackGroupOperationsResponse Alibabacloud_ROS20190910::Client::listStackGroupOperations(shared_ptr<ListStackGroupOperationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackGroupOperationsWithOptions(request, runtime);
}

ListStackGroupsResponse Alibabacloud_ROS20190910::Client::listStackGroupsWithOptions(shared_ptr<ListStackGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackGroupsResponse(doRPCRequest(make_shared<string>("ListStackGroups"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackGroupsResponse Alibabacloud_ROS20190910::Client::listStackGroups(shared_ptr<ListStackGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackGroupsWithOptions(request, runtime);
}

ListStackInstancesResponse Alibabacloud_ROS20190910::Client::listStackInstancesWithOptions(shared_ptr<ListStackInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackInstancesResponse(doRPCRequest(make_shared<string>("ListStackInstances"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackInstancesResponse Alibabacloud_ROS20190910::Client::listStackInstances(shared_ptr<ListStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackInstancesWithOptions(request, runtime);
}

ListStackOperationRisksResponse Alibabacloud_ROS20190910::Client::listStackOperationRisksWithOptions(shared_ptr<ListStackOperationRisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackOperationRisksResponse(doRPCRequest(make_shared<string>("ListStackOperationRisks"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackOperationRisksResponse Alibabacloud_ROS20190910::Client::listStackOperationRisks(shared_ptr<ListStackOperationRisksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackOperationRisksWithOptions(request, runtime);
}

ListStackResourceDriftsResponse Alibabacloud_ROS20190910::Client::listStackResourceDriftsWithOptions(shared_ptr<ListStackResourceDriftsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackResourceDriftsResponse(doRPCRequest(make_shared<string>("ListStackResourceDrifts"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackResourceDriftsResponse Alibabacloud_ROS20190910::Client::listStackResourceDrifts(shared_ptr<ListStackResourceDriftsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackResourceDriftsWithOptions(request, runtime);
}

ListStackResourcesResponse Alibabacloud_ROS20190910::Client::listStackResourcesWithOptions(shared_ptr<ListStackResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStackResourcesResponse(doRPCRequest(make_shared<string>("ListStackResources"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStackResourcesResponse Alibabacloud_ROS20190910::Client::listStackResources(shared_ptr<ListStackResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStackResourcesWithOptions(request, runtime);
}

ListStacksResponse Alibabacloud_ROS20190910::Client::listStacksWithOptions(shared_ptr<ListStacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListStacksResponse(doRPCRequest(make_shared<string>("ListStacks"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListStacksResponse Alibabacloud_ROS20190910::Client::listStacks(shared_ptr<ListStacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listStacksWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_ROS20190910::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagKeysResponse(doRPCRequest(make_shared<string>("ListTagKeys"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagKeysResponse Alibabacloud_ROS20190910::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_ROS20190910::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagResourcesResponse(doRPCRequest(make_shared<string>("ListTagResources"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagResourcesResponse Alibabacloud_ROS20190910::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_ROS20190910::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTagValuesResponse(doRPCRequest(make_shared<string>("ListTagValues"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTagValuesResponse Alibabacloud_ROS20190910::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ROS20190910::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTemplatesResponse(doRPCRequest(make_shared<string>("ListTemplates"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTemplatesResponse Alibabacloud_ROS20190910::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

ListTemplateVersionsResponse Alibabacloud_ROS20190910::Client::listTemplateVersionsWithOptions(shared_ptr<ListTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTemplateVersionsResponse(doRPCRequest(make_shared<string>("ListTemplateVersions"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTemplateVersionsResponse Alibabacloud_ROS20190910::Client::listTemplateVersions(shared_ptr<ListTemplateVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplateVersionsWithOptions(request, runtime);
}

MoveResourceGroupResponse Alibabacloud_ROS20190910::Client::moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MoveResourceGroupResponse(doRPCRequest(make_shared<string>("MoveResourceGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MoveResourceGroupResponse Alibabacloud_ROS20190910::Client::moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return moveResourceGroupWithOptions(request, runtime);
}

PreviewStackResponse Alibabacloud_ROS20190910::Client::previewStackWithOptions(shared_ptr<PreviewStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PreviewStackResponse(doRPCRequest(make_shared<string>("PreviewStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PreviewStackResponse Alibabacloud_ROS20190910::Client::previewStack(shared_ptr<PreviewStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return previewStackWithOptions(request, runtime);
}

SetDeletionProtectionResponse Alibabacloud_ROS20190910::Client::setDeletionProtectionWithOptions(shared_ptr<SetDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDeletionProtectionResponse(doRPCRequest(make_shared<string>("SetDeletionProtection"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDeletionProtectionResponse Alibabacloud_ROS20190910::Client::setDeletionProtection(shared_ptr<SetDeletionProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeletionProtectionWithOptions(request, runtime);
}

SetStackPolicyResponse Alibabacloud_ROS20190910::Client::setStackPolicyWithOptions(shared_ptr<SetStackPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetStackPolicyResponse(doRPCRequest(make_shared<string>("SetStackPolicy"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetStackPolicyResponse Alibabacloud_ROS20190910::Client::setStackPolicy(shared_ptr<SetStackPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setStackPolicyWithOptions(request, runtime);
}

SetTemplatePermissionResponse Alibabacloud_ROS20190910::Client::setTemplatePermissionWithOptions(shared_ptr<SetTemplatePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetTemplatePermissionResponse(doRPCRequest(make_shared<string>("SetTemplatePermission"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetTemplatePermissionResponse Alibabacloud_ROS20190910::Client::setTemplatePermission(shared_ptr<SetTemplatePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTemplatePermissionWithOptions(request, runtime);
}

SignalResourceResponse Alibabacloud_ROS20190910::Client::signalResourceWithOptions(shared_ptr<SignalResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SignalResourceResponse(doRPCRequest(make_shared<string>("SignalResource"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SignalResourceResponse Alibabacloud_ROS20190910::Client::signalResource(shared_ptr<SignalResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return signalResourceWithOptions(request, runtime);
}

StopStackGroupOperationResponse Alibabacloud_ROS20190910::Client::stopStackGroupOperationWithOptions(shared_ptr<StopStackGroupOperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopStackGroupOperationResponse(doRPCRequest(make_shared<string>("StopStackGroupOperation"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopStackGroupOperationResponse Alibabacloud_ROS20190910::Client::stopStackGroupOperation(shared_ptr<StopStackGroupOperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopStackGroupOperationWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_ROS20190910::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_ROS20190910::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_ROS20190910::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_ROS20190910::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateStackResponse Alibabacloud_ROS20190910::Client::updateStackWithOptions(shared_ptr<UpdateStackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateStackResponse(doRPCRequest(make_shared<string>("UpdateStack"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateStackResponse Alibabacloud_ROS20190910::Client::updateStack(shared_ptr<UpdateStackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackWithOptions(request, runtime);
}

UpdateStackGroupResponse Alibabacloud_ROS20190910::Client::updateStackGroupWithOptions(shared_ptr<UpdateStackGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateStackGroupShrinkRequest> request = make_shared<UpdateStackGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateStackGroupResponse(doRPCRequest(make_shared<string>("UpdateStackGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateStackGroupResponse Alibabacloud_ROS20190910::Client::updateStackGroup(shared_ptr<UpdateStackGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackGroupWithOptions(request, runtime);
}

UpdateStackInstancesResponse Alibabacloud_ROS20190910::Client::updateStackInstancesWithOptions(shared_ptr<UpdateStackInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateStackInstancesShrinkRequest> request = make_shared<UpdateStackInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->operationPreferences)) {
    request->operationPreferencesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationPreferences, make_shared<string>("OperationPreferences"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateStackInstancesResponse(doRPCRequest(make_shared<string>("UpdateStackInstances"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateStackInstancesResponse Alibabacloud_ROS20190910::Client::updateStackInstances(shared_ptr<UpdateStackInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackInstancesWithOptions(request, runtime);
}

UpdateStackTemplateByResourcesResponse Alibabacloud_ROS20190910::Client::updateStackTemplateByResourcesWithOptions(shared_ptr<UpdateStackTemplateByResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateStackTemplateByResourcesResponse(doRPCRequest(make_shared<string>("UpdateStackTemplateByResources"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateStackTemplateByResourcesResponse Alibabacloud_ROS20190910::Client::updateStackTemplateByResources(shared_ptr<UpdateStackTemplateByResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStackTemplateByResourcesWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_ROS20190910::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTemplateResponse(doRPCRequest(make_shared<string>("UpdateTemplate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTemplateResponse Alibabacloud_ROS20190910::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

ValidateTemplateResponse Alibabacloud_ROS20190910::Client::validateTemplateWithOptions(shared_ptr<ValidateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ValidateTemplateResponse(doRPCRequest(make_shared<string>("ValidateTemplate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ValidateTemplateResponse Alibabacloud_ROS20190910::Client::validateTemplate(shared_ptr<ValidateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateTemplateWithOptions(request, runtime);
}

