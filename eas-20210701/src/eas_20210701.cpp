// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eas_20210701.hpp>
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

using namespace Alibabacloud_Eas20210701;

Alibabacloud_Eas20210701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "pai-eas.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou", "pai-eas.cn-zhangjiakou.aliyuncs.com"},
    {"cn-hangzhou", "pai-eas.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "pai-eas.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "pai-eas.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "pai-eas.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "pai-eas.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "pai-eas.ap-southeast-5.aliyuncs.com"},
    {"us-east-1", "pai-eas.us-east-1.aliyuncs.com"},
    {"us-west-1", "pai-eas.us-west-1.aliyuncs.com"},
    {"eu-central-1", "pai-eas.eu-central-1.aliyuncs.com"},
    {"ap-south-1", "pai-eas.ap-south-1.aliyuncs.com"},
    {"cn-shanghai-finance-1", "pai-eas.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1", "pai-eas.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-chengdu", "pai-eas.cn-chengdu.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eas20210701::Client::getEndpoint(shared_ptr<string> productId,
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

AttachGatewayDomainResponse Alibabacloud_Eas20210701::Client::attachGatewayDomainWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> GatewayId,
                                                                                             shared_ptr<AttachGatewayDomainRequest> tmpReq,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AttachGatewayDomainShrinkRequest> request = make_shared<AttachGatewayDomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AttachGatewayDomainRequestCustomDomain>(tmpReq->customDomain)) {
    request->customDomainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customDomain, make_shared<string>("CustomDomain"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomainShrink)) {
    query->insert(pair<string, string>("CustomDomain", *request->customDomainShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachGatewayDomain"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/domain/attach"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AttachGatewayDomainResponse(callApi(params, req, runtime));
  }
  else {
    return AttachGatewayDomainResponse(execute(params, req, runtime));
  }
}

AttachGatewayDomainResponse Alibabacloud_Eas20210701::Client::attachGatewayDomain(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<AttachGatewayDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return attachGatewayDomainWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

CloneServiceResponse Alibabacloud_Eas20210701::Client::cloneServiceWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> ServiceName,
                                                                               shared_ptr<CloneServiceRequest> tmpReq,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CloneServiceShrinkRequest> request = make_shared<CloneServiceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->labels)) {
    request->labelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labels, make_shared<string>("Labels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->labelsShrink)) {
    query->insert(pair<string, string>("Labels", *request->labelsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloneService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/clone"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CloneServiceResponse(callApi(params, req, runtime));
  }
  else {
    return CloneServiceResponse(execute(params, req, runtime));
  }
}

CloneServiceResponse Alibabacloud_Eas20210701::Client::cloneService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CloneServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cloneServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CommitServiceResponse Alibabacloud_Eas20210701::Client::commitServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> ServiceName,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommitService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/commit"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CommitServiceResponse(callApi(params, req, runtime));
  }
  else {
    return CommitServiceResponse(execute(params, req, runtime));
  }
}

CommitServiceResponse Alibabacloud_Eas20210701::Client::commitService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return commitServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

CreateAclPolicyResponse Alibabacloud_Eas20210701::Client::createAclPolicyWithOptions(shared_ptr<string> ClusterId,
                                                                                     shared_ptr<string> GatewayId,
                                                                                     shared_ptr<CreateAclPolicyRequest> tmpReq,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAclPolicyShrinkRequest> request = make_shared<CreateAclPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateAclPolicyRequestAclPolicyList>>(tmpReq->aclPolicyList)) {
    request->aclPolicyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aclPolicyList, make_shared<string>("AclPolicyList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclPolicyListShrink)) {
    query->insert(pair<string, string>("AclPolicyList", *request->aclPolicyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAclPolicy"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/acl_policy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAclPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAclPolicyResponse(execute(params, req, runtime));
  }
}

CreateAclPolicyResponse Alibabacloud_Eas20210701::Client::createAclPolicy(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<CreateAclPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAclPolicyWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

CreateAppServiceResponse Alibabacloud_Eas20210701::Client::createAppServiceWithOptions(shared_ptr<CreateAppServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaId)) {
    query->insert(pair<string, string>("QuotaId", *request->quotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->config)) {
    body->insert(pair<string, map<string, boost::any>>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    body->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceSpec)) {
    body->insert(pair<string, string>("ServiceSpec", *request->serviceSpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/app_services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAppServiceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAppServiceResponse(execute(params, req, runtime));
  }
}

CreateAppServiceResponse Alibabacloud_Eas20210701::Client::createAppService(shared_ptr<CreateAppServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAppServiceWithOptions(request, headers, runtime);
}

CreateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::createBenchmarkTaskWithOptions(shared_ptr<CreateBenchmarkTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

CreateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::createBenchmarkTask(shared_ptr<CreateBenchmarkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createBenchmarkTaskWithOptions(request, headers, runtime);
}

CreateGatewayResponse Alibabacloud_Eas20210701::Client::createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenewal)) {
    body->insert(pair<string, bool>("AutoRenewal", *request->autoRenewal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInternet)) {
    body->insert(pair<string, bool>("EnableInternet", *request->enableInternet));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIntranet)) {
    body->insert(pair<string, bool>("EnableIntranet", *request->enableIntranet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    body->insert(pair<string, long>("Replicas", *request->replicas));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGateway"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return CreateGatewayResponse(execute(params, req, runtime));
  }
}

CreateGatewayResponse Alibabacloud_Eas20210701::Client::createGateway(shared_ptr<CreateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayWithOptions(request, headers, runtime);
}

CreateGatewayIntranetLinkedVpcResponse Alibabacloud_Eas20210701::Client::createGatewayIntranetLinkedVpcWithOptions(shared_ptr<string> ClusterId,
                                                                                                                   shared_ptr<string> GatewayId,
                                                                                                                   shared_ptr<CreateGatewayIntranetLinkedVpcRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableAuthoritativeDns)) {
    query->insert(pair<string, bool>("EnableAuthoritativeDns", *request->enableAuthoritativeDns));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayIntranetLinkedVpc"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_endpoint_linked_vpc"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateGatewayIntranetLinkedVpcResponse(callApi(params, req, runtime));
  }
  else {
    return CreateGatewayIntranetLinkedVpcResponse(execute(params, req, runtime));
  }
}

CreateGatewayIntranetLinkedVpcResponse Alibabacloud_Eas20210701::Client::createGatewayIntranetLinkedVpc(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<CreateGatewayIntranetLinkedVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayIntranetLinkedVpcWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

CreateGatewayIntranetLinkedVpcPeerResponse Alibabacloud_Eas20210701::Client::createGatewayIntranetLinkedVpcPeerWithOptions(shared_ptr<string> ClusterId,
                                                                                                                           shared_ptr<string> GatewayId,
                                                                                                                           shared_ptr<CreateGatewayIntranetLinkedVpcPeerRequest> tmpReq,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateGatewayIntranetLinkedVpcPeerShrinkRequest> request = make_shared<CreateGatewayIntranetLinkedVpcPeerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs>>(tmpReq->peerVpcs)) {
    request->peerVpcsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->peerVpcs, make_shared<string>("PeerVpcs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcsShrink)) {
    query->insert(pair<string, string>("PeerVpcs", *request->peerVpcsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGatewayIntranetLinkedVpcPeer"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_endpoint_linked_vpc_peer"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateGatewayIntranetLinkedVpcPeerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateGatewayIntranetLinkedVpcPeerResponse(execute(params, req, runtime));
  }
}

CreateGatewayIntranetLinkedVpcPeerResponse Alibabacloud_Eas20210701::Client::createGatewayIntranetLinkedVpcPeer(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<CreateGatewayIntranetLinkedVpcPeerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createGatewayIntranetLinkedVpcPeerWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

CreateResourceResponse Alibabacloud_Eas20210701::Client::createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenewal)) {
    body->insert(pair<string, bool>("AutoRenewal", *request->autoRenewal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ecsInstanceCount)) {
    body->insert(pair<string, long>("EcsInstanceCount", *request->ecsInstanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceType)) {
    body->insert(pair<string, string>("EcsInstanceType", *request->ecsInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->labels)) {
    body->insert(pair<string, map<string, string>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateResourceRequestSelfManagedResourceOptions>(request->selfManagedResourceOptions)) {
    body->insert(pair<string, CreateResourceRequestSelfManagedResourceOptions>("SelfManagedResourceOptions", *request->selfManagedResourceOptions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->systemDiskSize)) {
    body->insert(pair<string, long>("SystemDiskSize", *request->systemDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zone)) {
    body->insert(pair<string, string>("Zone", *request->zone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateResourceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateResourceResponse(execute(params, req, runtime));
  }
}

CreateResourceResponse Alibabacloud_Eas20210701::Client::createResource(shared_ptr<CreateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceWithOptions(request, headers, runtime);
}

CreateResourceInstancesResponse Alibabacloud_Eas20210701::Client::createResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ResourceId,
                                                                                                     shared_ptr<CreateResourceInstancesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenewal)) {
    body->insert(pair<string, bool>("AutoRenewal", *request->autoRenewal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ecsInstanceCount)) {
    body->insert(pair<string, long>("EcsInstanceCount", *request->ecsInstanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecsInstanceType)) {
    body->insert(pair<string, string>("EcsInstanceType", *request->ecsInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->labels)) {
    body->insert(pair<string, map<string, string>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->systemDiskSize)) {
    body->insert(pair<string, long>("SystemDiskSize", *request->systemDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zone)) {
    body->insert(pair<string, string>("Zone", *request->zone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/instances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateResourceInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return CreateResourceInstancesResponse(execute(params, req, runtime));
  }
}

CreateResourceInstancesResponse Alibabacloud_Eas20210701::Client::createResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<CreateResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

CreateResourceLogResponse Alibabacloud_Eas20210701::Client::createResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> ResourceId,
                                                                                         shared_ptr<CreateResourceLogRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    body->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateResourceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/log"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateResourceLogResponse(callApi(params, req, runtime));
  }
  else {
    return CreateResourceLogResponse(execute(params, req, runtime));
  }
}

CreateResourceLogResponse Alibabacloud_Eas20210701::Client::createResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<CreateResourceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createResourceLogWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

CreateServiceResponse Alibabacloud_Eas20210701::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateServiceShrinkRequest> request = make_shared<CreateServiceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->labels)) {
    request->labelsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->labels, make_shared<string>("Labels"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->develop)) {
    query->insert(pair<string, string>("Develop", *request->develop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelsShrink)) {
    query->insert(pair<string, string>("Labels", *request->labelsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceResponse(execute(params, req, runtime));
  }
}

CreateServiceResponse Alibabacloud_Eas20210701::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(request, headers, runtime);
}

CreateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::createServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<CreateServiceAutoScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CreateServiceAutoScalerRequestBehavior>(request->behavior)) {
    body->insert(pair<string, CreateServiceAutoScalerRequestBehavior>("behavior", *request->behavior));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->max)) {
    body->insert(pair<string, long>("max", *request->max));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->min)) {
    body->insert(pair<string, long>("min", *request->min));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceAutoScalerRequestScaleStrategies>>(request->scaleStrategies)) {
    body->insert(pair<string, vector<CreateServiceAutoScalerRequestScaleStrategies>>("scaleStrategies", *request->scaleStrategies));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/autoscaler"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceAutoScalerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceAutoScalerResponse(execute(params, req, runtime));
  }
}

CreateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::createServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceAutoScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceAutoScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CreateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::createServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<CreateServiceCronScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludeDates)) {
    body->insert(pair<string, vector<string>>("ExcludeDates", *request->excludeDates));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateServiceCronScalerRequestScaleJobs>>(request->scaleJobs)) {
    body->insert(pair<string, vector<CreateServiceCronScalerRequestScaleJobs>>("ScaleJobs", *request->scaleJobs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/cronscaler"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceCronScalerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceCronScalerResponse(execute(params, req, runtime));
  }
}

CreateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::createServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceCronScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceCronScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CreateServiceMirrorResponse Alibabacloud_Eas20210701::Client::createServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<CreateServiceMirrorRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ratio)) {
    body->insert(pair<string, long>("Ratio", *request->ratio));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    body->insert(pair<string, vector<string>>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/mirror"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateServiceMirrorResponse(callApi(params, req, runtime));
  }
  else {
    return CreateServiceMirrorResponse(execute(params, req, runtime));
  }
}

CreateServiceMirrorResponse Alibabacloud_Eas20210701::Client::createServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceMirrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceMirrorWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

CreateVirtualResourceResponse Alibabacloud_Eas20210701::Client::createVirtualResourceWithOptions(shared_ptr<CreateVirtualResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableSpotProtectionPeriod)) {
    body->insert(pair<string, bool>("DisableSpotProtectionPeriod", *request->disableSpotProtectionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateVirtualResourceRequestResources>>(request->resources)) {
    body->insert(pair<string, vector<CreateVirtualResourceRequestResources>>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualResourceName)) {
    body->insert(pair<string, string>("VirtualResourceName", *request->virtualResourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVirtualResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/virtualresources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVirtualResourceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVirtualResourceResponse(execute(params, req, runtime));
  }
}

CreateVirtualResourceResponse Alibabacloud_Eas20210701::Client::createVirtualResource(shared_ptr<CreateVirtualResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVirtualResourceWithOptions(request, headers, runtime);
}

DeleteAclPolicyResponse Alibabacloud_Eas20210701::Client::deleteAclPolicyWithOptions(shared_ptr<string> ClusterId,
                                                                                     shared_ptr<string> GatewayId,
                                                                                     shared_ptr<DeleteAclPolicyRequest> tmpReq,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAclPolicyShrinkRequest> request = make_shared<DeleteAclPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteAclPolicyRequestAclPolicyList>>(tmpReq->aclPolicyList)) {
    request->aclPolicyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->aclPolicyList, make_shared<string>("AclPolicyList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aclPolicyListShrink)) {
    query->insert(pair<string, string>("AclPolicyList", *request->aclPolicyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAclPolicy"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/acl_policy"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAclPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAclPolicyResponse(execute(params, req, runtime));
  }
}

DeleteAclPolicyResponse Alibabacloud_Eas20210701::Client::deleteAclPolicy(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DeleteAclPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteAclPolicyWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

DeleteBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::deleteBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> TaskName,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

DeleteBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::deleteBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

DeleteGatewayResponse Alibabacloud_Eas20210701::Client::deleteGatewayWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> GatewayId,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGateway"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGatewayResponse(execute(params, req, runtime));
  }
}

DeleteGatewayResponse Alibabacloud_Eas20210701::Client::deleteGateway(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayWithOptions(ClusterId, GatewayId, headers, runtime);
}

DeleteGatewayIntranetLinkedVpcResponse Alibabacloud_Eas20210701::Client::deleteGatewayIntranetLinkedVpcWithOptions(shared_ptr<string> ClusterId,
                                                                                                                   shared_ptr<string> GatewayId,
                                                                                                                   shared_ptr<DeleteGatewayIntranetLinkedVpcRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayIntranetLinkedVpc"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_endpoint_linked_vpc"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGatewayIntranetLinkedVpcResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGatewayIntranetLinkedVpcResponse(execute(params, req, runtime));
  }
}

DeleteGatewayIntranetLinkedVpcResponse Alibabacloud_Eas20210701::Client::deleteGatewayIntranetLinkedVpc(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DeleteGatewayIntranetLinkedVpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayIntranetLinkedVpcWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

DeleteGatewayIntranetLinkedVpcPeerResponse Alibabacloud_Eas20210701::Client::deleteGatewayIntranetLinkedVpcPeerWithOptions(shared_ptr<string> ClusterId,
                                                                                                                           shared_ptr<string> GatewayId,
                                                                                                                           shared_ptr<DeleteGatewayIntranetLinkedVpcPeerRequest> tmpReq,
                                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteGatewayIntranetLinkedVpcPeerShrinkRequest> request = make_shared<DeleteGatewayIntranetLinkedVpcPeerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs>>(tmpReq->peerVpcs)) {
    request->peerVpcsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->peerVpcs, make_shared<string>("PeerVpcs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->peerVpcsShrink)) {
    query->insert(pair<string, string>("PeerVpcs", *request->peerVpcsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGatewayIntranetLinkedVpcPeer"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_endpoint_linked_vpc_peer"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGatewayIntranetLinkedVpcPeerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGatewayIntranetLinkedVpcPeerResponse(execute(params, req, runtime));
  }
}

DeleteGatewayIntranetLinkedVpcPeerResponse Alibabacloud_Eas20210701::Client::deleteGatewayIntranetLinkedVpcPeer(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DeleteGatewayIntranetLinkedVpcPeerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGatewayIntranetLinkedVpcPeerWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

DeleteResourceResponse Alibabacloud_Eas20210701::Client::deleteResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ResourceId,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceResponse(execute(params, req, runtime));
  }
}

DeleteResourceResponse Alibabacloud_Eas20210701::Client::deleteResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceWithOptions(ClusterId, ResourceId, headers, runtime);
}

DeleteResourceDLinkResponse Alibabacloud_Eas20210701::Client::deleteResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ResourceId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceDLink"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/dlink"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceDLinkResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceDLinkResponse(execute(params, req, runtime));
  }
}

DeleteResourceDLinkResponse Alibabacloud_Eas20210701::Client::deleteResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceDLinkWithOptions(ClusterId, ResourceId, headers, runtime);
}

DeleteResourceInstanceLabelResponse Alibabacloud_Eas20210701::Client::deleteResourceInstanceLabelWithOptions(shared_ptr<string> ClusterId,
                                                                                                             shared_ptr<string> ResourceId,
                                                                                                             shared_ptr<DeleteResourceInstanceLabelRequest> tmpReq,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteResourceInstanceLabelShrinkRequest> request = make_shared<DeleteResourceInstanceLabelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keys)) {
    request->keysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keys, make_shared<string>("Keys"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allInstances)) {
    query->insert(pair<string, bool>("AllInstances", *request->allInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keysShrink)) {
    query->insert(pair<string, string>("Keys", *request->keysShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceInstanceLabel"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/label"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceInstanceLabelResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceInstanceLabelResponse(execute(params, req, runtime));
  }
}

DeleteResourceInstanceLabelResponse Alibabacloud_Eas20210701::Client::deleteResourceInstanceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<DeleteResourceInstanceLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceInstanceLabelWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

DeleteResourceInstancesResponse Alibabacloud_Eas20210701::Client::deleteResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ResourceId,
                                                                                                     shared_ptr<DeleteResourceInstancesRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allFailed)) {
    query->insert(pair<string, bool>("AllFailed", *request->allFailed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceList)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/instances"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceInstancesResponse(execute(params, req, runtime));
  }
}

DeleteResourceInstancesResponse Alibabacloud_Eas20210701::Client::deleteResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<DeleteResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

DeleteResourceLogResponse Alibabacloud_Eas20210701::Client::deleteResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> ResourceId,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/log"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteResourceLogResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteResourceLogResponse(execute(params, req, runtime));
  }
}

DeleteResourceLogResponse Alibabacloud_Eas20210701::Client::deleteResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteResourceLogWithOptions(ClusterId, ResourceId, headers, runtime);
}

DeleteServiceResponse Alibabacloud_Eas20210701::Client::deleteServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> ServiceName,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServiceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServiceResponse(execute(params, req, runtime));
  }
}

