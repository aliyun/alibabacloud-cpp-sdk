// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/mts_20210728.hpp>
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

using namespace Alibabacloud_Mts20210728;

Alibabacloud_Mts20210728::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "mts.aliyuncs.com"},
    {"ap-southeast-2", "mts.aliyuncs.com"},
    {"ap-southeast-3", "mts.aliyuncs.com"},
    {"cn-beijing-finance-1", "mts.aliyuncs.com"},
    {"cn-beijing-finance-pop", "mts.aliyuncs.com"},
    {"cn-beijing-gov-1", "mts.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "mts.aliyuncs.com"},
    {"cn-chengdu", "mts.aliyuncs.com"},
    {"cn-edge-1", "mts.aliyuncs.com"},
    {"cn-fujian", "mts.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "mts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "mts.aliyuncs.com"},
    {"cn-hangzhou-finance", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "mts.aliyuncs.com"},
    {"cn-hangzhou-test-306", "mts.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "mts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "mts.aliyuncs.com"},
    {"cn-north-2-gov-1", "mts.aliyuncs.com"},
    {"cn-qingdao-nebula", "mts.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "mts.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "mts.aliyuncs.com"},
    {"cn-shanghai-finance-1", "mts.aliyuncs.com"},
    {"cn-shanghai-inner", "mts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "mts.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "mts.aliyuncs.com"},
    {"cn-shenzhen-inner", "mts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "mts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "mts.aliyuncs.com"},
    {"cn-wuhan", "mts.aliyuncs.com"},
    {"cn-wulanchabu", "mts.aliyuncs.com"},
    {"cn-yushanfang", "mts.aliyuncs.com"},
    {"cn-zhangbei", "mts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "mts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "mts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "mts.aliyuncs.com"},
    {"eu-west-1-oxs", "mts.aliyuncs.com"},
    {"me-east-1", "mts.aliyuncs.com"},
    {"rus-west-1-pop", "mts.aliyuncs.com"},
    {"us-east-1", "mts.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("mts"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Mts20210728::Client::getEndpoint(shared_ptr<string> productId,
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

QueryCopyrightResponse Alibabacloud_Mts20210728::Client::queryCopyright(shared_ptr<QueryCopyrightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryCopyrightWithOptions(request, headers, runtime);
}

QueryCopyrightResponse Alibabacloud_Mts20210728::Client::queryCopyrightWithOptions(shared_ptr<QueryCopyrightRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    body->insert(pair<string, long>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    body->insert(pair<string, long>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    body->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCopyright"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/queryCopyrightJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCopyrightResponse(callApi(params, req, runtime));
}

QueryCopyrightExtractResponse Alibabacloud_Mts20210728::Client::queryCopyrightExtract(shared_ptr<QueryCopyrightExtractRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryCopyrightExtractWithOptions(request, headers, runtime);
}

QueryCopyrightExtractResponse Alibabacloud_Mts20210728::Client::queryCopyrightExtractWithOptions(shared_ptr<QueryCopyrightExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCopyrightExtract"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/queryCopyrightExtract"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCopyrightExtractResponse(callApi(params, req, runtime));
}

QueryImageCopyrightResponse Alibabacloud_Mts20210728::Client::queryImageCopyright(shared_ptr<QueryImageCopyrightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryImageCopyrightWithOptions(request, headers, runtime);
}

QueryImageCopyrightResponse Alibabacloud_Mts20210728::Client::queryImageCopyrightWithOptions(shared_ptr<QueryImageCopyrightRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    body->insert(pair<string, long>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    body->insert(pair<string, long>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryImageCopyright"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/queryImageCopyright"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryImageCopyrightResponse(callApi(params, req, runtime));
}

QueryTraceAbResponse Alibabacloud_Mts20210728::Client::queryTraceAb(shared_ptr<QueryTraceAbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTraceAbWithOptions(request, headers, runtime);
}

QueryTraceAbResponse Alibabacloud_Mts20210728::Client::queryTraceAbWithOptions(shared_ptr<QueryTraceAbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    body->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTraceAb"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/queryTraceAb"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTraceAbResponse(callApi(params, req, runtime));
}

QueryTraceExtractResponse Alibabacloud_Mts20210728::Client::queryTraceExtract(shared_ptr<QueryTraceExtractRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTraceExtractWithOptions(request, headers, runtime);
}

QueryTraceExtractResponse Alibabacloud_Mts20210728::Client::queryTraceExtractWithOptions(shared_ptr<QueryTraceExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTraceExtract"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/queryTraceExtract"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTraceExtractResponse(callApi(params, req, runtime));
}

QueryTraceMuResponse Alibabacloud_Mts20210728::Client::queryTraceMu(shared_ptr<QueryTraceMuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTraceMuWithOptions(request, headers, runtime);
}

QueryTraceMuResponse Alibabacloud_Mts20210728::Client::queryTraceMuWithOptions(shared_ptr<QueryTraceMuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    body->insert(pair<string, long>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    body->insert(pair<string, long>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    body->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageId)) {
    body->insert(pair<string, long>("MessageId", *request->messageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTraceMu"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/queryTraceM3u8"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTraceMuResponse(callApi(params, req, runtime));
}

SubmitCopyrightExtractResponse Alibabacloud_Mts20210728::Client::submitCopyrightExtract(shared_ptr<SubmitCopyrightExtractRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitCopyrightExtractWithOptions(request, headers, runtime);
}

SubmitCopyrightExtractResponse Alibabacloud_Mts20210728::Client::submitCopyrightExtractWithOptions(shared_ptr<SubmitCopyrightExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callBack)) {
    body->insert(pair<string, string>("CallBack", *request->callBack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    body->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCopyrightExtract"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/submitCopyrightExtract"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCopyrightExtractResponse(callApi(params, req, runtime));
}

SubmitCopyrightJobResponse Alibabacloud_Mts20210728::Client::submitCopyrightJob(shared_ptr<SubmitCopyrightJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitCopyrightJobWithOptions(request, headers, runtime);
}

SubmitCopyrightJobResponse Alibabacloud_Mts20210728::Client::submitCopyrightJobWithOptions(shared_ptr<SubmitCopyrightJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callBack)) {
    body->insert(pair<string, string>("CallBack", *request->callBack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    body->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    body->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    body->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalTime)) {
    body->insert(pair<string, long>("TotalTime", *request->totalTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCopyrightJob"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/submitCopyrightJob"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCopyrightJobResponse(callApi(params, req, runtime));
}

SubmitImageCopyrightResponse Alibabacloud_Mts20210728::Client::submitImageCopyright(shared_ptr<SubmitImageCopyrightRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitImageCopyrightWithOptions(request, headers, runtime);
}

SubmitImageCopyrightResponse Alibabacloud_Mts20210728::Client::submitImageCopyrightWithOptions(shared_ptr<SubmitImageCopyrightRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    body->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    body->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    body->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    body->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitImageCopyright"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/submitImageCopyright"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitImageCopyrightResponse(callApi(params, req, runtime));
}

SubmitTraceAbResponse Alibabacloud_Mts20210728::Client::submitTraceAb(shared_ptr<SubmitTraceAbRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitTraceAbWithOptions(request, headers, runtime);
}

SubmitTraceAbResponse Alibabacloud_Mts20210728::Client::submitTraceAbWithOptions(shared_ptr<SubmitTraceAbRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callBack)) {
    body->insert(pair<string, string>("CallBack", *request->callBack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    body->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    body->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    body->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalTime)) {
    body->insert(pair<string, long>("TotalTime", *request->totalTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTraceAb"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/submitTraceAb"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTraceAbResponse(callApi(params, req, runtime));
}

SubmitTraceExtractResponse Alibabacloud_Mts20210728::Client::submitTraceExtract(shared_ptr<SubmitTraceExtractRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitTraceExtractWithOptions(request, headers, runtime);
}

SubmitTraceExtractResponse Alibabacloud_Mts20210728::Client::submitTraceExtractWithOptions(shared_ptr<SubmitTraceExtractRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callBack)) {
    body->insert(pair<string, string>("CallBack", *request->callBack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    body->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    body->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTraceExtract"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/submitTraceExtract"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTraceExtractResponse(callApi(params, req, runtime));
}

SubmitTracemuResponse Alibabacloud_Mts20210728::Client::submitTracemu(shared_ptr<SubmitTracemuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitTracemuWithOptions(request, headers, runtime);
}

SubmitTracemuResponse Alibabacloud_Mts20210728::Client::submitTracemuWithOptions(shared_ptr<SubmitTracemuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    body->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    body->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trace)) {
    body->insert(pair<string, string>("Trace", *request->trace));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTracemu"))},
    {"version", boost::any(string("2021-07-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/submitTraceM3u8"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTracemuResponse(callApi(params, req, runtime));
}

