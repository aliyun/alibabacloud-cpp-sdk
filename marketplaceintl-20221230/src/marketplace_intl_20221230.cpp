// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/marketplace_intl_20221230.hpp>
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

using namespace Alibabacloud_MarketplaceIntl20221230;

Alibabacloud_MarketplaceIntl20221230::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("marketplaceintl"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_MarketplaceIntl20221230::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeSellerInstancesResponse Alibabacloud_MarketplaceIntl20221230::Client::describeSellerInstancesWithOptions(shared_ptr<DescribeSellerInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    query->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    query->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userId)) {
    query->insert(pair<string, long>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSellerInstances"))},
    {"version", boost::any(string("2022-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeSellerInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeSellerInstancesResponse(execute(params, req, runtime));
  }
}

DescribeSellerInstancesResponse Alibabacloud_MarketplaceIntl20221230::Client::describeSellerInstances(shared_ptr<DescribeSellerInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSellerInstancesWithOptions(request, runtime);
}

NoticeInstanceUserResponse Alibabacloud_MarketplaceIntl20221230::Client::noticeInstanceUserWithOptions(shared_ptr<NoticeInstanceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceId)) {
    body->insert(pair<string, long>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noticeParam)) {
    body->insert(pair<string, string>("NoticeParam", *request->noticeParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeType)) {
    body->insert(pair<string, long>("NoticeType", *request->noticeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NoticeInstanceUser"))},
    {"version", boost::any(string("2022-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return NoticeInstanceUserResponse(callApi(params, req, runtime));
  }
  else {
    return NoticeInstanceUserResponse(execute(params, req, runtime));
  }
}

NoticeInstanceUserResponse Alibabacloud_MarketplaceIntl20221230::Client::noticeInstanceUser(shared_ptr<NoticeInstanceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return noticeInstanceUserWithOptions(request, runtime);
}

PushMeteringDataResponse Alibabacloud_MarketplaceIntl20221230::Client::pushMeteringDataWithOptions(shared_ptr<PushMeteringDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtCreate)) {
    body->insert(pair<string, string>("GmtCreate", *request->gmtCreate));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PushMeteringDataRequestMeteringData>>(request->meteringData)) {
    body->insert(pair<string, vector<PushMeteringDataRequestMeteringData>>("MeteringData", *request->meteringData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushMeteringData"))},
    {"version", boost::any(string("2022-12-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PushMeteringDataResponse(callApi(params, req, runtime));
  }
  else {
    return PushMeteringDataResponse(execute(params, req, runtime));
  }
}

PushMeteringDataResponse Alibabacloud_MarketplaceIntl20221230::Client::pushMeteringData(shared_ptr<PushMeteringDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushMeteringDataWithOptions(request, runtime);
}

