// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ft_20210101.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Ft20210101;

Alibabacloud_Ft20210101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "ft.aliyuncs.com"},
    {"ap-south-1", "ft.aliyuncs.com"},
    {"ap-southeast-1", "ft.aliyuncs.com"},
    {"ap-southeast-2", "ft.aliyuncs.com"},
    {"ap-southeast-3", "ft.aliyuncs.com"},
    {"ap-southeast-5", "ft.aliyuncs.com"},
    {"cn-beijing", "ft.aliyuncs.com"},
    {"cn-beijing-finance-1", "ft.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ft.aliyuncs.com"},
    {"cn-beijing-gov-1", "ft.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ft.aliyuncs.com"},
    {"cn-chengdu", "ft.aliyuncs.com"},
    {"cn-edge-1", "ft.aliyuncs.com"},
    {"cn-fujian", "ft.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ft.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ft.aliyuncs.com"},
    {"cn-hangzhou-finance", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ft.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ft.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ft.aliyuncs.com"},
    {"cn-huhehaote", "ft.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ft.aliyuncs.com"},
    {"cn-qingdao", "ft.aliyuncs.com"},
    {"cn-qingdao-nebula", "ft.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ft.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ft.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ft.aliyuncs.com"},
    {"cn-shanghai-inner", "ft.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ft.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ft.aliyuncs.com"},
    {"cn-shenzhen-inner", "ft.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ft.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ft.aliyuncs.com"},
    {"cn-wuhan", "ft.aliyuncs.com"},
    {"cn-wulanchabu", "ft.aliyuncs.com"},
    {"cn-yushanfang", "ft.aliyuncs.com"},
    {"cn-zhangbei", "ft.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ft.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ft.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ft.aliyuncs.com"},
    {"eu-central-1", "ft.aliyuncs.com"},
    {"eu-west-1", "ft.aliyuncs.com"},
    {"eu-west-1-oxs", "ft.aliyuncs.com"},
    {"me-east-1", "ft.aliyuncs.com"},
    {"rus-west-1-pop", "ft.aliyuncs.com"},
    {"us-west-1", "ft.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ft"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ft20210101::Client::getEndpoint(shared_ptr<string> productId,
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

CreateRPCPathTestResponse Alibabacloud_Ft20210101::Client::createRPCPathTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRPCPathTest"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRPCPathTestResponse(callApi(params, req, runtime));
}

CreateRPCPathTestResponse Alibabacloud_Ft20210101::Client::createRPCPathTest() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRPCPathTestWithOptions(runtime);
}

CreateRamTestResponse Alibabacloud_Ft20210101::Client::createRamTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRamTest"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRamTestResponse(callApi(params, req, runtime));
}

CreateRamTestResponse Alibabacloud_Ft20210101::Client::createRamTest() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRamTestWithOptions(runtime);
}

DataRateLimitTestResponse Alibabacloud_Ft20210101::Client::dataRateLimitTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DataRateLimitTest"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DataRateLimitTestResponse(callApi(params, req, runtime));
}

DataRateLimitTestResponse Alibabacloud_Ft20210101::Client::dataRateLimitTest() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dataRateLimitTestWithOptions(runtime);
}

NormalRpcHsfApiResponse Alibabacloud_Ft20210101::Client::normalRpcHsfApiWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NormalRpcHsfApi"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NormalRpcHsfApiResponse(callApi(params, req, runtime));
}

NormalRpcHsfApiResponse Alibabacloud_Ft20210101::Client::normalRpcHsfApi() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return normalRpcHsfApiWithOptions(runtime);
}

NormalRpcHttpApiResponse Alibabacloud_Ft20210101::Client::normalRpcHttpApiWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NormalRpcHttpApi"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NormalRpcHttpApiResponse(callApi(params, req, runtime));
}

NormalRpcHttpApiResponse Alibabacloud_Ft20210101::Client::normalRpcHttpApi() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return normalRpcHttpApiWithOptions(runtime);
}

