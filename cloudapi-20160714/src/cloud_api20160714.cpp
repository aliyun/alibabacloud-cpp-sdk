// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloud_api20160714.hpp>
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

using namespace Alibabacloud_CloudAPI20160714;

Alibabacloud_CloudAPI20160714::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "apigateway.cn-qingdao.aliyuncs.com"},
    {"cn-beijing", "apigateway.cn-beijing.aliyuncs.com"},
    {"cn-chengdu", "apigateway.cn-chengdu.aliyuncs.com"},
    {"cn-zhangjiakou", "apigateway.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote", "apigateway.cn-huhehaote.aliyuncs.com"},
    {"cn-hangzhou", "apigateway.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "apigateway.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "apigateway.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "apigateway.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "apigateway.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "apigateway.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "apigateway.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "apigateway.ap-southeast-5.aliyuncs.com"},
    {"ap-northeast-1", "apigateway.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1", "apigateway.eu-west-1.aliyuncs.com"},
    {"us-west-1", "apigateway.us-west-1.aliyuncs.com"},
    {"us-east-1", "apigateway.us-east-1.aliyuncs.com"},
    {"eu-central-1", "apigateway.eu-central-1.aliyuncs.com"},
    {"me-east-1", "apigateway.me-east-1.aliyuncs.com"},
    {"ap-south-1", "apigateway.ap-south-1.aliyuncs.com"},
    {"cn-north-2-gov-1", "apigateway.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "apigateway.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "apigateway.aliyuncs.com"},
    {"cn-shanghai-finance-1", "apigateway.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CloudAPI20160714::Client::getEndpoint(shared_ptr<string> productId,
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

AbolishApiResponse Alibabacloud_CloudAPI20160714::Client::abolishApiWithOptions(shared_ptr<AbolishApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbolishApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbolishApiResponse(callApi(params, req, runtime));
}

AbolishApiResponse Alibabacloud_CloudAPI20160714::Client::abolishApi(shared_ptr<AbolishApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishApiWithOptions(request, runtime);
}

AddIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::addIpControlPolicyItemWithOptions(shared_ptr<AddIpControlPolicyItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("CidrIp", *request->cidrIp));
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddIpControlPolicyItem"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddIpControlPolicyItemResponse(callApi(params, req, runtime));
}

AddIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::addIpControlPolicyItem(shared_ptr<AddIpControlPolicyItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addIpControlPolicyItemWithOptions(request, runtime);
}

AddTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::addTrafficSpecialControlWithOptions(shared_ptr<AddTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SpecialKey", *request->specialKey));
  query->insert(pair<string, string>("SpecialType", *request->specialType));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  query->insert(pair<string, long>("TrafficValue", *request->trafficValue));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTrafficSpecialControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTrafficSpecialControlResponse(callApi(params, req, runtime));
}

AddTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::addTrafficSpecialControl(shared_ptr<AddTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTrafficSpecialControlWithOptions(request, runtime);
}

AttachPluginResponse Alibabacloud_CloudAPI20160714::Client::attachPluginWithOptions(shared_ptr<AttachPluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("PluginId", *request->pluginId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachPlugin"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachPluginResponse(callApi(params, req, runtime));
}

AttachPluginResponse Alibabacloud_CloudAPI20160714::Client::attachPlugin(shared_ptr<AttachPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachPluginWithOptions(request, runtime);
}

BatchAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::batchAbolishApisWithOptions(shared_ptr<BatchAbolishApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<BatchAbolishApisRequestApi>>("Api", *request->api));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAbolishApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAbolishApisResponse(callApi(params, req, runtime));
}

BatchAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::batchAbolishApis(shared_ptr<BatchAbolishApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAbolishApisWithOptions(request, runtime);
}

BatchDeployApisResponse Alibabacloud_CloudAPI20160714::Client::batchDeployApisWithOptions(shared_ptr<BatchDeployApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<BatchDeployApisRequestApi>>("Api", *request->api));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeployApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeployApisResponse(callApi(params, req, runtime));
}

BatchDeployApisResponse Alibabacloud_CloudAPI20160714::Client::batchDeployApis(shared_ptr<BatchDeployApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeployApisWithOptions(request, runtime);
}

CreateApiResponse Alibabacloud_CloudAPI20160714::Client::createApiWithOptions(shared_ptr<CreateApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AllowSignatureMethod", *request->allowSignatureMethod));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("AppCodeAuthType", *request->appCodeAuthType));
  query->insert(pair<string, string>("AuthType", *request->authType));
  query->insert(pair<string, string>("ConstantParameters", *request->constantParameters));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, bool>("DisableInternet", *request->disableInternet));
  query->insert(pair<string, string>("ErrorCodeSamples", *request->errorCodeSamples));
  query->insert(pair<string, string>("FailResultSample", *request->failResultSample));
  query->insert(pair<string, bool>("ForceNonceCheck", *request->forceNonceCheck));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("OpenIdConnectConfig", *request->openIdConnectConfig));
  query->insert(pair<string, string>("RequestConfig", *request->requestConfig));
  query->insert(pair<string, string>("RequestParameters", *request->requestParameters));
  query->insert(pair<string, string>("ResultBodyModel", *request->resultBodyModel));
  query->insert(pair<string, string>("ResultDescriptions", *request->resultDescriptions));
  query->insert(pair<string, string>("ResultSample", *request->resultSample));
  query->insert(pair<string, string>("ResultType", *request->resultType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("ServiceConfig", *request->serviceConfig));
  query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  query->insert(pair<string, string>("ServiceParametersMap", *request->serviceParametersMap));
  query->insert(pair<string, string>("SystemParameters", *request->systemParameters));
  query->insert(pair<string, string>("Visibility", *request->visibility));
  query->insert(pair<string, string>("WebSocketApiType", *request->webSocketApiType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiResponse(callApi(params, req, runtime));
}

CreateApiResponse Alibabacloud_CloudAPI20160714::Client::createApi(shared_ptr<CreateApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiWithOptions(request, runtime);
}

CreateApiGroupResponse Alibabacloud_CloudAPI20160714::Client::createApiGroupWithOptions(shared_ptr<CreateApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BasePath", *request->basePath));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupName", *request->groupName));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<CreateApiGroupRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApiGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiGroupResponse(callApi(params, req, runtime));
}

CreateApiGroupResponse Alibabacloud_CloudAPI20160714::Client::createApiGroup(shared_ptr<CreateApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiGroupWithOptions(request, runtime);
}

CreateApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::createApiStageVariableWithOptions(shared_ptr<CreateApiStageVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageId", *request->stageId));
  query->insert(pair<string, string>("StageRouteModel", *request->stageRouteModel));
  query->insert(pair<string, bool>("SupportRoute", *request->supportRoute));
  query->insert(pair<string, string>("VariableName", *request->variableName));
  query->insert(pair<string, string>("VariableValue", *request->variableValue));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApiStageVariable"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiStageVariableResponse(callApi(params, req, runtime));
}

CreateApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::createApiStageVariable(shared_ptr<CreateApiStageVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiStageVariableWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_CloudAPI20160714::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("Source", *request->source));
  query->insert(pair<string, vector<CreateAppRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppResponse(callApi(params, req, runtime));
}

