// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dplus_20201216.hpp>
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

using namespace Alibabacloud_Dplus20201216;

Alibabacloud_Dplus20201216::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dplus"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dplus20201216::Client::getEndpoint(shared_ptr<string> productId,
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

CreateImageAmazonTaskResponse Alibabacloud_Dplus20201216::Client::createImageAmazonTaskWithOptions(shared_ptr<CreateImageAmazonTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateImageAmazonTaskShrinkRequest> request = make_shared<CreateImageAmazonTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->imgUrlList)) {
    request->imgUrlListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->imgUrlList, make_shared<string>("ImgUrlList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->textList)) {
    request->textListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->textList, make_shared<string>("TextList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("Gif", *request->gif));
  query->insert(pair<string, string>("ImgUrlList", *request->imgUrlListShrink));
  query->insert(pair<string, string>("TemplateMode", *request->templateMode));
  query->insert(pair<string, string>("TextList", *request->textListShrink));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageAmazonTask"))},
    {"version", boost::any(string("2020-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateImageAmazonTaskResponse(callApi(params, req, runtime));
}

CreateImageAmazonTaskResponse Alibabacloud_Dplus20201216::Client::createImageAmazonTask(shared_ptr<CreateImageAmazonTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageAmazonTaskWithOptions(request, runtime);
}

GetTaskResultResponse Alibabacloud_Dplus20201216::Client::getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskResult"))},
    {"version", boost::any(string("2020-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskResultResponse(callApi(params, req, runtime));
}

GetTaskResultResponse Alibabacloud_Dplus20201216::Client::getTaskResult(shared_ptr<GetTaskResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskResultWithOptions(request, runtime);
}

GetTaskStatusResponse Alibabacloud_Dplus20201216::Client::getTaskStatusWithOptions(shared_ptr<GetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("TaskId", *request->taskId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskStatus"))},
    {"version", boost::any(string("2020-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskStatusResponse(callApi(params, req, runtime));
}

GetTaskStatusResponse Alibabacloud_Dplus20201216::Client::getTaskStatus(shared_ptr<GetTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskStatusWithOptions(request, runtime);
}