DeleteServiceResponse Alibabacloud_Eas20210701::Client::deleteService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/autoscaler"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServiceAutoScalerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServiceAutoScalerResponse(execute(params, req, runtime));
  }
}

DeleteServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceAutoScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceCronScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/cronscaler"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServiceCronScalerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServiceCronScalerResponse(execute(params, req, runtime));
  }
}

DeleteServiceCronScalerResponse Alibabacloud_Eas20210701::Client::deleteServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceCronScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteServiceInstancesResponse Alibabacloud_Eas20210701::Client::deleteServiceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                   shared_ptr<string> ServiceName,
                                                                                                   shared_ptr<DeleteServiceInstancesRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->container)) {
    query->insert(pair<string, string>("Container", *request->container));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceList)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->softRestart)) {
    query->insert(pair<string, bool>("SoftRestart", *request->softRestart));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/instances"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServiceInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServiceInstancesResponse(execute(params, req, runtime));
  }
}

DeleteServiceInstancesResponse Alibabacloud_Eas20210701::Client::deleteServiceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DeleteServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceInstancesWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DeleteServiceLabelResponse Alibabacloud_Eas20210701::Client::deleteServiceLabelWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> ServiceName,
                                                                                           shared_ptr<DeleteServiceLabelRequest> tmpReq,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteServiceLabelShrinkRequest> request = make_shared<DeleteServiceLabelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keys)) {
    request->keysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keys, make_shared<string>("Keys"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keysShrink)) {
    query->insert(pair<string, string>("Keys", *request->keysShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceLabel"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/label"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServiceLabelResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServiceLabelResponse(execute(params, req, runtime));
  }
}

DeleteServiceLabelResponse Alibabacloud_Eas20210701::Client::deleteServiceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DeleteServiceLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceLabelWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DeleteServiceMirrorResponse Alibabacloud_Eas20210701::Client::deleteServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/mirror"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteServiceMirrorResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteServiceMirrorResponse(execute(params, req, runtime));
  }
}

