// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eflo_cnp_20230828.hpp>
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

using namespace Alibabacloud_Eflo-cnp20230828;

Alibabacloud_Eflo-cnp20230828::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eflo-cnp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eflo-cnp20230828::Client::getEndpoint(shared_ptr<string> productId,
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

ChangeResourceGroupResponse Alibabacloud_Eflo-cnp20230828::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
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
    {"version", boost::any(string("2023-08-28"))},
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

ChangeResourceGroupResponse Alibabacloud_Eflo-cnp20230828::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CreateExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::createExperimentPlanWithOptions(shared_ptr<CreateExperimentPlanRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateExperimentPlanShrinkRequest> request = make_shared<CreateExperimentPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->externalParams)) {
    request->externalParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalParams, make_shared<string>("ExternalParams"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->externalParamsShrink)) {
    query->insert(pair<string, string>("ExternalParams", *request->externalParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planTemplateName)) {
    query->insert(pair<string, string>("PlanTemplateName", *request->planTemplateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceId)) {
    query->insert(pair<string, long>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateExperimentPlanShrinkRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateExperimentPlanShrinkRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExperimentPlan"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExperimentPlanResponse(callApi(params, req, runtime));
}

CreateExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::createExperimentPlan(shared_ptr<CreateExperimentPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExperimentPlanWithOptions(request, runtime);
}

CreateExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::createExperimentPlanTemplateWithOptions(shared_ptr<CreateExperimentPlanTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateExperimentPlanTemplateShrinkRequest> request = make_shared<CreateExperimentPlanTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateExperimentPlanTemplateRequestTemplatePipeline>>(tmpReq->templatePipeline)) {
    request->templatePipelineShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templatePipeline, make_shared<string>("TemplatePipeline"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->privacyLevel)) {
    query->insert(pair<string, string>("PrivacyLevel", *request->privacyLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateDescription)) {
    query->insert(pair<string, string>("TemplateDescription", *request->templateDescription));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    query->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templatePipelineShrink)) {
    body->insert(pair<string, string>("TemplatePipeline", *request->templatePipelineShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateExperimentPlanTemplate"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateExperimentPlanTemplateResponse(callApi(params, req, runtime));
}

CreateExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::createExperimentPlanTemplate(shared_ptr<CreateExperimentPlanTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createExperimentPlanTemplateWithOptions(request, runtime);
}

CreateResourceResponse Alibabacloud_Eflo-cnp20230828::Client::createResourceWithOptions(shared_ptr<CreateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateResourceShrinkRequest> request = make_shared<CreateResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateResourceRequestMachineTypes>(tmpReq->machineTypes)) {
    request->machineTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->machineTypes, make_shared<string>("MachineTypes"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateResourceRequestUserAccessParam>(tmpReq->userAccessParam)) {
    request->userAccessParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userAccessParam, make_shared<string>("UserAccessParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterDesc)) {
    query->insert(pair<string, string>("ClusterDesc", *request->clusterDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterName)) {
    query->insert(pair<string, string>("ClusterName", *request->clusterName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->machineTypesShrink)) {
    body->insert(pair<string, string>("MachineTypes", *request->machineTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessParamShrink)) {
    body->insert(pair<string, string>("UserAccessParam", *request->userAccessParamShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResource"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateResourceResponse(callApi(params, req, runtime));
}

CreateResourceResponse Alibabacloud_Eflo-cnp20230828::Client::createResource(shared_ptr<CreateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourceWithOptions(request, runtime);
}

DeleteExperimentResponse Alibabacloud_Eflo-cnp20230828::Client::deleteExperimentWithOptions(shared_ptr<DeleteExperimentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->experimentId)) {
    query->insert(pair<string, long>("ExperimentId", *request->experimentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExperiment"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExperimentResponse(callApi(params, req, runtime));
}

DeleteExperimentResponse Alibabacloud_Eflo-cnp20230828::Client::deleteExperiment(shared_ptr<DeleteExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExperimentWithOptions(request, runtime);
}

DeleteExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::deleteExperimentPlanWithOptions(shared_ptr<DeleteExperimentPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->planId)) {
    query->insert(pair<string, long>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExperimentPlan"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExperimentPlanResponse(callApi(params, req, runtime));
}

DeleteExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::deleteExperimentPlan(shared_ptr<DeleteExperimentPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExperimentPlanWithOptions(request, runtime);
}

DeleteExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::deleteExperimentPlanTemplateWithOptions(shared_ptr<DeleteExperimentPlanTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteExperimentPlanTemplate"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteExperimentPlanTemplateResponse(callApi(params, req, runtime));
}

DeleteExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::deleteExperimentPlanTemplate(shared_ptr<DeleteExperimentPlanTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteExperimentPlanTemplateWithOptions(request, runtime);
}

GetExperimentResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentWithOptions(shared_ptr<GetExperimentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->experimentId)) {
    query->insert(pair<string, long>("ExperimentId", *request->experimentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExperiment"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExperimentResponse(callApi(params, req, runtime));
}

GetExperimentResponse Alibabacloud_Eflo-cnp20230828::Client::getExperiment(shared_ptr<GetExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExperimentWithOptions(request, runtime);
}

GetExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentPlanWithOptions(shared_ptr<GetExperimentPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->planId)) {
    query->insert(pair<string, long>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExperimentPlan"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExperimentPlanResponse(callApi(params, req, runtime));
}

GetExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentPlan(shared_ptr<GetExperimentPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExperimentPlanWithOptions(request, runtime);
}

GetExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentPlanTemplateWithOptions(shared_ptr<GetExperimentPlanTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExperimentPlanTemplate"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExperimentPlanTemplateResponse(callApi(params, req, runtime));
}

GetExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentPlanTemplate(shared_ptr<GetExperimentPlanTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExperimentPlanTemplateWithOptions(request, runtime);
}

GetExperimentResultDataResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentResultDataWithOptions(shared_ptr<GetExperimentResultDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->experimentId)) {
    query->insert(pair<string, long>("ExperimentId", *request->experimentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    query->insert(pair<string, string>("Hostname", *request->hostname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workloadType)) {
    query->insert(pair<string, string>("WorkloadType", *request->workloadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExperimentResultData"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExperimentResultDataResponse(callApi(params, req, runtime));
}

GetExperimentResultDataResponse Alibabacloud_Eflo-cnp20230828::Client::getExperimentResultData(shared_ptr<GetExperimentResultDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExperimentResultDataWithOptions(request, runtime);
}

GetResourceResponse Alibabacloud_Eflo-cnp20230828::Client::getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResource"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceResponse(callApi(params, req, runtime));
}

GetResourceResponse Alibabacloud_Eflo-cnp20230828::Client::getResource(shared_ptr<GetResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceWithOptions(request, runtime);
}

GetResourcePredictResultResponse Alibabacloud_Eflo-cnp20230828::Client::getResourcePredictResultWithOptions(shared_ptr<GetResourcePredictResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceId)) {
    query->insert(pair<string, long>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourcePredictResult"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourcePredictResultResponse(callApi(params, req, runtime));
}

GetResourcePredictResultResponse Alibabacloud_Eflo-cnp20230828::Client::getResourcePredictResult(shared_ptr<GetResourcePredictResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourcePredictResultWithOptions(request, runtime);
}

GetWorkloadResponse Alibabacloud_Eflo-cnp20230828::Client::getWorkloadWithOptions(shared_ptr<GetWorkloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->workloadId)) {
    query->insert(pair<string, long>("WorkloadId", *request->workloadId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkload"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkloadResponse(callApi(params, req, runtime));
}

GetWorkloadResponse Alibabacloud_Eflo-cnp20230828::Client::getWorkload(shared_ptr<GetWorkloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkloadWithOptions(request, runtime);
}

ListExperimentPlanTemplatesResponse Alibabacloud_Eflo-cnp20230828::Client::listExperimentPlanTemplatesWithOptions(shared_ptr<ListExperimentPlanTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->privacyLevel)) {
    query->insert(pair<string, string>("PrivacyLevel", *request->privacyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExperimentPlanTemplates"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExperimentPlanTemplatesResponse(callApi(params, req, runtime));
}

ListExperimentPlanTemplatesResponse Alibabacloud_Eflo-cnp20230828::Client::listExperimentPlanTemplates(shared_ptr<ListExperimentPlanTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExperimentPlanTemplatesWithOptions(request, runtime);
}

ListExperimentPlansResponse Alibabacloud_Eflo-cnp20230828::Client::listExperimentPlansWithOptions(shared_ptr<ListExperimentPlansRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListExperimentPlansShrinkRequest> request = make_shared<ListExperimentPlansShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->planTaskStatus)) {
    request->planTaskStatusShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->planTaskStatus, make_shared<string>("PlanTaskStatus"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceName)) {
    request->resourceNameShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceName, make_shared<string>("ResourceName"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListExperimentPlansRequestTag>>(tmpReq->tag)) {
    request->tagShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tag, make_shared<string>("Tag"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creatTimeOrder)) {
    query->insert(pair<string, string>("CreatTimeOrder", *request->creatTimeOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimeOrder)) {
    query->insert(pair<string, string>("EndTimeOrder", *request->endTimeOrder));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceId)) {
    query->insert(pair<string, long>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeOrder)) {
    query->insert(pair<string, string>("StartTimeOrder", *request->startTimeOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagShrink)) {
    query->insert(pair<string, string>("Tag", *request->tagShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planTaskStatusShrink)) {
    body->insert(pair<string, string>("PlanTaskStatus", *request->planTaskStatusShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceNameShrink)) {
    body->insert(pair<string, string>("ResourceName", *request->resourceNameShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExperimentPlans"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExperimentPlansResponse(callApi(params, req, runtime));
}

ListExperimentPlansResponse Alibabacloud_Eflo-cnp20230828::Client::listExperimentPlans(shared_ptr<ListExperimentPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExperimentPlansWithOptions(request, runtime);
}

ListExperimentsResponse Alibabacloud_Eflo-cnp20230828::Client::listExperimentsWithOptions(shared_ptr<ListExperimentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->order)) {
    query->insert(pair<string, long>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->planId)) {
    query->insert(pair<string, long>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListExperiments"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListExperimentsResponse(callApi(params, req, runtime));
}

ListExperimentsResponse Alibabacloud_Eflo-cnp20230828::Client::listExperiments(shared_ptr<ListExperimentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listExperimentsWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Eflo-cnp20230828::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
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
    {"version", boost::any(string("2023-08-28"))},
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

ListTagResourcesResponse Alibabacloud_Eflo-cnp20230828::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListWorkloadsResponse Alibabacloud_Eflo-cnp20230828::Client::listWorkloadsWithOptions(shared_ptr<ListWorkloadsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkloads"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkloadsResponse(callApi(params, req, runtime));
}

ListWorkloadsResponse Alibabacloud_Eflo-cnp20230828::Client::listWorkloads(shared_ptr<ListWorkloadsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWorkloadsWithOptions(request, runtime);
}

StopExperimentResponse Alibabacloud_Eflo-cnp20230828::Client::stopExperimentWithOptions(shared_ptr<StopExperimentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->experimentId)) {
    query->insert(pair<string, long>("ExperimentId", *request->experimentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopExperiment"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopExperimentResponse(callApi(params, req, runtime));
}

StopExperimentResponse Alibabacloud_Eflo-cnp20230828::Client::stopExperiment(shared_ptr<StopExperimentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopExperimentWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Eflo-cnp20230828::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"version", boost::any(string("2023-08-28"))},
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

TagResourcesResponse Alibabacloud_Eflo-cnp20230828::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Eflo-cnp20230828::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
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
    {"version", boost::any(string("2023-08-28"))},
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

UntagResourcesResponse Alibabacloud_Eflo-cnp20230828::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::updateExperimentPlanWithOptions(shared_ptr<UpdateExperimentPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->planId)) {
    query->insert(pair<string, long>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planTemplateName)) {
    query->insert(pair<string, string>("PlanTemplateName", *request->planTemplateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExperimentPlan"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExperimentPlanResponse(callApi(params, req, runtime));
}

UpdateExperimentPlanResponse Alibabacloud_Eflo-cnp20230828::Client::updateExperimentPlan(shared_ptr<UpdateExperimentPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateExperimentPlanWithOptions(request, runtime);
}

UpdateExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::updateExperimentPlanTemplateWithOptions(shared_ptr<UpdateExperimentPlanTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateExperimentPlanTemplateShrinkRequest> request = make_shared<UpdateExperimentPlanTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateExperimentPlanTemplateRequestTemplatePipeline>>(tmpReq->templatePipeline)) {
    request->templatePipelineShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templatePipeline, make_shared<string>("TemplatePipeline"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templatePipelineShrink)) {
    body->insert(pair<string, string>("TemplatePipeline", *request->templatePipelineShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateExperimentPlanTemplate"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateExperimentPlanTemplateResponse(callApi(params, req, runtime));
}

UpdateExperimentPlanTemplateResponse Alibabacloud_Eflo-cnp20230828::Client::updateExperimentPlanTemplate(shared_ptr<UpdateExperimentPlanTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateExperimentPlanTemplateWithOptions(request, runtime);
}

ValidateResourceResponse Alibabacloud_Eflo-cnp20230828::Client::validateResourceWithOptions(shared_ptr<ValidateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ValidateResourceShrinkRequest> request = make_shared<ValidateResourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ValidateResourceRequestUserAccessParam>(tmpReq->userAccessParam)) {
    request->userAccessParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userAccessParam, make_shared<string>("UserAccessParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessParamShrink)) {
    body->insert(pair<string, string>("UserAccessParam", *request->userAccessParamShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateResource"))},
    {"version", boost::any(string("2023-08-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateResourceResponse(callApi(params, req, runtime));
}

ValidateResourceResponse Alibabacloud_Eflo-cnp20230828::Client::validateResource(shared_ptr<ValidateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateResourceWithOptions(request, runtime);
}

