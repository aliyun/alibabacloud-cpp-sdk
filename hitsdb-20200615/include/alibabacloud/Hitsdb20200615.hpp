// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HITSDB20200615_HPP_
#define ALIBABACLOUD_HITSDB20200615_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Hitsdb20200615Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Hitsdb20200615.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Changes a resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes a resource group to another.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @param request CheckLdpsColumnarIndexStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckLdpsColumnarIndexStatusResponse
       */
      Models::CheckLdpsColumnarIndexStatusResponse checkLdpsColumnarIndexStatusWithOptions(const Models::CheckLdpsColumnarIndexStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CheckLdpsColumnarIndexStatusRequest
       * @return CheckLdpsColumnarIndexStatusResponse
       */
      Models::CheckLdpsColumnarIndexStatusResponse checkLdpsColumnarIndexStatus(const Models::CheckLdpsColumnarIndexStatusRequest &request);

      /**
       * @summary 创建弹性伸缩配置
       *
       * @param tmpReq CreateAutoScalingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoScalingConfigResponse
       */
      Models::CreateAutoScalingConfigResponse createAutoScalingConfigWithOptions(const Models::CreateAutoScalingConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建弹性伸缩配置
       *
       * @param request CreateAutoScalingConfigRequest
       * @return CreateAutoScalingConfigResponse
       */
      Models::CreateAutoScalingConfigResponse createAutoScalingConfig(const Models::CreateAutoScalingConfigRequest &request);

      /**
       * @summary 创建弹性伸缩规则
       *
       * @param request CreateAutoScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAutoScalingRuleResponse
       */
      Models::CreateAutoScalingRuleResponse createAutoScalingRuleWithOptions(const Models::CreateAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建弹性伸缩规则
       *
       * @param request CreateAutoScalingRuleRequest
       * @return CreateAutoScalingRuleResponse
       */
      Models::CreateAutoScalingRuleResponse createAutoScalingRule(const Models::CreateAutoScalingRuleRequest &request);

      /**
       * @param request CreateLdpsComputeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLdpsComputeGroupResponse
       */
      Models::CreateLdpsComputeGroupResponse createLdpsComputeGroupWithOptions(const Models::CreateLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateLdpsComputeGroupRequest
       * @return CreateLdpsComputeGroupResponse
       */
      Models::CreateLdpsComputeGroupResponse createLdpsComputeGroup(const Models::CreateLdpsComputeGroupRequest &request);

      /**
       * @summary Creates a Lindorm instance.
       *
       * @description You must select at least one engine when you create a Lindorm instance. For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine types](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
       *
       * @param request CreateLindormInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLindormInstanceResponse
       */
      Models::CreateLindormInstanceResponse createLindormInstanceWithOptions(const Models::CreateLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Lindorm instance.
       *
       * @description You must select at least one engine when you create a Lindorm instance. For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine types](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
       *
       * @param request CreateLindormInstanceRequest
       * @return CreateLindormInstanceResponse
       */
      Models::CreateLindormInstanceResponse createLindormInstance(const Models::CreateLindormInstanceRequest &request);

      /**
       * @summary 创建Lindorm实例
       *
       * @param request CreateLindormV2InstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLindormV2InstanceResponse
       */
      Models::CreateLindormV2InstanceResponse createLindormV2InstanceWithOptions(const Models::CreateLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Lindorm实例
       *
       * @param request CreateLindormV2InstanceRequest
       * @return CreateLindormV2InstanceResponse
       */
      Models::CreateLindormV2InstanceResponse createLindormV2Instance(const Models::CreateLindormV2InstanceRequest &request);

      /**
       * @param request DeleteAutoScalingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoScalingConfigResponse
       */
      Models::DeleteAutoScalingConfigResponse deleteAutoScalingConfigWithOptions(const Models::DeleteAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAutoScalingConfigRequest
       * @return DeleteAutoScalingConfigResponse
       */
      Models::DeleteAutoScalingConfigResponse deleteAutoScalingConfig(const Models::DeleteAutoScalingConfigRequest &request);

      /**
       * @param request DeleteAutoScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutoScalingRuleResponse
       */
      Models::DeleteAutoScalingRuleResponse deleteAutoScalingRuleWithOptions(const Models::DeleteAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteAutoScalingRuleRequest
       * @return DeleteAutoScalingRuleResponse
       */
      Models::DeleteAutoScalingRuleResponse deleteAutoScalingRule(const Models::DeleteAutoScalingRuleRequest &request);

      /**
       * @param request DeleteCustomResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomResourceResponse
       */
      Models::DeleteCustomResourceResponse deleteCustomResourceWithOptions(const Models::DeleteCustomResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteCustomResourceRequest
       * @return DeleteCustomResourceResponse
       */
      Models::DeleteCustomResourceResponse deleteCustomResource(const Models::DeleteCustomResourceRequest &request);

      /**
       * @param request DeleteLdpsComputeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLdpsComputeGroupResponse
       */
      Models::DeleteLdpsComputeGroupResponse deleteLdpsComputeGroupWithOptions(const Models::DeleteLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteLdpsComputeGroupRequest
       * @return DeleteLdpsComputeGroupResponse
       */
      Models::DeleteLdpsComputeGroupResponse deleteLdpsComputeGroup(const Models::DeleteLdpsComputeGroupRequest &request);

      /**
       * @param request DeployLdpsSemiManagedComponentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployLdpsSemiManagedComponentResponse
       */
      Models::DeployLdpsSemiManagedComponentResponse deployLdpsSemiManagedComponentWithOptions(const Models::DeployLdpsSemiManagedComponentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeployLdpsSemiManagedComponentRequest
       * @return DeployLdpsSemiManagedComponentResponse
       */
      Models::DeployLdpsSemiManagedComponentResponse deployLdpsSemiManagedComponent(const Models::DeployLdpsSemiManagedComponentRequest &request);

      /**
       * @summary Obtains the regions supported by Lindorm.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the regions supported by Lindorm.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @param request GetAutoScalingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoScalingConfigResponse
       */
      Models::GetAutoScalingConfigResponse getAutoScalingConfigWithOptions(const Models::GetAutoScalingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAutoScalingConfigRequest
       * @return GetAutoScalingConfigResponse
       */
      Models::GetAutoScalingConfigResponse getAutoScalingConfig(const Models::GetAutoScalingConfigRequest &request);

      /**
       * @param request GetAutoScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAutoScalingRuleResponse
       */
      Models::GetAutoScalingRuleResponse getAutoScalingRuleWithOptions(const Models::GetAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAutoScalingRuleRequest
       * @return GetAutoScalingRuleResponse
       */
      Models::GetAutoScalingRuleResponse getAutoScalingRule(const Models::GetAutoScalingRuleRequest &request);

      /**
       * @param request GetClientSourceIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientSourceIpResponse
       */
      Models::GetClientSourceIpResponse getClientSourceIpWithOptions(const Models::GetClientSourceIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetClientSourceIpRequest
       * @return GetClientSourceIpResponse
       */
      Models::GetClientSourceIpResponse getClientSourceIp(const Models::GetClientSourceIpRequest &request);

      /**
       * @param request GetEngineDefaultAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEngineDefaultAuthResponse
       */
      Models::GetEngineDefaultAuthResponse getEngineDefaultAuthWithOptions(const Models::GetEngineDefaultAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetEngineDefaultAuthRequest
       * @return GetEngineDefaultAuthResponse
       */
      Models::GetEngineDefaultAuthResponse getEngineDefaultAuth(const Models::GetEngineDefaultAuthRequest &request);

      /**
       * @summary Queries the whitelists configured for a Lindorm instance.
       *
       * @param request GetInstanceIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceIpWhiteListResponse
       */
      Models::GetInstanceIpWhiteListResponse getInstanceIpWhiteListWithOptions(const Models::GetInstanceIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelists configured for a Lindorm instance.
       *
       * @param request GetInstanceIpWhiteListRequest
       * @return GetInstanceIpWhiteListResponse
       */
      Models::GetInstanceIpWhiteListResponse getInstanceIpWhiteList(const Models::GetInstanceIpWhiteListRequest &request);

      /**
       * @param request GetInstanceSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceSecurityGroupsResponse
       */
      Models::GetInstanceSecurityGroupsResponse getInstanceSecurityGroupsWithOptions(const Models::GetInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetInstanceSecurityGroupsRequest
       * @return GetInstanceSecurityGroupsResponse
       */
      Models::GetInstanceSecurityGroupsResponse getInstanceSecurityGroups(const Models::GetInstanceSecurityGroupsRequest &request);

      /**
       * @param request GetInstanceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceSummaryResponse
       */
      Models::GetInstanceSummaryResponse getInstanceSummaryWithOptions(const Models::GetInstanceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetInstanceSummaryRequest
       * @return GetInstanceSummaryResponse
       */
      Models::GetInstanceSummaryResponse getInstanceSummary(const Models::GetInstanceSummaryRequest &request);

      /**
       * @param request GetLdpsComputeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLdpsComputeGroupResponse
       */
      Models::GetLdpsComputeGroupResponse getLdpsComputeGroupWithOptions(const Models::GetLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLdpsComputeGroupRequest
       * @return GetLdpsComputeGroupResponse
       */
      Models::GetLdpsComputeGroupResponse getLdpsComputeGroup(const Models::GetLdpsComputeGroupRequest &request);

      /**
       * @param request GetLdpsNamespacedQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLdpsNamespacedQuotaResponse
       */
      Models::GetLdpsNamespacedQuotaResponse getLdpsNamespacedQuotaWithOptions(const Models::GetLdpsNamespacedQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLdpsNamespacedQuotaRequest
       * @return GetLdpsNamespacedQuotaResponse
       */
      Models::GetLdpsNamespacedQuotaResponse getLdpsNamespacedQuota(const Models::GetLdpsNamespacedQuotaRequest &request);

      /**
       * @param request GetLdpsResourceCostRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLdpsResourceCostResponse
       */
      Models::GetLdpsResourceCostResponse getLdpsResourceCostWithOptions(const Models::GetLdpsResourceCostRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLdpsResourceCostRequest
       * @return GetLdpsResourceCostResponse
       */
      Models::GetLdpsResourceCostResponse getLdpsResourceCost(const Models::GetLdpsResourceCostRequest &request);

      /**
       * @summary 获取Lindorm引擎配置
       *
       * @param request GetLindormEngineConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormEngineConfigResponse
       */
      Models::GetLindormEngineConfigResponse getLindormEngineConfigWithOptions(const Models::GetLindormEngineConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Lindorm引擎配置
       *
       * @param request GetLindormEngineConfigRequest
       * @return GetLindormEngineConfigResponse
       */
      Models::GetLindormEngineConfigResponse getLindormEngineConfig(const Models::GetLindormEngineConfigRequest &request);

      /**
       * @summary Queries the details of each storage type in a Lindorm instance.
       *
       * @description If the version of the underlying storage engine in a Lindorm cluster is 4.1.9 or later, the storage usage values returned for the LStorageUsageList parameter prevail.
       *
       * @param request GetLindormFsUsedDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormFsUsedDetailResponse
       */
      Models::GetLindormFsUsedDetailResponse getLindormFsUsedDetailWithOptions(const Models::GetLindormFsUsedDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of each storage type in a Lindorm instance.
       *
       * @description If the version of the underlying storage engine in a Lindorm cluster is 4.1.9 or later, the storage usage values returned for the LStorageUsageList parameter prevail.
       *
       * @param request GetLindormFsUsedDetailRequest
       * @return GetLindormFsUsedDetailResponse
       */
      Models::GetLindormFsUsedDetailResponse getLindormFsUsedDetail(const Models::GetLindormFsUsedDetailRequest &request);

      /**
       * @summary Obtains the detailed information about a Lindorm instance, including the instance type, billing method, and VPC.
       *
       * @param request GetLindormInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormInstanceResponse
       */
      Models::GetLindormInstanceResponse getLindormInstanceWithOptions(const Models::GetLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the detailed information about a Lindorm instance, including the instance type, billing method, and VPC.
       *
       * @param request GetLindormInstanceRequest
       * @return GetLindormInstanceResponse
       */
      Models::GetLindormInstanceResponse getLindormInstance(const Models::GetLindormInstanceRequest &request);

      /**
       * @summary Obtains the engine types supported by the specified Lindorm instance.
       *
       * @param request GetLindormInstanceEngineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormInstanceEngineListResponse
       */
      Models::GetLindormInstanceEngineListResponse getLindormInstanceEngineListWithOptions(const Models::GetLindormInstanceEngineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the engine types supported by the specified Lindorm instance.
       *
       * @param request GetLindormInstanceEngineListRequest
       * @return GetLindormInstanceEngineListResponse
       */
      Models::GetLindormInstanceEngineListResponse getLindormInstanceEngineList(const Models::GetLindormInstanceEngineListRequest &request);

      /**
       * @summary Queries the instances that meet the specified conditions.
       *
       * @param request GetLindormInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormInstanceListResponse
       */
      Models::GetLindormInstanceListResponse getLindormInstanceListWithOptions(const Models::GetLindormInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instances that meet the specified conditions.
       *
       * @param request GetLindormInstanceListRequest
       * @return GetLindormInstanceListResponse
       */
      Models::GetLindormInstanceListResponse getLindormInstanceList(const Models::GetLindormInstanceListRequest &request);

      /**
       * @summary 查询实例详情
       *
       * @param request GetLindormV2InstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2InstanceResponse
       */
      Models::GetLindormV2InstanceResponse getLindormV2InstanceWithOptions(const Models::GetLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例详情
       *
       * @param request GetLindormV2InstanceRequest
       * @return GetLindormV2InstanceResponse
       */
      Models::GetLindormV2InstanceResponse getLindormV2Instance(const Models::GetLindormV2InstanceRequest &request);

      /**
       * @summary 查询新架构实例详情
       *
       * @param request GetLindormV2InstanceDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2InstanceDetailsResponse
       */
      Models::GetLindormV2InstanceDetailsResponse getLindormV2InstanceDetailsWithOptions(const Models::GetLindormV2InstanceDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询新架构实例详情
       *
       * @param request GetLindormV2InstanceDetailsRequest
       * @return GetLindormV2InstanceDetailsResponse
       */
      Models::GetLindormV2InstanceDetailsResponse getLindormV2InstanceDetails(const Models::GetLindormV2InstanceDetailsRequest &request);

      /**
       * @param request GetLindormV2InstanceEngineListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2InstanceEngineListResponse
       */
      Models::GetLindormV2InstanceEngineListResponse getLindormV2InstanceEngineListWithOptions(const Models::GetLindormV2InstanceEngineListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLindormV2InstanceEngineListRequest
       * @return GetLindormV2InstanceEngineListResponse
       */
      Models::GetLindormV2InstanceEngineListResponse getLindormV2InstanceEngineList(const Models::GetLindormV2InstanceEngineListRequest &request);

      /**
       * @summary 查询新架构实例详情
       *
       * @param request GetLindormV2InstanceForTerraformRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2InstanceForTerraformResponse
       */
      Models::GetLindormV2InstanceForTerraformResponse getLindormV2InstanceForTerraformWithOptions(const Models::GetLindormV2InstanceForTerraformRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询新架构实例详情
       *
       * @param request GetLindormV2InstanceForTerraformRequest
       * @return GetLindormV2InstanceForTerraformResponse
       */
      Models::GetLindormV2InstanceForTerraformResponse getLindormV2InstanceForTerraform(const Models::GetLindormV2InstanceForTerraformRequest &request);

      /**
       * @summary 查询新架构实例安全组信息
       *
       * @param request GetLindormV2InstanceSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2InstanceSecurityGroupsResponse
       */
      Models::GetLindormV2InstanceSecurityGroupsResponse getLindormV2InstanceSecurityGroupsWithOptions(const Models::GetLindormV2InstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询新架构实例安全组信息
       *
       * @param request GetLindormV2InstanceSecurityGroupsRequest
       * @return GetLindormV2InstanceSecurityGroupsResponse
       */
      Models::GetLindormV2InstanceSecurityGroupsResponse getLindormV2InstanceSecurityGroups(const Models::GetLindormV2InstanceSecurityGroupsRequest &request);

      /**
       * @param request GetLindormV2StorageUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2StorageUsageResponse
       */
      Models::GetLindormV2StorageUsageResponse getLindormV2StorageUsageWithOptions(const Models::GetLindormV2StorageUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetLindormV2StorageUsageRequest
       * @return GetLindormV2StorageUsageResponse
       */
      Models::GetLindormV2StorageUsageResponse getLindormV2StorageUsage(const Models::GetLindormV2StorageUsageRequest &request);

      /**
       * @summary 获取流引擎信息
       *
       * @param request GetLindormV2StreamEngineInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLindormV2StreamEngineInfoResponse
       */
      Models::GetLindormV2StreamEngineInfoResponse getLindormV2StreamEngineInfoWithOptions(const Models::GetLindormV2StreamEngineInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取流引擎信息
       *
       * @param request GetLindormV2StreamEngineInfoRequest
       * @return GetLindormV2StreamEngineInfoResponse
       */
      Models::GetLindormV2StreamEngineInfoResponse getLindormV2StreamEngineInfo(const Models::GetLindormV2StreamEngineInfoRequest &request);

      /**
       * @summary 查询弹性伸缩配置
       *
       * @param tmpReq ListAutoScalingConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoScalingConfigsResponse
       */
      Models::ListAutoScalingConfigsResponse listAutoScalingConfigsWithOptions(const Models::ListAutoScalingConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询弹性伸缩配置
       *
       * @param request ListAutoScalingConfigsRequest
       * @return ListAutoScalingConfigsResponse
       */
      Models::ListAutoScalingConfigsResponse listAutoScalingConfigs(const Models::ListAutoScalingConfigsRequest &request);

      /**
       * @summary 查询伸缩记录
       *
       * @param tmpReq ListAutoScalingRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoScalingRecordsResponse
       */
      Models::ListAutoScalingRecordsResponse listAutoScalingRecordsWithOptions(const Models::ListAutoScalingRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询伸缩记录
       *
       * @param request ListAutoScalingRecordsRequest
       * @return ListAutoScalingRecordsResponse
       */
      Models::ListAutoScalingRecordsResponse listAutoScalingRecords(const Models::ListAutoScalingRecordsRequest &request);

      /**
       * @param request ListAutoScalingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutoScalingRulesResponse
       */
      Models::ListAutoScalingRulesResponse listAutoScalingRulesWithOptions(const Models::ListAutoScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListAutoScalingRulesRequest
       * @return ListAutoScalingRulesResponse
       */
      Models::ListAutoScalingRulesResponse listAutoScalingRules(const Models::ListAutoScalingRulesRequest &request);

      /**
       * @summary 获取计算引擎资源组列表
       *
       * @param request ListLdpsComputeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLdpsComputeGroupsResponse
       */
      Models::ListLdpsComputeGroupsResponse listLdpsComputeGroupsWithOptions(const Models::ListLdpsComputeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取计算引擎资源组列表
       *
       * @param request ListLdpsComputeGroupsRequest
       * @return ListLdpsComputeGroupsResponse
       */
      Models::ListLdpsComputeGroupsResponse listLdpsComputeGroups(const Models::ListLdpsComputeGroupsRequest &request);

      /**
       * @summary Queries the tags associated with the specified Lindorm instance.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags associated with the specified Lindorm instance.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 单可用区迁移多可用区基础版
       *
       * @param request MigrateSingleZoneToMultiZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MigrateSingleZoneToMultiZoneResponse
       */
      Models::MigrateSingleZoneToMultiZoneResponse migrateSingleZoneToMultiZoneWithOptions(const Models::MigrateSingleZoneToMultiZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单可用区迁移多可用区基础版
       *
       * @param request MigrateSingleZoneToMultiZoneRequest
       * @return MigrateSingleZoneToMultiZoneResponse
       */
      Models::MigrateSingleZoneToMultiZoneResponse migrateSingleZoneToMultiZone(const Models::MigrateSingleZoneToMultiZoneRequest &request);

      /**
       * @summary 修改弹性伸缩配置
       *
       * @param tmpReq ModifyAutoScalingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoScalingConfigResponse
       */
      Models::ModifyAutoScalingConfigResponse modifyAutoScalingConfigWithOptions(const Models::ModifyAutoScalingConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改弹性伸缩配置
       *
       * @param request ModifyAutoScalingConfigRequest
       * @return ModifyAutoScalingConfigResponse
       */
      Models::ModifyAutoScalingConfigResponse modifyAutoScalingConfig(const Models::ModifyAutoScalingConfigRequest &request);

      /**
       * @summary 修改弹性伸缩规则
       *
       * @param request ModifyAutoScalingRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAutoScalingRuleResponse
       */
      Models::ModifyAutoScalingRuleResponse modifyAutoScalingRuleWithOptions(const Models::ModifyAutoScalingRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改弹性伸缩规则
       *
       * @param request ModifyAutoScalingRuleRequest
       * @return ModifyAutoScalingRuleResponse
       */
      Models::ModifyAutoScalingRuleResponse modifyAutoScalingRule(const Models::ModifyAutoScalingRuleRequest &request);

      /**
       * @summary Changes the billing method of the specified Lindorm instance.
       *
       * @description You can call this operation to change the billing method of an instance to subscription or pay-as-you-go.
       * Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/en/pricing-calculator?spm=a2c63.p38356.0.0.2b024c2adcHeXL&_p_lc=1#/commodity/hitsdb_lindormpre_public_intl) of Lindorm. Published on only international site (alibabacloud.com).
       *
       * @param request ModifyInstancePayTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstancePayTypeResponse
       */
      Models::ModifyInstancePayTypeResponse modifyInstancePayTypeWithOptions(const Models::ModifyInstancePayTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of the specified Lindorm instance.
       *
       * @description You can call this operation to change the billing method of an instance to subscription or pay-as-you-go.
       * Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/en/pricing-calculator?spm=a2c63.p38356.0.0.2b024c2adcHeXL&_p_lc=1#/commodity/hitsdb_lindormpre_public_intl) of Lindorm. Published on only international site (alibabacloud.com).
       *
       * @param request ModifyInstancePayTypeRequest
       * @return ModifyInstancePayTypeResponse
       */
      Models::ModifyInstancePayTypeResponse modifyInstancePayType(const Models::ModifyInstancePayTypeRequest &request);

      /**
       * @summary 变配实例
       *
       * @param request ModifyLindormV2InstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLindormV2InstanceResponse
       */
      Models::ModifyLindormV2InstanceResponse modifyLindormV2InstanceWithOptions(const Models::ModifyLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 变配实例
       *
       * @param request ModifyLindormV2InstanceRequest
       * @return ModifyLindormV2InstanceResponse
       */
      Models::ModifyLindormV2InstanceResponse modifyLindormV2Instance(const Models::ModifyLindormV2InstanceRequest &request);

      /**
       * @summary 新架构修改安全组接口
       *
       * @param request ModifyLindormV2InstanceSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLindormV2InstanceSecurityGroupsResponse
       */
      Models::ModifyLindormV2InstanceSecurityGroupsResponse modifyLindormV2InstanceSecurityGroupsWithOptions(const Models::ModifyLindormV2InstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新架构修改安全组接口
       *
       * @param request ModifyLindormV2InstanceSecurityGroupsRequest
       * @return ModifyLindormV2InstanceSecurityGroupsResponse
       */
      Models::ModifyLindormV2InstanceSecurityGroupsResponse modifyLindormV2InstanceSecurityGroups(const Models::ModifyLindormV2InstanceSecurityGroupsRequest &request);

      /**
       * @summary 修改Lindorm新版实例白名单
       *
       * @param request ModifyLindormV2WhiteIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLindormV2WhiteIpListResponse
       */
      Models::ModifyLindormV2WhiteIpListResponse modifyLindormV2WhiteIpListWithOptions(const Models::ModifyLindormV2WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Lindorm新版实例白名单
       *
       * @param request ModifyLindormV2WhiteIpListRequest
       * @return ModifyLindormV2WhiteIpListResponse
       */
      Models::ModifyLindormV2WhiteIpListResponse modifyLindormV2WhiteIpList(const Models::ModifyLindormV2WhiteIpListRequest &request);

      /**
       * @summary 开通计算引擎
       *
       * @param request OpenComputeEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenComputeEngineResponse
       */
      Models::OpenComputeEngineResponse openComputeEngineWithOptions(const Models::OpenComputeEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通计算引擎
       *
       * @param request OpenComputeEngineRequest
       * @return OpenComputeEngineResponse
       */
      Models::OpenComputeEngineResponse openComputeEngine(const Models::OpenComputeEngineRequest &request);

      /**
       * @summary 开通计算引擎前置校验
       *
       * @param request OpenComputePreCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenComputePreCheckResponse
       */
      Models::OpenComputePreCheckResponse openComputePreCheckWithOptions(const Models::OpenComputePreCheckRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通计算引擎前置校验
       *
       * @param request OpenComputePreCheckRequest
       * @return OpenComputePreCheckResponse
       */
      Models::OpenComputePreCheckResponse openComputePreCheck(const Models::OpenComputePreCheckRequest &request);

      /**
       * @summary 开通列存索引
       *
       * @param request OpenLdpsColumnarIndexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenLdpsColumnarIndexResponse
       */
      Models::OpenLdpsColumnarIndexResponse openLdpsColumnarIndexWithOptions(const Models::OpenLdpsColumnarIndexRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通列存索引
       *
       * @param request OpenLdpsColumnarIndexRequest
       * @return OpenLdpsColumnarIndexResponse
       */
      Models::OpenLdpsColumnarIndexResponse openLdpsColumnarIndex(const Models::OpenLdpsColumnarIndexRequest &request);

      /**
       * @summary Releases a Lindorm instance.
       *
       * @param request ReleaseLindormInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseLindormInstanceResponse
       */
      Models::ReleaseLindormInstanceResponse releaseLindormInstanceWithOptions(const Models::ReleaseLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a Lindorm instance.
       *
       * @param request ReleaseLindormInstanceRequest
       * @return ReleaseLindormInstanceResponse
       */
      Models::ReleaseLindormInstanceResponse releaseLindormInstance(const Models::ReleaseLindormInstanceRequest &request);

      /**
       * @summary 释放实例
       *
       * @param request ReleaseLindormV2InstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseLindormV2InstanceResponse
       */
      Models::ReleaseLindormV2InstanceResponse releaseLindormV2InstanceWithOptions(const Models::ReleaseLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 释放实例
       *
       * @param request ReleaseLindormV2InstanceRequest
       * @return ReleaseLindormV2InstanceResponse
       */
      Models::ReleaseLindormV2InstanceResponse releaseLindormV2Instance(const Models::ReleaseLindormV2InstanceRequest &request);

      /**
       * @summary Renews a subscription Lindorm instance.
       *
       * @description You can call this operation to renew a subscription Lindorm instance for 1 to 9 months or 1 to 3 years.
       * Before you call this operation, make sure that you fully understand the billing methods and pricing of Lindorm.
       *
       * @param request RenewLindormInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewLindormInstanceResponse
       */
      Models::RenewLindormInstanceResponse renewLindormInstanceWithOptions(const Models::RenewLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription Lindorm instance.
       *
       * @description You can call this operation to renew a subscription Lindorm instance for 1 to 9 months or 1 to 3 years.
       * Before you call this operation, make sure that you fully understand the billing methods and pricing of Lindorm.
       *
       * @param request RenewLindormInstanceRequest
       * @return RenewLindormInstanceResponse
       */
      Models::RenewLindormInstanceResponse renewLindormInstance(const Models::RenewLindormInstanceRequest &request);

      /**
       * @param request RestartLdpsComputeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartLdpsComputeGroupResponse
       */
      Models::RestartLdpsComputeGroupResponse restartLdpsComputeGroupWithOptions(const Models::RestartLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RestartLdpsComputeGroupRequest
       * @return RestartLdpsComputeGroupResponse
       */
      Models::RestartLdpsComputeGroupResponse restartLdpsComputeGroup(const Models::RestartLdpsComputeGroupRequest &request);

      /**
       * @param request SetDefaultOlapComputeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultOlapComputeGroupResponse
       */
      Models::SetDefaultOlapComputeGroupResponse setDefaultOlapComputeGroupWithOptions(const Models::SetDefaultOlapComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SetDefaultOlapComputeGroupRequest
       * @return SetDefaultOlapComputeGroupResponse
       */
      Models::SetDefaultOlapComputeGroupResponse setDefaultOlapComputeGroup(const Models::SetDefaultOlapComputeGroupRequest &request);

      /**
       * @summary Enables or disables the MySQL compatibility feature for a Lindorm instance.
       *
       * @description Prerequisites
       * *   The LindormTable version of your instance is 2.6.0 or later.
       * *   The LindormTable of your instance supports LindormSQL V3. The value of the EnableLsqlVersionV3 parameter in the response of the GetLindormInstance operation is true for Lindorm instances purchased after Oct 24, 2023, which indicates that LindormSQL is supported by these instances by default. If you want to enable LindormSQL for instances purchased before Oct 24, 2023, contact the on-duty technical support.
       * You can enable the MySQL compatibility feature for a Lindorm instance only when the instance meets the preceding requirements.
       *
       * @param request SwitchLSQLV3MySQLServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchLSQLV3MySQLServiceResponse
       */
      Models::SwitchLSQLV3MySQLServiceResponse switchLSQLV3MySQLServiceWithOptions(const Models::SwitchLSQLV3MySQLServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the MySQL compatibility feature for a Lindorm instance.
       *
       * @description Prerequisites
       * *   The LindormTable version of your instance is 2.6.0 or later.
       * *   The LindormTable of your instance supports LindormSQL V3. The value of the EnableLsqlVersionV3 parameter in the response of the GetLindormInstance operation is true for Lindorm instances purchased after Oct 24, 2023, which indicates that LindormSQL is supported by these instances by default. If you want to enable LindormSQL for instances purchased before Oct 24, 2023, contact the on-duty technical support.
       * You can enable the MySQL compatibility feature for a Lindorm instance only when the instance meets the preceding requirements.
       *
       * @param request SwitchLSQLV3MySQLServiceRequest
       * @return SwitchLSQLV3MySQLServiceResponse
       */
      Models::SwitchLSQLV3MySQLServiceResponse switchLSQLV3MySQLService(const Models::SwitchLSQLV3MySQLServiceRequest &request);

      /**
       * @summary Associates tags with a single or multiple Lindorm instances.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates tags with a single or multiple Lindorm instances.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from a Lindorm instance.
       *
       * @description If a tag is not added to any Lindorm instance, it is deleted.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a Lindorm instance.
       *
       * @description If a tag is not added to any Lindorm instance, it is deleted.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Configures an IP address whitelist for a Lindorm instance.
       *
       * @param request UpdateInstanceIpWhiteListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceIpWhiteListResponse
       */
      Models::UpdateInstanceIpWhiteListResponse updateInstanceIpWhiteListWithOptions(const Models::UpdateInstanceIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an IP address whitelist for a Lindorm instance.
       *
       * @param request UpdateInstanceIpWhiteListRequest
       * @return UpdateInstanceIpWhiteListResponse
       */
      Models::UpdateInstanceIpWhiteListResponse updateInstanceIpWhiteList(const Models::UpdateInstanceIpWhiteListRequest &request);

      /**
       * @param request UpdateInstanceSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceSecurityGroupsResponse
       */
      Models::UpdateInstanceSecurityGroupsResponse updateInstanceSecurityGroupsWithOptions(const Models::UpdateInstanceSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateInstanceSecurityGroupsRequest
       * @return UpdateInstanceSecurityGroupsResponse
       */
      Models::UpdateInstanceSecurityGroupsResponse updateInstanceSecurityGroups(const Models::UpdateInstanceSecurityGroupsRequest &request);

      /**
       * @param request UpdateLdpsComputeGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLdpsComputeGroupResponse
       */
      Models::UpdateLdpsComputeGroupResponse updateLdpsComputeGroupWithOptions(const Models::UpdateLdpsComputeGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateLdpsComputeGroupRequest
       * @return UpdateLdpsComputeGroupResponse
       */
      Models::UpdateLdpsComputeGroupResponse updateLdpsComputeGroup(const Models::UpdateLdpsComputeGroupRequest &request);

      /**
       * @summary 更新实例名称或删除保护
       *
       * @param request UpdateLindormInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLindormInstanceAttributeResponse
       */
      Models::UpdateLindormInstanceAttributeResponse updateLindormInstanceAttributeWithOptions(const Models::UpdateLindormInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新实例名称或删除保护
       *
       * @param request UpdateLindormInstanceAttributeRequest
       * @return UpdateLindormInstanceAttributeResponse
       */
      Models::UpdateLindormInstanceAttributeResponse updateLindormInstanceAttribute(const Models::UpdateLindormInstanceAttributeRequest &request);

      /**
       * @summary 更新LindormV2Instance
       *
       * @param request UpdateLindormV2InstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLindormV2InstanceResponse
       */
      Models::UpdateLindormV2InstanceResponse updateLindormV2InstanceWithOptions(const Models::UpdateLindormV2InstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新LindormV2Instance
       *
       * @param request UpdateLindormV2InstanceRequest
       * @return UpdateLindormV2InstanceResponse
       */
      Models::UpdateLindormV2InstanceResponse updateLindormV2Instance(const Models::UpdateLindormV2InstanceRequest &request);

      /**
       * @param request UpdateLindormV2InstanceParameterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLindormV2InstanceParameterResponse
       */
      Models::UpdateLindormV2InstanceParameterResponse updateLindormV2InstanceParameterWithOptions(const Models::UpdateLindormV2InstanceParameterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateLindormV2InstanceParameterRequest
       * @return UpdateLindormV2InstanceParameterResponse
       */
      Models::UpdateLindormV2InstanceParameterResponse updateLindormV2InstanceParameter(const Models::UpdateLindormV2InstanceParameterRequest &request);

      /**
       * @summary 修改Lindorm新版实例白名单分组列表
       *
       * @param request UpdateLindormV2WhiteIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLindormV2WhiteIpListResponse
       */
      Models::UpdateLindormV2WhiteIpListResponse updateLindormV2WhiteIpListWithOptions(const Models::UpdateLindormV2WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改Lindorm新版实例白名单分组列表
       *
       * @param request UpdateLindormV2WhiteIpListRequest
       * @return UpdateLindormV2WhiteIpListResponse
       */
      Models::UpdateLindormV2WhiteIpListResponse updateLindormV2WhiteIpList(const Models::UpdateLindormV2WhiteIpListRequest &request);

      /**
       * @summary Upgrades, scales up, or enable cold storage for a Lindorm instance.
       *
       * @description For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine typpes](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
       *
       * @param request UpgradeLindormInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeLindormInstanceResponse
       */
      Models::UpgradeLindormInstanceResponse upgradeLindormInstanceWithOptions(const Models::UpgradeLindormInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades, scales up, or enable cold storage for a Lindorm instance.
       *
       * @description For more information about how to select the storage type and engine type when you create a Lindorm instance, see [Select engine typpes](https://help.aliyun.com/document_detail/181971.html) and [Select storage types](https://help.aliyun.com/document_detail/174643.html).
       *
       * @param request UpgradeLindormInstanceRequest
       * @return UpgradeLindormInstanceResponse
       */
      Models::UpgradeLindormInstanceResponse upgradeLindormInstance(const Models::UpgradeLindormInstanceRequest &request);

      /**
       * @param request UpgradeLindormV2StreamEngineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeLindormV2StreamEngineResponse
       */
      Models::UpgradeLindormV2StreamEngineResponse upgradeLindormV2StreamEngineWithOptions(const Models::UpgradeLindormV2StreamEngineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpgradeLindormV2StreamEngineRequest
       * @return UpgradeLindormV2StreamEngineResponse
       */
      Models::UpgradeLindormV2StreamEngineResponse upgradeLindormV2StreamEngine(const Models::UpgradeLindormV2StreamEngineRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
