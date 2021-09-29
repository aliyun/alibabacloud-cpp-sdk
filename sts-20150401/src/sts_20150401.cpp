// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/sts_20150401.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssumeRoleResponse(doRPCRequest(make_shared<string>("AssumeRole"), make_shared<string>("2015-04-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssumeRoleResponse Alibabacloud_Sts20150401::Client::assumeRole(shared_ptr<AssumeRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assumeRoleWithOptions(request, runtime);
}

AssumeRoleWithOIDCResponse Alibabacloud_Sts20150401::Client::assumeRoleWithOIDCWithOptions(shared_ptr<AssumeRoleWithOIDCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssumeRoleWithOIDCResponse(doRPCRequest(make_shared<string>("AssumeRoleWithOIDC"), make_shared<string>("2015-04-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssumeRoleWithOIDCResponse Alibabacloud_Sts20150401::Client::assumeRoleWithOIDC(shared_ptr<AssumeRoleWithOIDCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assumeRoleWithOIDCWithOptions(request, runtime);
}

AssumeRoleWithSAMLResponse Alibabacloud_Sts20150401::Client::assumeRoleWithSAMLWithOptions(shared_ptr<AssumeRoleWithSAMLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssumeRoleWithSAMLResponse(doRPCRequest(make_shared<string>("AssumeRoleWithSAML"), make_shared<string>("2015-04-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssumeRoleWithSAMLResponse Alibabacloud_Sts20150401::Client::assumeRoleWithSAML(shared_ptr<AssumeRoleWithSAMLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assumeRoleWithSAMLWithOptions(request, runtime);
}

GetCallerIdentityResponse Alibabacloud_Sts20150401::Client::getCallerIdentityWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetCallerIdentityResponse(doRPCRequest(make_shared<string>("GetCallerIdentity"), make_shared<string>("2015-04-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCallerIdentityResponse Alibabacloud_Sts20150401::Client::getCallerIdentity() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCallerIdentityWithOptions(runtime);
}

