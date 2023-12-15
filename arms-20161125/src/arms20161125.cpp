// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/arms20161125.hpp>
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

using namespace Alibabacloud_ARMS20161125;

Alibabacloud_ARMS20161125::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_ARMS20161125::Client::getEndpoint(shared_ptr<string> productId,
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

ARMSQueryDataSetResponse Alibabacloud_ARMS20161125::Client::aRMSQueryDataSetWithOptions(shared_ptr<ARMSQueryDataSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->hungryMode)) {
    query->insert(pair<string, bool>("HungryMode", *request->hungryMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalInSec)) {
    query->insert(pair<string, long>("IntervalInSec", *request->intervalInSec));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDrillDown)) {
    query->insert(pair<string, bool>("IsDrillDown", *request->isDrillDown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
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
  if (!Darabonba_Util::Client::isUnset<vector<ARMSQueryDataSetRequestOptionalDims>>(request->optionalDims)) {
    query->insert(pair<string, vector<ARMSQueryDataSetRequestOptionalDims>>("OptionalDims", *request->optionalDims));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByKey)) {
    query->insert(pair<string, string>("OrderByKey", *request->orderByKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reduceTail)) {
    query->insert(pair<string, bool>("ReduceTail", *request->reduceTail));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ARMSQueryDataSetRequestRequiredDims>>(request->requiredDims)) {
    query->insert(pair<string, vector<ARMSQueryDataSetRequestRequiredDims>>("RequiredDims", *request->requiredDims));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ARMSQueryDataSet"))},
    {"version", boost::any(string("2016-11-25"))},
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

ARMSQueryDataSetResponse Alibabacloud_ARMS20161125::Client::aRMSQueryDataSet(shared_ptr<ARMSQueryDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aRMSQueryDataSetWithOptions(request, runtime);
}

WhereInDimQueryResponse Alibabacloud_ARMS20161125::Client::whereInDimQueryWithOptions(shared_ptr<WhereInDimQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    query->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dateStr)) {
    query->insert(pair<string, string>("DateStr", *request->dateStr));
  }
  if (!Darabonba_Util::Client::isUnset<vector<WhereInDimQueryRequestDimensions>>(request->dimensions)) {
    query->insert(pair<string, vector<WhereInDimQueryRequestDimensions>>("Dimensions", *request->dimensions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intervalInSec)) {
    query->insert(pair<string, long>("IntervalInSec", *request->intervalInSec));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDrillDown)) {
    query->insert(pair<string, bool>("IsDrillDown", *request->isDrillDown));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByKey)) {
    query->insert(pair<string, string>("OrderByKey", *request->orderByKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reduceTail)) {
    query->insert(pair<string, bool>("ReduceTail", *request->reduceTail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whereInKey)) {
    query->insert(pair<string, string>("WhereInKey", *request->whereInKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->whereInValues)) {
    query->insert(pair<string, vector<string>>("WhereInValues", *request->whereInValues));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WhereInDimQuery"))},
    {"version", boost::any(string("2016-11-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WhereInDimQueryResponse(callApi(params, req, runtime));
}

WhereInDimQueryResponse Alibabacloud_ARMS20161125::Client::whereInDimQuery(shared_ptr<WhereInDimQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return whereInDimQueryWithOptions(request, runtime);
}

