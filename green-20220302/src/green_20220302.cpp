// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/green_20220302.hpp>
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

using namespace Alibabacloud_Green20220302;

Alibabacloud_Green20220302::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "green.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu", "green.aliyuncs.com"},
    {"cn-hongkong", "green.aliyuncs.com"},
    {"cn-huhehaote", "green.aliyuncs.com"},
    {"cn-qingdao", "green.aliyuncs.com"},
    {"cn-zhangjiakou", "green.aliyuncs.com"},
    {"eu-central-1", "green.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "green.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "green.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "green.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "green.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "green.aliyuncs.com"},
    {"cn-shanghai-finance-1", "green.aliyuncs.com"},
    {"cn-north-2-gov-1", "green.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("green"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Green20220302::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeFileModerationResultResponse Alibabacloud_Green20220302::Client::describeFileModerationResultWithOptions(shared_ptr<DescribeFileModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFileModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFileModerationResultResponse(callApi(params, req, runtime));
}

DescribeFileModerationResultResponse Alibabacloud_Green20220302::Client::describeFileModerationResult(shared_ptr<DescribeFileModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFileModerationResultWithOptions(request, runtime);
}

DescribeImageModerationResultResponse Alibabacloud_Green20220302::Client::describeImageModerationResultWithOptions(shared_ptr<DescribeImageModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImageModerationResultResponse(callApi(params, req, runtime));
}

DescribeImageModerationResultResponse Alibabacloud_Green20220302::Client::describeImageModerationResult(shared_ptr<DescribeImageModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageModerationResultWithOptions(request, runtime);
}

DescribeImageResultExtResponse Alibabacloud_Green20220302::Client::describeImageResultExtWithOptions(shared_ptr<DescribeImageResultExtRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->infoType)) {
    body->insert(pair<string, string>("InfoType", *request->infoType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    body->insert(pair<string, string>("ReqId", *request->reqId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeImageResultExt"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeImageResultExtResponse(callApi(params, req, runtime));
}

DescribeImageResultExtResponse Alibabacloud_Green20220302::Client::describeImageResultExt(shared_ptr<DescribeImageResultExtRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeImageResultExtWithOptions(request, runtime);
}

DescribeMultimodalModerationResultResponse Alibabacloud_Green20220302::Client::describeMultimodalModerationResultWithOptions(shared_ptr<DescribeMultimodalModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    query->insert(pair<string, string>("ReqId", *request->reqId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMultimodalModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMultimodalModerationResultResponse(callApi(params, req, runtime));
}

DescribeMultimodalModerationResultResponse Alibabacloud_Green20220302::Client::describeMultimodalModerationResult(shared_ptr<DescribeMultimodalModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMultimodalModerationResultWithOptions(request, runtime);
}

DescribeUploadTokenResponse Alibabacloud_Green20220302::Client::describeUploadTokenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUploadToken"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUploadTokenResponse(callApi(params, req, runtime));
}

DescribeUploadTokenResponse Alibabacloud_Green20220302::Client::describeUploadToken() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUploadTokenWithOptions(runtime);
}

DescribeUrlModerationResultResponse Alibabacloud_Green20220302::Client::describeUrlModerationResultWithOptions(shared_ptr<DescribeUrlModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    body->insert(pair<string, string>("ReqId", *request->reqId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUrlModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUrlModerationResultResponse(callApi(params, req, runtime));
}

DescribeUrlModerationResultResponse Alibabacloud_Green20220302::Client::describeUrlModerationResult(shared_ptr<DescribeUrlModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUrlModerationResultWithOptions(request, runtime);
}

FileModerationResponse Alibabacloud_Green20220302::Client::fileModerationWithOptions(shared_ptr<FileModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FileModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FileModerationResponse(callApi(params, req, runtime));
}

FileModerationResponse Alibabacloud_Green20220302::Client::fileModeration(shared_ptr<FileModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fileModerationWithOptions(request, runtime);
}

ImageAsyncModerationResponse Alibabacloud_Green20220302::Client::imageAsyncModerationWithOptions(shared_ptr<ImageAsyncModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageAsyncModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageAsyncModerationResponse(callApi(params, req, runtime));
}

ImageAsyncModerationResponse Alibabacloud_Green20220302::Client::imageAsyncModeration(shared_ptr<ImageAsyncModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return imageAsyncModerationWithOptions(request, runtime);
}

ImageBatchModerationResponse Alibabacloud_Green20220302::Client::imageBatchModerationWithOptions(shared_ptr<ImageBatchModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageBatchModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageBatchModerationResponse(callApi(params, req, runtime));
}

ImageBatchModerationResponse Alibabacloud_Green20220302::Client::imageBatchModeration(shared_ptr<ImageBatchModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return imageBatchModerationWithOptions(request, runtime);
}

ImageModerationResponse Alibabacloud_Green20220302::Client::imageModerationWithOptions(shared_ptr<ImageModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageModerationResponse(callApi(params, req, runtime));
}

ImageModerationResponse Alibabacloud_Green20220302::Client::imageModeration(shared_ptr<ImageModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return imageModerationWithOptions(request, runtime);
}

ManualCallbackResponse Alibabacloud_Green20220302::Client::manualCallbackWithOptions(shared_ptr<ManualCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    body->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checksum)) {
    body->insert(pair<string, string>("Checksum", *request->checksum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msg)) {
    body->insert(pair<string, string>("Msg", *request->msg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reqId)) {
    body->insert(pair<string, string>("ReqId", *request->reqId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManualCallback"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ManualCallbackResponse(callApi(params, req, runtime));
}

ManualCallbackResponse Alibabacloud_Green20220302::Client::manualCallback(shared_ptr<ManualCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return manualCallbackWithOptions(request, runtime);
}

ManualModerationResponse Alibabacloud_Green20220302::Client::manualModerationWithOptions(shared_ptr<ManualModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManualModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ManualModerationResponse(callApi(params, req, runtime));
}

ManualModerationResponse Alibabacloud_Green20220302::Client::manualModeration(shared_ptr<ManualModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return manualModerationWithOptions(request, runtime);
}

ManualModerationResultResponse Alibabacloud_Green20220302::Client::manualModerationResultWithOptions(shared_ptr<ManualModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ManualModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ManualModerationResultResponse(callApi(params, req, runtime));
}

ManualModerationResultResponse Alibabacloud_Green20220302::Client::manualModerationResult(shared_ptr<ManualModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return manualModerationResultWithOptions(request, runtime);
}

MultiModalGuardResponse Alibabacloud_Green20220302::Client::multiModalGuardWithOptions(shared_ptr<MultiModalGuardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MultiModalGuard"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MultiModalGuardResponse(callApi(params, req, runtime));
}

MultiModalGuardResponse Alibabacloud_Green20220302::Client::multiModalGuard(shared_ptr<MultiModalGuardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return multiModalGuardWithOptions(request, runtime);
}

MultimodalAsyncModerationResponse Alibabacloud_Green20220302::Client::multimodalAsyncModerationWithOptions(shared_ptr<MultimodalAsyncModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MultimodalAsyncModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MultimodalAsyncModerationResponse(callApi(params, req, runtime));
}

MultimodalAsyncModerationResponse Alibabacloud_Green20220302::Client::multimodalAsyncModeration(shared_ptr<MultimodalAsyncModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return multimodalAsyncModerationWithOptions(request, runtime);
}

TextModerationResponse Alibabacloud_Green20220302::Client::textModerationWithOptions(shared_ptr<TextModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextModerationResponse(callApi(params, req, runtime));
}

TextModerationResponse Alibabacloud_Green20220302::Client::textModeration(shared_ptr<TextModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return textModerationWithOptions(request, runtime);
}

TextModerationPlusResponse Alibabacloud_Green20220302::Client::textModerationPlusWithOptions(shared_ptr<TextModerationPlusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextModerationPlus"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextModerationPlusResponse(callApi(params, req, runtime));
}

TextModerationPlusResponse Alibabacloud_Green20220302::Client::textModerationPlus(shared_ptr<TextModerationPlusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return textModerationPlusWithOptions(request, runtime);
}

UrlAsyncModerationResponse Alibabacloud_Green20220302::Client::urlAsyncModerationWithOptions(shared_ptr<UrlAsyncModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    query->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UrlAsyncModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UrlAsyncModerationResponse(callApi(params, req, runtime));
}

UrlAsyncModerationResponse Alibabacloud_Green20220302::Client::urlAsyncModeration(shared_ptr<UrlAsyncModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return urlAsyncModerationWithOptions(request, runtime);
}

VideoModerationResponse Alibabacloud_Green20220302::Client::videoModerationWithOptions(shared_ptr<VideoModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoModerationResponse(callApi(params, req, runtime));
}

VideoModerationResponse Alibabacloud_Green20220302::Client::videoModeration(shared_ptr<VideoModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return videoModerationWithOptions(request, runtime);
}

VideoModerationCancelResponse Alibabacloud_Green20220302::Client::videoModerationCancelWithOptions(shared_ptr<VideoModerationCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoModerationCancel"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoModerationCancelResponse(callApi(params, req, runtime));
}

VideoModerationCancelResponse Alibabacloud_Green20220302::Client::videoModerationCancel(shared_ptr<VideoModerationCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return videoModerationCancelWithOptions(request, runtime);
}

VideoModerationResultResponse Alibabacloud_Green20220302::Client::videoModerationResultWithOptions(shared_ptr<VideoModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoModerationResultResponse(callApi(params, req, runtime));
}

VideoModerationResultResponse Alibabacloud_Green20220302::Client::videoModerationResult(shared_ptr<VideoModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return videoModerationResultWithOptions(request, runtime);
}

VoiceModerationResponse Alibabacloud_Green20220302::Client::voiceModerationWithOptions(shared_ptr<VoiceModerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceModeration"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceModerationResponse(callApi(params, req, runtime));
}

VoiceModerationResponse Alibabacloud_Green20220302::Client::voiceModeration(shared_ptr<VoiceModerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceModerationWithOptions(request, runtime);
}

VoiceModerationCancelResponse Alibabacloud_Green20220302::Client::voiceModerationCancelWithOptions(shared_ptr<VoiceModerationCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceModerationCancel"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceModerationCancelResponse(callApi(params, req, runtime));
}

VoiceModerationCancelResponse Alibabacloud_Green20220302::Client::voiceModerationCancel(shared_ptr<VoiceModerationCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceModerationCancelWithOptions(request, runtime);
}

VoiceModerationResultResponse Alibabacloud_Green20220302::Client::voiceModerationResultWithOptions(shared_ptr<VoiceModerationResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->service)) {
    body->insert(pair<string, string>("Service", *request->service));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    body->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceModerationResult"))},
    {"version", boost::any(string("2022-03-02"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceModerationResultResponse(callApi(params, req, runtime));
}

VoiceModerationResultResponse Alibabacloud_Green20220302::Client::voiceModerationResult(shared_ptr<VoiceModerationResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return voiceModerationResultWithOptions(request, runtime);
}