CreateAppResponse Alibabacloud_CloudAPI20160714::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_CloudAPI20160714::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, string>("ChargeType", *request->chargeType));
  query->insert(pair<string, long>("Duration", *request->duration));
  query->insert(pair<string, string>("HttpsPolicy", *request->httpsPolicy));
  query->insert(pair<string, string>("InstanceName", *request->instanceName));
  query->insert(pair<string, string>("InstanceSpec", *request->instanceSpec));
  query->insert(pair<string, string>("PricingCycle", *request->pricingCycle));
  query->insert(pair<string, string>("Token", *request->token));
  query->insert(pair<string, string>("ZoneId", *request->zoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_CloudAPI20160714::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateIntranetDomainResponse Alibabacloud_CloudAPI20160714::Client::createIntranetDomainWithOptions(shared_ptr<CreateIntranetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntranetDomain"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIntranetDomainResponse(callApi(params, req, runtime));
}

CreateIntranetDomainResponse Alibabacloud_CloudAPI20160714::Client::createIntranetDomain(shared_ptr<CreateIntranetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntranetDomainWithOptions(request, runtime);
}

CreateIpControlResponse Alibabacloud_CloudAPI20160714::Client::createIpControlWithOptions(shared_ptr<CreateIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("IpControlName", *request->ipControlName));
  query->insert(pair<string, vector<CreateIpControlRequestIpControlPolicys>>("IpControlPolicys", *request->ipControlPolicys));
  query->insert(pair<string, string>("IpControlType", *request->ipControlType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIpControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateIpControlResponse(callApi(params, req, runtime));
}

CreateIpControlResponse Alibabacloud_CloudAPI20160714::Client::createIpControl(shared_ptr<CreateIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIpControlWithOptions(request, runtime);
}

CreateLogConfigResponse Alibabacloud_CloudAPI20160714::Client::createLogConfigWithOptions(shared_ptr<CreateLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("LogType", *request->logType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SlsLogStore", *request->slsLogStore));
  query->insert(pair<string, string>("SlsProject", *request->slsProject));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogConfig"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLogConfigResponse(callApi(params, req, runtime));
}

CreateLogConfigResponse Alibabacloud_CloudAPI20160714::Client::createLogConfig(shared_ptr<CreateLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLogConfigWithOptions(request, runtime);
}

CreateModelResponse Alibabacloud_CloudAPI20160714::Client::createModelWithOptions(shared_ptr<CreateModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("ModelName", *request->modelName));
  query->insert(pair<string, string>("Schema", *request->schema));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateModel"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateModelResponse(callApi(params, req, runtime));
}

CreateModelResponse Alibabacloud_CloudAPI20160714::Client::createModel(shared_ptr<CreateModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createModelWithOptions(request, runtime);
}

CreateMonitorGroupResponse Alibabacloud_CloudAPI20160714::Client::createMonitorGroupWithOptions(shared_ptr<CreateMonitorGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Auth", *request->auth));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("RawMonitorGroupId", *request->rawMonitorGroupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMonitorGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMonitorGroupResponse(callApi(params, req, runtime));
}

CreateMonitorGroupResponse Alibabacloud_CloudAPI20160714::Client::createMonitorGroup(shared_ptr<CreateMonitorGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMonitorGroupWithOptions(request, runtime);
}

CreatePluginResponse Alibabacloud_CloudAPI20160714::Client::createPluginWithOptions(shared_ptr<CreatePluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("PluginData", *request->pluginData));
  query->insert(pair<string, string>("PluginName", *request->pluginName));
  query->insert(pair<string, string>("PluginType", *request->pluginType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<CreatePluginRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePlugin"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePluginResponse(callApi(params, req, runtime));
}

CreatePluginResponse Alibabacloud_CloudAPI20160714::Client::createPlugin(shared_ptr<CreatePluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPluginWithOptions(request, runtime);
}

CreateSignatureResponse Alibabacloud_CloudAPI20160714::Client::createSignatureWithOptions(shared_ptr<CreateSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureKey", *request->signatureKey));
  query->insert(pair<string, string>("SignatureName", *request->signatureName));
  query->insert(pair<string, string>("SignatureSecret", *request->signatureSecret));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSignature"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSignatureResponse(callApi(params, req, runtime));
}

CreateSignatureResponse Alibabacloud_CloudAPI20160714::Client::createSignature(shared_ptr<CreateSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSignatureWithOptions(request, runtime);
}

CreateTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::createTrafficControlWithOptions(shared_ptr<CreateTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ApiDefault", *request->apiDefault));
  query->insert(pair<string, long>("AppDefault", *request->appDefault));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("TrafficControlName", *request->trafficControlName));
  query->insert(pair<string, string>("TrafficControlUnit", *request->trafficControlUnit));
  query->insert(pair<string, long>("UserDefault", *request->userDefault));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrafficControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrafficControlResponse(callApi(params, req, runtime));
}

CreateTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::createTrafficControl(shared_ptr<CreateTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrafficControlWithOptions(request, runtime);
}

DeleteAllTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteAllTrafficSpecialControlWithOptions(shared_ptr<DeleteAllTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAllTrafficSpecialControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAllTrafficSpecialControlResponse(callApi(params, req, runtime));
}

DeleteAllTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteAllTrafficSpecialControl(shared_ptr<DeleteAllTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllTrafficSpecialControlWithOptions(request, runtime);
}

DeleteApiResponse Alibabacloud_CloudAPI20160714::Client::deleteApiWithOptions(shared_ptr<DeleteApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiResponse(callApi(params, req, runtime));
}

DeleteApiResponse Alibabacloud_CloudAPI20160714::Client::deleteApi(shared_ptr<DeleteApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiWithOptions(request, runtime);
}

DeleteApiGroupResponse Alibabacloud_CloudAPI20160714::Client::deleteApiGroupWithOptions(shared_ptr<DeleteApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DeleteApiGroupRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApiGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiGroupResponse(callApi(params, req, runtime));
}

DeleteApiGroupResponse Alibabacloud_CloudAPI20160714::Client::deleteApiGroup(shared_ptr<DeleteApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiGroupWithOptions(request, runtime);
}

DeleteApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::deleteApiStageVariableWithOptions(shared_ptr<DeleteApiStageVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageId", *request->stageId));
  query->insert(pair<string, string>("VariableName", *request->variableName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApiStageVariable"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiStageVariableResponse(callApi(params, req, runtime));
}

DeleteApiStageVariableResponse Alibabacloud_CloudAPI20160714::Client::deleteApiStageVariable(shared_ptr<DeleteApiStageVariableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiStageVariableWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_CloudAPI20160714::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DeleteAppRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApp"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppResponse(callApi(params, req, runtime));
}

DeleteAppResponse Alibabacloud_CloudAPI20160714::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

DeleteDomainResponse Alibabacloud_CloudAPI20160714::Client::deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomain"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainResponse(callApi(params, req, runtime));
}

DeleteDomainResponse Alibabacloud_CloudAPI20160714::Client::deleteDomain(shared_ptr<DeleteDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainWithOptions(request, runtime);
}

DeleteDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::deleteDomainCertificateWithOptions(shared_ptr<DeleteDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CertificateId", *request->certificateId));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomainCertificate"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainCertificateResponse(callApi(params, req, runtime));
}

DeleteDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::deleteDomainCertificate(shared_ptr<DeleteDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainCertificateWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_CloudAPI20160714::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, vector<DeleteInstanceRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_CloudAPI20160714::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteIpControlResponse Alibabacloud_CloudAPI20160714::Client::deleteIpControlWithOptions(shared_ptr<DeleteIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIpControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteIpControlResponse(callApi(params, req, runtime));
}

DeleteIpControlResponse Alibabacloud_CloudAPI20160714::Client::deleteIpControl(shared_ptr<DeleteIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIpControlWithOptions(request, runtime);
}

DeleteLogConfigResponse Alibabacloud_CloudAPI20160714::Client::deleteLogConfigWithOptions(shared_ptr<DeleteLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("LogType", *request->logType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLogConfig"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLogConfigResponse(callApi(params, req, runtime));
}

DeleteLogConfigResponse Alibabacloud_CloudAPI20160714::Client::deleteLogConfig(shared_ptr<DeleteLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLogConfigWithOptions(request, runtime);
}

DeleteModelResponse Alibabacloud_CloudAPI20160714::Client::deleteModelWithOptions(shared_ptr<DeleteModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("ModelName", *request->modelName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteModel"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteModelResponse(callApi(params, req, runtime));
}

DeleteModelResponse Alibabacloud_CloudAPI20160714::Client::deleteModel(shared_ptr<DeleteModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteModelWithOptions(request, runtime);
}

DeletePluginResponse Alibabacloud_CloudAPI20160714::Client::deletePluginWithOptions(shared_ptr<DeletePluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("PluginId", *request->pluginId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DeletePluginRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlugin"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePluginResponse(callApi(params, req, runtime));
}

DeletePluginResponse Alibabacloud_CloudAPI20160714::Client::deletePlugin(shared_ptr<DeletePluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePluginWithOptions(request, runtime);
}

DeleteSignatureResponse Alibabacloud_CloudAPI20160714::Client::deleteSignatureWithOptions(shared_ptr<DeleteSignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureId", *request->signatureId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSignature"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSignatureResponse(callApi(params, req, runtime));
}

DeleteSignatureResponse Alibabacloud_CloudAPI20160714::Client::deleteSignature(shared_ptr<DeleteSignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSignatureWithOptions(request, runtime);
}

DeleteTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficControlWithOptions(shared_ptr<DeleteTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficControlResponse(callApi(params, req, runtime));
}

DeleteTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficControl(shared_ptr<DeleteTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficControlWithOptions(request, runtime);
}

DeleteTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficSpecialControlWithOptions(shared_ptr<DeleteTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SpecialKey", *request->specialKey));
  query->insert(pair<string, string>("SpecialType", *request->specialType));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficSpecialControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficSpecialControlResponse(callApi(params, req, runtime));
}

DeleteTrafficSpecialControlResponse Alibabacloud_CloudAPI20160714::Client::deleteTrafficSpecialControl(shared_ptr<DeleteTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficSpecialControlWithOptions(request, runtime);
}

DeployApiResponse Alibabacloud_CloudAPI20160714::Client::deployApiWithOptions(shared_ptr<DeployApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployApiResponse(callApi(params, req, runtime));
}

DeployApiResponse Alibabacloud_CloudAPI20160714::Client::deployApi(shared_ptr<DeployApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployApiWithOptions(request, runtime);
}

DescribeAbolishApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeAbolishApiTaskWithOptions(shared_ptr<DescribeAbolishApiTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OperationUid", *request->operationUid));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAbolishApiTask"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAbolishApiTaskResponse(callApi(params, req, runtime));
}

DescribeAbolishApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeAbolishApiTask(shared_ptr<DescribeAbolishApiTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAbolishApiTaskWithOptions(request, runtime);
}

DescribeApiResponse Alibabacloud_CloudAPI20160714::Client::describeApiWithOptions(shared_ptr<DescribeApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiResponse(callApi(params, req, runtime));
}

DescribeApiResponse Alibabacloud_CloudAPI20160714::Client::describeApi(shared_ptr<DescribeApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiWithOptions(request, runtime);
}

DescribeApiDocResponse Alibabacloud_CloudAPI20160714::Client::describeApiDocWithOptions(shared_ptr<DescribeApiDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiDoc"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiDocResponse(callApi(params, req, runtime));
}

DescribeApiDocResponse Alibabacloud_CloudAPI20160714::Client::describeApiDoc(shared_ptr<DescribeApiDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiDocWithOptions(request, runtime);
}

DescribeApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupWithOptions(shared_ptr<DescribeApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DescribeApiGroupRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiGroupResponse(callApi(params, req, runtime));
}

DescribeApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroup(shared_ptr<DescribeApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupWithOptions(request, runtime);
}

DescribeApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupVpcWhitelistWithOptions(shared_ptr<DescribeApiGroupVpcWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiGroupVpcWhitelist"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiGroupVpcWhitelistResponse(callApi(params, req, runtime));
}

DescribeApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupVpcWhitelist(shared_ptr<DescribeApiGroupVpcWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupVpcWhitelistWithOptions(request, runtime);
}

DescribeApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroupsWithOptions(shared_ptr<DescribeApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("EnableTagAuth", *request->enableTagAuth));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("GroupName", *request->groupName));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("Sort", *request->sort));
  query->insert(pair<string, vector<DescribeApiGroupsRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiGroups"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiGroupsResponse(callApi(params, req, runtime));
}

DescribeApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describeApiGroups(shared_ptr<DescribeApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupsWithOptions(request, runtime);
}

DescribeApiHistoriesResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistoriesWithOptions(shared_ptr<DescribeApiHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiHistories"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiHistoriesResponse(callApi(params, req, runtime));
}

DescribeApiHistoriesResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistories(shared_ptr<DescribeApiHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiHistoriesWithOptions(request, runtime);
}

DescribeApiHistoryResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistoryWithOptions(shared_ptr<DescribeApiHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiHistory"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiHistoryResponse(callApi(params, req, runtime));
}

DescribeApiHistoryResponse Alibabacloud_CloudAPI20160714::Client::describeApiHistory(shared_ptr<DescribeApiHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiHistoryWithOptions(request, runtime);
}

DescribeApiIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiIpControlsWithOptions(shared_ptr<DescribeApiIpControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiIpControls"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiIpControlsResponse(callApi(params, req, runtime));
}

DescribeApiIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiIpControls(shared_ptr<DescribeApiIpControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiIpControlsWithOptions(request, runtime);
}

DescribeApiLatencyDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiLatencyDataWithOptions(shared_ptr<DescribeApiLatencyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiLatencyData"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiLatencyDataResponse(callApi(params, req, runtime));
}

DescribeApiLatencyDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiLatencyData(shared_ptr<DescribeApiLatencyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiLatencyDataWithOptions(request, runtime);
}

DescribeApiMarketAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeApiMarketAttributesWithOptions(shared_ptr<DescribeApiMarketAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiMarketAttributes"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiMarketAttributesResponse(callApi(params, req, runtime));
}

DescribeApiMarketAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeApiMarketAttributes(shared_ptr<DescribeApiMarketAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiMarketAttributesWithOptions(request, runtime);
}

DescribeApiQpsDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiQpsDataWithOptions(shared_ptr<DescribeApiQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiQpsData"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiQpsDataResponse(callApi(params, req, runtime));
}

DescribeApiQpsDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiQpsData(shared_ptr<DescribeApiQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiQpsDataWithOptions(request, runtime);
}

DescribeApiSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeApiSignaturesWithOptions(shared_ptr<DescribeApiSignaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiSignatures"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiSignaturesResponse(callApi(params, req, runtime));
}

DescribeApiSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeApiSignatures(shared_ptr<DescribeApiSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiSignaturesWithOptions(request, runtime);
}

DescribeApiTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficControlsWithOptions(shared_ptr<DescribeApiTrafficControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiTrafficControls"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiTrafficControlsResponse(callApi(params, req, runtime));
}

DescribeApiTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficControls(shared_ptr<DescribeApiTrafficControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiTrafficControlsWithOptions(request, runtime);
}

DescribeApiTrafficDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficDataWithOptions(shared_ptr<DescribeApiTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiTrafficData"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiTrafficDataResponse(callApi(params, req, runtime));
}

DescribeApiTrafficDataResponse Alibabacloud_CloudAPI20160714::Client::describeApiTrafficData(shared_ptr<DescribeApiTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiTrafficDataWithOptions(request, runtime);
}

DescribeApisResponse Alibabacloud_CloudAPI20160714::Client::describeApisWithOptions(shared_ptr<DescribeApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("CatalogId", *request->catalogId));
  query->insert(pair<string, bool>("EnableTagAuth", *request->enableTagAuth));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DescribeApisRequestTag>>("Tag", *request->tag));
  query->insert(pair<string, string>("Visibility", *request->visibility));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisResponse(callApi(params, req, runtime));
}

DescribeApisResponse Alibabacloud_CloudAPI20160714::Client::describeApis(shared_ptr<DescribeApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisWithOptions(request, runtime);
}

DescribeApisByAppResponse Alibabacloud_CloudAPI20160714::Client::describeApisByAppWithOptions(shared_ptr<DescribeApisByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("ApiUid", *request->apiUid));
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("Method", *request->method));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("Path", *request->path));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisByApp"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisByAppResponse(callApi(params, req, runtime));
}

DescribeApisByAppResponse Alibabacloud_CloudAPI20160714::Client::describeApisByApp(shared_ptr<DescribeApisByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByAppWithOptions(request, runtime);
}

DescribeApisByIpControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByIpControlWithOptions(shared_ptr<DescribeApisByIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisByIpControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisByIpControlResponse(callApi(params, req, runtime));
}

DescribeApisByIpControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByIpControl(shared_ptr<DescribeApisByIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByIpControlWithOptions(request, runtime);
}

DescribeApisBySignatureResponse Alibabacloud_CloudAPI20160714::Client::describeApisBySignatureWithOptions(shared_ptr<DescribeApisBySignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureId", *request->signatureId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisBySignature"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisBySignatureResponse(callApi(params, req, runtime));
}

DescribeApisBySignatureResponse Alibabacloud_CloudAPI20160714::Client::describeApisBySignature(shared_ptr<DescribeApisBySignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisBySignatureWithOptions(request, runtime);
}

DescribeApisByTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByTrafficControlWithOptions(shared_ptr<DescribeApisByTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisByTrafficControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisByTrafficControlResponse(callApi(params, req, runtime));
}

DescribeApisByTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::describeApisByTrafficControl(shared_ptr<DescribeApisByTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByTrafficControlWithOptions(request, runtime);
}

DescribeAppResponse Alibabacloud_CloudAPI20160714::Client::describeAppWithOptions(shared_ptr<DescribeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApp"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppResponse(callApi(params, req, runtime));
}

DescribeAppResponse Alibabacloud_CloudAPI20160714::Client::describeApp(shared_ptr<DescribeAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppWithOptions(request, runtime);
}

DescribeAppAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeAppAttributesWithOptions(shared_ptr<DescribeAppAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppCode", *request->appCode));
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("AppKey", *request->appKey));
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, bool>("EnableTagAuth", *request->enableTagAuth));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("Sort", *request->sort));
  query->insert(pair<string, vector<DescribeAppAttributesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppAttributes"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppAttributesResponse(callApi(params, req, runtime));
}