DeleteServiceMirrorResponse Alibabacloud_Eas20210701::Client::deleteServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceMirrorWithOptions(ClusterId, ServiceName, headers, runtime);
}

DeleteVirtualResourceResponse Alibabacloud_Eas20210701::Client::deleteVirtualResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> VirtualResourceId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVirtualResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/virtualresources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VirtualResourceId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVirtualResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVirtualResourceResponse(execute(params, req, runtime));
  }
}

DeleteVirtualResourceResponse Alibabacloud_Eas20210701::Client::deleteVirtualResource(shared_ptr<string> ClusterId, shared_ptr<string> VirtualResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVirtualResourceWithOptions(ClusterId, VirtualResourceId, headers, runtime);
}

DescribeBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> TaskName,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

DescribeBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

DescribeBenchmarkTaskReportResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTaskReportWithOptions(shared_ptr<string> ClusterId,
                                                                                                             shared_ptr<string> TaskName,
                                                                                                             shared_ptr<DescribeBenchmarkTaskReportRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportType)) {
    query->insert(pair<string, string>("ReportType", *request->reportType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBenchmarkTaskReport"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName)) + string("/report"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBenchmarkTaskReportResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBenchmarkTaskReportResponse(execute(params, req, runtime));
  }
}

DescribeBenchmarkTaskReportResponse Alibabacloud_Eas20210701::Client::describeBenchmarkTaskReport(shared_ptr<string> ClusterId, shared_ptr<string> TaskName, shared_ptr<DescribeBenchmarkTaskReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeBenchmarkTaskReportWithOptions(ClusterId, TaskName, request, headers, runtime);
}

DescribeGatewayResponse Alibabacloud_Eas20210701::Client::describeGatewayWithOptions(shared_ptr<string> ClusterId,
                                                                                     shared_ptr<string> GatewayId,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGateway"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGatewayResponse(execute(params, req, runtime));
  }
}

