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
 * @summary Adds a client to the blacklist in Cloud Parallel File Storage (CPFS) to evict its write requests, which serves as an I/O fencing mechanism.
 *
 * @description This operation supports only CPFS parallel file systems.
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
 * @summary Adds a client to the blacklist in Cloud Parallel File Storage (CPFS) to evict its write requests, which serves as an I/O fencing mechanism.
 *
 * @description This operation supports only CPFS parallel file systems.
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
 * @description **Before you begin**
 * Only Advanced Extreme NAS file systems support this operation. Before you call this operation, complete the following preparations:
 * - An Advanced Extreme NAS file system is created. When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation to create a file system, set the following parameters:
 *   - FileSystemType: extreme
 *   - StorageType: advance
 * - An automatic snapshot policy is created. For more information, see [CreateAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createautosnapshotpolicy).
 * - The AliyunNASManageENIRole authorization is completed in the console. Before creating an Extreme NAS file system, associate the AliyunNASManageENIRole service-linked role with File Storage NAS to allow File Storage NAS to manage network interface controllers (NICs). For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
 * **Operation description**
 * <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Each file system can have only one automatic snapshot policy applied.
 * - An automatic snapshot policy can be applied to multiple file systems.
 * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
 * <props="intl">
 * - This feature is in free public preview.
 * - Each file system can have only one automatic snapshot policy applied.
 * - An automatic snapshot policy can be applied to multiple file systems.
 * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
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
 * @description **Before you begin**
 * Only Advanced Extreme NAS file systems support this operation. Before you call this operation, complete the following preparations:
 * - An Advanced Extreme NAS file system is created. When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation to create a file system, set the following parameters:
 *   - FileSystemType: extreme
 *   - StorageType: advance
 * - An automatic snapshot policy is created. For more information, see [CreateAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createautosnapshotpolicy).
 * - The AliyunNASManageENIRole authorization is completed in the console. Before creating an Extreme NAS file system, associate the AliyunNASManageENIRole service-linked role with File Storage NAS to allow File Storage NAS to manage network interface controllers (NICs). For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
 * **Operation description**
 * <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Each file system can have only one automatic snapshot policy applied.
 * - An automatic snapshot policy can be applied to multiple file systems.
 * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
 * <props="intl">
 * - This feature is in free public preview.
 * - Each file system can have only one automatic snapshot policy applied.
 * - An automatic snapshot policy can be applied to multiple file systems.
 * - If the target file system already has an automatic snapshot policy applied, calling the ApplyAutoSnapshotPolicy operation replaces the current automatic snapshot policy of the file system.
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
 * - You can add automatic update configurations only for data flows in the `Running` state.
 * - You can add up to five automatic update configurations for a data flow.
 * - It generally takes 2 to 5 minutes to create an automatic update configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
 * - Automatic updates depend on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, automatic updates cannot work properly.
 * - Automatic updates apply to prefixes specified by the RefreshPath parameter. When CPFS configures automatic synchronization for a prefix in a data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs within the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the CPFS data flow.
 * - After you configure automatic updates (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or you can start a data stream task to load the data.
 * - The automatic update interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist within the prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capability of the CPFS data flow, automatic update tasks accumulate, metadata updates are delayed, and the data flow status changes to Misconfigured. To resolve this issue, upgrade the data flow specifications or reduce the modification frequency in OSS.
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
 * - You can add automatic update configurations only for data flows in the `Running` state.
 * - You can add up to five automatic update configurations for a data flow.
 * - It generally takes 2 to 5 minutes to create an automatic update configuration. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to query the data flow status.
 * - Automatic updates depend on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *   > The event buses and event rules that CPFS creates in EventBridge contain the description `Create for cpfs auto refresh`. Do not modify or delete these event buses or event rules. Otherwise, automatic updates cannot work properly.
 * - Automatic updates apply to prefixes specified by the RefreshPath parameter. When CPFS configures automatic synchronization for a prefix in a data flow, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs within the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the CPFS data flow.
 * - After you configure automatic updates (AutoRefresh), when data changes in the source storage, the changed metadata is automatically synchronized to the CPFS file system. The changed data is loaded on demand when a user accesses the file, or you can start a data stream task to load the data.
 * - The automatic update interval (AutoRefreshInterval) specifies the interval at which CPFS checks whether data updates exist within the prefix of the source OSS bucket. If data updates exist, an automatic synchronization task is started. When the frequency of object modification events in the source OSS bucket exceeds the processing capability of the CPFS data flow, automatic update tasks accumulate, metadata updates are delayed, and the data flow status changes to Misconfigured. To resolve this issue, upgrade the data flow specifications or reduce the modification frequency in OSS.
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
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
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
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
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
 * @description <props="china">
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
 * <props="intl">
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
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
 * @description <props="china">
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
 * <props="intl">
 * -  This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * -  Only Advanced Extreme NAS supports this feature.
 * -  Before you begin: You have applied an automatic snapshot policy to the target Extreme NAS file system by calling [ApplyAutoSnapshotPolicy](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-applyautosnapshotpolicy).
 *
 * @param request CancelAutoSnapshotPolicyRequest
 * @return CancelAutoSnapshotPolicyResponse
 */
CancelAutoSnapshotPolicyResponse Client::cancelAutoSnapshotPolicy(const CancelAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Cancels the automatic update configuration for a specified data flow.
 *
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Data flows are supported only by CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
 * - You can cancel the automatic update configuration only for data flows in the `Running` or `Stopped` state.
 * - Canceling the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the cancel automatic update task.
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
 * @summary Cancels the automatic update configuration for a specified data flow.
 *
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Data flows are supported only by CPFS 2.2.0 and later. You can view the version information on the file system details page in the console.
 * - You can cancel the automatic update configuration only for data flows in the `Running` or `Stopped` state.
 * - Canceling the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the cancel automatic update task.
 *
 * @param request CancelDataFlowAutoRefreshRequest
 * @return CancelDataFlowAutoRefreshResponse
 */
CancelDataFlowAutoRefreshResponse Client::cancelDataFlowAutoRefresh(const CancelDataFlowAutoRefreshRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDataFlowAutoRefreshWithOptions(request, runtime);
}

/**
 * @summary Cancels a data flow streaming subtask.
 *
 * @description **Prerequisite resource creation process**
 * Before you cancel a data flow streaming subtask, create the following resources in order:
 * 1. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) to create a data flow.
 * 2. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
 * 3. Create a data flow streaming subtask: Call [CreateDataFlowSubTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowsubtask-bmcpfs) to create a streaming subtask.
 * > CPFS for Lingjun file systems must be created in the console.
 * **Operation description**
 * - Only CPFS for Lingjun 2.6.0 and later are supported. You can view the version information on the file system details page in the console.
 * - Prerequisites: A CPFS for Lingjun file system is created, the DataFlow is in the Running state, the DataFlowTask is in the Executing state, and the DataFlowSubTask is in the CREATED or RUNNING state.
 * - You can cancel a data flow streaming subtask only when it is in the CREATED or RUNNING state.
 * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowtasks-bmcpfs) to query the execution status of a streaming task.
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
 * @summary Cancels a data flow streaming subtask.
 *
 * @description **Prerequisite resource creation process**
 * Before you cancel a data flow streaming subtask, create the following resources in order:
 * 1. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) to create a data flow.
 * 2. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
 * 3. Create a data flow streaming subtask: Call [CreateDataFlowSubTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowsubtask-bmcpfs) to create a streaming subtask.
 * > CPFS for Lingjun file systems must be created in the console.
 * **Operation description**
 * - Only CPFS for Lingjun 2.6.0 and later are supported. You can view the version information on the file system details page in the console.
 * - Prerequisites: A CPFS for Lingjun file system is created, the DataFlow is in the Running state, the DataFlowTask is in the Executing state, and the DataFlowSubTask is in the CREATED or RUNNING state.
 * - You can cancel a data flow streaming subtask only when it is in the CREATED or RUNNING state.
 * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowtasks-bmcpfs) to query the execution status of a streaming task.
 *
 * @param request CancelDataFlowSubTaskRequest
 * @return CancelDataFlowSubTaskResponse
 */
CancelDataFlowSubTaskResponse Client::cancelDataFlowSubTask(const CancelDataFlowSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDataFlowSubTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels a data flow batch task or streaming task that is in the Pending or Executing state.
 *
 * @description **Prerequisites**
 * Before you call this operation, create resources in the following order and make sure that the resources at each layer are in the required state:
 * 1. Create a file system: Call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a CPFS file system.
 *    - State requirement: The file system is in the Running state.
 * 2. Create a mount target: Call [CreateMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createmounttarget-cpfs) to create a mount target.
 *    - State requirement: The mount target is in the Active state.
 * 3. Create a fileset: Call [CreateFileset](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfileset-cpfs) to create a fileset.
 *    - State requirement: The fileset is created.
 * 4. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
 *    - State requirement: The data flow is in the Running state.
 * 5. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a data flow task.
 * **Operation description**
 * - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flow tasks. You can view the version information on the file system details page in the console.
 * - Only data flow tasks in the `Pending` state can be canceled.
 * - Canceling a data flow task typically takes 5 to 10 minutes. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status.
 * - If a streaming data flow task contains running streaming subtasks, the streaming task cannot be canceled. Otherwise, the InvalidStatus.ResourceMismatch error is returned.
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
 * @summary Cancels a data flow batch task or streaming task that is in the Pending or Executing state.
 *
 * @description **Prerequisites**
 * Before you call this operation, create resources in the following order and make sure that the resources at each layer are in the required state:
 * 1. Create a file system: Call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a CPFS file system.
 *    - State requirement: The file system is in the Running state.
 * 2. Create a mount target: Call [CreateMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createmounttarget-cpfs) to create a mount target.
 *    - State requirement: The mount target is in the Active state.
 * 3. Create a fileset: Call [CreateFileset](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfileset-cpfs) to create a fileset.
 *    - State requirement: The fileset is created.
 * 4. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
 *    - State requirement: The data flow is in the Running state.
 * 5. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a data flow task.
 * **Operation description**
 * - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flow tasks. You can view the version information on the file system details page in the console.
 * - Only data flow tasks in the `Pending` state can be canceled.
 * - Canceling a data flow task typically takes 5 to 10 minutes. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status.
 * - If a streaming data flow task contains running streaming subtasks, the streaming task cannot be canceled. Otherwise, the InvalidStatus.ResourceMismatch error is returned.
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
 * @summary Cancels the directory quota of a file system.
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
 * @summary Cancels the quota configured for a fileset.
 *
 * @description Only CPFS for Lingjun 2.7.0 and later support quota cancellation.
 * **Before you begin**
 * - This operation applies only to CPFS for Lingjun file systems of version 2.7.0 or later.
 * - The file system ID must start with `bmcpfs-`.
 * - Before you call this operation, make sure that a quota has been configured for the target fileset by calling the [SetFilesetQuota](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-setfilesetquota-bmcpfs) operation.
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
 * @summary Cancels the quota configured for a fileset.
 *
 * @description Only CPFS for Lingjun 2.7.0 and later support quota cancellation.
 * **Before you begin**
 * - This operation applies only to CPFS for Lingjun file systems of version 2.7.0 or later.
 * - The file system ID must start with `bmcpfs-`.
 * - Before you call this operation, make sure that a quota has been configured for the target fileset by calling the [SetFilesetQuota](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-setfilesetquota-bmcpfs) operation.
 *
 * @param request CancelFilesetQuotaRequest
 * @return CancelFilesetQuotaResponse
 */
CancelFilesetQuotaResponse Client::cancelFilesetQuota(const CancelFilesetQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelFilesetQuotaWithOptions(request, runtime);
}

/**
 * @summary Cancels a data retrieval task that is in the active state.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Cancels a data retrieval task that is in the active state.
 *
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request CancelLifecycleRetrieveJobRequest
 * @return CancelLifecycleRetrieveJobResponse
 */
CancelLifecycleRetrieveJobResponse Client::cancelLifecycleRetrieveJob(const CancelLifecycleRetrieveJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelLifecycleRetrieveJobWithOptions(request, runtime);
}

/**
 * @summary Cancels a running task in the recycle bin.
 *
 * @description ### Operation description
 * - Only General-purpose NAS file systems support this feature.
 * - You can cancel only tasks that are in the Running state. The cancel operation does not take effect on tasks that have reached a final state (PartialSuccess, Success, Fail, or Cancelled).
 * - When you cancel a running permanent deletion task, files that have already been permanently deleted cannot be recovered.
 * - When you cancel a running file restoration task, restored files can be queried in the file system, and unrestored files can be queried in the recycle bin.
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
 * @summary Cancels a running task in the recycle bin.
 *
 * @description ### Operation description
 * - Only General-purpose NAS file systems support this feature.
 * - You can cancel only tasks that are in the Running state. The cancel operation does not take effect on tasks that have reached a final state (PartialSuccess, Success, Fail, or Cancelled).
 * - When you cancel a running permanent deletion task, files that have already been permanently deleted cannot be recovered.
 * - When you cancel a running file restoration task, restored files can be queried in the file system, and unrestored files can be queried in the recycle bin.
 *
 * @param request CancelRecycleBinJobRequest
 * @return CancelRecycleBinJobResponse
 */
CancelRecycleBinJobResponse Client::cancelRecycleBinJob(const CancelRecycleBinJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRecycleBinJobWithOptions(request, runtime);
}

/**
 * @summary Modifies the resource group to which a file system instance belongs.
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
 * @summary Modifies the resource group to which a file system instance belongs.
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
 * @description - A maximum of 20 permission groups can be created per Alibaba Cloud account in a single region.
 * - A maximum of 300 rules can be added to a permission group.
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
 * @description - A maximum of 20 permission groups can be created per Alibaba Cloud account in a single region.
 * - A maximum of 300 rules can be added to a permission group.
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
 * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount may fail.
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
 * @description - When you invoke the CreateAccessPoint operation to create an access point, some resources are generated asynchronously. After the CreateAccessPoint operation succeeds, execute the [DescribeAccessPoints](https://help.aliyun.com/document_detail/2712239.html) or [DescribeAccessPoint](https://help.aliyun.com/document_detail/2712240.html) operation to query the access point status. Mount the file system only after the access point status becomes **Active**. Otherwise, the mount may fail.
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
 * @description You can add up to 300 rules to a permission group.
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
 * @description You can add up to 300 rules to a permission group.
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
 * @description **Before you begin**
 * Complete the following preparations before calling this operation:
 * 1. **An Agentic file system is created**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
 *    - `StorageType`: Set to `Agentic`.
 *    - `ProtocolType`: Set to `NFS`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
 * **Usage notes**
 * - This operation applies only to Agentic file systems.
 * - Complete call chain example:
 *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
 *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
 *   3. To modify the Agentic space configuration, call the [ModifyAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-modifyagenticspace) operation.
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
 * @description **Before you begin**
 * Complete the following preparations before calling this operation:
 * 1. **An Agentic file system is created**: When calling [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
 *    - `StorageType`: Set to `Agentic`.
 *    - `ProtocolType`: Set to `NFS`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
 * **Usage notes**
 * - This operation applies only to Agentic file systems.
 * - Complete call chain example:
 *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
 *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
 *   3. To modify the Agentic space configuration, call the [ModifyAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-modifyagenticspace) operation.
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
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
 * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 * <props="intl">
 * - This feature is in free public preview.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
 * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
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
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
 * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 * <props="intl">
 * - This feature is in free public preview.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - You can create up to 100 automatic snapshot policies per region for each Alibaba Cloud account.
 * - If a file system contains a large amount of data and the time required to create an automatic snapshot exceeds the interval between two scheduled time points, the next time point is automatically skipped. For example, you set 09:00, 10:00, 11:00, and 12:00 as the automatic snapshot time points. Because the file system contains a large amount of data, the snapshot creation starts at 09:00 and is completed at 10:20, which takes 80 minutes. The system skips the 10:00 time point and continues to create an automatic snapshot at 11:00.
 * - Each file system supports up to 128 automatic snapshots. After the snapshot quota is reached, the system automatically deletes the earliest automatic snapshots. Manual snapshots are not affected.
 * - When you modify the retention period of an automatic snapshot policy, the modification takes effect only on new snapshots. Existing snapshots retain their original retention period.
 * - If an automatic snapshot is being created for a file system, you must wait until the automatic snapshot is completed before you can manually create a snapshot.
 * - Automatic snapshot policies cannot be executed on file systems that are not in the Normal state.
 * - Automatic snapshots follow a unified naming format: `auto_yyyyMMdd_X`. In this format, `auto` indicates an automatic snapshot, which distinguishes it from manual snapshots. `yyyyMMdd` indicates the date when the snapshot is created, where `y` indicates the year, `M` indicates the month, and `d` indicates the day. `X` indicates the sequence number of the automatic snapshot created on that day. For example, `auto_20201018_1` indicates the first automatic snapshot created on October 18, 2020.
 * - A created automatic snapshot policy can be applied to any file system by calling ApplyAutoSnapshotPolicy, and the policy content can be modified by calling ModifyAutoSnapshotPolicy.
 *
 * @param request CreateAutoSnapshotPolicyRequest
 * @return CreateAutoSnapshotPolicyResponse
 */
CreateAutoSnapshotPolicyResponse Client::createAutoSnapshotPolicy(const CreateAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates an access point for a CPFS for Lingjun file system.
 *
 * @description Creates an access point for a CPFS for Lingjun file system.
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Creates an access point for a CPFS for Lingjun file system.
 *
 * @description Creates an access point for a CPFS for Lingjun file system.
 *
 * @param request CreateCpfsAccessPointRequest
 * @return CreateCpfsAccessPointResponse
 */
CreateCpfsAccessPointResponse Client::createCpfsAccessPoint(const CreateCpfsAccessPointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCpfsAccessPointWithOptions(request, runtime);
}

/**
 * @summary Creates a data flow between a CPFS file system (General-purpose or CPFS for Lingjun) and source storage.
 *
 * @description - This operation applies to the following products:
 * | Product | File system ID format | Minimum version that supports data flows |
 * |------|----------------|------------------------|
 * | **General-purpose CPFS** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 or later |
 * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 or later |
 * > General-purpose CPFS and CPFS for Lingjun share the same set of API operations but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
 * - Basic operations
 *     - You can create a data flow only when the General-purpose CPFS or CPFS for Lingjun file system is in the Running state.
 *     - A maximum of **10** data flows can be created for a single General-purpose CPFS or CPFS for Lingjun file system.
 *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
 * - Permissions.
 *     When you create a data flow, Cloud Parallel File Storage obtains the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
 * - Usage notes for General-purpose CPFS.
 *      This section applies to General-purpose CPFS whose file system IDs start with `cpfs-`.
 *   - Billing
 *     - Creating a data flow incurs fees based on the data flow bandwidth. For more information, see [Billing of General-purpose CPFS](https://help.aliyun.com/document_detail/111858.html).
 *     - When you use auto-refresh, EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
 *   - Data stream specifications
 *       - The data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data stream bandwidth refers to the maximum transfer bandwidth that the data stream can achieve during data import or export.
 *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage mount target. Make sure that sufficient vSwitch IP resources are available.
 *     - Inventory check: Setting DryRun to true checks whether the resources required to create a data stream of the specified specification are available.
 *   - Fileset
 *     - The destination of a data flow is a Fileset in the General-purpose CPFS file system. A Fileset is a new directory tree structure in the General-purpose CPFS file system. It is a small file system within the parent file system and has an independent inode space and management capability.
 *     - The Fileset must already exist when you create a data flow and cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
 *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
 *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
 *   - Automatic synchronization
 *     - After automatic synchronization (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data stream node.
 *     - Automatic synchronization relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 automatic synchronization folders can be configured for a data stream.
 *     - The automatic synchronization interval (AutoRefreshInterval) specifies the synchronization interval that Cloud Parallel File Storage sets for checking whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization node is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage data stream, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to `Misconfigured`. You can increase the data stream specification or reduce the OSS modification frequency to resolve this issue.
 *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage data stream, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage data stream.
 *      > The event bus and event rules created by Cloud Parallel File Storage in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, automatic synchronization does not work Normal.
 *   - Source storage
 *      - Only OSS is supported as source storage. The data stream source storage (SourceStorage) must be an OSS bucket.
 *      - Cloud Parallel File Storage data streams support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, confirm that the encryption in transit of the OSS bucket supports encrypted access.
 *      - If data streams of multiple Cloud Parallel File Storage file systems, or multiple data streams of the same Cloud Parallel File Storage file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage file systems export data to the same source.
 *      - Cross-region OSS data streams are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage file system.
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage data stream can access the data in the bucket. Do not delete or modify this tag while the data stream is in use. Otherwise, the Cloud Parallel File Storage data stream cannot access the data in the bucket.
 * - Usage notes for CPFS for Lingjun.
 *      This section applies to CPFS for Lingjun whose file system IDs start with `bmcpfs-`.
 *   - Source storage
 *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
 *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
 *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
 *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
 *      - CPFS for Lingjun 2.6.0 or later supports creating data flows with cross-account OSS.
 *      - The account ID parameter is required only when you use cross-account OSS.
 *      - When you use cross-account OSS, authorize the accounts first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
 *   - Data flow restrictions on file systems.
 *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
 *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
 *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
 *   - Data flow import restrictions.
 *     - After a symlink file is imported to CPFS for Lingjun, it is converted to a regular file that contains data, and the symlink information is lost.
 *     - If the OSS bucket has multiple versions, only the latest version is copied.
 *     - File names or subdirectory names longer than 255 bytes are not supported.
 *   - Data flow export restrictions
 *     - After a symlink file is synchronized to OSS, the file that the symlink points to is not synchronized. Instead, the symlink becomes a regular empty object with no data.
 *     - A hardlink file is synchronized to OSS as a regular file.
 *     - Socket, Device, and Pipe files are converted to regular empty objects with no data when exported to an OSS bucket.
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
 * @summary Creates a data flow between a CPFS file system (General-purpose or CPFS for Lingjun) and source storage.
 *
 * @description - This operation applies to the following products:
 * | Product | File system ID format | Minimum version that supports data flows |
 * |------|----------------|------------------------|
 * | **General-purpose CPFS** | Starts with `cpfs-`, such as cpfs-125487\\*\\*\\*\\* | 2.2.0 or later |
 * | **CPFS for Lingjun** | Starts with `bmcpfs-`, such as bmcpfs-0015\\*\\*\\*\\* | 2.4.0 or later |
 * > General-purpose CPFS and CPFS for Lingjun share the same set of API operations but differ in parameter values and feature support. Refer to the corresponding section based on the product type you use.
 * - Basic operations
 *     - You can create a data flow only when the General-purpose CPFS or CPFS for Lingjun file system is in the Running state.
 *     - A maximum of **10** data flows can be created for a single General-purpose CPFS or CPFS for Lingjun file system.
 *     - Creating a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/336901.html) to check whether the data flow is created.
 * - Permissions.
 *     When you create a data flow, Cloud Parallel File Storage obtains the `AliyunServiceRoleForNasOssDataflow` and `AliyunServiceRoleForNasEventNotification` service-linked roles. For more information, see [CPFS service-linked roles](https://help.aliyun.com/document_detail/185138.html).
 * - Usage notes for General-purpose CPFS.
 *      This section applies to General-purpose CPFS whose file system IDs start with `cpfs-`.
 *   - Billing
 *     - Creating a data flow incurs fees based on the data flow bandwidth. For more information, see [Billing of General-purpose CPFS](https://help.aliyun.com/document_detail/111858.html).
 *     - When you use auto-refresh, EventBridge collects object modification events from the source OSS storage, which incurs fees. For more information, see [EventBridge billing](https://help.aliyun.com/document_detail/163752.html).
 *   - Data stream specifications
 *       - The data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1200 MB/s, and 1500 MB/s. The data stream bandwidth refers to the maximum transfer bandwidth that the data stream can achieve during data import or export.
 *     - Creating a data flow consumes one vSwitch IP address used by the Cloud Parallel File Storage mount target. Make sure that sufficient vSwitch IP resources are available.
 *     - Inventory check: Setting DryRun to true checks whether the resources required to create a data stream of the specified specification are available.
 *   - Fileset
 *     - The destination of a data flow is a Fileset in the General-purpose CPFS file system. A Fileset is a new directory tree structure in the General-purpose CPFS file system. It is a small file system within the parent file system and has an independent inode space and management capability.
 *     - The Fileset must already exist when you create a data flow and cannot be nested with other Filesets. Only one data flow can be created on a Fileset, corresponding to one source storage.
 *     - The maximum number of files in a Fileset is 1 million. If the number of files imported from an OSS bucket exceeds this limit, creating new files returns a `no space` error.
 *    > If data already exists in the Fileset, the existing data in the Fileset is cleared and replaced with data synchronized from OSS after the data flow is created.
 *   - Automatic synchronization
 *     - After automatic synchronization (AutoRefresh) is configured, when data in the source storage changes, the changed metadata is automatically synchronized to the Cloud Parallel File Storage file system. The changed data is loaded on demand when a user accesses the file, or loaded by starting a data stream node.
 *     - Automatic synchronization relies on EventBridge to collect object modification events from the source OSS storage. You must first [activate EventBridge](https://help.aliyun.com/document_detail/182246.html).
 *     - The scope of automatic synchronization is a prefix, specified by the RefreshPath parameter. A maximum of 5 automatic synchronization folders can be configured for a data stream.
 *     - The automatic synchronization interval (AutoRefreshInterval) specifies the synchronization interval that Cloud Parallel File Storage sets for checking whether data updates exist in the specified prefix of the source OSS bucket. If data updates exist, an automatic synchronization node is started. When the frequency of object modification events in the source OSS exceeds the processing capacity of the Cloud Parallel File Storage data stream, automatic synchronization nodes accumulate, metadata updates are delayed, and the data stream status changes to `Misconfigured`. You can increase the data stream specification or reduce the OSS modification frequency to resolve this issue.
 *     - When automatic synchronization is configured for a prefix in a Cloud Parallel File Storage data stream, an event bus is created on the user side, and an event rule is created for the prefix of the source OSS bucket. When an object modification occurs in the prefix of the source OSS bucket, an OSS event is generated in EventBridge and processed by the Cloud Parallel File Storage data stream.
 *      > The event bus and event rules created by Cloud Parallel File Storage in EventBridge have the description `Create for cpfs auto refresh`. Do not modify or delete the event bus or event rules. Otherwise, automatic synchronization does not work Normal.
 *   - Source storage
 *      - Only OSS is supported as source storage. The data stream source storage (SourceStorage) must be an OSS bucket.
 *      - Cloud Parallel File Storage data streams support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, confirm that the encryption in transit of the OSS bucket supports encrypted access.
 *      - If data streams of multiple Cloud Parallel File Storage file systems, or multiple data streams of the same Cloud Parallel File Storage file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple Cloud Parallel File Storage file systems export data to the same source.
 *      - Cross-region OSS data streams are not supported. The OSS bucket must be in the same region as the Cloud Parallel File Storage file system.
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the Cloud Parallel File Storage data stream can access the data in the bucket. Do not delete or modify this tag while the data stream is in use. Otherwise, the Cloud Parallel File Storage data stream cannot access the data in the bucket.
 * - Usage notes for CPFS for Lingjun.
 *      This section applies to CPFS for Lingjun whose file system IDs start with `bmcpfs-`.
 *   - Source storage
 *       - Only OSS is supported as source storage. The source storage (SourceStorage) of a data flow must be an OSS bucket.
 *       - CPFS for Lingjun data flows support both encrypted and non-encrypted access to OSS. If you select encrypted (SSL) access to OSS, make sure that the encryption in transit of the OSS bucket supports encrypted access.
 *       - If data flows of multiple CPFS for Lingjun file systems, or multiple data flows of the same CPFS for Lingjun file system, use the same OSS bucket as source storage, enable versioning for the OSS bucket to prevent data conflicts when multiple CPFS for Lingjun file systems export data to the same source.
 *       - Cross-region OSS data flows are not supported. The OSS bucket must be in the same region as the CPFS for Lingjun file system.
 *      - CPFS for Lingjun 2.6.0 or later supports creating data flows with cross-account OSS.
 *      - The account ID parameter is required only when you use cross-account OSS.
 *      - When you use cross-account OSS, authorize the accounts first. For more information, see [Cross-account data flow authorization](https://help.aliyun.com/document_detail/2713462.html).
 *        > Before creating a data flow, set a tag (key: cpfs-dataflow, value: true) on the source OSS bucket so that the CPFS for Lingjun data flow can access the data in the bucket. Do not delete or modify this tag while the data flow is in use. Otherwise, the CPFS for Lingjun data flow cannot access the data in the bucket.
 *   - Data flow restrictions on file systems.
 *     - In the file system path associated with a data flow, you cannot rename a non-empty directory. Otherwise, a Permission Denied or directory not empty error is returned.
 *      - Use special characters in directory and file names with caution. The following characters are supported: uppercase and lowercase letters, digits, exclamation marks (!), hyphens (-), underscores (_), periods (.), asterisks (*), and parentheses (()).
 *     - Excessively long paths are not supported. The maximum path length supported by data flows is 1023 characters.
 *   - Data flow import restrictions.
 *     - After a symlink file is imported to CPFS for Lingjun, it is converted to a regular file that contains data, and the symlink information is lost.
 *     - If the OSS bucket has multiple versions, only the latest version is copied.
 *     - File names or subdirectory names longer than 255 bytes are not supported.
 *   - Data flow export restrictions
 *     - After a symlink file is synchronized to OSS, the file that the symlink points to is not synchronized. Instead, the symlink becomes a regular empty object with no data.
 *     - A hardlink file is synchronized to OSS as a regular file.
 *     - Socket, Device, and Pipe files are converted to regular empty objects with no data when exported to an OSS bucket.
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
 * @summary Creates a subtask for a data flow streaming task.
 *
 * @description **Before you begin**
 * Before you call this operation, create resources in the following order and make sure that the resources at each level are in the required state:
 * 1. Create a file system: Create a CPFS for Lingjun file system in the console.
 *    - State requirement: The file system is in the Running state.
 * 2. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
 *    - State requirement: The data flow is in the Running state.
 * 3. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
 *    - State requirement: The data flow task is in the Executing state.
 * **Operation description**
 * - Only CPFS for Lingjun 2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 * - You can create subtasks only for data flow streaming tasks that are in the Executing state.
 * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowsubtasks-bmcpfs) to query the execution status of a streaming task.
 * - When the data flow task type is a streaming task, the Executing state only indicates that you can create streaming import or streaming export tasks. It does not indicate that the import or export task is running.
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
 * @summary Creates a subtask for a data flow streaming task.
 *
 * @description **Before you begin**
 * Before you call this operation, create resources in the following order and make sure that the resources at each level are in the required state:
 * 1. Create a file system: Create a CPFS for Lingjun file system in the console.
 *    - State requirement: The file system is in the Running state.
 * 2. Create a data flow: Call [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflow-cpfs) to create a data flow.
 *    - State requirement: The data flow is in the Running state.
 * 3. Create a data flow task: Call [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createdataflowtask-cpfs) to create a streaming import (StreamImport) or streaming export (StreamExport) task.
 *    - State requirement: The data flow task is in the Executing state.
 * **Operation description**
 * - Only CPFS for Lingjun 2.6.0 and later support this operation. You can view the version information on the file system details page in the console.
 * - You can create subtasks only for data flow streaming tasks that are in the Executing state.
 * - Data flow streaming tasks are executed asynchronously. You can call [DescribeDataFlowSubTasks](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-describedataflowsubtasks-bmcpfs) to query the execution status of a streaming task.
 * - When the data flow task type is a streaming task, the Executing state only indicates that you can create streaming import or streaming export tasks. It does not indicate that the import or export task is running.
 *
 * @param request CreateDataFlowSubTaskRequest
 * @return CreateDataFlowSubTaskResponse
 */
CreateDataFlowSubTaskResponse Client::createDataFlowSubTask(const CreateDataFlowSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataFlowSubTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a data flow task.
 *
 * @description - Notes on CPFS
 *   - Only CPFS 2.2.0 and later support data flow. You can view the version information on the file system details page in the console.
 *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
 *   - You can create a data flow task only on a data flow in the Running state.
 *   - When you manually run a data flow task, the automatic data update task of the data flow is interrupted and waits.
 *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS does not exceed 1,023 characters.
 * - Notes on CPFS for Lingjun
 *   - Only CPFS for Lingjun 2.4.0 and later support data flow. You can view the version information on the file system details page in the console.
 *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
 *   - You can create a data flow task only on a data flow in the Running state.
 *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS for Lingjun does not exceed 1,023 characters.
 *   - CPFS for Lingjun supports two task types: batch tasks and streaming tasks. For more information, see [Task type overview](https://help.aliyun.com/document_detail/2845429.html).
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
 * @summary Creates a data flow task.
 *
 * @description - Notes on CPFS
 *   - Only CPFS 2.2.0 and later support data flow. You can view the version information on the file system details page in the console.
 *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
 *   - You can create a data flow task only on a data flow in the Running state.
 *   - When you manually run a data flow task, the automatic data update task of the data flow is interrupted and waits.
 *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS does not exceed 1,023 characters.
 * - Notes on CPFS for Lingjun
 *   - Only CPFS for Lingjun 2.4.0 and later support data flow. You can view the version information on the file system details page in the console.
 *   - Data flow tasks are executed asynchronously. You can call [DescribeDataFlowTasks](https://help.aliyun.com/document_detail/2402275.html) to query the task execution status. The time required for a task depends on the amount of data to be imported or exported. For large amounts of data, split the data into multiple tasks.
 *   - You can create a data flow task only on a data flow in the Running state.
 *   - When you create an export task, make sure that the total length of the absolute path of the file to be exported from CPFS for Lingjun does not exceed 1,023 characters.
 *   - CPFS for Lingjun supports two task types: batch tasks and streaming tasks. For more information, see [Task type overview](https://help.aliyun.com/document_detail/2845429.html).
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
 * @description Only General-purpose NAS NFS protocol file systems support this feature.
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
 * @description Only General-purpose NAS NFS protocol file systems support this feature.
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
 * @description - This operation is available only to specific users.
 * - Only General-purpose NAS file systems that use the SMB Protocol Type and have access control enabled are supported. Alibaba Cloud Key Management Service (KMS) must also be activated.
 * ## Prerequisites
 * Before calling this API to create a file, complete the following four steps:
 * 1. **Create an SMB General-purpose NAS file system**: Call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation with ProtocolType set to SMB to create a General-purpose NAS file system that supports the SMB protocol.
 * 2. **Activate KMS**: Activate KMS by using one of the following methods:
 *    - Call the Kms.OpenKmsService API operation.
 *    - Go to the [console activation page](https://common-buy.aliyun.com/?commodityCode=kms#/open).
 * 3. **Enable SMB ACL**: Call the [EnableSmbAcl](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablesmbacl) operation to enable the SMB ACL feature. Recommended configuration:
 *    - AuthMethod=NTLM
 *    - AuthCenter=EDS
 *    - This configuration does not require an AD domain Keytab and is easier to use.
 * 4. **Call CreateFile**: After completing the preceding steps, call this operation to create a directory or file.
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
 * @description - This operation is available only to specific users.
 * - Only General-purpose NAS file systems that use the SMB Protocol Type and have access control enabled are supported. Alibaba Cloud Key Management Service (KMS) must also be activated.
 * ## Prerequisites
 * Before calling this API to create a file, complete the following four steps:
 * 1. **Create an SMB General-purpose NAS file system**: Call the [CreateFileSystem](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createfilesystem) operation with ProtocolType set to SMB to create a General-purpose NAS file system that supports the SMB protocol.
 * 2. **Activate KMS**: Activate KMS by using one of the following methods:
 *    - Call the Kms.OpenKmsService API operation.
 *    - Go to the [console activation page](https://common-buy.aliyun.com/?commodityCode=kms#/open).
 * 3. **Enable SMB ACL**: Call the [EnableSmbAcl](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablesmbacl) operation to enable the SMB ACL feature. Recommended configuration:
 *    - AuthMethod=NTLM
 *    - AuthCenter=EDS
 *    - This configuration does not require an AD domain Keytab and is easier to use.
 * 4. **Call CreateFile**: After completing the preceding steps, call this operation to create a directory or file.
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
 * @description <props="china">
 * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/).
 * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
 * <props="intl">
 * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.alibabacloud.com/zh/product/nas/pricing?_p_lc=1&spm=a2796.7960336.8215766810.64.414bb91aiZQiRG&spm=a2c4g.11186623.help-menu-27516.d_5_1_4_2_0.572a1880hEiKCk).
 * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description <props="china">
 * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.aliyun.com/price/product?#/nas/).
 * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
 * <props="intl">
 * - Before you call this operation, make sure that you fully understand the billing and pricing of File Storage NAS. For more information, see [Billing](https://help.aliyun.com/document_detail/178365.html) and [Pricing](https://www.alibabacloud.com/zh/product/nas/pricing?_p_lc=1&spm=a2796.7960336.8215766810.64.414bb91aiZQiRG&spm=a2c4g.11186623.help-menu-27516.d_5_1_4_2_0.572a1880hEiKCk).
 * - To create a file system instance, complete real-name verification. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/48263.html).
 * - When you invoke this operation, the NAS service-linked role required for the operation is automatically created. For more information, see [Manage the service-linked role for File Storage NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description - Usage notes for CPFS.
 *   - Only CPFS 2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
 *   - A maximum of 10 filesets can be created for a single CPFS file system.
 *   - The parent directory must be an existing directory.
 *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
 *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets.
 *   - A fileset supports a maximum of 1,000,000 files. If the number of files exceeds this limit, adding new files returns a `no space` error message.
 * - Usage notes for CPFS for Lingjun
 *   - Only CPFS for Lingjun 2.7.0 and later support fileset creation. You can view the version information on the file system details page in the console.
 *   - A maximum of 500 filesets can be created for a single CPFS file system.
 *   - The fileset path must be a new path and cannot be an existing path. Renaming a fileset path is not supported, and the path cannot be a symbolic link.
 *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
 *   - If the fileset path contains multiple directory levels, the parent directory must be an existing directory.
 *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets. Only one quota is supported for each fileset path.
 *   - The minimum capacity quota for a fileset is 10 GiB, and the capacity can be increased in increments of 1 GiB.
 *   - A fileset supports a maximum of 10,000,000,000 files or directories, with a minimum of 10,000 and an increment of 1.
 *   - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
 *   - Quota statistics have a 15-minute delay. The current actual usage takes effect after 15 minutes.
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
 * @description - Usage notes for CPFS.
 *   - Only CPFS 2.2.0 and later support fileset creation. You can view the version information on the file system details page in the console.
 *   - A maximum of 10 filesets can be created for a single CPFS file system.
 *   - The parent directory must be an existing directory.
 *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
 *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets.
 *   - A fileset supports a maximum of 1,000,000 files. If the number of files exceeds this limit, adding new files returns a `no space` error message.
 * - Usage notes for CPFS for Lingjun
 *   - Only CPFS for Lingjun 2.7.0 and later support fileset creation. You can view the version information on the file system details page in the console.
 *   - A maximum of 500 filesets can be created for a single CPFS file system.
 *   - The fileset path must be a new path and cannot be an existing path. Renaming a fileset path is not supported, and the path cannot be a symbolic link.
 *   - The maximum depth of a fileset path is 8 levels, with the root directory / as level 0. For example, a fileset path of /test/aaa/ccc/ has a depth of 3 levels.
 *   - If the fileset path contains multiple directory levels, the parent directory must be an existing directory.
 *   - Nesting filesets within a fileset is not supported. If a parent directory is already specified as a fileset, its subdirectories cannot be specified as filesets. Only one quota is supported for each fileset path.
 *   - The minimum capacity quota for a fileset is 10 GiB, and the capacity can be increased in increments of 1 GiB.
 *   - A fileset supports a maximum of 10,000,000,000 files or directories, with a minimum of 10,000 and an increment of 1.
 *   - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
 *   - Quota statistics have a 15-minute delay. The current actual usage takes effect after 15 minutes.
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
 * @summary Adds an LDAP configuration.
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
 * @summary Adds an LDAP configuration.
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
 * - Each CPFS for Lingjun file system supports up to 10 Auto-type and 100 OnDemand-type lifecycle management policies.
 * - Up to 20 lifecycle management policies for General-purpose NAS can be created in each region.
 *
 * @param request CreateLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLifecyclePolicyResponse
 */
CreateLifecyclePolicyResponse Client::createLifecyclePolicyWithOptions(const CreateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteRules()) {
    query["DeleteRules"] = request.getDeleteRules();
  }

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
 * - Each CPFS for Lingjun file system supports up to 10 Auto-type and 100 OnDemand-type lifecycle management policies.
 * - Up to 20 lifecycle management policies for General-purpose NAS can be created in each region.
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
 * @summary Delivers system logs of a General-purpose NAS file system to log analysis.
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
 * @summary Delivers system logs of a General-purpose NAS file system to log analysis.
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
 * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, call the DescribeMountTargets operation to query the mount target status. Mount the file system only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
 * - Calling this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description - When you call the CreateMountTarget operation to create a mount target, some resources are generated asynchronously. After the CreateMountTarget operation succeeds, call the DescribeMountTargets operation to query the mount target status. Mount the file system only after the mount target status changes to **Active**. Otherwise, the mount operation may fail.
 * - Calling this operation triggers the automatic creation of the service-linked role required for the operation. For more information, see [Manage the service-linked role for NAS](https://help.aliyun.com/document_detail/208530.html).
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
 * @description -  This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * -  Before you begin
 *   
 *    The target CPFS file system must be in the Running state, and a protocol service must have been created.
 * - Other information
 *     - The VPC CIDR block of the protocol service export must not overlap with the VPC CIDR block of the file system.
 *     - The VPC CIDR blocks of multiple exports on the same protocol service must not overlap with each other.
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
 * @description -  This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * -  Before you begin
 *   
 *    The target CPFS file system must be in the Running state, and a protocol service must have been created.
 * - Other information
 *     - The VPC CIDR block of the protocol service export must not overlap with the VPC CIDR block of the file system.
 *     - The VPC CIDR blocks of multiple exports on the same protocol service must not overlap with each other.
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
 * @description - This operation applies only to CPFS file systems.
 * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of a file system.
 * - Protocol service specifications.
 *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
 *   
 *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
 *     -  Cache: Provides server-side in-memory caching based on the LRU policy on top of the General type. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
 *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
 * - Protocol type.
 *   Only NFSv3 is supported.
 * - Before you begin.
 *   The CPFS file system must be created and in the Running state.
 * - Other information.
 *     - Only one protocol service can be created for each CPFS file system.
 *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the vSwitch has sufficient IP address resources.
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
 * @description - This operation applies only to CPFS file systems.
 * -  Only CPFS 2.3.0 and later support protocol services. You can call the [DescribeFileSystems](https://help.aliyun.com/document_detail/163314.html) operation to query the version of a file system.
 * - Protocol service specifications.
 *   Protocol services include two Protocol Types: General and Cache. Compared with the General type, the Cache type provides hot spot data caching. When the cache is hit, the bandwidth of the Cache type protocol service can exceed the bandwidth of the CPFS file system and reach the maximum bandwidth configured for the protocol service.
 *   
 *     -   General: Provides NFS protocol access and [folder-level mount targets](https://help.aliyun.com/document_detail/427175.html) for CPFS. You do not need to configure a POSIX client cluster management. This feature is free of charge.
 *     -  Cache: Provides server-side in-memory caching based on the LRU policy on top of the General type. When data is cached in memory, CPFS can provide higher internal network bandwidth. The Cache type protocol service is available in two specifications: Cache L1 and Cache L2, which differ in internal network bandwidth and memory cache size.
 *      >  The Cache type protocol service is a paid service and is in invitational preview. For information about the billing of the Cache type protocol service, see [Billable items](https://help.aliyun.com/document_detail/111858.html). If you have any feedback or questions, join the DingTalk user group (group ID: 31045006299) to communicate with CPFS engineers.
 * - Protocol type.
 *   Only NFSv3 is supported.
 * - Before you begin.
 *   The CPFS file system must be created and in the Running state.
 * - Other information.
 *     - Only one protocol service can be created for each CPFS file system.
 *     - Creating a protocol service consumes IP addresses on the specified vSwitch (up to 32 IP addresses). Make sure that the vSwitch has sufficient IP address resources.
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
 * - Mount the file system by using NFS or SMB (you must use an ECS instance in the same VPC to mount the file system), and then delete the target file from the mount directory to move it to the recycle bin.
 * - When you permanently delete a directory, the contents in the directory are recursively deleted.
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
 * - Mount the file system by using NFS or SMB (you must use an ECS instance in the same VPC to mount the file system), and then delete the target file from the mount directory to move it to the recycle bin.
 * - When you permanently delete a directory, the contents in the directory are recursively deleted.
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
 * @summary Restores a file from the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - A single file system can run only one file restoration or cleanup task at a time. While a file is being restored, you cannot initiate a new file restoration or cleanup task.
 * - A single restoration task can restore only one file or directory. Restoring a specified directory recursively restores all files in the directory.
 * - After a file is restored, data reorganization is performed. Read request performance slightly decreases during data reorganization.
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
 * @summary Restores a file from the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - A single file system can run only one file restoration or cleanup task at a time. While a file is being restored, you cannot initiate a new file restoration or cleanup task.
 * - A single restoration task can restore only one file or directory. Restoring a specified directory recursively restores all files in the directory.
 * - After a file is restored, data reorganization is performed. Read request performance slightly decreases during data reorganization.
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
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.40a34bbe4vbvKY) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support snapshot creation.
 * - A maximum of 128 snapshots can be created for a single file system.
 * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
 * - If a snapshot is being created, you cannot create another snapshot for the same file system.
 * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
 * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
 * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
 * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support snapshot creation.
 * - A maximum of 128 snapshots can be created for a single file system.
 * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
 * - If a snapshot is being created, you cannot create another snapshot for the same file system.
 * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
 * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
 * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
 * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
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
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.40a34bbe4vbvKY) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support snapshot creation.
 * - A maximum of 128 snapshots can be created for a single file system.
 * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
 * - If a snapshot is being created, you cannot create another snapshot for the same file system.
 * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
 * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
 * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
 * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support snapshot creation.
 * - A maximum of 128 snapshots can be created for a single file system.
 * - The instance on which the file system is mounted must be in the Normal state. Otherwise, snapshots cannot be created.
 * - If a snapshot is being created, you cannot create another snapshot for the same file system.
 * - If the file system reaches its expire and release time while a snapshot is being created, the file system is released and the snapshot in the Creating state is also deleted.
 * - Creating a snapshot may slightly degrade the performance of the file system and temporarily slow down I/O performance. Avoid creating snapshots during peak hours.
 * - A snapshot only captures a backup of data at a specific point in time. Incremental data generated by file system operations during snapshot creation is not subject to synchronization to the snapshot.
 * - Manually created snapshots are retained until they are deleted 15 days after your account has an overdue payment and services are suspended. Periodically delete snapshots that are no longer needed to avoid ongoing snapshot size charges.
 *
 * @param request CreateSnapshotRequest
 * @return CreateSnapshotResponse
 */
CreateSnapshotResponse Client::createSnapshot(const CreateSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSnapshotWithOptions(request, runtime);
}

/**
 * @summary Deletes an existing permission group.
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
 * @summary Deletes an existing permission group.
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
 * @description - Only NFS protocol file systems of General-purpose NAS support this feature.
 * - After you delete an access point, all I/O operations that are accessing the folder through the access point are immediately interrupted. Proceed with caution.
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
 * @description - Only NFS protocol file systems of General-purpose NAS support this feature.
 * - After you delete an access point, all I/O operations that are accessing the folder through the access point are immediately interrupted. Proceed with caution.
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
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
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
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - If the automatic snapshot policy has been applied to a file system, the file system no longer executes the policy after the policy is deleted.
 *
 * @param request DeleteAutoSnapshotPolicyRequest
 * @return DeleteAutoSnapshotPolicyResponse
 */
DeleteAutoSnapshotPolicyResponse Client::deleteAutoSnapshotPolicy(const DeleteAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a CPFS for Lingjun access point.
 *
 * @description Deletes a CPFS for Lingjun access point.
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
 * @summary Deletes a CPFS for Lingjun access point.
 *
 * @description Deletes a CPFS for Lingjun access point.
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
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * - You can delete only dataflows in the `Running` or `Stopped` state.
 * - After a dataflow is deleted, the related resources are released and cannot be recovered. To use a dataflow again, create a new one.
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
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * - You can delete only dataflows in the `Running` or `Stopped` state.
 * - After a dataflow is deleted, the related resources are released and cannot be recovered. To use a dataflow again, create a new one.
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
 * @description - You can delete a file system only when the number of mount targets on the file system is 0.
 * - You can delete a file system only when no lifecycle policy is created for the file system.
 * - After a file system is deleted, the data cannot be recovered. Proceed with caution.
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
 * @description - You can delete a file system only when the number of mount targets on the file system is 0.
 * - You can delete a file system only when no lifecycle policy is created for the file system.
 * - After a file system is deleted, the data cannot be recovered. Proceed with caution.
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
 * - If deletion protection is enabled, you must disable deletion protection before you can delete the fileset.
 * - All filesets on the target file system must be in the CREATED desired state before you can perform the delete operation.
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
 * - If deletion protection is enabled, you must disable deletion protection before you can delete the fileset.
 * - All filesets on the target file system must be in the CREATED desired state before you can perform the delete operation.
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
 * @summary Deletes LDAP settings.
 *
 * @description # Description
 * This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
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
 * @summary Deletes LDAP settings.
 *
 * @description # Description
 * This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
 *
 * @param request DeleteLDAPConfigRequest
 * @return DeleteLDAPConfigResponse
 */
DeleteLDAPConfigResponse Client::deleteLDAPConfig(const DeleteLDAPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLDAPConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a lifecycle management policy.
 *
 * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
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
 * @summary Deletes a lifecycle management policy.
 *
 * @description Only General-purpose NAS file systems and CPFS for Lingjun support this feature.
 *
 * @param request DeleteLifecyclePolicyRequest
 * @return DeleteLifecyclePolicyResponse
 */
DeleteLifecyclePolicyResponse Client::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Stops log analysis for a General-purpose NAS file system.
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
 * @summary Stops log analysis for a General-purpose NAS file system.
 *
 * @param request DeleteLogAnalysisRequest
 * @return DeleteLogAnalysisResponse
 */
DeleteLogAnalysisResponse Client::deleteLogAnalysis(const DeleteLogAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLogAnalysisWithOptions(request, runtime);
}

/**
 * @summary Deletes an existing mount target.
 *
 * @description After a mount target is deleted, it cannot be recovered. Proceed with caution.
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
 * @summary Deletes an existing mount target.
 *
 * @description After a mount target is deleted, it cannot be recovered. Proceed with caution.
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
 * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
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
 * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request DeleteProtocolMountTargetRequest
 * @return DeleteProtocolMountTargetResponse
 */
DeleteProtocolMountTargetResponse Client::deleteProtocolMountTarget(const DeleteProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Deletes a protocol service from a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description - This operation applies only to CPFS file systems.
 * - When you delete a protocol service, all export directories in the protocol service are also deleted.
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
 * @summary Deletes a protocol service from a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description - This operation applies only to CPFS file systems.
 * - When you delete a protocol service, all export directories in the protocol service are also deleted.
 *
 * @param request DeleteProtocolServiceRequest
 * @return DeleteProtocolServiceResponse
 */
DeleteProtocolServiceResponse Client::deleteProtocolService(const DeleteProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified snapshot or cancels an ongoing snapshot creation task.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Deletes a specified snapshot or cancels an ongoing snapshot creation task.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Queries the description of a permission rule.
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
 * @summary Queries the description of a permission rule.
 *
 * @param request DescribeAccessRulesRequest
 * @return DescribeAccessRulesResponse
 */
DescribeAccessRulesResponse Client::describeAccessRules(const DescribeAccessRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccessRulesWithOptions(request, runtime);
}

/**
 * @summary Queries Agentic spaces.
 *
 * @description Applies to Agentic file systems.
 * ## Before you begin
 * Before you call this operation, create resources in the following order:
 * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
 *    - `StorageType`: Set to `Agentic`.
 *    - `ProtocolType`: Set to `NFS`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
 * 2. **Query the AgenticSpace list**: After the file system is created and its status changes to Running, call the DescribeAgenticSpaces operation to query the AgenticSpace list under the file system.
 *    - If Agentic spaces are created under the file system, the complete list is returned.
 *    - If no Agentic spaces are created under the file system, an empty list is returned.
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
 * @summary Queries Agentic spaces.
 *
 * @description Applies to Agentic file systems.
 * ## Before you begin
 * Before you call this operation, create resources in the following order:
 * 1. **Create an Agentic file system**: When you call [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) to create a file system, set the following parameters:
 *    - `StorageType`: Set to `Agentic`.
 *    - `ProtocolType`: Set to `NFS`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. For more information, see the console.
 * 2. **Query the AgenticSpace list**: After the file system is created and its status changes to Running, call the DescribeAgenticSpaces operation to query the AgenticSpace list under the file system.
 *    - If Agentic spaces are created under the file system, the complete list is returned.
 *    - If no Agentic spaces are created under the file system, an empty list is returned.
 *
 * @param request DescribeAgenticSpacesRequest
 * @return DescribeAgenticSpacesResponse
 */
DescribeAgenticSpacesResponse Client::describeAgenticSpaces(const DescribeAgenticSpacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAgenticSpacesWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic snapshot policies that have been created.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Queries the automatic snapshot policies that have been created.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 *
 * @param request DescribeAutoSnapshotPoliciesRequest
 * @return DescribeAutoSnapshotPoliciesResponse
 */
DescribeAutoSnapshotPoliciesResponse Client::describeAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoSnapshotPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of automatic snapshot tasks.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Queries the list of automatic snapshot tasks.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Retrieves the status of blacklisted clients in the Cloud Parallel File Storage (CPFS) service.
 *
 * @description # Description
 * This operation applies only to CPFS parallel file systems.
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
 * @summary Retrieves the status of blacklisted clients in the Cloud Parallel File Storage (CPFS) service.
 *
 * @description # Description
 * This operation applies only to CPFS parallel file systems.
 *
 * @param request DescribeBlackListClientsRequest
 * @return DescribeBlackListClientsResponse
 */
DescribeBlackListClientsResponse Client::describeBlackListClients(const DescribeBlackListClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBlackListClientsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
 *
 * @description Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
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
 * @summary Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
 *
 * @description Queries the list of clients mounted to an access point of a CPFS for Lingjun file system.
 *
 * @param request DescribeCpfsAccessPointMountedClientsRequest
 * @return DescribeCpfsAccessPointMountedClientsResponse
 */
DescribeCpfsAccessPointMountedClientsResponse Client::describeCpfsAccessPointMountedClients(const DescribeCpfsAccessPointMountedClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCpfsAccessPointMountedClientsWithOptions(request, runtime);
}

/**
 * @summary Queries access points of CPFS for Lingjun.
 *
 * @description Queries access points of CPFS for Lingjun.
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

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries access points of CPFS for Lingjun.
 *
 * @description Queries access points of CPFS for Lingjun.
 *
 * @param request DescribeCpfsAccessPointsRequest
 * @return DescribeCpfsAccessPointsResponse
 */
DescribeCpfsAccessPointsResponse Client::describeCpfsAccessPoints(const DescribeCpfsAccessPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCpfsAccessPointsWithOptions(request, runtime);
}

/**
 * @summary Queries the batch subtasks of a data flow.
 *
 * @description Supported only by CPFS for Lingjun 2.6.0 and later. You can view the version information on the file system details page in the console.
 * **Before you begin**
 * Before you call this operation to query data flow subtasks, you must create resources and start tasks in the following order:
 * 1. **Create a bmcpfs file system**: You must create a CPFS for Lingjun file system in the console and wait until its status changes to Running.
 * 2. **Create a data flow rule**: Call the [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) operation on the file system to establish a data flow channel.
 * 3. **Start a data flow task**: Call the [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) operation to create and start a data flow task. The task status must be Running.
 * 4. **Query the subtask list**: Subtasks are automatically generated during the execution of a data flow task. Call the DescribeDataFlowSubTasks operation to query the list of these subtasks.
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
 * @summary Queries the batch subtasks of a data flow.
 *
 * @description Supported only by CPFS for Lingjun 2.6.0 and later. You can view the version information on the file system details page in the console.
 * **Before you begin**
 * Before you call this operation to query data flow subtasks, you must create resources and start tasks in the following order:
 * 1. **Create a bmcpfs file system**: You must create a CPFS for Lingjun file system in the console and wait until its status changes to Running.
 * 2. **Create a data flow rule**: Call the [CreateDataFlow](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflow-bmcpfs) operation on the file system to establish a data flow channel.
 * 3. **Start a data flow task**: Call the [CreateDataFlowTask](https://www.alibabacloud.com/help/en/cpfs/bmcpfs/developer-reference/api-nas-2017-06-26-createdataflowtask-bmcpfs) operation to create and start a data flow task. The task status must be Running.
 * 4. **Query the subtask list**: Subtasks are automatically generated during the execution of a data flow task. Call the DescribeDataFlowSubTasks operation to query the list of these subtasks.
 *
 * @param request DescribeDataFlowSubTasksRequest
 * @return DescribeDataFlowSubTasksResponse
 */
DescribeDataFlowSubTasksResponse Client::describeDataFlowSubTasks(const DescribeDataFlowSubTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowSubTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the details of data flow tasks.
 *
 * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support querying data flow tasks. You can view the version information on the file system details page in the console.
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
 * @summary Queries the details of data flow tasks.
 *
 * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support querying data flow tasks. You can view the version information on the file system details page in the console.
 *
 * @param request DescribeDataFlowTasksRequest
 * @return DescribeDataFlowTasksResponse
 */
DescribeDataFlowTasksResponse Client::describeDataFlowTasks(const DescribeDataFlowTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowTasksWithOptions(request, runtime);
}

/**
 * @summary Queries data flow information of a CPFS file system.
 *
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
 * - For filter keys (Filters), FsetIds, DataFlowIds, SourceStorage, ThroughputList, and Status require exact match. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
 * - Combined queries are supported.
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
 * @summary Queries data flow information of a CPFS file system.
 *
 * @description - Only CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data flows. You can view the version information on the file system details page in the console.
 * - For filter keys (Filters), FsetIds, DataFlowIds, SourceStorage, ThroughputList, and Status require exact match. FileSystemPath, Description, and SourceStoragePath support fuzzy match.
 * - Combined queries are supported.
 *
 * @param request DescribeDataFlowsRequest
 * @return DescribeDataFlowsResponse
 */
DescribeDataFlowsResponse Client::describeDataFlows(const DescribeDataFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataFlowsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of each directory quota in a file system.
 *
 * @description Only General-purpose NAS NFS file systems support the directory quota feature.
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
 * @summary Retrieves the details of each directory quota in a file system.
 *
 * @description Only General-purpose NAS NFS file systems support the directory quota feature.
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
 * @summary Lists the statistics information of file systems under the current account.
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
 * @summary Lists the statistics information of file systems under the current account.
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
 * - For filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
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
 * - For filter keys (Filters), FsetIds requires an exact match, while FileSystemPath and Description support fuzzy match.
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
 * @summary Queries the list of HpnZones associated with file systems. When compute nodes are located in an associated HpnZone, access to the file system achieves optimal performance.
 *
 * @description - Only CPFS for Lingjun file systems are supported.
 * - This is a batch operation that allows you to query up to 20 file systems at a time.
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
 * @summary Queries the list of HpnZones associated with file systems. When compute nodes are located in an associated HpnZone, access to the file system achieves optimal performance.
 *
 * @description - Only CPFS for Lingjun file systems are supported.
 * - This is a batch operation that allows you to query up to 20 file systems at a time.
 *
 * @param request DescribeFilesystemsAssociatedHpnZonesRequest
 * @return DescribeFilesystemsAssociatedHpnZonesResponse
 */
DescribeFilesystemsAssociatedHpnZonesResponse Client::describeFilesystemsAssociatedHpnZones(const DescribeFilesystemsAssociatedHpnZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFilesystemsAssociatedHpnZonesWithOptions(request, runtime);
}

/**
 * @summary Queries the virtual storage channel information associated with file systems.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
 * - To query the association results between file systems and virtual storage channels, call AttachVscToFilesystems to complete the association first. You can call ListVscs of Lingjun Intelligent Computing eflo-controller/2022-12-15 to query VscIds. If no virtual storage channel has been created, call CreateVsc to create one.
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
 * @summary Queries the virtual storage channel information associated with file systems.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch execution is supported. In batch execution mode, only one VscId can be associated with multiple FileSystemIds. This means the ResourceIds.VscId values must be the same.
 * - To query the association results between file systems and virtual storage channels, call AttachVscToFilesystems to complete the association first. You can call ListVscs of Lingjun Intelligent Computing eflo-controller/2022-12-15 to query VscIds. If no virtual storage channel has been created, call CreateVsc to create one.
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
 * @summary Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
 *
 * @description Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
 * ## Before you begin
 * - Make sure that the file system specified by FileSystemId is a CPFS for Lingjun file system.
 * - Before you call this operation, call [DescribeLifecyclePolicies](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describelifecyclepolicies) to query and obtain a valid LifecyclePolicyId.
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
 * @summary Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
 *
 * @description Queries the execution logs of a lifecycle policy. You can query the logs generated within the last 90 days or up to 1,000 log entries. Only CPFS for Lingjun is supported.
 * ## Before you begin
 * - Make sure that the file system specified by FileSystemId is a CPFS for Lingjun file system.
 * - Before you call this operation, call [DescribeLifecyclePolicies](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describelifecyclepolicies) to query and obtain a valid LifecyclePolicyId.
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
 * @summary Queries the list of mounted clients.
 *
 * @description - Only General-purpose NAS file systems support this operation.
 * - The client list displays client IP addresses that have read or write access to the file system within the last minute. Some mounted client IP addresses that have not accessed the file system may not appear in this list.
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
 * @summary Queries the list of mounted clients.
 *
 * @description - Only General-purpose NAS file systems support this operation.
 * - The client list displays client IP addresses that have read or write access to the file system within the last minute. Some mounted client IP addresses that have not accessed the file system may not appear in this list.
 *
 * @param request DescribeMountedClientsRequest
 * @return DescribeMountedClientsResponse
 */
DescribeMountedClientsResponse Client::describeMountedClients(const DescribeMountedClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMountedClientsWithOptions(request, runtime);
}

/**
 * @summary Queries whether the NFS ACL feature is enabled for a specified file system.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @summary Queries whether the NFS ACL feature is enabled for a specified file system.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
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
 * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
 *
 * @param request DescribeProtocolMountTargetRequest
 * @return DescribeProtocolMountTargetResponse
 */
DescribeProtocolMountTargetResponse Client::describeProtocolMountTarget(const DescribeProtocolMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProtocolMountTargetWithOptions(request, runtime);
}

/**
 * @summary Queries protocol service information.
 *
 * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
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
 * @summary Queries protocol service information.
 *
 * @description This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
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
 * @summary Queries the SMB AD ACL feature.
 *
 * @description - Before you begin: Before calling this API, ensure that the KMS service is activated in the target region. You can activate it by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or through the console. This restriction also applies to unencrypted file systems where EncryptType=0.
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
 * @summary Queries the SMB AD ACL feature.
 *
 * @description - Before you begin: Before calling this API, ensure that the KMS service is activated in the target region. You can activate it by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or through the console. This restriction also applies to unencrypted file systems where EncryptType=0.
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
 * @summary Queries the list of storage plans.
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
 * @summary Queries the list of storage plans.
 *
 * @param request DescribeStoragePackagesRequest
 * @return DescribeStoragePackagesResponse
 */
DescribeStoragePackagesResponse Client::describeStoragePackages(const DescribeStoragePackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStoragePackagesWithOptions(request, runtime);
}

/**
 * @summary Queries all zones in a region and the file system types supported by each zone.
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
 * @summary Queries all zones in a region and the file system types supported by each zone.
 *
 * @param request DescribeZonesRequest
 * @return DescribeZonesResponse
 */
DescribeZonesResponse Client::describeZones(const DescribeZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeZonesWithOptions(request, runtime);
}

/**
 * @summary Dissociates a Virtual Storage Channel (VSC) device from a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
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
 * @summary Dissociates a Virtual Storage Channel (VSC) device from a file system.
 *
 * @description - Only CPFS for Lingjun supports this feature.
 * - Batch operations are supported. In batch mode, only one VscId can be associated with multiple FileSystemId values. This means the ResourceIds.VscId values must be the same.
 *
 * @param request DetachVscFromFilesystemsRequest
 * @return DetachVscFromFilesystemsResponse
 */
DetachVscFromFilesystemsResponse Client::detachVscFromFilesystems(const DetachVscFromFilesystemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachVscFromFilesystemsWithOptions(request, runtime);
}

/**
 * @summary Disables the recycle bin feature for a General-purpose NAS file system and deletes all data in the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - Disabling the recycle bin permanently deletes all files in the recycle bin.
 * - After a disabled recycle bin is re-enabled, the recycle bin is empty. Files deleted before the recycle bin was re-enabled cannot be recovered.
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
 * @summary Disables the recycle bin feature for a General-purpose NAS file system and deletes all data in the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - Disabling the recycle bin permanently deletes all files in the recycle bin.
 * - After a disabled recycle bin is re-enabled, the recycle bin is empty. Files deleted before the recycle bin was re-enabled cannot be recovered.
 *
 * @param request DisableAndCleanRecycleBinRequest
 * @return DisableAndCleanRecycleBinResponse
 */
DisableAndCleanRecycleBinResponse Client::disableAndCleanRecycleBin(const DisableAndCleanRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAndCleanRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Disables EBS Lens.
 *
 * @description - This operation is currently in invitational preview. To use this feature, submit a ticket.
 *
 * @param request DisableDataInsightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableDataInsightResponse
 */
DisableDataInsightResponse Client::disableDataInsightWithOptions(const DisableDataInsightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableDataInsight"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableDataInsightResponse>();
}

/**
 * @summary Disables EBS Lens.
 *
 * @description - This operation is currently in invitational preview. To use this feature, submit a ticket.
 *
 * @param request DisableDataInsightRequest
 * @return DisableDataInsightResponse
 */
DisableDataInsightResponse Client::disableDataInsight(const DisableDataInsightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableDataInsightWithOptions(request, runtime);
}

/**
 * @summary Disables the NFS ACL feature.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @summary Disables the NFS ACL feature.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
 *
 * @param request DisableNfsAclRequest
 * @return DisableNfsAclResponse
 */
DisableNfsAclResponse Client::disableNfsAcl(const DisableNfsAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableNfsAclWithOptions(request, runtime);
}

/**
 * @summary Disables the SMB AD ACL feature.
 *
 * @description - Before you begin: Before calling this API, make sure that Key Management Service (KMS) is activated in the target region. You can activate KMS by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or by using the console. The file system protocol type must be SMB. You can call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to verify the file system protocol type.
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
 * @summary Disables the SMB AD ACL feature.
 *
 * @description - Before you begin: Before calling this API, make sure that Key Management Service (KMS) is activated in the target region. You can activate KMS by calling the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) API or by using the console. The file system protocol type must be SMB. You can call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to verify the file system protocol type.
 *
 * @param request DisableSmbAclRequest
 * @return DisableSmbAclResponse
 */
DisableSmbAclResponse Client::disableSmbAcl(const DisableSmbAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSmbAclWithOptions(request, runtime);
}

/**
 * @summary Enables EBS Lens.
 *
 * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
 *
 * @param request EnableDataInsightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableDataInsightResponse
 */
EnableDataInsightResponse Client::enableDataInsightWithOptions(const EnableDataInsightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableDataInsight"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableDataInsightResponse>();
}

/**
 * @summary Enables EBS Lens.
 *
 * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
 *
 * @param request EnableDataInsightRequest
 * @return EnableDataInsightResponse
 */
EnableDataInsightResponse Client::enableDataInsight(const EnableDataInsightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableDataInsightWithOptions(request, runtime);
}

/**
 * @summary Enables the NFS ACL feature.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
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
 * @summary Enables the NFS ACL feature.
 *
 * @description Only General-purpose NAS NFS file systems support this feature.
 *
 * @param request EnableNfsAclRequest
 * @return EnableNfsAclResponse
 */
EnableNfsAclResponse Client::enableNfsAcl(const EnableNfsAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableNfsAclWithOptions(request, runtime);
}

/**
 * @summary Enables the recycle bin feature.
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
 * @summary Enables the recycle bin feature.
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
 * @summary Enables the SMB AD ACL feature.
 *
 * @description - By connecting the mount target of an SMB file system to an AD domain, you can implement user identity authentication management and file-level access permissions control in the AD domain. Before you mount and use an SMB file system as an AD domain user, you must register a service for the SMB file system in the AD domain, generate a keytab file, and upload the file to the NAS console to enable the SMB ACL feature. [Generate a keytab file](https://help.aliyun.com/document_detail/154930.html).
 * - Before you begin: Before invoking this operation, confirm that Key Management Service (KMS) is activated in the target area. You can invoke the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) operation or activate KMS in the console.
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
 * @summary Enables the SMB AD ACL feature.
 *
 * @description - By connecting the mount target of an SMB file system to an AD domain, you can implement user identity authentication management and file-level access permissions control in the AD domain. Before you mount and use an SMB file system as an AD domain user, you must register a service for the SMB file system in the AD domain, generate a keytab file, and upload the file to the NAS console to enable the SMB ACL feature. [Generate a keytab file](https://help.aliyun.com/document_detail/154930.html).
 * - Before you begin: Before invoking this operation, confirm that Key Management Service (KMS) is activated in the target area. You can invoke the [Kms.OpenKmsService](https://www.alibabacloud.com/help/en/kms/key-management-service/developer-reference/api-kms-2016-01-20-openkmsservice) operation or activate KMS in the console.
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
 * @description Applies to agentic-type file systems.
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
 * @description Applies to agentic-type file systems.
 *
 * @param request GetAgenticSpaceRequest
 * @return GetAgenticSpaceResponse
 */
GetAgenticSpaceResponse Client::getAgenticSpace(const GetAgenticSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgenticSpaceWithOptions(request, runtime);
}

/**
 * @summary Queries whether a specified directory contains Infrequent Access (IA) storage class or Archive storage class files, or queries whether a specified file is an IA storage class or Archive storage class file.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Queries whether a specified directory contains Infrequent Access (IA) storage class or Archive storage class files, or queries whether a specified file is an IA storage class or Archive storage class file.
 *
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request GetDirectoryOrFilePropertiesRequest
 * @return GetDirectoryOrFilePropertiesResponse
 */
GetDirectoryOrFilePropertiesResponse Client::getDirectoryOrFileProperties(const GetDirectoryOrFilePropertiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryOrFilePropertiesWithOptions(request, runtime);
}

/**
 * @summary Queries information about a created Fileset.
 *
 * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support Filesets. You can view the version information on the file system details page in the console.
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
 * @summary Queries information about a created Fileset.
 *
 * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support Filesets. You can view the version information on the file system details page in the console.
 *
 * @param request GetFilesetRequest
 * @return GetFilesetResponse
 */
GetFilesetResponse Client::getFileset(const GetFilesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFilesetWithOptions(request, runtime);
}

/**
 * @summary Queries the export directory information of a protocol service.
 *
 * @description Queries the export directory information of a protocol service.
 * **Before you begin**
 * Before you call this operation, make sure that each dependent resource in the following three-layer resource model already exists:
 * 1. **File system (FileSystem)**: Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to obtain the FileSystemId.
 * 2. **Protocol service (ProtocolService)**: Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to obtain the ProtocolServiceId, or call [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) to create one.
 * 3. **Export directory (ProtocolMountTarget)**: Call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create an export directory and obtain the ExportId, or call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the ExportId.
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
 * @summary Queries the export directory information of a protocol service.
 *
 * @description Queries the export directory information of a protocol service.
 * **Before you begin**
 * Before you call this operation, make sure that each dependent resource in the following three-layer resource model already exists:
 * 1. **File system (FileSystem)**: Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) to obtain the FileSystemId.
 * 2. **Protocol service (ProtocolService)**: Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to obtain the ProtocolServiceId, or call [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) to create one.
 * 3. **Export directory (ProtocolMountTarget)**: Call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create an export directory and obtain the ExportId, or call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the ExportId.
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
 * @summary Queries access point information.
 *
 * @description Only General-purpose NAS NFS file systems are supported.
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
 * @summary Queries access point information.
 *
 * @description Only General-purpose NAS NFS file systems are supported.
 *
 * @param request ListAccessPointsRequest
 * @return ListAccessPointsResponse
 */
ListAccessPointsResponse Client::listAccessPoints(const ListAccessPointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessPointsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the directory structure of EBS Lens.
 *
 * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
 *
 * @param request ListDataInsightDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataInsightDirectoriesResponse
 */
ListDataInsightDirectoriesResponse Client::listDataInsightDirectoriesWithOptions(const ListDataInsightDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileSystemId()) {
    query["FileSystemId"] = request.getFileSystemId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParentDir()) {
    query["ParentDir"] = request.getParentDir();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataInsightDirectories"},
    {"version" , "2017-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataInsightDirectoriesResponse>();
}

/**
 * @summary Retrieves the directory structure of EBS Lens.
 *
 * @description - This feature is currently in invitational preview. To use this feature, submit a ticket.
 *
 * @param request ListDataInsightDirectoriesRequest
 * @return ListDataInsightDirectoriesResponse
 */
ListDataInsightDirectoriesResponse Client::listDataInsightDirectories(const ListDataInsightDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataInsightDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of IA storage class files and subdirectories that contain IA storage class files under a specified directory in a General-purpose NAS file system.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Retrieves the list of IA storage class files and subdirectories that contain IA storage class files under a specified directory in a General-purpose NAS file system.
 *
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request ListDirectoriesAndFilesRequest
 * @return ListDirectoriesAndFilesResponse
 */
ListDirectoriesAndFilesResponse Client::listDirectoriesAndFiles(const ListDirectoriesAndFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDirectoriesAndFilesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of created data retrieval tasks.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Retrieves a list of created data retrieval tasks.
 *
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request ListLifecycleRetrieveJobsRequest
 * @return ListLifecycleRetrieveJobsResponse
 */
ListLifecycleRetrieveJobsResponse Client::listLifecycleRetrieveJobs(const ListLifecycleRetrieveJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLifecycleRetrieveJobsWithOptions(request, runtime);
}

/**
 * @summary Queries directories on which delete operations were recently performed.
 *
 * @description Only General-purpose NAS file systems support this feature.
 * **Before you begin**
 * Before calling this operation, make sure that the recycle bin feature is enabled for the file system. If the recycle bin is not enabled, this operation cannot return the list of recently deleted directories.
 * **Enable the recycle bin**
 * To enable the recycle bin feature, call the [EnableRecycleBin](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablerecyclebin) operation. After the recycle bin is enabled, deleted directories in the file system are moved to the recycle bin. You can call this operation to query the list of recently deleted directories.
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
 * @summary Queries directories on which delete operations were recently performed.
 *
 * @description Only General-purpose NAS file systems support this feature.
 * **Before you begin**
 * Before calling this operation, make sure that the recycle bin feature is enabled for the file system. If the recycle bin is not enabled, this operation cannot return the list of recently deleted directories.
 * **Enable the recycle bin**
 * To enable the recycle bin feature, call the [EnableRecycleBin](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-enablerecyclebin) operation. After the recycle bin is enabled, deleted directories in the file system are moved to the recycle bin. You can call this operation to query the list of recently deleted directories.
 *
 * @param request ListRecentlyRecycledDirectoriesRequest
 * @return ListRecentlyRecycledDirectoriesResponse
 */
ListRecentlyRecycledDirectoriesResponse Client::listRecentlyRecycledDirectories(const ListRecentlyRecycledDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecentlyRecycledDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Queries information about one or more tasks in the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - You can query up to 50 most recently executed tasks.
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
 * @summary Queries information about one or more tasks in the recycle bin.
 *
 * @description - Only General-purpose NAS file systems support this feature.
 * - You can query up to 50 most recently executed tasks.
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
 * @description Only General-purpose NAS file systems support this feature.
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
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request ListRecycledDirectoriesAndFilesRequest
 * @return ListRecycledDirectoriesAndFilesResponse
 */
ListRecycledDirectoriesAndFilesResponse Client::listRecycledDirectoriesAndFiles(const ListRecycledDirectoriesAndFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecycledDirectoriesAndFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags.
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
 * @summary Queries a list of tags.
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
 * @summary Modifies a permission rule in a permission group.
 *
 * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
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
 * @summary Modifies a permission rule in a permission group.
 *
 * @description Rules in the default permission group (DEFAULT_VPC_GROUP_NAME) cannot be modified.
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
 * @description **Prerequisites**
 * Before you call this operation, complete the following preparations:
 * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
 * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set the following parameters:
 *    - `StorageType`: Set to `Agentic`.
 *    - `ProtocolType`: Set to `NFS`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
 * **Usage notes**
 * - This operation applies only to Agentic file systems.
 * - Complete call chain example:
 *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
 *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
 *   3. Call ModifyAgenticSpace to modify the Agentic space configurations.
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
 * @description **Prerequisites**
 * Before you call this operation, complete the following preparations:
 * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
 * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set the following parameters:
 *    - `StorageType`: Set to `Agentic`.
 *    - `ProtocolType`: Set to `NFS`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
 * **Usage notes**
 * - This operation applies only to Agentic file systems.
 * - Complete call chain example:
 *   1. Call CreateFileSystem to create an Agentic file system (StorageType=Agentic, ProtocolType=NFS).
 *   2. After the file system is created (status is Running), call CreateAgenticSpace to create an Agentic space.
 *   3. Call ModifyAgenticSpace to modify the Agentic space configurations.
 *
 * @param request ModifyAgenticSpaceRequest
 * @return ModifyAgenticSpaceResponse
 */
ModifyAgenticSpaceResponse Client::modifyAgenticSpace(const ModifyAgenticSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAgenticSpaceWithOptions(request, runtime);
}

/**
 * @summary Modifies an automatic snapshot policy. After you modify an automatic snapshot policy, file systems to which the policy has been applied immediately execute the modified policy.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
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
 * @summary Modifies an automatic snapshot policy. After you modify an automatic snapshot policy, file systems to which the policy has been applied immediately execute the modified policy.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 *
 * @param request ModifyAutoSnapshotPolicyRequest
 * @return ModifyAutoSnapshotPolicyResponse
 */
ModifyAutoSnapshotPolicyResponse Client::modifyAutoSnapshotPolicy(const ModifyAutoSnapshotPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAutoSnapshotPolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies an access point of a CPFS for Lingjun file system.
 *
 * @description Modifies an access point of a CPFS for Lingjun file system.
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
 * @summary Modifies an access point of a CPFS for Lingjun file system.
 *
 * @description Modifies an access point of a CPFS for Lingjun file system.
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
 * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data streams.
 * - You can modify the properties of a data stream only when the data stream is in the `Running (Normal)` state.
 * - Modifying a data stream typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data stream modification.
 * - CPFS data stream specifications:
 *     - Data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data stream bandwidth specifies the maximum transmission bandwidth that the data stream can achieve during data import or export.
 *     - Inventory check: If you set DryRun to true, you can check whether the resources required to modify the data stream to the specified specification are sufficient.
 * - CPFS billing
 *   Modifying the data stream bandwidth (Throughput) incurs data stream bandwidth fees. Familiarize yourself with the billable methods of CPFS in advance. For details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
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
 * @description - CPFS 2.2.0 and later and CPFS for Lingjun 2.4.0 and later support data streams.
 * - You can modify the properties of a data stream only when the data stream is in the `Running (Normal)` state.
 * - Modifying a data stream typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the data stream modification.
 * - CPFS data stream specifications:
 *     - Data stream bandwidth (Throughput) supports three specifications: 600 MB/s, 1,200 MB/s, and 1,500 MB/s. The data stream bandwidth specifies the maximum transmission bandwidth that the data stream can achieve during data import or export.
 *     - Inventory check: If you set DryRun to true, you can check whether the resources required to modify the data stream to the specified specification are sufficient.
 * - CPFS billing
 *   Modifying the data stream bandwidth (Throughput) incurs data stream bandwidth fees. Familiarize yourself with the billable methods of CPFS in advance. For details, see [CPFS billing](https://help.aliyun.com/document_detail/111858.html).
 *
 * @param request ModifyDataFlowRequest
 * @return ModifyDataFlowResponse
 */
ModifyDataFlowResponse Client::modifyDataFlow(const ModifyDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDataFlowWithOptions(request, runtime);
}

/**
 * @summary Modifies the automatic update configuration of a dataflow.
 *
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * - You can modify the automatic update configuration of a dataflow only when the dataflow is in the `Running` or `Stopped` state.
 * - Modifying the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the automatic update task.
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
 * @summary Modifies the automatic update configuration of a dataflow.
 *
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * - You can modify the automatic update configuration of a dataflow only when the dataflow is in the `Running` or `Stopped` state.
 * - Modifying the automatic update configuration typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the status of the automatic update task.
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
  if (!!tmpReq.hasAutoUpgradeConfig()) {
    request.setAutoUpgradeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAutoUpgradeConfig(), "AutoUpgradeConfig", "json"));
  }

  if (!!tmpReq.hasOptions()) {
    request.setOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOptions(), "Options", "json"));
  }

  json query = {};
  if (!!request.hasAutoUpgradeConfigShrink()) {
    query["AutoUpgradeConfig"] = request.getAutoUpgradeConfigShrink();
  }

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
 * @summary Modifies the information of a fileset.
 *
 * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support modifying fileset information.
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
 * @summary Modifies the information of a fileset.
 *
 * @description Only CPFS 2.2.0 and later and CPFS for Lingjun 2.7.0 and later support modifying fileset information.
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
 * @summary Modifies the LDAP configuration.
 *
 * @description This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
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
 * @summary Modifies the LDAP configuration.
 *
 * @description This operation supports only Cloud Parallel File Storage (CPFS) parallel file systems.
 *
 * @param request ModifyLDAPConfigRequest
 * @return ModifyLDAPConfigResponse
 */
ModifyLDAPConfigResponse Client::modifyLDAPConfig(const ModifyLDAPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLDAPConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a lifecycle management policy.
 *
 * @description This feature is supported only by General-purpose NAS file systems.
 *
 * @param request ModifyLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLifecyclePolicyResponse
 */
ModifyLifecyclePolicyResponse Client::modifyLifecyclePolicyWithOptions(const ModifyLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Modifies a lifecycle management policy.
 *
 * @description This feature is supported only by General-purpose NAS file systems.
 *
 * @param request ModifyLifecyclePolicyRequest
 * @return ModifyLifecyclePolicyResponse
 */
ModifyLifecyclePolicyResponse Client::modifyLifecyclePolicy(const ModifyLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies mount target information.
 *
 * @description Only mount target information of General-purpose NAS or Extreme NAS file systems can be modified.
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
 * @summary Modifies mount target information.
 *
 * @description Only mount target information of General-purpose NAS or Extreme NAS file systems can be modified.
 *
 * @param request ModifyMountTargetRequest
 * @return ModifyMountTargetResponse
 */
ModifyMountTargetResponse Client::modifyMountTarget(const ModifyMountTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMountTargetWithOptions(request, runtime);
}

/**
 * @summary Modifies the export directory parameters of a protocol service. You can modify only the permission group and description. The VPC ID and vSwitch ID cannot be modified. To change them, delete the export directory and create a new one.
 *
 * @description - Before you begin: This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Status prerequisite: Before calling this operation, the export directory corresponding to ExportId must be in the AVAILABLE state. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the status and wait until the creation is complete before retrying.
 * - Dependency chain:
 *   1. Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describefilesystems-cpfs) (with FileSystemType set to cpfs) to obtain the CPFS file system.
 *   2. Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to verify that the protocol service is in the Running state.
 *   3. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to verify that the export directory is in the AVAILABLE state.
 *   4. If no export directory exists, call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create one first.
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
 * @summary Modifies the export directory parameters of a protocol service. You can modify only the permission group and description. The VPC ID and vSwitch ID cannot be modified. To change them, delete the export directory and create a new one.
 *
 * @description - Before you begin: This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Status prerequisite: Before calling this operation, the export directory corresponding to ExportId must be in the AVAILABLE state. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to query the status and wait until the creation is complete before retrying.
 * - Dependency chain:
 *   1. Call [DescribeFileSystems](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describefilesystems-cpfs) (with FileSystemType set to cpfs) to obtain the CPFS file system.
 *   2. Call [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) to verify that the protocol service is in the Running state.
 *   3. Call [DescribeProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolmounttarget-cpfs) to verify that the export directory is in the AVAILABLE state.
 *   4. If no export directory exists, call [CreateProtocolMountTarget](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolmounttarget-cpfs) to create one first.
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
 * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - This operation allows you to modify the description of a protocol service.
 * - You can obtain the protocol service ID (ProtocolServiceId) in the following ways:
 *   - From the response of the [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) operation after you create a protocol service.
 *   - From the response of the [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) operation that queries existing protocol services.
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
 * @description This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - This operation allows you to modify the description of a protocol service.
 * - You can obtain the protocol service ID (ProtocolServiceId) in the following ways:
 *   - From the response of the [CreateProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createprotocolservice-cpfs) operation after you create a protocol service.
 *   - From the response of the [DescribeProtocolService](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-describeprotocolservice-cpfs) operation that queries existing protocol services.
 *
 * @param request ModifyProtocolServiceRequest
 * @return ModifyProtocolServiceResponse
 */
ModifyProtocolServiceResponse Client::modifyProtocolService(const ModifyProtocolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyProtocolServiceWithOptions(request, runtime);
}

/**
 * @summary Updates the SMB AD ACL feature.
 *
 * @description Before you begin: Make sure that Key Management Service (KMS) is activated in the target region before you call this operation. Call sequence: Activate KMS → Call EnableSmbAcl to initialize → Call ModifySmbAcl.
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
 * @summary Updates the SMB AD ACL feature.
 *
 * @description Before you begin: Make sure that Key Management Service (KMS) is activated in the target region before you call this operation. Call sequence: Activate KMS → Call EnableSmbAcl to initialize → Call ModifySmbAcl.
 *
 * @param request ModifySmbAclRequest
 * @return ModifySmbAclResponse
 */
ModifySmbAclResponse Client::modifySmbAcl(const ModifySmbAclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmbAclWithOptions(request, runtime);
}

/**
 * @summary Activates the Apsara File Storage NAS (NAS) service.
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
 * @summary Activates the Apsara File Storage NAS (NAS) service.
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
 * @summary Removes a client from the blacklist in Cloud Parallel File Storage (CPFS) to resume its write requests.
 *
 * @description This operation supports only CPFS parallel file systems.
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
 * @summary Removes a client from the blacklist in Cloud Parallel File Storage (CPFS) to resume its write requests.
 *
 * @description This operation supports only CPFS parallel file systems.
 *
 * @param request RemoveClientFromBlackListRequest
 * @return RemoveClientFromBlackListResponse
 */
RemoveClientFromBlackListResponse Client::removeClientFromBlackList(const RemoveClientFromBlackListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeClientFromBlackListWithOptions(request, runtime);
}

/**
 * @summary Rolls back a file system to the state of a historical snapshot.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - The file system must be in the Normal state.
 * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
 * - Dependency chain:
 * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
 * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
 * - (3) Call DescribeFileSystems and poll until Status=Running.
 * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
 * - (5) Call DescribeSnapshots and poll until Status=available.
 * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - The file system must be in the Normal state.
 * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
 * - Dependency chain:
 * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
 * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
 * - (3) Call DescribeFileSystems and poll until Status=Running.
 * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
 * - (5) Call DescribeSnapshots and poll until Status=available.
 * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
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
 * @summary Rolls back a file system to the state of a historical snapshot.
 *
 * @description <props="china">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://terms.aliyun.com/legal-agreement/terms/suit_bu1_ali_cloud/suit_bu1_ali_cloud201803061139_99860.html?spm=a2c4g.11186623.0.0.5c895ff2YPLrwe) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - The file system must be in the Normal state.
 * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
 * - Dependency chain:
 * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
 * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
 * - (3) Call DescribeFileSystems and poll until Status=Running.
 * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
 * - (5) Call DescribeSnapshots and poll until Status=available.
 * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
 * <props="intl">
 * - This feature is in free public preview. During the public preview, the [File Storage NAS Service-Level Agreement (SLA)](https://www.alibabacloud.com/help/legal/latest/network-attached-storage-service-level-agreement) is not guaranteed.
 * - Only Advanced Extreme NAS file systems support this feature.
 * - The file system must be in the Normal state.
 * - The specified SnapshotId parameter must be a historical snapshot created from the same file system specified by FileSystemId.
 * - Dependency chain:
 * - (1) Grant the AliyunNASManageENIRole role in the Resource Access Management (RAM) console.
 * - (2) Call CreateFileSystem (FileSystemType=extreme, StorageType=advance).
 * - (3) Call DescribeFileSystems and poll until Status=Running.
 * - (4) Call CreateSnapshot (FileSystemId=ID from the previous step).
 * - (5) Call DescribeSnapshots and poll until Status=available.
 * - (6) Call ResetFileSystem (FileSystemId, SnapshotId).
 *
 * @param request ResetFileSystemRequest
 * @return ResetFileSystemResponse
 */
ResetFileSystemResponse Client::resetFileSystem(const ResetFileSystemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetFileSystemWithOptions(request, runtime);
}

/**
 * @summary Retries a data retrieval task that is in the failed state.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Retries a data retrieval task that is in the failed state.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @description **Before you begin**
 * Before you call this operation, complete the following preparations:
 * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
 * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set `StorageType=Agentic`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
 * **Usage notes**
 * - This operation applies only to Agentic file systems.
 * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
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
 * @description **Before you begin**
 * Before you call this operation, complete the following preparations:
 * 1. **Obtain an AgenticSpaceId**: Call the [CreateAgenticSpace](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-createagenticspace) operation to create an Agentic space and obtain the AgenticSpaceId.
 * 2. **Create an Agentic file system**: When you call the [CreateFileSystem](https://www.alibabacloud.com/help/en/cpfs/cpfsonecs/developer-reference/api-nas-2017-06-26-createfilesystem-cpfs) operation to create a file system, set `StorageType=Agentic`.
 *    - **Supported regions**: The Agentic storage type is available only in specific regions and zones. Check the console for details.
 * **Usage notes**
 * - This operation applies only to Agentic file systems.
 * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
 *
 * @param request SetAgenticSpaceQuotaRequest
 * @return SetAgenticSpaceQuotaResponse
 */
SetAgenticSpaceQuotaResponse Client::setAgenticSpaceQuota(const SetAgenticSpaceQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAgenticSpaceQuotaWithOptions(request, runtime);
}

/**
 * @summary Sets a directory quota for a file system.
 *
 * @description Only General-purpose NAS file systems support the directory quota feature.
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
 * @summary Sets a directory quota for a file system.
 *
 * @description Only General-purpose NAS file systems support the directory quota feature.
 *
 * @param request SetDirQuotaRequest
 * @return SetDirQuotaResponse
 */
SetDirQuotaResponse Client::setDirQuota(const SetDirQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDirQuotaWithOptions(request, runtime);
}

/**
 * @summary Sets a quota for a fileset.
 *
 * @description - Only CPFS for Lingjun 2.7.0 and later support setting quotas for filesets.
 * - The minimum fileset capacity quota is 10 GiB, and the capacity can be increased in increments of 1 GiB.
 * - A fileset supports up to 10 billion files or directories. The minimum value is 10,000, and the value can be increased in increments of 1.
 * - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
 * - You must specify at least one of the capacity limit and the file count limit.
 * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
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
 * @summary Sets a quota for a fileset.
 *
 * @description - Only CPFS for Lingjun 2.7.0 and later support setting quotas for filesets.
 * - The minimum fileset capacity quota is 10 GiB, and the capacity can be increased in increments of 1 GiB.
 * - A fileset supports up to 10 billion files or directories. The minimum value is 10,000, and the value can be increased in increments of 1.
 * - When you modify a directory quota, the quota capacity or file count must be greater than the used capacity or file count.
 * - You must specify at least one of the capacity limit and the file count limit.
 * - Quota statistics have a 15-minute delay. The actual usage takes effect 15 minutes later.
 *
 * @param request SetFilesetQuotaRequest
 * @return SetFilesetQuotaResponse
 */
SetFilesetQuotaResponse Client::setFilesetQuota(const SetFilesetQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setFilesetQuotaWithOptions(request, runtime);
}

/**
 * @summary Enables a data flow.
 *
 * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * - You can enable only a data flow that is in the `Stopped` state.
 * - If DryRun is set to `true`, you can check whether sufficient resources are available to enable a data flow of the specified specifications. If inventory resources are insufficient, the data flow cannot be enabled.
 * - Enabling a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the data flow status.
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
 * @summary Enables a data flow.
 *
 * @description - This operation is applicable only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support data flows. You can view the version information on the file system details page in the console.
 * - You can enable only a data flow that is in the `Stopped` state.
 * - If DryRun is set to `true`, you can check whether sufficient resources are available to enable a data flow of the specified specifications. If inventory resources are insufficient, the data flow cannot be enabled.
 * - Enabling a data flow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402270.html) to query the data flow status.
 *
 * @param request StartDataFlowRequest
 * @return StartDataFlowResponse
 */
StartDataFlowResponse Client::startDataFlow(const StartDataFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDataFlowWithOptions(request, runtime);
}

/**
 * @summary Starts the execution of a lifecycle management policy.
 *
 * @description Starts the execution of a lifecycle management policy.
 * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
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
 * @summary Starts the execution of a lifecycle management policy.
 *
 * @description Starts the execution of a lifecycle management policy.
 * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
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
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * - You can disable only a dataflow in the `Running` state.
 * - After a dataflow is disabled, you cannot create dataflow tasks for it. If automatic update is configured, data updates on the source are not synchronized to CPFS.
 * - After a dataflow is disabled, the dataflow bandwidth is no longer billed because resources are reclaimed. However, re-enabling the dataflow may fail due to insufficient inventory.
 * - Disabling a dataflow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) to query the dataflow status.
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
 * @description - This operation applies only to Cloud Parallel File Storage (CPFS) file systems.
 * - Only CPFS 2.2.0 and later support dataflows. You can view the version information on the file system details page in the console.
 * - You can disable only a dataflow in the `Running` state.
 * - After a dataflow is disabled, you cannot create dataflow tasks for it. If automatic update is configured, data updates on the source are not synchronized to CPFS.
 * - After a dataflow is disabled, the dataflow bandwidth is no longer billed because resources are reclaimed. However, re-enabling the dataflow may fail due to insufficient inventory.
 * - Disabling a dataflow typically takes 2 to 5 minutes. You can call [DescribeDataFlows](https://help.aliyun.com/document_detail/2402271.html) to query the dataflow status.
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
 * @description Stops the execution of a lifecycle policy.
 * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
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
 * @description Stops the execution of a lifecycle policy.
 * This operation is supported only when LifecyclePolicyType is set to OnDemand in the lifecycle management policy of a CPFS for Lingjun file system.
 *
 * @param request StopLifecyclePolicyExecutionRequest
 * @return StopLifecyclePolicyExecutionResponse
 */
StopLifecyclePolicyExecutionResponse Client::stopLifecyclePolicyExecution(const StopLifecyclePolicyExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopLifecyclePolicyExecutionWithOptions(request, runtime);
}

/**
 * @summary Creates and attaches tags to specified resources. File systems and access points are supported.
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
 * @summary Creates and attaches tags to specified resources. File systems and access points are supported.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Deletes the tags of a specified resource.
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
 * @summary Deletes the tags of a specified resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates the rules of a lifecycle management policy. Only CPFS for Lingjun is supported.
 * UpdateLifecyclePolicy uses overwrite semantics. If an optional parameter is left empty, the corresponding field is deleted. To append lifecycle rules, first call the DescribeLifecyclePolicies operation to obtain the current lifecycle rule configurations, append the new lifecycle rule configurations, and then call the UpdateLifecyclePolicy operation to update the lifecycle rule configurations.
 *
 * @param request UpdateLifecyclePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLifecyclePolicyResponse
 */
UpdateLifecyclePolicyResponse Client::updateLifecyclePolicyWithOptions(const UpdateLifecyclePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteRules()) {
    query["DeleteRules"] = request.getDeleteRules();
  }

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
 * @summary Updates the rules of a lifecycle management policy. Only CPFS for Lingjun is supported.
 * UpdateLifecyclePolicy uses overwrite semantics. If an optional parameter is left empty, the corresponding field is deleted. To append lifecycle rules, first call the DescribeLifecyclePolicies operation to obtain the current lifecycle rule configurations, append the new lifecycle rule configurations, and then call the UpdateLifecyclePolicy operation to update the lifecycle rule configurations.
 *
 * @param request UpdateLifecyclePolicyRequest
 * @return UpdateLifecyclePolicyResponse
 */
UpdateLifecyclePolicyResponse Client::updateLifecyclePolicy(const UpdateLifecyclePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLifecyclePolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the retention period of data in a recycle bin.
 *
 * @description Only General-purpose NAS file systems support this feature.
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
 * @summary Modifies the retention period of data in a recycle bin.
 *
 * @description Only General-purpose NAS file systems support this feature.
 *
 * @param request UpdateRecycleBinAttributeRequest
 * @return UpdateRecycleBinAttributeResponse
 */
UpdateRecycleBinAttributeResponse Client::updateRecycleBinAttribute(const UpdateRecycleBinAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecycleBinAttributeWithOptions(request, runtime);
}

/**
 * @summary Scales up the storage capacity of an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description - Only Extreme NAS file systems and CPFS file systems can be scaled up.
 * - General-purpose NAS file systems scale up automatically on demand. You do not need to call this operation.
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
 * @summary Scales up the storage capacity of an Extreme NAS file system or a Cloud Parallel File Storage (CPFS) file system.
 *
 * @description - Only Extreme NAS file systems and CPFS file systems can be scaled up.
 * - General-purpose NAS file systems scale up automatically on demand. You do not need to call this operation.
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