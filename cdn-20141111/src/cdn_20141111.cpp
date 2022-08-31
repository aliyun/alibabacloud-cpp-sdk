// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cdn_20141111.hpp>
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

using namespace Alibabacloud_Cdn20141111;

Alibabacloud_Cdn20141111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "cdn.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "cdn.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "cdn.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "cdn.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cdn"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cdn20141111::Client::getEndpoint(shared_ptr<string> productId,
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

AddCdnDomainResponse Alibabacloud_Cdn20141111::Client::addCdnDomainWithOptions(shared_ptr<AddCdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdnType)) {
    query->insert(pair<string, string>("CdnType", *request->cdnType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkUrl)) {
    query->insert(pair<string, string>("CheckUrl", *request->checkUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priorities)) {
    query->insert(pair<string, string>("Priorities", *request->priorities));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourcePort)) {
    query->insert(pair<string, long>("SourcePort", *request->sourcePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCdnDomain"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCdnDomainResponse(callApi(params, req, runtime));
}

AddCdnDomainResponse Alibabacloud_Cdn20141111::Client::addCdnDomain(shared_ptr<AddCdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCdnDomainWithOptions(request, runtime);
}

DescribeCdnDomainDetailResponse Alibabacloud_Cdn20141111::Client::describeCdnDomainDetailWithOptions(shared_ptr<DescribeCdnDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCdnDomainDetail"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCdnDomainDetailResponse(callApi(params, req, runtime));
}

DescribeCdnDomainDetailResponse Alibabacloud_Cdn20141111::Client::describeCdnDomainDetail(shared_ptr<DescribeCdnDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCdnDomainDetailWithOptions(request, runtime);
}

DescribeCdnDomainLogsResponse Alibabacloud_Cdn20141111::Client::describeCdnDomainLogsWithOptions(shared_ptr<DescribeCdnDomainLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logDay)) {
    query->insert(pair<string, string>("LogDay", *request->logDay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCdnDomainLogs"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCdnDomainLogsResponse(callApi(params, req, runtime));
}

DescribeCdnDomainLogsResponse Alibabacloud_Cdn20141111::Client::describeCdnDomainLogs(shared_ptr<DescribeCdnDomainLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCdnDomainLogsWithOptions(request, runtime);
}

DescribeCdnServiceResponse Alibabacloud_Cdn20141111::Client::describeCdnServiceWithOptions(shared_ptr<DescribeCdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCdnService"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCdnServiceResponse(callApi(params, req, runtime));
}

DescribeCdnServiceResponse Alibabacloud_Cdn20141111::Client::describeCdnService(shared_ptr<DescribeCdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCdnServiceWithOptions(request, runtime);
}

DescribeDomainBpsDataResponse Alibabacloud_Cdn20141111::Client::describeDomainBpsDataWithOptions(shared_ptr<DescribeDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainType)) {
    query->insert(pair<string, string>("DomainType", *request->domainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainBpsData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainBpsDataResponse(callApi(params, req, runtime));
}

DescribeDomainBpsDataResponse Alibabacloud_Cdn20141111::Client::describeDomainBpsData(shared_ptr<DescribeDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainBpsDataWithOptions(request, runtime);
}

DescribeDomainBpsDataByTimeStampResponse Alibabacloud_Cdn20141111::Client::describeDomainBpsDataByTimeStampWithOptions(shared_ptr<DescribeDomainBpsDataByTimeStampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNames)) {
    query->insert(pair<string, string>("IspNames", *request->ispNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNames)) {
    query->insert(pair<string, string>("LocationNames", *request->locationNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePoint)) {
    query->insert(pair<string, string>("TimePoint", *request->timePoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainBpsDataByTimeStamp"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainBpsDataByTimeStampResponse(callApi(params, req, runtime));
}

DescribeDomainBpsDataByTimeStampResponse Alibabacloud_Cdn20141111::Client::describeDomainBpsDataByTimeStamp(shared_ptr<DescribeDomainBpsDataByTimeStampRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainBpsDataByTimeStampWithOptions(request, runtime);
}

DescribeDomainFileSizeProportionDataResponse Alibabacloud_Cdn20141111::Client::describeDomainFileSizeProportionDataWithOptions(shared_ptr<DescribeDomainFileSizeProportionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainFileSizeProportionData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainFileSizeProportionDataResponse(callApi(params, req, runtime));
}

DescribeDomainFileSizeProportionDataResponse Alibabacloud_Cdn20141111::Client::describeDomainFileSizeProportionData(shared_ptr<DescribeDomainFileSizeProportionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainFileSizeProportionDataWithOptions(request, runtime);
}

DescribeDomainFlowDataResponse Alibabacloud_Cdn20141111::Client::describeDomainFlowDataWithOptions(shared_ptr<DescribeDomainFlowDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainType)) {
    query->insert(pair<string, string>("DomainType", *request->domainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainFlowData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainFlowDataResponse(callApi(params, req, runtime));
}

DescribeDomainFlowDataResponse Alibabacloud_Cdn20141111::Client::describeDomainFlowData(shared_ptr<DescribeDomainFlowDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainFlowDataWithOptions(request, runtime);
}

DescribeDomainHitRateDataResponse Alibabacloud_Cdn20141111::Client::describeDomainHitRateDataWithOptions(shared_ptr<DescribeDomainHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainHitRateData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainHitRateDataResponse(callApi(params, req, runtime));
}

DescribeDomainHitRateDataResponse Alibabacloud_Cdn20141111::Client::describeDomainHitRateData(shared_ptr<DescribeDomainHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainHitRateDataWithOptions(request, runtime);
}

DescribeDomainHttpCodeDataResponse Alibabacloud_Cdn20141111::Client::describeDomainHttpCodeDataWithOptions(shared_ptr<DescribeDomainHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainHttpCodeData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainHttpCodeDataResponse(callApi(params, req, runtime));
}

DescribeDomainHttpCodeDataResponse Alibabacloud_Cdn20141111::Client::describeDomainHttpCodeData(shared_ptr<DescribeDomainHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainHttpCodeDataWithOptions(request, runtime);
}

DescribeDomainISPDataResponse Alibabacloud_Cdn20141111::Client::describeDomainISPDataWithOptions(shared_ptr<DescribeDomainISPDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainISPData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainISPDataResponse(callApi(params, req, runtime));
}

DescribeDomainISPDataResponse Alibabacloud_Cdn20141111::Client::describeDomainISPData(shared_ptr<DescribeDomainISPDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainISPDataWithOptions(request, runtime);
}

DescribeDomainQpsDataResponse Alibabacloud_Cdn20141111::Client::describeDomainQpsDataWithOptions(shared_ptr<DescribeDomainQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainType)) {
    query->insert(pair<string, string>("DomainType", *request->domainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainQpsData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainQpsDataResponse(callApi(params, req, runtime));
}

DescribeDomainQpsDataResponse Alibabacloud_Cdn20141111::Client::describeDomainQpsData(shared_ptr<DescribeDomainQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainQpsDataWithOptions(request, runtime);
}

DescribeDomainRegionDataResponse Alibabacloud_Cdn20141111::Client::describeDomainRegionDataWithOptions(shared_ptr<DescribeDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainRegionData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainRegionDataResponse(callApi(params, req, runtime));
}

DescribeDomainRegionDataResponse Alibabacloud_Cdn20141111::Client::describeDomainRegionData(shared_ptr<DescribeDomainRegionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainRegionDataWithOptions(request, runtime);
}

DescribeDomainReqHitRateDataResponse Alibabacloud_Cdn20141111::Client::describeDomainReqHitRateDataWithOptions(shared_ptr<DescribeDomainReqHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainReqHitRateData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainReqHitRateDataResponse(callApi(params, req, runtime));
}

DescribeDomainReqHitRateDataResponse Alibabacloud_Cdn20141111::Client::describeDomainReqHitRateData(shared_ptr<DescribeDomainReqHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainReqHitRateDataWithOptions(request, runtime);
}

DescribeDomainSrcBpsDataResponse Alibabacloud_Cdn20141111::Client::describeDomainSrcBpsDataWithOptions(shared_ptr<DescribeDomainSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fixTimeGap)) {
    query->insert(pair<string, string>("FixTimeGap", *request->fixTimeGap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainSrcBpsData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainSrcBpsDataResponse(callApi(params, req, runtime));
}

DescribeDomainSrcBpsDataResponse Alibabacloud_Cdn20141111::Client::describeDomainSrcBpsData(shared_ptr<DescribeDomainSrcBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainSrcBpsDataWithOptions(request, runtime);
}

DescribeDomainSrcFlowDataResponse Alibabacloud_Cdn20141111::Client::describeDomainSrcFlowDataWithOptions(shared_ptr<DescribeDomainSrcFlowDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fixTimeGap)) {
    query->insert(pair<string, string>("FixTimeGap", *request->fixTimeGap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainSrcFlowData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainSrcFlowDataResponse(callApi(params, req, runtime));
}

DescribeDomainSrcFlowDataResponse Alibabacloud_Cdn20141111::Client::describeDomainSrcFlowData(shared_ptr<DescribeDomainSrcFlowDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainSrcFlowDataWithOptions(request, runtime);
}

DescribeDomainUvDataResponse Alibabacloud_Cdn20141111::Client::describeDomainUvDataWithOptions(shared_ptr<DescribeDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainUvData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainUvDataResponse(callApi(params, req, runtime));
}

DescribeDomainUvDataResponse Alibabacloud_Cdn20141111::Client::describeDomainUvData(shared_ptr<DescribeDomainUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainUvDataWithOptions(request, runtime);
}

DescribeDomainsBySourceResponse Alibabacloud_Cdn20141111::Client::describeDomainsBySourceWithOptions(shared_ptr<DescribeDomainsBySourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainsBySource"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainsBySourceResponse(callApi(params, req, runtime));
}

DescribeDomainsBySourceResponse Alibabacloud_Cdn20141111::Client::describeDomainsBySource(shared_ptr<DescribeDomainsBySourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainsBySourceWithOptions(request, runtime);
}

DescribeDomainsUsageByDayResponse Alibabacloud_Cdn20141111::Client::describeDomainsUsageByDayWithOptions(shared_ptr<DescribeDomainsUsageByDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainsUsageByDay"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainsUsageByDayResponse(callApi(params, req, runtime));
}

DescribeDomainsUsageByDayResponse Alibabacloud_Cdn20141111::Client::describeDomainsUsageByDay(shared_ptr<DescribeDomainsUsageByDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainsUsageByDayWithOptions(request, runtime);
}

DescribeRefreshQuotaResponse Alibabacloud_Cdn20141111::Client::describeRefreshQuotaWithOptions(shared_ptr<DescribeRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRefreshQuota"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRefreshQuotaResponse(callApi(params, req, runtime));
}

DescribeRefreshQuotaResponse Alibabacloud_Cdn20141111::Client::describeRefreshQuota(shared_ptr<DescribeRefreshQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRefreshQuotaWithOptions(request, runtime);
}

DescribeTopDomainsByFlowResponse Alibabacloud_Cdn20141111::Client::describeTopDomainsByFlowWithOptions(shared_ptr<DescribeTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTopDomainsByFlow"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTopDomainsByFlowResponse(callApi(params, req, runtime));
}

DescribeTopDomainsByFlowResponse Alibabacloud_Cdn20141111::Client::describeTopDomainsByFlow(shared_ptr<DescribeTopDomainsByFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTopDomainsByFlowWithOptions(request, runtime);
}

DescribeUserDomainsResponse Alibabacloud_Cdn20141111::Client::describeUserDomainsWithOptions(shared_ptr<DescribeUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cdnType)) {
    query->insert(pair<string, string>("CdnType", *request->cdnType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->checkDomainShow)) {
    query->insert(pair<string, bool>("CheckDomainShow", *request->checkDomainShow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSearchType)) {
    query->insert(pair<string, string>("DomainSearchType", *request->domainSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainStatus)) {
    query->insert(pair<string, string>("DomainStatus", *request->domainStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sources)) {
    query->insert(pair<string, string>("Sources", *request->sources));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserDomains"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserDomainsResponse(callApi(params, req, runtime));
}

DescribeUserDomainsResponse Alibabacloud_Cdn20141111::Client::describeUserDomains(shared_ptr<DescribeUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserDomainsWithOptions(request, runtime);
}

OpenCdnServiceResponse Alibabacloud_Cdn20141111::Client::openCdnServiceWithOptions(shared_ptr<OpenCdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->internetChargeType)) {
    query->insert(pair<string, string>("InternetChargeType", *request->internetChargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenCdnService"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenCdnServiceResponse(callApi(params, req, runtime));
}

OpenCdnServiceResponse Alibabacloud_Cdn20141111::Client::openCdnService(shared_ptr<OpenCdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openCdnServiceWithOptions(request, runtime);
}

PushObjectCacheResponse Alibabacloud_Cdn20141111::Client::pushObjectCacheWithOptions(shared_ptr<PushObjectCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->area)) {
    query->insert(pair<string, string>("Area", *request->area));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectPath)) {
    query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushObjectCache"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushObjectCacheResponse(callApi(params, req, runtime));
}

PushObjectCacheResponse Alibabacloud_Cdn20141111::Client::pushObjectCache(shared_ptr<PushObjectCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushObjectCacheWithOptions(request, runtime);
}

RefreshObjectCachesResponse Alibabacloud_Cdn20141111::Client::refreshObjectCachesWithOptions(shared_ptr<RefreshObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->objectPath)) {
    query->insert(pair<string, string>("ObjectPath", *request->objectPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objectType)) {
    query->insert(pair<string, string>("ObjectType", *request->objectType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshObjectCaches"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshObjectCachesResponse(callApi(params, req, runtime));
}

RefreshObjectCachesResponse Alibabacloud_Cdn20141111::Client::refreshObjectCaches(shared_ptr<RefreshObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshObjectCachesWithOptions(request, runtime);
}

TestDescribeDomainBpsDataResponse Alibabacloud_Cdn20141111::Client::testDescribeDomainBpsDataWithOptions(shared_ptr<TestDescribeDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainType)) {
    query->insert(pair<string, string>("DomainType", *request->domainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMerge)) {
    query->insert(pair<string, string>("TimeMerge", *request->timeMerge));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestDescribeDomainBpsData"))},
    {"version", boost::any(string("2014-11-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestDescribeDomainBpsDataResponse(callApi(params, req, runtime));
}

TestDescribeDomainBpsDataResponse Alibabacloud_Cdn20141111::Client::testDescribeDomainBpsData(shared_ptr<TestDescribeDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testDescribeDomainBpsDataWithOptions(request, runtime);
}

