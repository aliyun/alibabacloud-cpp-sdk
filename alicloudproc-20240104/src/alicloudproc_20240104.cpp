// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alicloudproc_20240104.hpp>
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

using namespace Alibabacloud_Alicloudproc20240104;

Alibabacloud_Alicloudproc20240104::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("alicloudproc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Alicloudproc20240104::Client::getEndpoint(shared_ptr<string> productId,
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

CreateSourcingProjectResponse Alibabacloud_Alicloudproc20240104::Client::createSourcingProjectWithOptions(shared_ptr<CreateSourcingProjectRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSourcingProjectShrinkRequest> request = make_shared<CreateSourcingProjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateSourcingProjectRequestAddress>(tmpReq->address)) {
    request->addressShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->address, make_shared<string>("Address"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSourcingProjectRequestCompany>(tmpReq->company)) {
    request->companyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->company, make_shared<string>("Company"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSourcingProjectRequestContact>(tmpReq->contact)) {
    request->contactShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contact, make_shared<string>("Contact"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extendInfo)) {
    request->extendInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extendInfo, make_shared<string>("ExtendInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateSourcingProjectRequestSubjects>>(tmpReq->subjects)) {
    request->subjectsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subjects, make_shared<string>("Subjects"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressShrink)) {
    query->insert(pair<string, string>("Address", *request->addressShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizNo)) {
    query->insert(pair<string, string>("BizNo", *request->bizNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->companyShrink)) {
    query->insert(pair<string, string>("Company", *request->companyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactShrink)) {
    query->insert(pair<string, string>("Contact", *request->contactShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createTime)) {
    query->insert(pair<string, string>("CreateTime", *request->createTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    query->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendInfoShrink)) {
    query->insert(pair<string, string>("ExtendInfo", *request->extendInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    query->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subBizType)) {
    query->insert(pair<string, string>("SubBizType", *request->subBizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subjectsShrink)) {
    query->insert(pair<string, string>("Subjects", *request->subjectsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSourcingProject"))},
    {"version", boost::any(string("2024-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/srm/lite/sourcing/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSourcingProjectResponse(callApi(params, req, runtime));
}

CreateSourcingProjectResponse Alibabacloud_Alicloudproc20240104::Client::createSourcingProject(shared_ptr<CreateSourcingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSourcingProjectWithOptions(request, headers, runtime);
}

UpdateSourcingProjectResponse Alibabacloud_Alicloudproc20240104::Client::updateSourcingProjectWithOptions(shared_ptr<UpdateSourcingProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateTime)) {
    query->insert(pair<string, string>("UpdateTime", *request->updateTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSourcingProject"))},
    {"version", boost::any(string("2024-01-04"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/srm/lite/sourcing/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSourcingProjectResponse(callApi(params, req, runtime));
}

UpdateSourcingProjectResponse Alibabacloud_Alicloudproc20240104::Client::updateSourcingProject(shared_ptr<UpdateSourcingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateSourcingProjectWithOptions(request, headers, runtime);
}

