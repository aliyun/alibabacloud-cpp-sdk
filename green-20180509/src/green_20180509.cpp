// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/green_20180509.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Green20180509;

Alibabacloud_Green20180509::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "green.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "green.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu", "green.aliyuncs.com"},
    {"cn-hongkong", "green.aliyuncs.com"},
    {"cn-huhehaote", "green.aliyuncs.com"},
    {"cn-qingdao", "green.aliyuncs.com"},
    {"cn-zhangjiakou", "green.aliyuncs.com"},
    {"eu-central-1", "green.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "green.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "green.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "green.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "green.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "green.aliyuncs.com"},
    {"cn-shanghai-finance-1", "green.aliyuncs.com"},
    {"cn-north-2-gov-1", "green.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("green"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Green20180509::Client::getEndpoint(shared_ptr<string> productId,
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

AddFacesResponse Alibabacloud_Green20180509::Client::addFacesWithOptions(shared_ptr<AddFacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaces"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/face/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFacesResponse(callApi(params, req, runtime));
}

AddFacesResponse Alibabacloud_Green20180509::Client::addFaces(shared_ptr<AddFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addFacesWithOptions(request, headers, runtime);
}

AddGroupsResponse Alibabacloud_Green20180509::Client::addGroupsWithOptions(shared_ptr<AddGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddGroups"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/person/groups/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddGroupsResponse(callApi(params, req, runtime));
}

AddGroupsResponse Alibabacloud_Green20180509::Client::addGroups(shared_ptr<AddGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addGroupsWithOptions(request, headers, runtime);
}

AddPersonResponse Alibabacloud_Green20180509::Client::addPersonWithOptions(shared_ptr<AddPersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPerson"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/person/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddPersonResponse(callApi(params, req, runtime));
}

AddPersonResponse Alibabacloud_Green20180509::Client::addPerson(shared_ptr<AddPersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addPersonWithOptions(request, headers, runtime);
}

AddSimilarityImageResponse Alibabacloud_Green20180509::Client::addSimilarityImageWithOptions(shared_ptr<AddSimilarityImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSimilarityImage"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/image/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSimilarityImageResponse(callApi(params, req, runtime));
}

AddSimilarityImageResponse Alibabacloud_Green20180509::Client::addSimilarityImage(shared_ptr<AddSimilarityImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addSimilarityImageWithOptions(request, headers, runtime);
}

AddSimilarityLibraryResponse Alibabacloud_Green20180509::Client::addSimilarityLibraryWithOptions(shared_ptr<AddSimilarityLibraryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSimilarityLibrary"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/library/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSimilarityLibraryResponse(callApi(params, req, runtime));
}

AddSimilarityLibraryResponse Alibabacloud_Green20180509::Client::addSimilarityLibrary(shared_ptr<AddSimilarityLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addSimilarityLibraryWithOptions(request, headers, runtime);
}

AddVideoDnaResponse Alibabacloud_Green20180509::Client::addVideoDnaWithOptions(shared_ptr<AddVideoDnaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddVideoDna"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/dna/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddVideoDnaResponse(callApi(params, req, runtime));
}

AddVideoDnaResponse Alibabacloud_Green20180509::Client::addVideoDna(shared_ptr<AddVideoDnaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addVideoDnaWithOptions(request, headers, runtime);
}

AddVideoDnaGroupResponse Alibabacloud_Green20180509::Client::addVideoDnaGroupWithOptions(shared_ptr<AddVideoDnaGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddVideoDnaGroup"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/dna/group/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddVideoDnaGroupResponse(callApi(params, req, runtime));
}

AddVideoDnaGroupResponse Alibabacloud_Green20180509::Client::addVideoDnaGroup(shared_ptr<AddVideoDnaGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addVideoDnaGroupWithOptions(request, headers, runtime);
}

DeleteFacesResponse Alibabacloud_Green20180509::Client::deleteFacesWithOptions(shared_ptr<DeleteFacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaces"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/face/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFacesResponse(callApi(params, req, runtime));
}

DeleteFacesResponse Alibabacloud_Green20180509::Client::deleteFaces(shared_ptr<DeleteFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFacesWithOptions(request, headers, runtime);
}

DeleteGroupsResponse Alibabacloud_Green20180509::Client::deleteGroupsWithOptions(shared_ptr<DeleteGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroups"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/person/groups/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupsResponse(callApi(params, req, runtime));
}

DeleteGroupsResponse Alibabacloud_Green20180509::Client::deleteGroups(shared_ptr<DeleteGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteGroupsWithOptions(request, headers, runtime);
}

DeletePersonResponse Alibabacloud_Green20180509::Client::deletePersonWithOptions(shared_ptr<DeletePersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePerson"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/person/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePersonResponse(callApi(params, req, runtime));
}

DeletePersonResponse Alibabacloud_Green20180509::Client::deletePerson(shared_ptr<DeletePersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deletePersonWithOptions(request, headers, runtime);
}

DeleteSimilarityImageResponse Alibabacloud_Green20180509::Client::deleteSimilarityImageWithOptions(shared_ptr<DeleteSimilarityImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSimilarityImage"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/image/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSimilarityImageResponse(callApi(params, req, runtime));
}

DeleteSimilarityImageResponse Alibabacloud_Green20180509::Client::deleteSimilarityImage(shared_ptr<DeleteSimilarityImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSimilarityImageWithOptions(request, headers, runtime);
}

DeleteSimilarityLibraryResponse Alibabacloud_Green20180509::Client::deleteSimilarityLibraryWithOptions(shared_ptr<DeleteSimilarityLibraryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSimilarityLibrary"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/library/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSimilarityLibraryResponse(callApi(params, req, runtime));
}

DeleteSimilarityLibraryResponse Alibabacloud_Green20180509::Client::deleteSimilarityLibrary(shared_ptr<DeleteSimilarityLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteSimilarityLibraryWithOptions(request, headers, runtime);
}

DeleteVideoDnaResponse Alibabacloud_Green20180509::Client::deleteVideoDnaWithOptions(shared_ptr<DeleteVideoDnaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVideoDna"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/dna/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVideoDnaResponse(callApi(params, req, runtime));
}

DeleteVideoDnaResponse Alibabacloud_Green20180509::Client::deleteVideoDna(shared_ptr<DeleteVideoDnaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVideoDnaWithOptions(request, headers, runtime);
}

DeleteVideoDnaGroupResponse Alibabacloud_Green20180509::Client::deleteVideoDnaGroupWithOptions(shared_ptr<DeleteVideoDnaGroupRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVideoDnaGroup"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/dna/group/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVideoDnaGroupResponse(callApi(params, req, runtime));
}

DeleteVideoDnaGroupResponse Alibabacloud_Green20180509::Client::deleteVideoDnaGroup(shared_ptr<DeleteVideoDnaGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVideoDnaGroupWithOptions(request, headers, runtime);
}

DetectFaceResponse Alibabacloud_Green20180509::Client::detectFaceWithOptions(shared_ptr<DetectFaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectFace"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/face/detect"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectFaceResponse(callApi(params, req, runtime));
}

DetectFaceResponse Alibabacloud_Green20180509::Client::detectFace(shared_ptr<DetectFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return detectFaceWithOptions(request, headers, runtime);
}

FileAsyncScanResponse Alibabacloud_Green20180509::Client::fileAsyncScanWithOptions(shared_ptr<FileAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FileAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/file/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FileAsyncScanResponse(callApi(params, req, runtime));
}

FileAsyncScanResponse Alibabacloud_Green20180509::Client::fileAsyncScan(shared_ptr<FileAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return fileAsyncScanWithOptions(request, headers, runtime);
}

FileAsyncScanResultsResponse Alibabacloud_Green20180509::Client::fileAsyncScanResultsWithOptions(shared_ptr<FileAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FileAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/file/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FileAsyncScanResultsResponse(callApi(params, req, runtime));
}

FileAsyncScanResultsResponse Alibabacloud_Green20180509::Client::fileAsyncScanResults(shared_ptr<FileAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return fileAsyncScanResultsWithOptions(request, headers, runtime);
}

FileAsyncScanV2Response Alibabacloud_Green20180509::Client::fileAsyncScanV2WithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FileAsyncScanV2"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/file/asyncscanv2"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FileAsyncScanV2Response(callApi(params, req, runtime));
}

FileAsyncScanV2Response Alibabacloud_Green20180509::Client::fileAsyncScanV2() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return fileAsyncScanV2WithOptions(headers, runtime);
}

