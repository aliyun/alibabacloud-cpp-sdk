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

QueryTraceMuResponse Alibabacloud_Mts20210728::Client::queryTraceMu(shared_ptr<QueryTraceMuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryTraceMuWithOptions(request, headers, runtime);
}

QueryTraceMuResponse Alibabacloud_Mts20210728::Client::queryTraceMuWithOptions(shared_ptr<QueryTraceMuRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    (*body)["CreateTimeEnd"] = *request->createTimeEnd;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    (*body)["CreateTimeStart"] = *request->createTimeStart;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    (*body)["JobId"] = *request->jobId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    (*body)["Level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->messageId)) {
    (*body)["MessageId"] = *request->messageId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return QueryTraceMuResponse(doROARequest(make_shared<string>("QueryTraceMu"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/queryTraceM3u8")), make_shared<string>("json"), req, runtime));
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
    (*body)["Input"] = *request->input;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    (*body)["Level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    (*body)["Message"] = *request->message;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    (*body)["Output"] = *request->output;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return SubmitImageCopyrightResponse(doROARequest(make_shared<string>("SubmitImageCopyright"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/submitImageCopyright")), make_shared<string>("json"), req, runtime));
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
    (*body)["CreateTimeEnd"] = *request->createTimeEnd;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    (*body)["CreateTimeStart"] = *request->createTimeStart;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    (*body)["JobId"] = *request->jobId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return QueryImageCopyrightResponse(doROARequest(make_shared<string>("QueryImageCopyright"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/queryImageCopyright")), make_shared<string>("json"), req, runtime));
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
    (*body)["CreateTimeEnd"] = *request->createTimeEnd;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    (*body)["CreateTimeStart"] = *request->createTimeStart;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    (*body)["JobId"] = *request->jobId;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    (*body)["Level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    (*body)["PageNumber"] = *request->pageNumber;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    (*body)["PageSize"] = *request->pageSize;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return QueryCopyrightResponse(doROARequest(make_shared<string>("QueryCopyright"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/queryCopyrightJob")), make_shared<string>("json"), req, runtime));
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
    (*body)["MediaId"] = *request->mediaId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    (*body)["Output"] = *request->output;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trace)) {
    (*body)["Trace"] = *request->trace;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return SubmitTracemuResponse(doROARequest(make_shared<string>("SubmitTracemu"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/submitTraceM3u8")), make_shared<string>("json"), req, runtime));
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
    (*body)["JobId"] = *request->jobId;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    (*body)["MediaId"] = *request->mediaId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return QueryTraceAbResponse(doROARequest(make_shared<string>("QueryTraceAb"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/queryTraceAb")), make_shared<string>("json"), req, runtime));
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
    (*body)["CallBack"] = *request->callBack;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    (*body)["Input"] = *request->input;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    (*body)["Level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    (*body)["Output"] = *request->output;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["UserData"] = *request->userData;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return SubmitTraceAbResponse(doROARequest(make_shared<string>("SubmitTraceAb"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/submitTraceAb")), make_shared<string>("json"), req, runtime));
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
    (*body)["CallBack"] = *request->callBack;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["Description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    (*body)["Input"] = *request->input;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    (*body)["Level"] = *request->level;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    (*body)["Message"] = *request->message;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    (*body)["Output"] = *request->output;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    (*body)["UserData"] = *request->userData;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  return SubmitCopyrightJobResponse(doROARequest(make_shared<string>("SubmitCopyrightJob"), make_shared<string>("2021-07-28"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/submitCopyrightJob")), make_shared<string>("json"), req, runtime));
}

