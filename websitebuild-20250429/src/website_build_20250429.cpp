// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/website_build_20250429.hpp>
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

using namespace Alibabacloud_WebsiteBuild20250429;

Alibabacloud_WebsiteBuild20250429::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("websitebuild"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_WebsiteBuild20250429::Client::getEndpoint(shared_ptr<string> productId,
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

CreateLogoTaskResponse Alibabacloud_WebsiteBuild20250429::Client::createLogoTaskWithOptions(shared_ptr<CreateLogoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logoVersion)) {
    query->insert(pair<string, string>("LogoVersion", *request->logoVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->negativePrompt)) {
    query->insert(pair<string, string>("NegativePrompt", *request->negativePrompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    query->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    query->insert(pair<string, string>("Prompt", *request->prompt));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLogoTask"))},
    {"version", boost::any(string("2025-04-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLogoTaskResponse(callApi(params, req, runtime));
}

CreateLogoTaskResponse Alibabacloud_WebsiteBuild20250429::Client::createLogoTask(shared_ptr<CreateLogoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLogoTaskWithOptions(request, runtime);
}

GetCreateLogoTaskResponse Alibabacloud_WebsiteBuild20250429::Client::getCreateLogoTaskWithOptions(shared_ptr<GetCreateLogoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCreateLogoTask"))},
    {"version", boost::any(string("2025-04-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCreateLogoTaskResponse(callApi(params, req, runtime));
}

GetCreateLogoTaskResponse Alibabacloud_WebsiteBuild20250429::Client::getCreateLogoTask(shared_ptr<GetCreateLogoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCreateLogoTaskWithOptions(request, runtime);
}

OperateAppInstanceForPartnerResponse Alibabacloud_WebsiteBuild20250429::Client::operateAppInstanceForPartnerWithOptions(shared_ptr<OperateAppInstanceForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    query->insert(pair<string, string>("Extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateEvent)) {
    query->insert(pair<string, string>("OperateEvent", *request->operateEvent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateAppInstanceForPartner"))},
    {"version", boost::any(string("2025-04-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateAppInstanceForPartnerResponse(callApi(params, req, runtime));
}

OperateAppInstanceForPartnerResponse Alibabacloud_WebsiteBuild20250429::Client::operateAppInstanceForPartner(shared_ptr<OperateAppInstanceForPartnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateAppInstanceForPartnerWithOptions(request, runtime);
}

OperateAppServiceForPartnerResponse Alibabacloud_WebsiteBuild20250429::Client::operateAppServiceForPartnerWithOptions(shared_ptr<OperateAppServiceForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    query->insert(pair<string, string>("Extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateEvent)) {
    query->insert(pair<string, string>("OperateEvent", *request->operateEvent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceType)) {
    query->insert(pair<string, string>("ServiceType", *request->serviceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OperateAppServiceForPartner"))},
    {"version", boost::any(string("2025-04-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OperateAppServiceForPartnerResponse(callApi(params, req, runtime));
}

OperateAppServiceForPartnerResponse Alibabacloud_WebsiteBuild20250429::Client::operateAppServiceForPartner(shared_ptr<OperateAppServiceForPartnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return operateAppServiceForPartnerWithOptions(request, runtime);
}

SearchImageResponse Alibabacloud_WebsiteBuild20250429::Client::searchImageWithOptions(shared_ptr<SearchImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SearchImageShrinkRequest> request = make_shared<SearchImageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->colorHex)) {
    query->insert(pair<string, string>("ColorHex", *request->colorHex));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasPerson)) {
    query->insert(pair<string, bool>("HasPerson", *request->hasPerson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageCategory)) {
    query->insert(pair<string, string>("ImageCategory", *request->imageCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageRatio)) {
    query->insert(pair<string, string>("ImageRatio", *request->imageRatio));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxHeight)) {
    query->insert(pair<string, long>("MaxHeight", *request->maxHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxWidth)) {
    query->insert(pair<string, long>("MaxWidth", *request->maxWidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minHeight)) {
    query->insert(pair<string, long>("MinHeight", *request->minHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minWidth)) {
    query->insert(pair<string, long>("MinWidth", *request->minWidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    query->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchImage"))},
    {"version", boost::any(string("2025-04-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchImageResponse(callApi(params, req, runtime));
}

SearchImageResponse Alibabacloud_WebsiteBuild20250429::Client::searchImage(shared_ptr<SearchImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchImageWithOptions(request, runtime);
}

SyncAppInstanceForPartnerResponse Alibabacloud_WebsiteBuild20250429::Client::syncAppInstanceForPartnerWithOptions(shared_ptr<SyncAppInstanceForPartnerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SyncAppInstanceForPartnerShrinkRequest> request = make_shared<SyncAppInstanceForPartnerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SyncAppInstanceForPartnerRequestAppInstance>(tmpReq->appInstance)) {
    request->appInstanceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->appInstance, make_shared<string>("AppInstance"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceShrink)) {
    query->insert(pair<string, string>("AppInstance", *request->appInstanceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    query->insert(pair<string, string>("Operator_", *request->operator_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceBizId)) {
    query->insert(pair<string, string>("SourceBizId", *request->sourceBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncAppInstanceForPartner"))},
    {"version", boost::any(string("2025-04-29"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncAppInstanceForPartnerResponse(callApi(params, req, runtime));
}

SyncAppInstanceForPartnerResponse Alibabacloud_WebsiteBuild20250429::Client::syncAppInstanceForPartner(shared_ptr<SyncAppInstanceForPartnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncAppInstanceForPartnerWithOptions(request, runtime);
}

