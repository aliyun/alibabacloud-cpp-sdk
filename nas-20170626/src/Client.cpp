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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持状态为`Running（正常）`状态的数据流动添加自动更新配置。
 * - 一个数据流动最多可以添加5个自动更新配置。
 * - 创建自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html)查询数据流动状态。
 * - 自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
 *   > CPFS在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改和删除，否则自动更新无法正常工作。
 * - 自动更新的作用对象是prefix，由参数RefreshPath指定。在CPFS数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS数据流动处理。
 * - 配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
 * - 自动更新间隔（AutoRefreshInterval）指CPFS每隔该时间间隔，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为Misconfigured，您可以提升数据流动规格，或者降低OSS修改频率来解决。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持状态为`Running（正常）`状态的数据流动添加自动更新配置。
 * - 一个数据流动最多可以添加5个自动更新配置。
 * - 创建自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html)查询数据流动状态。
 * - 自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
 *   > CPFS在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改和删除，否则自动更新无法正常工作。
 * - 自动更新的作用对象是prefix，由参数RefreshPath指定。在CPFS数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS数据流动处理。
 * - 配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
 * - 自动更新间隔（AutoRefreshInterval）指CPFS每隔该时间间隔，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为Misconfigured，您可以提升数据流动规格，或者降低OSS修改频率来解决。
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
 * @description - 仅CPFS智算版支持该功能。
 * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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

  if (!!request.hasRoleChain()) {
    query["RoleChain"] = request.getRoleChain();
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
 * @description - 仅CPFS智算版支持该功能。
 * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持取消`Running（正常）`、`Stopped（停止）`状态数据流动的自动更新配置。
 * - 取消自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询取消自动更新任务的状态。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持取消`Running（正常）`、`Stopped（停止）`状态数据流动的自动更新配置。
 * - 取消自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询取消自动更新任务的状态。
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
 * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持在 CREATED和RUNNING状态下取消数据流动流式任务。
 * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
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
 * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持在 CREATED和RUNNING状态下取消数据流动流式任务。
 * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
 *
 * @param request CancelDataFlowSubTaskRequest
 * @return CancelDataFlowSubTaskResponse
 */
CancelDataFlowSubTaskResponse Client::cancelDataFlowSubTask(const CancelDataFlowSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDataFlowSubTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels a batch or streaming data flow task that is in the Pending or Executing state.
 *
 * @description - Data flow tasks are supported only by CPFS 2.2.0 or later and CPFS for AI Computing 2.4.0 or later. The file system details page in the console displays the version information.
 * - A data flow task can be canceled only if it is in the `Pending or Executing` state.
 * - Canceling a data flow task typically takes 5 to 10 minutes. Call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status.
 * - You cannot cancel a streaming task if it has running streaming subtasks. Otherwise, the system returns an InvalidStatus.ResourceMismatch error.
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
 * @summary Cancels a batch or streaming data flow task that is in the Pending or Executing state.
 *
 * @description - Data flow tasks are supported only by CPFS 2.2.0 or later and CPFS for AI Computing 2.4.0 or later. The file system details page in the console displays the version information.
 * - A data flow task can be canceled only if it is in the `Pending or Executing` state.
 * - Canceling a data flow task typically takes 5 to 10 minutes. Call the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation to query the task execution status.
 * - You cannot cancel a streaming task if it has running streaming subtasks. Otherwise, the system returns an InvalidStatus.ResourceMismatch error.
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
 * @description 仅CPFS智算版2.7.0及以上版本支持取消配额。
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
 * @description 仅CPFS智算版2.7.0及以上版本支持取消配额。
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
 * @description - 一个阿里云账号在单个地域内最多可以创建20个权限组。
 * - 一个权限组最多支持添加300个规则。
 * - 仅支持创建专有网络类型的权限组。
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
 * @description - 一个阿里云账号在单个地域内最多可以创建20个权限组。
 * - 一个权限组最多支持添加300个规则。
 * - 仅支持创建专有网络类型的权限组。
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
 * @description - 在使用CreateAccessPoint接口创建接入点时部分资源的生成是异步完成的。因此在执行CreateAccessPoint接口成功后，请先调用[DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html)或者[DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html)接口查询接入点状态，当接入点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
 * - 仅通用型NAS NFS协议文件系统支持该功能。
 * - 如果开启RAM策略（EnabledRam），需要配置对应的RAM权限，具体请参考[管理接入点](https://help.aliyun.com/document_detail/2545998.html)。
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
 * @description - 在使用CreateAccessPoint接口创建接入点时部分资源的生成是异步完成的。因此在执行CreateAccessPoint接口成功后，请先调用[DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html)或者[DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html)接口查询接入点状态，当接入点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
 * - 仅通用型NAS NFS协议文件系统支持该功能。
 * - 如果开启RAM策略（EnabledRam），需要配置对应的RAM权限，具体请参考[管理接入点](https://help.aliyun.com/document_detail/2545998.html)。
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
 * @description 一个权限组最多支持添加300个规则。
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
 * @description 一个权限组最多支持添加300个规则。
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
 * @description - 本接口适用于以下产品：
 * | 产品 | 文件系统ID格式 | 支持数据流动的最低版本 |
 * |------|----------------|------------------------|
 * | **CPFS通用版** | 以 `cpfs-` 开头，例如 cpfs-125487**** | 2.2.0 及以上 |
 * | **CPFS智算版** | 以 `bmcpfs-` 开头，例如 bmcpfs-0015**** | 2.4.0 及以上 |
 * > ：CPFS通用版和CPFS智算版共用同一套API，但在参数取值和功能支持上有所区别。请根据您使用的产品类型参考相应章节。
 * - 基础操作
 *     - CPFS通用版、CPFS智算版文件系统状态为运行中时，才能创建数据流动。
 *     - 一个CPFS通用版或CPFS智算版文件系统最多允许创建 **10 个**数据流动。
 *     - 创建数据流动一般耗时 2～5 分钟，您可通过 [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) 检查数据流动创建是否完成。
 * - 权限
 *     创建数据流动时，文件存储CPFS会获取`AliyunServiceRoleForNasOssDataflow`和`AliyunServiceRoleForNasEventNotification`两个服务关联角色。更多信息，请参见[CPFS服务关联角色](https://help.aliyun.com/document_detail/185138.html)。
 * - CPFS通用版使用说明
 *      本章节适用于文件系统ID以 `cpfs-` 开头的CPFS通用版。
 *   - 计费
 *     - 创建数据流动将按照数据流动带宽计费。更多信息，请参见[CPFS通用版计费说明](https://help.aliyun.com/document_detail/111858.html)。
 *     - 使用自动更新（AutoRefresh）时，需要通过EventBridge收集源端OSS存储的对象修改事件，事件将产生费用。更多信息，请参见[EventBridge计费说明](https://help.aliyun.com/document_detail/163752.html)。
 *   - 数据流动规格
 *       - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
 *     - 创建一个数据流动，会消耗1个文件存储CPFS通用版挂载点使用的vSwitch IP地址，请您确保该vSwitch IP资源充足。
 *     - 库存查询：当设置DryRun为true时，可校验创建该规格的数据流动的资源是否满足。
 *   - Fileset
 *     - 数据流动的目的端是CPFS通用版文件系统中的Fileset。Fileset是CPFS通用版文件系统中一种新的目录树结构，是在父文件系统中的一个小型文件系统，拥有独立的inode空间和管理能力。
 *     -  创建数据流动时该Fileset必须已存在，且不能与其他Fileset嵌套。一个Fileset上只能创建一个数据流动，对应一个源端存储。
 *     - Fileset内的文件数量上限是100万，如果从OSS Bucket导入的文件数量超过上限，创建新文件会报错`no space`。
 *    > 如果Fileset中已存在数据，创建数据流动后，Fileset内的已有数据会被清空，替换为OSS端同步过来的数据。
 *   - 自动更新
 *     -  配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS通用版文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
 *     -  自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
 *     -  自动更新的作用范围是prefix，由参数RefreshPath指定。一个数据流动最多可配置5个自动更新目录。
 *     -  自动更新间隔（AutoRefreshInterval）指CPFS通用版设置的自动更新时间，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS通用版数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为`Misconfigured`，您可以提升数据流动规格，或者降低OSS修改频率来解决。
 *     -  在文件存储CPFS通用版数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS通用版数据流动处理。
 *      > 文件存储CPFS通用版在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改或删除，否则自动更新无法正常工作。
 *   -  源端存储
 *      -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
 *      -  CPFS通用版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
 *      -  如果多个CPFS通用版的数据流动、或者同一个文件存储CPFS通用版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个文件存储CPFS通用版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
 *      -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS通用版文件系统在同一个地域。
 *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS通用版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS通用版数据流动无法访问Bucket的数据。
 * - CPFS智算版使用说明
 *      本章节适用于文件系统ID以 `bmcpfs-` 开头的CPFS智算版。
 *   -  源端存储
 *       -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
 *       -  CPFS智算版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
 *       -  如果多个CPFS智算版的数据流动、或者同一个CPFS智算版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个CPFS智算版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
 *       -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS智算版文件系统在同一个地域。
 *      - CPFS智算版2.6.0及以上版本支持使用跨账号OSS进行数据流动的创建。
 *      - 只有在使用跨账号的OSS时，需要设置account id参数。
 *      - 使用跨账号的OSS时，需要先进行账号授权。具体授权请参考[跨账号数据流动授权](https://help.aliyun.com/document_detail/2713462.html)。
 *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS智算版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS智算版数据流动无法访问Bucket的数据。
 *   - 数据流动对文件系统的限制
 *     - 在数据流动关联的文件系统路径中，不可对非空目录执行重命名操作，否则报错Permission Denied或者目录非空。
 *      - 目录、文件名中的特殊字符需要谨慎使用，支持大小写字母、数字、感叹号（！）、短划线（-）、下划线（_）、半角句号（.）、星号（*）和半角圆括号（()）。
 *     - 不支持超长路径，数据流动支持的路径最大长度是1023字符。
 *   - 数据流动导入限制
 *     - Symlink类型的文件导入到CPFS智算版后，会转变为包含数据的普通文件，并丢失Symlink信息。
 *     - 如果OSS Bucket存在多个版本，则只复制最新的版本。
 *     - 不支持长度大于255字节的文件名或子目录名。
 *   - 数据流动导出限制
 *     - Symlink类型的文件在同步到OSS后，不会同步Symlink所指向的文件，而是会变成一个普通的无数据空白对象。
 *     - Hardlink类型的文件仅作为普通文件同步到OSS。
 *     - Socket、Device、Pipe类型的文件导出到OSS Bucket时，会变成一个普通的无数据空白对象。
 *     - 不支持长度大于1023字符的目录路径。
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
 * @description - 本接口适用于以下产品：
 * | 产品 | 文件系统ID格式 | 支持数据流动的最低版本 |
 * |------|----------------|------------------------|
 * | **CPFS通用版** | 以 `cpfs-` 开头，例如 cpfs-125487**** | 2.2.0 及以上 |
 * | **CPFS智算版** | 以 `bmcpfs-` 开头，例如 bmcpfs-0015**** | 2.4.0 及以上 |
 * > ：CPFS通用版和CPFS智算版共用同一套API，但在参数取值和功能支持上有所区别。请根据您使用的产品类型参考相应章节。
 * - 基础操作
 *     - CPFS通用版、CPFS智算版文件系统状态为运行中时，才能创建数据流动。
 *     - 一个CPFS通用版或CPFS智算版文件系统最多允许创建 **10 个**数据流动。
 *     - 创建数据流动一般耗时 2～5 分钟，您可通过 [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) 检查数据流动创建是否完成。
 * - 权限
 *     创建数据流动时，文件存储CPFS会获取`AliyunServiceRoleForNasOssDataflow`和`AliyunServiceRoleForNasEventNotification`两个服务关联角色。更多信息，请参见[CPFS服务关联角色](https://help.aliyun.com/document_detail/185138.html)。
 * - CPFS通用版使用说明
 *      本章节适用于文件系统ID以 `cpfs-` 开头的CPFS通用版。
 *   - 计费
 *     - 创建数据流动将按照数据流动带宽计费。更多信息，请参见[CPFS通用版计费说明](https://help.aliyun.com/document_detail/111858.html)。
 *     - 使用自动更新（AutoRefresh）时，需要通过EventBridge收集源端OSS存储的对象修改事件，事件将产生费用。更多信息，请参见[EventBridge计费说明](https://help.aliyun.com/document_detail/163752.html)。
 *   - 数据流动规格
 *       - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
 *     - 创建一个数据流动，会消耗1个文件存储CPFS通用版挂载点使用的vSwitch IP地址，请您确保该vSwitch IP资源充足。
 *     - 库存查询：当设置DryRun为true时，可校验创建该规格的数据流动的资源是否满足。
 *   - Fileset
 *     - 数据流动的目的端是CPFS通用版文件系统中的Fileset。Fileset是CPFS通用版文件系统中一种新的目录树结构，是在父文件系统中的一个小型文件系统，拥有独立的inode空间和管理能力。
 *     -  创建数据流动时该Fileset必须已存在，且不能与其他Fileset嵌套。一个Fileset上只能创建一个数据流动，对应一个源端存储。
 *     - Fileset内的文件数量上限是100万，如果从OSS Bucket导入的文件数量超过上限，创建新文件会报错`no space`。
 *    > 如果Fileset中已存在数据，创建数据流动后，Fileset内的已有数据会被清空，替换为OSS端同步过来的数据。
 *   - 自动更新
 *     -  配置自动更新（AutoRefresh）后，当源端存储数据发生变化时，变化的元数据会自动同步到CPFS通用版文件系统，变化的数据会在用户访问文件时按需加载，或者启动数据流动任务加载数据。
 *     -  自动更新依赖EventBridge收集源端OSS存储的对象修改事件。需要先[开通EventBridge服务](https://help.aliyun.com/document_detail/182246.html)。
 *     -  自动更新的作用范围是prefix，由参数RefreshPath指定。一个数据流动最多可配置5个自动更新目录。
 *     -  自动更新间隔（AutoRefreshInterval）指CPFS通用版设置的自动更新时间，检查源端OSS Bucket该prefix内是否存在数据更新，如果有数据更新则启动自动更新任务。当OSS源端的对象修改事件频率超过CPFS通用版数据流动处理能力时，自动更新任务会堆积，元数据更新会延迟，数据流动的状态为`Misconfigured`，您可以提升数据流动规格，或者降低OSS修改频率来解决。
 *     -  在文件存储CPFS通用版数据流动对prefix配置自动更新时，会在用户侧创建事件总线，并创建源端OSS Bucket的prefix的事件规则。当源端OSS Bucket的prefix内发生对象修改后，会在EventBridge中产生OSS事件，由CPFS通用版数据流动处理。
 *      > 文件存储CPFS通用版在EventBridge创建的事件总线、事件规则带有`Create for cpfs auto refresh`的描述，事件总线、事件规则都不能修改或删除，否则自动更新无法正常工作。
 *   -  源端存储
 *      -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
 *      -  CPFS通用版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
 *      -  如果多个CPFS通用版的数据流动、或者同一个文件存储CPFS通用版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个文件存储CPFS通用版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
 *      -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS通用版文件系统在同一个地域。
 *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS通用版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS通用版数据流动无法访问Bucket的数据。
 * - CPFS智算版使用说明
 *      本章节适用于文件系统ID以 `bmcpfs-` 开头的CPFS智算版。
 *   -  源端存储
 *       -  源端存储仅支持OSS。数据流动的源端存储（SourceStorage）必须是OSS Bucket。
 *       -  CPFS智算版数据流动支持加密和非加密两种方式访问OSS。选择加密（SSL）方式访问OSS时，需确认OSS Bucket的传输加密支持加密访问方式。
 *       -  如果多个CPFS智算版的数据流动、或者同一个CPFS智算版的多个数据流动的源端存储是同一个OSS Bucket，为了防止多个CPFS智算版向同一个源导出数据产生数据冲突，需要该OSS Bucket开启版本控制。
 *       -  不支持跨地域的OSS数据流动，OSS Bucket必须与CPFS智算版文件系统在同一个地域。
 *      - CPFS智算版2.6.0及以上版本支持使用跨账号OSS进行数据流动的创建。
 *      - 只有在使用跨账号的OSS时，需要设置account id参数。
 *      - 使用跨账号的OSS时，需要先进行账号授权。具体授权请参考[跨账号数据流动授权](https://help.aliyun.com/document_detail/2713462.html)。
 *        > 创建数据流动前，您需要先给源端OSS Bucket设置标签（key: cpfs-dataflow, value: true），以便CPFS智算版数据流动访问该Bucket的数据。在数据流动的使用过程中，不能删除和修改该标签，否则CPFS智算版数据流动无法访问Bucket的数据。
 *   - 数据流动对文件系统的限制
 *     - 在数据流动关联的文件系统路径中，不可对非空目录执行重命名操作，否则报错Permission Denied或者目录非空。
 *      - 目录、文件名中的特殊字符需要谨慎使用，支持大小写字母、数字、感叹号（！）、短划线（-）、下划线（_）、半角句号（.）、星号（*）和半角圆括号（()）。
 *     - 不支持超长路径，数据流动支持的路径最大长度是1023字符。
 *   - 数据流动导入限制
 *     - Symlink类型的文件导入到CPFS智算版后，会转变为包含数据的普通文件，并丢失Symlink信息。
 *     - 如果OSS Bucket存在多个版本，则只复制最新的版本。
 *     - 不支持长度大于255字节的文件名或子目录名。
 *   - 数据流动导出限制
 *     - Symlink类型的文件在同步到OSS后，不会同步Symlink所指向的文件，而是会变成一个普通的无数据空白对象。
 *     - Hardlink类型的文件仅作为普通文件同步到OSS。
 *     - Socket、Device、Pipe类型的文件导出到OSS Bucket时，会变成一个普通的无数据空白对象。
 *     - 不支持长度大于1023字符的目录路径。
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
 * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
 *  - 仅支持状态为Executing（执行中）的数据流动流式任务创建子任务。
 * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
 * - 当数据流动任务类型为流式任务时，运行中状态仅代表可以创建流式导入任务或流式导出任务（并不代表导入或导出任务运行中）。
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
 * @description - 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
 *  - 仅支持状态为Executing（执行中）的数据流动流式任务创建子任务。
 * - 数据流动流式任务是异步执行的，您可通过DescribeDataFlowSubTasks查询流式任务执行状态。
 * - 当数据流动任务类型为流式任务时，运行中状态仅代表可以创建流式导入任务或流式导出任务（并不代表导入或导出任务运行中）。
 *
 * @param request CreateDataFlowSubTaskRequest
 * @return CreateDataFlowSubTaskResponse
 */
CreateDataFlowSubTaskResponse Client::createDataFlowSubTask(const CreateDataFlowSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataFlowSubTaskWithOptions(request, runtime);
}

/**
 * @summary Create a data flow task.
 *
 * @description - CPFS usage notes
 *   - Data flow is supported only on CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
 *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
 *   - You can create data flow tasks only on a data flow that is in the Running state.
 *   - Manually running a data flow task pauses the corresponding automatic data update task.
 *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS does not exceed 1,023 characters.
 * - CPFS AI-Computing Edition usage notes
 *   - Data flow is supported only on CPFS AI-Computing Edition 2.4.0 and later. You can view the version information on the file system details page in the console.
 *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
 *   - You can create data flow tasks only on a data flow that is in the Running state.
 *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS AI-Computing Edition does not exceed 1,023 characters.
 *   - CPFS AI-Computing Edition supports two task types: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
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
 * @summary Create a data flow task.
 *
 * @description - CPFS usage notes
 *   - Data flow is supported only on CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
 *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
 *   - You can create data flow tasks only on a data flow that is in the Running state.
 *   - Manually running a data flow task pauses the corresponding automatic data update task.
 *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS does not exceed 1,023 characters.
 * - CPFS AI-Computing Edition usage notes
 *   - Data flow is supported only on CPFS AI-Computing Edition 2.4.0 and later. You can view the version information on the file system details page in the console.
 *   - Data flow tasks execute asynchronously. You can query the task status by calling the [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) operation. Task duration depends on the amount of data. For large datasets, split the workload into multiple tasks.
 *   - You can create data flow tasks only on a data flow that is in the Running state.
 *   - When you create an export task, ensure that the absolute path of each file to be exported from CPFS AI-Computing Edition does not exceed 1,023 characters.
 *   - CPFS AI-Computing Edition supports two task types: batch tasks and streaming tasks. For more information, see [Task types](https://help.aliyun.com/document_detail/2845429.html).
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
 * @description - 请确保在使用该接口前，已充分了解NAS产品的计费说明和价格。更多信息，请参见[计费说明](https://help.aliyun.com/document_detail/178365.html)和[价格](https://www.aliyun.com/price/product?#/nas/detail)。
 * -  创建文件系统实例需要通过实名认证。具体操作，请参见[账号实名认证](https://help.aliyun.com/document_detail/48263.html)。
 * -  调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
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
 * @description - 请确保在使用该接口前，已充分了解NAS产品的计费说明和价格。更多信息，请参见[计费说明](https://help.aliyun.com/document_detail/178365.html)和[价格](https://www.aliyun.com/price/product?#/nas/detail)。
 * -  创建文件系统实例需要通过实名认证。具体操作，请参见[账号实名认证](https://help.aliyun.com/document_detail/48263.html)。
 * -  调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
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
 * @description - CPFS使用说明
 *   - 仅支持CPFS 2.2.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
 *   - 单个CPFS文件系统最多支持创建10个Fileset。
 *   - 父目录必须是已存在的目录。
 *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
 *   - 不支持Fileset中嵌套Fileset。即当父目录已指定为Fileset，其子目录不支持指定为Fileset。
 *   - Fileset最多支持100万个文件，如果文件数量超过此上限，添加新文件会返回`no space`错误信息。
 * - CPFS智算版使用说明
 *   - 仅支持CPFS智算版 2.7.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
 *   - 单个CPFS文件系统最多支持创建500个Fileset。
 *   - Fileset路径必须为新路径，不能为已存在路径，Fileset 路径不支持重命名，不支持路径为软链接。
 *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
 *   - Fileset路径为多层目录时，父目录必须是已存在的目录。
 *   - 不支持在 Fileset 中嵌套 Fileset，即当父目录已指定为Fileset，其子目录不支持指定为Fileset。一个 Fileset 路径只支持一个配额。
 *   - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
 *   - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
 *   - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
 *   - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
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
 * @description - CPFS使用说明
 *   - 仅支持CPFS 2.2.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
 *   - 单个CPFS文件系统最多支持创建10个Fileset。
 *   - 父目录必须是已存在的目录。
 *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
 *   - 不支持Fileset中嵌套Fileset。即当父目录已指定为Fileset，其子目录不支持指定为Fileset。
 *   - Fileset最多支持100万个文件，如果文件数量超过此上限，添加新文件会返回`no space`错误信息。
 * - CPFS智算版使用说明
 *   - 仅支持CPFS智算版 2.7.0及以上版本创建Fileset。您可以在控制台文件系统详情页面查看版本信息。
 *   - 单个CPFS文件系统最多支持创建500个Fileset。
 *   - Fileset路径必须为新路径，不能为已存在路径，Fileset 路径不支持重命名，不支持路径为软链接。
 *   - Fileset路径支持的最大深度为8层，根目录/为0层。例如，Fileset路径为/test/aaa/ccc/，则表示路径深度为3层。
 *   - Fileset路径为多层目录时，父目录必须是已存在的目录。
 *   - 不支持在 Fileset 中嵌套 Fileset，即当父目录已指定为Fileset，其子目录不支持指定为Fileset。一个 Fileset 路径只支持一个配额。
 *   - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
 *   - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
 *   - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
 *   - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
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
 * @description - 仅通用型NAS文件系统和CPFS智算版支持创建生命周期管理策略。
 * - 每个 CPFS 智算版文件系统最多创建 10 个 Auto 类型 和 100 个 OnDemand 类型的生命周期管理策略。
 * - 每个地域可以创建 20 个通用型 NAS 的生命周期管理策略。
 *
 * @param request CreateLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLifecyclePolicyResponse
 */
CreateLifecyclePolicyResponse Client::createLifecyclePolicyWithOptions(const CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyName()) {
    query["LifecyclePolicyName"] = request.getLifecyclePolicyName();
  }

  if (!!request.hasLifecyclePolicyType()) {
    query["LifecyclePolicyType"] = request.getLifecyclePolicyType();
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

  if (!!request.hasRetrieveRules()) {
    query["RetrieveRules"] = request.getRetrieveRules();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTransitRules()) {
    query["TransitRules"] = request.getTransitRules();
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
 * @description - 仅通用型NAS文件系统和CPFS智算版支持创建生命周期管理策略。
 * - 每个 CPFS 智算版文件系统最多创建 10 个 Auto 类型 和 100 个 OnDemand 类型的生命周期管理策略。
 * - 每个地域可以创建 20 个通用型 NAS 的生命周期管理策略。
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
 * @description - 在使用CreateMountTarget接口创建挂载点时部分资源的生成是异步完成的。因此在执行CreateMountTarget接口成功后，请先调用DescribeMountTargets接口查询挂载点状态，当挂载点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
 * - 调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
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
 * @description - 在使用CreateMountTarget接口创建挂载点时部分资源的生成是异步完成的。因此在执行CreateMountTarget接口成功后，请先调用DescribeMountTargets接口查询挂载点状态，当挂载点状态为**Active**后再执行挂载文件系统操作，否则可能会挂载失败。
 * - 调用此接口将自动创建操作所需的NAS服务关联角色。更多信息，请参见[管理NAS服务关联角色](https://help.aliyun.com/document_detail/208530.html)。
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
 * @description -  该接口仅适用于CPFS文件系统。
 * -  前提条件
 *   
 *    已创建协议服务。
 * - 其它
 *     - 协议服务的导出VPC网段不可与文件系统VPC网段重叠。
 *     - 一个协议服务上的多个导出VPC之间网段不可重叠。
 *     - 同一个协议服务最多可以创建10个导出目录。
 *     - 创建协议服务导出目录会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
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
 * @description -  该接口仅适用于CPFS文件系统。
 * -  前提条件
 *   
 *    已创建协议服务。
 * - 其它
 *     - 协议服务的导出VPC网段不可与文件系统VPC网段重叠。
 *     - 一个协议服务上的多个导出VPC之间网段不可重叠。
 *     - 同一个协议服务最多可以创建10个导出目录。
 *     - 创建协议服务导出目录会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * -  仅CPFS 2.3.0及以上版本支持协议服务。您可以通过调用[DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html)接口查询目标文件系统的版本号。
 * - 协议服务规格
 *   协议服务包括两种协议类型：通用型和缓存型。缓存型相比通用型，提供热点数据缓存能力。在命中缓存的情况下，缓存型协议服务的带宽可超过CPFS文件系统的带宽，达到协议服务设定的最大带宽值。
 *   
 *     -   通用型：为CPFS提供NFS协议访问能力和[目录级挂载点](https://help.aliyun.com/document_detail/427175.html)，用户无需配置POSIX客户端管理集群。该功能免费。
 *     -  缓存型：在通用型基础上提供基于LRU策略的服务端内存缓存。当数据缓存于内存中时，CPFS可提供更高的内网带宽。缓存型协议服务分为缓存1型和缓存2型两种协议服务规格，差异点为内网带宽大小和内存缓存大小。
 *      >  缓存型协议服务为收费服务，正在邀测。有关缓存型协议服务的付费方式，请参见[计费项](https://help.aliyun.com/document_detail/111858.html)。如果您有任何反馈或疑问，欢迎加入钉钉用户群（钉钉群号：31045006299）与CPFS工程师进行交流讨论。
 * - 协议类型
 *   仅支持NFSv3协议。
 * - 其它
 *     - 一个CPFS文件系统只能创建一个协议服务。
 *     - 创建协议服务会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * -  仅CPFS 2.3.0及以上版本支持协议服务。您可以通过调用[DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html)接口查询目标文件系统的版本号。
 * - 协议服务规格
 *   协议服务包括两种协议类型：通用型和缓存型。缓存型相比通用型，提供热点数据缓存能力。在命中缓存的情况下，缓存型协议服务的带宽可超过CPFS文件系统的带宽，达到协议服务设定的最大带宽值。
 *   
 *     -   通用型：为CPFS提供NFS协议访问能力和[目录级挂载点](https://help.aliyun.com/document_detail/427175.html)，用户无需配置POSIX客户端管理集群。该功能免费。
 *     -  缓存型：在通用型基础上提供基于LRU策略的服务端内存缓存。当数据缓存于内存中时，CPFS可提供更高的内网带宽。缓存型协议服务分为缓存1型和缓存2型两种协议服务规格，差异点为内网带宽大小和内存缓存大小。
 *      >  缓存型协议服务为收费服务，正在邀测。有关缓存型协议服务的付费方式，请参见[计费项](https://help.aliyun.com/document_detail/111858.html)。如果您有任何反馈或疑问，欢迎加入钉钉用户群（钉钉群号：31045006299）与CPFS工程师进行交流讨论。
 * - 协议类型
 *   仅支持NFSv3协议。
 * - 其它
 *     - 一个CPFS文件系统只能创建一个协议服务。
 *     - 创建协议服务会消耗指定vSwitch上的IP地址（最多消耗32个IP地址），请确保目标vSwitch IP资源充足。
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
 * @description - 仅通用型NAS文件系统支持该功能。
 * - 彻底删除目录时，目录中的内容会被递归清理。
 * - 单个文件系统一次只能执行一个彻底删除任务。正在彻底删除文件或目录时，无法发起新的恢复或清理任务。
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
 * @description - 仅通用型NAS文件系统支持该功能。
 * - 彻底删除目录时，目录中的内容会被递归清理。
 * - 单个文件系统一次只能执行一个彻底删除任务。正在彻底删除文件或目录时，无法发起新的恢复或清理任务。
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
 * @description - 仅通用型NAS文件系统支持该功能。
 * - 单个文件系统一次只能执行一个文件恢复或清理任务。正在恢复文件时，无法发起新的文件恢复或清理任务。
 * - 单个恢复任务只能恢复一个文件或目录，恢复指定目录会递归恢复目录下的所有文件。
 * - 文件被恢复后会进行数据整理，数据整理期间读请求性能稍有下降。
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
 * @description - 仅通用型NAS文件系统支持该功能。
 * - 单个文件系统一次只能执行一个文件恢复或清理任务。正在恢复文件时，无法发起新的文件恢复或清理任务。
 * - 单个恢复任务只能恢复一个文件或目录，恢复指定目录会递归恢复目录下的所有文件。
 * - 文件被恢复后会进行数据整理，数据整理期间读请求性能稍有下降。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持删除。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持删除。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持删除。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持删除。
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
 * @description - 仅CPFS 2.2.0及以上版本、智算CPFS 2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持删除`Running`、`Stopped`状态的数据流动。
 * - 删除后，数据流动相关的资源会被释放，且无法恢复。如需数据流动，请您重新创建。
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
 * @description - 仅CPFS 2.2.0及以上版本、智算CPFS 2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持删除`Running`、`Stopped`状态的数据流动。
 * - 删除后，数据流动相关的资源会被释放，且无法恢复。如需数据流动，请您重新创建。
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
 * @description - 仅当文件系统的挂载点数目为0时，支持删除文件系统实例。
 * - 当文件系统未创建生命周期策略时，支持删除文件系统实例。
 * - 文件系统实例一旦删除，数据将不可恢复，请谨慎操作。
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
 * @description - 仅当文件系统的挂载点数目为0时，支持删除文件系统实例。
 * - 当文件系统未创建生命周期策略时，支持删除文件系统实例。
 * - 文件系统实例一旦删除，数据将不可恢复，请谨慎操作。
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
 * @description - This operation is supported only for CPFS file systems of version 2.2.0 or later and CPFS for AI and HPC file systems of version 2.7.0 or later. Deleting a fileset permanently removes all data in the associated directory. Use this operation with caution.
 * - If deletion protection is enabled, you must disable it before you can delete the fileset.
 * - When you delete a fileset from a CPFS file system, the disk space is released immediately. When you delete a fileset from a CPFS for AI and HPC file system, the disk space is released gradually.
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
 * @description - This operation is supported only for CPFS file systems of version 2.2.0 or later and CPFS for AI and HPC file systems of version 2.7.0 or later. Deleting a fileset permanently removes all data in the associated directory. Use this operation with caution.
 * - If deletion protection is enabled, you must disable it before you can delete the fileset.
 * - When you delete a fileset from a CPFS file system, the disk space is released immediately. When you delete a fileset from a CPFS for AI and HPC file system, the disk space is released gradually.
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
 * @description # 说明
 * 本接口只支持CPFS并行文件系统。
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
 * @description # 说明
 * 本接口只支持CPFS并行文件系统。
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
 * @description 仅通用型NAS文件系统和CPFS智算版支持该功能。
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

  if (!!request.hasLifecyclePolicyId()) {
    query["LifecyclePolicyId"] = request.getLifecyclePolicyId();
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
 * @description 仅通用型NAS文件系统和CPFS智算版支持该功能。
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
 * @description 删除挂载点后，无法恢复，请谨慎操作。
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
 * @description 删除挂载点后，无法恢复，请谨慎操作。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 删除协议服务时，会同时删除协议服务中的导出目录。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 删除协议服务时，会同时删除协议服务中的导出目录。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
 *
 * @param request DescribeAccessPointRequest
 * @return DescribeAccessPointResponse
 */
DescribeAccessPointResponse Client::describeAccessPoint(const DescribeAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessPointWithOptions(request, runtime);
}

/**
 * @summary Queries a list of access points.
 *
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @summary Queries a list of access points.
 *
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
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
 * @description 仅CPFS智算版2.6.0 及以上版本支持。您可以在控制台文件系统详情页面查看版本信息。
 *
 * @param request DescribeDataFlowSubTasksRequest
 * @return DescribeDataFlowSubTasksResponse
 */
DescribeDataFlowSubTasksResponse Client::describeDataFlowSubTasks(const DescribeDataFlowSubTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowSubTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves data flow task details.
 *
 * @description Querying data flow tasks is supported only on CPFS 2.2.0 or later and CPFS AI Computing Edition 2.4.0 or later. You can find the version information on the file system details page in the console.
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
 * @summary Retrieves data flow task details.
 *
 * @description Querying data flow tasks is supported only on CPFS 2.2.0 or later and CPFS AI Computing Edition 2.4.0 or later. You can find the version information on the file system details page in the console.
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
 * @description - 仅CPFS 2.2.0及以上版本、CPFS智算版2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 筛选键（Filters）中，FsetIds、DataFlowlds、SourceStorage、ThroughputList、Status需要做全字匹配，FileSystemPath、Description、SourceStoragePath支持模糊匹配。
 * - 支持组合查询。
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
 * @description - 仅CPFS 2.2.0及以上版本、CPFS智算版2.4.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 筛选键（Filters）中，FsetIds、DataFlowlds、SourceStorage、ThroughputList、Status需要做全字匹配，FileSystemPath、Description、SourceStoragePath支持模糊匹配。
 * - 支持组合查询。
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
 * @summary This operation retrieves information about file systems.
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
 * @summary This operation retrieves information about file systems.
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
 * @description - 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
 * - 筛选键（Filters）中，FsetIds需要做全字匹配，FileSystemPath、Description支持模糊匹配。
 * - 支持组合查询。
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
 * @description - 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
 * - 筛选键（Filters）中，FsetIds需要做全字匹配，FileSystemPath、Description支持模糊匹配。
 * - 支持组合查询。
 *
 * @param request DescribeFilesetsRequest
 * @return DescribeFilesetsResponse
 */
DescribeFilesetsResponse Client::describeFilesets(const DescribeFilesetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFilesetsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of HpnZones for a file system. Access performance is optimal when compute nodes are located in one of the associated HpnZones.
 *
 * @description - 仅支持CPFS智算版文件系统。
 * - 此接口为批量接口，每次最多允许查询 20 个文件系统。
 *
 * @param tmpReq DescribeFilesystemsAssociatedHpnZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFilesystemsAssociatedHpnZonesResponse
 */
DescribeFilesystemsAssociatedHpnZonesResponse Client::describeFilesystemsAssociatedHpnZonesWithOptions(const DescribeFilesystemsAssociatedHpnZonesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeFilesystemsAssociatedHpnZonesShrinkRequest request = DescribeFilesystemsAssociatedHpnZonesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilesystems()) {
    request.setFilesystemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilesystems(), "Filesystems", "json"));
  }

  json query = {};
  if (!!request.hasFilesystemsShrink()) {
    query["Filesystems"] = request.getFilesystemsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFilesystemsAssociatedHpnZones"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFilesystemsAssociatedHpnZonesResponse>();
}

/**
 * @summary Retrieves the list of HpnZones for a file system. Access performance is optimal when compute nodes are located in one of the associated HpnZones.
 *
 * @description - 仅支持CPFS智算版文件系统。
 * - 此接口为批量接口，每次最多允许查询 20 个文件系统。
 *
 * @param request DescribeFilesystemsAssociatedHpnZonesRequest
 * @return DescribeFilesystemsAssociatedHpnZonesResponse
 */
DescribeFilesystemsAssociatedHpnZonesResponse Client::describeFilesystemsAssociatedHpnZones(const DescribeFilesystemsAssociatedHpnZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFilesystemsAssociatedHpnZonesWithOptions(request, runtime);
}

/**
 * @summary Queries information about virtual storage channels associated with a file system.
 *
 * @description - 仅CPFS智算版支持该功能。
 * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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

  if (!!request.hasRoleChain()) {
    query["RoleChain"] = request.getRoleChain();
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
 * @description - 仅CPFS智算版支持该功能。
 * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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
 * @description 仅通用型NAS文件系统和 CPFS 智算版支持该功能。
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
 * @description 仅通用型NAS文件系统和 CPFS 智算版支持该功能。
 *
 * @param request DescribeLifecyclePoliciesRequest
 * @return DescribeLifecyclePoliciesResponse
 */
DescribeLifecyclePoliciesResponse Client::describeLifecyclePolicies(const DescribeLifecyclePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLifecyclePoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the execution logs of a lifecycle policy, returning up to 1,000 entries from the last 90 days. This feature is only available for CPFS AI Computing Edition.
 *
 * @description Queries the execution logs of a lifecycle policy. You can query up to 1,000 log entries from the last 90 days. Only CPFS (AI Computing Edition) supports this operation.
 *
 * @param request DescribeLifecyclePolicyLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLifecyclePolicyLogsResponse
 */
DescribeLifecyclePolicyLogsResponse Client::describeLifecyclePolicyLogsWithOptions(const DescribeLifecyclePolicyLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyId()) {
    query["LifecyclePolicyId"] = request.getLifecyclePolicyId();
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
    {"action" , "DescribeLifecyclePolicyLogs"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLifecyclePolicyLogsResponse>();
}

/**
 * @summary Queries the execution logs of a lifecycle policy, returning up to 1,000 entries from the last 90 days. This feature is only available for CPFS AI Computing Edition.
 *
 * @description Queries the execution logs of a lifecycle policy. You can query up to 1,000 log entries from the last 90 days. Only CPFS (AI Computing Edition) supports this operation.
 *
 * @param request DescribeLifecyclePolicyLogsRequest
 * @return DescribeLifecyclePolicyLogsResponse
 */
DescribeLifecyclePolicyLogsResponse Client::describeLifecyclePolicyLogs(const DescribeLifecyclePolicyLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLifecyclePolicyLogsWithOptions(request, runtime);
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
 * @summary Retrieves information about mount targets.
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
 * @summary Retrieves information about mount targets.
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
 * @description - 仅通用型NAS支持该接口。
 * - 客户端列表显示近一分钟对文件系统有读写访问的客户端IP，部分已挂载而没有访问文件系统的客户端IP可能不在此列表中显示。
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
 * @description - 仅通用型NAS支持该接口。
 * - 客户端列表显示近一分钟对文件系统有读写访问的客户端IP，部分已挂载而没有访问文件系统的客户端IP可能不在此列表中显示。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description - 仅CPFS智算版支持该功能。
 * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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

  if (!!request.hasRoleChain()) {
    query["RoleChain"] = request.getRoleChain();
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
 * @description - 仅CPFS智算版支持该功能。
 * - 支持批量执行，批量执行情况下，目前仅支持1个VscId关联到多个FileSystemId，即ResourceIds.VscId需相等。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @description 仅通用型NAS NFS协议文件系统支持该功能。
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
 * @summary Checks if a specified directory contains infrequent access or archive storage files, or if a specified file is an infrequent access or archive storage file.
 *
 * @description This operation is available only for general-purpose NAS file systems.
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
 * @summary Checks if a specified directory contains infrequent access or archive storage files, or if a specified file is an infrequent access or archive storage file.
 *
 * @description This operation is available only for general-purpose NAS file systems.
 *
 * @param request GetDirectoryOrFilePropertiesRequest
 * @return GetDirectoryOrFilePropertiesResponse
 */
GetDirectoryOrFilePropertiesResponse Client::getDirectoryOrFileProperties(const GetDirectoryOrFilePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryOrFilePropertiesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the created fileset.
 *
 * @description 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
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
 * @summary Queries the information about the created fileset.
 *
 * @description 仅CPFS 2.2.0和CPFS智算版2.7.0及以上版本支持Fileset。您可以在控制台文件系统详情页面查看版本信息。
 *
 * @param request GetFilesetRequest
 * @return GetFilesetResponse
 */
GetFilesetResponse Client::getFileset(const GetFilesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFilesetWithOptions(request, runtime);
}

/**
 * @summary Query the export directory information of the protocol service
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
 * @summary Query the export directory information of the protocol service
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
 * @summary Lists Infrequent Access files and the subdirectories that contain them from a specified directory on a General-purpose NAS file system.
 *
 * @description Only general-purpose NAS file systems support this feature.
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
 * @summary Lists Infrequent Access files and the subdirectories that contain them from a specified directory on a General-purpose NAS file system.
 *
 * @description Only general-purpose NAS file systems support this feature.
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持修改。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）不支持修改。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持修改。
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
 * @description 默认权限组（DEFAULT_VPC_GROUP_NAME）中的规则不支持修改。
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
 * @description - CPFS 2.2.0及以上版本、CPFS智算版 2.4.0及以上版本支持数据流动。
 * - 仅支持状态为`Running（正常）`状态的数据流动修改属性。
 * - 修改数据流动一般耗时2~5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改数据流动的状态。
 * - CPFS数据流动规格：
 *     - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
 *     - 库存查询：当设置DryRun为true时，可校验修改该规格的数据流动的资源是否满足。
 * - CPFS计费
 *   修改数据流动带宽（Throughput）涉及数据流动带宽计费，建议您提前了解CPFS的计费方式。更多详情，请参见[CPFS计费说明](https://help.aliyun.com/document_detail/111858.html)。
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
 * @description - CPFS 2.2.0及以上版本、CPFS智算版 2.4.0及以上版本支持数据流动。
 * - 仅支持状态为`Running（正常）`状态的数据流动修改属性。
 * - 修改数据流动一般耗时2~5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改数据流动的状态。
 * - CPFS数据流动规格：
 *     - 数据流动带宽（Throughput）支持600 MB/s、1200 MB/s和1500 MB/s三种规格。数据流动带宽是指该数据流动进行导入或导出数据时能达到的最大传输带宽。
 *     - 库存查询：当设置DryRun为true时，可校验修改该规格的数据流动的资源是否满足。
 * - CPFS计费
 *   修改数据流动带宽（Throughput）涉及数据流动带宽计费，建议您提前了解CPFS的计费方式。更多详情，请参见[CPFS计费说明](https://help.aliyun.com/document_detail/111858.html)。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持修改`Running（正常`）、`Stopped（停止）`状态数据流动的自动更新配置。
 * - 修改自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改自动更新任务的状态。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 仅支持修改`Running（正常`）、`Stopped（停止）`状态数据流动的自动更新配置。
 * - 修改自动更新配置一般耗时2～5分钟，您可以通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询修改自动更新任务的状态。
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
 * @description 仅支持CPFS 2.2.0和CPFS智算版2.7.0及以上版本修改Fileset信息。
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
 * @description 仅支持CPFS 2.2.0和CPFS智算版2.7.0及以上版本修改Fileset信息。
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
 * @description 仅通用型NAS文件系统支持该功能。
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

  if (!!request.hasLifecyclePolicyId()) {
    query["LifecyclePolicyId"] = request.getLifecyclePolicyId();
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
 * @description 仅通用型NAS文件系统支持该功能。
 *
 * @param request ModifyLifecyclePolicyRequest
 * @return ModifyLifecyclePolicyResponse
 */
ModifyLifecyclePolicyResponse Client::modifyLifecyclePolicy(const ModifyLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the properties of a mount target.
 *
 * @description This operation applies only to mount targets on General-purpose NAS and Extreme NAS file systems.
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

  if (!!request.hasAccessPointAccessOnly()) {
    query["AccessPointAccessOnly"] = request.getAccessPointAccessOnly();
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
 * @summary Modifies the properties of a mount target.
 *
 * @description This operation applies only to mount targets on General-purpose NAS and Extreme NAS file systems.
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @description 该接口仅适用于CPFS文件系统。
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
 * @summary Activates the NAS service.
 *
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
 * @summary Activates the NAS service.
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
 * @description - 仅CPFS智算版2.7.0及以上版本支持为文件集设置配额。
 * - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
 * - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
 * - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
 * - 容量限制和文件数限制至少填写其中一项。
 * - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
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
 * @description - 仅CPFS智算版2.7.0及以上版本支持为文件集设置配额。
 * - Fileset容量配额，最小起步10 GiB，扩容单位为1 GiB。
 * - Fileset最多支持100亿个文件或目录，最小起步10000，扩容单位为1。
 * - 修改目录配额时，设置的配额容量或文件数必须高于已使用容量或文件数。
 * - 容量限制和文件数限制至少填写其中一项。
 * - 配额的统计有15分钟的延迟，当前的实际使用量15分钟之后才会生效。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 只能启动`Stopped（停止）`状态的数据流动。
 * - 当DryRun为`true`时，可校验启动该规格的数据流动的资源是否充足。如果库存资源不足，数据流动则无法启动。
 * - 启动数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询数据流动状态。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 只能启动`Stopped（停止）`状态的数据流动。
 * - 当DryRun为`true`时，可校验启动该规格的数据流动的资源是否充足。如果库存资源不足，数据流动则无法启动。
 * - 启动数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html)查询数据流动状态。
 *
 * @param request StartDataFlowRequest
 * @return StartDataFlowResponse
 */
StartDataFlowResponse Client::startDataFlow(const StartDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDataFlowWithOptions(request, runtime);
}

/**
 * @summary Starts the execution of a lifecycle policy.
 *
 * @description This operation is supported only when the `LifecyclePolicyType` of a lifecycle policy is set to `OnDemand` for a CPFS AI-Computing Edition file system.
 *
 * @param request StartLifecyclePolicyExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartLifecyclePolicyExecutionResponse
 */
StartLifecyclePolicyExecutionResponse Client::startLifecyclePolicyExecutionWithOptions(const StartLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyId()) {
    query["LifecyclePolicyId"] = request.getLifecyclePolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartLifecyclePolicyExecution"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartLifecyclePolicyExecutionResponse>();
}

/**
 * @summary Starts the execution of a lifecycle policy.
 *
 * @description This operation is supported only when the `LifecyclePolicyType` of a lifecycle policy is set to `OnDemand` for a CPFS AI-Computing Edition file system.
 *
 * @param request StartLifecyclePolicyExecutionRequest
 * @return StartLifecyclePolicyExecutionResponse
 */
StartLifecyclePolicyExecutionResponse Client::startLifecyclePolicyExecution(const StartLifecyclePolicyExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startLifecyclePolicyExecutionWithOptions(request, runtime);
}

/**
 * @summary Disables a dataflow.
 *
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 只能停用`Running（正常）`状态的数据流动。
 * - 停用后，不可在数据流动上创建数据流动任务。如果配置了自动更新，源端发生的数据更新也不会同步到CPFS上。
 * - 停用后，由于资源被回收，数据流动带宽将不再计费，但重新启动数据流动可能因为库存不足导致启动失败。
 * - 停用数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html)查询数据流动状态。
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
 * @description - 该接口仅适用于CPFS文件系统。
 * - 仅CPFS 2.2.0及以上版本支持数据流动。您可以在控制台文件系统详情页面查看版本信息。
 * - 只能停用`Running（正常）`状态的数据流动。
 * - 停用后，不可在数据流动上创建数据流动任务。如果配置了自动更新，源端发生的数据更新也不会同步到CPFS上。
 * - 停用后，由于资源被回收，数据流动带宽将不再计费，但重新启动数据流动可能因为库存不足导致启动失败。
 * - 停用数据流动一般耗时2～5分钟，您可通过[DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html)查询数据流动状态。
 *
 * @param request StopDataFlowRequest
 * @return StopDataFlowResponse
 */
StopDataFlowResponse Client::stopDataFlow(const StopDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDataFlowWithOptions(request, runtime);
}

/**
 * @summary Stops the execution of a lifecycle policy.
 *
 * @description This operation applies only when the LifecyclePolicyType parameter of a lifecycle management policy for a CPFS file system is set to OnDemand.
 *
 * @param request StopLifecyclePolicyExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopLifecyclePolicyExecutionResponse
 */
StopLifecyclePolicyExecutionResponse Client::stopLifecyclePolicyExecutionWithOptions(const StopLifecyclePolicyExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyId()) {
    query["LifecyclePolicyId"] = request.getLifecyclePolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopLifecyclePolicyExecution"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopLifecyclePolicyExecutionResponse>();
}

/**
 * @summary Stops the execution of a lifecycle policy.
 *
 * @description This operation applies only when the LifecyclePolicyType parameter of a lifecycle management policy for a CPFS file system is set to OnDemand.
 *
 * @param request StopLifecyclePolicyExecutionRequest
 * @return StopLifecyclePolicyExecutionResponse
 */
StopLifecyclePolicyExecutionResponse Client::stopLifecyclePolicyExecution(const StopLifecyclePolicyExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLifecyclePolicyExecutionWithOptions(request, runtime);
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
 * @summary Updates the rules of a lifecycle policy. This operation is supported only for CPFS for AI file systems. The `UpdateLifecyclePolicy` operation overwrites the entire policy. Omitting an optional parameter deletes its corresponding configuration. To add a rule to an existing policy, call the `DescribeLifecyclePolicies` operation to retrieve the current policy, append the new rule, and then call `UpdateLifecyclePolicy` with the updated configuration.
 *
 * @param request UpdateLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLifecyclePolicyResponse
 */
UpdateLifecyclePolicyResponse Client::updateLifecyclePolicyWithOptions(const UpdateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasLifecyclePolicyId()) {
    query["LifecyclePolicyId"] = request.getLifecyclePolicyId();
  }

  if (!!request.hasPaths()) {
    query["Paths"] = request.getPaths();
  }

  if (!!request.hasRetrieveRules()) {
    query["RetrieveRules"] = request.getRetrieveRules();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTransitRules()) {
    query["TransitRules"] = request.getTransitRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLifecyclePolicy"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLifecyclePolicyResponse>();
}

/**
 * @summary Updates the rules of a lifecycle policy. This operation is supported only for CPFS for AI file systems. The `UpdateLifecyclePolicy` operation overwrites the entire policy. Omitting an optional parameter deletes its corresponding configuration. To add a rule to an existing policy, call the `DescribeLifecyclePolicies` operation to retrieve the current policy, append the new rule, and then call `UpdateLifecyclePolicy` with the updated configuration.
 *
 * @param request UpdateLifecyclePolicyRequest
 * @return UpdateLifecyclePolicyResponse
 */
UpdateLifecyclePolicyResponse Client::updateLifecyclePolicy(const UpdateLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLifecyclePolicyWithOptions(request, runtime);
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
 * @description - 仅支持极速型NAS文件系统和CPFS文件系统扩容。
 * - 通用型NAS按需自动扩容，无须使用本API。
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
 * @description - 仅支持极速型NAS文件系统和CPFS文件系统扩容。
 * - 通用型NAS按需自动扩容，无须使用本API。
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