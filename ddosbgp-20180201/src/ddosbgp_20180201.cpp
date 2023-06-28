// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ddosbgp_20180201.hpp>
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

using namespace Alibabacloud_Ddosbgp20180201;

Alibabacloud_Ddosbgp20180201::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "ddosbgp.aliyuncs.com"},
    {"cn-beijing", "ddosbgp.aliyuncs.com"},
    {"cn-zhangjiakou", "ddosbgp.aliyuncs.com"},
    {"cn-huhehaote", "ddosbgp.aliyuncs.com"},
    {"cn-hangzhou", "ddosbgp.aliyuncs.com"},
    {"cn-shanghai", "ddosbgp.aliyuncs.com"},
    {"cn-shenzhen", "ddosbgp.aliyuncs.com"},
    {"ap-northeast-1", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu", "ddosbgp.aliyuncs.com"},
    {"eu-central-1", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "ddosbgp.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "ddosbgp.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ddosbgp.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ddosbgp.aliyuncs.com"},
    {"cn-north-2-gov-1", "ddosbgp.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ddosbgp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ddosbgp20180201::Client::getEndpoint(shared_ptr<string> productId,
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

ReleaseInstanceResponse Alibabacloud_Ddosbgp20180201::Client::releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseInstance"))},
    {"version", boost::any(string("2018-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseInstanceResponse(callApi(params, req, runtime));
}

ReleaseInstanceResponse Alibabacloud_Ddosbgp20180201::Client::releaseInstance(shared_ptr<ReleaseInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseInstanceWithOptions(request, runtime);
}