GetFacesResponse Alibabacloud_Green20180509::Client::getFacesWithOptions(shared_ptr<GetFacesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFaces"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/faces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFacesResponse(callApi(params, req, runtime));
}

GetFacesResponse Alibabacloud_Green20180509::Client::getFaces(shared_ptr<GetFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFacesWithOptions(request, headers, runtime);
}

GetGroupsResponse Alibabacloud_Green20180509::Client::getGroupsWithOptions(shared_ptr<GetGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroups"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/groups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupsResponse(callApi(params, req, runtime));
}

GetGroupsResponse Alibabacloud_Green20180509::Client::getGroups(shared_ptr<GetGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getGroupsWithOptions(request, headers, runtime);
}

GetPersonResponse Alibabacloud_Green20180509::Client::getPersonWithOptions(shared_ptr<GetPersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPerson"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/person"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPersonResponse(callApi(params, req, runtime));
}

GetPersonResponse Alibabacloud_Green20180509::Client::getPerson(shared_ptr<GetPersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPersonWithOptions(request, headers, runtime);
}

GetPersonsResponse Alibabacloud_Green20180509::Client::getPersonsWithOptions(shared_ptr<GetPersonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPersons"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/group/persons"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPersonsResponse(callApi(params, req, runtime));
}

GetPersonsResponse Alibabacloud_Green20180509::Client::getPersons(shared_ptr<GetPersonsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getPersonsWithOptions(request, headers, runtime);
}

