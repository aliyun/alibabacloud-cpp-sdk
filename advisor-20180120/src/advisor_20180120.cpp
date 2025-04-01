// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/advisor_20180120.hpp>
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

using namespace Alibabacloud_Advisor20180120;

Alibabacloud_Advisor20180120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("advisor"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Advisor20180120::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeAdvicesResponse Alibabacloud_Advisor20180120::Client::describeAdvicesWithOptions(shared_ptr<DescribeAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adviceId)) {
    query->insert(pair<string, long>("AdviceId", *request->adviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkPlanId)) {
    query->insert(pair<string, long>("CheckPlanId", *request->checkPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->excludeAdviceId)) {
    query->insert(pair<string, long>("ExcludeAdviceId", *request->excludeAdviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAdvicesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAdvicesResponse(execute(params, req, runtime));
  }
}

DescribeAdvicesResponse Alibabacloud_Advisor20180120::Client::describeAdvices(shared_ptr<DescribeAdvicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvicesWithOptions(request, runtime);
}

DescribeAdvicesFlatPageResponse Alibabacloud_Advisor20180120::Client::describeAdvicesFlatPageWithOptions(shared_ptr<DescribeAdvicesFlatPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adviceId)) {
    query->insert(pair<string, long>("AdviceId", *request->adviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvicesFlatPage"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAdvicesFlatPageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAdvicesFlatPageResponse(execute(params, req, runtime));
  }
}

DescribeAdvicesFlatPageResponse Alibabacloud_Advisor20180120::Client::describeAdvicesFlatPage(shared_ptr<DescribeAdvicesFlatPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvicesFlatPageWithOptions(request, runtime);
}

DescribeAdvicesPageResponse Alibabacloud_Advisor20180120::Client::describeAdvicesPageWithOptions(shared_ptr<DescribeAdvicesPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->adviceId)) {
    query->insert(pair<string, long>("AdviceId", *request->adviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkPlanId)) {
    query->insert(pair<string, long>("CheckPlanId", *request->checkPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvicesPage"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAdvicesPageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAdvicesPageResponse(execute(params, req, runtime));
  }
}

DescribeAdvicesPageResponse Alibabacloud_Advisor20180120::Client::describeAdvicesPage(shared_ptr<DescribeAdvicesPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvicesPageWithOptions(request, runtime);
}

DescribeAdvisorChecksResponse Alibabacloud_Advisor20180120::Client::describeAdvisorChecksWithOptions(shared_ptr<DescribeAdvisorChecksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvisorChecks"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAdvisorChecksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAdvisorChecksResponse(execute(params, req, runtime));
  }
}

DescribeAdvisorChecksResponse Alibabacloud_Advisor20180120::Client::describeAdvisorChecks(shared_ptr<DescribeAdvisorChecksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvisorChecksWithOptions(request, runtime);
}

DescribeAdvisorChecksFoPagesResponse Alibabacloud_Advisor20180120::Client::describeAdvisorChecksFoPagesWithOptions(shared_ptr<DescribeAdvisorChecksFoPagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeAdvisorChecksFoPagesShrinkRequest> request = make_shared<DescribeAdvisorChecksFoPagesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->checkTypes)) {
    request->checkTypesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkTypes, make_shared<string>("CheckTypes"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assumeAliyunId)) {
    query->insert(pair<string, long>("AssumeAliyunId", *request->assumeAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCategory)) {
    query->insert(pair<string, string>("BizCategory", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkTypesShrink)) {
    query->insert(pair<string, string>("CheckTypes", *request->checkTypesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvisorChecksFoPages"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAdvisorChecksFoPagesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAdvisorChecksFoPagesResponse(execute(params, req, runtime));
  }
}

DescribeAdvisorChecksFoPagesResponse Alibabacloud_Advisor20180120::Client::describeAdvisorChecksFoPages(shared_ptr<DescribeAdvisorChecksFoPagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvisorChecksFoPagesWithOptions(request, runtime);
}

DescribeAdvisorResourcesResponse Alibabacloud_Advisor20180120::Client::describeAdvisorResourcesWithOptions(shared_ptr<DescribeAdvisorResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvisorResources"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAdvisorResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAdvisorResourcesResponse(execute(params, req, runtime));
  }
}

DescribeAdvisorResourcesResponse Alibabacloud_Advisor20180120::Client::describeAdvisorResources(shared_ptr<DescribeAdvisorResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvisorResourcesWithOptions(request, runtime);
}

DescribeCostCheckAdvicesResponse Alibabacloud_Advisor20180120::Client::describeCostCheckAdvicesWithOptions(shared_ptr<DescribeCostCheckAdvicesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCostCheckAdvicesShrinkRequest> request = make_shared<DescribeCostCheckAdvicesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->assumeAliyunIdList)) {
    request->assumeAliyunIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assumeAliyunIdList, make_shared<string>("AssumeAliyunIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceIds)) {
    request->resourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIds, make_shared<string>("ResourceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKeys)) {
    request->tagKeysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKeys, make_shared<string>("TagKeys"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeCostCheckAdvicesRequestTagList>>(tmpReq->tagList)) {
    request->tagListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagList, make_shared<string>("TagList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagValues)) {
    request->tagValuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagValues, make_shared<string>("TagValues"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assumeAliyunIdListShrink)) {
    query->insert(pair<string, string>("AssumeAliyunIdList", *request->assumeAliyunIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeysShrink)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagListShrink)) {
    query->insert(pair<string, string>("TagList", *request->tagListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValuesShrink)) {
    query->insert(pair<string, string>("TagValues", *request->tagValuesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCostCheckAdvices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCostCheckAdvicesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCostCheckAdvicesResponse(execute(params, req, runtime));
  }
}

DescribeCostCheckAdvicesResponse Alibabacloud_Advisor20180120::Client::describeCostCheckAdvices(shared_ptr<DescribeCostCheckAdvicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCostCheckAdvicesWithOptions(request, runtime);
}

DescribeCostCheckResultsResponse Alibabacloud_Advisor20180120::Client::describeCostCheckResultsWithOptions(shared_ptr<DescribeCostCheckResultsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCostCheckResultsShrinkRequest> request = make_shared<DescribeCostCheckResultsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->assumeAliyunIdList)) {
    request->assumeAliyunIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assumeAliyunIdList, make_shared<string>("AssumeAliyunIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->checkIds)) {
    request->checkIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkIds, make_shared<string>("CheckIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regionIds)) {
    request->regionIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regionIds, make_shared<string>("RegionIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceGroupIdList)) {
    request->resourceGroupIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceGroupIdList, make_shared<string>("ResourceGroupIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceIds)) {
    request->resourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIds, make_shared<string>("ResourceIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKeys)) {
    request->tagKeysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKeys, make_shared<string>("TagKeys"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeCostCheckResultsRequestTagList>>(tmpReq->tagList)) {
    request->tagListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagList, make_shared<string>("TagList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagValues)) {
    request->tagValuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagValues, make_shared<string>("TagValues"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assumeAliyunIdListShrink)) {
    query->insert(pair<string, string>("AssumeAliyunIdList", *request->assumeAliyunIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIdsShrink)) {
    query->insert(pair<string, string>("CheckIds", *request->checkIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupBy)) {
    query->insert(pair<string, string>("GroupBy", *request->groupBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionIdsShrink)) {
    query->insert(pair<string, string>("RegionIds", *request->regionIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupIdListShrink)) {
    query->insert(pair<string, string>("ResourceGroupIdList", *request->resourceGroupIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->severity)) {
    query->insert(pair<string, long>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeysShrink)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagListShrink)) {
    query->insert(pair<string, string>("TagList", *request->tagListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagValuesShrink)) {
    query->insert(pair<string, string>("TagValues", *request->tagValuesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCostCheckResults"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCostCheckResultsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCostCheckResultsResponse(execute(params, req, runtime));
  }
}

DescribeCostCheckResultsResponse Alibabacloud_Advisor20180120::Client::describeCostCheckResults(shared_ptr<DescribeCostCheckResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCostCheckResultsWithOptions(request, runtime);
}

DescribeCostOptimizationOverviewResponse Alibabacloud_Advisor20180120::Client::describeCostOptimizationOverviewWithOptions(shared_ptr<DescribeCostOptimizationOverviewRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCostOptimizationOverviewShrinkRequest> request = make_shared<DescribeCostOptimizationOverviewShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->assumeAliyunIdList)) {
    request->assumeAliyunIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assumeAliyunIdList, make_shared<string>("AssumeAliyunIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assumeAliyunId)) {
    query->insert(pair<string, long>("AssumeAliyunId", *request->assumeAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->assumeAliyunIdListShrink)) {
    query->insert(pair<string, string>("AssumeAliyunIdList", *request->assumeAliyunIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCostOptimizationOverview"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCostOptimizationOverviewResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCostOptimizationOverviewResponse(execute(params, req, runtime));
  }
}

DescribeCostOptimizationOverviewResponse Alibabacloud_Advisor20180120::Client::describeCostOptimizationOverview(shared_ptr<DescribeCostOptimizationOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCostOptimizationOverviewWithOptions(request, runtime);
}

GetHistoryAdvicesResponse Alibabacloud_Advisor20180120::Client::getHistoryAdvicesWithOptions(shared_ptr<GetHistoryAdvicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reverse)) {
    query->insert(pair<string, bool>("Reverse", *request->reverse));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHistoryAdvices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHistoryAdvicesResponse(callApi(params, req, runtime));
  }
  else {
    return GetHistoryAdvicesResponse(execute(params, req, runtime));
  }
}

GetHistoryAdvicesResponse Alibabacloud_Advisor20180120::Client::getHistoryAdvices(shared_ptr<GetHistoryAdvicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoryAdvicesWithOptions(request, runtime);
}

GetInspectProgressResponse Alibabacloud_Advisor20180120::Client::getInspectProgressWithOptions(shared_ptr<GetInspectProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assumeAliyunId)) {
    query->insert(pair<string, long>("AssumeAliyunId", *request->assumeAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    query->insert(pair<string, long>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInspectProgress"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetInspectProgressResponse(callApi(params, req, runtime));
  }
  else {
    return GetInspectProgressResponse(execute(params, req, runtime));
  }
}

GetInspectProgressResponse Alibabacloud_Advisor20180120::Client::getInspectProgress(shared_ptr<GetInspectProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInspectProgressWithOptions(request, runtime);
}

GetProductListResponse Alibabacloud_Advisor20180120::Client::getProductListWithOptions(shared_ptr<GetProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetProductListResponse(callApi(params, req, runtime));
  }
  else {
    return GetProductListResponse(execute(params, req, runtime));
  }
}

GetProductListResponse Alibabacloud_Advisor20180120::Client::getProductList(shared_ptr<GetProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductListWithOptions(request, runtime);
}

GetTaskStatusByIdResponse Alibabacloud_Advisor20180120::Client::getTaskStatusByIdWithOptions(shared_ptr<GetTaskStatusByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskStatusById"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTaskStatusByIdResponse(callApi(params, req, runtime));
  }
  else {
    return GetTaskStatusByIdResponse(execute(params, req, runtime));
  }
}

GetTaskStatusByIdResponse Alibabacloud_Advisor20180120::Client::getTaskStatusById(shared_ptr<GetTaskStatusByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskStatusByIdWithOptions(request, runtime);
}

RefreshAdvisorCheckResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorCheckWithOptions(shared_ptr<RefreshAdvisorCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefreshAdvisorCheckShrinkRequest> request = make_shared<RefreshAdvisorCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RefreshAdvisorCheckRequestResourceDimensionList>>(tmpReq->resourceDimensionList)) {
    request->resourceDimensionListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceDimensionList, make_shared<string>("ResourceDimensionList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->assumeAliyunId)) {
    query->insert(pair<string, long>("AssumeAliyunId", *request->assumeAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkPlanId)) {
    query->insert(pair<string, long>("CheckPlanId", *request->checkPlanId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceDimensionListShrink)) {
    body->insert(pair<string, string>("ResourceDimensionList", *request->resourceDimensionListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshAdvisorCheck"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefreshAdvisorCheckResponse(callApi(params, req, runtime));
  }
  else {
    return RefreshAdvisorCheckResponse(execute(params, req, runtime));
  }
}

RefreshAdvisorCheckResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorCheck(shared_ptr<RefreshAdvisorCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshAdvisorCheckWithOptions(request, runtime);
}

RefreshAdvisorCostCheckResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorCostCheckWithOptions(shared_ptr<RefreshAdvisorCostCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RefreshAdvisorCostCheckShrinkRequest> request = make_shared<RefreshAdvisorCostCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->assumeAliyunIdList)) {
    request->assumeAliyunIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assumeAliyunIdList, make_shared<string>("AssumeAliyunIdList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->checkIds)) {
    request->checkIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->checkIds, make_shared<string>("CheckIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->resourceIds)) {
    request->resourceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resourceIds, make_shared<string>("ResourceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assumeAliyunIdListShrink)) {
    query->insert(pair<string, string>("AssumeAliyunIdList", *request->assumeAliyunIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIdsShrink)) {
    query->insert(pair<string, string>("CheckIds", *request->checkIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->refreshResource)) {
    query->insert(pair<string, bool>("RefreshResource", *request->refreshResource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIdsShrink)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshAdvisorCostCheck"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefreshAdvisorCostCheckResponse(callApi(params, req, runtime));
  }
  else {
    return RefreshAdvisorCostCheckResponse(execute(params, req, runtime));
  }
}

RefreshAdvisorCostCheckResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorCostCheck(shared_ptr<RefreshAdvisorCostCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshAdvisorCostCheckWithOptions(request, runtime);
}

RefreshAdvisorResourceResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorResourceWithOptions(shared_ptr<RefreshAdvisorResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshAdvisorResource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefreshAdvisorResourceResponse(callApi(params, req, runtime));
  }
  else {
    return RefreshAdvisorResourceResponse(execute(params, req, runtime));
  }
}

RefreshAdvisorResourceResponse Alibabacloud_Advisor20180120::Client::refreshAdvisorResource(shared_ptr<RefreshAdvisorResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshAdvisorResourceWithOptions(request, runtime);
}

ReportBizAlertInfoResponse Alibabacloud_Advisor20180120::Client::reportBizAlertInfoWithOptions(shared_ptr<ReportBizAlertInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReportBizAlertInfoShrinkRequest> request = make_shared<ReportBizAlertInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->alertUid)) {
    request->alertUidShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->alertUid, make_shared<string>("AlertUid"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertDescription)) {
    query->insert(pair<string, string>("AlertDescription", *request->alertDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertDetail)) {
    query->insert(pair<string, string>("AlertDetail", *request->alertDetail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertGrade)) {
    query->insert(pair<string, string>("AlertGrade", *request->alertGrade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertLabels)) {
    query->insert(pair<string, string>("AlertLabels", *request->alertLabels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertScene)) {
    query->insert(pair<string, string>("AlertScene", *request->alertScene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertToken)) {
    query->insert(pair<string, string>("AlertToken", *request->alertToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertUidShrink)) {
    query->insert(pair<string, string>("AlertUid", *request->alertUidShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReportBizAlertInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ReportBizAlertInfoResponse(callApi(params, req, runtime));
  }
  else {
    return ReportBizAlertInfoResponse(execute(params, req, runtime));
  }
}

ReportBizAlertInfoResponse Alibabacloud_Advisor20180120::Client::reportBizAlertInfo(shared_ptr<ReportBizAlertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reportBizAlertInfoWithOptions(request, runtime);
}

