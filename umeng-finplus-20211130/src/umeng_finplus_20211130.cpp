// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/umeng_finplus_20211130.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Umeng-finplus20211130;

Alibabacloud_Umeng-finplus20211130::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("umeng-finplus"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Umeng-finplus20211130::Client::getEndpoint(shared_ptr<string> productId,
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

CancelComputeTaskByBcIdResponse Alibabacloud_Umeng-finplus20211130::Client::cancelComputeTaskByBcIdWithOptions(shared_ptr<CancelComputeTaskByBcIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bcId)) {
    query->insert(pair<string, long>("bcId", *request->bcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelComputeTaskByBcId"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/cancelComputeTaskByBcId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelComputeTaskByBcIdResponse(callApi(params, req, runtime));
}

CancelComputeTaskByBcIdResponse Alibabacloud_Umeng-finplus20211130::Client::cancelComputeTaskByBcId(shared_ptr<CancelComputeTaskByBcIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelComputeTaskByBcIdWithOptions(request, headers, runtime);
}

CreateComputeTaskByDataSetIdResponse Alibabacloud_Umeng-finplus20211130::Client::createComputeTaskByDataSetIdWithOptions(shared_ptr<CreateComputeTaskByDataSetIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateComputeTaskByDataSetIdRequestBatchInfoForm>>(request->batchInfoForm)) {
    body->insert(pair<string, vector<CreateComputeTaskByDataSetIdRequestBatchInfoForm>>("BatchInfoForm", *request->batchInfoForm));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("Remarks", *request->remarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateComputeTaskByDataSetId"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/createComputeTaskByDataSetId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateComputeTaskByDataSetIdResponse(callApi(params, req, runtime));
}

CreateComputeTaskByDataSetIdResponse Alibabacloud_Umeng-finplus20211130::Client::createComputeTaskByDataSetId(shared_ptr<CreateComputeTaskByDataSetIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createComputeTaskByDataSetIdWithOptions(request, headers, runtime);
}

CreateComputeTaskByMultiDataSetIdResponse Alibabacloud_Umeng-finplus20211130::Client::createComputeTaskByMultiDataSetIdWithOptions(shared_ptr<CreateComputeTaskByMultiDataSetIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    body->insert(pair<string, long>("appId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSetIds)) {
    body->insert(pair<string, string>("dataSetIds", *request->dataSetIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("remarks", *request->remarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateComputeTaskByMultiDataSetId"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/createComputeTaskByMultiDataSetId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateComputeTaskByMultiDataSetIdResponse(callApi(params, req, runtime));
}

CreateComputeTaskByMultiDataSetIdResponse Alibabacloud_Umeng-finplus20211130::Client::createComputeTaskByMultiDataSetId(shared_ptr<CreateComputeTaskByMultiDataSetIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createComputeTaskByMultiDataSetIdWithOptions(request, headers, runtime);
}

GetAvailableDataSetListResponse Alibabacloud_Umeng-finplus20211130::Client::getAvailableDataSetListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvailableDataSetList"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/getAvailableDataSetList"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAvailableDataSetListResponse(callApi(params, req, runtime));
}

GetAvailableDataSetListResponse Alibabacloud_Umeng-finplus20211130::Client::getAvailableDataSetList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAvailableDataSetListWithOptions(headers, runtime);
}

GetComputeResultResponse Alibabacloud_Umeng-finplus20211130::Client::getComputeResultWithOptions(shared_ptr<GetComputeResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bcId)) {
    query->insert(pair<string, long>("bcId", *request->bcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetComputeResult"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/getComputeTaskResult"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetComputeResultResponse(callApi(params, req, runtime));
}

GetComputeResultResponse Alibabacloud_Umeng-finplus20211130::Client::getComputeResult(shared_ptr<GetComputeResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getComputeResultWithOptions(request, headers, runtime);
}

GetDataSetStatusResponse Alibabacloud_Umeng-finplus20211130::Client::getDataSetStatusWithOptions(shared_ptr<GetDataSetStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSetId)) {
    query->insert(pair<string, long>("dataSetId", *request->dataSetId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSetStatus"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/getDataSetStatus"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSetStatusResponse(callApi(params, req, runtime));
}

GetDataSetStatusResponse Alibabacloud_Umeng-finplus20211130::Client::getDataSetStatus(shared_ptr<GetDataSetStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataSetStatusWithOptions(request, headers, runtime);
}

GetDataSetStsAKResponse Alibabacloud_Umeng-finplus20211130::Client::getDataSetStsAKWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSetStsAK"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/getDataSetStsAk"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSetStsAKResponse(callApi(params, req, runtime));
}

GetDataSetStsAKResponse Alibabacloud_Umeng-finplus20211130::Client::getDataSetStsAK() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getDataSetStsAKWithOptions(headers, runtime);
}

SubmitDataSetTaskResponse Alibabacloud_Umeng-finplus20211130::Client::submitDataSetTaskWithOptions(shared_ptr<SubmitDataSetTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSetType)) {
    body->insert(pair<string, long>("dataSetType", *request->dataSetType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->idType)) {
    body->insert(pair<string, long>("idType", *request->idType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossFileName)) {
    body->insert(pair<string, string>("ossFileName", *request->ossFileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDataSetTask"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/submitDataSetTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDataSetTaskResponse(callApi(params, req, runtime));
}

SubmitDataSetTaskResponse Alibabacloud_Umeng-finplus20211130::Client::submitDataSetTask(shared_ptr<SubmitDataSetTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitDataSetTaskWithOptions(request, headers, runtime);
}

CancelYydTaskByBcIdResponse Alibabacloud_Umeng-finplus20211130::Client::cancelYydTaskByBcIdWithOptions(shared_ptr<CancelYydTaskByBcIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bcId)) {
    query->insert(pair<string, long>("bcId", *request->bcId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("cancelYydTaskByBcId"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/yyd/task/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelYydTaskByBcIdResponse(callApi(params, req, runtime));
}

CancelYydTaskByBcIdResponse Alibabacloud_Umeng-finplus20211130::Client::cancelYydTaskByBcId(shared_ptr<CancelYydTaskByBcIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelYydTaskByBcIdWithOptions(request, headers, runtime);
}

CreateYydComputeTaskResponse Alibabacloud_Umeng-finplus20211130::Client::createYydComputeTaskWithOptions(shared_ptr<CreateYydComputeTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->datasetId)) {
    body->insert(pair<string, long>("DatasetId", *request->datasetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("Remarks", *request->remarks));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    body->insert(pair<string, long>("appId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("createYydComputeTask"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/yyd/task/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateYydComputeTaskResponse(callApi(params, req, runtime));
}

CreateYydComputeTaskResponse Alibabacloud_Umeng-finplus20211130::Client::createYydComputeTask(shared_ptr<CreateYydComputeTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createYydComputeTaskWithOptions(request, headers, runtime);
}

CreateYydDataSetResponse Alibabacloud_Umeng-finplus20211130::Client::createYydDataSetWithOptions(shared_ptr<CreateYydDataSetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossFileName)) {
    body->insert(pair<string, string>("ossFileName", *request->ossFileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("createYydDataSet"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/yyd/dataset/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateYydDataSetResponse(callApi(params, req, runtime));
}

CreateYydDataSetResponse Alibabacloud_Umeng-finplus20211130::Client::createYydDataSet(shared_ptr<CreateYydDataSetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createYydDataSetWithOptions(request, headers, runtime);
}

ListYydComputeTaskListResponse Alibabacloud_Umeng-finplus20211130::Client::listYydComputeTaskListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("listYydComputeTaskList"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/yyd/task/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListYydComputeTaskListResponse(callApi(params, req, runtime));
}

ListYydComputeTaskListResponse Alibabacloud_Umeng-finplus20211130::Client::listYydComputeTaskList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listYydComputeTaskListWithOptions(headers, runtime);
}

ListYydDataSetResponse Alibabacloud_Umeng-finplus20211130::Client::listYydDataSetWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("listYydDataSet"))},
    {"version", boost::any(string("2021-11-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/batch_compute/yyd/dataset/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListYydDataSetResponse(callApi(params, req, runtime));
}

ListYydDataSetResponse Alibabacloud_Umeng-finplus20211130::Client::listYydDataSet() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listYydDataSetWithOptions(headers, runtime);
}