DescribeAppAttributesResponse Alibabacloud_CloudAPI20160714::Client::describeAppAttributes(shared_ptr<DescribeAppAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppAttributesWithOptions(request, runtime);
}

DescribeAppSecurityResponse Alibabacloud_CloudAPI20160714::Client::describeAppSecurityWithOptions(shared_ptr<DescribeAppSecurityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DescribeAppSecurityRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppSecurity"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppSecurityResponse(callApi(params, req, runtime));
}

DescribeAppSecurityResponse Alibabacloud_CloudAPI20160714::Client::describeAppSecurity(shared_ptr<DescribeAppSecurityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppSecurityWithOptions(request, runtime);
}

DescribeAppsResponse Alibabacloud_CloudAPI20160714::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, long>("AppOwner", *request->appOwner));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApps"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsResponse(callApi(params, req, runtime));
}

DescribeAppsResponse Alibabacloud_CloudAPI20160714::Client::describeApps(shared_ptr<DescribeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsWithOptions(request, runtime);
}

DescribeAuthorizedApisResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedApisWithOptions(shared_ptr<DescribeAuthorizedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthorizedApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthorizedApisResponse(callApi(params, req, runtime));
}

DescribeAuthorizedApisResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedApis(shared_ptr<DescribeAuthorizedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthorizedApisWithOptions(request, runtime);
}

DescribeAuthorizedAppsResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedAppsWithOptions(shared_ptr<DescribeAuthorizedAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, long>("AppOwnerId", *request->appOwnerId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAuthorizedApps"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAuthorizedAppsResponse(callApi(params, req, runtime));
}

DescribeAuthorizedAppsResponse Alibabacloud_CloudAPI20160714::Client::describeAuthorizedApps(shared_ptr<DescribeAuthorizedAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAuthorizedAppsWithOptions(request, runtime);
}

DescribeDeployApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeDeployApiTaskWithOptions(shared_ptr<DescribeDeployApiTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OperationUid", *request->operationUid));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeployApiTask"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeployApiTaskResponse(callApi(params, req, runtime));
}

DescribeDeployApiTaskResponse Alibabacloud_CloudAPI20160714::Client::describeDeployApiTask(shared_ptr<DescribeDeployApiTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployApiTaskWithOptions(request, runtime);
}

DescribeDeployedApiResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApiWithOptions(shared_ptr<DescribeDeployedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeployedApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeployedApiResponse(callApi(params, req, runtime));
}

DescribeDeployedApiResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApi(shared_ptr<DescribeDeployedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployedApiWithOptions(request, runtime);
}

DescribeDeployedApisResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApisWithOptions(shared_ptr<DescribeDeployedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, bool>("EnableTagAuth", *request->enableTagAuth));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, vector<DescribeDeployedApisRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeployedApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeployedApisResponse(callApi(params, req, runtime));
}

DescribeDeployedApisResponse Alibabacloud_CloudAPI20160714::Client::describeDeployedApis(shared_ptr<DescribeDeployedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployedApisWithOptions(request, runtime);
}

DescribeDomainResponse Alibabacloud_CloudAPI20160714::Client::describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomain"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainResponse(callApi(params, req, runtime));
}

DescribeDomainResponse Alibabacloud_CloudAPI20160714::Client::describeDomain(shared_ptr<DescribeDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainWithOptions(request, runtime);
}

