// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/arms20161031.hpp>
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

using namespace Alibabacloud_ARMS20161031;

Alibabacloud_ARMS20161031::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "arms.aliyuncs.com"},
    {"cn-beijing-finance-1", "arms.aliyuncs.com"},
    {"cn-beijing-finance-pop", "arms.aliyuncs.com"},
    {"cn-beijing-gov-1", "arms.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "arms.aliyuncs.com"},
    {"cn-edge-1", "arms.aliyuncs.com"},
    {"cn-fujian", "arms.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "arms.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "arms.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "arms.aliyuncs.com"},
    {"cn-hangzhou-test-306", "arms.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "arms.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "arms.aliyuncs.com"},
    {"cn-qingdao-nebula", "arms.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "arms.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "arms.aliyuncs.com"},
    {"cn-shanghai-inner", "arms.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "arms.aliyuncs.com"},
    {"cn-shenzhen-inner", "arms.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "arms.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "arms.aliyuncs.com"},
    {"cn-wuhan", "arms.aliyuncs.com"},
    {"cn-yushanfang", "arms.aliyuncs.com"},
    {"cn-zhangbei", "arms.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "arms.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "arms.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "arms.aliyuncs.com"},
    {"eu-west-1-oxs", "arms.aliyuncs.com"},
    {"me-east-1", "arms.aliyuncs.com"},
    {"rus-west-1-pop", "arms.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("arms"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ARMS20161031::Client::getEndpoint(shared_ptr<string> productId,
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

ARMSQueryDataSetResponse Alibabacloud_ARMS20161031::Client::aRMSQueryDataSetWithOptions(shared_ptr<ARMSQueryDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    query->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dateStr)) {
    query->insert(pair<string, long>("DateStr", *request->dateStr));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ARMSQueryDataSetRequestDimensions>>(request->dimensions)) {
    query->insert(pair<string, vector<ARMSQueryDataSetRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalInSec)) {
    query->insert(pair<string, long>("IntervalInSec", *request->intervalInSec));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDetail)) {
    query->insert(pair<string, bool>("IsDetail", *request->isDetail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxTime)) {
    query->insert(pair<string, long>("MaxTime", *request->maxTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->measures)) {
    query->insert(pair<string, vector<string>>("Measures", *request->measures));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minTime)) {
    query->insert(pair<string, long>("MinTime", *request->minTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ARMSQueryDataSet"))},
    {"version", boost::any(string("2016-10-31"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ARMSQueryDataSetResponse(callApi(params, req, runtime));
}

ARMSQueryDataSetResponse Alibabacloud_ARMS20161031::Client::aRMSQueryDataSet(shared_ptr<ARMSQueryDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aRMSQueryDataSetWithOptions(request, runtime);
}