GetSimilarityImageResponse Alibabacloud_Green20180509::Client::getSimilarityImageWithOptions(shared_ptr<GetSimilarityImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSimilarityImage"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/image/get"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSimilarityImageResponse(callApi(params, req, runtime));
}

GetSimilarityImageResponse Alibabacloud_Green20180509::Client::getSimilarityImage(shared_ptr<GetSimilarityImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSimilarityImageWithOptions(request, headers, runtime);
}

GetSimilarityLibraryResponse Alibabacloud_Green20180509::Client::getSimilarityLibraryWithOptions(shared_ptr<GetSimilarityLibraryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSimilarityLibrary"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/library/get"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSimilarityLibraryResponse(callApi(params, req, runtime));
}

GetSimilarityLibraryResponse Alibabacloud_Green20180509::Client::getSimilarityLibrary(shared_ptr<GetSimilarityLibraryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getSimilarityLibraryWithOptions(request, headers, runtime);
}

ImageAsyncManualScanResponse Alibabacloud_Green20180509::Client::imageAsyncManualScanWithOptions(shared_ptr<ImageAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageAsyncManualScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/image/manual/asyncScan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageAsyncManualScanResponse(callApi(params, req, runtime));
}

ImageAsyncManualScanResponse Alibabacloud_Green20180509::Client::imageAsyncManualScan(shared_ptr<ImageAsyncManualScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return imageAsyncManualScanWithOptions(request, headers, runtime);
}

ImageAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::imageAsyncManualScanResultsWithOptions(shared_ptr<ImageAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageAsyncManualScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/image/manual/scan/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageAsyncManualScanResultsResponse(callApi(params, req, runtime));
}

ImageAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::imageAsyncManualScanResults(shared_ptr<ImageAsyncManualScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return imageAsyncManualScanResultsWithOptions(request, headers, runtime);
}

ImageAsyncScanResponse Alibabacloud_Green20180509::Client::imageAsyncScanWithOptions(shared_ptr<ImageAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/image/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageAsyncScanResponse(callApi(params, req, runtime));
}

ImageAsyncScanResponse Alibabacloud_Green20180509::Client::imageAsyncScan(shared_ptr<ImageAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return imageAsyncScanWithOptions(request, headers, runtime);
}

ImageAsyncScanResultsResponse Alibabacloud_Green20180509::Client::imageAsyncScanResultsWithOptions(shared_ptr<ImageAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/image/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageAsyncScanResultsResponse(callApi(params, req, runtime));
}

ImageAsyncScanResultsResponse Alibabacloud_Green20180509::Client::imageAsyncScanResults(shared_ptr<ImageAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return imageAsyncScanResultsWithOptions(request, headers, runtime);
}