DescribeGatewayResponse Alibabacloud_Eas20210701::Client::describeGateway(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeGatewayWithOptions(ClusterId, GatewayId, headers, runtime);
}

DescribeGroupResponse Alibabacloud_Eas20210701::Client::describeGroupWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> GroupName,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroup"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGroupResponse(execute(params, req, runtime));
  }
}

DescribeGroupResponse Alibabacloud_Eas20210701::Client::describeGroup(shared_ptr<string> ClusterId, shared_ptr<string> GroupName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeGroupWithOptions(ClusterId, GroupName, headers, runtime);
}

DescribeGroupEndpointsResponse Alibabacloud_Eas20210701::Client::describeGroupEndpointsWithOptions(shared_ptr<string> ClusterId,
                                                                                                   shared_ptr<string> GroupName,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupEndpoints"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GroupName)) + string("/endpoints"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGroupEndpointsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGroupEndpointsResponse(execute(params, req, runtime));
  }
}

DescribeGroupEndpointsResponse Alibabacloud_Eas20210701::Client::describeGroupEndpoints(shared_ptr<string> ClusterId, shared_ptr<string> GroupName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeGroupEndpointsWithOptions(ClusterId, GroupName, headers, runtime);
}

DescribeMachineSpecResponse Alibabacloud_Eas20210701::Client::describeMachineSpecWithOptions(shared_ptr<DescribeMachineSpecRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeMachineSpecShrinkRequest> request = make_shared<DescribeMachineSpecShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceTypes)) {
    request->instanceTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceTypes, make_shared<string>("InstanceTypes"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceTypesShrink)) {
    query->insert(pair<string, string>("InstanceTypes", *request->instanceTypesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMachineSpec"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/public/instance_types"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMachineSpecResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMachineSpecResponse(execute(params, req, runtime));
  }
}

DescribeMachineSpecResponse Alibabacloud_Eas20210701::Client::describeMachineSpec(shared_ptr<DescribeMachineSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeMachineSpecWithOptions(request, headers, runtime);
}

DescribeRegionsResponse Alibabacloud_Eas20210701::Client::describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/regions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionsResponse(execute(params, req, runtime));
  }
}

DescribeRegionsResponse Alibabacloud_Eas20210701::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeRegionsWithOptions(headers, runtime);
}

DescribeResourceResponse Alibabacloud_Eas20210701::Client::describeResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                       shared_ptr<string> ResourceId,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeResourceResponse(execute(params, req, runtime));
  }
}

DescribeResourceResponse Alibabacloud_Eas20210701::Client::describeResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourceWithOptions(ClusterId, ResourceId, headers, runtime);
}

DescribeResourceDLinkResponse Alibabacloud_Eas20210701::Client::describeResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ResourceId,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceDLink"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/dlink"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeResourceDLinkResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeResourceDLinkResponse(execute(params, req, runtime));
  }
}

DescribeResourceDLinkResponse Alibabacloud_Eas20210701::Client::describeResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourceDLinkWithOptions(ClusterId, ResourceId, headers, runtime);
}

DescribeResourceLogResponse Alibabacloud_Eas20210701::Client::describeResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ResourceId,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/log"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeResourceLogResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeResourceLogResponse(execute(params, req, runtime));
  }
}

DescribeResourceLogResponse Alibabacloud_Eas20210701::Client::describeResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeResourceLogWithOptions(ClusterId, ResourceId, headers, runtime);
}

DescribeServiceResponse Alibabacloud_Eas20210701::Client::describeServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                     shared_ptr<string> ServiceName,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceResponse(execute(params, req, runtime));
  }
}

DescribeServiceResponse Alibabacloud_Eas20210701::Client::describeService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::describeServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                         shared_ptr<string> ServiceName,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/autoscaler"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceAutoScalerResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceAutoScalerResponse(execute(params, req, runtime));
  }
}

DescribeServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::describeServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceAutoScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceCronScalerResponse Alibabacloud_Eas20210701::Client::describeServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                         shared_ptr<string> ServiceName,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/cronscaler"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceCronScalerResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceCronScalerResponse(execute(params, req, runtime));
  }
}

DescribeServiceCronScalerResponse Alibabacloud_Eas20210701::Client::describeServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceCronScalerWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceDiagnosisResponse Alibabacloud_Eas20210701::Client::describeServiceDiagnosisWithOptions(shared_ptr<string> ClusterId,
                                                                                                       shared_ptr<string> ServiceName,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceDiagnosis"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/diagnosis"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceDiagnosisResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceDiagnosisResponse(execute(params, req, runtime));
  }
}

DescribeServiceDiagnosisResponse Alibabacloud_Eas20210701::Client::describeServiceDiagnosis(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceDiagnosisWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceEndpointsResponse Alibabacloud_Eas20210701::Client::describeServiceEndpointsWithOptions(shared_ptr<string> ClusterId,
                                                                                                       shared_ptr<string> ServiceName,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceEndpoints"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/endpoints"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceEndpointsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceEndpointsResponse(execute(params, req, runtime));
  }
}

DescribeServiceEndpointsResponse Alibabacloud_Eas20210701::Client::describeServiceEndpoints(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceEndpointsWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceEventResponse Alibabacloud_Eas20210701::Client::describeServiceEventWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ServiceName,
                                                                                               shared_ptr<DescribeServiceEventRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNum)) {
    query->insert(pair<string, string>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceEvent"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/events"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceEventResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceEventResponse(execute(params, req, runtime));
  }
}

DescribeServiceEventResponse Alibabacloud_Eas20210701::Client::describeServiceEvent(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceEventWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DescribeServiceInstanceDiagnosisResponse Alibabacloud_Eas20210701::Client::describeServiceInstanceDiagnosisWithOptions(shared_ptr<string> ClusterId,
                                                                                                                       shared_ptr<string> ServiceName,
                                                                                                                       shared_ptr<string> InstanceName,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceInstanceDiagnosis"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceName)) + string("/diagnosis"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceInstanceDiagnosisResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceInstanceDiagnosisResponse(execute(params, req, runtime));
  }
}

DescribeServiceInstanceDiagnosisResponse Alibabacloud_Eas20210701::Client::describeServiceInstanceDiagnosis(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<string> InstanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceInstanceDiagnosisWithOptions(ClusterId, ServiceName, InstanceName, headers, runtime);
}

DescribeServiceLogResponse Alibabacloud_Eas20210701::Client::describeServiceLogWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> ServiceName,
                                                                                           shared_ptr<DescribeServiceLogRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->containerName)) {
    query->insert(pair<string, string>("ContainerName", *request->containerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->previous)) {
    query->insert(pair<string, bool>("Previous", *request->previous));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceLog"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/logs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceLogResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceLogResponse(execute(params, req, runtime));
  }
}

