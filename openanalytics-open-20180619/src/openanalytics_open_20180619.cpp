// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/openanalytics_open_20180619.hpp>
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

using namespace Alibabacloud_Openanalytics-open20180619;

Alibabacloud_Openanalytics-open20180619::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-beijing", "openanalytics.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou", "openanalytics.cn-zhangjiakou.aliyuncs.com"},
    {"cn-hangzhou", "openanalytics.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "openanalytics.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "openanalytics.cn-shenzhen.aliyuncs.com"},
    {"cn-hongkong", "openanalytics.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1", "openanalytics.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "datalakeanalytics.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "openanalytics.ap-southeast-3.aliyuncs.com"},
    {"ap-northeast-1", "datalakeanalytics.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1", "openanalytics.eu-west-1.aliyuncs.com"},
    {"us-west-1", "openanalytics.us-west-1.aliyuncs.com"},
    {"us-east-1", "datalakeanalytics.us-east-1.aliyuncs.com"},
    {"eu-central-1", "datalakeanalytics.eu-central-1.aliyuncs.com"},
    {"ap-south-1", "openanalytics.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "openanalytics.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-5", "openanalytics.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing-finance-1", "openanalytics.aliyuncs.com"},
    {"cn-beijing-finance-pop", "openanalytics.aliyuncs.com"},
    {"cn-beijing-gov-1", "openanalytics.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "openanalytics.aliyuncs.com"},
    {"cn-chengdu", "openanalytics.aliyuncs.com"},
    {"cn-edge-1", "openanalytics.aliyuncs.com"},
    {"cn-fujian", "openanalytics.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-finance", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "openanalytics.aliyuncs.com"},
    {"cn-hangzhou-test-306", "openanalytics.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "openanalytics.aliyuncs.com"},
    {"cn-huhehaote", "openanalytics.cn-huhehaote.aliyuncs.com"},
    {"cn-north-2-gov-1", "openanalytics.aliyuncs.com"},
    {"cn-qingdao", "openanalytics.cn-qingdao.aliyuncs.com"},
    {"cn-qingdao-nebula", "openanalytics.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "openanalytics.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "openanalytics.aliyuncs.com"},
    {"cn-shanghai-finance-1", "openanalytics.aliyuncs.com"},
    {"cn-shanghai-inner", "openanalytics.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "openanalytics.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "openanalytics.aliyuncs.com"},
    {"cn-shenzhen-inner", "openanalytics.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "openanalytics.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "openanalytics.aliyuncs.com"},
    {"cn-wuhan", "openanalytics.aliyuncs.com"},
    {"cn-yushanfang", "openanalytics.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "openanalytics.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "openanalytics.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "openanalytics.aliyuncs.com"},
    {"eu-west-1-oxs", "openanalytics.ap-northeast-1.aliyuncs.com"},
    {"me-east-1", "openanalytics.me-east-1.aliyuncs.com"},
    {"rus-west-1-pop", "openanalytics.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("openanalytics-open"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Openanalytics-open20180619::Client::getEndpoint(shared_ptr<string> productId,
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

CancelSparkStatementResponse Alibabacloud_Openanalytics-open20180619::Client::cancelSparkStatementWithOptions(shared_ptr<CancelSparkStatementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statementId)) {
    body->insert(pair<string, string>("StatementId", *request->statementId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelSparkStatement"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelSparkStatementResponse(callApi(params, req, runtime));
}

CancelSparkStatementResponse Alibabacloud_Openanalytics-open20180619::Client::cancelSparkStatement(shared_ptr<CancelSparkStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelSparkStatementWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_Openanalytics-open20180619::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->component)) {
    body->insert(pair<string, string>("Component", *request->component));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    body->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_Openanalytics-open20180619::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

ExecuteSparkStatementResponse Alibabacloud_Openanalytics-open20180619::Client::executeSparkStatementWithOptions(shared_ptr<ExecuteSparkStatementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    body->insert(pair<string, string>("Kind", *request->kind));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteSparkStatement"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteSparkStatementResponse(callApi(params, req, runtime));
}

ExecuteSparkStatementResponse Alibabacloud_Openanalytics-open20180619::Client::executeSparkStatement(shared_ptr<ExecuteSparkStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeSparkStatementWithOptions(request, runtime);
}

GetJobAttemptLogResponse Alibabacloud_Openanalytics-open20180619::Client::getJobAttemptLogWithOptions(shared_ptr<GetJobAttemptLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobAttemptId)) {
    body->insert(pair<string, string>("JobAttemptId", *request->jobAttemptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobAttemptLog"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobAttemptLogResponse(callApi(params, req, runtime));
}

GetJobAttemptLogResponse Alibabacloud_Openanalytics-open20180619::Client::getJobAttemptLog(shared_ptr<GetJobAttemptLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobAttemptLogWithOptions(request, runtime);
}

GetJobDetailResponse Alibabacloud_Openanalytics-open20180619::Client::getJobDetailWithOptions(shared_ptr<GetJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobDetail"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobDetailResponse(callApi(params, req, runtime));
}

GetJobDetailResponse Alibabacloud_Openanalytics-open20180619::Client::getJobDetail(shared_ptr<GetJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobDetailWithOptions(request, runtime);
}

GetJobLogResponse Alibabacloud_Openanalytics-open20180619::Client::getJobLogWithOptions(shared_ptr<GetJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobLog"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobLogResponse(callApi(params, req, runtime));
}

GetJobLogResponse Alibabacloud_Openanalytics-open20180619::Client::getJobLog(shared_ptr<GetJobLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobLogWithOptions(request, runtime);
}

GetJobStatusResponse Alibabacloud_Openanalytics-open20180619::Client::getJobStatusWithOptions(shared_ptr<GetJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobStatus"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetJobStatusResponse(callApi(params, req, runtime));
}

GetJobStatusResponse Alibabacloud_Openanalytics-open20180619::Client::getJobStatus(shared_ptr<GetJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobStatusWithOptions(request, runtime);
}

GetSparkSessionStateResponse Alibabacloud_Openanalytics-open20180619::Client::getSparkSessionStateWithOptions(shared_ptr<GetSparkSessionStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkSessionState"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkSessionStateResponse(callApi(params, req, runtime));
}

GetSparkSessionStateResponse Alibabacloud_Openanalytics-open20180619::Client::getSparkSessionState(shared_ptr<GetSparkSessionStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkSessionStateWithOptions(request, runtime);
}

GetSparkStatementResponse Alibabacloud_Openanalytics-open20180619::Client::getSparkStatementWithOptions(shared_ptr<GetSparkStatementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->statementId)) {
    body->insert(pair<string, long>("StatementId", *request->statementId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSparkStatement"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSparkStatementResponse(callApi(params, req, runtime));
}

GetSparkStatementResponse Alibabacloud_Openanalytics-open20180619::Client::getSparkStatement(shared_ptr<GetSparkStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSparkStatementWithOptions(request, runtime);
}

KillSparkJobResponse Alibabacloud_Openanalytics-open20180619::Client::killSparkJobWithOptions(shared_ptr<KillSparkJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("KillSparkJob"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return KillSparkJobResponse(callApi(params, req, runtime));
}

KillSparkJobResponse Alibabacloud_Openanalytics-open20180619::Client::killSparkJob(shared_ptr<KillSparkJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return killSparkJobWithOptions(request, runtime);
}

ListSparkJobResponse Alibabacloud_Openanalytics-open20180619::Client::listSparkJobWithOptions(shared_ptr<ListSparkJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSparkJobShrinkRequest> request = make_shared<ListSparkJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->condition)) {
    request->conditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->condition, make_shared<string>("Condition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conditionShrink)) {
    query->insert(pair<string, string>("Condition", *request->conditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    query->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSparkJob"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkJobResponse(callApi(params, req, runtime));
}

ListSparkJobResponse Alibabacloud_Openanalytics-open20180619::Client::listSparkJob(shared_ptr<ListSparkJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkJobWithOptions(request, runtime);
}

ListSparkJobAttemptResponse Alibabacloud_Openanalytics-open20180619::Client::listSparkJobAttemptWithOptions(shared_ptr<ListSparkJobAttemptRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSparkJobAttemptShrinkRequest> request = make_shared<ListSparkJobAttemptShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->condition)) {
    request->conditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->condition, make_shared<string>("Condition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conditionShrink)) {
    query->insert(pair<string, string>("Condition", *request->conditionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    query->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSparkJobAttempt"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkJobAttemptResponse(callApi(params, req, runtime));
}

ListSparkJobAttemptResponse Alibabacloud_Openanalytics-open20180619::Client::listSparkJobAttempt(shared_ptr<ListSparkJobAttemptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkJobAttemptWithOptions(request, runtime);
}

ListSparkStatementsResponse Alibabacloud_Openanalytics-open20180619::Client::listSparkStatementsWithOptions(shared_ptr<ListSparkStatementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSparkStatements"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSparkStatementsResponse(callApi(params, req, runtime));
}

ListSparkStatementsResponse Alibabacloud_Openanalytics-open20180619::Client::listSparkStatements(shared_ptr<ListSparkStatementsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSparkStatementsWithOptions(request, runtime);
}

ReleaseInstanceResponse Alibabacloud_Openanalytics-open20180619::Client::releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstance"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstanceResponse(callApi(params, req, runtime));
}

ReleaseInstanceResponse Alibabacloud_Openanalytics-open20180619::Client::releaseInstance(shared_ptr<ReleaseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceWithOptions(request, runtime);
}

SubmitSparkJobResponse Alibabacloud_Openanalytics-open20180619::Client::submitSparkJobWithOptions(shared_ptr<SubmitSparkJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configJson)) {
    body->insert(pair<string, string>("ConfigJson", *request->configJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSparkJob"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSparkJobResponse(callApi(params, req, runtime));
}

SubmitSparkJobResponse Alibabacloud_Openanalytics-open20180619::Client::submitSparkJob(shared_ptr<SubmitSparkJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSparkJobWithOptions(request, runtime);
}

SubmitSparkSQLResponse Alibabacloud_Openanalytics-open20180619::Client::submitSparkSQLWithOptions(shared_ptr<SubmitSparkSQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    body->insert(pair<string, string>("Sql", *request->sql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSparkSQL"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSparkSQLResponse(callApi(params, req, runtime));
}

SubmitSparkSQLResponse Alibabacloud_Openanalytics-open20180619::Client::submitSparkSQL(shared_ptr<SubmitSparkSQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSparkSQLWithOptions(request, runtime);
}

ValidateVirtualClusterNameResponse Alibabacloud_Openanalytics-open20180619::Client::validateVirtualClusterNameWithOptions(shared_ptr<ValidateVirtualClusterNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vcName)) {
    body->insert(pair<string, string>("VcName", *request->vcName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ValidateVirtualClusterName"))},
    {"version", boost::any(string("2018-06-19"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ValidateVirtualClusterNameResponse(callApi(params, req, runtime));
}

ValidateVirtualClusterNameResponse Alibabacloud_Openanalytics-open20180619::Client::validateVirtualClusterName(shared_ptr<ValidateVirtualClusterNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateVirtualClusterNameWithOptions(request, runtime);
}