RpcDataUploadResponse Alibabacloud_Ft20210101::Client::rpcDataUploadWithOptions(shared_ptr<RpcDataUploadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query1)) {
    query->insert(pair<string, string>("query1", *request->query1));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->query2)) {
    query->insert(pair<string, long>("query2", *request->query2));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->largeParam)) {
    body->insert(pair<string, string>("largeParam", *request->largeParam));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RpcDataUpload"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RpcDataUploadResponse(callApi(params, req, runtime));
}

RpcDataUploadResponse Alibabacloud_Ft20210101::Client::rpcDataUpload(shared_ptr<RpcDataUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rpcDataUploadWithOptions(request, runtime);
}

RpcDataUploadAndDownloadResponse Alibabacloud_Ft20210101::Client::rpcDataUploadAndDownloadWithOptions(shared_ptr<RpcDataUploadAndDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query1)) {
    query->insert(pair<string, string>("query1", *request->query1));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RpcDataUploadAndDownload"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RpcDataUploadAndDownloadResponse(callApi(params, req, runtime));
}

RpcDataUploadAndDownloadResponse Alibabacloud_Ft20210101::Client::rpcDataUploadAndDownload(shared_ptr<RpcDataUploadAndDownloadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rpcDataUploadAndDownloadWithOptions(request, runtime);
}

RpcDataUploadTestResponse Alibabacloud_Ft20210101::Client::rpcDataUploadTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RpcDataUploadTest"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RpcDataUploadTestResponse(callApi(params, req, runtime));
}

RpcDataUploadTestResponse Alibabacloud_Ft20210101::Client::rpcDataUploadTest() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rpcDataUploadTestWithOptions(runtime);
}

RpcUploadDemoResponse Alibabacloud_Ft20210101::Client::rpcUploadDemoWithOptions(shared_ptr<RpcUploadDemoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<RpcUploadDemoRequestCardData>(request->cardData)) {
    body->insert(pair<string, RpcUploadDemoRequestCardData>("cardData", *request->cardData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outTrackId)) {
    body->insert(pair<string, string>("outTrackId", *request->outTrackId));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->privateData)) {
    body->insert(pair<string, map<string, string>>("privateData", *request->privateData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RpcUploadDemo"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RpcUploadDemoResponse(callApi(params, req, runtime));
}

RpcUploadDemoResponse Alibabacloud_Ft20210101::Client::rpcUploadDemo(shared_ptr<RpcUploadDemoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rpcUploadDemoWithOptions(request, runtime);
}

ServiceRouteTestResponse Alibabacloud_Ft20210101::Client::serviceRouteTestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ServiceRouteTest"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ServiceRouteTestResponse(callApi(params, req, runtime));
}

ServiceRouteTestResponse Alibabacloud_Ft20210101::Client::serviceRouteTest() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return serviceRouteTestWithOptions(runtime);
}

UserGcFetchResponse Alibabacloud_Ft20210101::Client::userGcFetchWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UserGcFetch"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UserGcFetchResponse(callApi(params, req, runtime));
}

UserGcFetchResponse Alibabacloud_Ft20210101::Client::userGcFetch() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return userGcFetchWithOptions(runtime);
}

UserGcGrayResponse Alibabacloud_Ft20210101::Client::userGcGrayWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UserGcGray"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UserGcGrayResponse(callApi(params, req, runtime));
}

UserGcGrayResponse Alibabacloud_Ft20210101::Client::userGcGray() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return userGcGrayWithOptions(runtime);
}

UserGcSerivceGrayResponse Alibabacloud_Ft20210101::Client::userGcSerivceGrayWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UserGcSerivceGray"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UserGcSerivceGrayResponse(callApi(params, req, runtime));
}

UserGcSerivceGrayResponse Alibabacloud_Ft20210101::Client::userGcSerivceGray() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return userGcSerivceGrayWithOptions(runtime);
}

VpcInstanceAccessTestYResponse Alibabacloud_Ft20210101::Client::vpcInstanceAccessTestYWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VpcInstanceAccessTestY"))},
    {"version", boost::any(string("2021-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VpcInstanceAccessTestYResponse(callApi(params, req, runtime));
}

VpcInstanceAccessTestYResponse Alibabacloud_Ft20210101::Client::vpcInstanceAccessTestY() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vpcInstanceAccessTestYWithOptions(runtime);
}