DescribeServiceLogResponse Alibabacloud_Eas20210701::Client::describeServiceLog(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceLogWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DescribeServiceMirrorResponse Alibabacloud_Eas20210701::Client::describeServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ServiceName,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/mirror"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceMirrorResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceMirrorResponse(execute(params, req, runtime));
  }
}

DescribeServiceMirrorResponse Alibabacloud_Eas20210701::Client::describeServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceMirrorWithOptions(ClusterId, ServiceName, headers, runtime);
}

DescribeServiceSignedUrlResponse Alibabacloud_Eas20210701::Client::describeServiceSignedUrlWithOptions(shared_ptr<string> ClusterId,
                                                                                                       shared_ptr<string> ServiceName,
                                                                                                       shared_ptr<DescribeServiceSignedUrlRequest> request,
                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->expire)) {
    query->insert(pair<string, long>("Expire", *request->expire));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->internal)) {
    query->insert(pair<string, bool>("Internal", *request->internal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeServiceSignedUrl"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/signed_url"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeServiceSignedUrlResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeServiceSignedUrlResponse(execute(params, req, runtime));
  }
}

DescribeServiceSignedUrlResponse Alibabacloud_Eas20210701::Client::describeServiceSignedUrl(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceSignedUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeServiceSignedUrlWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

DescribeSpotDiscountHistoryResponse Alibabacloud_Eas20210701::Client::describeSpotDiscountHistoryWithOptions(shared_ptr<DescribeSpotDiscountHistoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isProtect)) {
    query->insert(pair<string, bool>("IsProtect", *request->isProtect));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSpotDiscountHistory"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/public/spot_discount"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSpotDiscountHistoryResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSpotDiscountHistoryResponse(execute(params, req, runtime));
  }
}

DescribeSpotDiscountHistoryResponse Alibabacloud_Eas20210701::Client::describeSpotDiscountHistory(shared_ptr<DescribeSpotDiscountHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeSpotDiscountHistoryWithOptions(request, headers, runtime);
}

DescribeVirtualResourceResponse Alibabacloud_Eas20210701::Client::describeVirtualResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> VirtualResourceId,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVirtualResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/virtualresources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VirtualResourceId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeVirtualResourceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeVirtualResourceResponse(execute(params, req, runtime));
  }
}

DescribeVirtualResourceResponse Alibabacloud_Eas20210701::Client::describeVirtualResource(shared_ptr<string> ClusterId, shared_ptr<string> VirtualResourceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeVirtualResourceWithOptions(ClusterId, VirtualResourceId, headers, runtime);
}

DetachGatewayDomainResponse Alibabacloud_Eas20210701::Client::detachGatewayDomainWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> GatewayId,
                                                                                             shared_ptr<DetachGatewayDomainRequest> tmpReq,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DetachGatewayDomainShrinkRequest> request = make_shared<DetachGatewayDomainShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DetachGatewayDomainRequestCustomDomain>(tmpReq->customDomain)) {
    request->customDomainShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customDomain, make_shared<string>("CustomDomain"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customDomainShrink)) {
    query->insert(pair<string, string>("CustomDomain", *request->customDomainShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachGatewayDomain"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/domain/detach"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetachGatewayDomainResponse(callApi(params, req, runtime));
  }
  else {
    return DetachGatewayDomainResponse(execute(params, req, runtime));
  }
}

DetachGatewayDomainResponse Alibabacloud_Eas20210701::Client::detachGatewayDomain(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DetachGatewayDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return detachGatewayDomainWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

DevelopServiceResponse Alibabacloud_Eas20210701::Client::developServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ServiceName,
                                                                                   shared_ptr<DevelopServiceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exit)) {
    query->insert(pair<string, string>("Exit", *request->exit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DevelopService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/develop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DevelopServiceResponse(callApi(params, req, runtime));
  }
  else {
    return DevelopServiceResponse(execute(params, req, runtime));
  }
}

DevelopServiceResponse Alibabacloud_Eas20210701::Client::developService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DevelopServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return developServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

ListAclPolicyResponse Alibabacloud_Eas20210701::Client::listAclPolicyWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> GatewayId,
                                                                                 shared_ptr<ListAclPolicyRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAclPolicy"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/acl_policy"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAclPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return ListAclPolicyResponse(execute(params, req, runtime));
  }
}

ListAclPolicyResponse Alibabacloud_Eas20210701::Client::listAclPolicy(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<ListAclPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAclPolicyWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

ListBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::listBenchmarkTaskWithOptions(shared_ptr<ListBenchmarkTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return ListBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

ListBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::listBenchmarkTask(shared_ptr<ListBenchmarkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listBenchmarkTaskWithOptions(request, headers, runtime);
}

ListGatewayResponse Alibabacloud_Eas20210701::Client::listGatewayWithOptions(shared_ptr<ListGatewayRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayId)) {
    query->insert(pair<string, string>("GatewayId", *request->gatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gatewayName)) {
    query->insert(pair<string, string>("GatewayName", *request->gatewayName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGateway"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return ListGatewayResponse(execute(params, req, runtime));
  }
}

ListGatewayResponse Alibabacloud_Eas20210701::Client::listGateway(shared_ptr<ListGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayWithOptions(request, headers, runtime);
}

ListGatewayDomainsResponse Alibabacloud_Eas20210701::Client::listGatewayDomainsWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> GatewayId,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayDomains"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/domains"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGatewayDomainsResponse(callApi(params, req, runtime));
  }
  else {
    return ListGatewayDomainsResponse(execute(params, req, runtime));
  }
}

ListGatewayDomainsResponse Alibabacloud_Eas20210701::Client::listGatewayDomains(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayDomainsWithOptions(ClusterId, GatewayId, headers, runtime);
}

ListGatewayIntranetLinkedVpcResponse Alibabacloud_Eas20210701::Client::listGatewayIntranetLinkedVpcWithOptions(shared_ptr<string> ClusterId,
                                                                                                               shared_ptr<string> GatewayId,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayIntranetLinkedVpc"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_endpoint_linked_vpc"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGatewayIntranetLinkedVpcResponse(callApi(params, req, runtime));
  }
  else {
    return ListGatewayIntranetLinkedVpcResponse(execute(params, req, runtime));
  }
}

ListGatewayIntranetLinkedVpcResponse Alibabacloud_Eas20210701::Client::listGatewayIntranetLinkedVpc(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayIntranetLinkedVpcWithOptions(ClusterId, GatewayId, headers, runtime);
}

ListGatewayIntranetLinkedVpcPeerResponse Alibabacloud_Eas20210701::Client::listGatewayIntranetLinkedVpcPeerWithOptions(shared_ptr<string> ClusterId,
                                                                                                                       shared_ptr<string> GatewayId,
                                                                                                                       shared_ptr<ListGatewayIntranetLinkedVpcPeerRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    query->insert(pair<string, string>("VpcId", *request->vpcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayIntranetLinkedVpcPeer"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_endpoint_linked_vpc_peer"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGatewayIntranetLinkedVpcPeerResponse(callApi(params, req, runtime));
  }
  else {
    return ListGatewayIntranetLinkedVpcPeerResponse(execute(params, req, runtime));
  }
}

ListGatewayIntranetLinkedVpcPeerResponse Alibabacloud_Eas20210701::Client::listGatewayIntranetLinkedVpcPeer(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<ListGatewayIntranetLinkedVpcPeerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayIntranetLinkedVpcPeerWithOptions(ClusterId, GatewayId, request, headers, runtime);
}

ListGatewayIntranetSupportedZoneResponse Alibabacloud_Eas20210701::Client::listGatewayIntranetSupportedZoneWithOptions(shared_ptr<string> GatewayId,
                                                                                                                       shared_ptr<string> ClusterId,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGatewayIntranetSupportedZone"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)) + string("/intranet_supported_zone"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGatewayIntranetSupportedZoneResponse(callApi(params, req, runtime));
  }
  else {
    return ListGatewayIntranetSupportedZoneResponse(execute(params, req, runtime));
  }
}

