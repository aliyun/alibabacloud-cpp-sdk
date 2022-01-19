// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/jarvis_public_20180621.hpp>
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

using namespace Alibabacloud_Jarvis-public20180621;

Alibabacloud_Jarvis-public20180621::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("jarvis-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Jarvis-public20180621::Client::getEndpoint(shared_ptr<string> productId,
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

CreateConsoleAccessWhiteListResponse Alibabacloud_Jarvis-public20180621::Client::createConsoleAccessWhiteListWithOptions(shared_ptr<CreateConsoleAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dstPort)) {
    query->insert(pair<string, long>("DstPort", *request->dstPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIdList)) {
    query->insert(pair<string, string>("InstanceIdList", *request->instanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceInfoList)) {
    query->insert(pair<string, string>("InstanceInfoList", *request->instanceInfoList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->liveTime)) {
    query->insert(pair<string, long>("LiveTime", *request->liveTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    query->insert(pair<string, string>("Note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("SourceCode", *request->sourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcIP)) {
    query->insert(pair<string, string>("SrcIP", *request->srcIP));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteListType)) {
    query->insert(pair<string, long>("WhiteListType", *request->whiteListType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsoleAccessWhiteList"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsoleAccessWhiteListResponse(callApi(params, req, runtime));
}

CreateConsoleAccessWhiteListResponse Alibabacloud_Jarvis-public20180621::Client::createConsoleAccessWhiteList(shared_ptr<CreateConsoleAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsoleAccessWhiteListWithOptions(request, runtime);
}

DeleteConsoleAccessWhiteListResponse Alibabacloud_Jarvis-public20180621::Client::deleteConsoleAccessWhiteListWithOptions(shared_ptr<DeleteConsoleAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disableWhitelist)) {
    query->insert(pair<string, string>("DisableWhitelist", *request->disableWhitelist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("SourceCode", *request->sourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsoleAccessWhiteList"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsoleAccessWhiteListResponse(callApi(params, req, runtime));
}

DeleteConsoleAccessWhiteListResponse Alibabacloud_Jarvis-public20180621::Client::deleteConsoleAccessWhiteList(shared_ptr<DeleteConsoleAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsoleAccessWhiteListWithOptions(request, runtime);
}

DescribeAccessWhiteListSlbListResponse Alibabacloud_Jarvis-public20180621::Client::describeAccessWhiteListSlbListWithOptions(shared_ptr<DescribeAccessWhiteListSlbListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("SourceCode", *request->sourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccessWhiteListSlbList"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccessWhiteListSlbListResponse(callApi(params, req, runtime));
}

DescribeAccessWhiteListSlbListResponse Alibabacloud_Jarvis-public20180621::Client::describeAccessWhiteListSlbList(shared_ptr<DescribeAccessWhiteListSlbListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessWhiteListSlbListWithOptions(request, runtime);
}

DescribeAccessWhitelistEcsListResponse Alibabacloud_Jarvis-public20180621::Client::describeAccessWhitelistEcsListWithOptions(shared_ptr<DescribeAccessWhitelistEcsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("SourceCode", *request->sourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccessWhitelistEcsList"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccessWhitelistEcsListResponse(callApi(params, req, runtime));
}

DescribeAccessWhitelistEcsListResponse Alibabacloud_Jarvis-public20180621::Client::describeAccessWhitelistEcsList(shared_ptr<DescribeAccessWhitelistEcsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccessWhitelistEcsListWithOptions(request, runtime);
}

DescribeAttackEventResponse Alibabacloud_Jarvis-public20180621::Client::describeAttackEventWithOptions(shared_ptr<DescribeAttackEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIpList)) {
    query->insert(pair<string, string>("ServerIpList", *request->serverIpList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAttackEvent"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAttackEventResponse(callApi(params, req, runtime));
}

DescribeAttackEventResponse Alibabacloud_Jarvis-public20180621::Client::describeAttackEvent(shared_ptr<DescribeAttackEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAttackEventWithOptions(request, runtime);
}

DescribeAttackedIpResponse Alibabacloud_Jarvis-public20180621::Client::describeAttackedIpWithOptions(shared_ptr<DescribeAttackedIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIpList)) {
    query->insert(pair<string, string>("ServerIpList", *request->serverIpList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAttackedIp"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAttackedIpResponse(callApi(params, req, runtime));
}

DescribeAttackedIpResponse Alibabacloud_Jarvis-public20180621::Client::describeAttackedIp(shared_ptr<DescribeAttackedIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAttackedIpWithOptions(request, runtime);
}

DescribeConsoleAccessWhiteListResponse Alibabacloud_Jarvis-public20180621::Client::describeConsoleAccessWhiteListWithOptions(shared_ptr<DescribeConsoleAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dstIP)) {
    query->insert(pair<string, string>("DstIP", *request->dstIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("SourceCode", *request->sourceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcIP)) {
    query->insert(pair<string, string>("SrcIP", *request->srcIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteListType)) {
    query->insert(pair<string, long>("WhiteListType", *request->whiteListType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryProduct)) {
    query->insert(pair<string, string>("queryProduct", *request->queryProduct));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConsoleAccessWhiteList"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsoleAccessWhiteListResponse(callApi(params, req, runtime));
}

DescribeConsoleAccessWhiteListResponse Alibabacloud_Jarvis-public20180621::Client::describeConsoleAccessWhiteList(shared_ptr<DescribeConsoleAccessWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsoleAccessWhiteListWithOptions(request, runtime);
}

DescribeCountAttackEventResponse Alibabacloud_Jarvis-public20180621::Client::describeCountAttackEventWithOptions(shared_ptr<DescribeCountAttackEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIpList)) {
    query->insert(pair<string, string>("ServerIpList", *request->serverIpList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCountAttackEvent"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCountAttackEventResponse(callApi(params, req, runtime));
}

DescribeCountAttackEventResponse Alibabacloud_Jarvis-public20180621::Client::describeCountAttackEvent(shared_ptr<DescribeCountAttackEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCountAttackEventWithOptions(request, runtime);
}

DescribePhoneInfoResponse Alibabacloud_Jarvis-public20180621::Client::describePhoneInfoWithOptions(shared_ptr<DescribePhoneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNum)) {
    query->insert(pair<string, string>("phoneNum", *request->phoneNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCode)) {
    query->insert(pair<string, string>("sourceCode", *request->sourceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePhoneInfo"))},
    {"version", boost::any(string("2018-06-21"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePhoneInfoResponse(callApi(params, req, runtime));
}

DescribePhoneInfoResponse Alibabacloud_Jarvis-public20180621::Client::describePhoneInfo(shared_ptr<DescribePhoneInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePhoneInfoWithOptions(request, runtime);
}

