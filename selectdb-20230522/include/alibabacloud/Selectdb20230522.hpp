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
       * @summary Moves a specified database instance to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a specified database instance to a different resource group.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Performs a precheck on the resources required to create an ApsaraDB for SelectDB instance.
       *
       * @param request CheckCreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCreateDBInstanceResponse
       */
      Models::CheckCreateDBInstanceResponse checkCreateDBInstanceWithOptions(const Models::CheckCreateDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a precheck on the resources required to create an ApsaraDB for SelectDB instance.
       *
       * @param request CheckCreateDBInstanceRequest
       * @return CheckCreateDBInstanceResponse
       */
      Models::CheckCreateDBInstanceResponse checkCreateDBInstance(const Models::CheckCreateDBInstanceRequest &request);

      /**
       * @summary Checks whether a specified IP address already exists in a network whitelist group.
       *
       * @param request CheckIpExistsInSecurityIpListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckIpExistsInSecurityIpListResponse
       */
      Models::CheckIpExistsInSecurityIpListResponse checkIpExistsInSecurityIpListWithOptions(const Models::CheckIpExistsInSecurityIpListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a specified IP address already exists in a network whitelist group.
       *
       * @param request CheckIpExistsInSecurityIpListRequest
       * @return CheckIpExistsInSecurityIpListResponse
       */
      Models::CheckIpExistsInSecurityIpListResponse checkIpExistsInSecurityIpList(const Models::CheckIpExistsInSecurityIpListRequest &request);

      /**
       * @summary Call this operation to check the service-linked role.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(const Models::CheckServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to check the service-linked role.
       *
       * @param request CheckServiceLinkedRoleRequest
       * @return CheckServiceLinkedRoleResponse
       */
      Models::CheckServiceLinkedRoleResponse checkServiceLinkedRole(const Models::CheckServiceLinkedRoleRequest &request);

      /**
       * @summary Creates a cluster for a specified ApsaraDB for SelectDB instance.
       *
       * @description >Warning: 
       * Pay-as-you-go instances support only pay-as-you-go clusters. Subscription instances support both pay-as-you-go and subscription clusters.
       *
       * @param request CreateDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBClusterWithOptions(const Models::CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cluster for a specified ApsaraDB for SelectDB instance.
       *
       * @description >Warning: 
       * Pay-as-you-go instances support only pay-as-you-go clusters. Subscription instances support both pay-as-you-go and subscription clusters.
       *
       * @param request CreateDBClusterRequest
       * @return CreateDBClusterResponse
       */
      Models::CreateDBClusterResponse createDBCluster(const Models::CreateDBClusterRequest &request);

      /**
       * @summary Creates a binding relationship for clusters. If the zone-redundant storage (ZRS) deployment method is used, you can create a binding relationship between two clusters.
       *
       * @description This operation is supported only for instances that use the zone-redundant storage (ZRS) feature and meet the following requirements:
       * - The instance clusters reside in different zones.
       * - The billing method of the instance clusters is consistent.
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
       * - The instance clusters reside in different zones.
       * - The billing method of the instance clusters is consistent.
       *
       * @param request CreateDBClusterBindingRequest
       * @return CreateDBClusterBindingResponse
       */
      Models::CreateDBClusterBindingResponse createDBClusterBinding(const Models::CreateDBClusterBindingRequest &request);

      /**
       * @summary Creates an ApsaraDB for SelectDB instance.
       *
       * @description Subscription instances cannot be deleted.
       *
       * @param tmpReq CreateDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstanceWithOptions(const Models::CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ApsaraDB for SelectDB instance.
       *
       * @description Subscription instances cannot be deleted.
       *
       * @param request CreateDBInstanceRequest
       * @return CreateDBInstanceResponse
       */
      Models::CreateDBInstanceResponse createDBInstance(const Models::CreateDBInstanceRequest &request);

      /**
       * @summary Creates a time-based scaling rule.
       *
       * @param request CreateElasticRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticRuleResponse
       */
      Models::CreateElasticRuleResponse createElasticRuleWithOptions(const Models::CreateElasticRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a time-based scaling rule.
       *
       * @param request CreateElasticRuleRequest
       * @return CreateElasticRuleResponse
       */
      Models::CreateElasticRuleResponse createElasticRule(const Models::CreateElasticRuleRequest &request);

      /**
       * @summary Call this operation to create a service-linked role.
       *
       * @param request CreateServiceLinkedRoleForSelectDBRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleForSelectDBResponse
       */
      Models::CreateServiceLinkedRoleForSelectDBResponse createServiceLinkedRoleForSelectDBWithOptions(const Models::CreateServiceLinkedRoleForSelectDBRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to create a service-linked role.
       *
       * @param request CreateServiceLinkedRoleForSelectDBRequest
       * @return CreateServiceLinkedRoleForSelectDBResponse
       */
      Models::CreateServiceLinkedRoleForSelectDBResponse createServiceLinkedRoleForSelectDB(const Models::CreateServiceLinkedRoleForSelectDBRequest &request);

      /**
       * @summary Creates a virtual cluster.
       *
       * @description This operation is supported only for instances that use zone-redundant storage. The following conditions must also be met:
       * - The minor engine version of the instance is 4.0.7 or later.
       * - The primary and standby clusters are in different zones.
       *
       * @param request CreateVirtualClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualClusterResponse
       */
      Models::CreateVirtualClusterResponse createVirtualClusterWithOptions(const Models::CreateVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual cluster.
       *
       * @description This operation is supported only for instances that use zone-redundant storage. The following conditions must also be met:
       * - The minor engine version of the instance is 4.0.7 or later.
       * - The primary and standby clusters are in different zones.
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
       * @summary Deletes a specified ApsaraDB SelectDB instance.
       *
       * @description Subscription instances cannot be deleted.
       *
       * @param request DeleteDBInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDBInstanceResponse
       */
      Models::DeleteDBInstanceResponse deleteDBInstanceWithOptions(const Models::DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified ApsaraDB SelectDB instance.
       *
       * @description Subscription instances cannot be deleted.
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
       * @summary Deletes a virtual cluster.
       *
       * @description > - This operation deletes only the virtual cluster. It **does not** delete the attached primary or secondary cluster.
       *
       * @param request DeleteVirtualClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualClusterResponse
       */
      Models::DeleteVirtualClusterResponse deleteVirtualClusterWithOptions(const Models::DeleteVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual cluster.
       *
       * @description > - This operation deletes only the virtual cluster. It **does not** delete the attached primary or secondary cluster.
       *
       * @param request DeleteVirtualClusterRequest
       * @return DeleteVirtualClusterResponse
       */
      Models::DeleteVirtualClusterResponse deleteVirtualCluster(const Models::DeleteVirtualClusterRequest &request);

      /**
       * @summary Retrieves all instance type information.
       *
       * @param request DescribeAllDBInstanceClassRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAllDBInstanceClassResponse
       */
      Models::DescribeAllDBInstanceClassResponse describeAllDBInstanceClassWithOptions(const Models::DescribeAllDBInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all instance type information.
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
       * @summary Queries the change logs for cluster configurations.
       *
       * @param request DescribeDBClusterConfigChangeLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterConfigChangeLogsResponse
       */
      Models::DescribeDBClusterConfigChangeLogsResponse describeDBClusterConfigChangeLogsWithOptions(const Models::DescribeDBClusterConfigChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the change logs for cluster configurations.
       *
       * @param request DescribeDBClusterConfigChangeLogsRequest
       * @return DescribeDBClusterConfigChangeLogsResponse
       */
      Models::DescribeDBClusterConfigChangeLogsResponse describeDBClusterConfigChangeLogs(const Models::DescribeDBClusterConfigChangeLogsRequest &request);

      /**
       * @summary Queries the cache limits for each cluster specification.
       *
       * @param request DescribeDBClusterStorageLimitationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBClusterStorageLimitationResponse
       */
      Models::DescribeDBClusterStorageLimitationResponse describeDBClusterStorageLimitationWithOptions(const Models::DescribeDBClusterStorageLimitationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cache limits for each cluster specification.
       *
       * @param request DescribeDBClusterStorageLimitationRequest
       * @return DescribeDBClusterStorageLimitationResponse
       */
      Models::DescribeDBClusterStorageLimitationResponse describeDBClusterStorageLimitation(const Models::DescribeDBClusterStorageLimitationRequest &request);

      /**
       * @summary Queries the details of an instance.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(const Models::DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance.
       *
       * @param request DescribeDBInstanceAttributeRequest
       * @return DescribeDBInstanceAttributeResponse
       */
      Models::DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(const Models::DescribeDBInstanceAttributeRequest &request);

      /**
       * @summary Queries the network information of a specified ApsaraDB SelectDB instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(const Models::DescribeDBInstanceNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information of a specified ApsaraDB SelectDB instance.
       *
       * @param request DescribeDBInstanceNetInfoRequest
       * @return DescribeDBInstanceNetInfoResponse
       */
      Models::DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(const Models::DescribeDBInstanceNetInfoRequest &request);

      /**
       * @summary Queries instances.
       *
       * @param tmpReq DescribeDBInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDBInstancesResponse
       */
      Models::DescribeDBInstancesResponse describeDBInstancesWithOptions(const Models::DescribeDBInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instances.
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
       * @summary Retrieves the Profile analysis for a query.
       *
       * @description We recommend using the visual interface to run a query and obtain its QueryID. For more information, see [query audit](https://help.aliyun.com/zh/selectdb/audit-queries).
       * >Notice: 
       * Version limitations
       * - Version 3.0 is not supported.
       * - This feature is not available for instances created before 2025-08-01. To enable this feature for an older instance, please submit a ticket.
       *
       * @param request DescribeProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProfileResponse
       */
      Models::DescribeProfileResponse describeProfileWithOptions(const Models::DescribeProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Profile analysis for a query.
       *
       * @description We recommend using the visual interface to run a query and obtain its QueryID. For more information, see [query audit](https://help.aliyun.com/zh/selectdb/audit-queries).
       * >Notice: 
       * Version limitations
       * - Version 3.0 is not supported.
       * - This feature is not available for instances created before 2025-08-01. To enable this feature for an older instance, please submit a ticket.
       *
       * @param request DescribeProfileRequest
       * @return DescribeProfileResponse
       */
      Models::DescribeProfileResponse describeProfile(const Models::DescribeProfileRequest &request);

      /**
       * @summary Retrieves the execution plan (Explain) for a query.
       *
       * @param request DescribeQueryExplainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeQueryExplainResponse
       */
      Models::DescribeQueryExplainResponse describeQueryExplainWithOptions(const Models::DescribeQueryExplainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the execution plan (Explain) for a query.
       *
       * @param request DescribeQueryExplainRequest
       * @return DescribeQueryExplainResponse
       */
      Models::DescribeQueryExplainResponse describeQueryExplain(const Models::DescribeQueryExplainRequest &request);

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
       * @summary Retrieve slow query statistics for a time range.
       *
       * @param request DescribeSlowQueryStatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlowQueryStatsResponse
       */
      Models::DescribeSlowQueryStatsResponse describeSlowQueryStatsWithOptions(const Models::DescribeSlowQueryStatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve slow query statistics for a time range.
       *
       * @param request DescribeSlowQueryStatsRequest
       * @return DescribeSlowQueryStatsResponse
       */
      Models::DescribeSlowQueryStatsResponse describeSlowQueryStats(const Models::DescribeSlowQueryStatsRequest &request);

      /**
       * @summary Retrieves the CREATE TABLE statement.
       *
       * @param request DescribeTableSchemaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTableSchemaResponse
       */
      Models::DescribeTableSchemaResponse describeTableSchemaWithOptions(const Models::DescribeTableSchemaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the CREATE TABLE statement.
       *
       * @param request DescribeTableSchemaRequest
       * @return DescribeTableSchemaResponse
       */
      Models::DescribeTableSchemaResponse describeTableSchema(const Models::DescribeTableSchemaRequest &request);

      /**
       * @summary Queries vSwitches in a specified zone.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries vSwitches in a specified zone.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Describes the available zones.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the available zones.
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
       * @summary Queries pricing information for creating a new cluster in a SelectDB instance.
       *
       * @param request GetCreateBEClusterInquiryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCreateBEClusterInquiryResponse
       */
      Models::GetCreateBEClusterInquiryResponse getCreateBEClusterInquiryWithOptions(const Models::GetCreateBEClusterInquiryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries pricing information for creating a new cluster in a SelectDB instance.
       *
       * @param request GetCreateBEClusterInquiryRequest
       * @return GetCreateBEClusterInquiryResponse
       */
      Models::GetCreateBEClusterInquiryResponse getCreateBEClusterInquiry(const Models::GetCreateBEClusterInquiryRequest &request);

      /**
       * @summary Retrieves pricing information when creating a cluster under a specified ApsaraDB for SelectDB instance.
       *
       * @param request GetModifyBEClusterInquiryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModifyBEClusterInquiryResponse
       */
      Models::GetModifyBEClusterInquiryResponse getModifyBEClusterInquiryWithOptions(const Models::GetModifyBEClusterInquiryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves pricing information when creating a cluster under a specified ApsaraDB for SelectDB instance.
       *
       * @param request GetModifyBEClusterInquiryRequest
       * @return GetModifyBEClusterInquiryResponse
       */
      Models::GetModifyBEClusterInquiryResponse getModifyBEClusterInquiry(const Models::GetModifyBEClusterInquiryRequest &request);

      /**
       * @summary Modifies the cluster name of an ApsaraDB SelectDB instance.
       *
       * @param request ModifyBEClusterAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBEClusterAttributeResponse
       */
      Models::ModifyBEClusterAttributeResponse modifyBEClusterAttributeWithOptions(const Models::ModifyBEClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cluster name of an ApsaraDB SelectDB instance.
       *
       * @param request ModifyBEClusterAttributeRequest
       * @return ModifyBEClusterAttributeResponse
       */
      Models::ModifyBEClusterAttributeResponse modifyBEClusterAttribute(const Models::ModifyBEClusterAttributeRequest &request);

      /**
       * @summary Scales out or in a specified ApsaraDB for SelectDB cluster.
       *
       * @param request ModifyDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBClusterWithOptions(const Models::ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out or in a specified ApsaraDB for SelectDB cluster.
       *
       * @param request ModifyDBClusterRequest
       * @return ModifyDBClusterResponse
       */
      Models::ModifyDBClusterResponse modifyDBCluster(const Models::ModifyDBClusterRequest &request);

      /**
       * @summary Modifies the cluster configuration.
       *
       * @param request ModifyDBClusterConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDBClusterConfigResponse
       */
      Models::ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(const Models::ModifyDBClusterConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the cluster configuration.
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
       * @summary Modifies a virtual cluster.
       *
       * @description - You can modify the primary cluster independently.
       * - You can modify the standby cluster independently.
       * - You can switch between the primary and standby clusters.
       * >Warning: 
       * You cannot modify both the primary and standby clusters in the same operation.
       *
       * @param request ModifyVirtualClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVirtualClusterResponse
       */
      Models::ModifyVirtualClusterResponse modifyVirtualClusterWithOptions(const Models::ModifyVirtualClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a virtual cluster.
       *
       * @description - You can modify the primary cluster independently.
       * - You can modify the standby cluster independently.
       * - You can switch between the primary and standby clusters.
       * >Warning: 
       * You cannot modify both the primary and standby clusters in the same operation.
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
       * @summary Resets the password for a database account in an ApsaraDB for SelectDB instance.
       *
       * @param request ResetAccountPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPasswordWithOptions(const Models::ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password for a database account in an ApsaraDB for SelectDB instance.
       *
       * @param request ResetAccountPasswordRequest
       * @return ResetAccountPasswordResponse
       */
      Models::ResetAccountPasswordResponse resetAccountPassword(const Models::ResetAccountPasswordRequest &request);

      /**
       * @summary Restarts the cluster of a specified ApsaraDB for SelectDB instance.
       *
       * @param request RestartDBClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartDBClusterResponse
       */
      Models::RestartDBClusterResponse restartDBClusterWithOptions(const Models::RestartDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts the cluster of a specified ApsaraDB for SelectDB instance.
       *
       * @param request RestartDBClusterRequest
       * @return RestartDBClusterResponse
       */
      Models::RestartDBClusterResponse restartDBCluster(const Models::RestartDBClusterRequest &request);

      /**
       * @summary Starts a specified ApsaraDB SelectDB cluster.
       *
       * @param request StartBEClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartBEClusterResponse
       */
      Models::StartBEClusterResponse startBEClusterWithOptions(const Models::StartBEClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a specified ApsaraDB SelectDB cluster.
       *
       * @param request StartBEClusterRequest
       * @return StartBEClusterResponse
       */
      Models::StartBEClusterResponse startBECluster(const Models::StartBEClusterRequest &request);

      /**
       * @summary Stops a specified ApsaraDB SelectDB cluster.
       *
       * @param request StopBEClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopBEClusterResponse
       */
      Models::StopBEClusterResponse stopBEClusterWithOptions(const Models::StopBEClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a specified ApsaraDB SelectDB cluster.
       *
       * @param request StopBEClusterRequest
       * @return StopBEClusterResponse
       */
      Models::StopBEClusterResponse stopBECluster(const Models::StopBEClusterRequest &request);

      /**
       * @summary Adds tags to one or more instances.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to one or more instances.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from instances.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from instances.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Upgrades a locally redundant instance to a zone-redundant instance.
       *
       * @description When an instance is upgraded to a zone-redundant architecture, its storage is also upgraded to be zone-redundant. The unit price for storage changes. For more information, see [Billing items and pricing](https://help.aliyun.com/zh/selectdb/product-overview/billing-item-new-version).
       * > Version requirements
       * >
       * > - The minor version of the instance must be 4.0.4 or later.
       *
       * @param tmpReq UpgradeDBInstanceDeploySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceDeploySchemeResponse
       */
      Models::UpgradeDBInstanceDeploySchemeResponse upgradeDBInstanceDeploySchemeWithOptions(const Models::UpgradeDBInstanceDeploySchemeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades a locally redundant instance to a zone-redundant instance.
       *
       * @description When an instance is upgraded to a zone-redundant architecture, its storage is also upgraded to be zone-redundant. The unit price for storage changes. For more information, see [Billing items and pricing](https://help.aliyun.com/zh/selectdb/product-overview/billing-item-new-version).
       * > Version requirements
       * >
       * > - The minor version of the instance must be 4.0.4 or later.
       *
       * @param request UpgradeDBInstanceDeploySchemeRequest
       * @return UpgradeDBInstanceDeploySchemeResponse
       */
      Models::UpgradeDBInstanceDeploySchemeResponse upgradeDBInstanceDeployScheme(const Models::UpgradeDBInstanceDeploySchemeRequest &request);

      /**
       * @summary Upgrades the database version of a specified ApsaraDB SelectDB instance.
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(const Models::UpgradeDBInstanceEngineVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the database version of a specified ApsaraDB SelectDB instance.
       *
       * @param request UpgradeDBInstanceEngineVersionRequest
       * @return UpgradeDBInstanceEngineVersionResponse
       */
      Models::UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(const Models::UpgradeDBInstanceEngineVersionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