ListGatewayIntranetSupportedZoneResponse Alibabacloud_Eas20210701::Client::listGatewayIntranetSupportedZone(shared_ptr<string> GatewayId, shared_ptr<string> ClusterId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGatewayIntranetSupportedZoneWithOptions(GatewayId, ClusterId, headers, runtime);
}

ListGroupsResponse Alibabacloud_Eas20210701::Client::listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNumber)) {
    query->insert(pair<string, string>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroups"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/groups"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListGroupsResponse(execute(params, req, runtime));
  }
}

ListGroupsResponse Alibabacloud_Eas20210701::Client::listGroups(shared_ptr<ListGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listGroupsWithOptions(request, headers, runtime);
}

ListResourceInstanceWorkerResponse Alibabacloud_Eas20210701::Client::listResourceInstanceWorkerWithOptions(shared_ptr<string> ClusterId,
                                                                                                           shared_ptr<string> ResourceId,
                                                                                                           shared_ptr<string> InstanceName,
                                                                                                           shared_ptr<ListResourceInstanceWorkerRequest> request,
                                                                                                           shared_ptr<map<string, string>> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workerName)) {
    query->insert(pair<string, string>("WorkerName", *request->workerName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceInstanceWorker"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/instance/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceName)) + string("/workers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceInstanceWorkerResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceInstanceWorkerResponse(execute(params, req, runtime));
  }
}

ListResourceInstanceWorkerResponse Alibabacloud_Eas20210701::Client::listResourceInstanceWorker(shared_ptr<string> ClusterId,
                                                                                                shared_ptr<string> ResourceId,
                                                                                                shared_ptr<string> InstanceName,
                                                                                                shared_ptr<ListResourceInstanceWorkerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceInstanceWorkerWithOptions(ClusterId, ResourceId, InstanceName, request, headers, runtime);
}

ListResourceInstancesResponse Alibabacloud_Eas20210701::Client::listResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ResourceId,
                                                                                                 shared_ptr<ListResourceInstancesRequest> tmpReq,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListResourceInstancesShrinkRequest> request = make_shared<ListResourceInstancesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->label)) {
    request->labelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->label, make_shared<string>("Label"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIP)) {
    query->insert(pair<string, string>("InstanceIP", *request->instanceIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    query->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelShrink)) {
    query->insert(pair<string, string>("Label", *request->labelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceInstancesResponse(execute(params, req, runtime));
  }
}

ListResourceInstancesResponse Alibabacloud_Eas20210701::Client::listResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<ListResourceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceInstancesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

ListResourceServicesResponse Alibabacloud_Eas20210701::Client::listResourceServicesWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ResourceId,
                                                                                               shared_ptr<ListResourceServicesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceServices"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceServicesResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceServicesResponse(execute(params, req, runtime));
  }
}

ListResourceServicesResponse Alibabacloud_Eas20210701::Client::listResourceServices(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<ListResourceServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourceServicesWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

ListResourcesResponse Alibabacloud_Eas20210701::Client::listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceStatus)) {
    query->insert(pair<string, string>("ResourceStatus", *request->resourceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResources"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourcesResponse(execute(params, req, runtime));
  }
}

ListResourcesResponse Alibabacloud_Eas20210701::Client::listResources(shared_ptr<ListResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listResourcesWithOptions(request, headers, runtime);
}

ListServiceContainersResponse Alibabacloud_Eas20210701::Client::listServiceContainersWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ServiceName,
                                                                                                 shared_ptr<string> InstanceName,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceContainers"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceName)) + string("/containers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceContainersResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceContainersResponse(execute(params, req, runtime));
  }
}

ListServiceContainersResponse Alibabacloud_Eas20210701::Client::listServiceContainers(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<string> InstanceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceContainersWithOptions(ClusterId, ServiceName, InstanceName, headers, runtime);
}

ListServiceInstancesResponse Alibabacloud_Eas20210701::Client::listServiceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ServiceName,
                                                                                               shared_ptr<ListServiceInstancesRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostIP)) {
    query->insert(pair<string, string>("HostIP", *request->hostIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIP)) {
    query->insert(pair<string, string>("InstanceIP", *request->instanceIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    query->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isSpot)) {
    query->insert(pair<string, bool>("IsSpot", *request->isSpot));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceInstances"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceInstancesResponse(execute(params, req, runtime));
  }
}

ListServiceInstancesResponse Alibabacloud_Eas20210701::Client::listServiceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ListServiceInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceInstancesWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

ListServiceVersionsResponse Alibabacloud_Eas20210701::Client::listServiceVersionsWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<ListServiceVersionsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceVersions"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServiceVersionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListServiceVersionsResponse(execute(params, req, runtime));
  }
}

ListServiceVersionsResponse Alibabacloud_Eas20210701::Client::listServiceVersions(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ListServiceVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceVersionsWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

ListServicesResponse Alibabacloud_Eas20210701::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListServicesShrinkRequest> request = make_shared<ListServicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->label)) {
    request->labelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->label, make_shared<string>("Label"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filter)) {
    query->insert(pair<string, string>("Filter", *request->filter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gateway)) {
    query->insert(pair<string, string>("Gateway", *request->gateway));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeNoWorkspace)) {
    query->insert(pair<string, bool>("IncludeNoWorkspace", *request->includeNoWorkspace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelShrink)) {
    query->insert(pair<string, string>("Label", *request->labelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentServiceUid)) {
    query->insert(pair<string, string>("ParentServiceUid", *request->parentServiceUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaId)) {
    query->insert(pair<string, string>("QuotaId", *request->quotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    query->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceStatus)) {
    query->insert(pair<string, string>("ServiceStatus", *request->serviceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceUid)) {
    query->insert(pair<string, string>("ServiceUid", *request->serviceUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListServicesResponse(callApi(params, req, runtime));
  }
  else {
    return ListServicesResponse(execute(params, req, runtime));
  }
}

ListServicesResponse Alibabacloud_Eas20210701::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(request, headers, runtime);
}

ListTenantAddonsResponse Alibabacloud_Eas20210701::Client::listTenantAddonsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTenantAddons"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/tenantaddons"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTenantAddonsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTenantAddonsResponse(execute(params, req, runtime));
  }
}

ListTenantAddonsResponse Alibabacloud_Eas20210701::Client::listTenantAddons() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTenantAddonsWithOptions(headers, runtime);
}

ListVirtualResourceResponse Alibabacloud_Eas20210701::Client::listVirtualResourceWithOptions(shared_ptr<ListVirtualResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualResourceId)) {
    query->insert(pair<string, string>("VirtualResourceId", *request->virtualResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualResourceName)) {
    query->insert(pair<string, string>("VirtualResourceName", *request->virtualResourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVirtualResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/virtualresources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListVirtualResourceResponse(callApi(params, req, runtime));
  }
  else {
    return ListVirtualResourceResponse(execute(params, req, runtime));
  }
}

ListVirtualResourceResponse Alibabacloud_Eas20210701::Client::listVirtualResource(shared_ptr<ListVirtualResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVirtualResourceWithOptions(request, headers, runtime);
}

ReinstallTenantAddonResponse Alibabacloud_Eas20210701::Client::reinstallTenantAddonWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> TenantAddonName,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReinstallTenantAddon"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/tenantaddons/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TenantAddonName)) + string("/reinstall"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReinstallTenantAddonResponse(callApi(params, req, runtime));
  }
  else {
    return ReinstallTenantAddonResponse(execute(params, req, runtime));
  }
}

ReinstallTenantAddonResponse Alibabacloud_Eas20210701::Client::reinstallTenantAddon(shared_ptr<string> ClusterId, shared_ptr<string> TenantAddonName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return reinstallTenantAddonWithOptions(ClusterId, TenantAddonName, headers, runtime);
}

ReleaseServiceResponse Alibabacloud_Eas20210701::Client::releaseServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ServiceName,
                                                                                   shared_ptr<ReleaseServiceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficState)) {
    body->insert(pair<string, string>("TrafficState", *request->trafficState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->weight)) {
    body->insert(pair<string, long>("Weight", *request->weight));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/release"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReleaseServiceResponse(callApi(params, req, runtime));
  }
  else {
    return ReleaseServiceResponse(execute(params, req, runtime));
  }
}

