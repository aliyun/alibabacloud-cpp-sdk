// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nbf_test_pop_20210916103600223.hpp>
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

using namespace Alibabacloud_NbfTestPop20210916103600223;

Alibabacloud_NbfTestPop20210916103600223::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nbftestpop"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_NbfTestPop20210916103600223::Client::getEndpoint(shared_ptr<string> productId,
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

AddResponse Alibabacloud_NbfTestPop20210916103600223::Client::add(shared_ptr<AddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return addWithOptions(request, headers, runtime);
}

AddResponse Alibabacloud_NbfTestPop20210916103600223::Client::addWithOptions(shared_ptr<AddRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->x)) {
    (*query)["x"] = *request->x;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->y)) {
    (*query)["y"] = *request->y;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return AddResponse(doROARequest(make_shared<string>("Add"), make_shared<string>("2021-09-16_10-36-00-223"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>(string("/kxRoaProduct/9_0_9/add")), make_shared<string>("json"), req, runtime));
}

ResolveOpenApiResponse Alibabacloud_NbfTestPop20210916103600223::Client::resolveOpenApi(shared_ptr<ResolveOpenApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return resolveOpenApiWithOptions(request, headers, runtime);
}

ResolveOpenApiResponse Alibabacloud_NbfTestPop20210916103600223::Client::resolveOpenApiWithOptions(shared_ptr<ResolveOpenApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    (*query)["name"] = *request->name;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->age)) {
    (*query)["age"] = *request->age;
  }
  if (!Darabonba_Util::Client::isUnset<ResolveOpenApiRequestTeacher>(request->teacher)) {
    (*query)["teacher"] = *request->teacher;
  }
  if (!Darabonba_Util::Client::isUnset<vector<undefined>>(request->friends)) {
    (*query)["friends"] = *request->friends;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  return ResolveOpenApiResponse(doROARequest(make_shared<string>("ResolveOpenApi"), make_shared<string>("2021-09-16_10-36-00-223"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>(string("/kxRoaProduct/9_0_9/resolveOpenApi")), make_shared<string>("json"), req, runtime));
}