ImageScanFeedbackResponse Alibabacloud_Green20180509::Client::imageScanFeedbackWithOptions(shared_ptr<ImageScanFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageScanFeedback"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/image/feedback"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageScanFeedbackResponse(callApi(params, req, runtime));
}

ImageScanFeedbackResponse Alibabacloud_Green20180509::Client::imageScanFeedback(shared_ptr<ImageScanFeedbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return imageScanFeedbackWithOptions(request, headers, runtime);
}

ImageSyncScanResponse Alibabacloud_Green20180509::Client::imageSyncScanWithOptions(shared_ptr<ImageSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImageSyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/image/scan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImageSyncScanResponse(callApi(params, req, runtime));
}

ImageSyncScanResponse Alibabacloud_Green20180509::Client::imageSyncScan(shared_ptr<ImageSyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return imageSyncScanWithOptions(request, headers, runtime);
}

ListSimilarityImagesResponse Alibabacloud_Green20180509::Client::listSimilarityImagesWithOptions(shared_ptr<ListSimilarityImagesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSimilarityImages"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/image/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSimilarityImagesResponse(callApi(params, req, runtime));
}

ListSimilarityImagesResponse Alibabacloud_Green20180509::Client::listSimilarityImages(shared_ptr<ListSimilarityImagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSimilarityImagesWithOptions(request, headers, runtime);
}

ListSimilarityLibrariesResponse Alibabacloud_Green20180509::Client::listSimilarityLibrariesWithOptions(shared_ptr<ListSimilarityLibrariesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSimilarityLibraries"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/similarity/library/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSimilarityLibrariesResponse(callApi(params, req, runtime));
}

ListSimilarityLibrariesResponse Alibabacloud_Green20180509::Client::listSimilarityLibraries(shared_ptr<ListSimilarityLibrariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listSimilarityLibrariesWithOptions(request, headers, runtime);
}

LiveStreamAsyncScanResponse Alibabacloud_Green20180509::Client::liveStreamAsyncScanWithOptions(shared_ptr<LiveStreamAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LiveStreamAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/livestream/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LiveStreamAsyncScanResponse(callApi(params, req, runtime));
}

LiveStreamAsyncScanResponse Alibabacloud_Green20180509::Client::liveStreamAsyncScan(shared_ptr<LiveStreamAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return liveStreamAsyncScanWithOptions(request, headers, runtime);
}

LiveStreamAsyncScanResultsResponse Alibabacloud_Green20180509::Client::liveStreamAsyncScanResultsWithOptions(shared_ptr<LiveStreamAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LiveStreamAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/livestream/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LiveStreamAsyncScanResultsResponse(callApi(params, req, runtime));
}

LiveStreamAsyncScanResultsResponse Alibabacloud_Green20180509::Client::liveStreamAsyncScanResults(shared_ptr<LiveStreamAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return liveStreamAsyncScanResultsWithOptions(request, headers, runtime);
}

LiveStreamCancelScanResponse Alibabacloud_Green20180509::Client::liveStreamCancelScanWithOptions(shared_ptr<LiveStreamCancelScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LiveStreamCancelScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/livestream/cancelscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LiveStreamCancelScanResponse(callApi(params, req, runtime));
}

LiveStreamCancelScanResponse Alibabacloud_Green20180509::Client::liveStreamCancelScan(shared_ptr<LiveStreamCancelScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return liveStreamCancelScanWithOptions(request, headers, runtime);
}

SetPersonResponse Alibabacloud_Green20180509::Client::setPersonWithOptions(shared_ptr<SetPersonRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetPerson"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/sface/person/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetPersonResponse(callApi(params, req, runtime));
}

SetPersonResponse Alibabacloud_Green20180509::Client::setPerson(shared_ptr<SetPersonRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return setPersonWithOptions(request, headers, runtime);
}

TextAsyncManualScanResponse Alibabacloud_Green20180509::Client::textAsyncManualScanWithOptions(shared_ptr<TextAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextAsyncManualScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/text/manual/asyncScan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextAsyncManualScanResponse(callApi(params, req, runtime));
}

