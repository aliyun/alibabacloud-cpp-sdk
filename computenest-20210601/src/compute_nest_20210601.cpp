// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/compute_nest_20210601.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ComputeNest20210601;

Alibabacloud_ComputeNest20210601::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("computenest"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ComputeNest20210601::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeResourceGroupResponse Alibabacloud_ComputeNest20210601::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeResourceGroupResponse(callApi(params, req, runtime));
}

ChangeResourceGroupResponse Alibabacloud_ComputeNest20210601::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

ContinueDeployServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::continueDeployServiceInstanceWithOptions(shared_ptr<ContinueDeployServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->option)) {
    query->insert(pair<string, vector<string>>("Option", *request->option));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    query->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContinueDeployServiceInstance"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContinueDeployServiceInstanceResponse(callApi(params, req, runtime));
}

ContinueDeployServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::continueDeployServiceInstance(shared_ptr<ContinueDeployServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return continueDeployServiceInstanceWithOptions(request, runtime);
}

CreateServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::createServiceInstanceWithOptions(shared_ptr<CreateServiceInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateServiceInstanceShrinkRequest> request = make_shared<CreateServiceInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServiceInstanceShrinkRequestCommodity>(request->commodity)) {
    query->insert(pair<string, CreateServiceInstanceShrinkRequestCommodity>("Commodity", *request->commodity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroup)) {
    query->insert(pair<string, string>("ContactGroup", *request->contactGroup));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInstanceOps)) {
    query->insert(pair<string, bool>("EnableInstanceOps", *request->enableInstanceOps));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableUserPrometheus)) {
    query->insert(pair<string, bool>("EnableUserPrometheus", *request->enableUserPrometheus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<CreateServiceInstanceShrinkRequestOperationMetadata>(request->operationMetadata)) {
    query->insert(pair<string, CreateServiceInstanceShrinkRequestOperationMetadata>("OperationMetadata", *request->operationMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resourceAutoPay)) {
    query->insert(pair<string, bool>("ResourceAutoPay", *request->resourceAutoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationCode)) {
    query->insert(pair<string, string>("SpecificationCode", *request->specificationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    query->insert(pair<string, string>("SpecificationName", *request->specificationName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceInstanceShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateServiceInstanceShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trialType)) {
    query->insert(pair<string, string>("TrialType", *request->trialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceInstance"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceInstanceResponse(callApi(params, req, runtime));
}

CreateServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::createServiceInstance(shared_ptr<CreateServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceInstanceWithOptions(request, runtime);
}

DeleteServiceInstancesResponse Alibabacloud_ComputeNest20210601::Client::deleteServiceInstancesWithOptions(shared_ptr<DeleteServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceInstanceId)) {
    query->insert(pair<string, vector<string>>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceInstances"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteServiceInstancesResponse(callApi(params, req, runtime));
}

DeleteServiceInstancesResponse Alibabacloud_ComputeNest20210601::Client::deleteServiceInstances(shared_ptr<DeleteServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteServiceInstancesWithOptions(request, runtime);
}

GenerateServicePolicyResponse Alibabacloud_ComputeNest20210601::Client::generateServicePolicyWithOptions(shared_ptr<GenerateServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->operationTypes)) {
    query->insert(pair<string, vector<string>>("OperationTypes", *request->operationTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trialType)) {
    query->insert(pair<string, string>("TrialType", *request->trialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateServicePolicy"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateServicePolicyResponse(callApi(params, req, runtime));
}

GenerateServicePolicyResponse Alibabacloud_ComputeNest20210601::Client::generateServicePolicy(shared_ptr<GenerateServicePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateServicePolicyWithOptions(request, runtime);
}

GetServiceEstimateCostResponse Alibabacloud_ComputeNest20210601::Client::getServiceEstimateCostWithOptions(shared_ptr<GetServiceEstimateCostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetServiceEstimateCostShrinkRequest> request = make_shared<GetServiceEstimateCostShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetServiceEstimateCostRequestCommodity>(tmpReq->commodity)) {
    request->commodityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->commodity, make_shared<string>("Commodity"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityShrink)) {
    query->insert(pair<string, string>("Commodity", *request->commodityShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationName)) {
    query->insert(pair<string, string>("OperationName", *request->operationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    query->insert(pair<string, string>("SpecificationName", *request->specificationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trialType)) {
    query->insert(pair<string, string>("TrialType", *request->trialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceEstimateCost"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceEstimateCostResponse(callApi(params, req, runtime));
}

GetServiceEstimateCostResponse Alibabacloud_ComputeNest20210601::Client::getServiceEstimateCost(shared_ptr<GetServiceEstimateCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceEstimateCostWithOptions(request, runtime);
}

GetServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::getServiceInstanceWithOptions(shared_ptr<GetServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marketInstanceId)) {
    query->insert(pair<string, string>("MarketInstanceId", *request->marketInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceInstance"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceInstanceResponse(callApi(params, req, runtime));
}

GetServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::getServiceInstance(shared_ptr<GetServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceInstanceWithOptions(request, runtime);
}

GetServiceProvisionsResponse Alibabacloud_ComputeNest20210601::Client::getServiceProvisionsWithOptions(shared_ptr<GetServiceProvisionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetServiceProvisionsShrinkRequest> request = make_shared<GetServiceProvisionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trialType)) {
    query->insert(pair<string, string>("TrialType", *request->trialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceProvisions"))},
    {"version", boost::any(string("2021-06-01"))},
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

GetServiceProvisionsResponse Alibabacloud_ComputeNest20210601::Client::getServiceProvisions(shared_ptr<GetServiceProvisionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceProvisionsWithOptions(request, runtime);
}

GetServiceTemplateParameterConstraintsResponse Alibabacloud_ComputeNest20210601::Client::getServiceTemplateParameterConstraintsWithOptions(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deployRegionId)) {
    query->insert(pair<string, string>("DeployRegionId", *request->deployRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enablePrivateVpcConnection)) {
    query->insert(pair<string, bool>("EnablePrivateVpcConnection", *request->enablePrivateVpcConnection));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GetServiceTemplateParameterConstraintsRequestParameters>>(request->parameters)) {
    query->insert(pair<string, vector<GetServiceTemplateParameterConstraintsRequestParameters>>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceVersion)) {
    query->insert(pair<string, string>("ServiceVersion", *request->serviceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specificationName)) {
    query->insert(pair<string, string>("SpecificationName", *request->specificationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trialType)) {
    query->insert(pair<string, string>("TrialType", *request->trialType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetServiceTemplateParameterConstraints"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceTemplateParameterConstraintsResponse(callApi(params, req, runtime));
}

GetServiceTemplateParameterConstraintsResponse Alibabacloud_ComputeNest20210601::Client::getServiceTemplateParameterConstraints(shared_ptr<GetServiceTemplateParameterConstraintsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getServiceTemplateParameterConstraintsWithOptions(request, runtime);
}

ListServiceInstanceLogsResponse Alibabacloud_ComputeNest20210601::Client::listServiceInstanceLogsWithOptions(shared_ptr<ListServiceInstanceLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logSource)) {
    query->insert(pair<string, string>("LogSource", *request->logSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logstore)) {
    query->insert(pair<string, string>("Logstore", *request->logstore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstanceLogs"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceLogsResponse(callApi(params, req, runtime));
}

ListServiceInstanceLogsResponse Alibabacloud_ComputeNest20210601::Client::listServiceInstanceLogs(shared_ptr<ListServiceInstanceLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceLogsWithOptions(request, runtime);
}

ListServiceInstanceResourcesResponse Alibabacloud_ComputeNest20210601::Client::listServiceInstanceResourcesWithOptions(shared_ptr<ListServiceInstanceResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTimeEnd)) {
    query->insert(pair<string, string>("ExpireTimeEnd", *request->expireTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTimeStart)) {
    query->insert(pair<string, string>("ExpireTimeStart", *request->expireTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceARN)) {
    query->insert(pair<string, vector<string>>("ResourceARN", *request->resourceARN));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceResourceType)) {
    query->insert(pair<string, string>("ServiceInstanceResourceType", *request->serviceInstanceResourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstanceResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServiceInstanceResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstanceResources"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstanceResourcesResponse(callApi(params, req, runtime));
}

ListServiceInstanceResourcesResponse Alibabacloud_ComputeNest20210601::Client::listServiceInstanceResources(shared_ptr<ListServiceInstanceResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstanceResourcesWithOptions(request, runtime);
}

ListServiceInstancesResponse Alibabacloud_ComputeNest20210601::Client::listServiceInstancesWithOptions(shared_ptr<ListServiceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstancesRequestFilter>>(request->filter)) {
    query->insert(pair<string, vector<ListServiceInstancesRequestFilter>>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListServiceInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListServiceInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstances"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceInstancesResponse(callApi(params, req, runtime));
}

ListServiceInstancesResponse Alibabacloud_ComputeNest20210601::Client::listServiceInstances(shared_ptr<ListServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listServiceInstancesWithOptions(request, runtime);
}

ListTagKeysResponse Alibabacloud_ComputeNest20210601::Client::listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2021-06-01"))},
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

ListTagKeysResponse Alibabacloud_ComputeNest20210601::Client::listTagKeys(shared_ptr<ListTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagKeysWithOptions(request, runtime);
}

ListTagValuesResponse Alibabacloud_ComputeNest20210601::Client::listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2021-06-01"))},
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

ListTagValuesResponse Alibabacloud_ComputeNest20210601::Client::listTagValues(shared_ptr<ListTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagValuesWithOptions(request, runtime);
}

RestartServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::restartServiceInstanceWithOptions(shared_ptr<RestartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartServiceInstance"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartServiceInstanceResponse(callApi(params, req, runtime));
}

RestartServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::restartServiceInstance(shared_ptr<RestartServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartServiceInstanceWithOptions(request, runtime);
}

StartServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::startServiceInstanceWithOptions(shared_ptr<StartServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartServiceInstance"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartServiceInstanceResponse(callApi(params, req, runtime));
}

StartServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::startServiceInstance(shared_ptr<StartServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startServiceInstanceWithOptions(request, runtime);
}

StopServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::stopServiceInstanceWithOptions(shared_ptr<StopServiceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopServiceInstance"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopServiceInstanceResponse(callApi(params, req, runtime));
}

StopServiceInstanceResponse Alibabacloud_ComputeNest20210601::Client::stopServiceInstance(shared_ptr<StopServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopServiceInstanceWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_ComputeNest20210601::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"version", boost::any(string("2021-06-01"))},
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

TagResourcesResponse Alibabacloud_ComputeNest20210601::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnTagResourcesResponse Alibabacloud_ComputeNest20210601::Client::unTagResourcesWithOptions(shared_ptr<UnTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("UnTagResources"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagResourcesResponse(callApi(params, req, runtime));
}

UnTagResourcesResponse Alibabacloud_ComputeNest20210601::Client::unTagResources(shared_ptr<UnTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagResourcesWithOptions(request, runtime);
}

UpdateServiceInstanceSpecResponse Alibabacloud_ComputeNest20210601::Client::updateServiceInstanceSpecWithOptions(shared_ptr<UpdateServiceInstanceSpecRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateServiceInstanceSpecShrinkRequest> request = make_shared<UpdateServiceInstanceSpecShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateServiceInstanceSpecShrinkRequestCommodity>(request->commodity)) {
    query->insert(pair<string, UpdateServiceInstanceSpecShrinkRequestCommodity>("Commodity", *request->commodity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableUserPrometheus)) {
    query->insert(pair<string, bool>("EnableUserPrometheus", *request->enableUserPrometheus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationName)) {
    query->insert(pair<string, string>("OperationName", *request->operationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    query->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predefinedParametersName)) {
    query->insert(pair<string, string>("PredefinedParametersName", *request->predefinedParametersName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceInstanceId)) {
    query->insert(pair<string, string>("ServiceInstanceId", *request->serviceInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceInstanceSpec"))},
    {"version", boost::any(string("2021-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceInstanceSpecResponse(callApi(params, req, runtime));
}

UpdateServiceInstanceSpecResponse Alibabacloud_ComputeNest20210601::Client::updateServiceInstanceSpec(shared_ptr<UpdateServiceInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateServiceInstanceSpecWithOptions(request, runtime);
}

