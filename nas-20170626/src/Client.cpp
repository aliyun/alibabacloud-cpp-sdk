#include <darabonba/Core.hpp>
#include <alibabacloud/NAS20170626.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::NAS20170626::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace NAS20170626
{

AlibabaCloud::NAS20170626::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou-finance" , "nas.cn-hangzhou-dg-a01.aliyuncs.com"},
    {"ap-northeast-2-pop" , "nas.aliyuncs.com"},
    {"ap-southeast-2" , "nas.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "nas.aliyuncs.com"},
    {"cn-beijing-gov-1" , "nas.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "nas.aliyuncs.com"},
    {"cn-edge-1" , "nas.aliyuncs.com"},
    {"cn-fujian" , "nas.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "nas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "nas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "nas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "nas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "nas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "nas.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "nas.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "nas.aliyuncs.com"},
    {"cn-qingdao-nebula" , "nas.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "nas.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "nas.aliyuncs.com"},
    {"cn-shanghai-inner" , "nas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "nas.aliyuncs.com"},
    {"cn-shenzhen-inner" , "nas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "nas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "nas.aliyuncs.com"},
    {"cn-wuhan" , "nas.aliyuncs.com"},
    {"cn-yushanfang" , "nas.aliyuncs.com"},
    {"cn-zhangbei" , "nas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "nas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "nas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "nas.aliyuncs.com"},
    {"eu-west-1-oxs" , "nas.aliyuncs.com"},
    {"rus-west-1-pop" , "nas.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("nas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @deprecated OpenAPI AddClientToBlackList is deprecated
 *
 * @summary Adds a client to the blacklist of a Cloud Parallel File Storage (CPFS) file system and revokes the write access from the client. The blacklist serves as an I/O fence.
 *
 * @description The API operation is available only for CPFS file systems.
 *
 * @param request AddClientToBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddClientToBlackListResponse
 */
AddClientToBlackListResponse Client::addClientToBlackListWithOptions(const AddClientToBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIP()) {
    query["ClientIP"] = request.getClientIP();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddClientToBlackList"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddClientToBlackListResponse>();
}

/**
 * @deprecated OpenAPI AddClientToBlackList is deprecated
 *
 * @summary Adds a client to the blacklist of a Cloud Parallel File Storage (CPFS) file system and revokes the write access from the client. The blacklist serves as an I/O fence.
 *
 * @description The API operation is available only for CPFS file systems.
 *
 * @param request AddClientToBlackListRequest
 * @return AddClientToBlackListResponse
 */
AddClientToBlackListResponse Client::addClientToBlackList(const AddClientToBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addClientToBlackListWithOptions(request, runtime);
}

/**
 * @summary Applies an automatic snapshot policy to one or more file systems.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 * *   You can apply only one automatic snapshot policy to each file system.
 * *   Each automatic snapshot policy can be applied to multiple file systems.
 * *   If an automatic snapshot policy is applied to a file system, you can call the ApplyAutoSnapshotPolicy operation to change the automatic snapshot policy.
 *
 * @param request ApplyAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAutoSnapshotPolicyResponse
 */
ApplyAutoSnapshotPolicyResponse Client::applyAutoSnapshotPolicyWithOptions(const ApplyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoSnapshotPolicyId()) {
    query["AutoSnapshotPolicyId"] = request.getAutoSnapshotPolicyId();
  }

  if (!!request.hasFileSystemIds()) {
    query["FileSystemIds"] = request.getFileSystemIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyAutoSnapshotPolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAutoSnapshotPolicyResponse>();
}

/**
 * @summary Applies an automatic snapshot policy to one or more file systems.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 * *   You can apply only one automatic snapshot policy to each file system.
 * *   Each automatic snapshot policy can be applied to multiple file systems.
 * *   If an automatic snapshot policy is applied to a file system, you can call the ApplyAutoSnapshotPolicy operation to change the automatic snapshot policy.
 *
 * @param request ApplyAutoSnapshotPolicyRequest
 * @return ApplyAutoSnapshotPolicyResponse
 */
ApplyAutoSnapshotPolicyResponse Client::applyAutoSnapshotPolicy(const ApplyAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Adds AutoRefresh configurations to a dataflow.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can add AutoRefresh configurations only to the dataflows that are in the `Running` state.
 * *   You can add a maximum of five AutoRefresh configurations to a dataflow.
 * *   It generally takes 2 to 5 minutes to create an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) operation to query the dataflow status.
 * *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *     **
 *     **Note** The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
 * *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. When you add an AutoRefresh configuration to the prefix for a CPFS dataflow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
 * *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
 * *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes Misconfigured. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
 *
 * @param request ApplyDataFlowAutoRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyDataFlowAutoRefreshResponse
 */
ApplyDataFlowAutoRefreshResponse Client::applyDataFlowAutoRefreshWithOptions(const ApplyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRefreshInterval()) {
    query["AutoRefreshInterval"] = request.getAutoRefreshInterval();
  }

  if (!!request.hasAutoRefreshPolicy()) {
    query["AutoRefreshPolicy"] = request.getAutoRefreshPolicy();
  }

  if (!!request.hasAutoRefreshs()) {
    query["AutoRefreshs"] = request.getAutoRefreshs();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyDataFlowAutoRefresh"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyDataFlowAutoRefreshResponse>();
}

/**
 * @summary Adds AutoRefresh configurations to a dataflow.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can add AutoRefresh configurations only to the dataflows that are in the `Running` state.
 * *   You can add a maximum of five AutoRefresh configurations to a dataflow.
 * *   It generally takes 2 to 5 minutes to create an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) operation to query the dataflow status.
 * *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *     **
 *     **Note** The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
 * *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. When you add an AutoRefresh configuration to the prefix for a CPFS dataflow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
 * *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
 * *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes Misconfigured. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
 *
 * @param request ApplyDataFlowAutoRefreshRequest
 * @return ApplyDataFlowAutoRefreshResponse
 */
ApplyDataFlowAutoRefreshResponse Client::applyDataFlowAutoRefresh(const ApplyDataFlowAutoRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyDataFlowAutoRefreshWithOptions(request, runtime);
}

/**
 * @summary Associates the VSC device with the file system.
 *
 * @description *   Only CPFS for Lingjun supports this operation.
 * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
 *
 * @param request AttachVscToFilesystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachVscToFilesystemsResponse
 */
AttachVscToFilesystemsResponse Client::attachVscToFilesystemsWithOptions(const AttachVscToFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachVscToFilesystems"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachVscToFilesystemsResponse>();
}

/**
 * @summary Associates the VSC device with the file system.
 *
 * @description *   Only CPFS for Lingjun supports this operation.
 * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
 *
 * @param request AttachVscToFilesystemsRequest
 * @return AttachVscToFilesystemsResponse
 */
AttachVscToFilesystemsResponse Client::attachVscToFilesystems(const AttachVscToFilesystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachVscToFilesystemsWithOptions(request, runtime);
}

/**
 * @summary Removes automatic snapshot policies from one or more file systems.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request CancelAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAutoSnapshotPolicyResponse
 */
CancelAutoSnapshotPolicyResponse Client::cancelAutoSnapshotPolicyWithOptions(const CancelAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemIds()) {
    query["FileSystemIds"] = request.getFileSystemIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAutoSnapshotPolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAutoSnapshotPolicyResponse>();
}

/**
 * @summary Removes automatic snapshot policies from one or more file systems.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request CancelAutoSnapshotPolicyRequest
 * @return CancelAutoSnapshotPolicyResponse
 */
CancelAutoSnapshotPolicyResponse Client::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Cancels the AutoRefresh configuration for a dataflow.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can cancel AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
 * *   It generally takes 2 to 5 minutes to cancel the AutoRefresh configurations. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the AutoRefresh tasks.
 *
 * @param request CancelDataFlowAutoRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDataFlowAutoRefreshResponse
 */
CancelDataFlowAutoRefreshResponse Client::cancelDataFlowAutoRefreshWithOptions(const CancelDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRefreshPath()) {
    query["RefreshPath"] = request.getRefreshPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDataFlowAutoRefresh"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDataFlowAutoRefreshResponse>();
}

/**
 * @summary Cancels the AutoRefresh configuration for a dataflow.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can cancel AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
 * *   It generally takes 2 to 5 minutes to cancel the AutoRefresh configurations. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the AutoRefresh tasks.
 *
 * @param request CancelDataFlowAutoRefreshRequest
 * @return CancelDataFlowAutoRefreshResponse
 */
CancelDataFlowAutoRefreshResponse Client::cancelDataFlowAutoRefresh(const CancelDataFlowAutoRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDataFlowAutoRefreshWithOptions(request, runtime);
}

/**
 * @summary Cancels a data streaming task.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   You can cancel a data streaming task only when the task is in the CREATED or RUNNING state.
 * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
 *
 * @param request CancelDataFlowSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDataFlowSubTaskResponse
 */
CancelDataFlowSubTaskResponse Client::cancelDataFlowSubTaskWithOptions(const CancelDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDataFlowSubTaskId()) {
    query["DataFlowSubTaskId"] = request.getDataFlowSubTaskId();
  }

  if (!!request.hasDataFlowTaskId()) {
    query["DataFlowTaskId"] = request.getDataFlowTaskId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDataFlowSubTask"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDataFlowSubTaskResponse>();
}

/**
 * @summary Cancels a data streaming task.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   You can cancel a data streaming task only when the task is in the CREATED or RUNNING state.
 * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
 *
 * @param request CancelDataFlowSubTaskRequest
 * @return CancelDataFlowSubTaskResponse
 */
CancelDataFlowSubTaskResponse Client::cancelDataFlowSubTask(const CancelDataFlowSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDataFlowSubTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels a batch or streaming task that is in the Pending or Execute state.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   You can cancel only the data flow tasks that are in the `Pending` and `Executing` states.
 * *   It generally takes 5 to 10 minutes to cancel a data flow task. You can query the task execution status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation.
 * *   If a data streaming task contains running subtasks, you cannot cancel the streaming task. Otherwise, an InvalidStatus.ResourceMismatch error message is returned.
 *
 * @param request CancelDataFlowTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDataFlowTaskResponse
 */
CancelDataFlowTaskResponse Client::cancelDataFlowTaskWithOptions(const CancelDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDataFlowTask"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDataFlowTaskResponse>();
}

/**
 * @summary Cancels a batch or streaming task that is in the Pending or Execute state.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   You can cancel only the data flow tasks that are in the `Pending` and `Executing` states.
 * *   It generally takes 5 to 10 minutes to cancel a data flow task. You can query the task execution status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation.
 * *   If a data streaming task contains running subtasks, you cannot cancel the streaming task. Otherwise, an InvalidStatus.ResourceMismatch error message is returned.
 *
 * @param request CancelDataFlowTaskRequest
 * @return CancelDataFlowTaskResponse
 */
CancelDataFlowTaskResponse Client::cancelDataFlowTask(const CancelDataFlowTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDataFlowTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels the directory quota of a file system.
 *
 * @description Only General-purpose file systems support the directory quota feature.
 *
 * @param request CancelDirQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDirQuotaResponse
 */
CancelDirQuotaResponse Client::cancelDirQuotaWithOptions(const CancelDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelDirQuota"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDirQuotaResponse>();
}

/**
 * @summary Cancels the directory quota of a file system.
 *
 * @description Only General-purpose file systems support the directory quota feature.
 *
 * @param request CancelDirQuotaRequest
 * @return CancelDirQuotaResponse
 */
CancelDirQuotaResponse Client::cancelDirQuota(const CancelDirQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDirQuotaWithOptions(request, runtime);
}

/**
 * @summary Cancels the quota set for a fileset.
 *
 * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.7.0 and later support this operation.
 *
 * @param request CancelFilesetQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelFilesetQuotaResponse
 */
CancelFilesetQuotaResponse Client::cancelFilesetQuotaWithOptions(const CancelFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelFilesetQuota"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelFilesetQuotaResponse>();
}

/**
 * @summary Cancels the quota set for a fileset.
 *
 * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.7.0 and later support this operation.
 *
 * @param request CancelFilesetQuotaRequest
 * @return CancelFilesetQuotaResponse
 */
CancelFilesetQuotaResponse Client::cancelFilesetQuota(const CancelFilesetQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelFilesetQuotaWithOptions(request, runtime);
}

/**
 * @summary Cancels a running data retrieval task.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request CancelLifecycleRetrieveJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelLifecycleRetrieveJobResponse
 */
CancelLifecycleRetrieveJobResponse Client::cancelLifecycleRetrieveJobWithOptions(const CancelLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelLifecycleRetrieveJob"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelLifecycleRetrieveJobResponse>();
}

/**
 * @summary Cancels a running data retrieval task.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request CancelLifecycleRetrieveJobRequest
 * @return CancelLifecycleRetrieveJobResponse
 */
CancelLifecycleRetrieveJobResponse Client::cancelLifecycleRetrieveJob(const CancelLifecycleRetrieveJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelLifecycleRetrieveJobWithOptions(request, runtime);
}

/**
 * @summary Cancels a running job of the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can cancel only jobs that are in the Running state. You cannot cancel jobs that are in the PartialSuccess, Success, Fail, or Cancelled state.
 * *   If you cancel a running job that permanently deletes files, you cannot restore the files that are already permanently deleted.
 * *   If you cancel a running job that restores files, you can query the restored files from the file system, and query the unrestored files from the recycle bin.
 *
 * @param request CancelRecycleBinJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelRecycleBinJobResponse
 */
CancelRecycleBinJobResponse Client::cancelRecycleBinJobWithOptions(const CancelRecycleBinJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRecycleBinJob"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRecycleBinJobResponse>();
}

/**
 * @summary Cancels a running job of the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can cancel only jobs that are in the Running state. You cannot cancel jobs that are in the PartialSuccess, Success, Fail, or Cancelled state.
 * *   If you cancel a running job that permanently deletes files, you cannot restore the files that are already permanently deleted.
 * *   If you cancel a running job that restores files, you can query the restored files from the file system, and query the unrestored files from the recycle bin.
 *
 * @param request CancelRecycleBinJobRequest
 * @return CancelRecycleBinJobResponse
 */
CancelRecycleBinJobResponse Client::cancelRecycleBinJob(const CancelRecycleBinJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRecycleBinJobWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a file system belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which a file system belongs.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a permission group.
 *
 * @param request CreateAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessGroupResponse
 */
CreateAccessGroupResponse Client::createAccessGroupWithOptions(const CreateAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasAccessGroupType()) {
    query["AccessGroupType"] = request.getAccessGroupType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessGroup"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessGroupResponse>();
}

/**
 * @summary Creates a permission group.
 *
 * @param request CreateAccessGroupRequest
 * @return CreateAccessGroupResponse
 */
CreateAccessGroupResponse Client::createAccessGroup(const CreateAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an access point.
 *
 * @description *   After you call the CreateAccessPoint operation, an access point is not immediately created. Therefore, after you call the CreateAccessPoint operation successfully, call the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the status of the access point. If the status is **Active**, mount the file system. Otherwise, the file system may fail to be mounted.
 * *   Only General-purpose Network File System (NFS) file systems support access points.
 * *   If you want to call the EnabledRam operation to enable a Resource Access Management (RAM) policy, you must configure the corresponding RAM permissions. For more information, see [Manage endpoints](https://help.aliyun.com/document_detail/2545998.html).
 *
 * @param request CreateAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessPointResponse
 */
CreateAccessPointResponse Client::createAccessPointWithOptions(const CreateAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroup()) {
    query["AccessGroup"] = request.getAccessGroup();
  }

  if (!!request.hasAccessPointName()) {
    query["AccessPointName"] = request.getAccessPointName();
  }

  if (!!request.hasEnabledRam()) {
    query["EnabledRam"] = request.getEnabledRam();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasOwnerGroupId()) {
    query["OwnerGroupId"] = request.getOwnerGroupId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPermission()) {
    query["Permission"] = request.getPermission();
  }

  if (!!request.hasPosixGroupId()) {
    query["PosixGroupId"] = request.getPosixGroupId();
  }

  if (!!request.hasPosixSecondaryGroupIds()) {
    query["PosixSecondaryGroupIds"] = request.getPosixSecondaryGroupIds();
  }

  if (!!request.hasPosixUserId()) {
    query["PosixUserId"] = request.getPosixUserId();
  }

  if (!!request.hasRootDirectory()) {
    query["RootDirectory"] = request.getRootDirectory();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswId()) {
    query["VswId"] = request.getVswId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessPointResponse>();
}

/**
 * @summary Creates an access point.
 *
 * @description *   After you call the CreateAccessPoint operation, an access point is not immediately created. Therefore, after you call the CreateAccessPoint operation successfully, call the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the status of the access point. If the status is **Active**, mount the file system. Otherwise, the file system may fail to be mounted.
 * *   Only General-purpose Network File System (NFS) file systems support access points.
 * *   If you want to call the EnabledRam operation to enable a Resource Access Management (RAM) policy, you must configure the corresponding RAM permissions. For more information, see [Manage endpoints](https://help.aliyun.com/document_detail/2545998.html).
 *
 * @param request CreateAccessPointRequest
 * @return CreateAccessPointResponse
 */
CreateAccessPointResponse Client::createAccessPoint(const CreateAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessPointWithOptions(request, runtime);
}

/**
 * @summary Creates a rule for a permission group.
 *
 * @param request CreateAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessRuleResponse
 */
CreateAccessRuleResponse Client::createAccessRuleWithOptions(const CreateAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasIpv6SourceCidrIp()) {
    query["Ipv6SourceCidrIp"] = request.getIpv6SourceCidrIp();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRWAccessType()) {
    query["RWAccessType"] = request.getRWAccessType();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  if (!!request.hasUserAccessType()) {
    query["UserAccessType"] = request.getUserAccessType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessRule"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessRuleResponse>();
}

/**
 * @summary Creates a rule for a permission group.
 *
 * @param request CreateAccessRuleRequest
 * @return CreateAccessRuleResponse
 */
CreateAccessRuleResponse Client::createAccessRule(const CreateAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an automatic snapshot policy.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 * *   You can create a maximum of 100 automatic snapshot policies in each region for an Alibaba Cloud account.
 * *   If an auto snapshot is being created when the scheduled time for a new auto snapshot arrives, the creation of the new snapshot is skipped. This occurs if the file system stores a large volume of data. For example, you have scheduled auto snapshots to be created at 09:00:00, 10:00:00, 11:00:00, and 12:00:00 for a file system. The system starts to create an auto snapshot at 09:00:00 and does not complete the process until 10:20:00. The process takes 80 minutes because the file system has a large volume of data. In this case, the system does not create an auto snapshot at 10:00:00, but creates an auto snapshot at 11:00:00.
 * *   A maximum of 128 auto snapshots can be created for a file system. If the upper limit is reached, the earliest auto snapshot is deleted. This rule does not apply to manual snapshots.
 * *   If you modify the retention period of an automatic snapshot policy, the modification applies only to subsequent snapshots, but not to the existing snapshots.
 * *   If an auto snapshot is being created for a file system, you cannot create a manual snapshot for the file system. You must wait after the auto snapshot is created.
 * *   You can only apply automatic snapshot policies to a file system that is in the Running state.
 * *   All auto snapshots are named in the `auto_yyyyMMdd_X` format, where: `auto` indicates that the snapshot is created based on an automatic snapshot policy. `yyyyMMdd` indicates the date on which the snapshot is created. `y` indicates the year. `M` indicates the month. `d` indicates the day. `X` indicates the ordinal number of the snapshot on the current day. For example, `auto_20201018_1` indicates the first auto snapshot that was created on October 18, 2020.
 * *   After an automatic snapshot policy is created, you can call the ApplyAutoSnapshotPolicy operation to apply the policy to a file system and call the ModifyAutoSnapshotPolicy operation to modify the policy.
 *
 * @param request CreateAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoSnapshotPolicyResponse
 */
CreateAutoSnapshotPolicyResponse Client::createAutoSnapshotPolicyWithOptions(const CreateAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoSnapshotPolicyName()) {
    query["AutoSnapshotPolicyName"] = request.getAutoSnapshotPolicyName();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasRepeatWeekdays()) {
    query["RepeatWeekdays"] = request.getRepeatWeekdays();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.getRetentionDays();
  }

  if (!!request.hasTimePoints()) {
    query["TimePoints"] = request.getTimePoints();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAutoSnapshotPolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoSnapshotPolicyResponse>();
}

/**
 * @summary Creates an automatic snapshot policy.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 * *   You can create a maximum of 100 automatic snapshot policies in each region for an Alibaba Cloud account.
 * *   If an auto snapshot is being created when the scheduled time for a new auto snapshot arrives, the creation of the new snapshot is skipped. This occurs if the file system stores a large volume of data. For example, you have scheduled auto snapshots to be created at 09:00:00, 10:00:00, 11:00:00, and 12:00:00 for a file system. The system starts to create an auto snapshot at 09:00:00 and does not complete the process until 10:20:00. The process takes 80 minutes because the file system has a large volume of data. In this case, the system does not create an auto snapshot at 10:00:00, but creates an auto snapshot at 11:00:00.
 * *   A maximum of 128 auto snapshots can be created for a file system. If the upper limit is reached, the earliest auto snapshot is deleted. This rule does not apply to manual snapshots.
 * *   If you modify the retention period of an automatic snapshot policy, the modification applies only to subsequent snapshots, but not to the existing snapshots.
 * *   If an auto snapshot is being created for a file system, you cannot create a manual snapshot for the file system. You must wait after the auto snapshot is created.
 * *   You can only apply automatic snapshot policies to a file system that is in the Running state.
 * *   All auto snapshots are named in the `auto_yyyyMMdd_X` format, where: `auto` indicates that the snapshot is created based on an automatic snapshot policy. `yyyyMMdd` indicates the date on which the snapshot is created. `y` indicates the year. `M` indicates the month. `d` indicates the day. `X` indicates the ordinal number of the snapshot on the current day. For example, `auto_20201018_1` indicates the first auto snapshot that was created on October 18, 2020.
 * *   After an automatic snapshot policy is created, you can call the ApplyAutoSnapshotPolicy operation to apply the policy to a file system and call the ModifyAutoSnapshotPolicy operation to modify the policy.
 *
 * @param request CreateAutoSnapshotPolicyRequest
 * @return CreateAutoSnapshotPolicyResponse
 */
CreateAutoSnapshotPolicyResponse Client::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a dataflow for a Cloud Parallel File Storage (CPFS) file system and source storage.
 *
 * @description *   Basic operations
 *     *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
 *     *   You can create a data flow only when a CPFS or CPFS for Lingjun file system is in the Running state.
 *     *   A maximum of 10 data flows can be created for a CPFS or CPFS for Lingjun file system.
 *     *   It generally takes 2 to 5 minutes to create a data flow. You can call the DescribeDataFlows operation to check whether the data flow has been created.
 * *   Permission
 *     When you create a data flow, CPFS obtains the following two service-linked roles: `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification`. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
 * *   CPFS usage notes
 *     *   Billing
 *         *   If you create a data flow, you are charged for using the data flow throughput. For more information, see [Billing of CPFS](https://help.aliyun.com/document_detail/111858.html).
 *         *   When you configure the AutoRefresh feature for a data flow, CPFS must use EventBridge to collect object modification events from the source Object Storage Service (OSS) bucket. Event fees are incurred. For more information, see [Billing of EventBridge](https://help.aliyun.com/document_detail/163752.html).
 *     *   Data flow specifications
 *         *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
 *         *   When you create a data flow, the vSwitch IP addresses used by a CPFS mount target are consumed. Make sure that the vSwitch can provide sufficient IP addresses.
 *         *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the data flow whose throughput is changed meet the requirements.
 *     *   Fileset
 *         *   The destination for a data flow is a fileset in the CPFS file system. A fileset is a new directory tree structure (a small file directory) in a CPFS file system. Each fileset independently manages an inode space.
 *         *   When you create a data flow for a CPFS file system, the related fileset must already exist and cannot be nested with other filesets. Only one data flow can be created in a fileset, which corresponds to one source storage.
 *         *   A fileset supports a maximum of one million files. If the number of files imported from an OSS bucket into the fileset exceeds the upper limit, the `no space` error message is returned when you add new files.
 *     **
 *     **Note **If data already exists in the fileset, after you create a data flow, the existing data in the fileset is cleared and replaced with the data synchronized from the OSS bucket.
 *     *   AutoRefresh
 *         *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
 *         *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *         *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. You can configure a maximum of five AutoRefresh directories for a data flow.
 *         *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes `Misconfigured`. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
 *         *   When you add an AutoRefresh configuration to the prefix for a CPFS data flow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
 *         **
 *         **Note **The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
 *     *   Source storage
 *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
 *         *   CPFS data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
 *         *   If data flows for multiple CPFS file systems or multiple data flows for the same CPFS file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS file systems to one OSS bucket.
 *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
 *         **
 *         **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS cannot access the data in the OSS bucket.
 * *   CPFS for Lingjun usage notes
 *     *   Source storage
 *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
 *         *   CPFS for Lingjun data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
 *         *   If data flows for multiple CPFS for Lingjun file systems or multiple data flows for the same CPFS for Lingjun file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS for Lingjun file systems to one OSS bucket.
 *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
 *         *   CPFS for Lingjun V2.6.0 and later allow you to create data flows for OSS buckets across accounts.
 *         *   The account id parameter is required only when you use OSS buckets across accounts.
 *         *   To use OSS buckets across accounts, you must first grant permissions to the related accounts. For more information, see [Cross-account authorization on data flows](https://help.aliyun.com/document_detail/2713462.html).
 *             **
 *             **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS for Lingjun cannot access the data in the OSS bucket.
 *     *   Limits of data flows on file systems
 *         *   You cannot rename a non-empty directory in a path that is associated with a data flow. Otherwise, the Permission Denied error message or an error message indicating that the directory is not empty is returned.
 *         *   Proceed with caution when you use special characters in the names of directories and files. The following characters are supported: letters, digits, exclamation points (!), hyphens (-), underscores (_), periods (.), asterisks (\\*), and parentheses (()).
 *         *   The path can be up to 1,023 characters in length.
 *     *   Limits of data flows on import
 *         *   After a symbolic link is imported to CPFS for Lingjun, the symbolic link is converted into a common data file that contains no symbolic link information.
 *         *   If an OSS bucket has multiple versions, only data of the latest version is used.
 *         *   The name of a file or a subdirectory can be up to 255 bytes in length.
 *     *   Limits of data flows on export
 *         *   After a symbolic link is synchronized to OSS, the file that the symbolic link points to is not synchronized to OSS. In this case, the symbolic link is converted into a common object that contains no data.
 *         *   Hard links can be synchronized to OSS only as common files that contain no link information.
 *         *   After a file of the Socket, Device, or Pipe type is exported to an OSS bucket, the file is converted into a common object that contains no data.
 *         *   The directory path can be up to 1,023 characters in length.
 *
 * @param request CreateDataFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataFlowResponse
 */
CreateDataFlowResponse Client::createDataFlowWithOptions(const CreateDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRefreshInterval()) {
    query["AutoRefreshInterval"] = request.getAutoRefreshInterval();
  }

  if (!!request.hasAutoRefreshPolicy()) {
    query["AutoRefreshPolicy"] = request.getAutoRefreshPolicy();
  }

  if (!!request.hasAutoRefreshs()) {
    query["AutoRefreshs"] = request.getAutoRefreshs();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFileSystemPath()) {
    query["FileSystemPath"] = request.getFileSystemPath();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  if (!!request.hasSourceSecurityType()) {
    query["SourceSecurityType"] = request.getSourceSecurityType();
  }

  if (!!request.hasSourceStorage()) {
    query["SourceStorage"] = request.getSourceStorage();
  }

  if (!!request.hasSourceStoragePath()) {
    query["SourceStoragePath"] = request.getSourceStoragePath();
  }

  if (!!request.hasThroughput()) {
    query["Throughput"] = request.getThroughput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataFlow"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataFlowResponse>();
}

/**
 * @summary Creates a dataflow for a Cloud Parallel File Storage (CPFS) file system and source storage.
 *
 * @description *   Basic operations
 *     *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
 *     *   You can create a data flow only when a CPFS or CPFS for Lingjun file system is in the Running state.
 *     *   A maximum of 10 data flows can be created for a CPFS or CPFS for Lingjun file system.
 *     *   It generally takes 2 to 5 minutes to create a data flow. You can call the DescribeDataFlows operation to check whether the data flow has been created.
 * *   Permission
 *     When you create a data flow, CPFS obtains the following two service-linked roles: `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification`. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
 * *   CPFS usage notes
 *     *   Billing
 *         *   If you create a data flow, you are charged for using the data flow throughput. For more information, see [Billing of CPFS](https://help.aliyun.com/document_detail/111858.html).
 *         *   When you configure the AutoRefresh feature for a data flow, CPFS must use EventBridge to collect object modification events from the source Object Storage Service (OSS) bucket. Event fees are incurred. For more information, see [Billing of EventBridge](https://help.aliyun.com/document_detail/163752.html).
 *     *   Data flow specifications
 *         *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
 *         *   When you create a data flow, the vSwitch IP addresses used by a CPFS mount target are consumed. Make sure that the vSwitch can provide sufficient IP addresses.
 *         *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the data flow whose throughput is changed meet the requirements.
 *     *   Fileset
 *         *   The destination for a data flow is a fileset in the CPFS file system. A fileset is a new directory tree structure (a small file directory) in a CPFS file system. Each fileset independently manages an inode space.
 *         *   When you create a data flow for a CPFS file system, the related fileset must already exist and cannot be nested with other filesets. Only one data flow can be created in a fileset, which corresponds to one source storage.
 *         *   A fileset supports a maximum of one million files. If the number of files imported from an OSS bucket into the fileset exceeds the upper limit, the `no space` error message is returned when you add new files.
 *     **
 *     **Note **If data already exists in the fileset, after you create a data flow, the existing data in the fileset is cleared and replaced with the data synchronized from the OSS bucket.
 *     *   AutoRefresh
 *         *   After AutoRefresh is configured, if the data in the source OSS bucket is updated, the updated metadata is automatically synchronized to the CPFS file system. You can load the updated data when you access files, or run a data flow task to load the updated data.
 *         *   AutoRefresh depends on the object modification events collected by EventBridge from the source OSS bucket. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *         *   The AutoRefresh configuration applies only to the prefix and is specified by the RefreshPath parameter. You can configure a maximum of five AutoRefresh directories for a data flow.
 *         *   AutoRefreshInterval refers to the interval at which CPFS checks whether data is updated in the prefix of the source OSS bucket. If data is updated, CPFS runs an AutoRefresh task. If the frequency of triggering the object modification event in the source OSS bucket exceeds the processing capability of the CPFS data flow, AutoRefresh tasks are accumulated, metadata updates are delayed, and the data flow status becomes `Misconfigured`. To resolve these issues, you can increase the data flow specifications or reduce the frequency of triggering the object modification event.
 *         *   When you add an AutoRefresh configuration to the prefix for a CPFS data flow, an event bus is created at the user side and an event rule is created for the prefix of the source OSS bucket. When an object is modified in the prefix of the source OSS bucket, an OSS event is generated in the EventBridge console. The event is processed by the CPFS data flow.
 *         **
 *         **Note **The event buses and event rules created for CPFS in the EventBridge console contain the `Create for cpfs auto refresh` description. The event buses and event rules cannot be modified or deleted. Otherwise, AutoRefresh cannot work properly.
 *     *   Source storage
 *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
 *         *   CPFS data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
 *         *   If data flows for multiple CPFS file systems or multiple data flows for the same CPFS file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS file systems to one OSS bucket.
 *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
 *         **
 *         **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS cannot access the data in the OSS bucket.
 * *   CPFS for Lingjun usage notes
 *     *   Source storage
 *         *   The source storage is an OSS bucket. SourceStorage for a data flow must be an OSS bucket.
 *         *   CPFS for Lingjun data flows support both encrypted and unencrypted access to OSS. If you select SSL-encrypted access to OSS, make sure that encryption in transit for OSS buckets supports encrypted access.
 *         *   If data flows for multiple CPFS for Lingjun file systems or multiple data flows for the same CPFS for Lingjun file system are stored in the same OSS bucket, you must enable versioning for the OSS bucket to prevent data conflicts caused by data export from multiple CPFS for Lingjun file systems to one OSS bucket.
 *         *   Data flows are not supported for OSS buckets across regions. The OSS bucket must reside in the same region as the CPFS file system.
 *         *   CPFS for Lingjun V2.6.0 and later allow you to create data flows for OSS buckets across accounts.
 *         *   The account id parameter is required only when you use OSS buckets across accounts.
 *         *   To use OSS buckets across accounts, you must first grant permissions to the related accounts. For more information, see [Cross-account authorization on data flows](https://help.aliyun.com/document_detail/2713462.html).
 *             **
 *             **Note **Before you create a data flow, you must configure a tag (key: cpfs-dataflow, value: true) for the source OSS bucket. This way, the created data flow can access the data in the OSS bucket. When a data flow is being used, do not delete or modify the tag. Otherwise, the data flow for CPFS for Lingjun cannot access the data in the OSS bucket.
 *     *   Limits of data flows on file systems
 *         *   You cannot rename a non-empty directory in a path that is associated with a data flow. Otherwise, the Permission Denied error message or an error message indicating that the directory is not empty is returned.
 *         *   Proceed with caution when you use special characters in the names of directories and files. The following characters are supported: letters, digits, exclamation points (!), hyphens (-), underscores (_), periods (.), asterisks (\\*), and parentheses (()).
 *         *   The path can be up to 1,023 characters in length.
 *     *   Limits of data flows on import
 *         *   After a symbolic link is imported to CPFS for Lingjun, the symbolic link is converted into a common data file that contains no symbolic link information.
 *         *   If an OSS bucket has multiple versions, only data of the latest version is used.
 *         *   The name of a file or a subdirectory can be up to 255 bytes in length.
 *     *   Limits of data flows on export
 *         *   After a symbolic link is synchronized to OSS, the file that the symbolic link points to is not synchronized to OSS. In this case, the symbolic link is converted into a common object that contains no data.
 *         *   Hard links can be synchronized to OSS only as common files that contain no link information.
 *         *   After a file of the Socket, Device, or Pipe type is exported to an OSS bucket, the file is converted into a common object that contains no data.
 *         *   The directory path can be up to 1,023 characters in length.
 *
 * @param request CreateDataFlowRequest
 * @return CreateDataFlowResponse
 */
CreateDataFlowResponse Client::createDataFlow(const CreateDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataFlowWithOptions(request, runtime);
}

/**
 * @summary Creates a data streaming subtask.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   You can create subtasks only for a data streaming subtask in the Executing state.
 * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
 * *   When the type of data flow task is streaming, the running status only indicates that a streaming import or export task can be created. It does not indicate that the import or export task is running.
 *
 * @param request CreateDataFlowSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataFlowSubTaskResponse
 */
CreateDataFlowSubTaskResponse Client::createDataFlowSubTaskWithOptions(const CreateDataFlowSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCondition()) {
    query["Condition"] = request.getCondition();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDataFlowTaskId()) {
    query["DataFlowTaskId"] = request.getDataFlowTaskId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDstFilePath()) {
    query["DstFilePath"] = request.getDstFilePath();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasSrcFilePath()) {
    query["SrcFilePath"] = request.getSrcFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataFlowSubTask"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataFlowSubTaskResponse>();
}

/**
 * @summary Creates a data streaming subtask.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   You can create subtasks only for a data streaming subtask in the Executing state.
 * *   Data streaming tasks are executed asynchronously. You can call the DescribeDataFlowSubTasks operation to query the task execution status.
 * *   When the type of data flow task is streaming, the running status only indicates that a streaming import or export task can be created. It does not indicate that the import or export task is running.
 *
 * @param request CreateDataFlowSubTaskRequest
 * @return CreateDataFlowSubTaskResponse
 */
CreateDataFlowSubTaskResponse Client::createDataFlowSubTask(const CreateDataFlowSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataFlowSubTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a dataflow task.
 *
 * @description *   CPFS usage notes
 *     *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
 *     *   You can create a dataflow task only for a dataflow that is in the Running state.
 *     *   When you manually run a dataflow task, the automatic data update task for the dataflow is interrupted and enters the pending state.
 *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS file system does not exceed 1,023 characters.
 * *   CPFS for Lingjun usage notes
 *     *   Only CPFS for Lingjun V2.4.0 and later support dataflow. You can view the version information on the file system details page in the console.
 *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
 *     *   You can create a dataflow task only for a dataflow that is in the Running state.
 *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS for Lingjun file system does not exceed 1,023 characters.
 *     *   CPFS for Lingjun supports two types of tasks: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
 *
 * @param request CreateDataFlowTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataFlowTaskResponse
 */
CreateDataFlowTaskResponse Client::createDataFlowTaskWithOptions(const CreateDataFlowTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConflictPolicy()) {
    query["ConflictPolicy"] = request.getConflictPolicy();
  }

  if (!!request.hasCreateDirIfNotExist()) {
    query["CreateDirIfNotExist"] = request.getCreateDirIfNotExist();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDirectory()) {
    query["Directory"] = request.getDirectory();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDstDirectory()) {
    query["DstDirectory"] = request.getDstDirectory();
  }

  if (!!request.hasEntryList()) {
    query["EntryList"] = request.getEntryList();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasIncludes()) {
    query["Includes"] = request.getIncludes();
  }

  if (!!request.hasSrcTaskId()) {
    query["SrcTaskId"] = request.getSrcTaskId();
  }

  if (!!request.hasTaskAction()) {
    query["TaskAction"] = request.getTaskAction();
  }

  if (!!request.hasTransferFileListPath()) {
    query["TransferFileListPath"] = request.getTransferFileListPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataFlowTask"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataFlowTaskResponse>();
}

/**
 * @summary Creates a dataflow task.
 *
 * @description *   CPFS usage notes
 *     *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
 *     *   You can create a dataflow task only for a dataflow that is in the Running state.
 *     *   When you manually run a dataflow task, the automatic data update task for the dataflow is interrupted and enters the pending state.
 *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS file system does not exceed 1,023 characters.
 * *   CPFS for Lingjun usage notes
 *     *   Only CPFS for Lingjun V2.4.0 and later support dataflow. You can view the version information on the file system details page in the console.
 *     *   Dataflow tasks are executed asynchronously. You can call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status. The task duration depends on the amount of data to be imported and exported. If a large amount of data exists, we recommend that you create multiple tasks.
 *     *   You can create a dataflow task only for a dataflow that is in the Running state.
 *     *   When you create an export task, make sure that the total length of the absolute path of the files to be exported from a CPFS for Lingjun file system does not exceed 1,023 characters.
 *     *   CPFS for Lingjun supports two types of tasks: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
 *
 * @param request CreateDataFlowTaskRequest
 * @return CreateDataFlowTaskResponse
 */
CreateDataFlowTaskResponse Client::createDataFlowTask(const CreateDataFlowTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataFlowTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a directory in a file system.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request CreateDirRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDirResponse
 */
CreateDirResponse Client::createDirWithOptions(const CreateDirRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasOwnerGroupId()) {
    query["OwnerGroupId"] = request.getOwnerGroupId();
  }

  if (!!request.hasOwnerUserId()) {
    query["OwnerUserId"] = request.getOwnerUserId();
  }

  if (!!request.hasPermission()) {
    query["Permission"] = request.getPermission();
  }

  if (!!request.hasRecursion()) {
    query["Recursion"] = request.getRecursion();
  }

  if (!!request.hasRootDirectory()) {
    query["RootDirectory"] = request.getRootDirectory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDir"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDirResponse>();
}

/**
 * @summary Creates a directory in a file system.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request CreateDirRequest
 * @return CreateDirResponse
 */
CreateDirResponse Client::createDir(const CreateDirRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDirWithOptions(request, runtime);
}

/**
 * @summary Creates a directory or file.
 *
 * @description *   This operation is only available to some users.
 * *   This operation supports only General-purpose NAS file systems that use the Server Message Block (SMB) protocol and have Resource Access Management (RAM) enabled.
 *
 * @param request CreateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFileWithOptions(const CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasOwnerAccessInheritable()) {
    query["OwnerAccessInheritable"] = request.getOwnerAccessInheritable();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFile"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileResponse>();
}

/**
 * @summary Creates a directory or file.
 *
 * @description *   This operation is only available to some users.
 * *   This operation supports only General-purpose NAS file systems that use the Server Message Block (SMB) protocol and have Resource Access Management (RAM) enabled.
 *
 * @param request CreateFileRequest
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFile(const CreateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileWithOptions(request, runtime);
}

/**
 * @summary Creates a file system.
 *
 * @description *   Before you call this operation, you must understand the billing and pricing of Apsara File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
 * *   Before you create a file system, you must complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
 *
 * @param request CreateFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileSystemResponse
 */
CreateFileSystemResponse Client::createFileSystemWithOptions(const CreateFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBandwidth()) {
    query["Bandwidth"] = request.getBandwidth();
  }

  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasKmsKeyId()) {
    query["KmsKeyId"] = request.getKmsKeyId();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasRedundancyType()) {
    query["RedundancyType"] = request.getRedundancyType();
  }

  if (!!request.hasRedundancyVSwitchIds()) {
    query["RedundancyVSwitchIds"] = request.getRedundancyVSwitchIds();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileSystem"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileSystemResponse>();
}

/**
 * @summary Creates a file system.
 *
 * @description *   Before you call this operation, you must understand the billing and pricing of Apsara File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
 * *   Before you create a file system, you must complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
 *
 * @param request CreateFileSystemRequest
 * @return CreateFileSystemResponse
 */
CreateFileSystemResponse Client::createFileSystem(const CreateFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileSystemWithOptions(request, runtime);
}

/**
 * @summary Creates a fileset.
 *
 * @description *   CPFS usage notes
 *     *   Only CPFS V2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
 *     *   A maximum of 10 filesets can be created for a CPFS file system.
 *     *   The parent directory must be an existing directory.
 *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
 *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset.
 *     *   A fileset supports a maximum of one million files. If the number of files exceeds the upper limit, the `no space` error message is returned when you add new files.
 * *   CPFS for Lingjun usage notes
 *     *   Only CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
 *     *   A maximum of 500 filesets can be created for a CPFS file system.
 *     *   The fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
 *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
 *     *   If the fileset path is a multi-level path, the parent directory must be an existing directory.
 *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset. A fileset path supports only one quota.
 *     *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
 *     *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
 *     *   When you modify a directory quota, you must set the quota capacity or the number of files to be greater than the capacity or file quantity that has been used.
 *     *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
 *
 * @param request CreateFilesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFilesetResponse
 */
CreateFilesetResponse Client::createFilesetWithOptions(const CreateFilesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFileSystemPath()) {
    query["FileSystemPath"] = request.getFileSystemPath();
  }

  if (!!request.hasQuota()) {
    query["Quota"] = request.getQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileset"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFilesetResponse>();
}

/**
 * @summary Creates a fileset.
 *
 * @description *   CPFS usage notes
 *     *   Only CPFS V2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
 *     *   A maximum of 10 filesets can be created for a CPFS file system.
 *     *   The parent directory must be an existing directory.
 *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
 *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset.
 *     *   A fileset supports a maximum of one million files. If the number of files exceeds the upper limit, the `no space` error message is returned when you add new files.
 * *   CPFS for Lingjun usage notes
 *     *   Only CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
 *     *   A maximum of 500 filesets can be created for a CPFS file system.
 *     *   The fileset path must be a new path and cannot be an existing path. Fileset paths cannot be renamed and cannot be symbolic links.
 *     *   The maximum depth supported by a fileset path is eight levels. The depth of the root directory / is 0 levels. For example, the fileset path /test/aaa/ccc/ has three levels.
 *     *   If the fileset path is a multi-level path, the parent directory must be an existing directory.
 *     *   Nested filesets are not supported. If a fileset is specified as a parent directory, its subdirectory cannot be a fileset. A fileset path supports only one quota.
 *     *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
 *     *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
 *     *   When you modify a directory quota, you must set the quota capacity or the number of files to be greater than the capacity or file quantity that has been used.
 *     *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
 *
 * @param request CreateFilesetRequest
 * @return CreateFilesetResponse
 */
CreateFilesetResponse Client::createFileset(const CreateFilesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFilesetWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateLDAPConfig is deprecated
 *
 * @summary Creates LDAP configurations.
 *
 * @param request CreateLDAPConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLDAPConfigResponse
 */
CreateLDAPConfigResponse Client::createLDAPConfigWithOptions(const CreateLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindDN()) {
    query["BindDN"] = request.getBindDN();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasSearchBase()) {
    query["SearchBase"] = request.getSearchBase();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLDAPConfig"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLDAPConfigResponse>();
}

/**
 * @deprecated OpenAPI CreateLDAPConfig is deprecated
 *
 * @summary Creates LDAP configurations.
 *
 * @param request CreateLDAPConfigRequest
 * @return CreateLDAPConfigResponse
 */
CreateLDAPConfigResponse Client::createLDAPConfig(const CreateLDAPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLDAPConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a lifecycle policy.
 *
 * @description *   You can create lifecycle policies only for General-purpose NAS file systems.
 * *   You can create up to 20 lifecycle policies in each region within an Alibaba Cloud account.
 *
 * @param request CreateLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLifecyclePolicyResponse
 */
CreateLifecyclePolicyResponse Client::createLifecyclePolicyWithOptions(const CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyName()) {
    query["LifecyclePolicyName"] = request.getLifecyclePolicyName();
  }

  if (!!request.hasLifecycleRuleName()) {
    query["LifecycleRuleName"] = request.getLifecycleRuleName();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasPaths()) {
    query["Paths"] = request.getPaths();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLifecyclePolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLifecyclePolicyResponse>();
}

/**
 * @summary Creates a lifecycle policy.
 *
 * @description *   You can create lifecycle policies only for General-purpose NAS file systems.
 * *   You can create up to 20 lifecycle policies in each region within an Alibaba Cloud account.
 *
 * @param request CreateLifecyclePolicyRequest
 * @return CreateLifecyclePolicyResponse
 */
CreateLifecyclePolicyResponse Client::createLifecyclePolicy(const CreateLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a data retrieval task.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can run a maximum of 20 data retrieval tasks in each region within an Alibaba Cloud account.
 *
 * @param request CreateLifecycleRetrieveJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLifecycleRetrieveJobResponse
 */
CreateLifecycleRetrieveJobResponse Client::createLifecycleRetrieveJobWithOptions(const CreateLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasPaths()) {
    query["Paths"] = request.getPaths();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLifecycleRetrieveJob"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLifecycleRetrieveJobResponse>();
}

/**
 * @summary Creates a data retrieval task.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can run a maximum of 20 data retrieval tasks in each region within an Alibaba Cloud account.
 *
 * @param request CreateLifecycleRetrieveJobRequest
 * @return CreateLifecycleRetrieveJobResponse
 */
CreateLifecycleRetrieveJobResponse Client::createLifecycleRetrieveJob(const CreateLifecycleRetrieveJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLifecycleRetrieveJobWithOptions(request, runtime);
}

/**
 * @summary Dumps the logs of a General-purpose NAS file system to Simple Log Service.
 *
 * @param request CreateLogAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLogAnalysisResponse
 */
CreateLogAnalysisResponse Client::createLogAnalysisWithOptions(const CreateLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLogAnalysis"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLogAnalysisResponse>();
}

/**
 * @summary Dumps the logs of a General-purpose NAS file system to Simple Log Service.
 *
 * @param request CreateLogAnalysisRequest
 * @return CreateLogAnalysisResponse
 */
CreateLogAnalysisResponse Client::createLogAnalysis(const CreateLogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLogAnalysisWithOptions(request, runtime);
}

/**
 * @summary Creates a mount target.
 *
 * @description *   After you call the CreateMountTarget operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the **Active** state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
 * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
 *
 * @param request CreateMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMountTargetResponse
 */
CreateMountTargetResponse Client::createMountTargetWithOptions(const CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasEnableIpv6()) {
    query["EnableIpv6"] = request.getEnableIpv6();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMountTargetResponse>();
}

/**
 * @summary Creates a mount target.
 *
 * @description *   After you call the CreateMountTarget operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the **Active** state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
 * *   When you call this operation, a service-linked role of NAS is automatically created. For more information, see [Manage the service-linked roles of NAS](https://help.aliyun.com/document_detail/208530.html).
 *
 * @param request CreateMountTargetRequest
 * @return CreateMountTargetResponse
 */
CreateMountTargetResponse Client::createMountTarget(const CreateMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMountTargetWithOptions(request, runtime);
}

/**
 * @summary Creates an export directory for a protocol service.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Prerequisites
 *     A protocol service is created.
 * *   Others
 *     *   The virtual private cloud (VPC) CIDR block of the export directory for the protocol service cannot overlap with the VPC CIDR block of the file system.
 *     *   The VPC CIDR blocks of multiple export directories of a protocol service cannot overlap.
 *     *   You can create a maximum of 10 export directories for a protocol service.
 *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
 *
 * @param request CreateProtocolMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProtocolMountTargetResponse
 */
CreateProtocolMountTargetResponse Client::createProtocolMountTargetWithOptions(const CreateProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasProtocolServiceId()) {
    query["ProtocolServiceId"] = request.getProtocolServiceId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVSwitchIds()) {
    query["VSwitchIds"] = request.getVSwitchIds();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProtocolMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProtocolMountTargetResponse>();
}

/**
 * @summary Creates an export directory for a protocol service.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Prerequisites
 *     A protocol service is created.
 * *   Others
 *     *   The virtual private cloud (VPC) CIDR block of the export directory for the protocol service cannot overlap with the VPC CIDR block of the file system.
 *     *   The VPC CIDR blocks of multiple export directories of a protocol service cannot overlap.
 *     *   You can create a maximum of 10 export directories for a protocol service.
 *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
 *
 * @param request CreateProtocolMountTargetRequest
 * @return CreateProtocolMountTargetResponse
 */
CreateProtocolMountTargetResponse Client::createProtocolMountTarget(const CreateProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation takes about 5 to 10 minutes.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.3.0 and later support protocol services. You can query the version information of the file system by calling the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation.
 * *   Protocol service types
 *     Protocol services are classified into general-purpose protocol services and cache protocol services. Different from general-purpose protocol services, cache protocol services can cache hot data. If data exists in the cache, the bandwidth of the cache protocol service may exceed the bandwidth of the CPFS file system, reaching the maximum bandwidth specified for the protocol service.
 *     *   General-purpose protocol services: provide NFS access and [directory-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS file systems. You do not need to configure a POSIX client to manage clusters. The compliance package check feature is free of charge.
 *     *   Cache protocol services: provide the server memory cache based on the least recently used (LRU) policy. When data is cached in the memory, CPFS provides higher internal bandwidth. Cache protocol services are divided into Cache L1 and Cache L2 specifications. The differences are the internal bandwidth size and memory cache size.
 *     **
 *     **Note** You are charged for using cache protocol services, which are in invitational preview. For more information about the billing method of cache protocol services, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, you can join the DingTalk group (group number: 31045006299).
 * *   Protocol Type
 *     Only NFSv3 is supported.
 * *   Others
 *     *   Only one protocol service can be created for a CPFS file system.
 *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
 *
 * @param request CreateProtocolServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProtocolServiceResponse
 */
CreateProtocolServiceResponse Client::createProtocolServiceWithOptions(const CreateProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasProtocolSpec()) {
    query["ProtocolSpec"] = request.getProtocolSpec();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasThroughput()) {
    query["Throughput"] = request.getThroughput();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProtocolService"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProtocolServiceResponse>();
}

/**
 * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation takes about 5 to 10 minutes.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.3.0 and later support protocol services. You can query the version information of the file system by calling the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation.
 * *   Protocol service types
 *     Protocol services are classified into general-purpose protocol services and cache protocol services. Different from general-purpose protocol services, cache protocol services can cache hot data. If data exists in the cache, the bandwidth of the cache protocol service may exceed the bandwidth of the CPFS file system, reaching the maximum bandwidth specified for the protocol service.
 *     *   General-purpose protocol services: provide NFS access and [directory-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS file systems. You do not need to configure a POSIX client to manage clusters. The compliance package check feature is free of charge.
 *     *   Cache protocol services: provide the server memory cache based on the least recently used (LRU) policy. When data is cached in the memory, CPFS provides higher internal bandwidth. Cache protocol services are divided into Cache L1 and Cache L2 specifications. The differences are the internal bandwidth size and memory cache size.
 *     **
 *     **Note** You are charged for using cache protocol services, which are in invitational preview. For more information about the billing method of cache protocol services, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, you can join the DingTalk group (group number: 31045006299).
 * *   Protocol Type
 *     Only NFSv3 is supported.
 * *   Others
 *     *   Only one protocol service can be created for a CPFS file system.
 *     *   A protocol service can use a maximum of 32 IP addresses that are allocated by a specified vSwitch. Make sure that the vSwitch can provide sufficient IP addresses.
 *
 * @param request CreateProtocolServiceRequest
 * @return CreateProtocolServiceResponse
 */
CreateProtocolServiceResponse Client::createProtocolService(const CreateProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Creates a job to permanently delete a file or directory from the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   If you permanently delete a directory, the files in the directory are recursively cleared.
 * *   You can run only one job at a time for a single file system to permanently delete the files from the file system. You cannot create a restoration or deletion job when a file or directory is being deleted.
 *
 * @param request CreateRecycleBinDeleteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecycleBinDeleteJobResponse
 */
CreateRecycleBinDeleteJobResponse Client::createRecycleBinDeleteJobWithOptions(const CreateRecycleBinDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecycleBinDeleteJob"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecycleBinDeleteJobResponse>();
}

/**
 * @summary Creates a job to permanently delete a file or directory from the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   If you permanently delete a directory, the files in the directory are recursively cleared.
 * *   You can run only one job at a time for a single file system to permanently delete the files from the file system. You cannot create a restoration or deletion job when a file or directory is being deleted.
 *
 * @param request CreateRecycleBinDeleteJobRequest
 * @return CreateRecycleBinDeleteJobResponse
 */
CreateRecycleBinDeleteJobResponse Client::createRecycleBinDeleteJob(const CreateRecycleBinDeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecycleBinDeleteJobWithOptions(request, runtime);
}

/**
 * @summary Restores a file or directory from the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can run only one job at a time for a single file system to restore files to or clear files from the file system. You cannot create a restore or cleanup job when files are being restored from the recycle bin.
 * *   You can restore only one file or directory in a single restore job. If you restore a specified directory, all files in the directory are recursively restored.
 * *   After files are restored, the data of the files is defragmented. When the data is being defragmented, the read performance is slightly degraded.
 *
 * @param request CreateRecycleBinRestoreJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecycleBinRestoreJobResponse
 */
CreateRecycleBinRestoreJobResponse Client::createRecycleBinRestoreJobWithOptions(const CreateRecycleBinRestoreJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecycleBinRestoreJob"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecycleBinRestoreJobResponse>();
}

/**
 * @summary Restores a file or directory from the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can run only one job at a time for a single file system to restore files to or clear files from the file system. You cannot create a restore or cleanup job when files are being restored from the recycle bin.
 * *   You can restore only one file or directory in a single restore job. If you restore a specified directory, all files in the directory are recursively restored.
 * *   After files are restored, the data of the files is defragmented. When the data is being defragmented, the read performance is slightly degraded.
 *
 * @param request CreateRecycleBinRestoreJobRequest
 * @return CreateRecycleBinRestoreJobResponse
 */
CreateRecycleBinRestoreJobResponse Client::createRecycleBinRestoreJob(const CreateRecycleBinRestoreJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecycleBinRestoreJobWithOptions(request, runtime);
}

/**
 * @summary Creates a snapshot.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 * *   You can create a maximum of 128 snapshots for a file system.
 * *   The compute node on which a file system is mounted must function as expected. Otherwise, you cannot create a snapshot for the file system.
 * *   You can create only one snapshot for a file system at a time.
 * *   If the file system expires when a snapshot is being created, the file system is released and the snapshot is deleted.
 * *   When you create a snapshot for a file system, the I/O performance of the file system may be degraded for a short period of time. We recommend that you create snapshots during off-peak hours.
 * *   A snapshot is a backup of a file system at a specific point in time. After you create a snapshot, incremental data that is generated in the file system will not be synchronized to the snapshot.
 * *   Manually created snapshots will not be deleted until 15 days after the service is suspended due to overdue payments. We recommend that you delete unnecessary snapshots at regular intervals to prevent extra fees incurred by the snapshots.
 *
 * @param request CreateSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshotWithOptions(const CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.getRetentionDays();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSnapshot"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSnapshotResponse>();
}

/**
 * @summary Creates a snapshot.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 * *   You can create a maximum of 128 snapshots for a file system.
 * *   The compute node on which a file system is mounted must function as expected. Otherwise, you cannot create a snapshot for the file system.
 * *   You can create only one snapshot for a file system at a time.
 * *   If the file system expires when a snapshot is being created, the file system is released and the snapshot is deleted.
 * *   When you create a snapshot for a file system, the I/O performance of the file system may be degraded for a short period of time. We recommend that you create snapshots during off-peak hours.
 * *   A snapshot is a backup of a file system at a specific point in time. After you create a snapshot, incremental data that is generated in the file system will not be synchronized to the snapshot.
 * *   Manually created snapshots will not be deleted until 15 days after the service is suspended due to overdue payments. We recommend that you delete unnecessary snapshots at regular intervals to prevent extra fees incurred by the snapshots.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnapshotWithOptions(request, runtime);
}

/**
 * @summary Deletes a permission group.
 *
 * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
 *
 * @param request DeleteAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessGroupResponse
 */
DeleteAccessGroupResponse Client::deleteAccessGroupWithOptions(const DeleteAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessGroup"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessGroupResponse>();
}

/**
 * @summary Deletes a permission group.
 *
 * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
 *
 * @param request DeleteAccessGroupRequest
 * @return DeleteAccessGroupResponse
 */
DeleteAccessGroupResponse Client::deleteAccessGroup(const DeleteAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an access point.
 *
 * @description *   Only General-purpose Network File System (NFS) file systems support access points.
 * *   After an access point is deleted, all I/O operations that are being performed on the directory accessed over the access point are interrupted immediately. Exercise caution when you perform this operation.
 *
 * @param request DeleteAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessPointResponse
 */
DeleteAccessPointResponse Client::deleteAccessPointWithOptions(const DeleteAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessPointResponse>();
}

/**
 * @summary Deletes an access point.
 *
 * @description *   Only General-purpose Network File System (NFS) file systems support access points.
 * *   After an access point is deleted, all I/O operations that are being performed on the directory accessed over the access point are interrupted immediately. Exercise caution when you perform this operation.
 *
 * @param request DeleteAccessPointRequest
 * @return DeleteAccessPointResponse
 */
DeleteAccessPointResponse Client::deleteAccessPoint(const DeleteAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessPointWithOptions(request, runtime);
}

/**
 * @summary Deletes a rule from a permission group.
 *
 * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
 *
 * @param request DeleteAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessRuleResponse
 */
DeleteAccessRuleResponse Client::deleteAccessRuleWithOptions(const DeleteAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasAccessRuleId()) {
    query["AccessRuleId"] = request.getAccessRuleId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessRule"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessRuleResponse>();
}

/**
 * @summary Deletes a rule from a permission group.
 *
 * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
 *
 * @param request DeleteAccessRuleRequest
 * @return DeleteAccessRuleResponse
 */
DeleteAccessRuleResponse Client::deleteAccessRule(const DeleteAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes an automatic snapshot policy.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 * *   If you delete an automatic snapshot policy that is applied to a file system, snapshots for the file system are no longer created based on the policy.
 *
 * @param request DeleteAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoSnapshotPolicyResponse
 */
DeleteAutoSnapshotPolicyResponse Client::deleteAutoSnapshotPolicyWithOptions(const DeleteAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoSnapshotPolicyId()) {
    query["AutoSnapshotPolicyId"] = request.getAutoSnapshotPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoSnapshotPolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoSnapshotPolicyResponse>();
}

/**
 * @summary Deletes an automatic snapshot policy.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 * *   If you delete an automatic snapshot policy that is applied to a file system, snapshots for the file system are no longer created based on the policy.
 *
 * @param request DeleteAutoSnapshotPolicyRequest
 * @return DeleteAutoSnapshotPolicyResponse
 */
DeleteAutoSnapshotPolicyResponse Client::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataflow.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can delete the data flows that are only in the `Running` or `Stopped` state.
 * *   After a data flow is deleted, the resources related to the data flow are released and cannot be restored. You must create a data flow again if required.
 *
 * @param request DeleteDataFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataFlowResponse
 */
DeleteDataFlowResponse Client::deleteDataFlowWithOptions(const DeleteDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataFlow"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataFlowResponse>();
}

/**
 * @summary Deletes a dataflow.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can delete the data flows that are only in the `Running` or `Stopped` state.
 * *   After a data flow is deleted, the resources related to the data flow are released and cannot be restored. You must create a data flow again if required.
 *
 * @param request DeleteDataFlowRequest
 * @return DeleteDataFlowResponse
 */
DeleteDataFlowResponse Client::deleteDataFlow(const DeleteDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataFlowWithOptions(request, runtime);
}

/**
 * @summary Deletes a file system.
 *
 * @description *   Before you delete a file system, you must delete all mount targets of the file system.
 * *   Before you delete a file system, you must make sure that no lifecycle policy is created for the file system.
 * *   After a file system is deleted, the data on the file system cannot be restored. Proceed with caution.
 *
 * @param request DeleteFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileSystemResponse
 */
DeleteFileSystemResponse Client::deleteFileSystemWithOptions(const DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFileSystem"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileSystemResponse>();
}

/**
 * @summary Deletes a file system.
 *
 * @description *   Before you delete a file system, you must delete all mount targets of the file system.
 * *   Before you delete a file system, you must make sure that no lifecycle policy is created for the file system.
 * *   After a file system is deleted, the data on the file system cannot be restored. Proceed with caution.
 *
 * @param request DeleteFileSystemRequest
 * @return DeleteFileSystemResponse
 */
DeleteFileSystemResponse Client::deleteFileSystem(const DeleteFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileSystemWithOptions(request, runtime);
}

/**
 * @summary Deletes a fileset.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. After you delete a fileset, all data in the fileset is deleted and cannot be restored. Proceed with caution.
 * *   If deletion protection is enabled for the fileset, you must disable deletion protection before you delete the fileset.
 * *   After you delete a fileset of CPFS for Lingjun, the storage space is not immediately released and will be recycled within 24 hours. If you want to release storage space immediately, you can clear the data in the fileset and then delete the fileset. Deleted data cannot be restored. Proceed with caution.
 *
 * @param request DeleteFilesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFilesetResponse
 */
DeleteFilesetResponse Client::deleteFilesetWithOptions(const DeleteFilesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFileset"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFilesetResponse>();
}

/**
 * @summary Deletes a fileset.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. After you delete a fileset, all data in the fileset is deleted and cannot be restored. Proceed with caution.
 * *   If deletion protection is enabled for the fileset, you must disable deletion protection before you delete the fileset.
 * *   After you delete a fileset of CPFS for Lingjun, the storage space is not immediately released and will be recycled within 24 hours. If you want to release storage space immediately, you can clear the data in the fileset and then delete the fileset. Deleted data cannot be restored. Proceed with caution.
 *
 * @param request DeleteFilesetRequest
 * @return DeleteFilesetResponse
 */
DeleteFilesetResponse Client::deleteFileset(const DeleteFilesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFilesetWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteLDAPConfig is deprecated
 *
 * @summary {"summary1":""}
 *
 * @param request DeleteLDAPConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLDAPConfigResponse
 */
DeleteLDAPConfigResponse Client::deleteLDAPConfigWithOptions(const DeleteLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLDAPConfig"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLDAPConfigResponse>();
}

/**
 * @deprecated OpenAPI DeleteLDAPConfig is deprecated
 *
 * @summary {"summary1":""}
 *
 * @param request DeleteLDAPConfigRequest
 * @return DeleteLDAPConfigResponse
 */
DeleteLDAPConfigResponse Client::deleteLDAPConfig(const DeleteLDAPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLDAPConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a lifecycle policy.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request DeleteLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLifecyclePolicyResponse
 */
DeleteLifecyclePolicyResponse Client::deleteLifecyclePolicyWithOptions(const DeleteLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyName()) {
    query["LifecyclePolicyName"] = request.getLifecyclePolicyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLifecyclePolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLifecyclePolicyResponse>();
}

/**
 * @summary Deletes a lifecycle policy.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request DeleteLifecyclePolicyRequest
 * @return DeleteLifecyclePolicyResponse
 */
DeleteLifecyclePolicyResponse Client::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Disables log dumping for a General-purpose NAS file system.
 *
 * @param request DeleteLogAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLogAnalysisResponse
 */
DeleteLogAnalysisResponse Client::deleteLogAnalysisWithOptions(const DeleteLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLogAnalysis"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLogAnalysisResponse>();
}

/**
 * @summary Disables log dumping for a General-purpose NAS file system.
 *
 * @param request DeleteLogAnalysisRequest
 * @return DeleteLogAnalysisResponse
 */
DeleteLogAnalysisResponse Client::deleteLogAnalysis(const DeleteLogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogAnalysisWithOptions(request, runtime);
}

/**
 * @summary Deletes a mount target.
 *
 * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
 *
 * @param request DeleteMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMountTargetResponse
 */
DeleteMountTargetResponse Client::deleteMountTargetWithOptions(const DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetDomain()) {
    query["MountTargetDomain"] = request.getMountTargetDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMountTargetResponse>();
}

/**
 * @summary Deletes a mount target.
 *
 * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
 *
 * @param request DeleteMountTargetRequest
 * @return DeleteMountTargetResponse
 */
DeleteMountTargetResponse Client::deleteMountTarget(const DeleteMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMountTargetWithOptions(request, runtime);
}

/**
 * @summary Deletes an export directory of a protocol service.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
 *
 * @param request DeleteProtocolMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProtocolMountTargetResponse
 */
DeleteProtocolMountTargetResponse Client::deleteProtocolMountTargetWithOptions(const DeleteProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasExportId()) {
    query["ExportId"] = request.getExportId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasProtocolServiceId()) {
    query["ProtocolServiceId"] = request.getProtocolServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProtocolMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProtocolMountTargetResponse>();
}

/**
 * @summary Deletes an export directory of a protocol service.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
 *
 * @param request DeleteProtocolMountTargetRequest
 * @return DeleteProtocolMountTargetResponse
 */
DeleteProtocolMountTargetResponse Client::deleteProtocolMountTarget(const DeleteProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Deletes a protocol service of a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   When you delete a protocol service, the export directories in the protocol service are also deleted.
 *
 * @param request DeleteProtocolServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProtocolServiceResponse
 */
DeleteProtocolServiceResponse Client::deleteProtocolServiceWithOptions(const DeleteProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasProtocolServiceId()) {
    query["ProtocolServiceId"] = request.getProtocolServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProtocolService"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProtocolServiceResponse>();
}

/**
 * @summary Deletes a protocol service of a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   When you delete a protocol service, the export directories in the protocol service are also deleted.
 *
 * @param request DeleteProtocolServiceRequest
 * @return DeleteProtocolServiceResponse
 */
DeleteProtocolServiceResponse Client::deleteProtocolService(const DeleteProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a snapshot or cancels a snapshot that is being created.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request DeleteSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshotWithOptions(const DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSnapshot"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSnapshotResponse>();
}

/**
 * @summary Deletes a snapshot or cancels a snapshot that is being created.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotWithOptions(request, runtime);
}

/**
 * @summary Queries permission groups.
 *
 * @param request DescribeAccessGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessGroupsResponse
 */
DescribeAccessGroupsResponse Client::describeAccessGroupsWithOptions(const DescribeAccessGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUseUTCDateTime()) {
    query["UseUTCDateTime"] = request.getUseUTCDateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessGroups"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessGroupsResponse>();
}

/**
 * @summary Queries permission groups.
 *
 * @param request DescribeAccessGroupsRequest
 * @return DescribeAccessGroupsResponse
 */
DescribeAccessGroupsResponse Client::describeAccessGroups(const DescribeAccessGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an access point.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request DescribeAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessPointResponse
 */
DescribeAccessPointResponse Client::describeAccessPointWithOptions(const DescribeAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessPointResponse>();
}

/**
 * @summary Queries the details of an access point.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request DescribeAccessPointRequest
 * @return DescribeAccessPointResponse
 */
DescribeAccessPointResponse Client::describeAccessPoint(const DescribeAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessPointWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an access point.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request DescribeAccessPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessPointsResponse
 */
DescribeAccessPointsResponse Client::describeAccessPointsWithOptions(const DescribeAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroup()) {
    query["AccessGroup"] = request.getAccessGroup();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessPoints"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessPointsResponse>();
}

/**
 * @summary Queries the information about an access point.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request DescribeAccessPointsRequest
 * @return DescribeAccessPointsResponse
 */
DescribeAccessPointsResponse Client::describeAccessPoints(const DescribeAccessPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessPointsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about rules in a permission group.
 *
 * @param request DescribeAccessRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccessRulesResponse
 */
DescribeAccessRulesResponse Client::describeAccessRulesWithOptions(const DescribeAccessRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasAccessRuleId()) {
    query["AccessRuleId"] = request.getAccessRuleId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccessRules"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccessRulesResponse>();
}

/**
 * @summary Queries the information about rules in a permission group.
 *
 * @param request DescribeAccessRulesRequest
 * @return DescribeAccessRulesResponse
 */
DescribeAccessRulesResponse Client::describeAccessRules(const DescribeAccessRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessRulesWithOptions(request, runtime);
}

/**
 * @summary Queries automatic snapshot policies.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request DescribeAutoSnapshotPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoSnapshotPoliciesResponse
 */
DescribeAutoSnapshotPoliciesResponse Client::describeAutoSnapshotPoliciesWithOptions(const DescribeAutoSnapshotPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoSnapshotPolicyId()) {
    query["AutoSnapshotPolicyId"] = request.getAutoSnapshotPolicyId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoSnapshotPolicies"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoSnapshotPoliciesResponse>();
}

/**
 * @summary Queries automatic snapshot policies.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request DescribeAutoSnapshotPoliciesRequest
 * @return DescribeAutoSnapshotPoliciesResponse
 */
DescribeAutoSnapshotPoliciesResponse Client::describeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoSnapshotPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries automatic snapshot tasks.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 *
 * @param request DescribeAutoSnapshotTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoSnapshotTasksResponse
 */
DescribeAutoSnapshotTasksResponse Client::describeAutoSnapshotTasksWithOptions(const DescribeAutoSnapshotTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoSnapshotPolicyIds()) {
    query["AutoSnapshotPolicyIds"] = request.getAutoSnapshotPolicyIds();
  }

  if (!!request.hasFileSystemIds()) {
    query["FileSystemIds"] = request.getFileSystemIds();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoSnapshotTasks"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoSnapshotTasksResponse>();
}

/**
 * @summary Queries automatic snapshot tasks.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support the snapshot feature.
 *
 * @param request DescribeAutoSnapshotTasksRequest
 * @return DescribeAutoSnapshotTasksResponse
 */
DescribeAutoSnapshotTasksResponse Client::describeAutoSnapshotTasks(const DescribeAutoSnapshotTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoSnapshotTasksWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeBlackListClients is deprecated
 *
 * @summary Queries the status of clients in the blacklist of a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description The API operation is available only for CPFS file systems.
 *
 * @param request DescribeBlackListClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBlackListClientsResponse
 */
DescribeBlackListClientsResponse Client::describeBlackListClientsWithOptions(const DescribeBlackListClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIP()) {
    query["ClientIP"] = request.getClientIP();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBlackListClients"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBlackListClientsResponse>();
}

/**
 * @deprecated OpenAPI DescribeBlackListClients is deprecated
 *
 * @summary Queries the status of clients in the blacklist of a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description The API operation is available only for CPFS file systems.
 *
 * @param request DescribeBlackListClientsRequest
 * @return DescribeBlackListClientsResponse
 */
DescribeBlackListClientsResponse Client::describeBlackListClients(const DescribeBlackListClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlackListClientsWithOptions(request, runtime);
}

/**
 * @summary Queries data flow subtasks in batches.
 *
 * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 *
 * @param request DescribeDataFlowSubTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataFlowSubTasksResponse
 */
DescribeDataFlowSubTasksResponse Client::describeDataFlowSubTasksWithOptions(const DescribeDataFlowSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataFlowSubTasks"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataFlowSubTasksResponse>();
}

/**
 * @summary Queries data flow subtasks in batches.
 *
 * @description Only Cloud Parallel File Storage (CPFS) for LINGJUN V2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 *
 * @param request DescribeDataFlowSubTasksRequest
 * @return DescribeDataFlowSubTasksResponse
 */
DescribeDataFlowSubTasksResponse Client::describeDataFlowSubTasks(const DescribeDataFlowSubTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowSubTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the details of dataflow tasks.
 *
 * @description Only CPFS V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
 *
 * @param request DescribeDataFlowTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataFlowTasksResponse
 */
DescribeDataFlowTasksResponse Client::describeDataFlowTasksWithOptions(const DescribeDataFlowTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasWithReports()) {
    query["WithReports"] = request.getWithReports();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataFlowTasks"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataFlowTasksResponse>();
}

/**
 * @summary Queries the details of dataflow tasks.
 *
 * @description Only CPFS V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support this operation. You can view the version information on the file system details page in the console.
 *
 * @param request DescribeDataFlowTasksRequest
 * @return DescribeDataFlowTasksResponse
 */
DescribeDataFlowTasksResponse Client::describeDataFlowTasks(const DescribeDataFlowTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the dataflows of a CPFS file system.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * *   In Filters, FsetIds, DataFlowlds, SourceStorage, ThroughputList, and Status support exact match only. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
 * *   Combined query is supported.
 *
 * @param request DescribeDataFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataFlowsResponse
 */
DescribeDataFlowsResponse Client::describeDataFlowsWithOptions(const DescribeDataFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataFlows"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataFlowsResponse>();
}

/**
 * @summary Queries the dataflows of a CPFS file system.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * *   In Filters, FsetIds, DataFlowlds, SourceStorage, ThroughputList, and Status support exact match only. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
 * *   Combined query is supported.
 *
 * @param request DescribeDataFlowsRequest
 * @return DescribeDataFlowsResponse
 */
DescribeDataFlowsResponse Client::describeDataFlows(const DescribeDataFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowsWithOptions(request, runtime);
}

/**
 * @summary Queries the directory quotas of a file system.
 *
 * @description Only General-purpose NAS file systems support the directory quota feature.
 *
 * @param request DescribeDirQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDirQuotasResponse
 */
DescribeDirQuotasResponse Client::describeDirQuotasWithOptions(const DescribeDirQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDirQuotas"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDirQuotasResponse>();
}

/**
 * @summary Queries the directory quotas of a file system.
 *
 * @description Only General-purpose NAS file systems support the directory quota feature.
 *
 * @param request DescribeDirQuotasRequest
 * @return DescribeDirQuotasResponse
 */
DescribeDirQuotasResponse Client::describeDirQuotas(const DescribeDirQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDirQuotasWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeFileSystemStatistics is deprecated, please use NAS::2017-06-26::DescribeResourceStatistics instead.
 *
 * @summary Queries the statistics of file systems that are owned by the current account.
 *
 * @param request DescribeFileSystemStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileSystemStatisticsResponse
 */
DescribeFileSystemStatisticsResponse Client::describeFileSystemStatisticsWithOptions(const DescribeFileSystemStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFileSystemStatistics"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileSystemStatisticsResponse>();
}

/**
 * @deprecated OpenAPI DescribeFileSystemStatistics is deprecated, please use NAS::2017-06-26::DescribeResourceStatistics instead.
 *
 * @summary Queries the statistics of file systems that are owned by the current account.
 *
 * @param request DescribeFileSystemStatisticsRequest
 * @return DescribeFileSystemStatisticsResponse
 */
DescribeFileSystemStatisticsResponse Client::describeFileSystemStatistics(const DescribeFileSystemStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileSystemStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries file systems.
 *
 * @param request DescribeFileSystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFileSystemsResponse
 */
DescribeFileSystemsResponse Client::describeFileSystemsWithOptions(const DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFileSystems"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFileSystemsResponse>();
}

/**
 * @summary Queries file systems.
 *
 * @param request DescribeFileSystemsRequest
 * @return DescribeFileSystemsResponse
 */
DescribeFileSystemsResponse Client::describeFileSystems(const DescribeFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileSystemsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about created filesets.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   In Filters, FsetIds supports exact match only. FileSystemPath and Description support fuzzy match.
 * *   Combined query is supported.
 *
 * @param request DescribeFilesetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFilesetsResponse
 */
DescribeFilesetsResponse Client::describeFilesetsWithOptions(const DescribeFilesetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.getOrderByField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFilesets"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFilesetsResponse>();
}

/**
 * @summary Queries the information about created filesets.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation. You can view the version information on the file system details page in the console.
 * *   In Filters, FsetIds supports exact match only. FileSystemPath and Description support fuzzy match.
 * *   Combined query is supported.
 *
 * @param request DescribeFilesetsRequest
 * @return DescribeFilesetsResponse
 */
DescribeFilesetsResponse Client::describeFilesets(const DescribeFilesetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFilesetsWithOptions(request, runtime);
}

/**
 * @summary Queries information about virtual storage channels associated with a file system.
 *
 * @description *   Only CPFS for Lingjun supports this operation.
 * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
 *
 * @param request DescribeFilesystemsVscAttachInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFilesystemsVscAttachInfoResponse
 */
DescribeFilesystemsVscAttachInfoResponse Client::describeFilesystemsVscAttachInfoWithOptions(const DescribeFilesystemsVscAttachInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFilesystemsVscAttachInfo"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFilesystemsVscAttachInfoResponse>();
}

/**
 * @summary Queries information about virtual storage channels associated with a file system.
 *
 * @description *   Only CPFS for Lingjun supports this operation.
 * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
 *
 * @param request DescribeFilesystemsVscAttachInfoRequest
 * @return DescribeFilesystemsVscAttachInfoResponse
 */
DescribeFilesystemsVscAttachInfoResponse Client::describeFilesystemsVscAttachInfo(const DescribeFilesystemsVscAttachInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFilesystemsVscAttachInfoWithOptions(request, runtime);
}

/**
 * @summary Queries lifecycle policies.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request DescribeLifecyclePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLifecyclePoliciesResponse
 */
DescribeLifecyclePoliciesResponse Client::describeLifecyclePoliciesWithOptions(const DescribeLifecyclePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLifecyclePolicies"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLifecyclePoliciesResponse>();
}

/**
 * @summary Queries lifecycle policies.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request DescribeLifecyclePoliciesRequest
 * @return DescribeLifecyclePoliciesResponse
 */
DescribeLifecyclePoliciesResponse Client::describeLifecyclePolicies(const DescribeLifecyclePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLifecyclePoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the log dump information configured in log analysis.
 *
 * @param request DescribeLogAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLogAnalysisResponse
 */
DescribeLogAnalysisResponse Client::describeLogAnalysisWithOptions(const DescribeLogAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLogAnalysis"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLogAnalysisResponse>();
}

/**
 * @summary Queries the log dump information configured in log analysis.
 *
 * @param request DescribeLogAnalysisRequest
 * @return DescribeLogAnalysisResponse
 */
DescribeLogAnalysisResponse Client::describeLogAnalysis(const DescribeLogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogAnalysisWithOptions(request, runtime);
}

/**
 * @summary Queries mount targets.
 *
 * @param request DescribeMountTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMountTargetsResponse
 */
DescribeMountTargetsResponse Client::describeMountTargetsWithOptions(const DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDualStackMountTargetDomain()) {
    query["DualStackMountTargetDomain"] = request.getDualStackMountTargetDomain();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetDomain()) {
    query["MountTargetDomain"] = request.getMountTargetDomain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMountTargets"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMountTargetsResponse>();
}

/**
 * @summary Queries mount targets.
 *
 * @param request DescribeMountTargetsRequest
 * @return DescribeMountTargetsResponse
 */
DescribeMountTargetsResponse Client::describeMountTargets(const DescribeMountTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMountTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the clients on which a file system is mounted.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   This operation returns the clients that have accessed the specified file system within the last minute. If the file system is mounted on a client but the client did not access the file system within the last minute, the client is not included in the returned information.
 *
 * @param request DescribeMountedClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMountedClientsResponse
 */
DescribeMountedClientsResponse Client::describeMountedClientsWithOptions(const DescribeMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIP()) {
    query["ClientIP"] = request.getClientIP();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetDomain()) {
    query["MountTargetDomain"] = request.getMountTargetDomain();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMountedClients"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMountedClientsResponse>();
}

/**
 * @summary Queries the clients on which a file system is mounted.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   This operation returns the clients that have accessed the specified file system within the last minute. If the file system is mounted on a client but the client did not access the file system within the last minute, the client is not included in the returned information.
 *
 * @param request DescribeMountedClientsRequest
 * @return DescribeMountedClientsResponse
 */
DescribeMountedClientsResponse Client::describeMountedClients(const DescribeMountedClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMountedClientsWithOptions(request, runtime);
}

/**
 * @summary Queries whether the NFS ACL feature is enabled for a file system.
 *
 * @param request DescribeNfsAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNfsAclResponse
 */
DescribeNfsAclResponse Client::describeNfsAclWithOptions(const DescribeNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNfsAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNfsAclResponse>();
}

/**
 * @summary Queries whether the NFS ACL feature is enabled for a file system.
 *
 * @param request DescribeNfsAclRequest
 * @return DescribeNfsAclResponse
 */
DescribeNfsAclResponse Client::describeNfsAcl(const DescribeNfsAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNfsAclWithOptions(request, runtime);
}

/**
 * @summary Queries the export directories of a protocol service.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request DescribeProtocolMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProtocolMountTargetResponse
 */
DescribeProtocolMountTargetResponse Client::describeProtocolMountTargetWithOptions(const DescribeProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProtocolServiceIds()) {
    query["ProtocolServiceIds"] = request.getProtocolServiceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProtocolMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProtocolMountTargetResponse>();
}

/**
 * @summary Queries the export directories of a protocol service.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request DescribeProtocolMountTargetRequest
 * @return DescribeProtocolMountTargetResponse
 */
DescribeProtocolMountTargetResponse Client::describeProtocolMountTarget(const DescribeProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Queries the information about protocol services.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request DescribeProtocolServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProtocolServiceResponse
 */
DescribeProtocolServiceResponse Client::describeProtocolServiceWithOptions(const DescribeProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProtocolServiceIds()) {
    query["ProtocolServiceIds"] = request.getProtocolServiceIds();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProtocolService"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProtocolServiceResponse>();
}

/**
 * @summary Queries the information about protocol services.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request DescribeProtocolServiceRequest
 * @return DescribeProtocolServiceResponse
 */
DescribeProtocolServiceResponse Client::describeProtocolService(const DescribeProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the regions in which File Storage NAS is available.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the regions in which File Storage NAS is available.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request DescribeSmbAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSmbAclResponse
 */
DescribeSmbAclResponse Client::describeSmbAclWithOptions(const DescribeSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSmbAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSmbAclResponse>();
}

/**
 * @summary Queries the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request DescribeSmbAclRequest
 * @return DescribeSmbAclResponse
 */
DescribeSmbAclResponse Client::describeSmbAcl(const DescribeSmbAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSmbAclWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more snapshots of a file system.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request DescribeSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshotsWithOptions(const DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotIds()) {
    query["SnapshotIds"] = request.getSnapshotIds();
  }

  if (!!request.hasSnapshotName()) {
    query["SnapshotName"] = request.getSnapshotName();
  }

  if (!!request.hasSnapshotType()) {
    query["SnapshotType"] = request.getSnapshotType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSnapshots"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSnapshotsResponse>();
}

/**
 * @summary Queries the information about one or more snapshots of a file system.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request DescribeSnapshotsRequest
 * @return DescribeSnapshotsResponse
 */
DescribeSnapshotsResponse Client::describeSnapshots(const DescribeSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSnapshotsWithOptions(request, runtime);
}

/**
 * @summary You can call the DescribeStoragePackages operation to query the list of storage plans.
 *
 * @param request DescribeStoragePackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStoragePackagesResponse
 */
DescribeStoragePackagesResponse Client::describeStoragePackagesWithOptions(const DescribeStoragePackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUseUTCDateTime()) {
    query["UseUTCDateTime"] = request.getUseUTCDateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStoragePackages"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStoragePackagesResponse>();
}

/**
 * @summary You can call the DescribeStoragePackages operation to query the list of storage plans.
 *
 * @param request DescribeStoragePackagesRequest
 * @return DescribeStoragePackagesResponse
 */
DescribeStoragePackagesResponse Client::describeStoragePackages(const DescribeStoragePackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStoragePackagesWithOptions(request, runtime);
}

/**
 * @summary Queries all zones in a region and the file system types that are supported in each zone.
 *
 * @param request DescribeZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZonesWithOptions(const DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeZones"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeZonesResponse>();
}

/**
 * @summary Queries all zones in a region and the file system types that are supported in each zone.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Unassociates a VSC device from a file system.
 *
 * @description *   Only CPFS for Lingjun supports this operation.
 * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
 *
 * @param request DetachVscFromFilesystemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachVscFromFilesystemsResponse
 */
DetachVscFromFilesystemsResponse Client::detachVscFromFilesystemsWithOptions(const DetachVscFromFilesystemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachVscFromFilesystems"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachVscFromFilesystemsResponse>();
}

/**
 * @summary Unassociates a VSC device from a file system.
 *
 * @description *   Only CPFS for Lingjun supports this operation.
 * *   Batch execution is supported. In batch execution, only one VscId can be associated with multiple FileSystemIDs, meaning the VscId in the ResourceIds must be the same.
 *
 * @param request DetachVscFromFilesystemsRequest
 * @return DetachVscFromFilesystemsResponse
 */
DetachVscFromFilesystemsResponse Client::detachVscFromFilesystems(const DetachVscFromFilesystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachVscFromFilesystemsWithOptions(request, runtime);
}

/**
 * @summary Disables and empties the recycle bin of a General-purpose NAS file system.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   If you disable the recycle bin, all files in the recycle bin are permanently deleted.
 * *   If you disable and then enable the recycle bin, the recycle bin is empty. You cannot retrieve the deleted files.
 *
 * @param request DisableAndCleanRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAndCleanRecycleBinResponse
 */
DisableAndCleanRecycleBinResponse Client::disableAndCleanRecycleBinWithOptions(const DisableAndCleanRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAndCleanRecycleBin"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAndCleanRecycleBinResponse>();
}

/**
 * @summary Disables and empties the recycle bin of a General-purpose NAS file system.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   If you disable the recycle bin, all files in the recycle bin are permanently deleted.
 * *   If you disable and then enable the recycle bin, the recycle bin is empty. You cannot retrieve the deleted files.
 *
 * @param request DisableAndCleanRecycleBinRequest
 * @return DisableAndCleanRecycleBinResponse
 */
DisableAndCleanRecycleBinResponse Client::disableAndCleanRecycleBin(const DisableAndCleanRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAndCleanRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Disables the NFS ACL feature for a file system.
 *
 * @param request DisableNfsAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableNfsAclResponse
 */
DisableNfsAclResponse Client::disableNfsAclWithOptions(const DisableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableNfsAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableNfsAclResponse>();
}

/**
 * @summary Disables the NFS ACL feature for a file system.
 *
 * @param request DisableNfsAclRequest
 * @return DisableNfsAclResponse
 */
DisableNfsAclResponse Client::disableNfsAcl(const DisableNfsAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableNfsAclWithOptions(request, runtime);
}

/**
 * @summary Disables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request DisableSmbAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSmbAclResponse
 */
DisableSmbAclResponse Client::disableSmbAclWithOptions(const DisableSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableSmbAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSmbAclResponse>();
}

/**
 * @summary Disables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request DisableSmbAclRequest
 * @return DisableSmbAclResponse
 */
DisableSmbAclResponse Client::disableSmbAcl(const DisableSmbAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSmbAclWithOptions(request, runtime);
}

/**
 * @summary Enables the NFS ACL feature for a file system.
 *
 * @param request EnableNfsAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableNfsAclResponse
 */
EnableNfsAclResponse Client::enableNfsAclWithOptions(const EnableNfsAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableNfsAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableNfsAclResponse>();
}

/**
 * @summary Enables the NFS ACL feature for a file system.
 *
 * @param request EnableNfsAclRequest
 * @return EnableNfsAclResponse
 */
EnableNfsAclResponse Client::enableNfsAcl(const EnableNfsAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableNfsAclWithOptions(request, runtime);
}

/**
 * @summary Enables the recycle bin feature for a file system.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request EnableRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRecycleBinResponse
 */
EnableRecycleBinResponse Client::enableRecycleBinWithOptions(const EnableRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasReservedDays()) {
    query["ReservedDays"] = request.getReservedDays();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableRecycleBin"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableRecycleBinResponse>();
}

/**
 * @summary Enables the recycle bin feature for a file system.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request EnableRecycleBinRequest
 * @return EnableRecycleBinResponse
 */
EnableRecycleBinResponse Client::enableRecycleBin(const EnableRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Enables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request EnableSmbAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSmbAclResponse
 */
EnableSmbAclResponse Client::enableSmbAclWithOptions(const EnableSmbAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasKeytab()) {
    query["Keytab"] = request.getKeytab();
  }

  if (!!request.hasKeytabMd5()) {
    query["KeytabMd5"] = request.getKeytabMd5();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableSmbAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSmbAclResponse>();
}

/**
 * @summary Enables the access control list (ACL) feature for a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request EnableSmbAclRequest
 * @return EnableSmbAclResponse
 */
EnableSmbAclResponse Client::enableSmbAcl(const EnableSmbAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSmbAclWithOptions(request, runtime);
}

/**
 * @summary Queries whether a directory contains files that are stored in the Infrequent Access (IA) or Archive storage class, or whether a file is stored in the IA or Archive storage class.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request GetDirectoryOrFilePropertiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDirectoryOrFilePropertiesResponse
 */
GetDirectoryOrFilePropertiesResponse Client::getDirectoryOrFilePropertiesWithOptions(const GetDirectoryOrFilePropertiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDirectoryOrFileProperties"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDirectoryOrFilePropertiesResponse>();
}

/**
 * @summary Queries whether a directory contains files that are stored in the Infrequent Access (IA) or Archive storage class, or whether a file is stored in the IA or Archive storage class.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request GetDirectoryOrFilePropertiesRequest
 * @return GetDirectoryOrFilePropertiesResponse
 */
GetDirectoryOrFilePropertiesResponse Client::getDirectoryOrFileProperties(const GetDirectoryOrFilePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryOrFilePropertiesWithOptions(request, runtime);
}

/**
 * @summary 查询特定智能目录
 *
 * @param request GetFilesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFilesetResponse
 */
GetFilesetResponse Client::getFilesetWithOptions(const GetFilesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileset"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFilesetResponse>();
}

/**
 * @summary 查询特定智能目录
 *
 * @param request GetFilesetRequest
 * @return GetFilesetResponse
 */
GetFilesetResponse Client::getFileset(const GetFilesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFilesetWithOptions(request, runtime);
}

/**
 * @summary 查询协议机挂载点
 *
 * @param request GetProtocolMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProtocolMountTargetResponse
 */
GetProtocolMountTargetResponse Client::getProtocolMountTargetWithOptions(const GetProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasExportId()) {
    query["ExportId"] = request.getExportId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProtocolServiceId()) {
    query["ProtocolServiceId"] = request.getProtocolServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProtocolMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProtocolMountTargetResponse>();
}

/**
 * @summary 查询协议机挂载点
 *
 * @param request GetProtocolMountTargetRequest
 * @return GetProtocolMountTargetResponse
 */
GetProtocolMountTargetResponse Client::getProtocolMountTarget(const GetProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Queries the recycle bin configurations of a General-purpose NAS file system.
 *
 * @description Only General-purpose File Storage NAS (NAS) file systems support this operation.
 *
 * @param request GetRecycleBinAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecycleBinAttributeResponse
 */
GetRecycleBinAttributeResponse Client::getRecycleBinAttributeWithOptions(const GetRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecycleBinAttribute"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecycleBinAttributeResponse>();
}

/**
 * @summary Queries the recycle bin configurations of a General-purpose NAS file system.
 *
 * @description Only General-purpose File Storage NAS (NAS) file systems support this operation.
 *
 * @param request GetRecycleBinAttributeRequest
 * @return GetRecycleBinAttributeResponse
 */
GetRecycleBinAttributeResponse Client::getRecycleBinAttribute(const GetRecycleBinAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecycleBinAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the infrequently-accessed files in a specified directory of a General-purpose NAS file system and the subdirectories that contain the files.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListDirectoriesAndFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDirectoriesAndFilesResponse
 */
ListDirectoriesAndFilesResponse Client::listDirectoriesAndFilesWithOptions(const ListDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectoryOnly()) {
    query["DirectoryOnly"] = request.getDirectoryOnly();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDirectoriesAndFiles"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDirectoriesAndFilesResponse>();
}

/**
 * @summary Queries the infrequently-accessed files in a specified directory of a General-purpose NAS file system and the subdirectories that contain the files.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListDirectoriesAndFilesRequest
 * @return ListDirectoriesAndFilesResponse
 */
ListDirectoriesAndFilesResponse Client::listDirectoriesAndFiles(const ListDirectoriesAndFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDirectoriesAndFilesWithOptions(request, runtime);
}

/**
 * @summary Queries data retrieval tasks.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListLifecycleRetrieveJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLifecycleRetrieveJobsResponse
 */
ListLifecycleRetrieveJobsResponse Client::listLifecycleRetrieveJobsWithOptions(const ListLifecycleRetrieveJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLifecycleRetrieveJobs"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLifecycleRetrieveJobsResponse>();
}

/**
 * @summary Queries data retrieval tasks.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListLifecycleRetrieveJobsRequest
 * @return ListLifecycleRetrieveJobsResponse
 */
ListLifecycleRetrieveJobsResponse Client::listLifecycleRetrieveJobs(const ListLifecycleRetrieveJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLifecycleRetrieveJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the directories that are recently deleted.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListRecentlyRecycledDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentlyRecycledDirectoriesResponse
 */
ListRecentlyRecycledDirectoriesResponse Client::listRecentlyRecycledDirectoriesWithOptions(const ListRecentlyRecycledDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecentlyRecycledDirectories"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecentlyRecycledDirectoriesResponse>();
}

/**
 * @summary Queries the directories that are recently deleted.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListRecentlyRecycledDirectoriesRequest
 * @return ListRecentlyRecycledDirectoriesResponse
 */
ListRecentlyRecycledDirectoriesResponse Client::listRecentlyRecycledDirectories(const ListRecentlyRecycledDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecentlyRecycledDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the jobs of the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can query a maximum of 50 jobs that are recently executed.
 *
 * @param request ListRecycleBinJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecycleBinJobsResponse
 */
ListRecycleBinJobsResponse Client::listRecycleBinJobsWithOptions(const ListRecycleBinJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecycleBinJobs"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecycleBinJobsResponse>();
}

/**
 * @summary Queries the jobs of the recycle bin.
 *
 * @description *   Only General-purpose NAS file systems support this operation.
 * *   You can query a maximum of 50 jobs that are recently executed.
 *
 * @param request ListRecycleBinJobsRequest
 * @return ListRecycleBinJobsResponse
 */
ListRecycleBinJobsResponse Client::listRecycleBinJobs(const ListRecycleBinJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecycleBinJobsWithOptions(request, runtime);
}

/**
 * @summary Queries deleted files or directories.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListRecycledDirectoriesAndFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecycledDirectoriesAndFilesResponse
 */
ListRecycledDirectoriesAndFilesResponse Client::listRecycledDirectoriesAndFilesWithOptions(const ListRecycledDirectoriesAndFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecycledDirectoriesAndFiles"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecycledDirectoriesAndFilesResponse>();
}

/**
 * @summary Queries deleted files or directories.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ListRecycledDirectoriesAndFilesRequest
 * @return ListRecycledDirectoriesAndFilesResponse
 */
ListRecycledDirectoriesAndFilesResponse Client::listRecycledDirectoriesAndFiles(const ListRecycledDirectoriesAndFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecycledDirectoriesAndFilesWithOptions(request, runtime);
}

/**
 * @summary Queries tags.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries tags.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies a permission group.
 *
 * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
 *
 * @param request ModifyAccessGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccessGroupResponse
 */
ModifyAccessGroupResponse Client::modifyAccessGroupWithOptions(const ModifyAccessGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccessGroup"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccessGroupResponse>();
}

/**
 * @summary Modifies a permission group.
 *
 * @description The default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
 *
 * @param request ModifyAccessGroupRequest
 * @return ModifyAccessGroupResponse
 */
ModifyAccessGroupResponse Client::modifyAccessGroup(const ModifyAccessGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccessGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about an access point.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request ModifyAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccessPointResponse
 */
ModifyAccessPointResponse Client::modifyAccessPointWithOptions(const ModifyAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroup()) {
    query["AccessGroup"] = request.getAccessGroup();
  }

  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasAccessPointName()) {
    query["AccessPointName"] = request.getAccessPointName();
  }

  if (!!request.hasEnabledRam()) {
    query["EnabledRam"] = request.getEnabledRam();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccessPointResponse>();
}

/**
 * @summary Modifies the information about an access point.
 *
 * @description Only General-purpose Network File System (NFS) file systems support this operation.
 *
 * @param request ModifyAccessPointRequest
 * @return ModifyAccessPointResponse
 */
ModifyAccessPointResponse Client::modifyAccessPoint(const ModifyAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccessPointWithOptions(request, runtime);
}

/**
 * @summary Modifies a rule in a permission group.
 *
 * @description The rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
 *
 * @param request ModifyAccessRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccessRuleResponse
 */
ModifyAccessRuleResponse Client::modifyAccessRuleWithOptions(const ModifyAccessRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasAccessRuleId()) {
    query["AccessRuleId"] = request.getAccessRuleId();
  }

  if (!!request.hasFileSystemType()) {
    query["FileSystemType"] = request.getFileSystemType();
  }

  if (!!request.hasIpv6SourceCidrIp()) {
    query["Ipv6SourceCidrIp"] = request.getIpv6SourceCidrIp();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRWAccessType()) {
    query["RWAccessType"] = request.getRWAccessType();
  }

  if (!!request.hasSourceCidrIp()) {
    query["SourceCidrIp"] = request.getSourceCidrIp();
  }

  if (!!request.hasUserAccessType()) {
    query["UserAccessType"] = request.getUserAccessType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccessRule"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccessRuleResponse>();
}

/**
 * @summary Modifies a rule in a permission group.
 *
 * @description The rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
 *
 * @param request ModifyAccessRuleRequest
 * @return ModifyAccessRuleResponse
 */
ModifyAccessRuleResponse Client::modifyAccessRule(const ModifyAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccessRuleWithOptions(request, runtime);
}

/**
 * @summary An automatic snapshot policy is modified. After you modify an automatic snapshot policy that is applied to a file system, the modification immediately applies to subsequent snapshots that are created for the file system.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request ModifyAutoSnapshotPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAutoSnapshotPolicyResponse
 */
ModifyAutoSnapshotPolicyResponse Client::modifyAutoSnapshotPolicyWithOptions(const ModifyAutoSnapshotPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoSnapshotPolicyId()) {
    query["AutoSnapshotPolicyId"] = request.getAutoSnapshotPolicyId();
  }

  if (!!request.hasAutoSnapshotPolicyName()) {
    query["AutoSnapshotPolicyName"] = request.getAutoSnapshotPolicyName();
  }

  if (!!request.hasRepeatWeekdays()) {
    query["RepeatWeekdays"] = request.getRepeatWeekdays();
  }

  if (!!request.hasRetentionDays()) {
    query["RetentionDays"] = request.getRetentionDays();
  }

  if (!!request.hasTimePoints()) {
    query["TimePoints"] = request.getTimePoints();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAutoSnapshotPolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAutoSnapshotPolicyResponse>();
}

/**
 * @summary An automatic snapshot policy is modified. After you modify an automatic snapshot policy that is applied to a file system, the modification immediately applies to subsequent snapshots that are created for the file system.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 *
 * @param request ModifyAutoSnapshotPolicyRequest
 * @return ModifyAutoSnapshotPolicyResponse
 */
ModifyAutoSnapshotPolicyResponse Client::modifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a dataflow.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
 * *   You can modify the attributes only of the data flows that are in the `Running` state.
 * *   It generally takes 2 to 5 minutes to modify the attributes of a data flow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the data flow to be modified.
 * *   CPFS data flow specifications:
 *     *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
 *     *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the dataflow whose throughput is changed meet the requirements.
 * *   Billing of CPFS file systems
 *     Changing the dataflow throughput involves the billing of dataflow bandwidth. We recommend that you understand CPFS billing methods in advance. For more information, see [Billing methods and billable items of CPFS](https://help.aliyun.com/document_detail/111858.html).
 *
 * @param request ModifyDataFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataFlowResponse
 */
ModifyDataFlowResponse Client::modifyDataFlowWithOptions(const ModifyDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasThroughput()) {
    query["Throughput"] = request.getThroughput();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDataFlow"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataFlowResponse>();
}

/**
 * @summary Modifies the attributes of a dataflow.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) V2.2.0 and later and CPFS for Lingjun V2.4.0 and later support data flows.
 * *   You can modify the attributes only of the data flows that are in the `Running` state.
 * *   It generally takes 2 to 5 minutes to modify the attributes of a data flow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the status of the data flow to be modified.
 * *   CPFS data flow specifications:
 *     *   The data flow throughput supports the following specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow throughput is the maximum transmission bandwidth that can be reached when data is imported or exported for a data flow.
 *     *   Inventory query: If you set the DryRun parameter to true, you can check whether the resources for the dataflow whose throughput is changed meet the requirements.
 * *   Billing of CPFS file systems
 *     Changing the dataflow throughput involves the billing of dataflow bandwidth. We recommend that you understand CPFS billing methods in advance. For more information, see [Billing methods and billable items of CPFS](https://help.aliyun.com/document_detail/111858.html).
 *
 * @param request ModifyDataFlowRequest
 * @return ModifyDataFlowResponse
 */
ModifyDataFlowResponse Client::modifyDataFlow(const ModifyDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataFlowWithOptions(request, runtime);
}

/**
 * @summary Modifies an AutoRefresh configuration of a dataflow.
 *
 * @description *   This operation is available only to CPFS file systems.
 * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * *   You can modify the AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
 * *   It generally takes 2 to 5 minutes to modify an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the task of modifying an AutoRefresh configuration.
 *
 * @param request ModifyDataFlowAutoRefreshRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDataFlowAutoRefreshResponse
 */
ModifyDataFlowAutoRefreshResponse Client::modifyDataFlowAutoRefreshWithOptions(const ModifyDataFlowAutoRefreshRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRefreshInterval()) {
    query["AutoRefreshInterval"] = request.getAutoRefreshInterval();
  }

  if (!!request.hasAutoRefreshPolicy()) {
    query["AutoRefreshPolicy"] = request.getAutoRefreshPolicy();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDataFlowAutoRefresh"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDataFlowAutoRefreshResponse>();
}

/**
 * @summary Modifies an AutoRefresh configuration of a dataflow.
 *
 * @description *   This operation is available only to CPFS file systems.
 * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * *   You can modify the AutoRefresh configurations only for the dataflows that are in the `Running` or `Stopped` state.
 * *   It generally takes 2 to 5 minutes to modify an AutoRefresh configuration. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation to query the task of modifying an AutoRefresh configuration.
 *
 * @param request ModifyDataFlowAutoRefreshRequest
 * @return ModifyDataFlowAutoRefreshResponse
 */
ModifyDataFlowAutoRefreshResponse Client::modifyDataFlowAutoRefresh(const ModifyDataFlowAutoRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataFlowAutoRefreshWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a file system.
 *
 * @param tmpReq ModifyFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFileSystemResponse
 */
ModifyFileSystemResponse Client::modifyFileSystemWithOptions(const ModifyFileSystemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyFileSystemShrinkRequest request = ModifyFileSystemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOptions()) {
    request.setOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOptions(), "Options", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasOptionsShrink()) {
    query["Options"] = request.getOptionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFileSystem"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFileSystemResponse>();
}

/**
 * @summary Modifies the description of a file system.
 *
 * @param request ModifyFileSystemRequest
 * @return ModifyFileSystemResponse
 */
ModifyFileSystemResponse Client::modifyFileSystem(const ModifyFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFileSystemWithOptions(request, runtime);
}

/**
 * @summary Modifies a fileset.
 *
 * @description Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation.
 *
 * @param request ModifyFilesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFilesetResponse
 */
ModifyFilesetResponse Client::modifyFilesetWithOptions(const ModifyFilesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyFileset"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFilesetResponse>();
}

/**
 * @summary Modifies a fileset.
 *
 * @description Only Cloud Parallel File Storage (CPFS) V2.2.0 and CPFS for Lingjun V2.7.0 and later support this operation.
 *
 * @param request ModifyFilesetRequest
 * @return ModifyFilesetResponse
 */
ModifyFilesetResponse Client::modifyFileset(const ModifyFilesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFilesetWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ModifyLDAPConfig is deprecated
 *
 * @summary Used to modify LDAP configuration.
 *
 * @description The API operation is available only for Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request ModifyLDAPConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLDAPConfigResponse
 */
ModifyLDAPConfigResponse Client::modifyLDAPConfigWithOptions(const ModifyLDAPConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindDN()) {
    query["BindDN"] = request.getBindDN();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasSearchBase()) {
    query["SearchBase"] = request.getSearchBase();
  }

  if (!!request.hasURI()) {
    query["URI"] = request.getURI();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLDAPConfig"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLDAPConfigResponse>();
}

/**
 * @deprecated OpenAPI ModifyLDAPConfig is deprecated
 *
 * @summary Used to modify LDAP configuration.
 *
 * @description The API operation is available only for Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request ModifyLDAPConfigRequest
 * @return ModifyLDAPConfigResponse
 */
ModifyLDAPConfigResponse Client::modifyLDAPConfig(const ModifyLDAPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLDAPConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a lifecycle policy.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ModifyLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLifecyclePolicyResponse
 */
ModifyLifecyclePolicyResponse Client::modifyLifecyclePolicyWithOptions(const ModifyLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyName()) {
    query["LifecyclePolicyName"] = request.getLifecyclePolicyName();
  }

  if (!!request.hasLifecycleRuleName()) {
    query["LifecycleRuleName"] = request.getLifecycleRuleName();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLifecyclePolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLifecyclePolicyResponse>();
}

/**
 * @summary Modifies a lifecycle policy.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request ModifyLifecyclePolicyRequest
 * @return ModifyLifecyclePolicyResponse
 */
ModifyLifecyclePolicyResponse Client::modifyLifecyclePolicy(const ModifyLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies a mount target.
 *
 * @param request ModifyMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMountTargetResponse
 */
ModifyMountTargetResponse Client::modifyMountTargetWithOptions(const ModifyMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessGroupName()) {
    query["AccessGroupName"] = request.getAccessGroupName();
  }

  if (!!request.hasDualStackMountTargetDomain()) {
    query["DualStackMountTargetDomain"] = request.getDualStackMountTargetDomain();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMountTargetDomain()) {
    query["MountTargetDomain"] = request.getMountTargetDomain();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMountTargetResponse>();
}

/**
 * @summary Modifies a mount target.
 *
 * @param request ModifyMountTargetRequest
 * @return ModifyMountTargetResponse
 */
ModifyMountTargetResponse Client::modifyMountTarget(const ModifyMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMountTargetWithOptions(request, runtime);
}

/**
 * @summary Modifies the export directory parameters of a protocol service. Only the description can be modified. The virtual private cloud (VPC) ID and vSwitch ID cannot be changed. To change these IDs, you must delete the export directory and create a new one.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request ModifyProtocolMountTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyProtocolMountTargetResponse
 */
ModifyProtocolMountTargetResponse Client::modifyProtocolMountTargetWithOptions(const ModifyProtocolMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasExportId()) {
    query["ExportId"] = request.getExportId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasProtocolServiceId()) {
    query["ProtocolServiceId"] = request.getProtocolServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyProtocolMountTarget"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyProtocolMountTargetResponse>();
}

/**
 * @summary Modifies the export directory parameters of a protocol service. Only the description can be modified. The virtual private cloud (VPC) ID and vSwitch ID cannot be changed. To change these IDs, you must delete the export directory and create a new one.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request ModifyProtocolMountTargetRequest
 * @return ModifyProtocolMountTargetResponse
 */
ModifyProtocolMountTargetResponse Client::modifyProtocolMountTarget(const ModifyProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Modifies a protocol service. You can modify the description of a protocol service.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
 *
 * @param request ModifyProtocolServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyProtocolServiceResponse
 */
ModifyProtocolServiceResponse Client::modifyProtocolServiceWithOptions(const ModifyProtocolServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasProtocolServiceId()) {
    query["ProtocolServiceId"] = request.getProtocolServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyProtocolService"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyProtocolServiceResponse>();
}

/**
 * @summary Modifies a protocol service. You can modify the description of a protocol service.
 *
 * @description This operation is available only to Cloud Parallel File Storage (CPFS) file systems on the China site (aliyun.com).
 *
 * @param request ModifyProtocolServiceRequest
 * @return ModifyProtocolServiceResponse
 */
ModifyProtocolServiceResponse Client::modifyProtocolService(const ModifyProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Updates the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request ModifySmbAclRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySmbAclResponse
 */
ModifySmbAclResponse Client::modifySmbAclWithOptions(const ModifySmbAclRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableAnonymousAccess()) {
    query["EnableAnonymousAccess"] = request.getEnableAnonymousAccess();
  }

  if (!!request.hasEncryptData()) {
    query["EncryptData"] = request.getEncryptData();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasHomeDirPath()) {
    query["HomeDirPath"] = request.getHomeDirPath();
  }

  if (!!request.hasKeytab()) {
    query["Keytab"] = request.getKeytab();
  }

  if (!!request.hasKeytabMd5()) {
    query["KeytabMd5"] = request.getKeytabMd5();
  }

  if (!!request.hasRejectUnencryptedAccess()) {
    query["RejectUnencryptedAccess"] = request.getRejectUnencryptedAccess();
  }

  if (!!request.hasSuperAdminSid()) {
    query["SuperAdminSid"] = request.getSuperAdminSid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySmbAcl"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySmbAclResponse>();
}

/**
 * @summary Updates the information about the access control list (ACL) feature of a Server Message Block (SMB) file system that resides in an Active Directory (AD) domain.
 *
 * @param request ModifySmbAclRequest
 * @return ModifySmbAclResponse
 */
ModifySmbAclResponse Client::modifySmbAcl(const ModifySmbAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmbAclWithOptions(request, runtime);
}

/**
 * @summary Activates File Storage NAS.
 *
 * @param request OpenNASServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenNASServiceResponse
 */
OpenNASServiceResponse Client::openNASServiceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "OpenNASService"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenNASServiceResponse>();
}

/**
 * @summary Activates File Storage NAS.
 *
 * @return OpenNASServiceResponse
 */
OpenNASServiceResponse Client::openNASService() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openNASServiceWithOptions(runtime);
}

/**
 * @deprecated OpenAPI RemoveClientFromBlackList is deprecated
 *
 * @summary Remove the client from the blacklist.
 *
 * @description The API operation is available only for CPFS file systems.
 *
 * @param request RemoveClientFromBlackListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveClientFromBlackListResponse
 */
RemoveClientFromBlackListResponse Client::removeClientFromBlackListWithOptions(const RemoveClientFromBlackListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIP()) {
    query["ClientIP"] = request.getClientIP();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveClientFromBlackList"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveClientFromBlackListResponse>();
}

/**
 * @deprecated OpenAPI RemoveClientFromBlackList is deprecated
 *
 * @summary Remove the client from the blacklist.
 *
 * @description The API operation is available only for CPFS file systems.
 *
 * @param request RemoveClientFromBlackListRequest
 * @return RemoveClientFromBlackListResponse
 */
RemoveClientFromBlackListResponse Client::removeClientFromBlackList(const RemoveClientFromBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeClientFromBlackListWithOptions(request, runtime);
}

/**
 * @summary Rolls back a file system to a snapshot of the file system.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 * *   The file system must be in the Running state.
 * *   To roll back a file system to a snapshot, you must specify the ID of the snapshot that is created from the file system.
 *
 * @param request ResetFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetFileSystemResponse
 */
ResetFileSystemResponse Client::resetFileSystemWithOptions(const ResetFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasSnapshotId()) {
    query["SnapshotId"] = request.getSnapshotId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetFileSystem"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetFileSystemResponse>();
}

/**
 * @summary Rolls back a file system to a snapshot of the file system.
 *
 * @description *   The snapshot feature is in public preview and is provided free of charge. [File Storage NAS Service Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed in public preview.
 * *   Only advanced Extreme NAS file systems support this feature.
 * *   The file system must be in the Running state.
 * *   To roll back a file system to a snapshot, you must specify the ID of the snapshot that is created from the file system.
 *
 * @param request ResetFileSystemRequest
 * @return ResetFileSystemResponse
 */
ResetFileSystemResponse Client::resetFileSystem(const ResetFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetFileSystemWithOptions(request, runtime);
}

/**
 * @summary Retries failed a data retrieval task.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request RetryLifecycleRetrieveJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryLifecycleRetrieveJobResponse
 */
RetryLifecycleRetrieveJobResponse Client::retryLifecycleRetrieveJobWithOptions(const RetryLifecycleRetrieveJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryLifecycleRetrieveJob"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryLifecycleRetrieveJobResponse>();
}

/**
 * @summary Retries failed a data retrieval task.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request RetryLifecycleRetrieveJobRequest
 * @return RetryLifecycleRetrieveJobResponse
 */
RetryLifecycleRetrieveJobResponse Client::retryLifecycleRetrieveJob(const RetryLifecycleRetrieveJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryLifecycleRetrieveJobWithOptions(request, runtime);
}

/**
 * @summary Creates a directory quota for a file system.
 *
 * @description Only General-purpose File Storage NAS (NAS) file systems support the directory quota feature.
 *
 * @param request SetDirQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDirQuotaResponse
 */
SetDirQuotaResponse Client::setDirQuotaWithOptions(const SetDirQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileCountLimit()) {
    query["FileCountLimit"] = request.getFileCountLimit();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasQuotaType()) {
    query["QuotaType"] = request.getQuotaType();
  }

  if (!!request.hasSizeLimit()) {
    query["SizeLimit"] = request.getSizeLimit();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDirQuota"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDirQuotaResponse>();
}

/**
 * @summary Creates a directory quota for a file system.
 *
 * @description Only General-purpose File Storage NAS (NAS) file systems support the directory quota feature.
 *
 * @param request SetDirQuotaRequest
 * @return SetDirQuotaResponse
 */
SetDirQuotaResponse Client::setDirQuota(const SetDirQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDirQuotaWithOptions(request, runtime);
}

/**
 * @summary Sets the quota for a fileset.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) for Lingjun V2.7.0 and later support this operation.
 * *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
 * *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
 * *   When modifying a directory quota, you must set the new capacity or file quantity higher than what is currently used.
 * *   You must configure at least one of the Capacity Limit (GiB) and File Limit parameters.
 * *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
 *
 * @param request SetFilesetQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetFilesetQuotaResponse
 */
SetFilesetQuotaResponse Client::setFilesetQuotaWithOptions(const SetFilesetQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileCountLimit()) {
    query["FileCountLimit"] = request.getFileCountLimit();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasFsetId()) {
    query["FsetId"] = request.getFsetId();
  }

  if (!!request.hasSizeLimit()) {
    query["SizeLimit"] = request.getSizeLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetFilesetQuota"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetFilesetQuotaResponse>();
}

/**
 * @summary Sets the quota for a fileset.
 *
 * @description *   Only Cloud Parallel File Storage (CPFS) for Lingjun V2.7.0 and later support this operation.
 * *   The minimum capacity quota of a fileset is 10 GiB. The scaling step size is 1 GiB.
 * *   A fileset supports a minimum of 10,000 files or directories and a maximum of 10 billion files or directories. The scaling step size is 1.
 * *   When modifying a directory quota, you must set the new capacity or file quantity higher than what is currently used.
 * *   You must configure at least one of the Capacity Limit (GiB) and File Limit parameters.
 * *   The quota statistics have a 15-minute latency. The actual usage takes effect after 15 minutes.
 *
 * @param request SetFilesetQuotaRequest
 * @return SetFilesetQuotaResponse
 */
SetFilesetQuotaResponse Client::setFilesetQuota(const SetFilesetQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setFilesetQuotaWithOptions(request, runtime);
}

/**
 * @summary Enables a dataflow.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can enable the data flows that are only in the `Stopped` state.
 * *   If the value of DryRun is `true`, you can check whether sufficient resources are available to enable the specified data flow. If the resources are insufficient, the data flow cannot be enabled.
 * *   It generally takes 2 to 5 minutes to enable a data flow. You can query the data flow status by calling the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation.
 *
 * @param request StartDataFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDataFlowResponse
 */
StartDataFlowResponse Client::startDataFlowWithOptions(const StartDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDataFlow"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDataFlowResponse>();
}

/**
 * @summary Enables a dataflow.
 *
 * @description *   This operation is available only to Cloud Parallel File Storage (CPFS) file systems.
 * *   Only CPFS V2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * *   You can enable the data flows that are only in the `Stopped` state.
 * *   If the value of DryRun is `true`, you can check whether sufficient resources are available to enable the specified data flow. If the resources are insufficient, the data flow cannot be enabled.
 * *   It generally takes 2 to 5 minutes to enable a data flow. You can query the data flow status by calling the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) operation.
 *
 * @param request StartDataFlowRequest
 * @return StartDataFlowResponse
 */
StartDataFlowResponse Client::startDataFlow(const StartDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDataFlowWithOptions(request, runtime);
}

/**
 * @summary Disables a dataflow.
 *
 * @description *   This operation is available only to CPFS file systems.
 * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * *   You can disable only the dataflows that are in the `Running` state.
 * *   After a dataflow is disabled, you cannot create a dataflow task for the dataflow. If AutoRefresh is configured, source data updates are not synchronized to CPFS.
 * *   After a dataflow is disabled, the dataflow throughput is no longer billed because resources are reclaimed. However, the dataflow may fail to be restarted due to insufficient resources.
 * *   It generally takes 2 to 5 minutes to disable a dataflow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) operation to query the dataflow status.
 *
 * @param request StopDataFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDataFlowResponse
 */
StopDataFlowResponse Client::stopDataFlowWithOptions(const StopDataFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDataFlowId()) {
    query["DataFlowId"] = request.getDataFlowId();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDataFlow"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDataFlowResponse>();
}

/**
 * @summary Disables a dataflow.
 *
 * @description *   This operation is available only to CPFS file systems.
 * *   Only CPFS V2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * *   You can disable only the dataflows that are in the `Running` state.
 * *   After a dataflow is disabled, you cannot create a dataflow task for the dataflow. If AutoRefresh is configured, source data updates are not synchronized to CPFS.
 * *   After a dataflow is disabled, the dataflow throughput is no longer billed because resources are reclaimed. However, the dataflow may fail to be restarted due to insufficient resources.
 * *   It generally takes 2 to 5 minutes to disable a dataflow. You can call the [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) operation to query the dataflow status.
 *
 * @param request StopDataFlowRequest
 * @return StopDataFlowResponse
 */
StopDataFlowResponse Client::stopDataFlow(const StopDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDataFlowWithOptions(request, runtime);
}

/**
 * @summary Creates tags and binds the tags to file systems.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Creates tags and binds the tags to file systems.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from a file system.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Removes tags from a file system.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the retention period of data in the recycle bin of a file system.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request UpdateRecycleBinAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecycleBinAttributeResponse
 */
UpdateRecycleBinAttributeResponse Client::updateRecycleBinAttributeWithOptions(const UpdateRecycleBinAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecycleBinAttribute"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecycleBinAttributeResponse>();
}

/**
 * @summary Modifies the retention period of data in the recycle bin of a file system.
 *
 * @description Only General-purpose NAS file systems support this operation.
 *
 * @param request UpdateRecycleBinAttributeRequest
 * @return UpdateRecycleBinAttributeResponse
 */
UpdateRecycleBinAttributeResponse Client::updateRecycleBinAttribute(const UpdateRecycleBinAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecycleBinAttributeWithOptions(request, runtime);
}

/**
 * @summary Scales up an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description *   Only Extreme NAS file systems and CPFS file systems can be scaled up. CPFS file systems are available only on the China site (aliyun.com).
 * *   A General-purpose NAS file system is automatically scaled up. You do not need to call this operation to scale up a General-purpose NAS file system.
 *
 * @param request UpgradeFileSystemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeFileSystemResponse
 */
UpgradeFileSystemResponse Client::upgradeFileSystemWithOptions(const UpgradeFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapacity()) {
    query["Capacity"] = request.getCapacity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeFileSystem"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeFileSystemResponse>();
}

/**
 * @summary Scales up an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description *   Only Extreme NAS file systems and CPFS file systems can be scaled up. CPFS file systems are available only on the China site (aliyun.com).
 * *   A General-purpose NAS file system is automatically scaled up. You do not need to call this operation to scale up a General-purpose NAS file system.
 *
 * @param request UpgradeFileSystemRequest
 * @return UpgradeFileSystemResponse
 */
UpgradeFileSystemResponse Client::upgradeFileSystem(const UpgradeFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeFileSystemWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace NAS20170626