ReleaseServiceResponse Alibabacloud_Eas20210701::Client::releaseService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ReleaseServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return releaseServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

RestartServiceResponse Alibabacloud_Eas20210701::Client::restartServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ServiceName,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/restart"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RestartServiceResponse(callApi(params, req, runtime));
  }
  else {
    return RestartServiceResponse(execute(params, req, runtime));
  }
}

RestartServiceResponse Alibabacloud_Eas20210701::Client::restartService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return restartServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

StartBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::startBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> TaskName,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName)) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return StartBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

StartBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::startBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

StartServiceResponse Alibabacloud_Eas20210701::Client::startServiceWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> ServiceName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/start"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartServiceResponse(callApi(params, req, runtime));
  }
  else {
    return StartServiceResponse(execute(params, req, runtime));
  }
}

StartServiceResponse Alibabacloud_Eas20210701::Client::startService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return startServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

StopBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::stopBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> TaskName,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return StopBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

StopBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::stopBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopBenchmarkTaskWithOptions(ClusterId, TaskName, headers, runtime);
}

StopServiceResponse Alibabacloud_Eas20210701::Client::stopServiceWithOptions(shared_ptr<string> ClusterId,
                                                                             shared_ptr<string> ServiceName,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/stop"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopServiceResponse(callApi(params, req, runtime));
  }
  else {
    return StopServiceResponse(execute(params, req, runtime));
  }
}

StopServiceResponse Alibabacloud_Eas20210701::Client::stopService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopServiceWithOptions(ClusterId, ServiceName, headers, runtime);
}

UpdateAppServiceResponse Alibabacloud_Eas20210701::Client::updateAppServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                       shared_ptr<string> ServiceName,
                                                                                       shared_ptr<UpdateAppServiceRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->quotaId)) {
    query->insert(pair<string, string>("QuotaId", *request->quotaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    query->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(request->config)) {
    body->insert(pair<string, map<string, boost::any>>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    body->insert(pair<string, long>("Replicas", *request->replicas));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceSpec)) {
    body->insert(pair<string, string>("ServiceSpec", *request->serviceSpec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAppService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/app_services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAppServiceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAppServiceResponse(execute(params, req, runtime));
  }
}

UpdateAppServiceResponse Alibabacloud_Eas20210701::Client::updateAppService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateAppServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAppServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::updateBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> TaskName,
                                                                                             shared_ptr<UpdateBenchmarkTaskRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBenchmarkTask"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/benchmark-tasks/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(TaskName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateBenchmarkTaskResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateBenchmarkTaskResponse(execute(params, req, runtime));
  }
}

UpdateBenchmarkTaskResponse Alibabacloud_Eas20210701::Client::updateBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName, shared_ptr<UpdateBenchmarkTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateBenchmarkTaskWithOptions(ClusterId, TaskName, request, headers, runtime);
}

UpdateGatewayResponse Alibabacloud_Eas20210701::Client::updateGatewayWithOptions(shared_ptr<string> GatewayId,
                                                                                 shared_ptr<string> ClusterId,
                                                                                 shared_ptr<UpdateGatewayRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInternet)) {
    body->insert(pair<string, bool>("EnableInternet", *request->enableInternet));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableIntranet)) {
    body->insert(pair<string, bool>("EnableIntranet", *request->enableIntranet));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSSLRedirection)) {
    body->insert(pair<string, bool>("EnableSSLRedirection", *request->enableSSLRedirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDefault)) {
    body->insert(pair<string, bool>("IsDefault", *request->isDefault));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replicas)) {
    body->insert(pair<string, long>("Replicas", *request->replicas));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGateway"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/gateways/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(GatewayId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateGatewayResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateGatewayResponse(execute(params, req, runtime));
  }
}

UpdateGatewayResponse Alibabacloud_Eas20210701::Client::updateGateway(shared_ptr<string> GatewayId, shared_ptr<string> ClusterId, shared_ptr<UpdateGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateGatewayWithOptions(GatewayId, ClusterId, request, headers, runtime);
}

UpdateResourceResponse Alibabacloud_Eas20210701::Client::updateResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> ResourceId,
                                                                                   shared_ptr<UpdateResourceRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    body->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateResourceRequestSelfManagedResourceOptions>(request->selfManagedResourceOptions)) {
    body->insert(pair<string, UpdateResourceRequestSelfManagedResourceOptions>("SelfManagedResourceOptions", *request->selfManagedResourceOptions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceResponse(execute(params, req, runtime));
  }
}

UpdateResourceResponse Alibabacloud_Eas20210701::Client::updateResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

UpdateResourceDLinkResponse Alibabacloud_Eas20210701::Client::updateResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ResourceId,
                                                                                             shared_ptr<UpdateResourceDLinkRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCIDRs)) {
    body->insert(pair<string, string>("DestinationCIDRs", *request->destinationCIDRs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    body->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->vSwitchIdList)) {
    body->insert(pair<string, vector<string>>("VSwitchIdList", *request->vSwitchIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceDLink"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/dlink"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceDLinkResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceDLinkResponse(execute(params, req, runtime));
  }
}

UpdateResourceDLinkResponse Alibabacloud_Eas20210701::Client::updateResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceDLinkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceDLinkWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

UpdateResourceInstanceResponse Alibabacloud_Eas20210701::Client::updateResourceInstanceWithOptions(shared_ptr<string> ClusterId,
                                                                                                   shared_ptr<string> ResourceId,
                                                                                                   shared_ptr<string> InstanceId,
                                                                                                   shared_ptr<UpdateResourceInstanceRequest> request,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->action)) {
    body->insert(pair<string, string>("Action", *request->action));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceInstance"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceInstanceResponse(execute(params, req, runtime));
  }
}

UpdateResourceInstanceResponse Alibabacloud_Eas20210701::Client::updateResourceInstance(shared_ptr<string> ClusterId,
                                                                                        shared_ptr<string> ResourceId,
                                                                                        shared_ptr<string> InstanceId,
                                                                                        shared_ptr<UpdateResourceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceInstanceWithOptions(ClusterId, ResourceId, InstanceId, request, headers, runtime);
}

