// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nbf2021111021312586.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_NBF2021111021312586;

Alibabacloud_NBF2021111021312586::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nbf"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_NBF2021111021312586::Client::getEndpoint(shared_ptr<string> productId,
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

ApiTestResponse Alibabacloud_NBF2021111021312586::Client::apiTestWithOptions(shared_ptr<ApiTestRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->testCmd)) {
    query->insert(pair<string, string>("testCmd", *request->testCmd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApiTest"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/apiTest"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return ApiTestResponse(callApi(params, req, runtime));
}

ApiTestResponse Alibabacloud_NBF2021111021312586::Client::apiTest(shared_ptr<ApiTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return apiTestWithOptions(request, headers, runtime);
}

BuildSdkResponse Alibabacloud_NBF2021111021312586::Client::buildSdkWithOptions(shared_ptr<BuildSdkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buildCmd)) {
    query->insert(pair<string, string>("buildCmd", *request->buildCmd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BuildSdk"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/buildSdk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return BuildSdkResponse(callApi(params, req, runtime));
}

BuildSdkResponse Alibabacloud_NBF2021111021312586::Client::buildSdk(shared_ptr<BuildSdkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return buildSdkWithOptions(request, headers, runtime);
}

CreateAndReleaseApiResponse Alibabacloud_NBF2021111021312586::Client::createAndReleaseApiWithOptions(shared_ptr<CreateAndReleaseApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creatApiCmd)) {
    query->insert(pair<string, string>("creatApiCmd", *request->creatApiCmd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAndReleaseApi"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/createAndReleaseApi"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return CreateAndReleaseApiResponse(callApi(params, req, runtime));
}

CreateAndReleaseApiResponse Alibabacloud_NBF2021111021312586::Client::createAndReleaseApi(shared_ptr<CreateAndReleaseApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAndReleaseApiWithOptions(request, headers, runtime);
}

CreateSdkVersionResponse Alibabacloud_NBF2021111021312586::Client::createSdkVersionWithOptions(shared_ptr<CreateSdkVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSdkCmd)) {
    query->insert(pair<string, string>("createSdkCmd", *request->createSdkCmd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSdkVersion"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/createSdkVersion"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return CreateSdkVersionResponse(callApi(params, req, runtime));
}

CreateSdkVersionResponse Alibabacloud_NBF2021111021312586::Client::createSdkVersion(shared_ptr<CreateSdkVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createSdkVersionWithOptions(request, headers, runtime);
}

DeleteApiResponse Alibabacloud_NBF2021111021312586::Client::deleteApiWithOptions(shared_ptr<DeleteApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiExternalId)) {
    query->insert(pair<string, string>("apiExternalId", *request->apiExternalId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApi"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/deleteApi"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return DeleteApiResponse(callApi(params, req, runtime));
}

DeleteApiResponse Alibabacloud_NBF2021111021312586::Client::deleteApi(shared_ptr<DeleteApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteApiWithOptions(request, headers, runtime);
}

GetResultResponse Alibabacloud_NBF2021111021312586::Client::getResultWithOptions(shared_ptr<GetResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResult"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/getResult"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return GetResultResponse(callApi(params, req, runtime));
}

GetResultResponse Alibabacloud_NBF2021111021312586::Client::getResult(shared_ptr<GetResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResultWithOptions(request, headers, runtime);
}

OpenApiGenericProxyResponse Alibabacloud_NBF2021111021312586::Client::openApiGenericProxyWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenApiGenericProxy"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/openApiGenericProxy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenApiGenericProxyResponse(callApi(params, req, runtime));
}

OpenApiGenericProxyResponse Alibabacloud_NBF2021111021312586::Client::openApiGenericProxy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return openApiGenericProxyWithOptions(headers, runtime);
}

PreCheckResponse Alibabacloud_NBF2021111021312586::Client::preCheckWithOptions(shared_ptr<PreCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiSchemaDTO)) {
    query->insert(pair<string, string>("apiSchemaDTO", *request->apiSchemaDTO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupVersionExtraInfo)) {
    query->insert(pair<string, string>("groupVersionExtraInfo", *request->groupVersionExtraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespaceExternalId)) {
    query->insert(pair<string, string>("namespaceExternalId", *request->namespaceExternalId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreCheck"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/preCheck"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return PreCheckResponse(callApi(params, req, runtime));
}

PreCheckResponse Alibabacloud_NBF2021111021312586::Client::preCheck(shared_ptr<PreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return preCheckWithOptions(request, headers, runtime);
}

PublishSdkResponse Alibabacloud_NBF2021111021312586::Client::publishSdkWithOptions(shared_ptr<PublishSdkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishSdk"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/publishSdk"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return PublishSdkResponse(callApi(params, req, runtime));
}

PublishSdkResponse Alibabacloud_NBF2021111021312586::Client::publishSdk(shared_ptr<PublishSdkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishSdkWithOptions(request, headers, runtime);
}

SerializeApiResponse Alibabacloud_NBF2021111021312586::Client::serializeApiWithOptions(shared_ptr<SerializeApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiSchemaDTO)) {
    query->insert(pair<string, string>("apiSchemaDTO", *request->apiSchemaDTO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SerializeApi"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/serializeApi"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return SerializeApiResponse(callApi(params, req, runtime));
}

SerializeApiResponse Alibabacloud_NBF2021111021312586::Client::serializeApi(shared_ptr<SerializeApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return serializeApiWithOptions(request, headers, runtime);
}

UpdateAndReleaseApiResponse Alibabacloud_NBF2021111021312586::Client::updateAndReleaseApiWithOptions(shared_ptr<UpdateAndReleaseApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->updateApiCmd)) {
    query->insert(pair<string, string>("updateApiCmd", *request->updateApiCmd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAndReleaseApi"))},
    {"version", boost::any(string("2021-11-10_21-31-25-86"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/nbf_gateway_inner/1_0_0/updateAndReleaseApi"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("string"))}
  }));
  return UpdateAndReleaseApiResponse(callApi(params, req, runtime));
}

UpdateAndReleaseApiResponse Alibabacloud_NBF2021111021312586::Client::updateAndReleaseApi(shared_ptr<UpdateAndReleaseApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateAndReleaseApiWithOptions(request, headers, runtime);
}

