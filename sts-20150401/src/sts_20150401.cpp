// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sts_20150401.hpp>
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

using namespace Alibabacloud_Sts20150401;

Alibabacloud_Sts20150401::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "sts.aliyuncs.com"},
    {"cn-beijing-finance-1", "sts.aliyuncs.com"},
    {"cn-beijing-finance-pop", "sts.aliyuncs.com"},
    {"cn-beijing-gov-1", "sts.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "sts.aliyuncs.com"},
    {"cn-edge-1", "sts.aliyuncs.com"},
    {"cn-fujian", "sts.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "sts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "sts.aliyuncs.com"},
    {"cn-hangzhou-finance", "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "sts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "sts.aliyuncs.com"},
    {"cn-hangzhou-test-306", "sts.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "sts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "sts.aliyuncs.com"},
    {"cn-north-2-gov-1", "sts-vpc.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-qingdao-nebula", "sts.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "sts.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "sts.aliyuncs.com"},
    {"cn-shanghai-inner", "sts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "sts.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "sts-vpc.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen-inner", "sts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "sts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "sts.aliyuncs.com"},
    {"cn-wuhan", "sts.aliyuncs.com"},
    {"cn-yushanfang", "sts.aliyuncs.com"},
    {"cn-zhangbei", "sts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "sts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "sts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "sts.aliyuncs.com"},
    {"eu-west-1-oxs", "sts.aliyuncs.com"},
    {"rus-west-1-pop", "sts.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("sts"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Sts20150401::Client::getEndpoint(shared_ptr<string> productId,
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

AssumeRoleResponse Alibabacloud_Sts20150401::Client::assumeRoleWithOptions(shared_ptr<AssumeRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->durationSeconds)) {
    query->insert(pair<string, long>("DurationSeconds", *request->durationSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleArn)) {
    query->insert(pair<string, string>("RoleArn", *request->roleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleSessionName)) {
    query->insert(pair<string, string>("RoleSessionName", *request->roleSessionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssumeRole"))},
    {"version", boost::any(string("2015-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssumeRoleResponse(callApi(params, req, runtime));
}

AssumeRoleResponse Alibabacloud_Sts20150401::Client::assumeRole(shared_ptr<AssumeRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assumeRoleWithOptions(request, runtime);
}

AssumeRoleWithOIDCResponse Alibabacloud_Sts20150401::Client::assumeRoleWithOIDCWithOptions(shared_ptr<AssumeRoleWithOIDCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->durationSeconds)) {
    query->insert(pair<string, long>("DurationSeconds", *request->durationSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderArn)) {
    query->insert(pair<string, string>("OIDCProviderArn", *request->OIDCProviderArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCToken)) {
    query->insert(pair<string, string>("OIDCToken", *request->OIDCToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleArn)) {
    query->insert(pair<string, string>("RoleArn", *request->roleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleSessionName)) {
    query->insert(pair<string, string>("RoleSessionName", *request->roleSessionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssumeRoleWithOIDC"))},
    {"version", boost::any(string("2015-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssumeRoleWithOIDCResponse(callApi(params, req, runtime));
}

AssumeRoleWithOIDCResponse Alibabacloud_Sts20150401::Client::assumeRoleWithOIDC(shared_ptr<AssumeRoleWithOIDCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assumeRoleWithOIDCWithOptions(request, runtime);
}

AssumeRoleWithSAMLResponse Alibabacloud_Sts20150401::Client::assumeRoleWithSAMLWithOptions(shared_ptr<AssumeRoleWithSAMLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->durationSeconds)) {
    query->insert(pair<string, long>("DurationSeconds", *request->durationSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policy)) {
    query->insert(pair<string, string>("Policy", *request->policy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleArn)) {
    query->insert(pair<string, string>("RoleArn", *request->roleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SAMLAssertion)) {
    query->insert(pair<string, string>("SAMLAssertion", *request->SAMLAssertion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SAMLProviderArn)) {
    query->insert(pair<string, string>("SAMLProviderArn", *request->SAMLProviderArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssumeRoleWithSAML"))},
    {"version", boost::any(string("2015-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AssumeRoleWithSAMLResponse(callApi(params, req, runtime));
}

AssumeRoleWithSAMLResponse Alibabacloud_Sts20150401::Client::assumeRoleWithSAML(shared_ptr<AssumeRoleWithSAMLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assumeRoleWithSAMLWithOptions(request, runtime);
}

GetCallerIdentityResponse Alibabacloud_Sts20150401::Client::getCallerIdentityWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCallerIdentity"))},
    {"version", boost::any(string("2015-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCallerIdentityResponse(callApi(params, req, runtime));
}

GetCallerIdentityResponse Alibabacloud_Sts20150401::Client::getCallerIdentity() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCallerIdentityWithOptions(runtime);
}

