// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dataworks_public_20180601.hpp>
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

using namespace Alibabacloud_Dataworks-public20180601;

Alibabacloud_Dataworks-public20180601::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "dataworks.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1", "dataworks.ap-south-1.aliyuncs.com"},
    {"ap-southeast-1", "dataworks.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "dataworks.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "dataworks.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "dataworks.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing", "dataworks.cn-beijing.aliyuncs.com"},
    {"cn-chengdu", "dataworks.cn-chengdu.aliyuncs.com"},
    {"cn-hangzhou", "dataworks.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "dataworks.cn-hongkong.aliyuncs.com"},
    {"cn-huhehaote", "dataworks.aliyuncs.com"},
    {"cn-qingdao", "dataworks.aliyuncs.com"},
    {"cn-shanghai", "dataworks.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "dataworks.cn-shenzhen.aliyuncs.com"},
    {"cn-zhangjiakou", "dataworks.aliyuncs.com"},
    {"eu-central-1", "dataworks.eu-central-1.aliyuncs.com"},
    {"eu-west-1", "dataworks.eu-west-1.aliyuncs.com"},
    {"me-east-1", "dataworks.me-east-1.aliyuncs.com"},
    {"us-east-1", "dataworks.us-east-1.aliyuncs.com"},
    {"us-west-1", "dataworks.us-west-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "dataworks.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dataworks.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dataworks.aliyuncs.com"},
    {"cn-north-2-gov-1", "dataworks.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dataworks-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dataworks-public20180601::Client::getEndpoint(shared_ptr<string> productId,
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

CreateManualDagResponse Alibabacloud_Dataworks-public20180601::Client::createManualDagWithOptions(shared_ptr<CreateManualDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizdate)) {
    query->insert(pair<string, string>("Bizdate", *request->bizdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dagPara)) {
    query->insert(pair<string, string>("DagPara", *request->dagPara));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    query->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePara)) {
    query->insert(pair<string, string>("NodePara", *request->nodePara));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateManualDag"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateManualDagResponse(callApi(params, req, runtime));
}

CreateManualDagResponse Alibabacloud_Dataworks-public20180601::Client::createManualDag(shared_ptr<CreateManualDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createManualDagWithOptions(request, runtime);
}

DeleteFileResponse Alibabacloud_Dataworks-public20180601::Client::deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fileId)) {
    body->insert(pair<string, long>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIdentifier)) {
    body->insert(pair<string, string>("ProjectIdentifier", *request->projectIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFile"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFileResponse(callApi(params, req, runtime));
}

DeleteFileResponse Alibabacloud_Dataworks-public20180601::Client::deleteFile(shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFileWithOptions(request, runtime);
}

DescribeEmrHiveTableResponse Alibabacloud_Dataworks-public20180601::Client::describeEmrHiveTableWithOptions(shared_ptr<DescribeEmrHiveTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEmrHiveTable"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEmrHiveTableResponse(callApi(params, req, runtime));
}

DescribeEmrHiveTableResponse Alibabacloud_Dataworks-public20180601::Client::describeEmrHiveTable(shared_ptr<DescribeEmrHiveTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEmrHiveTableWithOptions(request, runtime);
}

GetDataServiceApiAuthMapContextResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceApiAuthMapContextWithOptions(shared_ptr<GetDataServiceApiAuthMapContextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiAuthMapContext"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiAuthMapContextResponse(callApi(params, req, runtime));
}

GetDataServiceApiAuthMapContextResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceApiAuthMapContext(shared_ptr<GetDataServiceApiAuthMapContextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiAuthMapContextWithOptions(request, runtime);
}

GetDataServiceApiContextResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceApiContextWithOptions(shared_ptr<GetDataServiceApiContextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceApiContext"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceApiContextResponse(callApi(params, req, runtime));
}

GetDataServiceApiContextResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceApiContext(shared_ptr<GetDataServiceApiContextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApiContextWithOptions(request, runtime);
}

GetDataServiceConnectionResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceConnectionWithOptions(shared_ptr<GetDataServiceConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceConnection"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceConnectionResponse(callApi(params, req, runtime));
}

GetDataServiceConnectionResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceConnection(shared_ptr<GetDataServiceConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceConnectionWithOptions(request, runtime);
}

GetDataServiceContextUpdateEventResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceContextUpdateEventWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceContextUpdateEvent"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceContextUpdateEventResponse(callApi(params, req, runtime));
}

GetDataServiceContextUpdateEventResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceContextUpdateEvent() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceContextUpdateEventWithOptions(runtime);
}

GetDataServiceFunctionResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceFunctionWithOptions(shared_ptr<GetDataServiceFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataServiceFunction"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataServiceFunctionResponse(callApi(params, req, runtime));
}

GetDataServiceFunctionResponse Alibabacloud_Dataworks-public20180601::Client::getDataServiceFunction(shared_ptr<GetDataServiceFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceFunctionWithOptions(request, runtime);
}

GetSwitchValueResponse Alibabacloud_Dataworks-public20180601::Client::getSwitchValueWithOptions(shared_ptr<GetSwitchValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->switchName)) {
    query->insert(pair<string, string>("SwitchName", *request->switchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSwitchValue"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSwitchValueResponse(callApi(params, req, runtime));
}

GetSwitchValueResponse Alibabacloud_Dataworks-public20180601::Client::getSwitchValue(shared_ptr<GetSwitchValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSwitchValueWithOptions(request, runtime);
}

GetTimeMachineTaskResponse Alibabacloud_Dataworks-public20180601::Client::getTimeMachineTaskWithOptions(shared_ptr<GetTimeMachineTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTimeMachineTask"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTimeMachineTaskResponse(callApi(params, req, runtime));
}

GetTimeMachineTaskResponse Alibabacloud_Dataworks-public20180601::Client::getTimeMachineTask(shared_ptr<GetTimeMachineTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTimeMachineTaskWithOptions(request, runtime);
}

ListEmrHiveAuditLogsResponse Alibabacloud_Dataworks-public20180601::Client::listEmrHiveAuditLogsWithOptions(shared_ptr<ListEmrHiveAuditLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEmrHiveAuditLogs"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEmrHiveAuditLogsResponse(callApi(params, req, runtime));
}

ListEmrHiveAuditLogsResponse Alibabacloud_Dataworks-public20180601::Client::listEmrHiveAuditLogs(shared_ptr<ListEmrHiveAuditLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEmrHiveAuditLogsWithOptions(request, runtime);
}

ListEmrHiveDatabasesResponse Alibabacloud_Dataworks-public20180601::Client::listEmrHiveDatabasesWithOptions(shared_ptr<ListEmrHiveDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEmrHiveDatabases"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEmrHiveDatabasesResponse(callApi(params, req, runtime));
}

ListEmrHiveDatabasesResponse Alibabacloud_Dataworks-public20180601::Client::listEmrHiveDatabases(shared_ptr<ListEmrHiveDatabasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEmrHiveDatabasesWithOptions(request, runtime);
}

ListEmrHiveTablesResponse Alibabacloud_Dataworks-public20180601::Client::listEmrHiveTablesWithOptions(shared_ptr<ListEmrHiveTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEmrHiveTables"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEmrHiveTablesResponse(callApi(params, req, runtime));
}

ListEmrHiveTablesResponse Alibabacloud_Dataworks-public20180601::Client::listEmrHiveTables(shared_ptr<ListEmrHiveTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEmrHiveTablesWithOptions(request, runtime);
}

ListGovernanceIssueDataServiceAPIsResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceIssueDataServiceAPIsWithOptions(shared_ptr<ListGovernanceIssueDataServiceAPIsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    body->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleCategory)) {
    body->insert(pair<string, string>("RuleCategory", *request->ruleCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    body->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGovernanceIssueDataServiceAPIs"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGovernanceIssueDataServiceAPIsResponse(callApi(params, req, runtime));
}

ListGovernanceIssueDataServiceAPIsResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceIssueDataServiceAPIs(shared_ptr<ListGovernanceIssueDataServiceAPIsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGovernanceIssueDataServiceAPIsWithOptions(request, runtime);
}

ListGovernanceIssueTablesResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceIssueTablesWithOptions(shared_ptr<ListGovernanceIssueTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    body->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleCategory)) {
    body->insert(pair<string, string>("RuleCategory", *request->ruleCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    body->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGovernanceIssueTables"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGovernanceIssueTablesResponse(callApi(params, req, runtime));
}

ListGovernanceIssueTablesResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceIssueTables(shared_ptr<ListGovernanceIssueTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGovernanceIssueTablesWithOptions(request, runtime);
}

ListGovernanceIssueTasksResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceIssueTasksWithOptions(shared_ptr<ListGovernanceIssueTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizDate)) {
    body->insert(pair<string, string>("BizDate", *request->bizDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    body->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    body->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleCategory)) {
    body->insert(pair<string, string>("RuleCategory", *request->ruleCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    body->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGovernanceIssueTasks"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGovernanceIssueTasksResponse(callApi(params, req, runtime));
}

ListGovernanceIssueTasksResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceIssueTasks(shared_ptr<ListGovernanceIssueTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGovernanceIssueTasksWithOptions(request, runtime);
}

ListGovernanceRulesResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceRulesWithOptions(shared_ptr<ListGovernanceRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->issueType)) {
    body->insert(pair<string, string>("IssueType", *request->issueType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGovernanceRules"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGovernanceRulesResponse(callApi(params, req, runtime));
}

ListGovernanceRulesResponse Alibabacloud_Dataworks-public20180601::Client::listGovernanceRules(shared_ptr<ListGovernanceRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGovernanceRulesWithOptions(request, runtime);
}

ListHiveColumnLineagesResponse Alibabacloud_Dataworks-public20180601::Client::listHiveColumnLineagesWithOptions(shared_ptr<ListHiveColumnLineagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->columnName)) {
    query->insert(pair<string, string>("ColumnName", *request->columnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHiveColumnLineages"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHiveColumnLineagesResponse(callApi(params, req, runtime));
}

ListHiveColumnLineagesResponse Alibabacloud_Dataworks-public20180601::Client::listHiveColumnLineages(shared_ptr<ListHiveColumnLineagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHiveColumnLineagesWithOptions(request, runtime);
}

ListHiveTableLineagesResponse Alibabacloud_Dataworks-public20180601::Client::listHiveTableLineagesWithOptions(shared_ptr<ListHiveTableLineagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHiveTableLineages"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHiveTableLineagesResponse(callApi(params, req, runtime));
}

ListHiveTableLineagesResponse Alibabacloud_Dataworks-public20180601::Client::listHiveTableLineages(shared_ptr<ListHiveTableLineagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHiveTableLineagesWithOptions(request, runtime);
}

ListTablePartitionsResponse Alibabacloud_Dataworks-public20180601::Client::listTablePartitionsWithOptions(shared_ptr<ListTablePartitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    query->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->databaseName)) {
    query->insert(pair<string, string>("DatabaseName", *request->databaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTablePartitions"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTablePartitionsResponse(callApi(params, req, runtime));
}

ListTablePartitionsResponse Alibabacloud_Dataworks-public20180601::Client::listTablePartitions(shared_ptr<ListTablePartitionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTablePartitionsWithOptions(request, runtime);
}

OpenDataWorksStandardServiceResponse Alibabacloud_Dataworks-public20180601::Client::openDataWorksStandardServiceWithOptions(shared_ptr<OpenDataWorksStandardServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenDataWorksStandardService"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenDataWorksStandardServiceResponse(callApi(params, req, runtime));
}

OpenDataWorksStandardServiceResponse Alibabacloud_Dataworks-public20180601::Client::openDataWorksStandardService(shared_ptr<OpenDataWorksStandardServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openDataWorksStandardServiceWithOptions(request, runtime);
}

SearchManualDagNodeInstanceResponse Alibabacloud_Dataworks-public20180601::Client::searchManualDagNodeInstanceWithOptions(shared_ptr<SearchManualDagNodeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dagId)) {
    query->insert(pair<string, long>("DagId", *request->dagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchManualDagNodeInstance"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchManualDagNodeInstanceResponse(callApi(params, req, runtime));
}

SearchManualDagNodeInstanceResponse Alibabacloud_Dataworks-public20180601::Client::searchManualDagNodeInstance(shared_ptr<SearchManualDagNodeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchManualDagNodeInstanceWithOptions(request, runtime);
}

SendTaskMetaCallbackResponse Alibabacloud_Dataworks-public20180601::Client::sendTaskMetaCallbackWithOptions(shared_ptr<SendTaskMetaCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionInfo)) {
    body->insert(pair<string, string>("ConnectionInfo", *request->connectionInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resources)) {
    body->insert(pair<string, vector<string>>("Resources", *request->resources));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subType)) {
    body->insert(pair<string, string>("SubType", *request->subType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskEnvParam)) {
    body->insert(pair<string, string>("TaskEnvParam", *request->taskEnvParam));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tenantId)) {
    body->insert(pair<string, long>("TenantId", *request->tenantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->user)) {
    body->insert(pair<string, string>("User", *request->user));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendTaskMetaCallback"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendTaskMetaCallbackResponse(callApi(params, req, runtime));
}

SendTaskMetaCallbackResponse Alibabacloud_Dataworks-public20180601::Client::sendTaskMetaCallback(shared_ptr<SendTaskMetaCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendTaskMetaCallbackWithOptions(request, runtime);
}

SetSwitchValueResponse Alibabacloud_Dataworks-public20180601::Client::setSwitchValueWithOptions(shared_ptr<SetSwitchValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->switchName)) {
    query->insert(pair<string, string>("SwitchName", *request->switchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchValue)) {
    query->insert(pair<string, string>("SwitchValue", *request->switchValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSwitchValue"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSwitchValueResponse(callApi(params, req, runtime));
}

SetSwitchValueResponse Alibabacloud_Dataworks-public20180601::Client::setSwitchValue(shared_ptr<SetSwitchValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSwitchValueWithOptions(request, runtime);
}

StartCollectQualityResponse Alibabacloud_Dataworks-public20180601::Client::startCollectQualityWithOptions(shared_ptr<StartCollectQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackResultString)) {
    body->insert(pair<string, string>("CallbackResultString", *request->callbackResultString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCollectQuality"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCollectQualityResponse(callApi(params, req, runtime));
}

StartCollectQualityResponse Alibabacloud_Dataworks-public20180601::Client::startCollectQuality(shared_ptr<StartCollectQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCollectQualityWithOptions(request, runtime);
}

StartDoCheckQualityResponse Alibabacloud_Dataworks-public20180601::Client::startDoCheckQualityWithOptions(shared_ptr<StartDoCheckQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackResultString)) {
    body->insert(pair<string, string>("CallbackResultString", *request->callbackResultString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDoCheckQuality"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDoCheckQualityResponse(callApi(params, req, runtime));
}

StartDoCheckQualityResponse Alibabacloud_Dataworks-public20180601::Client::startDoCheckQuality(shared_ptr<StartDoCheckQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDoCheckQualityWithOptions(request, runtime);
}

StartTaskQualityResponse Alibabacloud_Dataworks-public20180601::Client::startTaskQualityWithOptions(shared_ptr<StartTaskQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackResultString)) {
    body->insert(pair<string, string>("CallbackResultString", *request->callbackResultString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartTaskQuality"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartTaskQualityResponse(callApi(params, req, runtime));
}

StartTaskQualityResponse Alibabacloud_Dataworks-public20180601::Client::startTaskQuality(shared_ptr<StartTaskQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startTaskQualityWithOptions(request, runtime);
}

TriggerDataLoaderResponse Alibabacloud_Dataworks-public20180601::Client::triggerDataLoaderWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerDataLoader"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerDataLoaderResponse(callApi(params, req, runtime));
}

TriggerDataLoaderResponse Alibabacloud_Dataworks-public20180601::Client::triggerDataLoader() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerDataLoaderWithOptions(runtime);
}

TriggerTimeMachineTaskResponse Alibabacloud_Dataworks-public20180601::Client::triggerTimeMachineTaskWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerTimeMachineTask"))},
    {"version", boost::any(string("2018-06-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerTimeMachineTaskResponse(callApi(params, req, runtime));
}

TriggerTimeMachineTaskResponse Alibabacloud_Dataworks-public20180601::Client::triggerTimeMachineTask() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerTimeMachineTaskWithOptions(runtime);
}