DescribeHistoryApisResponse Alibabacloud_CloudAPI20160714::Client::describeHistoryApisWithOptions(shared_ptr<DescribeHistoryApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  query->insert(pair<string, string>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHistoryApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHistoryApisResponse(callApi(params, req, runtime));
}

DescribeHistoryApisResponse Alibabacloud_CloudAPI20160714::Client::describeHistoryApis(shared_ptr<DescribeHistoryApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHistoryApisWithOptions(request, runtime);
}

DescribeIpControlPolicyItemsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControlPolicyItemsWithOptions(shared_ptr<DescribeIpControlPolicyItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("PolicyItemId", *request->policyItemId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpControlPolicyItems"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIpControlPolicyItemsResponse(callApi(params, req, runtime));
}

DescribeIpControlPolicyItemsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControlPolicyItems(shared_ptr<DescribeIpControlPolicyItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpControlPolicyItemsWithOptions(request, runtime);
}

DescribeIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControlsWithOptions(shared_ptr<DescribeIpControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("IpControlName", *request->ipControlName));
  query->insert(pair<string, string>("IpControlType", *request->ipControlType));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpControls"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIpControlsResponse(callApi(params, req, runtime));
}

DescribeIpControlsResponse Alibabacloud_CloudAPI20160714::Client::describeIpControls(shared_ptr<DescribeIpControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpControlsWithOptions(request, runtime);
}

DescribeLogConfigResponse Alibabacloud_CloudAPI20160714::Client::describeLogConfigWithOptions(shared_ptr<DescribeLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("LogType", *request->logType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLogConfig"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLogConfigResponse(callApi(params, req, runtime));
}

DescribeLogConfigResponse Alibabacloud_CloudAPI20160714::Client::describeLogConfig(shared_ptr<DescribeLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogConfigWithOptions(request, runtime);
}

DescribeMarketRemainsQuotaResponse Alibabacloud_CloudAPI20160714::Client::describeMarketRemainsQuotaWithOptions(shared_ptr<DescribeMarketRemainsQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMarketRemainsQuota"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMarketRemainsQuotaResponse(callApi(params, req, runtime));
}

DescribeMarketRemainsQuotaResponse Alibabacloud_CloudAPI20160714::Client::describeMarketRemainsQuota(shared_ptr<DescribeMarketRemainsQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMarketRemainsQuotaWithOptions(request, runtime);
}

DescribeModelsResponse Alibabacloud_CloudAPI20160714::Client::describeModelsWithOptions(shared_ptr<DescribeModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("ModelId", *request->modelId));
  query->insert(pair<string, string>("ModelName", *request->modelName));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeModels"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeModelsResponse(callApi(params, req, runtime));
}

DescribeModelsResponse Alibabacloud_CloudAPI20160714::Client::describeModels(shared_ptr<DescribeModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModelsWithOptions(request, runtime);
}

DescribePluginSchemasResponse Alibabacloud_CloudAPI20160714::Client::describePluginSchemasWithOptions(shared_ptr<DescribePluginSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Language", *request->language));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePluginSchemas"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePluginSchemasResponse(callApi(params, req, runtime));
}

DescribePluginSchemasResponse Alibabacloud_CloudAPI20160714::Client::describePluginSchemas(shared_ptr<DescribePluginSchemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginSchemasWithOptions(request, runtime);
}

DescribePluginTemplatesResponse Alibabacloud_CloudAPI20160714::Client::describePluginTemplatesWithOptions(shared_ptr<DescribePluginTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Language", *request->language));
  query->insert(pair<string, string>("PluginName", *request->pluginName));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePluginTemplates"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePluginTemplatesResponse(callApi(params, req, runtime));
}

DescribePluginTemplatesResponse Alibabacloud_CloudAPI20160714::Client::describePluginTemplates(shared_ptr<DescribePluginTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginTemplatesWithOptions(request, runtime);
}

DescribePluginsResponse Alibabacloud_CloudAPI20160714::Client::describePluginsWithOptions(shared_ptr<DescribePluginsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("PluginId", *request->pluginId));
  query->insert(pair<string, string>("PluginName", *request->pluginName));
  query->insert(pair<string, string>("PluginType", *request->pluginType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<DescribePluginsRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlugins"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePluginsResponse(callApi(params, req, runtime));
}

DescribePluginsResponse Alibabacloud_CloudAPI20160714::Client::describePlugins(shared_ptr<DescribePluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginsWithOptions(request, runtime);
}

DescribePluginsByApiResponse Alibabacloud_CloudAPI20160714::Client::describePluginsByApiWithOptions(shared_ptr<DescribePluginsByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePluginsByApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePluginsByApiResponse(callApi(params, req, runtime));
}

DescribePluginsByApiResponse Alibabacloud_CloudAPI20160714::Client::describePluginsByApi(shared_ptr<DescribePluginsByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePluginsByApiWithOptions(request, runtime);
}

DescribePurchasedApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroupWithOptions(shared_ptr<DescribePurchasedApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApiGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApiGroupResponse(callApi(params, req, runtime));
}

DescribePurchasedApiGroupResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroup(shared_ptr<DescribePurchasedApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiGroupWithOptions(request, runtime);
}

DescribePurchasedApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroupsWithOptions(shared_ptr<DescribePurchasedApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApiGroups"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApiGroupsResponse(callApi(params, req, runtime));
}

DescribePurchasedApiGroupsResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApiGroups(shared_ptr<DescribePurchasedApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiGroupsWithOptions(request, runtime);
}

DescribePurchasedApisResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApisWithOptions(shared_ptr<DescribePurchasedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("Visibility", *request->visibility));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApisResponse(callApi(params, req, runtime));
}

DescribePurchasedApisResponse Alibabacloud_CloudAPI20160714::Client::describePurchasedApis(shared_ptr<DescribePurchasedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApisWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_CloudAPI20160714::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Language", *request->language));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_CloudAPI20160714::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeSignaturesWithOptions(shared_ptr<DescribeSignaturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureId", *request->signatureId));
  query->insert(pair<string, string>("SignatureName", *request->signatureName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSignatures"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSignaturesResponse(callApi(params, req, runtime));
}

DescribeSignaturesResponse Alibabacloud_CloudAPI20160714::Client::describeSignatures(shared_ptr<DescribeSignaturesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSignaturesWithOptions(request, runtime);
}

DescribeSignaturesByApiResponse Alibabacloud_CloudAPI20160714::Client::describeSignaturesByApiWithOptions(shared_ptr<DescribeSignaturesByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSignaturesByApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSignaturesByApiResponse(callApi(params, req, runtime));
}

DescribeSignaturesByApiResponse Alibabacloud_CloudAPI20160714::Client::describeSignaturesByApi(shared_ptr<DescribeSignaturesByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSignaturesByApiWithOptions(request, runtime);
}

DescribeSystemParametersResponse Alibabacloud_CloudAPI20160714::Client::describeSystemParametersWithOptions(shared_ptr<DescribeSystemParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSystemParameters"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSystemParametersResponse(callApi(params, req, runtime));
}

DescribeSystemParametersResponse Alibabacloud_CloudAPI20160714::Client::describeSystemParameters(shared_ptr<DescribeSystemParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSystemParametersWithOptions(request, runtime);
}

DescribeTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControlsWithOptions(shared_ptr<DescribeTrafficControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  query->insert(pair<string, string>("TrafficControlName", *request->trafficControlName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrafficControls"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrafficControlsResponse(callApi(params, req, runtime));
}

DescribeTrafficControlsResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControls(shared_ptr<DescribeTrafficControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrafficControlsWithOptions(request, runtime);
}

DescribeTrafficControlsByApiResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControlsByApiWithOptions(shared_ptr<DescribeTrafficControlsByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrafficControlsByApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrafficControlsByApiResponse(callApi(params, req, runtime));
}

DescribeTrafficControlsByApiResponse Alibabacloud_CloudAPI20160714::Client::describeTrafficControlsByApi(shared_ptr<DescribeTrafficControlsByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrafficControlsByApiWithOptions(request, runtime);
}

DescribeUpdateVpcInfoTaskResponse Alibabacloud_CloudAPI20160714::Client::describeUpdateVpcInfoTaskWithOptions(shared_ptr<DescribeUpdateVpcInfoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("OperationUid", *request->operationUid));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUpdateVpcInfoTask"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUpdateVpcInfoTaskResponse(callApi(params, req, runtime));
}

DescribeUpdateVpcInfoTaskResponse Alibabacloud_CloudAPI20160714::Client::describeUpdateVpcInfoTask(shared_ptr<DescribeUpdateVpcInfoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpdateVpcInfoTaskWithOptions(request, runtime);
}

DescribeVpcAccessesResponse Alibabacloud_CloudAPI20160714::Client::describeVpcAccessesWithOptions(shared_ptr<DescribeVpcAccessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("VpcAccessId", *request->vpcAccessId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVpcAccesses"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVpcAccessesResponse(callApi(params, req, runtime));
}

DescribeVpcAccessesResponse Alibabacloud_CloudAPI20160714::Client::describeVpcAccesses(shared_ptr<DescribeVpcAccessesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVpcAccessesWithOptions(request, runtime);
}

DescribeZonesResponse Alibabacloud_CloudAPI20160714::Client::describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Language", *request->language));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeZones"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeZonesResponse(callApi(params, req, runtime));
}

DescribeZonesResponse Alibabacloud_CloudAPI20160714::Client::describeZones(shared_ptr<DescribeZonesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeZonesWithOptions(request, runtime);
}

DryRunSwaggerResponse Alibabacloud_CloudAPI20160714::Client::dryRunSwaggerWithOptions(shared_ptr<DryRunSwaggerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DryRunSwaggerShrinkRequest> request = make_shared<DryRunSwaggerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->globalCondition)) {
    request->globalConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->globalCondition, make_shared<string>("GlobalCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DataFormat", *request->dataFormat));
  query->insert(pair<string, string>("GlobalCondition", *request->globalConditionShrink));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DryRunSwagger"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DryRunSwaggerResponse(callApi(params, req, runtime));
}