TextAsyncManualScanResponse Alibabacloud_Green20180509::Client::textAsyncManualScan(shared_ptr<TextAsyncManualScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return textAsyncManualScanWithOptions(request, headers, runtime);
}

TextAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::textAsyncManualScanResultsWithOptions(shared_ptr<TextAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextAsyncManualScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/text/manual/scan/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextAsyncManualScanResultsResponse(callApi(params, req, runtime));
}

TextAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::textAsyncManualScanResults(shared_ptr<TextAsyncManualScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return textAsyncManualScanResultsWithOptions(request, headers, runtime);
}

TextFeedbackResponse Alibabacloud_Green20180509::Client::textFeedbackWithOptions(shared_ptr<TextFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextFeedback"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/text/feedback"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextFeedbackResponse(callApi(params, req, runtime));
}

TextFeedbackResponse Alibabacloud_Green20180509::Client::textFeedback(shared_ptr<TextFeedbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return textFeedbackWithOptions(request, headers, runtime);
}

TextScanResponse Alibabacloud_Green20180509::Client::textScanWithOptions(shared_ptr<TextScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TextScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/text/scan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TextScanResponse(callApi(params, req, runtime));
}

TextScanResponse Alibabacloud_Green20180509::Client::textScan(shared_ptr<TextScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return textScanWithOptions(request, headers, runtime);
}

UploadCredentialsResponse Alibabacloud_Green20180509::Client::uploadCredentialsWithOptions(shared_ptr<UploadCredentialsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadCredentials"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/credentials/uploadcredentials"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadCredentialsResponse(callApi(params, req, runtime));
}

UploadCredentialsResponse Alibabacloud_Green20180509::Client::uploadCredentials(shared_ptr<UploadCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return uploadCredentialsWithOptions(request, headers, runtime);
}

VideoAsyncManualScanResponse Alibabacloud_Green20180509::Client::videoAsyncManualScanWithOptions(shared_ptr<VideoAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoAsyncManualScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/manual/asyncScan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoAsyncManualScanResponse(callApi(params, req, runtime));
}

VideoAsyncManualScanResponse Alibabacloud_Green20180509::Client::videoAsyncManualScan(shared_ptr<VideoAsyncManualScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoAsyncManualScanWithOptions(request, headers, runtime);
}

VideoAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::videoAsyncManualScanResultsWithOptions(shared_ptr<VideoAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoAsyncManualScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/manual/scan/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoAsyncManualScanResultsResponse(callApi(params, req, runtime));
}

VideoAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::videoAsyncManualScanResults(shared_ptr<VideoAsyncManualScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoAsyncManualScanResultsWithOptions(request, headers, runtime);
}

VideoAsyncScanResponse Alibabacloud_Green20180509::Client::videoAsyncScanWithOptions(shared_ptr<VideoAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoAsyncScanResponse(callApi(params, req, runtime));
}

VideoAsyncScanResponse Alibabacloud_Green20180509::Client::videoAsyncScan(shared_ptr<VideoAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoAsyncScanWithOptions(request, headers, runtime);
}

VideoAsyncScanResultsResponse Alibabacloud_Green20180509::Client::videoAsyncScanResultsWithOptions(shared_ptr<VideoAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoAsyncScanResultsResponse(callApi(params, req, runtime));
}

VideoAsyncScanResultsResponse Alibabacloud_Green20180509::Client::videoAsyncScanResults(shared_ptr<VideoAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoAsyncScanResultsWithOptions(request, headers, runtime);
}

VideoCancelScanResponse Alibabacloud_Green20180509::Client::videoCancelScanWithOptions(shared_ptr<VideoCancelScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoCancelScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/cancelscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoCancelScanResponse(callApi(params, req, runtime));
}

VideoCancelScanResponse Alibabacloud_Green20180509::Client::videoCancelScan(shared_ptr<VideoCancelScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoCancelScanWithOptions(request, headers, runtime);
}

VideoFeedbackResponse Alibabacloud_Green20180509::Client::videoFeedbackWithOptions(shared_ptr<VideoFeedbackRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoFeedback"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/feedback"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoFeedbackResponse(callApi(params, req, runtime));
}

VideoFeedbackResponse Alibabacloud_Green20180509::Client::videoFeedback(shared_ptr<VideoFeedbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoFeedbackWithOptions(request, headers, runtime);
}

