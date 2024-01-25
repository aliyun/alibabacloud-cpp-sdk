// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/nbf__vpc__cloud_20211115131123360.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_NBF-VPC-Cloud20211115131123360;

Alibabacloud_NBF-VPC-Cloud20211115131123360::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("nbf-vpc-cloud"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_NBF-VPC-Cloud20211115131123360::Client::getEndpoint(shared_ptr<string> productId,
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

AdadaAResponse Alibabacloud_NBF-VPC-Cloud20211115131123360::Client::adadaAWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AdadaA"))},
    {"version", boost::any(string("2021-11-15_13-11-23-360"))},
    {"protocol", boost::any(string("HTTP"))},
    {"pathname", boost::any(string("/caihe_cloud_product_1/1_0_0/adadaA"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AdadaAResponse(callApi(params, req, runtime));
}

AdadaAResponse Alibabacloud_NBF-VPC-Cloud20211115131123360::Client::adadaA() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return adadaAWithOptions(headers, runtime);
}

YxTestApiResponse Alibabacloud_NBF-VPC-Cloud20211115131123360::Client::yxTestApiWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("YxTestApi"))},
    {"version", boost::any(string("2021-11-15_13-11-23-360"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/caihe_cloud_product_1/1_0_0/yxTestApi"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return YxTestApiResponse(callApi(params, req, runtime));
}

YxTestApiResponse Alibabacloud_NBF-VPC-Cloud20211115131123360::Client::yxTestApi() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return yxTestApiWithOptions(headers, runtime);
}