DryRunSwaggerResponse Alibabacloud_CloudAPI20160714::Client::dryRunSwagger(shared_ptr<DryRunSwaggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dryRunSwaggerWithOptions(request, runtime);
}

ImportSwaggerResponse Alibabacloud_CloudAPI20160714::Client::importSwaggerWithOptions(shared_ptr<ImportSwaggerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportSwaggerShrinkRequest> request = make_shared<ImportSwaggerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->globalCondition)) {
    request->globalConditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->globalCondition, make_shared<string>("GlobalCondition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DataFormat", *request->dataFormat));
  query->insert(pair<string, bool>("DryRun", *request->dryRun));
  query->insert(pair<string, string>("GlobalCondition", *request->globalConditionShrink));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportSwagger"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportSwaggerResponse(callApi(params, req, runtime));
}

ImportSwaggerResponse Alibabacloud_CloudAPI20160714::Client::importSwagger(shared_ptr<ImportSwaggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importSwaggerWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_CloudAPI20160714::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_CloudAPI20160714::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyApiResponse Alibabacloud_CloudAPI20160714::Client::modifyApiWithOptions(shared_ptr<ModifyApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AllowSignatureMethod", *request->allowSignatureMethod));
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("ApiName", *request->apiName));
  query->insert(pair<string, string>("AppCodeAuthType", *request->appCodeAuthType));
  query->insert(pair<string, string>("AuthType", *request->authType));
  query->insert(pair<string, string>("ConstantParameters", *request->constantParameters));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, bool>("DisableInternet", *request->disableInternet));
  query->insert(pair<string, string>("ErrorCodeSamples", *request->errorCodeSamples));
  query->insert(pair<string, string>("FailResultSample", *request->failResultSample));
  query->insert(pair<string, bool>("ForceNonceCheck", *request->forceNonceCheck));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("OpenIdConnectConfig", *request->openIdConnectConfig));
  query->insert(pair<string, string>("RequestConfig", *request->requestConfig));
  query->insert(pair<string, string>("RequestParameters", *request->requestParameters));
  query->insert(pair<string, string>("ResultBodyModel", *request->resultBodyModel));
  query->insert(pair<string, string>("ResultDescriptions", *request->resultDescriptions));
  query->insert(pair<string, string>("ResultSample", *request->resultSample));
  query->insert(pair<string, string>("ResultType", *request->resultType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("ServiceConfig", *request->serviceConfig));
  query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  query->insert(pair<string, string>("ServiceParametersMap", *request->serviceParametersMap));
  query->insert(pair<string, string>("SystemParameters", *request->systemParameters));
  query->insert(pair<string, string>("Visibility", *request->visibility));
  query->insert(pair<string, string>("WebSocketApiType", *request->webSocketApiType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiResponse(callApi(params, req, runtime));
}

ModifyApiResponse Alibabacloud_CloudAPI20160714::Client::modifyApi(shared_ptr<ModifyApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiWithOptions(request, runtime);
}

ModifyApiGroupResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroupWithOptions(shared_ptr<ModifyApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BasePath", *request->basePath));
  query->insert(pair<string, string>("CompatibleFlags", *request->compatibleFlags));
  query->insert(pair<string, string>("CustomTraceConfig", *request->customTraceConfig));
  query->insert(pair<string, string>("CustomerConfigs", *request->customerConfigs));
  query->insert(pair<string, string>("DefaultDomain", *request->defaultDomain));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("GroupName", *request->groupName));
  query->insert(pair<string, string>("PassthroughHeaders", *request->passthroughHeaders));
  query->insert(pair<string, string>("RpcPattern", *request->rpcPattern));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<ModifyApiGroupRequestTag>>("Tag", *request->tag));
  query->insert(pair<string, string>("UserLogConfig", *request->userLogConfig));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiGroupResponse(callApi(params, req, runtime));
}

ModifyApiGroupResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroup(shared_ptr<ModifyApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiGroupWithOptions(request, runtime);
}

ModifyApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroupVpcWhitelistWithOptions(shared_ptr<ModifyApiGroupVpcWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("VpcIds", *request->vpcIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiGroupVpcWhitelist"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiGroupVpcWhitelistResponse(callApi(params, req, runtime));
}

ModifyApiGroupVpcWhitelistResponse Alibabacloud_CloudAPI20160714::Client::modifyApiGroupVpcWhitelist(shared_ptr<ModifyApiGroupVpcWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiGroupVpcWhitelistWithOptions(request, runtime);
}

ModifyAppResponse Alibabacloud_CloudAPI20160714::Client::modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("AppName", *request->appName));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<ModifyAppRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApp"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppResponse(callApi(params, req, runtime));
}

ModifyAppResponse Alibabacloud_CloudAPI20160714::Client::modifyApp(shared_ptr<ModifyAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppWithOptions(request, runtime);
}

ModifyInstanceSpecResponse Alibabacloud_CloudAPI20160714::Client::modifyInstanceSpecWithOptions(shared_ptr<ModifyInstanceSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("InstanceSpec", *request->instanceSpec));
  query->insert(pair<string, string>("Token", *request->token));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstanceSpec"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyInstanceSpecResponse(callApi(params, req, runtime));
}

ModifyInstanceSpecResponse Alibabacloud_CloudAPI20160714::Client::modifyInstanceSpec(shared_ptr<ModifyInstanceSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceSpecWithOptions(request, runtime);
}

ModifyIpControlResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControlWithOptions(shared_ptr<ModifyIpControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("IpControlName", *request->ipControlName));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIpControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIpControlResponse(callApi(params, req, runtime));
}

ModifyIpControlResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControl(shared_ptr<ModifyIpControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIpControlWithOptions(request, runtime);
}

ModifyIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControlPolicyItemWithOptions(shared_ptr<ModifyIpControlPolicyItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppId", *request->appId));
  query->insert(pair<string, string>("CidrIp", *request->cidrIp));
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("PolicyItemId", *request->policyItemId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIpControlPolicyItem"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyIpControlPolicyItemResponse(callApi(params, req, runtime));
}

ModifyIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::modifyIpControlPolicyItem(shared_ptr<ModifyIpControlPolicyItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIpControlPolicyItemWithOptions(request, runtime);
}

ModifyLogConfigResponse Alibabacloud_CloudAPI20160714::Client::modifyLogConfigWithOptions(shared_ptr<ModifyLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("LogType", *request->logType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SlsLogStore", *request->slsLogStore));
  query->insert(pair<string, string>("SlsProject", *request->slsProject));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLogConfig"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLogConfigResponse(callApi(params, req, runtime));
}

ModifyLogConfigResponse Alibabacloud_CloudAPI20160714::Client::modifyLogConfig(shared_ptr<ModifyLogConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogConfigWithOptions(request, runtime);
}

ModifyModelResponse Alibabacloud_CloudAPI20160714::Client::modifyModelWithOptions(shared_ptr<ModifyModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("ModelName", *request->modelName));
  query->insert(pair<string, string>("NewModelName", *request->newModelName));
  query->insert(pair<string, string>("Schema", *request->schema));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyModel"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyModelResponse(callApi(params, req, runtime));
}

ModifyModelResponse Alibabacloud_CloudAPI20160714::Client::modifyModel(shared_ptr<ModifyModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyModelWithOptions(request, runtime);
}

ModifyPluginResponse Alibabacloud_CloudAPI20160714::Client::modifyPluginWithOptions(shared_ptr<ModifyPluginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("PluginData", *request->pluginData));
  query->insert(pair<string, string>("PluginId", *request->pluginId));
  query->insert(pair<string, string>("PluginName", *request->pluginName));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<ModifyPluginRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyPlugin"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyPluginResponse(callApi(params, req, runtime));
}

ModifyPluginResponse Alibabacloud_CloudAPI20160714::Client::modifyPlugin(shared_ptr<ModifyPluginRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPluginWithOptions(request, runtime);
}

ModifySignatureResponse Alibabacloud_CloudAPI20160714::Client::modifySignatureWithOptions(shared_ptr<ModifySignatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureId", *request->signatureId));
  query->insert(pair<string, string>("SignatureKey", *request->signatureKey));
  query->insert(pair<string, string>("SignatureName", *request->signatureName));
  query->insert(pair<string, string>("SignatureSecret", *request->signatureSecret));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySignature"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySignatureResponse(callApi(params, req, runtime));
}

ModifySignatureResponse Alibabacloud_CloudAPI20160714::Client::modifySignature(shared_ptr<ModifySignatureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySignatureWithOptions(request, runtime);
}

ModifyTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::modifyTrafficControlWithOptions(shared_ptr<ModifyTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("ApiDefault", *request->apiDefault));
  query->insert(pair<string, long>("AppDefault", *request->appDefault));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  query->insert(pair<string, string>("TrafficControlName", *request->trafficControlName));
  query->insert(pair<string, string>("TrafficControlUnit", *request->trafficControlUnit));
  query->insert(pair<string, long>("UserDefault", *request->userDefault));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTrafficControl"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTrafficControlResponse(callApi(params, req, runtime));
}

ModifyTrafficControlResponse Alibabacloud_CloudAPI20160714::Client::modifyTrafficControl(shared_ptr<ModifyTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTrafficControlWithOptions(request, runtime);
}

OpenApiGatewayServiceResponse Alibabacloud_CloudAPI20160714::Client::openApiGatewayServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiGatewayService"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiGatewayServiceResponse(callApi(params, req, runtime));
}

OpenApiGatewayServiceResponse Alibabacloud_CloudAPI20160714::Client::openApiGatewayService() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openApiGatewayServiceWithOptions(runtime);
}

ReactivateDomainResponse Alibabacloud_CloudAPI20160714::Client::reactivateDomainWithOptions(shared_ptr<ReactivateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReactivateDomain"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReactivateDomainResponse(callApi(params, req, runtime));
}

ReactivateDomainResponse Alibabacloud_CloudAPI20160714::Client::reactivateDomain(shared_ptr<ReactivateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reactivateDomainWithOptions(request, runtime);
}

RemoveApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeApisAuthoritiesWithOptions(shared_ptr<RemoveApisAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApisAuthorities"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveApisAuthoritiesResponse(callApi(params, req, runtime));
}

RemoveApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeApisAuthorities(shared_ptr<RemoveApisAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeApisAuthoritiesWithOptions(request, runtime);
}

RemoveAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeAppsAuthoritiesWithOptions(shared_ptr<RemoveAppsAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("AppIds", *request->appIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAppsAuthorities"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAppsAuthoritiesResponse(callApi(params, req, runtime));
}

RemoveAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::removeAppsAuthorities(shared_ptr<RemoveAppsAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAppsAuthoritiesWithOptions(request, runtime);
}

RemoveIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlApisWithOptions(shared_ptr<RemoveIpControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveIpControlApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveIpControlApisResponse(callApi(params, req, runtime));
}

RemoveIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlApis(shared_ptr<RemoveIpControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeIpControlApisWithOptions(request, runtime);
}

RemoveIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlPolicyItemWithOptions(shared_ptr<RemoveIpControlPolicyItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("PolicyItemIds", *request->policyItemIds));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveIpControlPolicyItem"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveIpControlPolicyItemResponse(callApi(params, req, runtime));
}

RemoveIpControlPolicyItemResponse Alibabacloud_CloudAPI20160714::Client::removeIpControlPolicyItem(shared_ptr<RemoveIpControlPolicyItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeIpControlPolicyItemWithOptions(request, runtime);
}

RemoveSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::removeSignatureApisWithOptions(shared_ptr<RemoveSignatureApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureId", *request->signatureId));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveSignatureApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveSignatureApisResponse(callApi(params, req, runtime));
}

RemoveSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::removeSignatureApis(shared_ptr<RemoveSignatureApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSignatureApisWithOptions(request, runtime);
}

RemoveTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeTrafficControlApisWithOptions(shared_ptr<RemoveTrafficControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTrafficControlApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTrafficControlApisResponse(callApi(params, req, runtime));
}

RemoveTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::removeTrafficControlApis(shared_ptr<RemoveTrafficControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTrafficControlApisWithOptions(request, runtime);
}

RemoveVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccessWithOptions(shared_ptr<RemoveVpcAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, bool>("NeedBatchWork", *request->needBatchWork));
  query->insert(pair<string, long>("Port", *request->port));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveVpcAccess"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveVpcAccessResponse(callApi(params, req, runtime));
}

RemoveVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccess(shared_ptr<RemoveVpcAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVpcAccessWithOptions(request, runtime);
}

RemoveVpcAccessAndAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccessAndAbolishApisWithOptions(shared_ptr<RemoveVpcAccessAndAbolishApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, bool>("NeedBatchWork", *request->needBatchWork));
  query->insert(pair<string, long>("Port", *request->port));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveVpcAccessAndAbolishApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveVpcAccessAndAbolishApisResponse(callApi(params, req, runtime));
}

