// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rds_data_20220330.hpp>
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

using namespace Alibabacloud_Rds-data20220330;

Alibabacloud_Rds-data20220330::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rds-data"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Rds-data20220330::Client::getEndpoint(shared_ptr<string> productId,
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

BatchExecuteStatementResponse Alibabacloud_Rds-data20220330::Client::batchExecuteStatementWithOptions(shared_ptr<BatchExecuteStatementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchExecuteStatementShrinkRequest> request = make_shared<BatchExecuteStatementShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<vector<SqlParameter>>>(tmpReq->parameterSets)) {
    request->parameterSetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameterSets, make_shared<string>("ParameterSets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameterSetsShrink)) {
    body->insert(pair<string, string>("ParameterSets", *request->parameterSetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    body->insert(pair<string, string>("Sql", *request->sql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchExecuteStatement"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchExecuteStatementResponse(callApi(params, req, runtime));
}

BatchExecuteStatementResponse Alibabacloud_Rds-data20220330::Client::batchExecuteStatement(shared_ptr<BatchExecuteStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchExecuteStatementWithOptions(request, runtime);
}

BeginTransactionResponse Alibabacloud_Rds-data20220330::Client::beginTransactionWithOptions(shared_ptr<BeginTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BeginTransaction"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BeginTransactionResponse(callApi(params, req, runtime));
}

BeginTransactionResponse Alibabacloud_Rds-data20220330::Client::beginTransaction(shared_ptr<BeginTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return beginTransactionWithOptions(request, runtime);
}

CommitTransactionResponse Alibabacloud_Rds-data20220330::Client::commitTransactionWithOptions(shared_ptr<CommitTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommitTransaction"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommitTransactionResponse(callApi(params, req, runtime));
}

CommitTransactionResponse Alibabacloud_Rds-data20220330::Client::commitTransaction(shared_ptr<CommitTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitTransactionWithOptions(request, runtime);
}

DeleteResponse Alibabacloud_Rds-data20220330::Client::deleteWithOptions(shared_ptr<DeleteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteShrinkRequest> request = make_shared<DeleteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, Selector>>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("Table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Delete"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResponse(callApi(params, req, runtime));
}

DeleteResponse Alibabacloud_Rds-data20220330::Client::delete_(shared_ptr<DeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWithOptions(request, runtime);
}

ExecuteStatementResponse Alibabacloud_Rds-data20220330::Client::executeStatementWithOptions(shared_ptr<ExecuteStatementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExecuteStatementShrinkRequest> request = make_shared<ExecuteStatementShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SqlParameter>>(tmpReq->parameters)) {
    request->parametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->parameters, make_shared<string>("Parameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ExecuteStatementRequestResultSetOptions>(tmpReq->resultSetOptions)) {
    request->resultSetOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->resultSetOptions, make_shared<string>("ResultSetOptions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->continueAfterTimeout)) {
    body->insert(pair<string, bool>("ContinueAfterTimeout", *request->continueAfterTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formatRecordsAs)) {
    body->insert(pair<string, string>("FormatRecordsAs", *request->formatRecordsAs));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeResultMetadata)) {
    body->insert(pair<string, bool>("IncludeResultMetadata", *request->includeResultMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parametersShrink)) {
    body->insert(pair<string, string>("Parameters", *request->parametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultSetOptionsShrink)) {
    body->insert(pair<string, string>("ResultSetOptions", *request->resultSetOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sql)) {
    body->insert(pair<string, string>("Sql", *request->sql));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteStatement"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteStatementResponse(callApi(params, req, runtime));
}

ExecuteStatementResponse Alibabacloud_Rds-data20220330::Client::executeStatement(shared_ptr<ExecuteStatementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeStatementWithOptions(request, runtime);
}

InsertResponse Alibabacloud_Rds-data20220330::Client::insertWithOptions(shared_ptr<InsertRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertShrinkRequest> request = make_shared<InsertShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->record)) {
    request->recordShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->record, make_shared<string>("Record"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordShrink)) {
    body->insert(pair<string, string>("Record", *request->recordShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("Table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Insert"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertResponse(callApi(params, req, runtime));
}

InsertResponse Alibabacloud_Rds-data20220330::Client::insert(shared_ptr<InsertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertWithOptions(request, runtime);
}

InsertListResponse Alibabacloud_Rds-data20220330::Client::insertListWithOptions(shared_ptr<InsertListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertListShrinkRequest> request = make_shared<InsertListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<map<string, boost::any>>>(tmpReq->records)) {
    request->recordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->records, make_shared<string>("Records"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordsShrink)) {
    body->insert(pair<string, string>("Records", *request->recordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("Table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertList"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertListResponse(callApi(params, req, runtime));
}

InsertListResponse Alibabacloud_Rds-data20220330::Client::insertList(shared_ptr<InsertListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertListWithOptions(request, runtime);
}

RollbackTransactionResponse Alibabacloud_Rds-data20220330::Client::rollbackTransactionWithOptions(shared_ptr<RollbackTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackTransaction"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackTransactionResponse(callApi(params, req, runtime));
}

RollbackTransactionResponse Alibabacloud_Rds-data20220330::Client::rollbackTransaction(shared_ptr<RollbackTransactionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackTransactionWithOptions(request, runtime);
}

SelectResponse Alibabacloud_Rds-data20220330::Client::selectWithOptions(shared_ptr<SelectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SelectShrinkRequest> request = make_shared<SelectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, Selector>>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("Table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Select"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SelectResponse(callApi(params, req, runtime));
}

SelectResponse Alibabacloud_Rds-data20220330::Client::select(shared_ptr<SelectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return selectWithOptions(request, runtime);
}

UpdateResponse Alibabacloud_Rds-data20220330::Client::updateWithOptions(shared_ptr<UpdateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateShrinkRequest> request = make_shared<UpdateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, Selector>>(tmpReq->filter)) {
    request->filterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filter, make_shared<string>("Filter"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->record)) {
    request->recordShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->record, make_shared<string>("Record"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    body->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterShrink)) {
    body->insert(pair<string, string>("Filter", *request->filterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordShrink)) {
    body->insert(pair<string, string>("Record", *request->recordShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    body->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretArn)) {
    body->insert(pair<string, string>("SecretArn", *request->secretArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->table)) {
    body->insert(pair<string, string>("Table", *request->table));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionId)) {
    body->insert(pair<string, string>("TransactionId", *request->transactionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Update"))},
    {"version", boost::any(string("2022-03-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateResponse(callApi(params, req, runtime));
}

UpdateResponse Alibabacloud_Rds-data20220330::Client::update(shared_ptr<UpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWithOptions(request, runtime);
}

