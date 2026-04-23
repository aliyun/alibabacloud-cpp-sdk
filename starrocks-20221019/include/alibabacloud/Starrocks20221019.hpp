// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STARROCKS20221019_HPP_
#define ALIBABACLOUD_STARROCKS20221019_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Starrocks20221019Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Starrocks20221019.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 新增备份策略
       *
       * @param request AddBackupPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBackupPolicyResponse
       */
      Models::AddBackupPolicyResponse addBackupPolicyWithOptions(const Models::AddBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增备份策略
       *
       * @param request AddBackupPolicyRequest
       * @return AddBackupPolicyResponse
       */
      Models::AddBackupPolicyResponse addBackupPolicy(const Models::AddBackupPolicyRequest &request);

      /**
       * @summary 新建网关
       *
       * @param request AddGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayResponse
       */
      Models::AddGatewayResponse addGatewayWithOptions(const Models::AddGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建网关
       *
       * @param request AddGatewayRequest
       * @return AddGatewayResponse
       */
      Models::AddGatewayResponse addGateway(const Models::AddGatewayRequest &request);

      /**
       * @summary This interface is used to modify the resource group of a Serverless StarRocks instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to modify the resource group of a Serverless StarRocks instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary 校验ABM的资源库存
       *
       * @param request CheckInventoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInventoryResponse
       */
      Models::CheckInventoryResponse checkInventoryWithOptions(const Models::CheckInventoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验ABM的资源库存
       *
       * @param request CheckInventoryRequest
       * @return CheckInventoryResponse
       */
      Models::CheckInventoryResponse checkInventory(const Models::CheckInventoryRequest &request);

      /**
       * @summary 创建Agent资源组
       *
       * @param request CreateAgentResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResourceResponse
       */
      Models::CreateAgentResourceResponse createAgentResourceWithOptions(const Models::CreateAgentResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Agent资源组
       *
       * @param request CreateAgentResourceRequest
       * @return CreateAgentResourceResponse
       */
      Models::CreateAgentResourceResponse createAgentResource(const Models::CreateAgentResourceRequest &request);

      /**
       * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request CreateInstanceV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceV1Response
       */
      Models::CreateInstanceV1Response createInstanceV1WithOptions(const Models::CreateInstanceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request CreateInstanceV1Request
       * @return CreateInstanceV1Response
       */
      Models::CreateInstanceV1Response createInstanceV1(const Models::CreateInstanceV1Request &request);

      /**
       * @summary 新建一条弹性规则
       *
       * @param request CreateScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScalingRuleResponse
       */
      Models::CreateScalingRuleResponse createScalingRuleWithOptions(const Models::CreateScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新建一条弹性规则
       *
       * @param request CreateScalingRuleRequest
       * @return CreateScalingRuleResponse
       */
      Models::CreateScalingRuleResponse createScalingRule(const Models::CreateScalingRuleRequest &request);

      /**
       * @summary This interface is used to create the AliyunServiceRoleForEMRStarRocks role for users.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This interface is used to create the AliyunServiceRoleForEMRStarRocks role for users.
       *
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole();

      /**
       * @summary 删除数据备份
       *
       * @param request DeleteBackupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除数据备份
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary 删除备份策略
       *
       * @param request DeleteBackupPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除备份策略
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary 删除网关
       *
       * @param request DeleteGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const Models::DeleteGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网关
       *
       * @param request DeleteGatewayRequest
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const Models::DeleteGatewayRequest &request);

      /**
       * @summary 删除白名单分组
       *
       * @param request DeleteInnerIpWhitelistGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInnerIpWhitelistGroupResponse
       */
      Models::DeleteInnerIpWhitelistGroupResponse deleteInnerIpWhitelistGroupWithOptions(const Models::DeleteInnerIpWhitelistGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除白名单分组
       *
       * @param request DeleteInnerIpWhitelistGroupRequest
       * @return DeleteInnerIpWhitelistGroupResponse
       */
      Models::DeleteInnerIpWhitelistGroupResponse deleteInnerIpWhitelistGroup(const Models::DeleteInnerIpWhitelistGroupRequest &request);

      /**
       * @summary 删除一条弹性规则
       *
       * @param request DeleteScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScalingRuleResponse
       */
      Models::DeleteScalingRuleResponse deleteScalingRuleWithOptions(const Models::DeleteScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一条弹性规则
       *
       * @param request DeleteScalingRuleRequest
       * @return DeleteScalingRuleResponse
       */
      Models::DeleteScalingRuleResponse deleteScalingRule(const Models::DeleteScalingRuleRequest &request);

      /**
       * @param request DescribeAvailableZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZonesWithOptions(const Models::DescribeAvailableZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeAvailableZonesRequest
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZones(const Models::DescribeAvailableZonesRequest &request);

      /**
       * @summary 获取备份策略详情
       *
       * @param request DescribeBackupPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPoliciesResponse
       */
      Models::DescribeBackupPoliciesResponse describeBackupPoliciesWithOptions(const Models::DescribeBackupPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取备份策略详情
       *
       * @param request DescribeBackupPoliciesRequest
       * @return DescribeBackupPoliciesResponse
       */
      Models::DescribeBackupPoliciesResponse describeBackupPolicies(const Models::DescribeBackupPoliciesRequest &request);

      /**
       * @summary 获取备份详情
       *
       * @param request DescribeBackupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取备份详情
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary 查询实例配置历史
       *
       * @param request DescribeConfigHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistoryWithOptions(const Models::DescribeConfigHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例配置历史
       *
       * @param request DescribeConfigHistoryRequest
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistory(const Models::DescribeConfigHistoryRequest &request);

      /**
       * @summary 获取集群事件名称
       *
       * @param request DescribeEventNamesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventNamesResponse
       */
      Models::DescribeEventNamesResponse describeEventNamesWithOptions(const Models::DescribeEventNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群事件名称
       *
       * @param request DescribeEventNamesRequest
       * @return DescribeEventNamesResponse
       */
      Models::DescribeEventNamesResponse describeEventNames(const Models::DescribeEventNamesRequest &request);

      /**
       * @summary 查询白名单分组
       *
       * @param request DescribeInnerIpWhitelistGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInnerIpWhitelistGroupsResponse
       */
      Models::DescribeInnerIpWhitelistGroupsResponse describeInnerIpWhitelistGroupsWithOptions(const Models::DescribeInnerIpWhitelistGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询白名单分组
       *
       * @param request DescribeInnerIpWhitelistGroupsRequest
       * @return DescribeInnerIpWhitelistGroupsResponse
       */
      Models::DescribeInnerIpWhitelistGroupsResponse describeInnerIpWhitelistGroups(const Models::DescribeInnerIpWhitelistGroupsRequest &request);

      /**
       * @summary 查询实例配置
       *
       * @param request DescribeInstanceConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceConfigsResponse
       */
      Models::DescribeInstanceConfigsResponse describeInstanceConfigsWithOptions(const Models::DescribeInstanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例配置
       *
       * @param request DescribeInstanceConfigsRequest
       * @return DescribeInstanceConfigsResponse
       */
      Models::DescribeInstanceConfigsResponse describeInstanceConfigs(const Models::DescribeInstanceConfigsRequest &request);

      /**
       * @summary 获取实例的健康诊断结果
       *
       * @param request DescribeInstanceDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDiagnosisResultResponse
       */
      Models::DescribeInstanceDiagnosisResultResponse describeInstanceDiagnosisResultWithOptions(const Models::DescribeInstanceDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例的健康诊断结果
       *
       * @param request DescribeInstanceDiagnosisResultRequest
       * @return DescribeInstanceDiagnosisResultResponse
       */
      Models::DescribeInstanceDiagnosisResultResponse describeInstanceDiagnosisResult(const Models::DescribeInstanceDiagnosisResultRequest &request);

      /**
       * @summary 获取 StarRocks 实例的 Meta Token。
       *
       * @param request DescribeInstanceMetaTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMetaTokenResponse
       */
      Models::DescribeInstanceMetaTokenResponse describeInstanceMetaTokenWithOptions(const Models::DescribeInstanceMetaTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 StarRocks 实例的 Meta Token。
       *
       * @param request DescribeInstanceMetaTokenRequest
       * @return DescribeInstanceMetaTokenResponse
       */
      Models::DescribeInstanceMetaTokenResponse describeInstanceMetaToken(const Models::DescribeInstanceMetaTokenRequest &request);

      /**
       * @summary This operation is used to query Serverless StarRocks instances, supporting filtering based on instance name or tags and other information.
       *
       * @param tmpReq DescribeInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation is used to query Serverless StarRocks instances, supporting filtering based on instance name or tags and other information.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary 获取节点组信息
       *
       * @param request DescribeNodeGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeGroupsResponse
       */
      Models::DescribeNodeGroupsResponse describeNodeGroupsWithOptions(const Models::DescribeNodeGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取节点组信息
       *
       * @param request DescribeNodeGroupsRequest
       * @return DescribeNodeGroupsResponse
       */
      Models::DescribeNodeGroupsResponse describeNodeGroups(const Models::DescribeNodeGroupsRequest &request);

      /**
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary 描述Starrocks的资源配置约束
       *
       * @param request DescribeResourceConstraintsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceConstraintsResponse
       */
      Models::DescribeResourceConstraintsResponse describeResourceConstraintsWithOptions(const Models::DescribeResourceConstraintsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述Starrocks的资源配置约束
       *
       * @param request DescribeResourceConstraintsRequest
       * @return DescribeResourceConstraintsResponse
       */
      Models::DescribeResourceConstraintsResponse describeResourceConstraints(const Models::DescribeResourceConstraintsRequest &request);

      /**
       * @summary 获取 starrocks 实例的系统时区
       *
       * @param request DescribeSystemTimezoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemTimezoneResponse
       */
      Models::DescribeSystemTimezoneResponse describeSystemTimezoneWithOptions(const Models::DescribeSystemTimezoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取 starrocks 实例的系统时区
       *
       * @param request DescribeSystemTimezoneRequest
       * @return DescribeSystemTimezoneResponse
       */
      Models::DescribeSystemTimezoneResponse describeSystemTimezone(const Models::DescribeSystemTimezoneRequest &request);

      /**
       * @summary 获取时间触发规则信息
       *
       * @param request DescribeTimeTriggerScalingRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTimeTriggerScalingRulesResponse
       */
      Models::DescribeTimeTriggerScalingRulesResponse describeTimeTriggerScalingRulesWithOptions(const Models::DescribeTimeTriggerScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取时间触发规则信息
       *
       * @param request DescribeTimeTriggerScalingRulesRequest
       * @return DescribeTimeTriggerScalingRulesResponse
       */
      Models::DescribeTimeTriggerScalingRulesResponse describeTimeTriggerScalingRules(const Models::DescribeTimeTriggerScalingRulesRequest &request);

      /**
       * @summary StarRocks关闭SSL
       *
       * @param request DisableSSLConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSSLConnectionResponse
       */
      Models::DisableSSLConnectionResponse disableSSLConnectionWithOptions(const Models::DisableSSLConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StarRocks关闭SSL
       *
       * @param request DisableSSLConnectionRequest
       * @return DisableSSLConnectionResponse
       */
      Models::DisableSSLConnectionResponse disableSSLConnection(const Models::DisableSSLConnectionRequest &request);

      /**
       * @summary 默认网关开启内网SLB
       *
       * @param request EnableInternalSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInternalSlbResponse
       */
      Models::EnableInternalSlbResponse enableInternalSlbWithOptions(const Models::EnableInternalSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 默认网关开启内网SLB
       *
       * @param request EnableInternalSlbRequest
       * @return EnableInternalSlbResponse
       */
      Models::EnableInternalSlbResponse enableInternalSlb(const Models::EnableInternalSlbRequest &request);

      /**
       * @summary 开启Multi AZ
       *
       * @param request EnableMultiAzRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableMultiAzResponse
       */
      Models::EnableMultiAzResponse enableMultiAzWithOptions(const Models::EnableMultiAzRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启Multi AZ
       *
       * @param request EnableMultiAzRequest
       * @return EnableMultiAzResponse
       */
      Models::EnableMultiAzResponse enableMultiAz(const Models::EnableMultiAzRequest &request);

      /**
       * @summary StarRocks开启SSL
       *
       * @param request EnableSSLConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSSLConnectionResponse
       */
      Models::EnableSSLConnectionResponse enableSSLConnectionWithOptions(const Models::EnableSSLConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StarRocks开启SSL
       *
       * @param request EnableSSLConnectionRequest
       * @return EnableSSLConnectionResponse
       */
      Models::EnableSSLConnectionResponse enableSSLConnection(const Models::EnableSSLConnectionRequest &request);

      /**
       * @summary 获取StarRocks集群实例的特性开关
       *
       * @param request GetInstanceFeatureGateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceFeatureGateResponse
       */
      Models::GetInstanceFeatureGateResponse getInstanceFeatureGateWithOptions(const Models::GetInstanceFeatureGateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取StarRocks集群实例的特性开关
       *
       * @param request GetInstanceFeatureGateRequest
       * @return GetInstanceFeatureGateResponse
       */
      Models::GetInstanceFeatureGateResponse getInstanceFeatureGate(const Models::GetInstanceFeatureGateRequest &request);

      /**
       * @summary 获取StarRocks 计算组实例的特性开关
       *
       * @param request GetNodeGroupFeatureGateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeGroupFeatureGateResponse
       */
      Models::GetNodeGroupFeatureGateResponse getNodeGroupFeatureGateWithOptions(const Models::GetNodeGroupFeatureGateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取StarRocks 计算组实例的特性开关
       *
       * @param request GetNodeGroupFeatureGateRequest
       * @return GetNodeGroupFeatureGateResponse
       */
      Models::GetNodeGroupFeatureGateResponse getNodeGroupFeatureGate(const Models::GetNodeGroupFeatureGateRequest &request);

      /**
       * @summary 默认网关开启内网SLB
       *
       * @param request IsolateLeaderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsolateLeaderResponse
       */
      Models::IsolateLeaderResponse isolateLeaderWithOptions(const Models::IsolateLeaderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 默认网关开启内网SLB
       *
       * @param request IsolateLeaderRequest
       * @return IsolateLeaderResponse
       */
      Models::IsolateLeaderResponse isolateLeader(const Models::IsolateLeaderRequest &request);

      /**
       * @summary 获取网关列表
       *
       * @param request ListGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGatewayWithOptions(const Models::ListGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网关列表
       *
       * @param request ListGatewayRequest
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGateway(const Models::ListGatewayRequest &request);

      /**
       * @summary 获取操作的详细信息
       *
       * @param request ListOperationActivityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationActivityResponse
       */
      Models::ListOperationActivityResponse listOperationActivityWithOptions(const Models::ListOperationActivityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取操作的详细信息
       *
       * @param request ListOperationActivityRequest
       * @return ListOperationActivityResponse
       */
      Models::ListOperationActivityResponse listOperationActivity(const Models::ListOperationActivityRequest &request);

      /**
       * @summary 获取集群的操作历史
       *
       * @param request ListOperationHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationHistoryResponse
       */
      Models::ListOperationHistoryResponse listOperationHistoryWithOptions(const Models::ListOperationHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群的操作历史
       *
       * @param request ListOperationHistoryRequest
       * @return ListOperationHistoryResponse
       */
      Models::ListOperationHistoryResponse listOperationHistory(const Models::ListOperationHistoryRequest &request);

      /**
       * @summary 获取集群SSL详情
       *
       * @param request ListSSLDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSSLDetailsResponse
       */
      Models::ListSSLDetailsResponse listSSLDetailsWithOptions(const Models::ListSSLDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群SSL详情
       *
       * @param request ListSSLDetailsRequest
       * @return ListSSLDetailsResponse
       */
      Models::ListSSLDetailsResponse listSSLDetails(const Models::ListSSLDetailsRequest &request);

      /**
       * @summary 修改实例的付费类型
       *
       * @param request ModifyChargeTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChargeTypeResponse
       */
      Models::ModifyChargeTypeResponse modifyChargeTypeWithOptions(const Models::ModifyChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例的付费类型
       *
       * @param request ModifyChargeTypeRequest
       * @return ModifyChargeTypeResponse
       */
      Models::ModifyChargeTypeResponse modifyChargeType(const Models::ModifyChargeTypeRequest &request);

      /**
       * @summary Modifies the number of CUs for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the number of CUs for a warehouse of only StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you modify the number of CUs for a warehouse, the billing of CUs has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of CUs.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of CUs before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyCuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCuResponse
       */
      Models::ModifyCuResponse modifyCuWithOptions(const Models::ModifyCuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the number of CUs for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the number of CUs for a warehouse of only StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you modify the number of CUs for a warehouse, the billing of CUs has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of CUs.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of CUs before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyCuRequest
       * @return ModifyCuResponse
       */
      Models::ModifyCuResponse modifyCu(const Models::ModifyCuRequest &request);

      /**
       * @summary Performs a precheck before you modify the number of CUs for a warehouse.
       *
       * @param request ModifyCuPreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCuPreCheckResponse
       */
      Models::ModifyCuPreCheckResponse modifyCuPreCheckWithOptions(const Models::ModifyCuPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck before you modify the number of CUs for a warehouse.
       *
       * @param request ModifyCuPreCheckRequest
       * @return ModifyCuPreCheckResponse
       */
      Models::ModifyCuPreCheckResponse modifyCuPreCheck(const Models::ModifyCuPreCheckRequest &request);

      /**
       * @summary Increases the number of disks for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can increase the number of disks only for StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you increase the number of disks for a warehouse, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of disks before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskNumberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskNumberResponse
       */
      Models::ModifyDiskNumberResponse modifyDiskNumberWithOptions(const Models::ModifyDiskNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Increases the number of disks for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can increase the number of disks only for StarRocks instances of Standard Edition.
       * *   You can increase the number of disks only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you increase the number of disks for a warehouse, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of disks before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskNumberRequest
       * @return ModifyDiskNumberResponse
       */
      Models::ModifyDiskNumberResponse modifyDiskNumber(const Models::ModifyDiskNumberRequest &request);

      /**
       * @summary Modifies the disk performance level for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/en/product/ecs?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.47c9281fkIZGiB#pricing) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the disk performance level only for StarRocks instances of Standard Edition.
       * *   You can modify the disk performance level only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * *   You cannot downgrade the performance level to PL0.
       * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, expand the ESSD and try again. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
       * After the disk performance level is changed, the billing of the disk has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk performance level before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskPerformanceLevelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskPerformanceLevelResponse
       */
      Models::ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevelWithOptions(const Models::ModifyDiskPerformanceLevelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the disk performance level for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://www.alibabacloud.com/en/product/ecs?_p_lc=1&spm=openapi-amp.newDocPublishment.0.0.47c9281fkIZGiB#pricing) of EMR Serverless StarRocks instances.
       * Before you call this operation, take note of the following items:
       * *   You can modify the disk performance level only for StarRocks instances of Standard Edition.
       * *   You can modify the disk performance level only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * *   You cannot downgrade the performance level to PL0.
       * *   The performance level of an Enterprise SSD (ESSD) is limited by the ESSD disk size. If you cannot upgrade the performance level of an ESSD, expand the ESSD and try again. For more information, see [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
       * After the disk performance level is changed, the billing of the disk has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk type.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk performance level before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskPerformanceLevelRequest
       * @return ModifyDiskPerformanceLevelResponse
       */
      Models::ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevel(const Models::ModifyDiskPerformanceLevelRequest &request);

      /**
       * @summary Expands the disk size for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can expand the disk size only for StarRocks instances of Standard Edition.
       * *   You can expand the disk size only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you expand the disk size, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk size.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk size before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskSizeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskSizeResponse
       */
      Models::ModifyDiskSizeResponse modifyDiskSizeWithOptions(const Models::ModifyDiskSizeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Expands the disk size for a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can expand the disk size only for StarRocks instances of Standard Edition.
       * *   You can expand the disk size only for warehouses of the standard specifications.
       * *   The instance must be in the Running state.
       * After you expand the disk size, the billing of disks has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged for the disk based on the new disk size.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the disk size before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyDiskSizeRequest
       * @return ModifyDiskSizeResponse
       */
      Models::ModifyDiskSizeResponse modifyDiskSize(const Models::ModifyDiskSizeRequest &request);

      /**
       * @summary 修改计算组的节点磁盘类型
       *
       * @param request ModifyDiskTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskTypeResponse
       */
      Models::ModifyDiskTypeResponse modifyDiskTypeWithOptions(const Models::ModifyDiskTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组的节点磁盘类型
       *
       * @param request ModifyDiskTypeRequest
       * @return ModifyDiskTypeResponse
       */
      Models::ModifyDiskTypeResponse modifyDiskType(const Models::ModifyDiskTypeRequest &request);

      /**
       * @summary 修改/etc/hosts
       *
       * @param request ModifyHostAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostAliasResponse
       */
      Models::ModifyHostAliasResponse modifyHostAliasWithOptions(const Models::ModifyHostAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改/etc/hosts
       *
       * @param request ModifyHostAliasRequest
       * @return ModifyHostAliasResponse
       */
      Models::ModifyHostAliasResponse modifyHostAlias(const Models::ModifyHostAliasRequest &request);

      /**
       * @summary 修改实例配置
       *
       * @param request ModifyInstanceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改实例配置
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary 配置变更预检查，返回此次变更需要重启的计算组ID
       *
       * @param request ModifyInstanceConfigPreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigPreCheckResponse
       */
      Models::ModifyInstanceConfigPreCheckResponse modifyInstanceConfigPreCheckWithOptions(const Models::ModifyInstanceConfigPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置变更预检查，返回此次变更需要重启的计算组ID
       *
       * @param request ModifyInstanceConfigPreCheckRequest
       * @return ModifyInstanceConfigPreCheckResponse
       */
      Models::ModifyInstanceConfigPreCheckResponse modifyInstanceConfigPreCheck(const Models::ModifyInstanceConfigPreCheckRequest &request);

      /**
       * @summary 修改Starrocks实例的可维护时间
       *
       * @param request ModifyMaintainableTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaintainableTimeResponse
       */
      Models::ModifyMaintainableTimeResponse modifyMaintainableTimeWithOptions(const Models::ModifyMaintainableTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Starrocks实例的可维护时间
       *
       * @param request ModifyMaintainableTimeRequest
       * @return ModifyMaintainableTimeResponse
       */
      Models::ModifyMaintainableTimeResponse modifyMaintainableTime(const Models::ModifyMaintainableTimeRequest &request);

      /**
       * @summary Modifies the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can modify the number of nodes in a warehouse of only StarRocks instances of Standard Edition.
       * *   The instance must be in the Running state.
       * *   The number of frontend nodes (FEs) cannot be an even number, and you cannot reduce the number of FE nodes.
       * After you modify the number of nodes in a warehouse, the billing of nodes has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of nodes.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of nodes before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyNodeNumberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeNumberResponse
       */
      Models::ModifyNodeNumberResponse modifyNodeNumberWithOptions(const Models::ModifyNodeNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of EMR Serverless StarRocks instances. Before you call this operation, take note of the following items:
       * *   You can modify the number of nodes in a warehouse of only StarRocks instances of Standard Edition.
       * *   The instance must be in the Running state.
       * *   The number of frontend nodes (FEs) cannot be an even number, and you cannot reduce the number of FE nodes.
       * After you modify the number of nodes in a warehouse, the billing of nodes has the following changes:
       * *   Pay-as-you-go StarRocks instances: You are charged based on the number of nodes.
       * *   Subscription StarRocks instances: You are charged additionally based on the price difference between the number of nodes before and after the change and the remaining days of the billing cycle. The billing cycle starts from 00:00 the next day until the end of the subscription period.
       *
       * @param request ModifyNodeNumberRequest
       * @return ModifyNodeNumberResponse
       */
      Models::ModifyNodeNumberResponse modifyNodeNumber(const Models::ModifyNodeNumberRequest &request);

      /**
       * @summary Performs a precheck before you modify the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request ModifyNodeNumberPreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeNumberPreCheckResponse
       */
      Models::ModifyNodeNumberPreCheckResponse modifyNodeNumberPreCheckWithOptions(const Models::ModifyNodeNumberPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck before you modify the number of nodes in a warehouse of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request ModifyNodeNumberPreCheckRequest
       * @return ModifyNodeNumberPreCheckResponse
       */
      Models::ModifyNodeNumberPreCheckResponse modifyNodeNumberPreCheck(const Models::ModifyNodeNumberPreCheckRequest &request);

      /**
       * @summary 修改弹性伸缩规则
       *
       * @param request ModifyScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRuleWithOptions(const Models::ModifyScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改弹性伸缩规则
       *
       * @param request ModifyScalingRuleRequest
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRule(const Models::ModifyScalingRuleRequest &request);

      /**
       * @summary 修改计算组的节点规格类型
       *
       * @param request ModifySpecTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySpecTypeResponse
       */
      Models::ModifySpecTypeResponse modifySpecTypeWithOptions(const Models::ModifySpecTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组的节点规格类型
       *
       * @param request ModifySpecTypeRequest
       * @return ModifySpecTypeResponse
       */
      Models::ModifySpecTypeResponse modifySpecType(const Models::ModifySpecTypeRequest &request);

      /**
       * @summary 修改计算组中节点规格类型预检查
       *
       * @param request ModifySpecTypePreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySpecTypePreCheckResponse
       */
      Models::ModifySpecTypePreCheckResponse modifySpecTypePreCheckWithOptions(const Models::ModifySpecTypePreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组中节点规格类型预检查
       *
       * @param request ModifySpecTypePreCheckRequest
       * @return ModifySpecTypePreCheckResponse
       */
      Models::ModifySpecTypePreCheckResponse modifySpecTypePreCheck(const Models::ModifySpecTypePreCheckRequest &request);

      /**
       * @summary 修改 starrocks 用户的密码
       *
       * @param request ModifyUserPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserPasswordResponse
       */
      Models::ModifyUserPasswordResponse modifyUserPasswordWithOptions(const Models::ModifyUserPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改 starrocks 用户的密码
       *
       * @param request ModifyUserPasswordRequest
       * @return ModifyUserPasswordResponse
       */
      Models::ModifyUserPasswordResponse modifyUserPassword(const Models::ModifyUserPasswordRequest &request);

      /**
       * @summary 查询开启Multi AZ的价格
       *
       * @param request QueryEnableMultiAzPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEnableMultiAzPriceResponse
       */
      Models::QueryEnableMultiAzPriceResponse queryEnableMultiAzPriceWithOptions(const Models::QueryEnableMultiAzPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询开启Multi AZ的价格
       *
       * @param request QueryEnableMultiAzPriceRequest
       * @return QueryEnableMultiAzPriceResponse
       */
      Models::QueryEnableMultiAzPriceResponse queryEnableMultiAzPrice(const Models::QueryEnableMultiAzPriceRequest &request);

      /**
       * @summary 查询小版本号
       *
       * @param request QueryMinorVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMinorVersionResponse
       */
      Models::QueryMinorVersionResponse queryMinorVersionWithOptions(const Models::QueryMinorVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询小版本号
       *
       * @param request QueryMinorVersionRequest
       * @return QueryMinorVersionResponse
       */
      Models::QueryMinorVersionResponse queryMinorVersion(const Models::QueryMinorVersionRequest &request);

      /**
       * @summary StarRocks新购询价接口
       *
       * @param request QueryModifyChargeTypePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyChargeTypePriceResponse
       */
      Models::QueryModifyChargeTypePriceResponse queryModifyChargeTypePriceWithOptions(const Models::QueryModifyChargeTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StarRocks新购询价接口
       *
       * @param request QueryModifyChargeTypePriceRequest
       * @return QueryModifyChargeTypePriceResponse
       */
      Models::QueryModifyChargeTypePriceResponse queryModifyChargeTypePrice(const Models::QueryModifyChargeTypePriceRequest &request);

      /**
       * @summary 修改节点组节点Cu询价
       *
       * @param request QueryModifyCuPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyCuPriceResponse
       */
      Models::QueryModifyCuPriceResponse queryModifyCuPriceWithOptions(const Models::QueryModifyCuPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改节点组节点Cu询价
       *
       * @param request QueryModifyCuPriceRequest
       * @return QueryModifyCuPriceResponse
       */
      Models::QueryModifyCuPriceResponse queryModifyCuPrice(const Models::QueryModifyCuPriceRequest &request);

      /**
       * @summary 修改计算组节点磁盘数量询价
       *
       * @param request QueryModifyDiskNumberPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskNumberPriceResponse
       */
      Models::QueryModifyDiskNumberPriceResponse queryModifyDiskNumberPriceWithOptions(const Models::QueryModifyDiskNumberPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组节点磁盘数量询价
       *
       * @param request QueryModifyDiskNumberPriceRequest
       * @return QueryModifyDiskNumberPriceResponse
       */
      Models::QueryModifyDiskNumberPriceResponse queryModifyDiskNumberPrice(const Models::QueryModifyDiskNumberPriceRequest &request);

      /**
       * @summary 修改计算组节点磁盘性能级别询价
       *
       * @param request QueryModifyDiskPerformanceLevelPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskPerformanceLevelPriceResponse
       */
      Models::QueryModifyDiskPerformanceLevelPriceResponse queryModifyDiskPerformanceLevelPriceWithOptions(const Models::QueryModifyDiskPerformanceLevelPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组节点磁盘性能级别询价
       *
       * @param request QueryModifyDiskPerformanceLevelPriceRequest
       * @return QueryModifyDiskPerformanceLevelPriceResponse
       */
      Models::QueryModifyDiskPerformanceLevelPriceResponse queryModifyDiskPerformanceLevelPrice(const Models::QueryModifyDiskPerformanceLevelPriceRequest &request);

      /**
       * @summary 修改计算组节点单盘存储大小询价
       *
       * @param request QueryModifyDiskSizePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskSizePriceResponse
       */
      Models::QueryModifyDiskSizePriceResponse queryModifyDiskSizePriceWithOptions(const Models::QueryModifyDiskSizePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组节点单盘存储大小询价
       *
       * @param request QueryModifyDiskSizePriceRequest
       * @return QueryModifyDiskSizePriceResponse
       */
      Models::QueryModifyDiskSizePriceResponse queryModifyDiskSizePrice(const Models::QueryModifyDiskSizePriceRequest &request);

      /**
       * @summary 修改计算组节点磁盘类型询价
       *
       * @param request QueryModifyDiskTypePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskTypePriceResponse
       */
      Models::QueryModifyDiskTypePriceResponse queryModifyDiskTypePriceWithOptions(const Models::QueryModifyDiskTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改计算组节点磁盘类型询价
       *
       * @param request QueryModifyDiskTypePriceRequest
       * @return QueryModifyDiskTypePriceResponse
       */
      Models::QueryModifyDiskTypePriceResponse queryModifyDiskTypePrice(const Models::QueryModifyDiskTypePriceRequest &request);

      /**
       * @summary 修改节点组节点数量询价
       *
       * @param request QueryModifyNodeNumberPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyNodeNumberPriceResponse
       */
      Models::QueryModifyNodeNumberPriceResponse queryModifyNodeNumberPriceWithOptions(const Models::QueryModifyNodeNumberPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改节点组节点数量询价
       *
       * @param request QueryModifyNodeNumberPriceRequest
       * @return QueryModifyNodeNumberPriceResponse
       */
      Models::QueryModifyNodeNumberPriceResponse queryModifyNodeNumberPrice(const Models::QueryModifyNodeNumberPriceRequest &request);

      /**
       * @summary 修改节点组规格类型询价
       *
       * @param request QueryModifySpecTypePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifySpecTypePriceResponse
       */
      Models::QueryModifySpecTypePriceResponse queryModifySpecTypePriceWithOptions(const Models::QueryModifySpecTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改节点组规格类型询价
       *
       * @param request QueryModifySpecTypePriceRequest
       * @return QueryModifySpecTypePriceResponse
       */
      Models::QueryModifySpecTypePriceResponse queryModifySpecTypePrice(const Models::QueryModifySpecTypePriceRequest &request);

      /**
       * @summary StarRocks新购询价接口
       *
       * @param request QueryPriceV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPriceV1Response
       */
      Models::QueryPriceV1Response queryPriceV1WithOptions(const Models::QueryPriceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StarRocks新购询价接口
       *
       * @param request QueryPriceV1Request
       * @return QueryPriceV1Response
       */
      Models::QueryPriceV1Response queryPriceV1(const Models::QueryPriceV1Request &request);

      /**
       * @summary StarRocks退订包年包月计费实例询价
       *
       * @param request QueryRefundPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRefundPriceResponse
       */
      Models::QueryRefundPriceResponse queryRefundPriceWithOptions(const Models::QueryRefundPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary StarRocks退订包年包月计费实例询价
       *
       * @param request QueryRefundPriceRequest
       * @return QueryRefundPriceResponse
       */
      Models::QueryRefundPriceResponse queryRefundPrice(const Models::QueryRefundPriceRequest &request);

      /**
       * @summary 查询 StarRocks 计费实例的续费价格
       *
       * @param request QueryRenewPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRenewPriceResponse
       */
      Models::QueryRenewPriceResponse queryRenewPriceWithOptions(const Models::QueryRenewPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 StarRocks 计费实例的续费价格
       *
       * @param request QueryRenewPriceRequest
       * @return QueryRenewPriceResponse
       */
      Models::QueryRenewPriceResponse queryRenewPrice(const Models::QueryRenewPriceRequest &request);

      /**
       * @summary 查询计算组/集群的未支付订单
       *
       * @param request QueryUnpaidOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUnpaidOrderResponse
       */
      Models::QueryUnpaidOrderResponse queryUnpaidOrderWithOptions(const Models::QueryUnpaidOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询计算组/集群的未支付订单
       *
       * @param request QueryUnpaidOrderRequest
       * @return QueryUnpaidOrderResponse
       */
      Models::QueryUnpaidOrderResponse queryUnpaidOrder(const Models::QueryUnpaidOrderRequest &request);

      /**
       * @summary Queries the versions of an E-MapReduce (EMR) Serverless StarRocks instance that the versions that you can upgrade to. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. You can call this operation to query the minor versions or major versions that the versions that you can upgrade to.
       *
       * @param request QueryUpgradableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUpgradableVersionsResponse
       */
      Models::QueryUpgradableVersionsResponse queryUpgradableVersionsWithOptions(const Models::QueryUpgradableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of an E-MapReduce (EMR) Serverless StarRocks instance that the versions that you can upgrade to. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. You can call this operation to query the minor versions or major versions that the versions that you can upgrade to.
       *
       * @param request QueryUpgradableVersionsRequest
       * @return QueryUpgradableVersionsResponse
       */
      Models::QueryUpgradableVersionsResponse queryUpgradableVersions(const Models::QueryUpgradableVersionsRequest &request);

      /**
       * @summary 处理集群事件
       *
       * @param request RebootECSRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootECSResponse
       */
      Models::RebootECSResponse rebootECSWithOptions(const Models::RebootECSRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 处理集群事件
       *
       * @param request RebootECSRequest
       * @return RebootECSResponse
       */
      Models::RebootECSResponse rebootECS(const Models::RebootECSRequest &request);

      /**
       * @summary Releases a pay-as-you-go E-MapReduce (EMR) Serverless StarRocks instance. To unsubscribe from a subscription instance, go to the Unsubscribe page of the Expenses and Costs console.
       *
       * @description **
       * **Warning:** After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       *
       * @param request ReleaseInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a pay-as-you-go E-MapReduce (EMR) Serverless StarRocks instance. To unsubscribe from a subscription instance, go to the Unsubscribe page of the Expenses and Costs console.
       *
       * @description **
       * **Warning:** After an instance is released, all physical resources used by the instance are recycled. Relevant data is erased and cannot be restored.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary 续费实例
       *
       * @param request RenewInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 续费实例
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart a StarRocks instance, the operation sets the status of the instance to Restarting and begins the restart process. When the status of the instance changes to Running, the instance is restarted.
       *
       * @param request RestartInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @description This operation is an asynchronous operation. After you call this operation to restart a StarRocks instance, the operation sets the status of the instance to Restarting and begins the restart process. When the status of the instance changes to Running, the instance is restarted.
       *
       * @param request RestartInstanceRequest
       * @return RestartInstanceResponse
       */
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary 重启指定的node group
       *
       * @param request RestartNodeGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartNodeGroupResponse
       */
      Models::RestartNodeGroupResponse restartNodeGroupWithOptions(const Models::RestartNodeGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启指定的node group
       *
       * @param request RestartNodeGroupRequest
       * @return RestartNodeGroupResponse
       */
      Models::RestartNodeGroupResponse restartNodeGroup(const Models::RestartNodeGroupRequest &request);

      /**
       * @summary 重启集群中的节点
       *
       * @param request RestartNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartNodesResponse
       */
      Models::RestartNodesResponse restartNodesWithOptions(const Models::RestartNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重启集群中的节点
       *
       * @param request RestartNodesRequest
       * @return RestartNodesResponse
       */
      Models::RestartNodesResponse restartNodes(const Models::RestartNodesRequest &request);

      /**
       * @summary 从备份中恢复实例
       *
       * @param request RestoreInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstanceWithOptions(const Models::RestoreInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从备份中恢复实例
       *
       * @param request RestoreInstanceRequest
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstance(const Models::RestoreInstanceRequest &request);

      /**
       * @summary 该接口用于恢复来自openlake自动停机的实例。
       *
       * @param request ResumeInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const Models::ResumeInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 该接口用于恢复来自openlake自动停机的实例。
       *
       * @param request ResumeInstanceRequest
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const Models::ResumeInstanceRequest &request);

      /**
       * @summary 回滚正在进行中的配置修改
       *
       * @param request RollbackConfigModificationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackConfigModificationResponse
       */
      Models::RollbackConfigModificationResponse rollbackConfigModificationWithOptions(const Models::RollbackConfigModificationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 回滚正在进行中的配置修改
       *
       * @param request RollbackConfigModificationRequest
       * @return RollbackConfigModificationResponse
       */
      Models::RollbackConfigModificationResponse rollbackConfigModification(const Models::RollbackConfigModificationRequest &request);

      /**
       * @summary 切换主备可用区
       *
       * @param request SwitchActiveStandbyZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchActiveStandbyZonesResponse
       */
      Models::SwitchActiveStandbyZonesResponse switchActiveStandbyZonesWithOptions(const Models::SwitchActiveStandbyZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 切换主备可用区
       *
       * @param request SwitchActiveStandbyZonesRequest
       * @return SwitchActiveStandbyZonesResponse
       */
      Models::SwitchActiveStandbyZonesResponse switchActiveStandbyZones(const Models::SwitchActiveStandbyZonesRequest &request);

      /**
       * @summary Adds a tag to a resource.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a tag to a resource.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 开启/关闭StarRocks实例的小版本自动更新
       *
       * @param request ToggleAutoMinorVersionUpgradeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ToggleAutoMinorVersionUpgradeResponse
       */
      Models::ToggleAutoMinorVersionUpgradeResponse toggleAutoMinorVersionUpgradeWithOptions(const Models::ToggleAutoMinorVersionUpgradeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开启/关闭StarRocks实例的小版本自动更新
       *
       * @param request ToggleAutoMinorVersionUpgradeRequest
       * @return ToggleAutoMinorVersionUpgradeResponse
       */
      Models::ToggleAutoMinorVersionUpgradeResponse toggleAutoMinorVersionUpgrade(const Models::ToggleAutoMinorVersionUpgradeRequest &request);

      /**
       * @summary 公网SLB开关
       *
       * @param request TogglePublicSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TogglePublicSlbResponse
       */
      Models::TogglePublicSlbResponse togglePublicSlbWithOptions(const Models::TogglePublicSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 公网SLB开关
       *
       * @param request TogglePublicSlbRequest
       * @return TogglePublicSlbResponse
       */
      Models::TogglePublicSlbResponse togglePublicSlb(const Models::TogglePublicSlbRequest &request);

      /**
       * @summary Removes tags from specified resources.
       *
       * @param tmpReq UnTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified resources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary 更新备份任务描述
       *
       * @param request UpdateBackupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupResponse
       */
      Models::UpdateBackupResponse updateBackupWithOptions(const Models::UpdateBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新备份任务描述
       *
       * @param request UpdateBackupRequest
       * @return UpdateBackupResponse
       */
      Models::UpdateBackupResponse updateBackup(const Models::UpdateBackupRequest &request);

      /**
       * @summary 更新备份策略
       *
       * @param request UpdateBackupPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicyWithOptions(const Models::UpdateBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新备份策略
       *
       * @param request UpdateBackupPolicyRequest
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicy(const Models::UpdateBackupPolicyRequest &request);

      /**
       * @summary 更新网关
       *
       * @param request UpdateGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGatewayWithOptions(const Models::UpdateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网关
       *
       * @param request UpdateGatewayRequest
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGateway(const Models::UpdateGatewayRequest &request);

      /**
       * @summary 更新白名单分组中的CIDR
       *
       * @param request UpdateInnerIpWhitelistGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInnerIpWhitelistGroupResponse
       */
      Models::UpdateInnerIpWhitelistGroupResponse updateInnerIpWhitelistGroupWithOptions(const Models::UpdateInnerIpWhitelistGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新白名单分组中的CIDR
       *
       * @param request UpdateInnerIpWhitelistGroupRequest
       * @return UpdateInnerIpWhitelistGroupResponse
       */
      Models::UpdateInnerIpWhitelistGroupResponse updateInnerIpWhitelistGroup(const Models::UpdateInnerIpWhitelistGroupRequest &request);

      /**
       * @summary Modifies the name of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request UpdateInstanceNameRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceNameWithOptions(const Models::UpdateInstanceNameRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an E-MapReduce (EMR) Serverless StarRocks instance.
       *
       * @param request UpdateInstanceNameRequest
       * @return UpdateInstanceNameResponse
       */
      Models::UpdateInstanceNameResponse updateInstanceName(const Models::UpdateInstanceNameRequest &request);

      /**
       * @summary 更新节点组描述信息
       *
       * @param request UpdateNodeGroupDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodeGroupDescriptionResponse
       */
      Models::UpdateNodeGroupDescriptionResponse updateNodeGroupDescriptionWithOptions(const Models::UpdateNodeGroupDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新节点组描述信息
       *
       * @param request UpdateNodeGroupDescriptionRequest
       * @return UpdateNodeGroupDescriptionResponse
       */
      Models::UpdateNodeGroupDescriptionResponse updateNodeGroupDescription(const Models::UpdateNodeGroupDescriptionRequest &request);

      /**
       * @summary 该接口用于开通/关闭 FE/BE的公网SLB。
       *
       * @param request UpdatePublicNetworkStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicNetworkStatusResponse
       */
      Models::UpdatePublicNetworkStatusResponse updatePublicNetworkStatusWithOptions(const Models::UpdatePublicNetworkStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 该接口用于开通/关闭 FE/BE的公网SLB。
       *
       * @param request UpdatePublicNetworkStatusRequest
       * @return UpdatePublicNetworkStatusResponse
       */
      Models::UpdatePublicNetworkStatusResponse updatePublicNetworkStatus(const Models::UpdatePublicNetworkStatusRequest &request);

      /**
       * @summary Upgrades the version of an E-MapReduce (EMR) Serverless StarRocks instance. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. This operation can be used to upgrade the minor version or major version of a StarRocks instance. You can call the QueryUpgradableVersions operation to query the versions that you can upgrade to.
       *
       * @description The instance must be in the Running state when you call this operation.
       *
       * @param request UpgradeVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeVersionResponse
       */
      Models::UpgradeVersionResponse upgradeVersionWithOptions(const Models::UpgradeVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the version of an E-MapReduce (EMR) Serverless StarRocks instance. The versions of a StarRocks instance include the major version and minor version. You can view the major version and minor version of a StarRocks instance in the Version Information section of the Instance Details tab in the EMR console. This operation can be used to upgrade the minor version or major version of a StarRocks instance. You can call the QueryUpgradableVersions operation to query the versions that you can upgrade to.
       *
       * @description The instance must be in the Running state when you call this operation.
       *
       * @param request UpgradeVersionRequest
       * @return UpgradeVersionResponse
       */
      Models::UpgradeVersionResponse upgradeVersion(const Models::UpgradeVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
