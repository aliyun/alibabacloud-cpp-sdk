// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SELECTDB20230522_HPP_
#define ALIBABACLOUD_SELECTDB20230522_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Selectdb20230522Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Selectdb20230522.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Applies for a public endpoint for an ApsaraDB for SelectDB instance.
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(const Models::AllocateInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a public endpoint for an ApsaraDB for SelectDB instance.
       *
       * @param request AllocateInstancePublicConnectionRequest
       * @return AllocateInstancePublicConnectionResponse
       */
      Models::AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(const Models::AllocateInstancePublicConnectionRequest &request);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源转组
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary SelectDB实例创建前检查
       *
       * @param request CheckCreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCreateDBInstanceResponse
       */
      Models::CheckCreateDBInstanceResponse checkCreateDBInstanceWithOptions(const Models::CheckCreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SelectDB实例创建前检查
       *
       * @param request CheckCreateDBInstanceRequest
       * @return CheckCreateDBInstanceResponse
       */
      Models::CheckCreateDBInstanceResponse checkCreateDBInstance(const Models::CheckCreateDBInstanceRequest &request);

      /**
       * @summary 判断指定 IP 是否已经存在于网络白名单组
       *
       * @param request CheckIpExistsInSecurityIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckIpExistsInSecurityIpListResponse
       */
      Models::CheckIpExistsInSecurityIpListResponse checkIpExistsInSecurityIpListWithOptions(const Models::CheckIpExistsInSecurityIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 判断指定 IP 是否已经存在于网络白名单组
       *
       * @param request CheckIpExistsInSecurityIpListRequest
       * @return CheckIpExistsInSecurityIpListResponse
       */
      Models::CheckIpExistsInSecurityIpListResponse checkIpExistsInSecurityIpList(const Models::CheckIpExistsInSecurityIpListRequest &request);

      /**
       * @summary 检查服务关联角色
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查服务关联角色
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a cluster in an ApsaraDB for SelectDB instance.
       *
       * @description > : For an instance that uses the pay-as-you-go billing method, you can create only pay-as-you-go clusters. For an instance that uses the subscription billing method, you can create pay-as-you-go or subscription clusters.
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster in an ApsaraDB for SelectDB instance.
       *
       * @description > : For an instance that uses the pay-as-you-go billing method, you can create only pay-as-you-go clusters. For an instance that uses the subscription billing method, you can create pay-as-you-go or subscription clusters.
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a binding relationship for clusters. If the zone-redundant storage (ZRS) deployment method is used, you can create a binding relationship between two clusters.
       *
       * @description This operation is supported only for instances that use the zone-redundant storage (ZRS) feature and meet the following requirements:
       * *   The instance clusters reside in different zones.
       * *   The billing method of the instance clusters is consistent.
       *
       * @param request CreateDBClusterBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterBindingResponse
       */
      Models::CreateDBClusterBindingResponse createDBClusterBindingWithOptions(const Models::CreateDBClusterBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a binding relationship for clusters. If the zone-redundant storage (ZRS) deployment method is used, you can create a binding relationship between two clusters.
       *
       * @description This operation is supported only for instances that use the zone-redundant storage (ZRS) feature and meet the following requirements:
       * *   The instance clusters reside in different zones.
       * *   The billing method of the instance clusters is consistent.
       *
       * @param request CreateDBClusterBindingRequest
       * @return CreateDBClusterBindingResponse
       */
      Models::CreateDBClusterBindingResponse createDBClusterBinding(const Models::CreateDBClusterBindingRequest &request);

      /**
       * @summary Creates an ApsaraDB for SelectDB instance.
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for SelectDB instance.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a scheduled scaling rule.
       *
       * @param request CreateElasticRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticRuleResponse
       */
      Models::CreateElasticRuleResponse createElasticRuleWithOptions(const Models::CreateElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scheduled scaling rule.
       *
       * @param request CreateElasticRuleRequest
       * @return CreateElasticRuleResponse
       */
      Models::CreateElasticRuleResponse createElasticRule(const Models::CreateElasticRuleRequest &request);

      /**
       * @summary Creates a service-linked role for ApsaraDB for SelectDB.
       *
       * @param request CreateServiceLinkedRoleForSelectDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleForSelectDBResponse
       */
      Models::CreateServiceLinkedRoleForSelectDBResponse createServiceLinkedRoleForSelectDBWithOptions(const Models::CreateServiceLinkedRoleForSelectDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role for ApsaraDB for SelectDB.
       *
       * @param request CreateServiceLinkedRoleForSelectDBRequest
       * @return CreateServiceLinkedRoleForSelectDBResponse
       */
      Models::CreateServiceLinkedRoleForSelectDBResponse createServiceLinkedRoleForSelectDB(const Models::CreateServiceLinkedRoleForSelectDBRequest &request);

      /**
       * @summary 创建虚拟集群
       *
       * @param request CreateVirtualClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualClusterResponse
       */
      Models::CreateVirtualClusterResponse createVirtualClusterWithOptions(const Models::CreateVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建虚拟集群
       *
       * @param request CreateVirtualClusterRequest
       * @return CreateVirtualClusterResponse
       */
      Models::CreateVirtualClusterResponse createVirtualCluster(const Models::CreateVirtualClusterRequest &request);

      /**
       * @summary Deletes a cluster from an instance.
       *
       * @param request DeleteDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBClusterWithOptions(const Models::DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cluster from an instance.
       *
       * @param request DeleteDBClusterRequest
       * @return DeleteDBClusterResponse
       */
      Models::DeleteDBClusterResponse deleteDBCluster(const Models::DeleteDBClusterRequest &request);

      /**
       * @summary Deletes the binding relationship between two clusters for mutual backup.
       *
       * @param request DeleteDBClusterBindingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBClusterBindingResponse
       */
      Models::DeleteDBClusterBindingResponse deleteDBClusterBindingWithOptions(const Models::DeleteDBClusterBindingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the binding relationship between two clusters for mutual backup.
       *
       * @param request DeleteDBClusterBindingRequest
       * @return DeleteDBClusterBindingResponse
       */
      Models::DeleteDBClusterBindingResponse deleteDBClusterBinding(const Models::DeleteDBClusterBindingRequest &request);

      /**
       * @summary 删除DB实例
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除DB实例
       *
       * @param request DeleteDBInstanceRequest
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstance(const Models::DeleteDBInstanceRequest &request);

      /**
       * @summary Deletes a scheduled scaling rule.
       *
       * @param request DeleteElasticRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteElasticRuleResponse
       */
      Models::DeleteElasticRuleResponse deleteElasticRuleWithOptions(const Models::DeleteElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scheduled scaling rule.
       *
       * @param request DeleteElasticRuleRequest
       * @return DeleteElasticRuleResponse
       */
      Models::DeleteElasticRuleResponse deleteElasticRule(const Models::DeleteElasticRuleRequest &request);

      /**
       * @summary 删除虚拟集群
       *
       * @param request DeleteVirtualClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualClusterResponse
       */
      Models::DeleteVirtualClusterResponse deleteVirtualClusterWithOptions(const Models::DeleteVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除虚拟集群
       *
       * @param request DeleteVirtualClusterRequest
       * @return DeleteVirtualClusterResponse
       */
      Models::DeleteVirtualClusterResponse deleteVirtualCluster(const Models::DeleteVirtualClusterRequest &request);

      /**
       * @summary Queries the information about all instance specifications.
       *
       * @param request DescribeAllDBInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDBInstanceClassResponse
       */
      Models::DescribeAllDBInstanceClassResponse describeAllDBInstanceClassWithOptions(const Models::DescribeAllDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all instance specifications.
       *
       * @param request DescribeAllDBInstanceClassRequest
       * @return DescribeAllDBInstanceClassResponse
       */
      Models::DescribeAllDBInstanceClassResponse describeAllDBInstanceClass(const Models::DescribeAllDBInstanceClassRequest &request);

      /**
       * @summary Queries the configuration information about a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigResponse
       */
      Models::DescribeDBClusterConfigResponse describeDBClusterConfigWithOptions(const Models::DescribeDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information about a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBClusterConfigRequest
       * @return DescribeDBClusterConfigResponse
       */
      Models::DescribeDBClusterConfigResponse describeDBClusterConfig(const Models::DescribeDBClusterConfigRequest &request);

      /**
       * @summary Queries the configuration change logs of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBClusterConfigChangeLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigChangeLogsResponse
       */
      Models::DescribeDBClusterConfigChangeLogsResponse describeDBClusterConfigChangeLogsWithOptions(const Models::DescribeDBClusterConfigChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration change logs of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBClusterConfigChangeLogsRequest
       * @return DescribeDBClusterConfigChangeLogsResponse
       */
      Models::DescribeDBClusterConfigChangeLogsResponse describeDBClusterConfigChangeLogs(const Models::DescribeDBClusterConfigChangeLogsRequest &request);

      /**
       * @summary 获取集群的各规格缓存限制
       *
       * @param request DescribeDBClusterStorageLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterStorageLimitationResponse
       */
      Models::DescribeDBClusterStorageLimitationResponse describeDBClusterStorageLimitationWithOptions(const Models::DescribeDBClusterStorageLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取集群的各规格缓存限制
       *
       * @param request DescribeDBClusterStorageLimitationRequest
       * @return DescribeDBClusterStorageLimitationResponse
       */
      Models::DescribeDBClusterStorageLimitationResponse describeDBClusterStorageLimitation(const Models::DescribeDBClusterStorageLimitationRequest &request);

      /**
       * @summary Queries the details about an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries the network information about an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information about an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries the information about ApsaraDB for SelectDB instances.
       *
       * @param tmpReq DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about ApsaraDB for SelectDB instances.
       *
       * @param request DescribeDBInstancesRequest
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstances(const Models::DescribeDBInstancesRequest &request);

      /**
       * @summary Queries scheduled scaling rules.
       *
       * @param request DescribeElasticRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElasticRulesResponse
       */
      Models::DescribeElasticRulesResponse describeElasticRulesWithOptions(const Models::DescribeElasticRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries scheduled scaling rules.
       *
       * @param request DescribeElasticRulesRequest
       * @return DescribeElasticRulesResponse
       */
      Models::DescribeElasticRulesResponse describeElasticRules(const Models::DescribeElasticRulesRequest &request);

      /**
       * @summary Queries available regions and zones.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available regions and zones.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the IP addresses in the whitelists of an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeSecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityIPListResponse
       */
      Models::DescribeSecurityIPListResponse describeSecurityIPListWithOptions(const Models::DescribeSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IP addresses in the whitelists of an ApsaraDB for SelectDB instance.
       *
       * @param request DescribeSecurityIPListRequest
       * @return DescribeSecurityIPListResponse
       */
      Models::DescribeSecurityIPListResponse describeSecurityIPList(const Models::DescribeSecurityIPListRequest &request);

      /**
       * @summary DescribeVSwitches
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeVSwitches
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary DescribeZones
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeZones
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Uses the scheduled scaling policy.
       *
       * @param request EnDisableScalingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnDisableScalingRulesResponse
       */
      Models::EnDisableScalingRulesResponse enDisableScalingRulesWithOptions(const Models::EnDisableScalingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses the scheduled scaling policy.
       *
       * @param request EnDisableScalingRulesRequest
       * @return EnDisableScalingRulesResponse
       */
      Models::EnDisableScalingRulesResponse enDisableScalingRules(const Models::EnDisableScalingRulesRequest &request);

      /**
       * @summary Queries the pricing for creating a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request GetCreateBEClusterInquiryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateBEClusterInquiryResponse
       */
      Models::GetCreateBEClusterInquiryResponse getCreateBEClusterInquiryWithOptions(const Models::GetCreateBEClusterInquiryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing for creating a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request GetCreateBEClusterInquiryRequest
       * @return GetCreateBEClusterInquiryResponse
       */
      Models::GetCreateBEClusterInquiryResponse getCreateBEClusterInquiry(const Models::GetCreateBEClusterInquiryRequest &request);

      /**
       * @summary Queries the pricing for changing the specifications of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request GetModifyBEClusterInquiryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModifyBEClusterInquiryResponse
       */
      Models::GetModifyBEClusterInquiryResponse getModifyBEClusterInquiryWithOptions(const Models::GetModifyBEClusterInquiryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing for changing the specifications of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request GetModifyBEClusterInquiryRequest
       * @return GetModifyBEClusterInquiryResponse
       */
      Models::GetModifyBEClusterInquiryResponse getModifyBEClusterInquiry(const Models::GetModifyBEClusterInquiryRequest &request);

      /**
       * @summary Modifies the name of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request ModifyBEClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBEClusterAttributeResponse
       */
      Models::ModifyBEClusterAttributeResponse modifyBEClusterAttributeWithOptions(const Models::ModifyBEClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request ModifyBEClusterAttributeRequest
       * @return ModifyBEClusterAttributeResponse
       */
      Models::ModifyBEClusterAttributeResponse modifyBEClusterAttribute(const Models::ModifyBEClusterAttributeRequest &request);

      /**
       * @summary 集群变配
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 集群变配
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Modifies the configurations of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request ModifyDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(const Models::ModifyDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request ModifyDBClusterConfigRequest
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfig(const Models::ModifyDBClusterConfigRequest &request);

      /**
       * @summary Modifies the maintenance window or description of an ApsaraDB for SelectDB instance.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttributeWithOptions(const Models::ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window or description of an ApsaraDB for SelectDB instance.
       *
       * @param request ModifyDBInstanceAttributeRequest
       * @return ModifyDBInstanceAttributeResponse
       */
      Models::ModifyDBInstanceAttributeResponse modifyDBInstanceAttribute(const Models::ModifyDBInstanceAttributeRequest &request);

      /**
       * @summary Modifies a scheduled scaling rule.
       *
       * @param request ModifyElasticRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyElasticRuleResponse
       */
      Models::ModifyElasticRuleResponse modifyElasticRuleWithOptions(const Models::ModifyElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a scheduled scaling rule.
       *
       * @param request ModifyElasticRuleRequest
       * @return ModifyElasticRuleResponse
       */
      Models::ModifyElasticRuleResponse modifyElasticRule(const Models::ModifyElasticRuleRequest &request);

      /**
       * @summary Modifies the IP addresses in a whitelist of an ApsaraDB for SelectDB instance.
       *
       * @param request ModifySecurityIPListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityIPListResponse
       */
      Models::ModifySecurityIPListResponse modifySecurityIPListWithOptions(const Models::ModifySecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP addresses in a whitelist of an ApsaraDB for SelectDB instance.
       *
       * @param request ModifySecurityIPListRequest
       * @return ModifySecurityIPListResponse
       */
      Models::ModifySecurityIPListResponse modifySecurityIPList(const Models::ModifySecurityIPListRequest &request);

      /**
       * @summary 修改虚拟集群
       *
       * @param request ModifyVirtualClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualClusterResponse
       */
      Models::ModifyVirtualClusterResponse modifyVirtualClusterWithOptions(const Models::ModifyVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改虚拟集群
       *
       * @param request ModifyVirtualClusterRequest
       * @return ModifyVirtualClusterResponse
       */
      Models::ModifyVirtualClusterResponse modifyVirtualCluster(const Models::ModifyVirtualClusterRequest &request);

      /**
       * @summary Releases the public endpoint of an ApsaraDB for SelectDB instance.
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(const Models::ReleaseInstancePublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases the public endpoint of an ApsaraDB for SelectDB instance.
       *
       * @param request ReleaseInstancePublicConnectionRequest
       * @return ReleaseInstancePublicConnectionResponse
       */
      Models::ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(const Models::ReleaseInstancePublicConnectionRequest &request);

      /**
       * @summary Resets the password of an account for an ApsaraDB for SelectDB instance.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of an account for an ApsaraDB for SelectDB instance.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Restarts a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request RestartDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBClusterResponse
       */
      Models::RestartDBClusterResponse restartDBClusterWithOptions(const Models::RestartDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a cluster in an ApsaraDB for SelectDB instance.
       *
       * @param request RestartDBClusterRequest
       * @return RestartDBClusterResponse
       */
      Models::RestartDBClusterResponse restartDBCluster(const Models::RestartDBClusterRequest &request);

      /**
       * @summary 暂停后恢复集群
       *
       * @param request StartBEClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBEClusterResponse
       */
      Models::StartBEClusterResponse startBEClusterWithOptions(const Models::StartBEClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停后恢复集群
       *
       * @param request StartBEClusterRequest
       * @return StartBEClusterResponse
       */
      Models::StartBEClusterResponse startBECluster(const Models::StartBEClusterRequest &request);

      /**
       * @summary 暂停BE集群
       *
       * @param request StopBEClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopBEClusterResponse
       */
      Models::StopBEClusterResponse stopBEClusterWithOptions(const Models::StopBEClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停BE集群
       *
       * @param request StopBEClusterRequest
       * @return StopBEClusterResponse
       */
      Models::StopBEClusterResponse stopBECluster(const Models::StopBEClusterRequest &request);

      /**
       * @summary 资源打用户标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源打用户标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 资源去除用户标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源去除用户标签
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary UpgradeDBInstanceDeployScheme
       *
       * @param tmpReq UpgradeDBInstanceDeploySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceDeploySchemeResponse
       */
      Models::UpgradeDBInstanceDeploySchemeResponse upgradeDBInstanceDeploySchemeWithOptions(const Models::UpgradeDBInstanceDeploySchemeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpgradeDBInstanceDeployScheme
       *
       * @param request UpgradeDBInstanceDeploySchemeRequest
       * @return UpgradeDBInstanceDeploySchemeResponse
       */
      Models::UpgradeDBInstanceDeploySchemeResponse upgradeDBInstanceDeployScheme(const Models::UpgradeDBInstanceDeploySchemeRequest &request);

      /**
       * @summary Updates the database engine version of an ApsaraDB for SelectDB instance.
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(const Models::UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the database engine version of an ApsaraDB for SelectDB instance.
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(const Models::UpgradeDBInstanceEngineVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
