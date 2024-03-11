// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/vdc_20201214.hpp>
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

using namespace Alibabacloud_Vdc20201214;

Alibabacloud_Vdc20201214::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("vdc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Vdc20201214::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeAppConfigResponse Alibabacloud_Vdc20201214::Client::describeAppConfigWithOptions(shared_ptr<DescribeAppConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppConfig"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/config/describeAppConfig"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppConfigResponse(callApi(params, req, runtime));
}

DescribeAppConfigResponse Alibabacloud_Vdc20201214::Client::describeAppConfig(shared_ptr<DescribeAppConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeAppConfigWithOptions(request, headers, runtime);
}

DescribeCallResponse Alibabacloud_Vdc20201214::Client::describeCallWithOptions(shared_ptr<DescribeCallRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extDataType)) {
    query->insert(pair<string, string>("ExtDataType", *request->extDataType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryExpInfo)) {
    query->insert(pair<string, bool>("QueryExpInfo", *request->queryExpInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCall"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeCall"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallResponse(callApi(params, req, runtime));
}

DescribeCallResponse Alibabacloud_Vdc20201214::Client::describeCall(shared_ptr<DescribeCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCallWithOptions(request, headers, runtime);
}

DescribeCallInfoResponse Alibabacloud_Vdc20201214::Client::describeCallInfoWithOptions(shared_ptr<DescribeCallInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCallInfo"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeCallInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallInfoResponse(callApi(params, req, runtime));
}

DescribeCallInfoResponse Alibabacloud_Vdc20201214::Client::describeCallInfo(shared_ptr<DescribeCallInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCallInfoWithOptions(request, headers, runtime);
}

DescribeCallListResponse Alibabacloud_Vdc20201214::Client::describeCallListWithOptions(shared_ptr<DescribeCallListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callStatus)) {
    query->insert(pair<string, string>("CallStatus", *request->callStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryMode)) {
    query->insert(pair<string, string>("QueryMode", *request->queryMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCallList"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeCallList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallListResponse(callApi(params, req, runtime));
}

DescribeCallListResponse Alibabacloud_Vdc20201214::Client::describeCallList(shared_ptr<DescribeCallListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCallListWithOptions(request, headers, runtime);
}

DescribeCallUserExpResponse Alibabacloud_Vdc20201214::Client::describeCallUserExpWithOptions(shared_ptr<DescribeCallUserExpRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCallUserExp"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeCallUserExp"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallUserExpResponse(callApi(params, req, runtime));
}

DescribeCallUserExpResponse Alibabacloud_Vdc20201214::Client::describeCallUserExp(shared_ptr<DescribeCallUserExpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCallUserExpWithOptions(request, headers, runtime);
}

DescribeCallUserListResponse Alibabacloud_Vdc20201214::Client::describeCallUserListWithOptions(shared_ptr<DescribeCallUserListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extDataType)) {
    query->insert(pair<string, string>("ExtDataType", *request->extDataType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryExpInfo)) {
    query->insert(pair<string, bool>("QueryExpInfo", *request->queryExpInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleType)) {
    query->insert(pair<string, string>("RoleType", *request->roleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCallUserList"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeCallUserList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallUserListResponse(callApi(params, req, runtime));
}

DescribeCallUserListResponse Alibabacloud_Vdc20201214::Client::describeCallUserList(shared_ptr<DescribeCallUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeCallUserListWithOptions(request, headers, runtime);
}

DescribeChannelAreaDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeChannelAreaDistributionStatDataWithOptions(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentArea)) {
    query->insert(pair<string, string>("ParentArea", *request->parentArea));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelAreaDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/channel/describeChannelAreaDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelAreaDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeChannelAreaDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeChannelAreaDistributionStatData(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChannelAreaDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeChannelDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeChannelDistributionStatDataWithOptions(shared_ptr<DescribeChannelDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/channel/describeChannelDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeChannelDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeChannelDistributionStatData(shared_ptr<DescribeChannelDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChannelDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeChannelJoinInfoResponse Alibabacloud_Vdc20201214::Client::describeChannelJoinInfoWithOptions(shared_ptr<DescribeChannelJoinInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelJoinInfo"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/channel/describeChannelJoinInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelJoinInfoResponse(callApi(params, req, runtime));
}

DescribeChannelJoinInfoResponse Alibabacloud_Vdc20201214::Client::describeChannelJoinInfo(shared_ptr<DescribeChannelJoinInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChannelJoinInfoWithOptions(request, headers, runtime);
}

DescribeChannelOverallDataResponse Alibabacloud_Vdc20201214::Client::describeChannelOverallDataWithOptions(shared_ptr<DescribeChannelOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelOverallData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/channel/describeChannelOverallData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelOverallDataResponse(callApi(params, req, runtime));
}

DescribeChannelOverallDataResponse Alibabacloud_Vdc20201214::Client::describeChannelOverallData(shared_ptr<DescribeChannelOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChannelOverallDataWithOptions(request, headers, runtime);
}

DescribeChannelTopPubUserListResponse Alibabacloud_Vdc20201214::Client::describeChannelTopPubUserListWithOptions(shared_ptr<DescribeChannelTopPubUserListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelTopPubUserList"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/channel/describeChannelTopPubUserList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelTopPubUserListResponse(callApi(params, req, runtime));
}

DescribeChannelTopPubUserListResponse Alibabacloud_Vdc20201214::Client::describeChannelTopPubUserList(shared_ptr<DescribeChannelTopPubUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChannelTopPubUserListWithOptions(request, headers, runtime);
}

DescribeChannelUserMetricsResponse Alibabacloud_Vdc20201214::Client::describeChannelUserMetricsWithOptions(shared_ptr<DescribeChannelUserMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelUserMetrics"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/channel/describeChannelUserMetrics"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelUserMetricsResponse(callApi(params, req, runtime));
}

DescribeChannelUserMetricsResponse Alibabacloud_Vdc20201214::Client::describeChannelUserMetrics(shared_ptr<DescribeChannelUserMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeChannelUserMetricsWithOptions(request, headers, runtime);
}

DescribeEndPointEventListResponse Alibabacloud_Vdc20201214::Client::describeEndPointEventListWithOptions(shared_ptr<DescribeEndPointEventListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdList)) {
    query->insert(pair<string, string>("UserIdList", *request->userIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndPointEventList"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeEndPointEventList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndPointEventListResponse(callApi(params, req, runtime));
}

DescribeEndPointEventListResponse Alibabacloud_Vdc20201214::Client::describeEndPointEventList(shared_ptr<DescribeEndPointEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEndPointEventListWithOptions(request, headers, runtime);
}

DescribeEndPointMetricDataResponse Alibabacloud_Vdc20201214::Client::describeEndPointMetricDataWithOptions(shared_ptr<DescribeEndPointMetricDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metrics)) {
    query->insert(pair<string, string>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubCallIdList)) {
    query->insert(pair<string, string>("PubCallIdList", *request->pubCallIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubUserId)) {
    query->insert(pair<string, string>("PubUserId", *request->pubUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndPointMetricData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeEndPointMetricData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndPointMetricDataResponse(callApi(params, req, runtime));
}

DescribeEndPointMetricDataResponse Alibabacloud_Vdc20201214::Client::describeEndPointMetricData(shared_ptr<DescribeEndPointMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeEndPointMetricDataWithOptions(request, headers, runtime);
}

DescribeFaultDiagnosisFactorDistributionStatResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisFactorDistributionStatWithOptions(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisFactorDistributionStat"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/diagnosis/describeFaultDiagnosisFactorDistributionStat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisFactorDistributionStatResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisFactorDistributionStatResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisFactorDistributionStat(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFaultDiagnosisFactorDistributionStatWithOptions(request, headers, runtime);
}

DescribeFaultDiagnosisOverallDataResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisOverallDataWithOptions(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisOverallData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/diagnosis/describeFaultDiagnosisOverallData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisOverallDataResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisOverallDataResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisOverallData(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFaultDiagnosisOverallDataWithOptions(request, headers, runtime);
}

DescribeFaultDiagnosisUserDetailResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisUserDetailWithOptions(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faultType)) {
    query->insert(pair<string, string>("FaultType", *request->faultType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryCallUserInfo)) {
    query->insert(pair<string, bool>("QueryCallUserInfo", *request->queryCallUserInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisUserDetail"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/diagnosis/describeFaultDiagnosisUserDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisUserDetailResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisUserDetailResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisUserDetail(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFaultDiagnosisUserDetailWithOptions(request, headers, runtime);
}

DescribeFaultDiagnosisUserListResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisUserListWithOptions(shared_ptr<DescribeFaultDiagnosisUserListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faultTypes)) {
    query->insert(pair<string, string>("FaultTypes", *request->faultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisUserList"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/diagnosis/describeFaultDiagnosisUserList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisUserListResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisUserListResponse Alibabacloud_Vdc20201214::Client::describeFaultDiagnosisUserList(shared_ptr<DescribeFaultDiagnosisUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeFaultDiagnosisUserListWithOptions(request, headers, runtime);
}

DescribeIceDurPeriodByDaySubTypeResponse Alibabacloud_Vdc20201214::Client::describeIceDurPeriodByDaySubTypeWithOptions(shared_ptr<DescribeIceDurPeriodByDaySubTypeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIceDurPeriodByDaySubType"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/ice/describeIceDurPeriodByDaySubType"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIceDurPeriodByDaySubTypeResponse(callApi(params, req, runtime));
}

DescribeIceDurPeriodByDaySubTypeResponse Alibabacloud_Vdc20201214::Client::describeIceDurPeriodByDaySubType(shared_ptr<DescribeIceDurPeriodByDaySubTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeIceDurPeriodByDaySubTypeWithOptions(request, headers, runtime);
}

DescribeIceDurSummaryOverviewResponse Alibabacloud_Vdc20201214::Client::describeIceDurSummaryOverviewWithOptions(shared_ptr<DescribeIceDurSummaryOverviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->curTs)) {
    query->insert(pair<string, long>("CurTs", *request->curTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeZone)) {
    query->insert(pair<string, string>("TimeZone", *request->timeZone));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIceDurSummaryOverview"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/ice/describeIceDurSummaryOverview"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIceDurSummaryOverviewResponse(callApi(params, req, runtime));
}

DescribeIceDurSummaryOverviewResponse Alibabacloud_Vdc20201214::Client::describeIceDurSummaryOverview(shared_ptr<DescribeIceDurSummaryOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeIceDurSummaryOverviewWithOptions(request, headers, runtime);
}

DescribePubUserListBySubUserResponse Alibabacloud_Vdc20201214::Client::describePubUserListBySubUserWithOptions(shared_ptr<DescribePubUserListBySubUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePubUserListBySubUser"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describePubUserListBySubUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePubUserListBySubUserResponse(callApi(params, req, runtime));
}

DescribePubUserListBySubUserResponse Alibabacloud_Vdc20201214::Client::describePubUserListBySubUser(shared_ptr<DescribePubUserListBySubUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describePubUserListBySubUserWithOptions(request, headers, runtime);
}

DescribeQoeMetricDataResponse Alibabacloud_Vdc20201214::Client::describeQoeMetricDataWithOptions(shared_ptr<DescribeQoeMetricDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQoeMetricData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/call/describeQoeMetricData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQoeMetricDataResponse(callApi(params, req, runtime));
}

DescribeQoeMetricDataResponse Alibabacloud_Vdc20201214::Client::describeQoeMetricData(shared_ptr<DescribeQoeMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQoeMetricDataWithOptions(request, headers, runtime);
}

DescribeQualityAreaDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeQualityAreaDistributionStatDataWithOptions(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentArea)) {
    query->insert(pair<string, string>("ParentArea", *request->parentArea));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityAreaDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/quality/describeQualityAreaDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityAreaDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeQualityAreaDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeQualityAreaDistributionStatData(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQualityAreaDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeQualityDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeQualityDistributionStatDataWithOptions(shared_ptr<DescribeQualityDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/quality/describeQualityDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeQualityDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeQualityDistributionStatData(shared_ptr<DescribeQualityDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQualityDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeQualityOsSdkVersionDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeQualityOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityOsSdkVersionDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/quality/describeQualityOsSdkVersionDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityOsSdkVersionDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeQualityOsSdkVersionDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeQualityOsSdkVersionDistributionStatData(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQualityOsSdkVersionDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeQualityOverallDataResponse Alibabacloud_Vdc20201214::Client::describeQualityOverallDataWithOptions(shared_ptr<DescribeQualityOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityOverallData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/quality/describeQualityOverallData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityOverallDataResponse(callApi(params, req, runtime));
}

DescribeQualityOverallDataResponse Alibabacloud_Vdc20201214::Client::describeQualityOverallData(shared_ptr<DescribeQualityOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeQualityOverallDataWithOptions(request, headers, runtime);
}

DescribeUsageAreaDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeUsageAreaDistributionStatDataWithOptions(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentArea)) {
    query->insert(pair<string, string>("ParentArea", *request->parentArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageAreaDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/usage/describeUsageAreaDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageAreaDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeUsageAreaDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeUsageAreaDistributionStatData(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUsageAreaDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeUsageDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeUsageDistributionStatDataWithOptions(shared_ptr<DescribeUsageDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/usage/describeUsageDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeUsageDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeUsageDistributionStatData(shared_ptr<DescribeUsageDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUsageDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeUsageOsSdkVersionDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeUsageOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageOsSdkVersionDistributionStatData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/usage/describeUsageOsSdkVersionDistributionStatData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageOsSdkVersionDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeUsageOsSdkVersionDistributionStatDataResponse Alibabacloud_Vdc20201214::Client::describeUsageOsSdkVersionDistributionStatData(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUsageOsSdkVersionDistributionStatDataWithOptions(request, headers, runtime);
}

DescribeUsageOverallDataResponse Alibabacloud_Vdc20201214::Client::describeUsageOverallDataWithOptions(shared_ptr<DescribeUsageOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageOverallData"))},
    {"version", boost::any(string("2020-12-14"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/api/usage/describeUsageOverallData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageOverallDataResponse(callApi(params, req, runtime));
}

DescribeUsageOverallDataResponse Alibabacloud_Vdc20201214::Client::describeUsageOverallData(shared_ptr<DescribeUsageOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return describeUsageOverallDataWithOptions(request, headers, runtime);
}

