// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nis_20211216.hpp>
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

using namespace Alibabacloud_Nis20211216;

Alibabacloud_Nis20211216::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nis"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Nis20211216::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAndAnalyzeNetworkPathResponse Alibabacloud_Nis20211216::Client::createAndAnalyzeNetworkPathWithOptions(shared_ptr<CreateAndAnalyzeNetworkPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAndAnalyzeNetworkPath"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAndAnalyzeNetworkPathResponse(callApi(params, req, runtime));
}

CreateAndAnalyzeNetworkPathResponse Alibabacloud_Nis20211216::Client::createAndAnalyzeNetworkPath(shared_ptr<CreateAndAnalyzeNetworkPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAndAnalyzeNetworkPathWithOptions(request, runtime);
}

CreateNetworkPathResponse Alibabacloud_Nis20211216::Client::createNetworkPathWithOptions(shared_ptr<CreateNetworkPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPathDescription)) {
    query->insert(pair<string, string>("NetworkPathDescription", *request->networkPathDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPathName)) {
    query->insert(pair<string, string>("NetworkPathName", *request->networkPathName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    query->insert(pair<string, string>("SourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIpAddress)) {
    query->insert(pair<string, string>("SourceIpAddress", *request->sourceIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sourcePort)) {
    query->insert(pair<string, long>("SourcePort", *request->sourcePort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateNetworkPathRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateNetworkPathRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetId)) {
    query->insert(pair<string, string>("TargetId", *request->targetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetIpAddress)) {
    query->insert(pair<string, string>("TargetIpAddress", *request->targetIpAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetPort)) {
    query->insert(pair<string, long>("TargetPort", *request->targetPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkPath"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNetworkPathResponse(callApi(params, req, runtime));
}

CreateNetworkPathResponse Alibabacloud_Nis20211216::Client::createNetworkPath(shared_ptr<CreateNetworkPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkPathWithOptions(request, runtime);
}

CreateNetworkReachableAnalysisResponse Alibabacloud_Nis20211216::Client::createNetworkReachableAnalysisWithOptions(shared_ptr<CreateNetworkReachableAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPathId)) {
    query->insert(pair<string, string>("NetworkPathId", *request->networkPathId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateNetworkReachableAnalysisRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateNetworkReachableAnalysisRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkReachableAnalysis"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateNetworkReachableAnalysisResponse(callApi(params, req, runtime));
}

CreateNetworkReachableAnalysisResponse Alibabacloud_Nis20211216::Client::createNetworkReachableAnalysis(shared_ptr<CreateNetworkReachableAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkReachableAnalysisWithOptions(request, runtime);
}

DeleteNetworkPathResponse Alibabacloud_Nis20211216::Client::deleteNetworkPathWithOptions(shared_ptr<DeleteNetworkPathRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteNetworkPathShrinkRequest> request = make_shared<DeleteNetworkPathShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->networkPathIds)) {
    request->networkPathIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->networkPathIds, make_shared<string>("NetworkPathIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkPathIdsShrink)) {
    query->insert(pair<string, string>("NetworkPathIds", *request->networkPathIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkPath"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNetworkPathResponse(callApi(params, req, runtime));
}

DeleteNetworkPathResponse Alibabacloud_Nis20211216::Client::deleteNetworkPath(shared_ptr<DeleteNetworkPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkPathWithOptions(request, runtime);
}

DeleteNetworkReachableAnalysisResponse Alibabacloud_Nis20211216::Client::deleteNetworkReachableAnalysisWithOptions(shared_ptr<DeleteNetworkReachableAnalysisRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteNetworkReachableAnalysisShrinkRequest> request = make_shared<DeleteNetworkReachableAnalysisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->networkReachableAnalysisIds)) {
    request->networkReachableAnalysisIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->networkReachableAnalysisIds, make_shared<string>("NetworkReachableAnalysisIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkReachableAnalysisIdsShrink)) {
    query->insert(pair<string, string>("NetworkReachableAnalysisIds", *request->networkReachableAnalysisIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkReachableAnalysis"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteNetworkReachableAnalysisResponse(callApi(params, req, runtime));
}

DeleteNetworkReachableAnalysisResponse Alibabacloud_Nis20211216::Client::deleteNetworkReachableAnalysis(shared_ptr<DeleteNetworkReachableAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkReachableAnalysisWithOptions(request, runtime);
}

GetInternetTupleResponse Alibabacloud_Nis20211216::Client::getInternetTupleWithOptions(shared_ptr<GetInternetTupleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetInternetTupleShrinkRequest> request = make_shared<GetInternetTupleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->cloudIpList)) {
    request->cloudIpListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cloudIpList, make_shared<string>("CloudIpList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceList)) {
    request->instanceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceList, make_shared<string>("InstanceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->accountIds)) {
    query->insert(pair<string, vector<long>>("AccountIds", *request->accountIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudIp)) {
    query->insert(pair<string, string>("CloudIp", *request->cloudIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudIpListShrink)) {
    query->insert(pair<string, string>("CloudIpList", *request->cloudIpListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudIsp)) {
    query->insert(pair<string, string>("CloudIsp", *request->cloudIsp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudPort)) {
    query->insert(pair<string, string>("CloudPort", *request->cloudPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceListShrink)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherCity)) {
    query->insert(pair<string, string>("OtherCity", *request->otherCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherCountry)) {
    query->insert(pair<string, string>("OtherCountry", *request->otherCountry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherIp)) {
    query->insert(pair<string, string>("OtherIp", *request->otherIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherIsp)) {
    query->insert(pair<string, string>("OtherIsp", *request->otherIsp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherPort)) {
    query->insert(pair<string, string>("OtherPort", *request->otherPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topN)) {
    query->insert(pair<string, long>("TopN", *request->topN));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tupleType)) {
    query->insert(pair<string, long>("TupleType", *request->tupleType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useMultiAccount)) {
    query->insert(pair<string, bool>("UseMultiAccount", *request->useMultiAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInternetTuple"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInternetTupleResponse(callApi(params, req, runtime));
}

GetInternetTupleResponse Alibabacloud_Nis20211216::Client::getInternetTuple(shared_ptr<GetInternetTupleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInternetTupleWithOptions(request, runtime);
}

GetNatTopNResponse Alibabacloud_Nis20211216::Client::getNatTopNWithOptions(shared_ptr<GetNatTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->natGatewayId)) {
    query->insert(pair<string, string>("NatGatewayId", *request->natGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topN)) {
    query->insert(pair<string, long>("TopN", *request->topN));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNatTopN"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNatTopNResponse(callApi(params, req, runtime));
}

GetNatTopNResponse Alibabacloud_Nis20211216::Client::getNatTopN(shared_ptr<GetNatTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNatTopNWithOptions(request, runtime);
}

GetNetworkReachableAnalysisResponse Alibabacloud_Nis20211216::Client::getNetworkReachableAnalysisWithOptions(shared_ptr<GetNetworkReachableAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkReachableAnalysisId)) {
    query->insert(pair<string, string>("NetworkReachableAnalysisId", *request->networkReachableAnalysisId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNetworkReachableAnalysis"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNetworkReachableAnalysisResponse(callApi(params, req, runtime));
}

GetNetworkReachableAnalysisResponse Alibabacloud_Nis20211216::Client::getNetworkReachableAnalysis(shared_ptr<GetNetworkReachableAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNetworkReachableAnalysisWithOptions(request, runtime);
}

GetTransitRouterFlowTopNResponse Alibabacloud_Nis20211216::Client::getTransitRouterFlowTopNWithOptions(shared_ptr<GetTransitRouterFlowTopNRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetTransitRouterFlowTopNShrinkRequest> request = make_shared<GetTransitRouterFlowTopNShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsShrink)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bandwithPackageId)) {
    query->insert(pair<string, string>("BandwithPackageId", *request->bandwithPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupBy)) {
    query->insert(pair<string, string>("GroupBy", *request->groupBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherIp)) {
    query->insert(pair<string, string>("OtherIp", *request->otherIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherPort)) {
    query->insert(pair<string, string>("OtherPort", *request->otherPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherRegion)) {
    query->insert(pair<string, string>("OtherRegion", *request->otherRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thisIp)) {
    query->insert(pair<string, string>("ThisIp", *request->thisIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thisPort)) {
    query->insert(pair<string, string>("ThisPort", *request->thisPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thisRegion)) {
    query->insert(pair<string, string>("ThisRegion", *request->thisRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topN)) {
    query->insert(pair<string, long>("TopN", *request->topN));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useMultiAccount)) {
    query->insert(pair<string, bool>("UseMultiAccount", *request->useMultiAccount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTransitRouterFlowTopN"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTransitRouterFlowTopNResponse(callApi(params, req, runtime));
}

GetTransitRouterFlowTopNResponse Alibabacloud_Nis20211216::Client::getTransitRouterFlowTopN(shared_ptr<GetTransitRouterFlowTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTransitRouterFlowTopNWithOptions(request, runtime);
}

GetVbrFlowTopNResponse Alibabacloud_Nis20211216::Client::getVbrFlowTopNWithOptions(shared_ptr<GetVbrFlowTopNRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetVbrFlowTopNShrinkRequest> request = make_shared<GetVbrFlowTopNShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->accountIds)) {
    request->accountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->accountIds, make_shared<string>("AccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountIdsShrink)) {
    query->insert(pair<string, string>("AccountIds", *request->accountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->attachmentId)) {
    query->insert(pair<string, string>("AttachmentId", *request->attachmentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cenId)) {
    query->insert(pair<string, string>("CenId", *request->cenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudIp)) {
    query->insert(pair<string, string>("CloudIp", *request->cloudIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudPort)) {
    query->insert(pair<string, string>("CloudPort", *request->cloudPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupBy)) {
    query->insert(pair<string, string>("GroupBy", *request->groupBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherIp)) {
    query->insert(pair<string, string>("OtherIp", *request->otherIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherPort)) {
    query->insert(pair<string, string>("OtherPort", *request->otherPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    query->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topN)) {
    query->insert(pair<string, long>("TopN", *request->topN));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useMultiAccount)) {
    query->insert(pair<string, bool>("UseMultiAccount", *request->useMultiAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualBorderRouterId)) {
    query->insert(pair<string, string>("VirtualBorderRouterId", *request->virtualBorderRouterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVbrFlowTopN"))},
    {"version", boost::any(string("2021-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVbrFlowTopNResponse(callApi(params, req, runtime));
}

GetVbrFlowTopNResponse Alibabacloud_Nis20211216::Client::getVbrFlowTopN(shared_ptr<GetVbrFlowTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVbrFlowTopNWithOptions(request, runtime);
}

