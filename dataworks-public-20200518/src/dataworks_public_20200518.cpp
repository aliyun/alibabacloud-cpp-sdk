// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dataworks_public_20200518.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <alibabacloud/rpc.hpp>
#include <alibabacloud/rpcutil.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Dataworks-public20200518;

Alibabacloud_Dataworks-public20200518::Client::Client(const shared_ptr<Alibabacloud_RPC::Config>& config) : Alibabacloud_RPC::Client(config) {
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

GenerateDISyncTaskConfigForCreatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForCreating(shared_ptr<GenerateDISyncTaskConfigForCreatingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GenerateDISyncTaskConfigForCreatingResponse(doRequest(make_shared<string>("GenerateDISyncTaskConfigForCreating"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GenerateDISyncTaskConfigForCreatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForCreatingSimply(shared_ptr<GenerateDISyncTaskConfigForCreatingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDISyncTaskConfigForCreating(request, runtime);
}

GenerateDISyncTaskConfigForUpdatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForUpdating(shared_ptr<GenerateDISyncTaskConfigForUpdatingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GenerateDISyncTaskConfigForUpdatingResponse(doRequest(make_shared<string>("GenerateDISyncTaskConfigForUpdating"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GenerateDISyncTaskConfigForUpdatingResponse Alibabacloud_Dataworks-public20200518::Client::generateDISyncTaskConfigForUpdatingSimply(shared_ptr<GenerateDISyncTaskConfigForUpdatingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDISyncTaskConfigForUpdating(request, runtime);
}

QueryDISyncTaskConfigProcessResultResponse Alibabacloud_Dataworks-public20200518::Client::queryDISyncTaskConfigProcessResult(shared_ptr<QueryDISyncTaskConfigProcessResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryDISyncTaskConfigProcessResultResponse(doRequest(make_shared<string>("QueryDISyncTaskConfigProcessResult"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryDISyncTaskConfigProcessResultResponse Alibabacloud_Dataworks-public20200518::Client::queryDISyncTaskConfigProcessResultSimply(shared_ptr<QueryDISyncTaskConfigProcessResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDISyncTaskConfigProcessResult(request, runtime);
}

ListProjectIdsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectIds(shared_ptr<ListProjectIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProjectIdsResponse(doRequest(make_shared<string>("ListProjectIds"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProjectIdsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectIdsSimply(shared_ptr<ListProjectIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectIds(request, runtime);
}

TerminateDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::terminateDISyncInstance(shared_ptr<TerminateDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return TerminateDISyncInstanceResponse(doRequest(make_shared<string>("TerminateDISyncInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

TerminateDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::terminateDISyncInstanceSimply(shared_ptr<TerminateDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateDISyncInstance(request, runtime);
}

DeleteDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deleteDISyncTask(shared_ptr<DeleteDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDISyncTaskResponse(doRequest(make_shared<string>("DeleteDISyncTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deleteDISyncTaskSimply(shared_ptr<DeleteDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDISyncTask(request, runtime);
}

DeployDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deployDISyncTask(shared_ptr<DeployDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeployDISyncTaskResponse(doRequest(make_shared<string>("DeployDISyncTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeployDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::deployDISyncTaskSimply(shared_ptr<DeployDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployDISyncTask(request, runtime);
}

StartDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::startDISyncInstance(shared_ptr<StartDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return StartDISyncInstanceResponse(doRequest(make_shared<string>("StartDISyncInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

StartDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::startDISyncInstanceSimply(shared_ptr<StartDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDISyncInstance(request, runtime);
}

GetDISyncInstanceInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncInstanceInfo(shared_ptr<GetDISyncInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDISyncInstanceInfoResponse(doRequest(make_shared<string>("GetDISyncInstanceInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDISyncInstanceInfoResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncInstanceInfoSimply(shared_ptr<GetDISyncInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncInstanceInfo(request, runtime);
}

StopDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopDISyncInstance(shared_ptr<StopDISyncInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return StopDISyncInstanceResponse(doRequest(make_shared<string>("StopDISyncInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

StopDISyncInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopDISyncInstanceSimply(shared_ptr<StopDISyncInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDISyncInstance(request, runtime);
}

GetDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTask(shared_ptr<GetDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDISyncTaskResponse(doRequest(make_shared<string>("GetDISyncTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::getDISyncTaskSimply(shared_ptr<GetDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDISyncTask(request, runtime);
}

CheckMetaTableTaskResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableTask(shared_ptr<CheckMetaTableTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CheckMetaTableTaskResponse(doRequest(make_shared<string>("CheckMetaTableTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CheckMetaTableTaskResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableTaskSimply(shared_ptr<CheckMetaTableTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaTableTask(request, runtime);
}

CheckEngineMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaPartition(shared_ptr<CheckEngineMetaPartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CheckEngineMetaPartitionResponse(doRequest(make_shared<string>("CheckEngineMetaPartition"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CheckEngineMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaPartitionSimply(shared_ptr<CheckEngineMetaPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkEngineMetaPartition(request, runtime);
}

CheckEngineMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaTable(shared_ptr<CheckEngineMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CheckEngineMetaTableResponse(doRequest(make_shared<string>("CheckEngineMetaTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CheckEngineMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkEngineMetaTableSimply(shared_ptr<CheckEngineMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkEngineMetaTable(request, runtime);
}

ImportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::importDataSources(shared_ptr<ImportDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ImportDataSourcesResponse(doRequest(make_shared<string>("ImportDataSources"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ImportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::importDataSourcesSimply(shared_ptr<ImportDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDataSources(request, runtime);
}

ExportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::exportDataSources(shared_ptr<ExportDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ExportDataSourcesResponse(doRequest(make_shared<string>("ExportDataSources"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ExportDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::exportDataSourcesSimply(shared_ptr<ExportDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDataSources(request, runtime);
}

GetDataSourceMetaResponse Alibabacloud_Dataworks-public20200518::Client::getDataSourceMeta(shared_ptr<GetDataSourceMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataSourceMetaResponse(doRequest(make_shared<string>("GetDataSourceMeta"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataSourceMetaResponse Alibabacloud_Dataworks-public20200518::Client::getDataSourceMetaSimply(shared_ptr<GetDataSourceMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceMeta(request, runtime);
}

SetDataSourceShareResponse Alibabacloud_Dataworks-public20200518::Client::setDataSourceShare(shared_ptr<SetDataSourceShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetDataSourceShareResponse(doRequest(make_shared<string>("SetDataSourceShare"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetDataSourceShareResponse Alibabacloud_Dataworks-public20200518::Client::setDataSourceShareSimply(shared_ptr<SetDataSourceShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDataSourceShare(request, runtime);
}

ListDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::listDIProjectConfig(shared_ptr<ListDIProjectConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDIProjectConfigResponse(doRequest(make_shared<string>("ListDIProjectConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::listDIProjectConfigSimply(shared_ptr<ListDIProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDIProjectConfig(request, runtime);
}

ExportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::exportConnections(shared_ptr<ExportConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ExportConnectionsResponse(doRequest(make_shared<string>("ExportConnections"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ExportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::exportConnectionsSimply(shared_ptr<ExportConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportConnections(request, runtime);
}

ListRefDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listRefDISyncTasks(shared_ptr<ListRefDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListRefDISyncTasksResponse(doRequest(make_shared<string>("ListRefDISyncTasks"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListRefDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listRefDISyncTasksSimply(shared_ptr<ListRefDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRefDISyncTasks(request, runtime);
}

SetConnectionShareResponse Alibabacloud_Dataworks-public20200518::Client::setConnectionShare(shared_ptr<SetConnectionShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetConnectionShareResponse(doRequest(make_shared<string>("SetConnectionShare"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,PrivateKey,APP"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetConnectionShareResponse Alibabacloud_Dataworks-public20200518::Client::setConnectionShareSimply(shared_ptr<SetConnectionShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setConnectionShare(request, runtime);
}

ImportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::importConnections(shared_ptr<ImportConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ImportConnectionsResponse(doRequest(make_shared<string>("ImportConnections"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ImportConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::importConnectionsSimply(shared_ptr<ImportConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importConnections(request, runtime);
}

GetConnectionMetaResponse Alibabacloud_Dataworks-public20200518::Client::getConnectionMeta(shared_ptr<GetConnectionMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetConnectionMetaResponse(doRequest(make_shared<string>("GetConnectionMeta"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetConnectionMetaResponse Alibabacloud_Dataworks-public20200518::Client::getConnectionMetaSimply(shared_ptr<GetConnectionMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionMeta(request, runtime);
}

UpdateDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::updateDIProjectConfig(shared_ptr<UpdateDIProjectConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateDIProjectConfigResponse(doRequest(make_shared<string>("UpdateDIProjectConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateDIProjectConfigResponse Alibabacloud_Dataworks-public20200518::Client::updateDIProjectConfigSimply(shared_ptr<UpdateDIProjectConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDIProjectConfig(request, runtime);
}

CreateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::createDISyncTask(shared_ptr<CreateDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDISyncTaskResponse(doRequest(make_shared<string>("CreateDISyncTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::createDISyncTaskSimply(shared_ptr<CreateDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDISyncTask(request, runtime);
}

UpdateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::updateDISyncTask(shared_ptr<UpdateDISyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateDISyncTaskResponse(doRequest(make_shared<string>("UpdateDISyncTask"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateDISyncTaskResponse Alibabacloud_Dataworks-public20200518::Client::updateDISyncTaskSimply(shared_ptr<UpdateDISyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDISyncTask(request, runtime);
}

TestNetworkConnectionResponse Alibabacloud_Dataworks-public20200518::Client::testNetworkConnection(shared_ptr<TestNetworkConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return TestNetworkConnectionResponse(doRequest(make_shared<string>("TestNetworkConnection"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

TestNetworkConnectionResponse Alibabacloud_Dataworks-public20200518::Client::testNetworkConnectionSimply(shared_ptr<TestNetworkConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testNetworkConnection(request, runtime);
}

UpdateNodeRunModeResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeRunMode(shared_ptr<UpdateNodeRunModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateNodeRunModeResponse(doRequest(make_shared<string>("UpdateNodeRunMode"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateNodeRunModeResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeRunModeSimply(shared_ptr<UpdateNodeRunModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeRunMode(request, runtime);
}

UpdateNodeOwnerResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeOwner(shared_ptr<UpdateNodeOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateNodeOwnerResponse(doRequest(make_shared<string>("UpdateNodeOwner"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateNodeOwnerResponse Alibabacloud_Dataworks-public20200518::Client::updateNodeOwnerSimply(shared_ptr<UpdateNodeOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNodeOwner(request, runtime);
}

QueryPublicModelEngineResponse Alibabacloud_Dataworks-public20200518::Client::queryPublicModelEngine(shared_ptr<QueryPublicModelEngineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return QueryPublicModelEngineResponse(doRequest(make_shared<string>("QueryPublicModelEngine"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

QueryPublicModelEngineResponse Alibabacloud_Dataworks-public20200518::Client::queryPublicModelEngineSimply(shared_ptr<QueryPublicModelEngineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPublicModelEngine(request, runtime);
}

DeleteViewResponse Alibabacloud_Dataworks-public20200518::Client::deleteView(shared_ptr<DeleteViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteViewResponse(doRequest(make_shared<string>("DeleteView"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteViewResponse Alibabacloud_Dataworks-public20200518::Client::deleteViewSimply(shared_ptr<DeleteViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteView(request, runtime);
}

CreateViewResponse Alibabacloud_Dataworks-public20200518::Client::createView(shared_ptr<CreateViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateViewResponse(doRequest(make_shared<string>("CreateView"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateViewResponse Alibabacloud_Dataworks-public20200518::Client::createViewSimply(shared_ptr<CreateViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createView(request, runtime);
}

CheckFileDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::checkFileDeployment(shared_ptr<CheckFileDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CheckFileDeploymentResponse(doRequest(make_shared<string>("CheckFileDeployment"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CheckFileDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::checkFileDeploymentSimply(shared_ptr<CheckFileDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFileDeployment(request, runtime);
}

ImportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::importDISyncTasks(shared_ptr<ImportDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ImportDISyncTasksResponse(doRequest(make_shared<string>("ImportDISyncTasks"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ImportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::importDISyncTasksSimply(shared_ptr<ImportDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDISyncTasks(request, runtime);
}

ExportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::exportDISyncTasks(shared_ptr<ExportDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ExportDISyncTasksResponse(doRequest(make_shared<string>("ExportDISyncTasks"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ExportDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::exportDISyncTasksSimply(shared_ptr<ExportDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportDISyncTasks(request, runtime);
}

ListDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listDISyncTasks(shared_ptr<ListDISyncTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDISyncTasksResponse(doRequest(make_shared<string>("ListDISyncTasks"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK,APP,PrivateKey"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDISyncTasksResponse Alibabacloud_Dataworks-public20200518::Client::listDISyncTasksSimply(shared_ptr<ListDISyncTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDISyncTasks(request, runtime);
}

RevokeColumnPermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeColumnPermission(shared_ptr<RevokeColumnPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RevokeColumnPermissionResponse(doRequest(make_shared<string>("RevokeColumnPermission"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RevokeColumnPermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeColumnPermissionSimply(shared_ptr<RevokeColumnPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeColumnPermission(request, runtime);
}

RevokeTablePermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeTablePermission(shared_ptr<RevokeTablePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RevokeTablePermissionResponse(doRequest(make_shared<string>("RevokeTablePermission"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RevokeTablePermissionResponse Alibabacloud_Dataworks-public20200518::Client::revokeTablePermissionSimply(shared_ptr<RevokeTablePermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeTablePermission(request, runtime);
}

GetMetaTableThemeLevelResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableThemeLevel(shared_ptr<GetMetaTableThemeLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableThemeLevelResponse(doRequest(make_shared<string>("GetMetaTableThemeLevel"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetMetaTableThemeLevelResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableThemeLevelSimply(shared_ptr<GetMetaTableThemeLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableThemeLevel(request, runtime);
}

GetPermissionApplyOrderDetailResponse Alibabacloud_Dataworks-public20200518::Client::getPermissionApplyOrderDetail(shared_ptr<GetPermissionApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetPermissionApplyOrderDetailResponse(doRequest(make_shared<string>("GetPermissionApplyOrderDetail"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetPermissionApplyOrderDetailResponse Alibabacloud_Dataworks-public20200518::Client::getPermissionApplyOrderDetailSimply(shared_ptr<GetPermissionApplyOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPermissionApplyOrderDetail(request, runtime);
}

ListPermissionApplyOrdersResponse Alibabacloud_Dataworks-public20200518::Client::listPermissionApplyOrders(shared_ptr<ListPermissionApplyOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListPermissionApplyOrdersResponse(doRequest(make_shared<string>("ListPermissionApplyOrders"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListPermissionApplyOrdersResponse Alibabacloud_Dataworks-public20200518::Client::listPermissionApplyOrdersSimply(shared_ptr<ListPermissionApplyOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPermissionApplyOrders(request, runtime);
}

CreatePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::createPermissionApplyOrder(shared_ptr<CreatePermissionApplyOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreatePermissionApplyOrderResponse(doRequest(make_shared<string>("CreatePermissionApplyOrder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreatePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::createPermissionApplyOrderSimply(shared_ptr<CreatePermissionApplyOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPermissionApplyOrder(request, runtime);
}

ApprovePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::approvePermissionApplyOrder(shared_ptr<ApprovePermissionApplyOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ApprovePermissionApplyOrderResponse(doRequest(make_shared<string>("ApprovePermissionApplyOrder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ApprovePermissionApplyOrderResponse Alibabacloud_Dataworks-public20200518::Client::approvePermissionApplyOrderSimply(shared_ptr<ApprovePermissionApplyOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approvePermissionApplyOrder(request, runtime);
}

ListSuccessInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listSuccessInstanceAmount(shared_ptr<ListSuccessInstanceAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListSuccessInstanceAmountResponse(doRequest(make_shared<string>("ListSuccessInstanceAmount"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListSuccessInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listSuccessInstanceAmountSimply(shared_ptr<ListSuccessInstanceAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSuccessInstanceAmount(request, runtime);
}

ListFileTypeResponse Alibabacloud_Dataworks-public20200518::Client::listFileType(shared_ptr<ListFileTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListFileTypeResponse(doRequest(make_shared<string>("ListFileType"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListFileTypeResponse Alibabacloud_Dataworks-public20200518::Client::listFileTypeSimply(shared_ptr<ListFileTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileType(request, runtime);
}

ListInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceAmount(shared_ptr<ListInstanceAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListInstanceAmountResponse(doRequest(make_shared<string>("ListInstanceAmount"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListInstanceAmountResponse Alibabacloud_Dataworks-public20200518::Client::listInstanceAmountSimply(shared_ptr<ListInstanceAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceAmount(request, runtime);
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::listDataSources(shared_ptr<ListDataSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataSourcesResponse(doRequest(make_shared<string>("ListDataSources"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ListDataSourcesResponse Alibabacloud_Dataworks-public20200518::Client::listDataSourcesSimply(shared_ptr<ListDataSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSources(request, runtime);
}

ListNodesByBaselineResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByBaseline(shared_ptr<ListNodesByBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListNodesByBaselineResponse(doRequest(make_shared<string>("ListNodesByBaseline"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListNodesByBaselineResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByBaselineSimply(shared_ptr<ListNodesByBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByBaseline(request, runtime);
}

ListManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listManualDagInstances(shared_ptr<ListManualDagInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListManualDagInstancesResponse(doRequest(make_shared<string>("ListManualDagInstances"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listManualDagInstancesSimply(shared_ptr<ListManualDagInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listManualDagInstances(request, runtime);
}

GetInstanceStatusStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusStatistic(shared_ptr<GetInstanceStatusStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceStatusStatisticResponse(doRequest(make_shared<string>("GetInstanceStatusStatistic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceStatusStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusStatisticSimply(shared_ptr<GetInstanceStatusStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStatusStatistic(request, runtime);
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataSource(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDataSourceResponse(doRequest(make_shared<string>("DeleteDataSource"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataSourceSimply(shared_ptr<DeleteDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSource(request, runtime);
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::createDataSource(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDataSourceResponse(doRequest(make_shared<string>("CreateDataSource"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::createDataSourceSimply(shared_ptr<CreateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSource(request, runtime);
}

TopTenErrorTimesInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenErrorTimesInstance(shared_ptr<TopTenErrorTimesInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return TopTenErrorTimesInstanceResponse(doRequest(make_shared<string>("TopTenErrorTimesInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

TopTenErrorTimesInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenErrorTimesInstanceSimply(shared_ptr<TopTenErrorTimesInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return topTenErrorTimesInstance(request, runtime);
}

TopTenElapsedTimeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenElapsedTimeInstance(shared_ptr<TopTenElapsedTimeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return TopTenElapsedTimeInstanceResponse(doRequest(make_shared<string>("TopTenElapsedTimeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

TopTenElapsedTimeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::topTenElapsedTimeInstanceSimply(shared_ptr<TopTenElapsedTimeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return topTenElapsedTimeInstance(request, runtime);
}

GetProjectResponse Alibabacloud_Dataworks-public20200518::Client::getProject(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetProjectResponse(doRequest(make_shared<string>("GetProject"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetProjectResponse Alibabacloud_Dataworks-public20200518::Client::getProjectSimply(shared_ptr<GetProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProject(request, runtime);
}

ListNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByOutput(shared_ptr<ListNodesByOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListNodesByOutputResponse(doRequest(make_shared<string>("ListNodesByOutput"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodesByOutputSimply(shared_ptr<ListNodesByOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesByOutput(request, runtime);
}

GetFileTypeStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getFileTypeStatistic(shared_ptr<GetFileTypeStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetFileTypeStatisticResponse(doRequest(make_shared<string>("GetFileTypeStatistic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetFileTypeStatisticResponse Alibabacloud_Dataworks-public20200518::Client::getFileTypeStatisticSimply(shared_ptr<GetFileTypeStatisticRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileTypeStatistic(request, runtime);
}

RunSmokeTestResponse Alibabacloud_Dataworks-public20200518::Client::runSmokeTest(shared_ptr<RunSmokeTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RunSmokeTestResponse(doRequest(make_shared<string>("RunSmokeTest"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RunSmokeTestResponse Alibabacloud_Dataworks-public20200518::Client::runSmokeTestSimply(shared_ptr<RunSmokeTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runSmokeTest(request, runtime);
}

ListNodeInputOrOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodeInputOrOutput(shared_ptr<ListNodeInputOrOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListNodeInputOrOutputResponse(doRequest(make_shared<string>("ListNodeInputOrOutput"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListNodeInputOrOutputResponse Alibabacloud_Dataworks-public20200518::Client::listNodeInputOrOutputSimply(shared_ptr<ListNodeInputOrOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeInputOrOutput(request, runtime);
}

RunCycleDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runCycleDagNodes(shared_ptr<RunCycleDagNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RunCycleDagNodesResponse(doRequest(make_shared<string>("RunCycleDagNodes"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RunCycleDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runCycleDagNodesSimply(shared_ptr<RunCycleDagNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCycleDagNodes(request, runtime);
}

RunManualDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runManualDagNodes(shared_ptr<RunManualDagNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RunManualDagNodesResponse(doRequest(make_shared<string>("RunManualDagNodes"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RunManualDagNodesResponse Alibabacloud_Dataworks-public20200518::Client::runManualDagNodesSimply(shared_ptr<RunManualDagNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runManualDagNodes(request, runtime);
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::updateDataSource(shared_ptr<UpdateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateDataSourceResponse(doRequest(make_shared<string>("UpdateDataSource"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateDataSourceResponse Alibabacloud_Dataworks-public20200518::Client::updateDataSourceSimply(shared_ptr<UpdateDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSource(request, runtime);
}

UpdateTableAddColumnResponse Alibabacloud_Dataworks-public20200518::Client::updateTableAddColumn(shared_ptr<UpdateTableAddColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateTableAddColumnResponse(doRequest(make_shared<string>("UpdateTableAddColumn"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateTableAddColumnResponse Alibabacloud_Dataworks-public20200518::Client::updateTableAddColumnSimply(shared_ptr<UpdateTableAddColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableAddColumn(request, runtime);
}

GetMigrationProcessResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationProcess(shared_ptr<GetMigrationProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMigrationProcessResponse(doRequest(make_shared<string>("GetMigrationProcess"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMigrationProcessResponse Alibabacloud_Dataworks-public20200518::Client::getMigrationProcessSimply(shared_ptr<GetMigrationProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMigrationProcess(request, runtime);
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigration(shared_ptr<CreateImportMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateImportMigrationResponse(doRequest(make_shared<string>("CreateImportMigration"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigrationSimply(shared_ptr<CreateImportMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImportMigration(request, runtime);
}

CreateImportMigrationResponse Alibabacloud_Dataworks-public20200518::Client::createImportMigrationAdvance(shared_ptr<CreateImportMigrationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_RPC::Config> authConfig = make_shared<Alibabacloud_RPC::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("dataworks-public"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_RPCUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CreateImportMigrationRequest> createImportMigrationReq = make_shared<CreateImportMigrationRequest>();
  Alibabacloud_RPCUtil::Client::convert(request, createImportMigrationReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->packageFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_RPCUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
      {"content", !request->packageFileObject ? boost::any() : boost::any(*request->packageFileObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->accessKeyId ? boost::any() : boost::any(*authResponse->accessKeyId)},
      {"policy", !authResponse->encodedPolicy ? boost::any() : boost::any(*authResponse->encodedPolicy)},
      {"signature", !authResponse->signature ? boost::any() : boost::any(*authResponse->signature)},
      {"key", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->bucket ? boost::any() : boost::any(*authResponse->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    createImportMigrationReq->packageFile = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  }
  shared_ptr<CreateImportMigrationResponse> createImportMigrationResp = make_shared<CreateImportMigrationResponse>(createImportMigration(createImportMigrationReq, runtime));
  return *createImportMigrationResp;
}

StartMigrationResponse Alibabacloud_Dataworks-public20200518::Client::startMigration(shared_ptr<StartMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return StartMigrationResponse(doRequest(make_shared<string>("StartMigration"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

StartMigrationResponse Alibabacloud_Dataworks-public20200518::Client::startMigrationSimply(shared_ptr<StartMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMigration(request, runtime);
}

GetNodeParentsResponse Alibabacloud_Dataworks-public20200518::Client::getNodeParents(shared_ptr<GetNodeParentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodeParentsResponse(doRequest(make_shared<string>("GetNodeParents"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodeParentsResponse Alibabacloud_Dataworks-public20200518::Client::getNodeParentsSimply(shared_ptr<GetNodeParentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeParents(request, runtime);
}

GetNodeChildrenResponse Alibabacloud_Dataworks-public20200518::Client::getNodeChildren(shared_ptr<GetNodeChildrenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodeChildrenResponse(doRequest(make_shared<string>("GetNodeChildren"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodeChildrenResponse Alibabacloud_Dataworks-public20200518::Client::getNodeChildrenSimply(shared_ptr<GetNodeChildrenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeChildren(request, runtime);
}

GetSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getSensitiveData(shared_ptr<GetSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetSensitiveDataResponse(doRequest(make_shared<string>("GetSensitiveData"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getSensitiveDataSimply(shared_ptr<GetSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSensitiveData(request, runtime);
}

DesensitizeDataResponse Alibabacloud_Dataworks-public20200518::Client::desensitizeData(shared_ptr<DesensitizeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DesensitizeDataResponse(doRequest(make_shared<string>("DesensitizeData"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

DesensitizeDataResponse Alibabacloud_Dataworks-public20200518::Client::desensitizeDataSimply(shared_ptr<DesensitizeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return desensitizeData(request, runtime);
}

GetOpRiskDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpRiskData(shared_ptr<GetOpRiskDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetOpRiskDataResponse(doRequest(make_shared<string>("GetOpRiskData"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetOpRiskDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpRiskDataSimply(shared_ptr<GetOpRiskDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpRiskData(request, runtime);
}

ScanSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::scanSensitiveData(shared_ptr<ScanSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ScanSensitiveDataResponse(doRequest(make_shared<string>("ScanSensitiveData"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ScanSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::scanSensitiveDataSimply(shared_ptr<ScanSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scanSensitiveData(request, runtime);
}

GetOpSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpSensitiveData(shared_ptr<GetOpSensitiveDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetOpSensitiveDataResponse(doRequest(make_shared<string>("GetOpSensitiveData"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetOpSensitiveDataResponse Alibabacloud_Dataworks-public20200518::Client::getOpSensitiveDataSimply(shared_ptr<GetOpSensitiveDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOpSensitiveData(request, runtime);
}

CreateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::createBusiness(shared_ptr<CreateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateBusinessResponse(doRequest(make_shared<string>("CreateBusiness"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::createBusinessSimply(shared_ptr<CreateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBusiness(request, runtime);
}

RunTriggerNodeResponse Alibabacloud_Dataworks-public20200518::Client::runTriggerNode(shared_ptr<RunTriggerNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RunTriggerNodeResponse(doRequest(make_shared<string>("RunTriggerNode"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RunTriggerNodeResponse Alibabacloud_Dataworks-public20200518::Client::runTriggerNodeSimply(shared_ptr<RunTriggerNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runTriggerNode(request, runtime);
}

GetDagResponse Alibabacloud_Dataworks-public20200518::Client::getDag(shared_ptr<GetDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDagResponse(doRequest(make_shared<string>("GetDag"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDagResponse Alibabacloud_Dataworks-public20200518::Client::getDagSimply(shared_ptr<GetDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDag(request, runtime);
}

SearchNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::searchNodesByOutput(shared_ptr<SearchNodesByOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SearchNodesByOutputResponse(doRequest(make_shared<string>("SearchNodesByOutput"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SearchNodesByOutputResponse Alibabacloud_Dataworks-public20200518::Client::searchNodesByOutputSimply(shared_ptr<SearchNodesByOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchNodesByOutput(request, runtime);
}

GetManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::getManualDagInstances(shared_ptr<GetManualDagInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetManualDagInstancesResponse(doRequest(make_shared<string>("GetManualDagInstances"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetManualDagInstancesResponse Alibabacloud_Dataworks-public20200518::Client::getManualDagInstancesSimply(shared_ptr<GetManualDagInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManualDagInstances(request, runtime);
}

CreateManualDagResponse Alibabacloud_Dataworks-public20200518::Client::createManualDag(shared_ptr<CreateManualDagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateManualDagResponse(doRequest(make_shared<string>("CreateManualDag"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateManualDagResponse Alibabacloud_Dataworks-public20200518::Client::createManualDagSimply(shared_ptr<CreateManualDagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createManualDag(request, runtime);
}

ListQualityResultsByEntityResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByEntity(shared_ptr<ListQualityResultsByEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListQualityResultsByEntityResponse(doRequest(make_shared<string>("ListQualityResultsByEntity"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListQualityResultsByEntityResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByEntitySimply(shared_ptr<ListQualityResultsByEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityResultsByEntity(request, runtime);
}

GetNodeTypeListInfoResponse Alibabacloud_Dataworks-public20200518::Client::getNodeTypeListInfo(shared_ptr<GetNodeTypeListInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodeTypeListInfoResponse(doRequest(make_shared<string>("GetNodeTypeListInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodeTypeListInfoResponse Alibabacloud_Dataworks-public20200518::Client::getNodeTypeListInfoSimply(shared_ptr<GetNodeTypeListInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeTypeListInfo(request, runtime);
}

GetInstanceStatusCountResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusCount(shared_ptr<GetInstanceStatusCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceStatusCountResponse(doRequest(make_shared<string>("GetInstanceStatusCount"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceStatusCountResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceStatusCountSimply(shared_ptr<GetInstanceStatusCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceStatusCount(request, runtime);
}

ListDataServiceFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceFolders(shared_ptr<ListDataServiceFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServiceFoldersResponse(doRequest(make_shared<string>("ListDataServiceFolders"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServiceFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceFoldersSimply(shared_ptr<ListDataServiceFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceFolders(request, runtime);
}

ListQualityResultsByRuleResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByRule(shared_ptr<ListQualityResultsByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListQualityResultsByRuleResponse(doRequest(make_shared<string>("ListQualityResultsByRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListQualityResultsByRuleResponse Alibabacloud_Dataworks-public20200518::Client::listQualityResultsByRuleSimply(shared_ptr<ListQualityResultsByRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityResultsByRule(request, runtime);
}

ListMetaDBResponse Alibabacloud_Dataworks-public20200518::Client::listMetaDB(shared_ptr<ListMetaDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListMetaDBResponse(doRequest(make_shared<string>("ListMetaDB"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ListMetaDBResponse Alibabacloud_Dataworks-public20200518::Client::listMetaDBSimply(shared_ptr<ListMetaDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMetaDB(request, runtime);
}

CreateTableResponse Alibabacloud_Dataworks-public20200518::Client::createTable(shared_ptr<CreateTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateTableResponse(doRequest(make_shared<string>("CreateTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateTableResponse Alibabacloud_Dataworks-public20200518::Client::createTableSimply(shared_ptr<CreateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTable(request, runtime);
}

CreateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::createTableTheme(shared_ptr<CreateTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateTableThemeResponse(doRequest(make_shared<string>("CreateTableTheme"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::createTableThemeSimply(shared_ptr<CreateTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableTheme(request, runtime);
}

GetInstanceErrorRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceErrorRank(shared_ptr<GetInstanceErrorRankRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceErrorRankResponse(doRequest(make_shared<string>("GetInstanceErrorRank"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceErrorRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceErrorRankSimply(shared_ptr<GetInstanceErrorRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceErrorRank(request, runtime);
}

GetDDLJobStatusResponse Alibabacloud_Dataworks-public20200518::Client::getDDLJobStatus(shared_ptr<GetDDLJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDDLJobStatusResponse(doRequest(make_shared<string>("GetDDLJobStatus"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetDDLJobStatusResponse Alibabacloud_Dataworks-public20200518::Client::getDDLJobStatusSimply(shared_ptr<GetDDLJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDDLJobStatus(request, runtime);
}

GetInstanceConsumeTimeRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceConsumeTimeRank(shared_ptr<GetInstanceConsumeTimeRankRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceConsumeTimeRankResponse(doRequest(make_shared<string>("GetInstanceConsumeTimeRank"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceConsumeTimeRankResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceConsumeTimeRankSimply(shared_ptr<GetInstanceConsumeTimeRankRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceConsumeTimeRank(request, runtime);
}

CreateDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiAuthority(shared_ptr<CreateDataServiceApiAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDataServiceApiAuthorityResponse(doRequest(make_shared<string>("CreateDataServiceApiAuthority"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiAuthoritySimply(shared_ptr<CreateDataServiceApiAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApiAuthority(request, runtime);
}

DeleteDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiAuthority(shared_ptr<DeleteDataServiceApiAuthorityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDataServiceApiAuthorityResponse(doRequest(make_shared<string>("DeleteDataServiceApiAuthority"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDataServiceApiAuthorityResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiAuthoritySimply(shared_ptr<DeleteDataServiceApiAuthorityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataServiceApiAuthority(request, runtime);
}

CreateDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceGroup(shared_ptr<CreateDataServiceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDataServiceGroupResponse(doRequest(make_shared<string>("CreateDataServiceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceGroupSimply(shared_ptr<CreateDataServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceGroup(request, runtime);
}

UpdateMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTable(shared_ptr<UpdateMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateMetaTableResponse(doRequest(make_shared<string>("UpdateMetaTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableSimply(shared_ptr<UpdateMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaTable(request, runtime);
}

GetInstanceCountTrendResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceCountTrend(shared_ptr<GetInstanceCountTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceCountTrendResponse(doRequest(make_shared<string>("GetInstanceCountTrend"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceCountTrendResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceCountTrendSimply(shared_ptr<GetInstanceCountTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceCountTrend(request, runtime);
}

DeleteTableResponse Alibabacloud_Dataworks-public20200518::Client::deleteTable(shared_ptr<DeleteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteTableResponse(doRequest(make_shared<string>("DeleteTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteTableResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableSimply(shared_ptr<DeleteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTable(request, runtime);
}

ListTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::listTableTheme(shared_ptr<ListTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListTableThemeResponse(doRequest(make_shared<string>("ListTableTheme"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ListTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::listTableThemeSimply(shared_ptr<ListTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTableTheme(request, runtime);
}

GetSuccessInstanceTrendResponse Alibabacloud_Dataworks-public20200518::Client::getSuccessInstanceTrend(shared_ptr<GetSuccessInstanceTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetSuccessInstanceTrendResponse(doRequest(make_shared<string>("GetSuccessInstanceTrend"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetSuccessInstanceTrendResponse Alibabacloud_Dataworks-public20200518::Client::getSuccessInstanceTrendSimply(shared_ptr<GetSuccessInstanceTrendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSuccessInstanceTrend(request, runtime);
}

UpdateTableResponse Alibabacloud_Dataworks-public20200518::Client::updateTable(shared_ptr<UpdateTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateTableResponse(doRequest(make_shared<string>("UpdateTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateTableResponse Alibabacloud_Dataworks-public20200518::Client::updateTableSimply(shared_ptr<UpdateTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTable(request, runtime);
}

GetDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceFolder(shared_ptr<GetDataServiceFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataServiceFolderResponse(doRequest(make_shared<string>("GetDataServiceFolder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceFolderSimply(shared_ptr<GetDataServiceFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceFolder(request, runtime);
}

ListTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::listTableLevel(shared_ptr<ListTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListTableLevelResponse(doRequest(make_shared<string>("ListTableLevel"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ListTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::listTableLevelSimply(shared_ptr<ListTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTableLevel(request, runtime);
}

ListDataServiceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceGroups(shared_ptr<ListDataServiceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServiceGroupsResponse(doRequest(make_shared<string>("ListDataServiceGroups"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServiceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceGroupsSimply(shared_ptr<ListDataServiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceGroups(request, runtime);
}

UpdateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::updateTableTheme(shared_ptr<UpdateTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateTableThemeResponse(doRequest(make_shared<string>("UpdateTableTheme"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::updateTableThemeSimply(shared_ptr<UpdateTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableTheme(request, runtime);
}

CreateDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceFolder(shared_ptr<CreateDataServiceFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDataServiceFolderResponse(doRequest(make_shared<string>("CreateDataServiceFolder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDataServiceFolderResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceFolderSimply(shared_ptr<CreateDataServiceFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceFolder(request, runtime);
}

GetDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceGroup(shared_ptr<GetDataServiceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataServiceGroupResponse(doRequest(make_shared<string>("GetDataServiceGroup"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataServiceGroupResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceGroupSimply(shared_ptr<GetDataServiceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceGroup(request, runtime);
}

CreateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::createTableLevel(shared_ptr<CreateTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateTableLevelResponse(doRequest(make_shared<string>("CreateTableLevel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::createTableLevelSimply(shared_ptr<CreateTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTableLevel(request, runtime);
}

UpdateMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableIntroWiki(shared_ptr<UpdateMetaTableIntroWikiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateMetaTableIntroWikiResponse(doRequest(make_shared<string>("UpdateMetaTableIntroWiki"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaTableIntroWikiSimply(shared_ptr<UpdateMetaTableIntroWikiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaTableIntroWiki(request, runtime);
}

DeleteTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableLevel(shared_ptr<DeleteTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteTableLevelResponse(doRequest(make_shared<string>("DeleteTableLevel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableLevelSimply(shared_ptr<DeleteTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableLevel(request, runtime);
}

UpdateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::updateTableLevel(shared_ptr<UpdateTableLevelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateTableLevelResponse(doRequest(make_shared<string>("UpdateTableLevel"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateTableLevelResponse Alibabacloud_Dataworks-public20200518::Client::updateTableLevelSimply(shared_ptr<UpdateTableLevelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableLevel(request, runtime);
}

DeleteTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableTheme(shared_ptr<DeleteTableThemeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteTableThemeResponse(doRequest(make_shared<string>("DeleteTableTheme"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteTableThemeResponse Alibabacloud_Dataworks-public20200518::Client::deleteTableThemeSimply(shared_ptr<DeleteTableThemeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTableTheme(request, runtime);
}

ListProgramTypeCountResponse Alibabacloud_Dataworks-public20200518::Client::listProgramTypeCount(shared_ptr<ListProgramTypeCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProgramTypeCountResponse(doRequest(make_shared<string>("ListProgramTypeCount"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProgramTypeCountResponse Alibabacloud_Dataworks-public20200518::Client::listProgramTypeCountSimply(shared_ptr<ListProgramTypeCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProgramTypeCount(request, runtime);
}

UpdateTableModelInfoResponse Alibabacloud_Dataworks-public20200518::Client::updateTableModelInfo(shared_ptr<UpdateTableModelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateTableModelInfoResponse(doRequest(make_shared<string>("UpdateTableModelInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateTableModelInfoResponse Alibabacloud_Dataworks-public20200518::Client::updateTableModelInfoSimply(shared_ptr<UpdateTableModelInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTableModelInfo(request, runtime);
}

ListProjectsResponse Alibabacloud_Dataworks-public20200518::Client::listProjects(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProjectsResponse(doRequest(make_shared<string>("ListProjects"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProjectsResponse Alibabacloud_Dataworks-public20200518::Client::listProjectsSimply(shared_ptr<ListProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjects(request, runtime);
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20200518::Client::listProjectMembers(shared_ptr<ListProjectMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProjectMembersResponse(doRequest(make_shared<string>("ListProjectMembers"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProjectMembersResponse Alibabacloud_Dataworks-public20200518::Client::listProjectMembersSimply(shared_ptr<ListProjectMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectMembers(request, runtime);
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::createProjectMember(shared_ptr<CreateProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateProjectMemberResponse(doRequest(make_shared<string>("CreateProjectMember"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::createProjectMemberSimply(shared_ptr<CreateProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProjectMember(request, runtime);
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20200518::Client::listProjectRoles(shared_ptr<ListProjectRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListProjectRolesResponse(doRequest(make_shared<string>("ListProjectRoles"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListProjectRolesResponse Alibabacloud_Dataworks-public20200518::Client::listProjectRolesSimply(shared_ptr<ListProjectRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectRoles(request, runtime);
}

AddProjectMemberToRoleResponse Alibabacloud_Dataworks-public20200518::Client::addProjectMemberToRole(shared_ptr<AddProjectMemberToRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return AddProjectMemberToRoleResponse(doRequest(make_shared<string>("AddProjectMemberToRole"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

AddProjectMemberToRoleResponse Alibabacloud_Dataworks-public20200518::Client::addProjectMemberToRoleSimply(shared_ptr<AddProjectMemberToRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addProjectMemberToRole(request, runtime);
}

RemoveProjectMemberFromRoleResponse Alibabacloud_Dataworks-public20200518::Client::removeProjectMemberFromRole(shared_ptr<RemoveProjectMemberFromRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RemoveProjectMemberFromRoleResponse(doRequest(make_shared<string>("RemoveProjectMemberFromRole"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RemoveProjectMemberFromRoleResponse Alibabacloud_Dataworks-public20200518::Client::removeProjectMemberFromRoleSimply(shared_ptr<RemoveProjectMemberFromRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeProjectMemberFromRole(request, runtime);
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::deleteProjectMember(shared_ptr<DeleteProjectMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteProjectMemberResponse(doRequest(make_shared<string>("DeleteProjectMember"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteProjectMemberResponse Alibabacloud_Dataworks-public20200518::Client::deleteProjectMemberSimply(shared_ptr<DeleteProjectMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProjectMember(request, runtime);
}

CreateDagComplementResponse Alibabacloud_Dataworks-public20200518::Client::createDagComplement(shared_ptr<CreateDagComplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDagComplementResponse(doRequest(make_shared<string>("CreateDagComplement"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDagComplementResponse Alibabacloud_Dataworks-public20200518::Client::createDagComplementSimply(shared_ptr<CreateDagComplementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDagComplement(request, runtime);
}

CreateDagTestResponse Alibabacloud_Dataworks-public20200518::Client::createDagTest(shared_ptr<CreateDagTestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDagTestResponse(doRequest(make_shared<string>("CreateDagTest"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDagTestResponse Alibabacloud_Dataworks-public20200518::Client::createDagTestSimply(shared_ptr<CreateDagTestRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDagTest(request, runtime);
}

ListCalcEnginesResponse Alibabacloud_Dataworks-public20200518::Client::listCalcEngines(shared_ptr<ListCalcEnginesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListCalcEnginesResponse(doRequest(make_shared<string>("ListCalcEngines"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListCalcEnginesResponse Alibabacloud_Dataworks-public20200518::Client::listCalcEnginesSimply(shared_ptr<ListCalcEnginesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCalcEngines(request, runtime);
}

ListConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::listConnections(shared_ptr<ListConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListConnectionsResponse(doRequest(make_shared<string>("ListConnections"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

ListConnectionsResponse Alibabacloud_Dataworks-public20200518::Client::listConnectionsSimply(shared_ptr<ListConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnections(request, runtime);
}

UpdateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::updateConnection(shared_ptr<UpdateConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateConnectionResponse(doRequest(make_shared<string>("UpdateConnection"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::updateConnectionSimply(shared_ptr<UpdateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnection(request, runtime);
}

DeleteConnectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteConnection(shared_ptr<DeleteConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteConnectionResponse(doRequest(make_shared<string>("DeleteConnection"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteConnectionResponse Alibabacloud_Dataworks-public20200518::Client::deleteConnectionSimply(shared_ptr<DeleteConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConnection(request, runtime);
}

GetProjectDetailResponse Alibabacloud_Dataworks-public20200518::Client::getProjectDetail(shared_ptr<GetProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetProjectDetailResponse(doRequest(make_shared<string>("GetProjectDetail"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetProjectDetailResponse Alibabacloud_Dataworks-public20200518::Client::getProjectDetailSimply(shared_ptr<GetProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectDetail(request, runtime);
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listResourceGroups(shared_ptr<ListResourceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListResourceGroupsResponse(doRequest(make_shared<string>("ListResourceGroups"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListResourceGroupsResponse Alibabacloud_Dataworks-public20200518::Client::listResourceGroupsSimply(shared_ptr<ListResourceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceGroups(request, runtime);
}

CreateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::createConnection(shared_ptr<CreateConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateConnectionResponse(doRequest(make_shared<string>("CreateConnection"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateConnectionResponse Alibabacloud_Dataworks-public20200518::Client::createConnectionSimply(shared_ptr<CreateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConnection(request, runtime);
}

GetDataServiceApplicationResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApplication(shared_ptr<GetDataServiceApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataServiceApplicationResponse(doRequest(make_shared<string>("GetDataServiceApplication"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataServiceApplicationResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApplicationSimply(shared_ptr<GetDataServiceApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApplication(request, runtime);
}

ListDataServiceApplicationsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApplications(shared_ptr<ListDataServiceApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServiceApplicationsResponse(doRequest(make_shared<string>("ListDataServiceApplications"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServiceApplicationsResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApplicationsSimply(shared_ptr<ListDataServiceApplicationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApplications(request, runtime);
}

GetNodeOnBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getNodeOnBaseline(shared_ptr<GetNodeOnBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodeOnBaselineResponse(doRequest(make_shared<string>("GetNodeOnBaseline"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodeOnBaselineResponse Alibabacloud_Dataworks-public20200518::Client::getNodeOnBaselineSimply(shared_ptr<GetNodeOnBaselineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeOnBaseline(request, runtime);
}

ListBaselineConfigsResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineConfigs(shared_ptr<ListBaselineConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListBaselineConfigsResponse(doRequest(make_shared<string>("ListBaselineConfigs"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListBaselineConfigsResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineConfigsSimply(shared_ptr<ListBaselineConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselineConfigs(request, runtime);
}

GetMetaTableChangeLogResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableChangeLog(shared_ptr<GetMetaTableChangeLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableChangeLogResponse(doRequest(make_shared<string>("GetMetaTableChangeLog"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaTableChangeLogResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableChangeLogSimply(shared_ptr<GetMetaTableChangeLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableChangeLog(request, runtime);
}

GetMetaTableOutputResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableOutput(shared_ptr<GetMetaTableOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableOutputResponse(doRequest(make_shared<string>("GetMetaTableOutput"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaTableOutputResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableOutputSimply(shared_ptr<GetMetaTableOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableOutput(request, runtime);
}

GetMetaTablePartitionResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTablePartition(shared_ptr<GetMetaTablePartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTablePartitionResponse(doRequest(make_shared<string>("GetMetaTablePartition"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaTablePartitionResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTablePartitionSimply(shared_ptr<GetMetaTablePartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTablePartition(request, runtime);
}

GetMetaTableFullInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableFullInfo(shared_ptr<GetMetaTableFullInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableFullInfoResponse(doRequest(make_shared<string>("GetMetaTableFullInfo"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetMetaTableFullInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableFullInfoSimply(shared_ptr<GetMetaTableFullInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableFullInfo(request, runtime);
}

GetFileVersionResponse Alibabacloud_Dataworks-public20200518::Client::getFileVersion(shared_ptr<GetFileVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetFileVersionResponse(doRequest(make_shared<string>("GetFileVersion"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetFileVersionResponse Alibabacloud_Dataworks-public20200518::Client::getFileVersionSimply(shared_ptr<GetFileVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFileVersion(request, runtime);
}

GetMetaTableBasicInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableBasicInfo(shared_ptr<GetMetaTableBasicInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableBasicInfoResponse(doRequest(make_shared<string>("GetMetaTableBasicInfo"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetMetaTableBasicInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableBasicInfoSimply(shared_ptr<GetMetaTableBasicInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableBasicInfo(request, runtime);
}

GetMetaTableColumnResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableColumn(shared_ptr<GetMetaTableColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableColumnResponse(doRequest(make_shared<string>("GetMetaTableColumn"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetMetaTableColumnResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableColumnSimply(shared_ptr<GetMetaTableColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableColumn(request, runtime);
}

GetMetaDBInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBInfo(shared_ptr<GetMetaDBInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaDBInfoResponse(doRequest(make_shared<string>("GetMetaDBInfo"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetMetaDBInfoResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBInfoSimply(shared_ptr<GetMetaDBInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaDBInfo(request, runtime);
}

GetMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCategory(shared_ptr<GetMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaCategoryResponse(doRequest(make_shared<string>("GetMetaCategory"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaCategorySimply(shared_ptr<GetMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaCategory(request, runtime);
}

ListAlertMessagesResponse Alibabacloud_Dataworks-public20200518::Client::listAlertMessages(shared_ptr<ListAlertMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListAlertMessagesResponse(doRequest(make_shared<string>("ListAlertMessages"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListAlertMessagesResponse Alibabacloud_Dataworks-public20200518::Client::listAlertMessagesSimply(shared_ptr<ListAlertMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertMessages(request, runtime);
}

GetBaselineConfigResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineConfig(shared_ptr<GetBaselineConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetBaselineConfigResponse(doRequest(make_shared<string>("GetBaselineConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetBaselineConfigResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineConfigSimply(shared_ptr<GetBaselineConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineConfig(request, runtime);
}

SearchMetaTablesResponse Alibabacloud_Dataworks-public20200518::Client::searchMetaTables(shared_ptr<SearchMetaTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SearchMetaTablesResponse(doRequest(make_shared<string>("SearchMetaTables"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SearchMetaTablesResponse Alibabacloud_Dataworks-public20200518::Client::searchMetaTablesSimply(shared_ptr<SearchMetaTablesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMetaTables(request, runtime);
}

GetMetaTableListByCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableListByCategory(shared_ptr<GetMetaTableListByCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableListByCategoryResponse(doRequest(make_shared<string>("GetMetaTableListByCategory"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

GetMetaTableListByCategoryResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableListByCategorySimply(shared_ptr<GetMetaTableListByCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableListByCategory(request, runtime);
}

DeleteMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCategory(shared_ptr<DeleteMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteMetaCategoryResponse(doRequest(make_shared<string>("DeleteMetaCategory"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), make_shared<map<string, boost::any>>(request->toMap()), nullptr, runtime));
}

DeleteMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteMetaCategorySimply(shared_ptr<DeleteMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMetaCategory(request, runtime);
}

UpdateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCategory(shared_ptr<UpdateMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateMetaCategoryResponse(doRequest(make_shared<string>("UpdateMetaCategory"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::updateMetaCategorySimply(shared_ptr<UpdateMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMetaCategory(request, runtime);
}

ListTopicsResponse Alibabacloud_Dataworks-public20200518::Client::listTopics(shared_ptr<ListTopicsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListTopicsResponse(doRequest(make_shared<string>("ListTopics"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListTopicsResponse Alibabacloud_Dataworks-public20200518::Client::listTopicsSimply(shared_ptr<ListTopicsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTopics(request, runtime);
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20200518::Client::listFileVersions(shared_ptr<ListFileVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListFileVersionsResponse(doRequest(make_shared<string>("ListFileVersions"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListFileVersionsResponse Alibabacloud_Dataworks-public20200518::Client::listFileVersionsSimply(shared_ptr<ListFileVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFileVersions(request, runtime);
}

CreateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCategory(shared_ptr<CreateMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateMetaCategoryResponse(doRequest(make_shared<string>("CreateMetaCategory"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::createMetaCategorySimply(shared_ptr<CreateMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMetaCategory(request, runtime);
}

ListNodeIOResponse Alibabacloud_Dataworks-public20200518::Client::listNodeIO(shared_ptr<ListNodeIORequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListNodeIOResponse(doRequest(make_shared<string>("ListNodeIO"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListNodeIOResponse Alibabacloud_Dataworks-public20200518::Client::listNodeIOSimply(shared_ptr<ListNodeIORequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeIO(request, runtime);
}

GetTopicInfluenceResponse Alibabacloud_Dataworks-public20200518::Client::getTopicInfluence(shared_ptr<GetTopicInfluenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetTopicInfluenceResponse(doRequest(make_shared<string>("GetTopicInfluence"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetTopicInfluenceResponse Alibabacloud_Dataworks-public20200518::Client::getTopicInfluenceSimply(shared_ptr<GetTopicInfluenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopicInfluence(request, runtime);
}

GetTopicResponse Alibabacloud_Dataworks-public20200518::Client::getTopic(shared_ptr<GetTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetTopicResponse(doRequest(make_shared<string>("GetTopic"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetTopicResponse Alibabacloud_Dataworks-public20200518::Client::getTopicSimply(shared_ptr<GetTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTopic(request, runtime);
}

DeleteFromMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteFromMetaCategory(shared_ptr<DeleteFromMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteFromMetaCategoryResponse(doRequest(make_shared<string>("DeleteFromMetaCategory"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteFromMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::deleteFromMetaCategorySimply(shared_ptr<DeleteFromMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFromMetaCategory(request, runtime);
}

GetNodeResponse Alibabacloud_Dataworks-public20200518::Client::getNode(shared_ptr<GetNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodeResponse(doRequest(make_shared<string>("GetNode"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeSimply(shared_ptr<GetNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNode(request, runtime);
}

ListNodesResponse Alibabacloud_Dataworks-public20200518::Client::listNodes(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListNodesResponse(doRequest(make_shared<string>("ListNodes"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListNodesResponse Alibabacloud_Dataworks-public20200518::Client::listNodesSimply(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodes(request, runtime);
}

GetNodeCodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeCode(shared_ptr<GetNodeCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetNodeCodeResponse(doRequest(make_shared<string>("GetNodeCode"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetNodeCodeResponse Alibabacloud_Dataworks-public20200518::Client::getNodeCodeSimply(shared_ptr<GetNodeCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodeCode(request, runtime);
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20200518::Client::establishRelationTableToBusiness(shared_ptr<EstablishRelationTableToBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return EstablishRelationTableToBusinessResponse(doRequest(make_shared<string>("EstablishRelationTableToBusiness"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

EstablishRelationTableToBusinessResponse Alibabacloud_Dataworks-public20200518::Client::establishRelationTableToBusinessSimply(shared_ptr<EstablishRelationTableToBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return establishRelationTableToBusiness(request, runtime);
}

UpdateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::updateDataServiceApi(shared_ptr<UpdateDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateDataServiceApiResponse(doRequest(make_shared<string>("UpdateDataServiceApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::updateDataServiceApiSimply(shared_ptr<UpdateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataServiceApi(request, runtime);
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::updateUdfFile(shared_ptr<UpdateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateUdfFileResponse(doRequest(make_shared<string>("UpdateUdfFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::updateUdfFileSimply(shared_ptr<UpdateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUdfFile(request, runtime);
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::createUdfFile(shared_ptr<CreateUdfFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateUdfFileResponse(doRequest(make_shared<string>("CreateUdfFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateUdfFileResponse Alibabacloud_Dataworks-public20200518::Client::createUdfFileSimply(shared_ptr<CreateUdfFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUdfFile(request, runtime);
}

ListFilesResponse Alibabacloud_Dataworks-public20200518::Client::listFiles(shared_ptr<ListFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListFilesResponse(doRequest(make_shared<string>("ListFiles"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListFilesResponse Alibabacloud_Dataworks-public20200518::Client::listFilesSimply(shared_ptr<ListFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFiles(request, runtime);
}

ListDataServiceAuthorizedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceAuthorizedApis(shared_ptr<ListDataServiceAuthorizedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServiceAuthorizedApisResponse(doRequest(make_shared<string>("ListDataServiceAuthorizedApis"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServiceAuthorizedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceAuthorizedApisSimply(shared_ptr<ListDataServiceAuthorizedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceAuthorizedApis(request, runtime);
}

UpdateFileResponse Alibabacloud_Dataworks-public20200518::Client::updateFile(shared_ptr<UpdateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateFileResponse(doRequest(make_shared<string>("UpdateFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateFileResponse Alibabacloud_Dataworks-public20200518::Client::updateFileSimply(shared_ptr<UpdateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFile(request, runtime);
}

DeleteFolderResponse Alibabacloud_Dataworks-public20200518::Client::deleteFolder(shared_ptr<DeleteFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteFolderResponse(doRequest(make_shared<string>("DeleteFolder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteFolderResponse Alibabacloud_Dataworks-public20200518::Client::deleteFolderSimply(shared_ptr<DeleteFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFolder(request, runtime);
}

ListFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listFolders(shared_ptr<ListFoldersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListFoldersResponse(doRequest(make_shared<string>("ListFolders"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListFoldersResponse Alibabacloud_Dataworks-public20200518::Client::listFoldersSimply(shared_ptr<ListFoldersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFolders(request, runtime);
}

CheckMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaPartition(shared_ptr<CheckMetaPartitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CheckMetaPartitionResponse(doRequest(make_shared<string>("CheckMetaPartition"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CheckMetaPartitionResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaPartitionSimply(shared_ptr<CheckMetaPartitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaPartition(request, runtime);
}

UpdateFolderResponse Alibabacloud_Dataworks-public20200518::Client::updateFolder(shared_ptr<UpdateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateFolderResponse(doRequest(make_shared<string>("UpdateFolder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateFolderResponse Alibabacloud_Dataworks-public20200518::Client::updateFolderSimply(shared_ptr<UpdateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFolder(request, runtime);
}

DeleteRemindResponse Alibabacloud_Dataworks-public20200518::Client::deleteRemind(shared_ptr<DeleteRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteRemindResponse(doRequest(make_shared<string>("DeleteRemind"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteRemindResponse Alibabacloud_Dataworks-public20200518::Client::deleteRemindSimply(shared_ptr<DeleteRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRemind(request, runtime);
}

AddToMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::addToMetaCategory(shared_ptr<AddToMetaCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return AddToMetaCategoryResponse(doRequest(make_shared<string>("AddToMetaCategory"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

AddToMetaCategoryResponse Alibabacloud_Dataworks-public20200518::Client::addToMetaCategorySimply(shared_ptr<AddToMetaCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addToMetaCategory(request, runtime);
}

ListInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listInstances(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListInstancesResponse(doRequest(make_shared<string>("ListInstances"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListInstancesResponse Alibabacloud_Dataworks-public20200518::Client::listInstancesSimply(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstances(request, runtime);
}

SetSuccessInstanceResponse Alibabacloud_Dataworks-public20200518::Client::setSuccessInstance(shared_ptr<SetSuccessInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SetSuccessInstanceResponse(doRequest(make_shared<string>("SetSuccessInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SetSuccessInstanceResponse Alibabacloud_Dataworks-public20200518::Client::setSuccessInstanceSimply(shared_ptr<SetSuccessInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSuccessInstance(request, runtime);
}

CreateFileResponse Alibabacloud_Dataworks-public20200518::Client::createFile(shared_ptr<CreateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateFileResponse(doRequest(make_shared<string>("CreateFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateFileResponse Alibabacloud_Dataworks-public20200518::Client::createFileSimply(shared_ptr<CreateFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFile(request, runtime);
}

StopInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopInstance(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return StopInstanceResponse(doRequest(make_shared<string>("StopInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

StopInstanceResponse Alibabacloud_Dataworks-public20200518::Client::stopInstanceSimply(shared_ptr<StopInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopInstance(request, runtime);
}

ResumeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::resumeInstance(shared_ptr<ResumeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ResumeInstanceResponse(doRequest(make_shared<string>("ResumeInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ResumeInstanceResponse Alibabacloud_Dataworks-public20200518::Client::resumeInstanceSimply(shared_ptr<ResumeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeInstance(request, runtime);
}

SuspendInstanceResponse Alibabacloud_Dataworks-public20200518::Client::suspendInstance(shared_ptr<SuspendInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SuspendInstanceResponse(doRequest(make_shared<string>("SuspendInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SuspendInstanceResponse Alibabacloud_Dataworks-public20200518::Client::suspendInstanceSimply(shared_ptr<SuspendInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendInstance(request, runtime);
}

RestartInstanceResponse Alibabacloud_Dataworks-public20200518::Client::restartInstance(shared_ptr<RestartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return RestartInstanceResponse(doRequest(make_shared<string>("RestartInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

RestartInstanceResponse Alibabacloud_Dataworks-public20200518::Client::restartInstanceSimply(shared_ptr<RestartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartInstance(request, runtime);
}

ListDataServiceApiAuthoritiesResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiAuthorities(shared_ptr<ListDataServiceApiAuthoritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServiceApiAuthoritiesResponse(doRequest(make_shared<string>("ListDataServiceApiAuthorities"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServiceApiAuthoritiesResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApiAuthoritiesSimply(shared_ptr<ListDataServiceApiAuthoritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApiAuthorities(request, runtime);
}

ListDataServicePublishedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServicePublishedApis(shared_ptr<ListDataServicePublishedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServicePublishedApisResponse(doRequest(make_shared<string>("ListDataServicePublishedApis"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServicePublishedApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServicePublishedApisSimply(shared_ptr<ListDataServicePublishedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServicePublishedApis(request, runtime);
}

GetInstanceLogResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceLog(shared_ptr<GetInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceLogResponse(doRequest(make_shared<string>("GetInstanceLog"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceLogResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceLogSimply(shared_ptr<GetInstanceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceLog(request, runtime);
}

CreateFolderResponse Alibabacloud_Dataworks-public20200518::Client::createFolder(shared_ptr<CreateFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateFolderResponse(doRequest(make_shared<string>("CreateFolder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateFolderResponse Alibabacloud_Dataworks-public20200518::Client::createFolderSimply(shared_ptr<CreateFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFolder(request, runtime);
}

GetBusinessResponse Alibabacloud_Dataworks-public20200518::Client::getBusiness(shared_ptr<GetBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetBusinessResponse(doRequest(make_shared<string>("GetBusiness"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetBusinessResponse Alibabacloud_Dataworks-public20200518::Client::getBusinessSimply(shared_ptr<GetBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusiness(request, runtime);
}

GetInstanceResponse Alibabacloud_Dataworks-public20200518::Client::getInstance(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetInstanceResponse(doRequest(make_shared<string>("GetInstance"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetInstanceResponse Alibabacloud_Dataworks-public20200518::Client::getInstanceSimply(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstance(request, runtime);
}

GetFileResponse Alibabacloud_Dataworks-public20200518::Client::getFile(shared_ptr<GetFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetFileResponse(doRequest(make_shared<string>("GetFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetFileResponse Alibabacloud_Dataworks-public20200518::Client::getFileSimply(shared_ptr<GetFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFile(request, runtime);
}

ListBusinessResponse Alibabacloud_Dataworks-public20200518::Client::listBusiness(shared_ptr<ListBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListBusinessResponse(doRequest(make_shared<string>("ListBusiness"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListBusinessResponse Alibabacloud_Dataworks-public20200518::Client::listBusinessSimply(shared_ptr<ListBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBusiness(request, runtime);
}

GetMetaDBTableListResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBTableList(shared_ptr<GetMetaDBTableListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaDBTableListResponse(doRequest(make_shared<string>("GetMetaDBTableList"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaDBTableListResponse Alibabacloud_Dataworks-public20200518::Client::getMetaDBTableListSimply(shared_ptr<GetMetaDBTableListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaDBTableList(request, runtime);
}

CheckMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTable(shared_ptr<CheckMetaTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CheckMetaTableResponse(doRequest(make_shared<string>("CheckMetaTable"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CheckMetaTableResponse Alibabacloud_Dataworks-public20200518::Client::checkMetaTableSimply(shared_ptr<CheckMetaTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMetaTable(request, runtime);
}

GetFolderResponse Alibabacloud_Dataworks-public20200518::Client::getFolder(shared_ptr<GetFolderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetFolderResponse(doRequest(make_shared<string>("GetFolder"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetFolderResponse Alibabacloud_Dataworks-public20200518::Client::getFolderSimply(shared_ptr<GetFolderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFolder(request, runtime);
}

DeployFileResponse Alibabacloud_Dataworks-public20200518::Client::deployFile(shared_ptr<DeployFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeployFileResponse(doRequest(make_shared<string>("DeployFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeployFileResponse Alibabacloud_Dataworks-public20200518::Client::deployFileSimply(shared_ptr<DeployFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployFile(request, runtime);
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20200518::Client::deleteBusiness(shared_ptr<DeleteBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteBusinessResponse(doRequest(make_shared<string>("DeleteBusiness"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteBusinessResponse Alibabacloud_Dataworks-public20200518::Client::deleteBusinessSimply(shared_ptr<DeleteBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusiness(request, runtime);
}

DeleteFileResponse Alibabacloud_Dataworks-public20200518::Client::deleteFile(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteFileResponse(doRequest(make_shared<string>("DeleteFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteFileResponse Alibabacloud_Dataworks-public20200518::Client::deleteFileSimply(shared_ptr<DeleteFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFile(request, runtime);
}

ListQualityRulesResponse Alibabacloud_Dataworks-public20200518::Client::listQualityRules(shared_ptr<ListQualityRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListQualityRulesResponse(doRequest(make_shared<string>("ListQualityRules"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListQualityRulesResponse Alibabacloud_Dataworks-public20200518::Client::listQualityRulesSimply(shared_ptr<ListQualityRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listQualityRules(request, runtime);
}

CreateRemindResponse Alibabacloud_Dataworks-public20200518::Client::createRemind(shared_ptr<CreateRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateRemindResponse(doRequest(make_shared<string>("CreateRemind"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateRemindResponse Alibabacloud_Dataworks-public20200518::Client::createRemindSimply(shared_ptr<CreateRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRemind(request, runtime);
}

GetQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::getQualityRule(shared_ptr<GetQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetQualityRuleResponse(doRequest(make_shared<string>("GetQualityRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::getQualityRuleSimply(shared_ptr<GetQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRule(request, runtime);
}

GetDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::getDeployment(shared_ptr<GetDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDeploymentResponse(doRequest(make_shared<string>("GetDeployment"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDeploymentResponse Alibabacloud_Dataworks-public20200518::Client::getDeploymentSimply(shared_ptr<GetDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeployment(request, runtime);
}

UpdateRemindResponse Alibabacloud_Dataworks-public20200518::Client::updateRemind(shared_ptr<UpdateRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateRemindResponse(doRequest(make_shared<string>("UpdateRemind"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateRemindResponse Alibabacloud_Dataworks-public20200518::Client::updateRemindSimply(shared_ptr<UpdateRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRemind(request, runtime);
}

GetMetaColumnLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaColumnLineage(shared_ptr<GetMetaColumnLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaColumnLineageResponse(doRequest(make_shared<string>("GetMetaColumnLineage"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaColumnLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaColumnLineageSimply(shared_ptr<GetMetaColumnLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaColumnLineage(request, runtime);
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::updateBusiness(shared_ptr<UpdateBusinessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateBusinessResponse(doRequest(make_shared<string>("UpdateBusiness"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateBusinessResponse Alibabacloud_Dataworks-public20200518::Client::updateBusinessSimply(shared_ptr<UpdateBusinessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusiness(request, runtime);
}

UpdateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityRule(shared_ptr<UpdateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateQualityRuleResponse(doRequest(make_shared<string>("UpdateQualityRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityRuleSimply(shared_ptr<UpdateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityRule(request, runtime);
}

DeleteQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRule(shared_ptr<DeleteQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteQualityRuleResponse(doRequest(make_shared<string>("DeleteQualityRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRuleSimply(shared_ptr<DeleteQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRule(request, runtime);
}

SubmitFileResponse Alibabacloud_Dataworks-public20200518::Client::submitFile(shared_ptr<SubmitFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return SubmitFileResponse(doRequest(make_shared<string>("SubmitFile"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

SubmitFileResponse Alibabacloud_Dataworks-public20200518::Client::submitFileSimply(shared_ptr<SubmitFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitFile(request, runtime);
}

GetDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApi(shared_ptr<GetDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataServiceApiResponse(doRequest(make_shared<string>("GetDataServiceApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServiceApiSimply(shared_ptr<GetDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServiceApi(request, runtime);
}

ListDataServiceApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApis(shared_ptr<ListDataServiceApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListDataServiceApisResponse(doRequest(make_shared<string>("ListDataServiceApis"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListDataServiceApisResponse Alibabacloud_Dataworks-public20200518::Client::listDataServiceApisSimply(shared_ptr<ListDataServiceApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataServiceApis(request, runtime);
}

GetDataServicePublishedApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServicePublishedApi(shared_ptr<GetDataServicePublishedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetDataServicePublishedApiResponse(doRequest(make_shared<string>("GetDataServicePublishedApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetDataServicePublishedApiResponse Alibabacloud_Dataworks-public20200518::Client::getDataServicePublishedApiSimply(shared_ptr<GetDataServicePublishedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataServicePublishedApi(request, runtime);
}

GetBaselineKeyPathResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineKeyPath(shared_ptr<GetBaselineKeyPathRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetBaselineKeyPathResponse(doRequest(make_shared<string>("GetBaselineKeyPath"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetBaselineKeyPathResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineKeyPathSimply(shared_ptr<GetBaselineKeyPathRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineKeyPath(request, runtime);
}

GetRemindResponse Alibabacloud_Dataworks-public20200518::Client::getRemind(shared_ptr<GetRemindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetRemindResponse(doRequest(make_shared<string>("GetRemind"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetRemindResponse Alibabacloud_Dataworks-public20200518::Client::getRemindSimply(shared_ptr<GetRemindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRemind(request, runtime);
}

GetMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableIntroWiki(shared_ptr<GetMetaTableIntroWikiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableIntroWikiResponse(doRequest(make_shared<string>("GetMetaTableIntroWiki"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaTableIntroWikiResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableIntroWikiSimply(shared_ptr<GetMetaTableIntroWikiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableIntroWiki(request, runtime);
}

GetBaselineStatusResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineStatus(shared_ptr<GetBaselineStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetBaselineStatusResponse(doRequest(make_shared<string>("GetBaselineStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetBaselineStatusResponse Alibabacloud_Dataworks-public20200518::Client::getBaselineStatusSimply(shared_ptr<GetBaselineStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaselineStatus(request, runtime);
}

DeleteDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApi(shared_ptr<DeleteDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteDataServiceApiResponse(doRequest(make_shared<string>("DeleteDataServiceApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::deleteDataServiceApiSimply(shared_ptr<DeleteDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataServiceApi(request, runtime);
}

PublishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::publishDataServiceApi(shared_ptr<PublishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return PublishDataServiceApiResponse(doRequest(make_shared<string>("PublishDataServiceApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

PublishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::publishDataServiceApiSimply(shared_ptr<PublishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishDataServiceApi(request, runtime);
}

GetMetaTableLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableLineage(shared_ptr<GetMetaTableLineageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetMetaTableLineageResponse(doRequest(make_shared<string>("GetMetaTableLineage"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetMetaTableLineageResponse Alibabacloud_Dataworks-public20200518::Client::getMetaTableLineageSimply(shared_ptr<GetMetaTableLineageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetaTableLineage(request, runtime);
}

ListBaselineStatusesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineStatuses(shared_ptr<ListBaselineStatusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListBaselineStatusesResponse(doRequest(make_shared<string>("ListBaselineStatuses"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListBaselineStatusesResponse Alibabacloud_Dataworks-public20200518::Client::listBaselineStatusesSimply(shared_ptr<ListBaselineStatusesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBaselineStatuses(request, runtime);
}

ListRemindsResponse Alibabacloud_Dataworks-public20200518::Client::listReminds(shared_ptr<ListRemindsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ListRemindsResponse(doRequest(make_shared<string>("ListReminds"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ListRemindsResponse Alibabacloud_Dataworks-public20200518::Client::listRemindsSimply(shared_ptr<ListRemindsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listReminds(request, runtime);
}

DeleteQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityEntity(shared_ptr<DeleteQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteQualityEntityResponse(doRequest(make_shared<string>("DeleteQualityEntity"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityEntitySimply(shared_ptr<DeleteQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityEntity(request, runtime);
}

CreateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::createQualityFollower(shared_ptr<CreateQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateQualityFollowerResponse(doRequest(make_shared<string>("CreateQualityFollower"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::createQualityFollowerSimply(shared_ptr<CreateQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityFollower(request, runtime);
}

CreateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApi(shared_ptr<CreateDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateDataServiceApiResponse(doRequest(make_shared<string>("CreateDataServiceApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::createDataServiceApiSimply(shared_ptr<CreateDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataServiceApi(request, runtime);
}

AbolishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::abolishDataServiceApi(shared_ptr<AbolishDataServiceApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return AbolishDataServiceApiResponse(doRequest(make_shared<string>("AbolishDataServiceApi"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

AbolishDataServiceApiResponse Alibabacloud_Dataworks-public20200518::Client::abolishDataServiceApiSimply(shared_ptr<AbolishDataServiceApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishDataServiceApi(request, runtime);
}

GetQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::getQualityEntity(shared_ptr<GetQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetQualityEntityResponse(doRequest(make_shared<string>("GetQualityEntity"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::getQualityEntitySimply(shared_ptr<GetQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityEntity(request, runtime);
}

GetQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::getQualityFollower(shared_ptr<GetQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return GetQualityFollowerResponse(doRequest(make_shared<string>("GetQualityFollower"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

GetQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::getQualityFollowerSimply(shared_ptr<GetQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityFollower(request, runtime);
}

DeleteQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityFollower(shared_ptr<DeleteQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteQualityFollowerResponse(doRequest(make_shared<string>("DeleteQualityFollower"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityFollowerSimply(shared_ptr<DeleteQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityFollower(request, runtime);
}

CreateQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::createQualityEntity(shared_ptr<CreateQualityEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateQualityEntityResponse(doRequest(make_shared<string>("CreateQualityEntity"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateQualityEntityResponse Alibabacloud_Dataworks-public20200518::Client::createQualityEntitySimply(shared_ptr<CreateQualityEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityEntity(request, runtime);
}

CreateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRule(shared_ptr<CreateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateQualityRuleResponse(doRequest(make_shared<string>("CreateQualityRule"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateQualityRuleResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRuleSimply(shared_ptr<CreateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRule(request, runtime);
}

UpdateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityFollower(shared_ptr<UpdateQualityFollowerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateQualityFollowerResponse(doRequest(make_shared<string>("UpdateQualityFollower"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateQualityFollowerResponse Alibabacloud_Dataworks-public20200518::Client::updateQualityFollowerSimply(shared_ptr<UpdateQualityFollowerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateQualityFollower(request, runtime);
}

CreateQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRelativeNode(shared_ptr<CreateQualityRelativeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateQualityRelativeNodeResponse(doRequest(make_shared<string>("CreateQualityRelativeNode"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::createQualityRelativeNodeSimply(shared_ptr<CreateQualityRelativeNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRelativeNode(request, runtime);
}

DeleteQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRelativeNode(shared_ptr<DeleteQualityRelativeNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteQualityRelativeNodeResponse(doRequest(make_shared<string>("DeleteQualityRelativeNode"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2020-05-18"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteQualityRelativeNodeResponse Alibabacloud_Dataworks-public20200518::Client::deleteQualityRelativeNodeSimply(shared_ptr<DeleteQualityRelativeNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRelativeNode(request, runtime);
}

string Alibabacloud_Dataworks-public20200518::Client::getEndpoint(shared_ptr<string> productId,
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