VideoSyncScanResponse Alibabacloud_Green20180509::Client::videoSyncScanWithOptions(shared_ptr<VideoSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VideoSyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/video/syncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VideoSyncScanResponse(callApi(params, req, runtime));
}

VideoSyncScanResponse Alibabacloud_Green20180509::Client::videoSyncScan(shared_ptr<VideoSyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return videoSyncScanWithOptions(request, headers, runtime);
}

VodAsyncScanResponse Alibabacloud_Green20180509::Client::vodAsyncScanWithOptions(shared_ptr<VodAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VodAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/vod/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VodAsyncScanResponse(callApi(params, req, runtime));
}

VodAsyncScanResponse Alibabacloud_Green20180509::Client::vodAsyncScan(shared_ptr<VodAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return vodAsyncScanWithOptions(request, headers, runtime);
}

VodAsyncScanResultsResponse Alibabacloud_Green20180509::Client::vodAsyncScanResultsWithOptions(shared_ptr<VodAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VodAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/vod/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VodAsyncScanResultsResponse(callApi(params, req, runtime));
}

VodAsyncScanResultsResponse Alibabacloud_Green20180509::Client::vodAsyncScanResults(shared_ptr<VodAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return vodAsyncScanResultsWithOptions(request, headers, runtime);
}

VoiceAsyncManualScanResponse Alibabacloud_Green20180509::Client::voiceAsyncManualScanWithOptions(shared_ptr<VoiceAsyncManualScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceAsyncManualScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/manual/asyncScan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceAsyncManualScanResponse(callApi(params, req, runtime));
}

VoiceAsyncManualScanResponse Alibabacloud_Green20180509::Client::voiceAsyncManualScan(shared_ptr<VoiceAsyncManualScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceAsyncManualScanWithOptions(request, headers, runtime);
}

VoiceAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::voiceAsyncManualScanResultsWithOptions(shared_ptr<VoiceAsyncManualScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceAsyncManualScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/manual/scan/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceAsyncManualScanResultsResponse(callApi(params, req, runtime));
}

VoiceAsyncManualScanResultsResponse Alibabacloud_Green20180509::Client::voiceAsyncManualScanResults(shared_ptr<VoiceAsyncManualScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceAsyncManualScanResultsWithOptions(request, headers, runtime);
}

VoiceAsyncScanResponse Alibabacloud_Green20180509::Client::voiceAsyncScanWithOptions(shared_ptr<VoiceAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceAsyncScanResponse(callApi(params, req, runtime));
}

VoiceAsyncScanResponse Alibabacloud_Green20180509::Client::voiceAsyncScan(shared_ptr<VoiceAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceAsyncScanWithOptions(request, headers, runtime);
}

VoiceAsyncScanResultsResponse Alibabacloud_Green20180509::Client::voiceAsyncScanResultsWithOptions(shared_ptr<VoiceAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceAsyncScanResultsResponse(callApi(params, req, runtime));
}

VoiceAsyncScanResultsResponse Alibabacloud_Green20180509::Client::voiceAsyncScanResults(shared_ptr<VoiceAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceAsyncScanResultsWithOptions(request, headers, runtime);
}

VoiceCancelScanResponse Alibabacloud_Green20180509::Client::voiceCancelScanWithOptions(shared_ptr<VoiceCancelScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceCancelScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/cancelscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceCancelScanResponse(callApi(params, req, runtime));
}

VoiceCancelScanResponse Alibabacloud_Green20180509::Client::voiceCancelScan(shared_ptr<VoiceCancelScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceCancelScanWithOptions(request, headers, runtime);
}

VoiceIdentityCheckResponse Alibabacloud_Green20180509::Client::voiceIdentityCheckWithOptions(shared_ptr<VoiceIdentityCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceIdentityCheck"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/auth/check"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceIdentityCheckResponse(callApi(params, req, runtime));
}

VoiceIdentityCheckResponse Alibabacloud_Green20180509::Client::voiceIdentityCheck(shared_ptr<VoiceIdentityCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceIdentityCheckWithOptions(request, headers, runtime);
}

