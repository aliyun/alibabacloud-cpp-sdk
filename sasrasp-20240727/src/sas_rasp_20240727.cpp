// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sas_rasp_20240727.hpp>
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

using namespace Alibabacloud_SasRasp20240727;

Alibabacloud_SasRasp20240727::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sasrasp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_SasRasp20240727::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeAttackProtectionCountResponse Alibabacloud_SasRasp20240727::Client::describeAttackProtectionCountWithOptions(shared_ptr<DescribeAttackProtectionCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentType)) {
    query->insert(pair<string, string>("AgentType", *request->agentType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAttackProtectionCount"))},
    {"version", boost::any(string("2024-07-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAttackProtectionCountResponse(callApi(params, req, runtime));
}

DescribeAttackProtectionCountResponse Alibabacloud_SasRasp20240727::Client::describeAttackProtectionCount(shared_ptr<DescribeAttackProtectionCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAttackProtectionCountWithOptions(request, runtime);
}

DescribeAttacksResponse Alibabacloud_SasRasp20240727::Client::describeAttacksWithOptions(shared_ptr<DescribeAttacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentType)) {
    query->insert(pair<string, string>("AgentType", *request->agentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    query->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attackHostId)) {
    query->insert(pair<string, string>("AttackHostId", *request->attackHostId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attackType)) {
    query->insert(pair<string, string>("AttackType", *request->attackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attackUrl)) {
    query->insert(pair<string, string>("AttackUrl", *request->attackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTimestamp)) {
    query->insert(pair<string, long>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->handlerType)) {
    query->insert(pair<string, string>("HandlerType", *request->handlerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostname)) {
    query->insert(pair<string, string>("Hostname", *request->hostname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pid)) {
    query->insert(pair<string, string>("Pid", *request->pid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->raspType)) {
    query->insert(pair<string, string>("RaspType", *request->raspType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remote)) {
    query->insert(pair<string, string>("Remote", *request->remote));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTimestamp)) {
    query->insert(pair<string, long>("StartTimestamp", *request->startTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionId)) {
    query->insert(pair<string, string>("UnionId", *request->unionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    body->insert(pair<string, string>("Lang", *request->lang));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAttacks"))},
    {"version", boost::any(string("2024-07-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAttacksResponse(callApi(params, req, runtime));
}

DescribeAttacksResponse Alibabacloud_SasRasp20240727::Client::describeAttacks(shared_ptr<DescribeAttacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAttacksWithOptions(request, runtime);
}

