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
    {"rus-west-1-pop" , "nas.aliyuncs.com"},
    {"us-west-1" , "nas.us-west-1.aliyuncs.com"},
    {"us-east-1" , "nas.us-east-1.aliyuncs.com"},
    {"me-east-1" , "nas.me-east-1.aliyuncs.com"},
    {"me-central-1" , "nas.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "nas.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "nas.eu-central-1.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "nas.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "nas.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "nas.cn-wulanchabu.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "nas.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "nas.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "nas.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "nas.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "nas.cn-qingdao.aliyuncs.com"},
    {"cn-huhehaote" , "nas.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "nas.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan" , "nas.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou" , "nas.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "nas.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "nas.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "nas.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "nas.cn-beijing.aliyuncs.com"},
    {"ap-southeast-7" , "nas.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "nas.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "nas.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "nas.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-1" , "nas.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "nas.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "nas.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "nas.ap-northeast-1.aliyuncs.com"}
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
 * @summary Configures automatic updates for a specified data flow.
 *
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * - You can add auto-refresh configurations only for data flows in the `Running` state.
 * - You can add up to five auto-refresh configurations for a data flow.
 * - It takes 2 to 5 minutes to create an auto-refresh configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
 * - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. [Activate EventBridge](https://help.aliyun.com/document_detail/182246.html) before you proceed.
 *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, auto-refresh cannot work properly.
 * - Auto-refresh targets a prefix specified by the RefreshPath parameter. When you configure auto-refresh for a prefix in a CPFS data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When objects within the prefix of the source OSS bucket are modified, OSS events are generated in EventBridge and processed by the CPFS data flow.
 * - After you configure auto-refresh (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow node to load data.
 * - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist in the prefix of the source OSS bucket. If data updates exist, an auto-refresh node is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capacity of the CPFS data flow, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to Misconfigured. To resolve this issue, upgrade the data stream specifications or reduce the modification frequency in OSS.
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
 * @summary Configures automatic updates for a specified data flow.
 *
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * - You can add auto-refresh configurations only for data flows in the `Running` state.
 * - You can add up to five auto-refresh configurations for a data flow.
 * - It takes 2 to 5 minutes to create an auto-refresh configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
 * - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. [Activate EventBridge](https://help.aliyun.com/document_detail/182246.html) before you proceed.
 *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, auto-refresh cannot work properly.
 * - Auto-refresh targets a prefix specified by the RefreshPath parameter. When you configure auto-refresh for a prefix in a CPFS data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When objects within the prefix of the source OSS bucket are modified, OSS events are generated in EventBridge and processed by the CPFS data flow.
 * - After you configure auto-refresh (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow node to load data.
 * - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist in the prefix of the source OSS bucket. If data updates exist, an auto-refresh node is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capacity of the CPFS data flow, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to Misconfigured. To resolve this issue, upgrade the data stream specifications or reduce the modification frequency in OSS.
 *
 * @param request ApplyDataFlowAutoRefreshRequest
 * @return ApplyDataFlowAutoRefreshResponse
 */
ApplyDataFlowAutoRefreshResponse Client::applyDataFlowAutoRefresh(const ApplyDataFlowAutoRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyDataFlowAutoRefreshWithOptions(request, runtime);
}

/**
 * @summary Associates a Virtual Storage Channel (VSC) device with a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple file system IDs (FileSystemId). This means the ResourceIds.VscId values must be the same.
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
 * @summary Associates a Virtual Storage Channel (VSC) device with a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple file system IDs (FileSystemId). This means the ResourceIds.VscId values must be the same.
 *
 * @param request AttachVscToFilesystemsRequest
 * @return AttachVscToFilesystemsResponse
 */
AttachVscToFilesystemsResponse Client::attachVscToFilesystems(const AttachVscToFilesystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachVscToFilesystemsWithOptions(request, runtime);
}

/**
 * @summary Cancels the automatic snapshot policy that is created for a file system.
 *
 * @description <props="china">.
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * .
 * <props="intl">.
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * .
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
 * @summary Cancels the automatic snapshot policy that is created for a file system.
 *
 * @description <props="china">.
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * .
 * <props="intl">.
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * .
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
 * @summary Cancels a directory quota for a file system.
 *
 * @description Only General-purpose NAS NFS file systems support the directory quota feature.
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
 * @summary Cancels a directory quota for a file system.
 *
 * @description Only General-purpose NAS NFS file systems support the directory quota feature.
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
 * @summary Changes the resource group to which a file system instance belongs.
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
 * @summary Changes the resource group to which a file system instance belongs.
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
 * @description - You can create up to 20 permission groups in a single region within an Alibaba Cloud account.
 * - A permission group supports up to 300 rules.
 * - Only permission groups of the VPC network type can be created.
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
 * @description - You can create up to 20 permission groups in a single region within an Alibaba Cloud account.
 * - A permission group supports up to 300 rules.
 * - Only permission groups of the VPC network type can be created.
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
 * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount operation may fail.
 * - Only General-purpose NAS NFS file systems support this feature.
 * - If you enable the RAM policy (EnabledRam), configure the corresponding RAM permissions. For more information, see [Manage access points](https://help.aliyun.com/document_detail/2545998.html).
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

  if (!!request.hasAgenticSpaceId()) {
    query["AgenticSpaceId"] = request.getAgenticSpaceId();
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
 * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount operation may fail.
 * - Only General-purpose NAS NFS file systems support this feature.
 * - If you enable the RAM policy (EnabledRam), configure the corresponding RAM permissions. For more information, see [Manage access points](https://help.aliyun.com/document_detail/2545998.html).
 *
 * @param request CreateAccessPointRequest
 * @return CreateAccessPointResponse
 */
CreateAccessPointResponse Client::createAccessPoint(const CreateAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessPointWithOptions(request, runtime);
}

/**
 * @summary Creates a permission rule for a permission group.
 *
 * @description A maximum of 300 rules can be added to a permission group.
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
 * @summary Creates a permission rule for a permission group.
 *
 * @description A maximum of 300 rules can be added to a permission group.
 *
 * @param request CreateAccessRuleRequest
 * @return CreateAccessRuleResponse
 */
CreateAccessRuleResponse Client::createAccessRule(const CreateAccessRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an Agentic space.
 *
 * @description Applicable to agentic-type file systems.
 *
 * @param request CreateAgenticSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgenticSpaceResponse
 */
CreateAgenticSpaceResponse Client::createAgenticSpaceWithOptions(const CreateAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAzone()) {
    query["Azone"] = request.getAzone();
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

  if (!!request.hasQuota()) {
    query["Quota"] = request.getQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgenticSpace"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgenticSpaceResponse>();
}

/**
 * @summary Creates an Agentic space.
 *
 * @description Applicable to agentic-type file systems.
 *
 * @param request CreateAgenticSpaceRequest
 * @return CreateAgenticSpaceResponse
 */
CreateAgenticSpaceResponse Client::createAgenticSpace(const CreateAgenticSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgenticSpaceWithOptions(request, runtime);
}

/**
 * @summary Creates an automatic snapshot policy.
 *
 * @description <props="china">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS supports this feature.
 * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
 * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 * .
 * <props="intl">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS supports this feature.
 * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
 * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 * .
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
 * @description <props="china">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS supports this feature.
 * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
 * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 * .
 * <props="intl">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS supports this feature.
 * - You can create a maximum of 100 automatic snapshot policies per Alibaba Cloud account in each region.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as automatic snapshot time points. Because the file system contains a large amount of data, snapshot creation starts at 09:00 and completes at 10:20, taking 80 minutes. The system skips the 10:00 time point and creates the next automatic snapshot at 11:00.
 * - Each file system supports a maximum of 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the change takes effect only for new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is complete before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, distinguishing it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` represents the year, `M` represents the month, and `d` represents the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 * .
 *
 * @param request CreateAutoSnapshotPolicyRequest
 * @return CreateAutoSnapshotPolicyResponse
 */
CreateAutoSnapshotPolicyResponse Client::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary 用于智算cpfs创建接入点
 *
 * @description 创建 CPFS 智算版 AccessPoint
 *
 * @param request CreateCpfsAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCpfsAccessPointResponse
 */
CreateCpfsAccessPointResponse Client::createCpfsAccessPointWithOptions(const CreateCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRootDirectory()) {
    query["RootDirectory"] = request.getRootDirectory();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCpfsAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCpfsAccessPointResponse>();
}

/**
 * @summary 用于智算cpfs创建接入点
 *
 * @description 创建 CPFS 智算版 AccessPoint
 *
 * @param request CreateCpfsAccessPointRequest
 * @return CreateCpfsAccessPointResponse
 */
CreateCpfsAccessPointResponse Client::createCpfsAccessPoint(const CreateCpfsAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCpfsAccessPointWithOptions(request, runtime);
}

/**
 * @summary Creates a data flow between a CPFS General-purpose or CPFS for Lingjun file system and source storage.
 *
 * @description - This operation applies to the following products:
 * | Product | File system ID format | Minimum version that supports data flows |
 * |------|----------------|------------------------|
 * | **CPFS General-purpose** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 and later |
 * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 and later |
 * > CPFS General-purpose and CPFS for Lingjun share the same set of API operations, but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
 * - Basic operations
 *     - You can create a data flow only when the CPFS General-purpose or CPFS for Lingjun file system is in the Running state.
 *     - A maximum of **10** data flows can be created for a single CPFS General-purpose or CPFS for Lingjun file system.
 *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
 * - Permissions.
 *     When you create a data flow, Cloud Parallel File Storage associates the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
 * - CPFS General-purpose usage notes.
 *      This section applies to CPFS General-purpose file systems whose IDs start with `cpfs-`.
 *   - Billing
 *     - Creating a data flow incurs charges based on the data flow bandwidth. For more information, see [CPFS General-purpose billing](https://help.aliyun.com/document_detail/111858.html).
 *     - When you use auto-refresh (AutoRefresh), EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
 *   - Data flow specifications
 *       - The data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data flow bandwidth refers to the maximum transfer bandwidth that the data flow can achieve during data import or export.
 *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage General-purpose mount target. Make sure that sufficient vSwitch IP resources are available.
 *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to create a data flow of the specified specification are available.
 *   - Fileset
 *     - The destination of a data flow is a Fileset in the CPFS General-purpose file system. A Fileset is a new directory tree structure in the CPFS General-purpose file system. It is a small file system within the parent file system that has an independent inode space and management capability.
 *     - The Fileset must already exist when you create a data flow, and it cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
 *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
 *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
 *   - Auto-refresh
 *     - After auto-refresh (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage General-purpose file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow task to load data.
 *     - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 auto-refresh folders can be configured for a data flow.
 *     - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which Cloud Parallel File Storage General-purpose checks whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage General-purpose data flow, automatic synchronization tasks accumulate, metadata updates are delayed, and the data flow status changes to `Misconfigured`. You can resolve this issue by upgrading the data flow specification or reducing the OSS modification frequency.
 *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage General-purpose data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage General-purpose data flow.
 *      > The event bus and event rules created by Cloud Parallel File Storage General-purpose in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, auto-refresh does not work properly. The data flow status changes to Normal only when auto-refresh is working properly.
 *   - Source storage
 *      - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
 *      - Cloud Parallel File Storage General-purpose data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, confirm that the encryption in transit settings of the OSS bucket support encrypted access.
 *      - If data flows of multiple Cloud Parallel File Storage General-purpose file systems, or multiple data flows of the same Cloud Parallel File Storage General-purpose file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage General-purpose file systems export data to the same source. This procedure is required to avoid conflicts during the process.
 *      - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage General-purpose file system.
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage General-purpose data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the Cloud Parallel File Storage General-purpose data flow cannot access the data in the bucket.
 * - CPFS for Lingjun usage notes.
 *      This section applies to CPFS for Lingjun file systems whose IDs start with `bmcpfs-`.
 *   - Source storage
 *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
 *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
 *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
 *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
 *      - CPFS for Lingjun 2.6.0 and later support creating data flows with cross-account OSS.
 *      - The account ID parameter is required only when you use cross-account OSS.
 *      - When you use cross-account OSS, authorize the account first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
 *   - Data flow restrictions on file systems.
 *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
 *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
 *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
 *   - Data flow import restrictions.
 *     - After symlink files are imported to CPFS for Lingjun, they are converted to regular files that contain data, and the symlink information is lost.
 *     - If the OSS bucket has multiple versions, only the latest version is copied.
 *     - File names or subdirectory names longer than 255 bytes are not supported.
 *   - Data flow export restrictions
 *     - After symlink files are synchronized to OSS, the files pointed to by the symlinks are not synchronized. Instead, the symlinks become regular empty objects with no data.
 *     - Hardlink files are synchronized to OSS as regular files only.
 *     - Socket, Device, and Pipe files become regular empty objects with no data when exported to an OSS bucket.
 *     - Directory paths longer than 1023 characters are not supported.
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
 * @summary Creates a data flow between a CPFS General-purpose or CPFS for Lingjun file system and source storage.
 *
 * @description - This operation applies to the following products:
 * | Product | File system ID format | Minimum version that supports data flows |
 * |------|----------------|------------------------|
 * | **CPFS General-purpose** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 and later |
 * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 and later |
 * > CPFS General-purpose and CPFS for Lingjun share the same set of API operations, but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
 * - Basic operations
 *     - You can create a data flow only when the CPFS General-purpose or CPFS for Lingjun file system is in the Running state.
 *     - A maximum of **10** data flows can be created for a single CPFS General-purpose or CPFS for Lingjun file system.
 *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
 * - Permissions.
 *     When you create a data flow, Cloud Parallel File Storage associates the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
 * - CPFS General-purpose usage notes.
 *      This section applies to CPFS General-purpose file systems whose IDs start with `cpfs-`.
 *   - Billing
 *     - Creating a data flow incurs charges based on the data flow bandwidth. For more information, see [CPFS General-purpose billing](https://help.aliyun.com/document_detail/111858.html).
 *     - When you use auto-refresh (AutoRefresh), EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
 *   - Data flow specifications
 *       - The data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data flow bandwidth refers to the maximum transfer bandwidth that the data flow can achieve during data import or export.
 *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage General-purpose mount target. Make sure that sufficient vSwitch IP resources are available.
 *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to create a data flow of the specified specification are available.
 *   - Fileset
 *     - The destination of a data flow is a Fileset in the CPFS General-purpose file system. A Fileset is a new directory tree structure in the CPFS General-purpose file system. It is a small file system within the parent file system that has an independent inode space and management capability.
 *     - The Fileset must already exist when you create a data flow, and it cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
 *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
 *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
 *   - Auto-refresh
 *     - After auto-refresh (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage General-purpose file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data flow task to load data.
 *     - Auto-refresh relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 auto-refresh folders can be configured for a data flow.
 *     - The auto-refresh interval (AutoRefreshInterval) specifies the interval at which Cloud Parallel File Storage General-purpose checks whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage General-purpose data flow, automatic synchronization tasks accumulate, metadata updates are delayed, and the data flow status changes to `Misconfigured`. You can resolve this issue by upgrading the data flow specification or reducing the OSS modification frequency.
 *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage General-purpose data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage General-purpose data flow.
 *      > The event bus and event rules created by Cloud Parallel File Storage General-purpose in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, auto-refresh does not work properly. The data flow status changes to Normal only when auto-refresh is working properly.
 *   - Source storage
 *      - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
 *      - Cloud Parallel File Storage General-purpose data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, confirm that the encryption in transit settings of the OSS bucket support encrypted access.
 *      - If data flows of multiple Cloud Parallel File Storage General-purpose file systems, or multiple data flows of the same Cloud Parallel File Storage General-purpose file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage General-purpose file systems export data to the same source. This procedure is required to avoid conflicts during the process.
 *      - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage General-purpose file system.
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage General-purpose data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the Cloud Parallel File Storage General-purpose data flow cannot access the data in the bucket.
 * - CPFS for Lingjun usage notes.
 *      This section applies to CPFS for Lingjun file systems whose IDs start with `bmcpfs-`.
 *   - Source storage
 *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
 *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. When you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
 *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as the source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
 *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
 *      - CPFS for Lingjun 2.6.0 and later support creating data flows with cross-account OSS.
 *      - The account ID parameter is required only when you use cross-account OSS.
 *      - When you use cross-account OSS, authorize the account first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
 *   - Data flow restrictions on file systems.
 *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
 *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
 *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
 *   - Data flow import restrictions.
 *     - After symlink files are imported to CPFS for Lingjun, they are converted to regular files that contain data, and the symlink information is lost.
 *     - If the OSS bucket has multiple versions, only the latest version is copied.
 *     - File names or subdirectory names longer than 255 bytes are not supported.
 *   - Data flow export restrictions
 *     - After symlink files are synchronized to OSS, the files pointed to by the symlinks are not synchronized. Instead, the symlinks become regular empty objects with no data.
 *     - Hardlink files are synchronized to OSS as regular files only.
 *     - Socket, Device, and Pipe files become regular empty objects with no data when exported to an OSS bucket.
 *     - Directory paths longer than 1023 characters are not supported.
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
 * @description - Before you use this operation, make sure that you understand the billing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
 * -  To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * -  When you call this operation, the system automatically creates the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description - Before you use this operation, make sure that you understand the billing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/detail).
 * -  To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * -  When you call this operation, the system automatically creates the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @summary Creates a lifecycle management policy.
 *
 * @description - Only General-purpose NAS file systems and CPFS for Lingjun support creating lifecycle management policies.
 * - Each CPFS for Lingjun file system supports a maximum of 10 Auto-type and 100 OnDemand-type lifecycle management policies.
 * - A maximum of 20 lifecycle management policies can be created for General-purpose NAS in each region.
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
 * @summary Creates a lifecycle management policy.
 *
 * @description - Only General-purpose NAS file systems and CPFS for Lingjun support creating lifecycle management policies.
 * - Each CPFS for Lingjun file system supports a maximum of 10 Auto-type and 100 OnDemand-type lifecycle management policies.
 * - A maximum of 20 lifecycle management policies can be created for General-purpose NAS in each region.
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
 * @description - Only General-purpose NAS file systems support this feature.
 * - Each Alibaba Cloud account can have up to 20 running data retrieval tasks in the same region.
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
 * @description - Only General-purpose NAS file systems support this feature.
 * - Each Alibaba Cloud account can have up to 20 running data retrieval tasks in the same region.
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
 * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, first invoke the DescribeMountTargets operation to query the mount target status. Execute the file system mount operation only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
 * - Invoking this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, first invoke the DescribeMountTargets operation to query the mount target status. Execute the file system mount operation only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
 * - Invoking this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description -  This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
 * -  Before you begin
 *   
 *    The CPFS file system must be in the Running state and a protocol service must be created.
 * - Other information
 *     - The VPC CIDR block of the protocol service export cannot overlap with the VPC CIDR block of the file system.
 *     - The VPC CIDR blocks of multiple exports on the same protocol service cannot overlap with each other.
 *     - You can create up to 10 export directories for a single protocol service.
 *     - Creating a protocol service export directory consumes IP addresses from the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
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
 * @description -  This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
 * -  Before you begin
 *   
 *    The CPFS file system must be in the Running state and a protocol service must be created.
 * - Other information
 *     - The VPC CIDR block of the protocol service export cannot overlap with the VPC CIDR block of the file system.
 *     - The VPC CIDR blocks of multiple exports on the same protocol service cannot overlap with each other.
 *     - You can create up to 10 export directories for a single protocol service.
 *     - Creating a protocol service export directory consumes IP addresses from the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
 *
 * @param request CreateProtocolMountTargetRequest
 * @return CreateProtocolMountTargetResponse
 */
CreateProtocolMountTargetResponse Client::createProtocolMountTarget(const CreateProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation process takes approximately 5 to 10 minutes.
 *
 * @description - This operation is applicable only to CPFS file systems.
 * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of the file system.
 * - Protocol service specifications.
 *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
 *   
 *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
 *     -  Cache: Provides server-side in-memory caching based on the LRU policy in addition to the General type capabilities. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
 *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
 * - Protocol type.
 *   Only NFSv3 is supported.
 * - Prerequisites.
 *   The CPFS file system must be created and in the Running state.
 * - Other information.
 *     - Only one protocol service can be created for each CPFS file system.
 *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
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
 * @summary Creates a protocol service for a Cloud Parallel File Storage (CPFS) file system. The creation process takes approximately 5 to 10 minutes.
 *
 * @description - This operation is applicable only to CPFS file systems.
 * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of the file system.
 * - Protocol service specifications.
 *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
 *   
 *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
 *     -  Cache: Provides server-side in-memory caching based on the LRU policy in addition to the General type capabilities. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
 *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
 * - Protocol type.
 *   Only NFSv3 is supported.
 * - Prerequisites.
 *   The CPFS file system must be created and in the Running state.
 * - Other information.
 *     - Only one protocol service can be created for each CPFS file system.
 *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the target vSwitch has sufficient IP address resources.
 *
 * @param request CreateProtocolServiceRequest
 * @return CreateProtocolServiceResponse
 */
CreateProtocolServiceResponse Client::createProtocolService(const CreateProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Creates a task to permanently delete a file or directory from the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - The recycle bin must be enabled.
 * - Mount the file system by using NFS or SMB (mount the file system on an ECS instance in the same VPC), and then delete the target file in the mount directory to move it to the recycle bin.
 * - When you permanently delete a directory, the contents of the directory are recursively deleted.
 * - Only one permanent deletion task can be run at a time for a single file system. While a file or directory is being permanently deleted, you cannot initiate a new restoration or cleanup task.
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
 * @summary Creates a task to permanently delete a file or directory from the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - The recycle bin must be enabled.
 * - Mount the file system by using NFS or SMB (mount the file system on an ECS instance in the same VPC), and then delete the target file in the mount directory to move it to the recycle bin.
 * - When you permanently delete a directory, the contents of the directory are recursively deleted.
 * - Only one permanent deletion task can be run at a time for a single file system. While a file or directory is being permanently deleted, you cannot initiate a new restoration or cleanup task.
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
 * @summary Delete an existing access group.
 *
 * @description The default access group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
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
 * @summary Delete an existing access group.
 *
 * @description The default access group (DEFAULT_VPC_GROUP_NAME) cannot be deleted.
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
 * @summary Deletes a permission rule from a permission group.
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
 * @summary Deletes a permission rule from a permission group.
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
 * @summary Deletes an Agentic space.
 *
 * @description Applicable to agentic file systems.
 *
 * @param request DeleteAgenticSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgenticSpaceResponse
 */
DeleteAgenticSpaceResponse Client::deleteAgenticSpaceWithOptions(const DeleteAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgenticSpaceId()) {
    query["AgenticSpaceId"] = request.getAgenticSpaceId();
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
    {"action" , "DeleteAgenticSpace"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgenticSpaceResponse>();
}

/**
 * @summary Deletes an Agentic space.
 *
 * @description Applicable to agentic file systems.
 *
 * @param request DeleteAgenticSpaceRequest
 * @return DeleteAgenticSpaceResponse
 */
DeleteAgenticSpaceResponse Client::deleteAgenticSpace(const DeleteAgenticSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgenticSpaceWithOptions(request, runtime);
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
 * @summary 用于删除智算cpfs接入点
 *
 * @description 删除 CPFS 智算版 AccessPoint。
 *
 * @param request DeleteCpfsAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCpfsAccessPointResponse
 */
DeleteCpfsAccessPointResponse Client::deleteCpfsAccessPointWithOptions(const DeleteCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
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
    {"action" , "DeleteCpfsAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCpfsAccessPointResponse>();
}

/**
 * @summary 用于删除智算cpfs接入点
 *
 * @description 删除 CPFS 智算版 AccessPoint。
 *
 * @param request DeleteCpfsAccessPointRequest
 * @return DeleteCpfsAccessPointResponse
 */
DeleteCpfsAccessPointResponse Client::deleteCpfsAccessPoint(const DeleteCpfsAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCpfsAccessPointWithOptions(request, runtime);
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
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support fileset deletion. After a fileset is deleted, all data in the directory is permanently deleted and cannot be recovered. Proceed with caution.
 * - If deletion protection is enabled, disable it before you delete the fileset.
 * - All filesets on the target file system must be in the CREATED desired state before you can perform the deletion.
 * - Deleting a CPFS general-purpose fileset immediately releases disk space. Deleting a CPFS for Lingjun fileset gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
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
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support fileset deletion. After a fileset is deleted, all data in the directory is permanently deleted and cannot be recovered. Proceed with caution.
 * - If deletion protection is enabled, disable it before you delete the fileset.
 * - All filesets on the target file system must be in the CREATED desired state before you can perform the deletion.
 * - Deleting a CPFS general-purpose fileset immediately releases disk space. Deleting a CPFS for Lingjun fileset gradually releases disk space. Deleted data cannot be recovered. Proceed with caution.
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
 * @summary Deletes a specified snapshot or cancels a snapshot task that is being created.
 *
 * @description <props="china">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * .
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
 * @summary Deletes a specified snapshot or cancels a snapshot task that is being created.
 *
 * @description <props="china">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">.
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * .
 *
 * @param request DeleteSnapshotRequest
 * @return DeleteSnapshotResponse
 */
DeleteSnapshotResponse Client::deleteSnapshot(const DeleteSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSnapshotWithOptions(request, runtime);
}

/**
 * @summary Queries permission group information.
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
 * @summary Queries permission group information.
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
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @description Only General-purpose NAS NFS file systems support this feature.
 *
 * @param request DescribeAccessPointRequest
 * @return DescribeAccessPointResponse
 */
DescribeAccessPointResponse Client::describeAccessPoint(const DescribeAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessPointWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use NAS::2017-06-26::ListAccessPoints instead.
 *
 * @summary Queries access point information.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @deprecated OpenAPI DescribeAccessPoints is deprecated, please use NAS::2017-06-26::ListAccessPoints instead.
 *
 * @summary Queries access point information.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @summary Queries an Agentic space.
 *
 * @description Applies to agentic-type file systems.
 *
 * @param request DescribeAgenticSpacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAgenticSpacesResponse
 */
DescribeAgenticSpacesResponse Client::describeAgenticSpacesWithOptions(const DescribeAgenticSpacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeAgenticSpaces"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAgenticSpacesResponse>();
}

/**
 * @summary Queries an Agentic space.
 *
 * @description Applies to agentic-type file systems.
 *
 * @param request DescribeAgenticSpacesRequest
 * @return DescribeAgenticSpacesResponse
 */
DescribeAgenticSpacesResponse Client::describeAgenticSpaces(const DescribeAgenticSpacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticSpacesWithOptions(request, runtime);
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
 * @summary 用于查询智算cpfs AP 已挂载客户端列表
 *
 * @description 查询 CPFS 智算版 AccessPoint 已挂载客户端列表。
 *
 * @param request DescribeCpfsAccessPointMountedClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCpfsAccessPointMountedClientsResponse
 */
DescribeCpfsAccessPointMountedClientsResponse Client::describeCpfsAccessPointMountedClientsWithOptions(const DescribeCpfsAccessPointMountedClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
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
    {"action" , "DescribeCpfsAccessPointMountedClients"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCpfsAccessPointMountedClientsResponse>();
}

/**
 * @summary 用于查询智算cpfs AP 已挂载客户端列表
 *
 * @description 查询 CPFS 智算版 AccessPoint 已挂载客户端列表。
 *
 * @param request DescribeCpfsAccessPointMountedClientsRequest
 * @return DescribeCpfsAccessPointMountedClientsResponse
 */
DescribeCpfsAccessPointMountedClientsResponse Client::describeCpfsAccessPointMountedClients(const DescribeCpfsAccessPointMountedClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCpfsAccessPointMountedClientsWithOptions(request, runtime);
}

/**
 * @summary 用于查询指定文件系统下的智算CPFS接入点信息
 *
 * @description 查询 CPFS 智算版 AccessPoint。
 *
 * @param request DescribeCpfsAccessPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCpfsAccessPointsResponse
 */
DescribeCpfsAccessPointsResponse Client::describeCpfsAccessPointsWithOptions(const DescribeCpfsAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
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
    {"action" , "DescribeCpfsAccessPoints"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCpfsAccessPointsResponse>();
}

/**
 * @summary 用于查询指定文件系统下的智算CPFS接入点信息
 *
 * @description 查询 CPFS 智算版 AccessPoint。
 *
 * @param request DescribeCpfsAccessPointsRequest
 * @return DescribeCpfsAccessPointsResponse
 */
DescribeCpfsAccessPointsResponse Client::describeCpfsAccessPoints(const DescribeCpfsAccessPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCpfsAccessPointsWithOptions(request, runtime);
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
 * @summary Queries file system information.
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

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
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
 * @summary Queries file system information.
 *
 * @param request DescribeFileSystemsRequest
 * @return DescribeFileSystemsResponse
 */
DescribeFileSystemsResponse Client::describeFileSystems(const DescribeFileSystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFileSystemsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of created filesets.
 *
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
 * - In the filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
 * - Combination queries are supported.
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
 * @summary Queries the list of created filesets.
 *
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support filesets. You can view the version information on the file system details page in the console.
 * - In the filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
 * - Combination queries are supported.
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
 * @summary Queries the virtual storage channel information associated with a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds, which means the values of ResourceIds.VscId must be the same.
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
 * @summary Queries the virtual storage channel information associated with a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds, which means the values of ResourceIds.VscId must be the same.
 *
 * @param request DescribeFilesystemsVscAttachInfoRequest
 * @return DescribeFilesystemsVscAttachInfoResponse
 */
DescribeFilesystemsVscAttachInfoResponse Client::describeFilesystemsVscAttachInfo(const DescribeFilesystemsVscAttachInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFilesystemsVscAttachInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of lifecycle management policies.
 *
 * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
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
 * @summary Retrieves a list of lifecycle management policies.
 *
 * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
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
 * @summary Lists the log analysis configurations in log analysis.
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
 * @summary Lists the log analysis configurations in log analysis.
 *
 * @param request DescribeLogAnalysisRequest
 * @return DescribeLogAnalysisResponse
 */
DescribeLogAnalysisResponse Client::describeLogAnalysis(const DescribeLogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLogAnalysisWithOptions(request, runtime);
}

/**
 * @summary Queries mount target information.
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
 * @summary Queries mount target information.
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
 * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
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
 * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
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
 * @summary Queries the available Alibaba Cloud regions.
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
 * @summary Queries the available Alibaba Cloud regions.
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
 * @summary Queries information about one or more snapshots of a specified file system.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * -   Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Queries information about one or more snapshots of a specified file system.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * -   Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Dissociates a VSC device from a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
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
 * @summary Dissociates a VSC device from a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
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
 * @summary Queries an Agentic space.
 *
 * @description Applicable to agentic-type file systems.
 *
 * @param request GetAgenticSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgenticSpaceResponse
 */
GetAgenticSpaceResponse Client::getAgenticSpaceWithOptions(const GetAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgenticSpaceId()) {
    query["AgenticSpaceId"] = request.getAgenticSpaceId();
  }

  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgenticSpace"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgenticSpaceResponse>();
}

/**
 * @summary Queries an Agentic space.
 *
 * @description Applicable to agentic-type file systems.
 *
 * @param request GetAgenticSpaceRequest
 * @return GetAgenticSpaceResponse
 */
GetAgenticSpaceResponse Client::getAgenticSpace(const GetAgenticSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgenticSpaceWithOptions(request, runtime);
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
 * @summary Queries the recycle bin configuration of a specified General-purpose NAS file system.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Queries the recycle bin configuration of a specified General-purpose NAS file system.
 *
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request GetRecycleBinAttributeRequest
 * @return GetRecycleBinAttributeResponse
 */
GetRecycleBinAttributeResponse Client::getRecycleBinAttribute(const GetRecycleBinAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecycleBinAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询接入点信息
 *
 * @description 仅通用型 NAS NFS 协议文件系统支持。
 *
 * @param request ListAccessPointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessPointsResponse
 */
ListAccessPointsResponse Client::listAccessPointsWithOptions(const ListAccessPointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListAccessPoints"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessPointsResponse>();
}

/**
 * @summary 查询接入点信息
 *
 * @description 仅通用型 NAS NFS 协议文件系统支持。
 *
 * @param request ListAccessPointsRequest
 * @return ListAccessPointsResponse
 */
ListAccessPointsResponse Client::listAccessPoints(const ListAccessPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessPointsWithOptions(request, runtime);
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
 * @summary Modifies access point information.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @summary Modifies access point information.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @summary Modifies an Agentic space.
 *
 * @description Applicable to agentic file systems.
 *
 * @param request ModifyAgenticSpaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAgenticSpaceResponse
 */
ModifyAgenticSpaceResponse Client::modifyAgenticSpaceWithOptions(const ModifyAgenticSpaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgenticSpaceId()) {
    query["AgenticSpaceId"] = request.getAgenticSpaceId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAgenticSpace"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAgenticSpaceResponse>();
}

/**
 * @summary Modifies an Agentic space.
 *
 * @description Applicable to agentic file systems.
 *
 * @param request ModifyAgenticSpaceRequest
 * @return ModifyAgenticSpaceResponse
 */
ModifyAgenticSpaceResponse Client::modifyAgenticSpace(const ModifyAgenticSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAgenticSpaceWithOptions(request, runtime);
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
 * @summary 用于智算cpfs修改接入点
 *
 * @description 修改 CPFS 智算版 AccessPoint。
 *
 * @param request ModifyCpfsAccessPointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCpfsAccessPointResponse
 */
ModifyCpfsAccessPointResponse Client::modifyCpfsAccessPointWithOptions(const ModifyCpfsAccessPointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPointId()) {
    query["AccessPointId"] = request.getAccessPointId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
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
    {"action" , "ModifyCpfsAccessPoint"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCpfsAccessPointResponse>();
}

/**
 * @summary 用于智算cpfs修改接入点
 *
 * @description 修改 CPFS 智算版 AccessPoint。
 *
 * @param request ModifyCpfsAccessPointRequest
 * @return ModifyCpfsAccessPointResponse
 */
ModifyCpfsAccessPointResponse Client::modifyCpfsAccessPoint(const ModifyCpfsAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCpfsAccessPointWithOptions(request, runtime);
}

/**
 * @summary Modifies the attributes of a data flow.
 *
 * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows.
 * - You can modify the properties of a data flow only when the data flow is in the `Running (Normal)` state.
 * - Modifying a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data flow modification.
 * - CPFS data flow specifications:
 *     - Data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow bandwidth refers to the maximum transmission bandwidth that can be achieved when the data flow imports or exports data.
 *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to modify the data flow with the specified specifications are sufficient.
 * - CPFS billing
 *   Modifying the data flow bandwidth (Throughput) involves data flow bandwidth billing. Familiarize yourself with the billable methods of CPFS in advance. For more details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
 *   Settings for the data stream property can affect billing.
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
 * @summary Modifies the attributes of a data flow.
 *
 * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows.
 * - You can modify the properties of a data flow only when the data flow is in the `Running (Normal)` state.
 * - Modifying a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data flow modification.
 * - CPFS data flow specifications:
 *     - Data flow bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data flow bandwidth refers to the maximum transmission bandwidth that can be achieved when the data flow imports or exports data.
 *     - Inventory check: When DryRun is set to true, you can verify whether the resources required to modify the data flow with the specified specifications are sufficient.
 * - CPFS billing
 *   Modifying the data flow bandwidth (Throughput) involves data flow bandwidth billing. Familiarize yourself with the billable methods of CPFS in advance. For more details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
 *   Settings for the data stream property can affect billing.
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
 * @summary Sets the quota for an Agentic space.
 *
 * @description Applies to agentic-type file systems.
 *
 * @param request SetAgenticSpaceQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAgenticSpaceQuotaResponse
 */
SetAgenticSpaceQuotaResponse Client::setAgenticSpaceQuotaWithOptions(const SetAgenticSpaceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgenticSpaceId()) {
    query["AgenticSpaceId"] = request.getAgenticSpaceId();
  }

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

  if (!!request.hasSizeLimit()) {
    query["SizeLimit"] = request.getSizeLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAgenticSpaceQuota"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAgenticSpaceQuotaResponse>();
}

/**
 * @summary Sets the quota for an Agentic space.
 *
 * @description Applies to agentic-type file systems.
 *
 * @param request SetAgenticSpaceQuotaRequest
 * @return SetAgenticSpaceQuotaResponse
 */
SetAgenticSpaceQuotaResponse Client::setAgenticSpaceQuota(const SetAgenticSpaceQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAgenticSpaceQuotaWithOptions(request, runtime);
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