VoiceIdentityRegisterResponse Alibabacloud_Green20180509::Client::voiceIdentityRegisterWithOptions(shared_ptr<VoiceIdentityRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceIdentityRegister"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/auth/register"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceIdentityRegisterResponse(callApi(params, req, runtime));
}

VoiceIdentityRegisterResponse Alibabacloud_Green20180509::Client::voiceIdentityRegister(shared_ptr<VoiceIdentityRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceIdentityRegisterWithOptions(request, headers, runtime);
}

VoiceIdentityStartCheckResponse Alibabacloud_Green20180509::Client::voiceIdentityStartCheckWithOptions(shared_ptr<VoiceIdentityStartCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceIdentityStartCheck"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/auth/start/check"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceIdentityStartCheckResponse(callApi(params, req, runtime));
}

VoiceIdentityStartCheckResponse Alibabacloud_Green20180509::Client::voiceIdentityStartCheck(shared_ptr<VoiceIdentityStartCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceIdentityStartCheckWithOptions(request, headers, runtime);
}

VoiceIdentityStartRegisterResponse Alibabacloud_Green20180509::Client::voiceIdentityStartRegisterWithOptions(shared_ptr<VoiceIdentityStartRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceIdentityStartRegister"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/auth/start/register"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceIdentityStartRegisterResponse(callApi(params, req, runtime));
}

VoiceIdentityStartRegisterResponse Alibabacloud_Green20180509::Client::voiceIdentityStartRegister(shared_ptr<VoiceIdentityStartRegisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceIdentityStartRegisterWithOptions(request, headers, runtime);
}

VoiceIdentityUnregisterResponse Alibabacloud_Green20180509::Client::voiceIdentityUnregisterWithOptions(shared_ptr<VoiceIdentityUnregisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceIdentityUnregister"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/auth/unregister"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceIdentityUnregisterResponse(callApi(params, req, runtime));
}

VoiceIdentityUnregisterResponse Alibabacloud_Green20180509::Client::voiceIdentityUnregister(shared_ptr<VoiceIdentityUnregisterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceIdentityUnregisterWithOptions(request, headers, runtime);
}

VoiceSyncScanResponse Alibabacloud_Green20180509::Client::voiceSyncScanWithOptions(shared_ptr<VoiceSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VoiceSyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/voice/syncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VoiceSyncScanResponse(callApi(params, req, runtime));
}

VoiceSyncScanResponse Alibabacloud_Green20180509::Client::voiceSyncScan(shared_ptr<VoiceSyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return voiceSyncScanWithOptions(request, headers, runtime);
}

WebpageAsyncScanResponse Alibabacloud_Green20180509::Client::webpageAsyncScanWithOptions(shared_ptr<WebpageAsyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WebpageAsyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/webpage/asyncscan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WebpageAsyncScanResponse(callApi(params, req, runtime));
}

WebpageAsyncScanResponse Alibabacloud_Green20180509::Client::webpageAsyncScan(shared_ptr<WebpageAsyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return webpageAsyncScanWithOptions(request, headers, runtime);
}

WebpageAsyncScanResultsResponse Alibabacloud_Green20180509::Client::webpageAsyncScanResultsWithOptions(shared_ptr<WebpageAsyncScanResultsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WebpageAsyncScanResults"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/webpage/results"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WebpageAsyncScanResultsResponse(callApi(params, req, runtime));
}

WebpageAsyncScanResultsResponse Alibabacloud_Green20180509::Client::webpageAsyncScanResults(shared_ptr<WebpageAsyncScanResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return webpageAsyncScanResultsWithOptions(request, headers, runtime);
}

WebpageSyncScanResponse Alibabacloud_Green20180509::Client::webpageSyncScanWithOptions(shared_ptr<WebpageSyncScanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInfo)) {
    query->insert(pair<string, string>("ClientInfo", *request->clientInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WebpageSyncScan"))},
    {"version", boost::any(string("2018-05-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/green/webpage/scan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WebpageSyncScanResponse(callApi(params, req, runtime));
}

WebpageSyncScanResponse Alibabacloud_Green20180509::Client::webpageSyncScan(shared_ptr<WebpageSyncScanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return webpageSyncScanWithOptions(request, headers, runtime);
}