UpdateResourceInstanceLabelResponse Alibabacloud_Eas20210701::Client::updateResourceInstanceLabelWithOptions(shared_ptr<string> ClusterId,
                                                                                                             shared_ptr<string> ResourceId,
                                                                                                             shared_ptr<UpdateResourceInstanceLabelRequest> tmpReq,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateResourceInstanceLabelShrinkRequest> request = make_shared<UpdateResourceInstanceLabelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceIds)) {
    request->instanceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceIds, make_shared<string>("InstanceIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allInstances)) {
    query->insert(pair<string, bool>("AllInstances", *request->allInstances));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdsShrink)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIdsShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->labels)) {
    body->insert(pair<string, map<string, string>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateResourceInstanceLabel"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/resources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ResourceId)) + string("/label"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateResourceInstanceLabelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateResourceInstanceLabelResponse(execute(params, req, runtime));
  }
}

UpdateResourceInstanceLabelResponse Alibabacloud_Eas20210701::Client::updateResourceInstanceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceInstanceLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateResourceInstanceLabelWithOptions(ClusterId, ResourceId, request, headers, runtime);
}

UpdateServiceResponse Alibabacloud_Eas20210701::Client::updateServiceWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> ServiceName,
                                                                                 shared_ptr<UpdateServiceRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateType)) {
    query->insert(pair<string, string>("UpdateType", *request->updateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateService"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceResponse(execute(params, req, runtime));
  }
}

UpdateServiceResponse Alibabacloud_Eas20210701::Client::updateService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::updateServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<UpdateServiceAutoScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<UpdateServiceAutoScalerRequestBehavior>(request->behavior)) {
    body->insert(pair<string, UpdateServiceAutoScalerRequestBehavior>("behavior", *request->behavior));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->max)) {
    body->insert(pair<string, long>("max", *request->max));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->min)) {
    body->insert(pair<string, long>("min", *request->min));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceAutoScalerRequestScaleStrategies>>(request->scaleStrategies)) {
    body->insert(pair<string, vector<UpdateServiceAutoScalerRequestScaleStrategies>>("scaleStrategies", *request->scaleStrategies));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceAutoScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/autoscaler"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceAutoScalerResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceAutoScalerResponse(execute(params, req, runtime));
  }
}

UpdateServiceAutoScalerResponse Alibabacloud_Eas20210701::Client::updateServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceAutoScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceAutoScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::updateServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<UpdateServiceCronScalerRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->excludeDates)) {
    body->insert(pair<string, vector<string>>("ExcludeDates", *request->excludeDates));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateServiceCronScalerRequestScaleJobs>>(request->scaleJobs)) {
    body->insert(pair<string, vector<UpdateServiceCronScalerRequestScaleJobs>>("ScaleJobs", *request->scaleJobs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceCronScaler"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/cronscaler"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceCronScalerResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceCronScalerResponse(execute(params, req, runtime));
  }
}

UpdateServiceCronScalerResponse Alibabacloud_Eas20210701::Client::updateServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceCronScalerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceCronScalerWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceInstanceResponse Alibabacloud_Eas20210701::Client::updateServiceInstanceWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> ServiceName,
                                                                                                 shared_ptr<string> InstanceName,
                                                                                                 shared_ptr<UpdateServiceInstanceRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isolate)) {
    body->insert(pair<string, bool>("Isolate", *request->isolate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceInstance"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/instances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(InstanceName)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceInstanceResponse(execute(params, req, runtime));
  }
}

UpdateServiceInstanceResponse Alibabacloud_Eas20210701::Client::updateServiceInstance(shared_ptr<string> ClusterId,
                                                                                      shared_ptr<string> ServiceName,
                                                                                      shared_ptr<string> InstanceName,
                                                                                      shared_ptr<UpdateServiceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceInstanceWithOptions(ClusterId, ServiceName, InstanceName, request, headers, runtime);
}

UpdateServiceLabelResponse Alibabacloud_Eas20210701::Client::updateServiceLabelWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> ServiceName,
                                                                                           shared_ptr<UpdateServiceLabelRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->labels)) {
    body->insert(pair<string, map<string, string>>("Labels", *request->labels));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceLabel"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/label"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceLabelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceLabelResponse(execute(params, req, runtime));
  }
}

UpdateServiceLabelResponse Alibabacloud_Eas20210701::Client::updateServiceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceLabelWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceMirrorResponse Alibabacloud_Eas20210701::Client::updateServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                                             shared_ptr<string> ServiceName,
                                                                                             shared_ptr<UpdateServiceMirrorRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ratio)) {
    body->insert(pair<string, long>("Ratio", *request->ratio));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->target)) {
    body->insert(pair<string, vector<string>>("Target", *request->target));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceMirror"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/mirror"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceMirrorResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceMirrorResponse(execute(params, req, runtime));
  }
}

UpdateServiceMirrorResponse Alibabacloud_Eas20210701::Client::updateServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceMirrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceMirrorWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceSafetyLockResponse Alibabacloud_Eas20210701::Client::updateServiceSafetyLockWithOptions(shared_ptr<string> ClusterId,
                                                                                                     shared_ptr<string> ServiceName,
                                                                                                     shared_ptr<UpdateServiceSafetyLockRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lock)) {
    body->insert(pair<string, string>("Lock", *request->lock));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceSafetyLock"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/lock"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceSafetyLockResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceSafetyLockResponse(execute(params, req, runtime));
  }
}

UpdateServiceSafetyLockResponse Alibabacloud_Eas20210701::Client::updateServiceSafetyLock(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceSafetyLockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceSafetyLockWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateServiceVersionResponse Alibabacloud_Eas20210701::Client::updateServiceVersionWithOptions(shared_ptr<string> ClusterId,
                                                                                               shared_ptr<string> ServiceName,
                                                                                               shared_ptr<UpdateServiceVersionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->version)) {
    body->insert(pair<string, long>("Version", *request->version));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateServiceVersion"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/services/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ServiceName)) + string("/version"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateServiceVersionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateServiceVersionResponse(execute(params, req, runtime));
  }
}

UpdateServiceVersionResponse Alibabacloud_Eas20210701::Client::updateServiceVersion(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateServiceVersionWithOptions(ClusterId, ServiceName, request, headers, runtime);
}

UpdateVirtualResourceResponse Alibabacloud_Eas20210701::Client::updateVirtualResourceWithOptions(shared_ptr<string> ClusterId,
                                                                                                 shared_ptr<string> VirtualResourceId,
                                                                                                 shared_ptr<UpdateVirtualResourceRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->disableSpotProtectionPeriod)) {
    body->insert(pair<string, bool>("DisableSpotProtectionPeriod", *request->disableSpotProtectionPeriod));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateVirtualResourceRequestResources>>(request->resources)) {
    body->insert(pair<string, vector<UpdateVirtualResourceRequestResources>>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualResourceName)) {
    body->insert(pair<string, string>("VirtualResourceName", *request->virtualResourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVirtualResource"))},
    {"version", boost::any(string("2021-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/v2/virtualresources/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(ClusterId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(VirtualResourceId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateVirtualResourceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateVirtualResourceResponse(execute(params, req, runtime));
  }
}

UpdateVirtualResourceResponse Alibabacloud_Eas20210701::Client::updateVirtualResource(shared_ptr<string> ClusterId, shared_ptr<string> VirtualResourceId, shared_ptr<UpdateVirtualResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVirtualResourceWithOptions(ClusterId, VirtualResourceId, request, headers, runtime);
}