RemoveVpcAccessAndAbolishApisResponse Alibabacloud_CloudAPI20160714::Client::removeVpcAccessAndAbolishApis(shared_ptr<RemoveVpcAccessAndAbolishApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeVpcAccessAndAbolishApisWithOptions(request, runtime);
}

ResetAppCodeResponse Alibabacloud_CloudAPI20160714::Client::resetAppCodeWithOptions(shared_ptr<ResetAppCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppCode", *request->appCode));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAppCode"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAppCodeResponse(callApi(params, req, runtime));
}

ResetAppCodeResponse Alibabacloud_CloudAPI20160714::Client::resetAppCode(shared_ptr<ResetAppCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppCodeWithOptions(request, runtime);
}

ResetAppSecretResponse Alibabacloud_CloudAPI20160714::Client::resetAppSecretWithOptions(shared_ptr<ResetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AppKey", *request->appKey));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAppSecret"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAppSecretResponse(callApi(params, req, runtime));
}

ResetAppSecretResponse Alibabacloud_CloudAPI20160714::Client::resetAppSecret(shared_ptr<ResetAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppSecretWithOptions(request, runtime);
}

SdkGenerateByAppResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByAppWithOptions(shared_ptr<SdkGenerateByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("Language", *request->language));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SdkGenerateByApp"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SdkGenerateByAppResponse(callApi(params, req, runtime));
}

SdkGenerateByAppResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByApp(shared_ptr<SdkGenerateByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sdkGenerateByAppWithOptions(request, runtime);
}

SdkGenerateByGroupResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByGroupWithOptions(shared_ptr<SdkGenerateByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("Language", *request->language));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SdkGenerateByGroup"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SdkGenerateByGroupResponse(callApi(params, req, runtime));
}

SdkGenerateByGroupResponse Alibabacloud_CloudAPI20160714::Client::sdkGenerateByGroup(shared_ptr<SdkGenerateByGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sdkGenerateByGroupWithOptions(request, runtime);
}

SetApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setApisAuthoritiesWithOptions(shared_ptr<SetApisAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, long>("AppId", *request->appId));
  query->insert(pair<string, string>("AuthValidTime", *request->authValidTime));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetApisAuthorities"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetApisAuthoritiesResponse(callApi(params, req, runtime));
}

SetApisAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setApisAuthorities(shared_ptr<SetApisAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setApisAuthoritiesWithOptions(request, runtime);
}

SetAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setAppsAuthoritiesWithOptions(shared_ptr<SetAppsAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("AppIds", *request->appIds));
  query->insert(pair<string, string>("AuthValidTime", *request->authValidTime));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAppsAuthorities"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAppsAuthoritiesResponse(callApi(params, req, runtime));
}

SetAppsAuthoritiesResponse Alibabacloud_CloudAPI20160714::Client::setAppsAuthorities(shared_ptr<SetAppsAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAppsAuthoritiesWithOptions(request, runtime);
}

SetDomainResponse Alibabacloud_CloudAPI20160714::Client::setDomainWithOptions(shared_ptr<SetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BindStageName", *request->bindStageName));
  query->insert(pair<string, string>("CustomDomainType", *request->customDomainType));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, bool>("IsForce", *request->isForce));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomain"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainResponse(callApi(params, req, runtime));
}

SetDomainResponse Alibabacloud_CloudAPI20160714::Client::setDomain(shared_ptr<SetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainWithOptions(request, runtime);
}

SetDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::setDomainCertificateWithOptions(shared_ptr<SetDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CaCertificateBody", *request->caCertificateBody));
  query->insert(pair<string, string>("CertificateBody", *request->certificateBody));
  query->insert(pair<string, string>("CertificateName", *request->certificateName));
  query->insert(pair<string, string>("CertificatePrivateKey", *request->certificatePrivateKey));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomainCertificate"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainCertificateResponse(callApi(params, req, runtime));
}

SetDomainCertificateResponse Alibabacloud_CloudAPI20160714::Client::setDomainCertificate(shared_ptr<SetDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainCertificateWithOptions(request, runtime);
}

SetDomainWebSocketStatusResponse Alibabacloud_CloudAPI20160714::Client::setDomainWebSocketStatusWithOptions(shared_ptr<SetDomainWebSocketStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ActionValue", *request->actionValue));
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomainWebSocketStatus"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainWebSocketStatusResponse(callApi(params, req, runtime));
}

SetDomainWebSocketStatusResponse Alibabacloud_CloudAPI20160714::Client::setDomainWebSocketStatus(shared_ptr<SetDomainWebSocketStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainWebSocketStatusWithOptions(request, runtime);
}

SetIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::setIpControlApisWithOptions(shared_ptr<SetIpControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("IpControlId", *request->ipControlId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetIpControlApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetIpControlApisResponse(callApi(params, req, runtime));
}

SetIpControlApisResponse Alibabacloud_CloudAPI20160714::Client::setIpControlApis(shared_ptr<SetIpControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setIpControlApisWithOptions(request, runtime);
}

SetSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::setSignatureApisWithOptions(shared_ptr<SetSignatureApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("SignatureId", *request->signatureId));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSignatureApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSignatureApisResponse(callApi(params, req, runtime));
}

SetSignatureApisResponse Alibabacloud_CloudAPI20160714::Client::setSignatureApis(shared_ptr<SetSignatureApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSignatureApisWithOptions(request, runtime);
}

SetTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::setTrafficControlApisWithOptions(shared_ptr<SetTrafficControlApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiIds", *request->apiIds));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetTrafficControlApis"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetTrafficControlApisResponse(callApi(params, req, runtime));
}

SetTrafficControlApisResponse Alibabacloud_CloudAPI20160714::Client::setTrafficControlApis(shared_ptr<SetTrafficControlApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setTrafficControlApisWithOptions(request, runtime);
}

SetVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::setVpcAccessWithOptions(shared_ptr<SetVpcAccessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("InstanceId", *request->instanceId));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, long>("Port", *request->port));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("VpcId", *request->vpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetVpcAccess"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetVpcAccessResponse(callApi(params, req, runtime));
}

SetVpcAccessResponse Alibabacloud_CloudAPI20160714::Client::setVpcAccess(shared_ptr<SetVpcAccessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setVpcAccessWithOptions(request, runtime);
}

SetWildcardDomainPatternsResponse Alibabacloud_CloudAPI20160714::Client::setWildcardDomainPatternsWithOptions(shared_ptr<SetWildcardDomainPatternsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("DomainName", *request->domainName));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("WildcardDomainPatterns", *request->wildcardDomainPatterns));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetWildcardDomainPatterns"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetWildcardDomainPatternsResponse(callApi(params, req, runtime));
}

SetWildcardDomainPatternsResponse Alibabacloud_CloudAPI20160714::Client::setWildcardDomainPatterns(shared_ptr<SetWildcardDomainPatternsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setWildcardDomainPatternsWithOptions(request, runtime);
}

SwitchApiResponse Alibabacloud_CloudAPI20160714::Client::switchApiWithOptions(shared_ptr<SwitchApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ApiId", *request->apiId));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("GroupId", *request->groupId));
  query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, string>("StageName", *request->stageName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchApi"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchApiResponse(callApi(params, req, runtime));
}

SwitchApiResponse Alibabacloud_CloudAPI20160714::Client::switchApi(shared_ptr<SwitchApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchApiWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_CloudAPI20160714::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_CloudAPI20160714::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_CloudAPI20160714::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("All", *request->all));
  query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2016-07-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_CloudAPI20160714::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

