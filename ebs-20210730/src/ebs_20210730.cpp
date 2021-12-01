// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ebs_20210730.hpp>
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

using namespace Alibabacloud_Ebs20210730;

Alibabacloud_Ebs20210730::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ebs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ebs20210730::Client::getEndpoint(shared_ptr<string> productId,
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

CreateDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::createDiskReplicaPairWithOptions(shared_ptr<CreateDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("Bandwidth", *request->bandwidth));
  query->insert(pair<string, string>("ChargeType", *request->chargeType));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("DestinationDiskId", *request->destinationDiskId));
  query->insert(pair<string, string>("DestinationRegionId", *request->destinationRegionId));
  query->insert(pair<string, string>("DestinationZoneId", *request->destinationZoneId));
  query->insert(pair<string, string>("DiskId", *request->diskId));
  query->insert(pair<string, string>("PairName", *request->pairName));
  query->insert(pair<string, long>("Period", *request->period));
  query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  query->insert(pair<string, string>("SourceRegionId", *request->sourceRegionId));
  query->insert(pair<string, string>("SourceZoneId", *request->sourceZoneId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDiskReplicaPairResponse(callApi(params, req, runtime));
}

CreateDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::createDiskReplicaPair(shared_ptr<CreateDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDiskReplicaPairWithOptions(request, runtime);
}

DeleteDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::deleteDiskReplicaPairWithOptions(shared_ptr<DeleteDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReplicaPairId", *request->replicaPairId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDiskReplicaPairResponse(callApi(params, req, runtime));
}

DeleteDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::deleteDiskReplicaPair(shared_ptr<DeleteDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDiskReplicaPairWithOptions(request, runtime);
}

DescribeDiskReplicaPairsResponse Alibabacloud_Ebs20210730::Client::describeDiskReplicaPairsWithOptions(shared_ptr<DescribeDiskReplicaPairsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("PairIds", *request->pairIds));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiskReplicaPairs"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiskReplicaPairsResponse(callApi(params, req, runtime));
}

DescribeDiskReplicaPairsResponse Alibabacloud_Ebs20210730::Client::describeDiskReplicaPairs(shared_ptr<DescribeDiskReplicaPairsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiskReplicaPairsWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Ebs20210730::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AcceptLanguage", *request->acceptLanguage));
  query->insert(pair<string, string>("ResourceType", *request->resourceType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_Ebs20210730::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

FailoverDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::failoverDiskReplicaPairWithOptions(shared_ptr<FailoverDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReplicaPairId", *request->replicaPairId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FailoverDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FailoverDiskReplicaPairResponse(callApi(params, req, runtime));
}

FailoverDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::failoverDiskReplicaPair(shared_ptr<FailoverDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return failoverDiskReplicaPairWithOptions(request, runtime);
}

ModifyDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::modifyDiskReplicaPairWithOptions(shared_ptr<ModifyDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("PairName", *request->pairName));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReplicaPairId", *request->replicaPairId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDiskReplicaPairResponse(callApi(params, req, runtime));
}

ModifyDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::modifyDiskReplicaPair(shared_ptr<ModifyDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDiskReplicaPairWithOptions(request, runtime);
}

ReprotectDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::reprotectDiskReplicaPairWithOptions(shared_ptr<ReprotectDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReplicaPairId", *request->replicaPairId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReprotectDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReprotectDiskReplicaPairResponse(callApi(params, req, runtime));
}

ReprotectDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::reprotectDiskReplicaPair(shared_ptr<ReprotectDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reprotectDiskReplicaPairWithOptions(request, runtime);
}

StartDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::startDiskReplicaPairWithOptions(shared_ptr<StartDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReplicaPairId", *request->replicaPairId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDiskReplicaPairResponse(callApi(params, req, runtime));
}

StartDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::startDiskReplicaPair(shared_ptr<StartDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDiskReplicaPairWithOptions(request, runtime);
}

StopDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::stopDiskReplicaPairWithOptions(shared_ptr<StopDiskReplicaPairRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("RegionId", *request->regionId));
  query->insert(pair<string, string>("ReplicaPairId", *request->replicaPairId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDiskReplicaPair"))},
    {"version", boost::any(string("2021-07-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDiskReplicaPairResponse(callApi(params, req, runtime));
}

StopDiskReplicaPairResponse Alibabacloud_Ebs20210730::Client::stopDiskReplicaPair(shared_ptr<StopDiskReplicaPairRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDiskReplicaPairWithOptions(request, runtime);
}

