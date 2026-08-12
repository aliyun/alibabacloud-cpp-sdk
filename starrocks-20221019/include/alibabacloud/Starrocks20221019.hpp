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
       * @summary Adds a backup policy.
       *
       * @param request AddBackupPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBackupPolicyResponse
       */
      Models::AddBackupPolicyResponse addBackupPolicyWithOptions(const Models::AddBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a backup policy.
       *
       * @param request AddBackupPolicyRequest
       * @return AddBackupPolicyResponse
       */
      Models::AddBackupPolicyResponse addBackupPolicy(const Models::AddBackupPolicyRequest &request);

      /**
       * @summary Creates a gateway.
       *
       * @description The AddGateway operation requires software stack version 1.7.6 or later and at least three front-end (FE) nodes.
       *
       * @param request AddGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGatewayResponse
       */
      Models::AddGatewayResponse addGatewayWithOptions(const Models::AddGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a gateway.
       *
       * @description The AddGateway operation requires software stack version 1.7.6 or later and at least three front-end (FE) nodes.
       *
       * @param request AddGatewayRequest
       * @return AddGatewayResponse
       */
      Models::AddGatewayResponse addGateway(const Models::AddGatewayRequest &request);

      /**
       * @summary This operation changes the resource group of a Serverless StarRocks instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation changes the resource group of a Serverless StarRocks instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Check the inventory of resources.
       *
       * @param request CheckInventoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInventoryResponse
       */
      Models::CheckInventoryResponse checkInventoryWithOptions(const Models::CheckInventoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Check the inventory of resources.
       *
       * @param request CheckInventoryRequest
       * @return CheckInventoryResponse
       */
      Models::CheckInventoryResponse checkInventory(const Models::CheckInventoryRequest &request);

      /**
       * @summary Creates an Agent compute group.
       *
       * @param request CreateAgentResourceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResourceResponse
       */
      Models::CreateAgentResourceResponse createAgentResourceWithOptions(const Models::CreateAgentResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Agent compute group.
       *
       * @param request CreateAgentResourceRequest
       * @return CreateAgentResourceResponse
       */
      Models::CreateAgentResourceResponse createAgentResource(const Models::CreateAgentResourceRequest &request);

      /**
       * @summary Creates a Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       *
       * @param request CreateInstanceV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceV1Response
       */
      Models::CreateInstanceV1Response createInstanceV1WithOptions(const Models::CreateInstanceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       *
       * @param request CreateInstanceV1Request
       * @return CreateInstanceV1Response
       */
      Models::CreateInstanceV1Response createInstanceV1(const Models::CreateInstanceV1Request &request);

      /**
       * @summary Create a scaling rule.
       *
       * @param request CreateScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScalingRuleResponse
       */
      Models::CreateScalingRuleResponse createScalingRuleWithOptions(const Models::CreateScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a scaling rule.
       *
       * @param request CreateScalingRuleRequest
       * @return CreateScalingRuleResponse
       */
      Models::CreateScalingRuleResponse createScalingRule(const Models::CreateScalingRuleRequest &request);

      /**
       * @summary This operation creates the AliyunServiceRoleForEMRStarRocks role.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation creates the AliyunServiceRoleForEMRStarRocks role.
       *
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole();

      /**
       * @summary Deletes a data backup.
       *
       * @description Deletes a data backup.
       *
       * @param request DeleteBackupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackupWithOptions(const Models::DeleteBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data backup.
       *
       * @description Deletes a data backup.
       *
       * @param request DeleteBackupRequest
       * @return DeleteBackupResponse
       */
      Models::DeleteBackupResponse deleteBackup(const Models::DeleteBackupRequest &request);

      /**
       * @summary Deletes a backup policy.
       *
       * @description Deletes a backup policy.
       *
       * @param request DeleteBackupPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicyWithOptions(const Models::DeleteBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a backup policy.
       *
       * @description Deletes a backup policy.
       *
       * @param request DeleteBackupPolicyRequest
       * @return DeleteBackupPolicyResponse
       */
      Models::DeleteBackupPolicyResponse deleteBackupPolicy(const Models::DeleteBackupPolicyRequest &request);

      /**
       * @summary Deleting a gateway
       *
       * @description Deletes a gateway group. After the gateway group is deleted, its FE nodes are automatically assigned to the default gateway group.
       *
       * @param request DeleteGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGatewayWithOptions(const Models::DeleteGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deleting a gateway
       *
       * @description Deletes a gateway group. After the gateway group is deleted, its FE nodes are automatically assigned to the default gateway group.
       *
       * @param request DeleteGatewayRequest
       * @return DeleteGatewayResponse
       */
      Models::DeleteGatewayResponse deleteGateway(const Models::DeleteGatewayRequest &request);

      /**
       * @summary Deletes an internal network whitelist group.
       *
       * @param request DeleteInnerIpWhitelistGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInnerIpWhitelistGroupResponse
       */
      Models::DeleteInnerIpWhitelistGroupResponse deleteInnerIpWhitelistGroupWithOptions(const Models::DeleteInnerIpWhitelistGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an internal network whitelist group.
       *
       * @param request DeleteInnerIpWhitelistGroupRequest
       * @return DeleteInnerIpWhitelistGroupResponse
       */
      Models::DeleteInnerIpWhitelistGroupResponse deleteInnerIpWhitelistGroup(const Models::DeleteInnerIpWhitelistGroupRequest &request);

      /**
       * @summary Deletes a scaling rule.
       *
       * @param request DeleteScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScalingRuleResponse
       */
      Models::DeleteScalingRuleResponse deleteScalingRuleWithOptions(const Models::DeleteScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scaling rule.
       *
       * @param request DeleteScalingRuleRequest
       * @return DeleteScalingRuleResponse
       */
      Models::DeleteScalingRuleResponse deleteScalingRule(const Models::DeleteScalingRuleRequest &request);

      /**
       * @summary Queries the available zones in a region.
       *
       * @param request DescribeAvailableZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZonesWithOptions(const Models::DescribeAvailableZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available zones in a region.
       *
       * @param request DescribeAvailableZonesRequest
       * @return DescribeAvailableZonesResponse
       */
      Models::DescribeAvailableZonesResponse describeAvailableZones(const Models::DescribeAvailableZonesRequest &request);

      /**
       * @summary Retrieve details of backup policies.
       *
       * @description Retrieve details of backup policies.
       *
       * @param request DescribeBackupPoliciesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupPoliciesResponse
       */
      Models::DescribeBackupPoliciesResponse describeBackupPoliciesWithOptions(const Models::DescribeBackupPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve details of backup policies.
       *
       * @description Retrieve details of backup policies.
       *
       * @param request DescribeBackupPoliciesRequest
       * @return DescribeBackupPoliciesResponse
       */
      Models::DescribeBackupPoliciesResponse describeBackupPolicies(const Models::DescribeBackupPoliciesRequest &request);

      /**
       * @summary Obtain backup details
       *
       * @description This is an asynchronous interface. Instance restarts are not immediate. After a successful call, the instance first enters the restarting state. The instance is successfully restarted when its status returns to running.
       *
       * @param request DescribeBackupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackupsWithOptions(const Models::DescribeBackupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain backup details
       *
       * @description This is an asynchronous interface. Instance restarts are not immediate. After a successful call, the instance first enters the restarting state. The instance is successfully restarted when its status returns to running.
       *
       * @param request DescribeBackupsRequest
       * @return DescribeBackupsResponse
       */
      Models::DescribeBackupsResponse describeBackups(const Models::DescribeBackupsRequest &request);

      /**
       * @summary Querying instance configuration history
       *
       * @description This is an asynchronous API, meaning the instance restart is not immediate. After a successful call, the instance enters the `restarting` state, and the process completes when its state changes to `running`.
       *
       * @param request DescribeConfigHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistoryWithOptions(const Models::DescribeConfigHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying instance configuration history
       *
       * @description This is an asynchronous API, meaning the instance restart is not immediate. After a successful call, the instance enters the `restarting` state, and the process completes when its state changes to `running`.
       *
       * @param request DescribeConfigHistoryRequest
       * @return DescribeConfigHistoryResponse
       */
      Models::DescribeConfigHistoryResponse describeConfigHistory(const Models::DescribeConfigHistoryRequest &request);

      /**
       * @summary Retrieve the cluster event name.
       *
       * @param request DescribeEventNamesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventNamesResponse
       */
      Models::DescribeEventNamesResponse describeEventNamesWithOptions(const Models::DescribeEventNamesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the cluster event name.
       *
       * @param request DescribeEventNamesRequest
       * @return DescribeEventNamesResponse
       */
      Models::DescribeEventNamesResponse describeEventNames(const Models::DescribeEventNamesRequest &request);

      /**
       * @summary Describes the whitelist groups for a private network.
       *
       * @param request DescribeInnerIpWhitelistGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInnerIpWhitelistGroupsResponse
       */
      Models::DescribeInnerIpWhitelistGroupsResponse describeInnerIpWhitelistGroupsWithOptions(const Models::DescribeInnerIpWhitelistGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the whitelist groups for a private network.
       *
       * @param request DescribeInnerIpWhitelistGroupsRequest
       * @return DescribeInnerIpWhitelistGroupsResponse
       */
      Models::DescribeInnerIpWhitelistGroupsResponse describeInnerIpWhitelistGroups(const Models::DescribeInnerIpWhitelistGroupsRequest &request);

      /**
       * @summary Queries instance configurations.
       *
       * @param request DescribeInstanceConfigsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceConfigsResponse
       */
      Models::DescribeInstanceConfigsResponse describeInstanceConfigsWithOptions(const Models::DescribeInstanceConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance configurations.
       *
       * @param request DescribeInstanceConfigsRequest
       * @return DescribeInstanceConfigsResponse
       */
      Models::DescribeInstanceConfigsResponse describeInstanceConfigs(const Models::DescribeInstanceConfigsRequest &request);

      /**
       * @summary Retrieve instance health diagnosis results.
       *
       * @param request DescribeInstanceDiagnosisResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDiagnosisResultResponse
       */
      Models::DescribeInstanceDiagnosisResultResponse describeInstanceDiagnosisResultWithOptions(const Models::DescribeInstanceDiagnosisResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve instance health diagnosis results.
       *
       * @param request DescribeInstanceDiagnosisResultRequest
       * @return DescribeInstanceDiagnosisResultResponse
       */
      Models::DescribeInstanceDiagnosisResultResponse describeInstanceDiagnosisResult(const Models::DescribeInstanceDiagnosisResultRequest &request);

      /**
       * @summary Obtains the meta token for a StarRocks instance.
       *
       * @param request DescribeInstanceMetaTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMetaTokenResponse
       */
      Models::DescribeInstanceMetaTokenResponse describeInstanceMetaTokenWithOptions(const Models::DescribeInstanceMetaTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the meta token for a StarRocks instance.
       *
       * @param request DescribeInstanceMetaTokenRequest
       * @return DescribeInstanceMetaTokenResponse
       */
      Models::DescribeInstanceMetaTokenResponse describeInstanceMetaToken(const Models::DescribeInstanceMetaTokenRequest &request);

      /**
       * @summary This operation queries Serverless StarRocks instances. You can filter the instances by criteria such as instance name and tags.
       *
       * @param tmpReq DescribeInstancesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries Serverless StarRocks instances. You can filter the instances by criteria such as instance name and tags.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Retrieves node group information.
       *
       * @param request DescribeNodeGroupsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNodeGroupsResponse
       */
      Models::DescribeNodeGroupsResponse describeNodeGroupsWithOptions(const Models::DescribeNodeGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves node group information.
       *
       * @param request DescribeNodeGroupsRequest
       * @return DescribeNodeGroupsResponse
       */
      Models::DescribeNodeGroupsResponse describeNodeGroups(const Models::DescribeNodeGroupsRequest &request);

      /**
       * @summary You can view the list of available regions.
       *
       * @description This operation is asynchronous. After you call this operation, the instance enters a restarting state but does not restart immediately. The restart is complete when the instance status changes to running.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can view the list of available regions.
       *
       * @description This operation is asynchronous. After you call this operation, the instance enters a restarting state but does not restart immediately. The restart is complete when the instance status changes to running.
       *
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions();

      /**
       * @summary Get resource constraint configurations.
       *
       * @param request DescribeResourceConstraintsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceConstraintsResponse
       */
      Models::DescribeResourceConstraintsResponse describeResourceConstraintsWithOptions(const Models::DescribeResourceConstraintsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get resource constraint configurations.
       *
       * @param request DescribeResourceConstraintsRequest
       * @return DescribeResourceConstraintsResponse
       */
      Models::DescribeResourceConstraintsResponse describeResourceConstraints(const Models::DescribeResourceConstraintsRequest &request);

      /**
       * @summary Obtain the system time zone of a StarRocks instance
       *
       * @param request DescribeSystemTimezoneRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemTimezoneResponse
       */
      Models::DescribeSystemTimezoneResponse describeSystemTimezoneWithOptions(const Models::DescribeSystemTimezoneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the system time zone of a StarRocks instance
       *
       * @param request DescribeSystemTimezoneRequest
       * @return DescribeSystemTimezoneResponse
       */
      Models::DescribeSystemTimezoneResponse describeSystemTimezone(const Models::DescribeSystemTimezoneRequest &request);

      /**
       * @summary Retrieves the details of time-triggered scaling rules.
       *
       * @param request DescribeTimeTriggerScalingRulesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTimeTriggerScalingRulesResponse
       */
      Models::DescribeTimeTriggerScalingRulesResponse describeTimeTriggerScalingRulesWithOptions(const Models::DescribeTimeTriggerScalingRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of time-triggered scaling rules.
       *
       * @param request DescribeTimeTriggerScalingRulesRequest
       * @return DescribeTimeTriggerScalingRulesResponse
       */
      Models::DescribeTimeTriggerScalingRulesResponse describeTimeTriggerScalingRules(const Models::DescribeTimeTriggerScalingRulesRequest &request);

      /**
       * @summary Disables SSL for a StarRocks connection.
       *
       * @param request DisableSSLConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSSLConnectionResponse
       */
      Models::DisableSSLConnectionResponse disableSSLConnectionWithOptions(const Models::DisableSSLConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables SSL for a StarRocks connection.
       *
       * @param request DisableSSLConnectionRequest
       * @return DisableSSLConnectionResponse
       */
      Models::DisableSSLConnectionResponse disableSSLConnection(const Models::DisableSSLConnectionRequest &request);

      /**
       * @summary Enables the internal Server Load Balancer (SLB) for the default gateway of an EMR Serverless StarRocks instance.
       *
       * @description The instance must be in the Running state when you call this operation.
       *
       * @param request EnableInternalSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInternalSlbResponse
       */
      Models::EnableInternalSlbResponse enableInternalSlbWithOptions(const Models::EnableInternalSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the internal Server Load Balancer (SLB) for the default gateway of an EMR Serverless StarRocks instance.
       *
       * @description The instance must be in the Running state when you call this operation.
       *
       * @param request EnableInternalSlbRequest
       * @return EnableInternalSlbResponse
       */
      Models::EnableInternalSlbResponse enableInternalSlb(const Models::EnableInternalSlbRequest &request);

      /**
       * @summary Enables Multi-AZ deployment.
       *
       * @param request EnableMultiAzRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableMultiAzResponse
       */
      Models::EnableMultiAzResponse enableMultiAzWithOptions(const Models::EnableMultiAzRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables Multi-AZ deployment.
       *
       * @param request EnableMultiAzRequest
       * @return EnableMultiAzResponse
       */
      Models::EnableMultiAzResponse enableMultiAz(const Models::EnableMultiAzRequest &request);

      /**
       * @summary Enables SSL for a StarRocks connection.
       *
       * @description You can call this operation only when the instance is in the Running state.
       *
       * @param request EnableSSLConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSSLConnectionResponse
       */
      Models::EnableSSLConnectionResponse enableSSLConnectionWithOptions(const Models::EnableSSLConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables SSL for a StarRocks connection.
       *
       * @description You can call this operation only when the instance is in the Running state.
       *
       * @param request EnableSSLConnectionRequest
       * @return EnableSSLConnectionResponse
       */
      Models::EnableSSLConnectionResponse enableSSLConnection(const Models::EnableSSLConnectionRequest &request);

      /**
       * @summary Retrieves the feature gates for a StarRocks cluster instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       *
       * @param request GetInstanceFeatureGateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceFeatureGateResponse
       */
      Models::GetInstanceFeatureGateResponse getInstanceFeatureGateWithOptions(const Models::GetInstanceFeatureGateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the feature gates for a StarRocks cluster instance.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       *
       * @param request GetInstanceFeatureGateRequest
       * @return GetInstanceFeatureGateResponse
       */
      Models::GetInstanceFeatureGateResponse getInstanceFeatureGate(const Models::GetInstanceFeatureGateRequest &request);

      /**
       * @summary Retrieve the feature gate for a StarRocks compute group instance.
       *
       * @param request GetNodeGroupFeatureGateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeGroupFeatureGateResponse
       */
      Models::GetNodeGroupFeatureGateResponse getNodeGroupFeatureGateWithOptions(const Models::GetNodeGroupFeatureGateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the feature gate for a StarRocks compute group instance.
       *
       * @param request GetNodeGroupFeatureGateRequest
       * @return GetNodeGroupFeatureGateResponse
       */
      Models::GetNodeGroupFeatureGateResponse getNodeGroupFeatureGate(const Models::GetNodeGroupFeatureGateRequest &request);

      /**
       * @summary Enable read/write splitting. The Leader FE node handles write requests, and other nodes handle read requests.
       *
       * @description The instance must be in the running state when you call this operation.
       *
       * @param request IsolateLeaderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return IsolateLeaderResponse
       */
      Models::IsolateLeaderResponse isolateLeaderWithOptions(const Models::IsolateLeaderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable read/write splitting. The Leader FE node handles write requests, and other nodes handle read requests.
       *
       * @description The instance must be in the running state when you call this operation.
       *
       * @param request IsolateLeaderRequest
       * @return IsolateLeaderResponse
       */
      Models::IsolateLeaderResponse isolateLeader(const Models::IsolateLeaderRequest &request);

      /**
       * @summary Lists gateways.
       *
       * @description Lists the gateways of a cluster.
       *
       * @param request ListGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGatewayWithOptions(const Models::ListGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists gateways.
       *
       * @description Lists the gateways of a cluster.
       *
       * @param request ListGatewayRequest
       * @return ListGatewayResponse
       */
      Models::ListGatewayResponse listGateway(const Models::ListGatewayRequest &request);

      /**
       * @summary Retrieves the details of an operation.
       *
       * @param request ListOperationActivityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationActivityResponse
       */
      Models::ListOperationActivityResponse listOperationActivityWithOptions(const Models::ListOperationActivityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an operation.
       *
       * @param request ListOperationActivityRequest
       * @return ListOperationActivityResponse
       */
      Models::ListOperationActivityResponse listOperationActivity(const Models::ListOperationActivityRequest &request);

      /**
       * @summary Retrieves the operation history of a cluster.
       *
       * @param request ListOperationHistoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOperationHistoryResponse
       */
      Models::ListOperationHistoryResponse listOperationHistoryWithOptions(const Models::ListOperationHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the operation history of a cluster.
       *
       * @param request ListOperationHistoryRequest
       * @return ListOperationHistoryResponse
       */
      Models::ListOperationHistoryResponse listOperationHistory(const Models::ListOperationHistoryRequest &request);

      /**
       * @summary Retrieves the ssl certificate details for a cluster.
       *
       * @description Retrieves the ssl certificate details for a cluster.
       *
       * @param request ListSSLDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSSLDetailsResponse
       */
      Models::ListSSLDetailsResponse listSSLDetailsWithOptions(const Models::ListSSLDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the ssl certificate details for a cluster.
       *
       * @description Retrieves the ssl certificate details for a cluster.
       *
       * @param request ListSSLDetailsRequest
       * @return ListSSLDetailsResponse
       */
      Models::ListSSLDetailsResponse listSSLDetails(const Models::ListSSLDetailsRequest &request);

      /**
       * @summary Change the billing method for an instance
       *
       * @description Before you call this operation, review the billing methods for Serverless StarRocks and the <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
       * When you call this operation, note the following:
       * - Only standard instances support changing the number of compute group Compute Units (CUs). Entry-level instances do not support this change.
       * - Only instances of the standard compute group specification type support increasing the number of disks.
       * - The instance must be in the Running state.
       * After you change the CU count, billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new CU count.
       * - Subscription: During the current billing cycle, you pay the difference between the old and new configurations. This amount is calculated based on the number of days remaining in the subscription period, starting from 00:00 of the following day.
       *
       * @param request ModifyChargeTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyChargeTypeResponse
       */
      Models::ModifyChargeTypeResponse modifyChargeTypeWithOptions(const Models::ModifyChargeTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the billing method for an instance
       *
       * @description Before you call this operation, review the billing methods for Serverless StarRocks and the <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
       * When you call this operation, note the following:
       * - Only standard instances support changing the number of compute group Compute Units (CUs). Entry-level instances do not support this change.
       * - Only instances of the standard compute group specification type support increasing the number of disks.
       * - The instance must be in the Running state.
       * After you change the CU count, billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new CU count.
       * - Subscription: During the current billing cycle, you pay the difference between the old and new configurations. This amount is calculated based on the number of days remaining in the subscription period, starting from 00:00 of the following day.
       *
       * @param request ModifyChargeTypeRequest
       * @return ModifyChargeTypeResponse
       */
      Models::ModifyChargeTypeResponse modifyChargeType(const Models::ModifyChargeTypeRequest &request);

      /**
       * @summary You can use this API to change the number of Compute Units (CUs) in a compute group of a Serverless StarRocks instance.
       *
       * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When you call this API, note the following:
       * - This operation is supported only for Standard Edition instances. It is not supported for Starter Edition instances.
       * - You can increase the number of disks only for instances with a standard compute group specification.
       * - The instance must be in the Running state.
       * After you change the number of CUs, the billing for the instance is updated as follows:
       * - Pay-as-you-go: You are billed based on the new number of CUs.
       * - Subscription: A supplementary fee is charged. This fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining period starts at 00:00 on the following day and ends when the subscription expires.
       *
       * @param request ModifyCuRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCuResponse
       */
      Models::ModifyCuResponse modifyCuWithOptions(const Models::ModifyCuRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can use this API to change the number of Compute Units (CUs) in a compute group of a Serverless StarRocks instance.
       *
       * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When you call this API, note the following:
       * - This operation is supported only for Standard Edition instances. It is not supported for Starter Edition instances.
       * - You can increase the number of disks only for instances with a standard compute group specification.
       * - The instance must be in the Running state.
       * After you change the number of CUs, the billing for the instance is updated as follows:
       * - Pay-as-you-go: You are billed based on the new number of CUs.
       * - Subscription: A supplementary fee is charged. This fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining period starts at 00:00 on the following day and ends when the subscription expires.
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
       * @summary Increases the number of disks for the nodes in a compute group of a Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * Note the following:
       * - The number of disks can be increased only for standard instances. This operation is not supported for entry-level instances.
       * - The number of disks can be increased only for instances whose compute group is the Standard Edition (standard).
       * - The instance must be in the Running state.
       * After you increase the number of disks, billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new disk type.
       * - Subscription: A supplemental fee is calculated. This fee is based on the price difference between the old and new configurations and the remaining days in the billing cycle. The remaining period starts from 00:00 on the following day and ends when the subscription expires.
       *
       * @param request ModifyDiskNumberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskNumberResponse
       */
      Models::ModifyDiskNumberResponse modifyDiskNumberWithOptions(const Models::ModifyDiskNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Increases the number of disks for the nodes in a compute group of a Serverless StarRocks instance.
       *
       * @description Before you call this operation, make sure you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * Note the following:
       * - The number of disks can be increased only for standard instances. This operation is not supported for entry-level instances.
       * - The number of disks can be increased only for instances whose compute group is the Standard Edition (standard).
       * - The instance must be in the Running state.
       * After you increase the number of disks, billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new disk type.
       * - Subscription: A supplemental fee is calculated. This fee is based on the price difference between the old and new configurations and the remaining days in the billing cycle. The remaining period starts from 00:00 on the following day and ends when the subscription expires.
       *
       * @param request ModifyDiskNumberRequest
       * @return ModifyDiskNumberResponse
       */
      Models::ModifyDiskNumberResponse modifyDiskNumber(const Models::ModifyDiskNumberRequest &request);

      /**
       * @summary This operation modifies the disk performance level of the nodes in a compute group of a Serverless StarRocks instance.
       *
       * @description Before you call this operation, understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product?spm=openapi-amp.newDocPublishment.0.0.1837281f3hbi2d#/ecs/detail/vm)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
       * Note the following when you call this operation:
       * - You can upgrade or downgrade disks only for standard instances. This operation is not supported for Starter Edition instances.
       * - Disk upgrades and downgrades are supported only for instances that have a Standard Edition (standard) compute group.
       * - The instance must be in the Running state.
       * - You cannot downgrade the disk performance level (PL) to PL0.
       * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, increase the disk capacity and try again. For more information, see <props="china">[ESSDs](https://help.aliyun.com/zh/ecs/user-guide/essds)<props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
       * After you change the disk configuration, the billing is adjusted as follows:
       * - Pay-as-you-go: You are charged based on the new disk type.
       * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remainder of the billing cycle. The remaining period starts at 00:00 on the next day and ends when the subscription expires.
       *
       * @param request ModifyDiskPerformanceLevelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskPerformanceLevelResponse
       */
      Models::ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevelWithOptions(const Models::ModifyDiskPerformanceLevelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation modifies the disk performance level of the nodes in a compute group of a Serverless StarRocks instance.
       *
       * @description Before you call this operation, understand the billing methods and <props="china">[pricing](https://www.aliyun.com/price/product?spm=openapi-amp.newDocPublishment.0.0.1837281f3hbi2d#/ecs/detail/vm)<props="intl">[pricing](https://www.alibabacloud.com/zh/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
       * Note the following when you call this operation:
       * - You can upgrade or downgrade disks only for standard instances. This operation is not supported for Starter Edition instances.
       * - Disk upgrades and downgrades are supported only for instances that have a Standard Edition (standard) compute group.
       * - The instance must be in the Running state.
       * - You cannot downgrade the disk performance level (PL) to PL0.
       * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, increase the disk capacity and try again. For more information, see <props="china">[ESSDs](https://help.aliyun.com/zh/ecs/user-guide/essds)<props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
       * After you change the disk configuration, the billing is adjusted as follows:
       * - Pay-as-you-go: You are charged based on the new disk type.
       * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remainder of the billing cycle. The remaining period starts at 00:00 on the next day and ends when the subscription expires.
       *
       * @param request ModifyDiskPerformanceLevelRequest
       * @return ModifyDiskPerformanceLevelResponse
       */
      Models::ModifyDiskPerformanceLevelResponse modifyDiskPerformanceLevel(const Models::ModifyDiskPerformanceLevelRequest &request);

      /**
       * @summary Scales out the disk of a compute group node for a Serverless StarRocks instance.
       *
       * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * Note the following:
       * - Only standard instances support disk scale-out. Entry-level instances do not.
       * - Only instances that have a compute group of the standard specification type support disk scale-out.
       * - The instance must be in the Running state.
       * After you scale out the disk, your billing changes as follows:
       * - Pay-as-you-go: You are charged based on the new disk size.
       * - Subscription: You must pay an upgrade fee. The fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining subscription period is calculated starting from 00:00 on the next day.
       *
       * @param request ModifyDiskSizeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskSizeResponse
       */
      Models::ModifyDiskSizeResponse modifyDiskSizeWithOptions(const Models::ModifyDiskSizeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out the disk of a compute group node for a Serverless StarRocks instance.
       *
       * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * Note the following:
       * - Only standard instances support disk scale-out. Entry-level instances do not.
       * - Only instances that have a compute group of the standard specification type support disk scale-out.
       * - The instance must be in the Running state.
       * After you scale out the disk, your billing changes as follows:
       * - Pay-as-you-go: You are charged based on the new disk size.
       * - Subscription: You must pay an upgrade fee. The fee is calculated based on the price difference between the old and new configurations and the remaining subscription period. The remaining subscription period is calculated starting from 00:00 on the next day.
       *
       * @param request ModifyDiskSizeRequest
       * @return ModifyDiskSizeResponse
       */
      Models::ModifyDiskSizeResponse modifyDiskSize(const Models::ModifyDiskSizeRequest &request);

      /**
       * @summary Change the disk type for nodes in a compute group
       *
       * @description Before you call this operation, review the Serverless StarRocks billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
       * - Only standard instances support disk scaling. Starter instances do not support disk scaling.
       * - Only instances with a compute group specification type of Standard Edition support disk scaling.
       * - The instance must be in the Running state.
       * After disk scaling, billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new disk size.
       * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days, from 00:00 the next day to the end of the validity period.
       *
       * @param request ModifyDiskTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDiskTypeResponse
       */
      Models::ModifyDiskTypeResponse modifyDiskTypeWithOptions(const Models::ModifyDiskTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Change the disk type for nodes in a compute group
       *
       * @description Before you call this operation, review the Serverless StarRocks billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P).
       * - Only standard instances support disk scaling. Starter instances do not support disk scaling.
       * - Only instances with a compute group specification type of Standard Edition support disk scaling.
       * - The instance must be in the Running state.
       * After disk scaling, billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new disk size.
       * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days, from 00:00 the next day to the end of the validity period.
       *
       * @param request ModifyDiskTypeRequest
       * @return ModifyDiskTypeResponse
       */
      Models::ModifyDiskTypeResponse modifyDiskType(const Models::ModifyDiskTypeRequest &request);

      /**
       * @summary Modifies the /etc/hosts file.
       *
       * @param request ModifyHostAliasRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostAliasResponse
       */
      Models::ModifyHostAliasResponse modifyHostAliasWithOptions(const Models::ModifyHostAliasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the /etc/hosts file.
       *
       * @param request ModifyHostAliasRequest
       * @return ModifyHostAliasResponse
       */
      Models::ModifyHostAliasResponse modifyHostAlias(const Models::ModifyHostAliasRequest &request);

      /**
       * @summary This API modifies the configuration of a Serverless StarRocks instance.
       *
       * @param request ModifyInstanceConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API modifies the configuration of a Serverless StarRocks instance.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

      /**
       * @summary This operation pre-checks modifications to the instance configuration of a Serverless StarRocks instance.
       *
       * @param request ModifyInstanceConfigPreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigPreCheckResponse
       */
      Models::ModifyInstanceConfigPreCheckResponse modifyInstanceConfigPreCheckWithOptions(const Models::ModifyInstanceConfigPreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation pre-checks modifications to the instance configuration of a Serverless StarRocks instance.
       *
       * @param request ModifyInstanceConfigPreCheckRequest
       * @return ModifyInstanceConfigPreCheckResponse
       */
      Models::ModifyInstanceConfigPreCheckResponse modifyInstanceConfigPreCheck(const Models::ModifyInstanceConfigPreCheckRequest &request);

      /**
       * @summary Modifies the maintenance window for a StarRocks instance.
       *
       * @param request ModifyMaintainableTimeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMaintainableTimeResponse
       */
      Models::ModifyMaintainableTimeResponse modifyMaintainableTimeWithOptions(const Models::ModifyMaintainableTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the maintenance window for a StarRocks instance.
       *
       * @param request ModifyMaintainableTimeRequest
       * @return ModifyMaintainableTimeResponse
       */
      Models::ModifyMaintainableTimeResponse modifyMaintainableTime(const Models::ModifyMaintainableTimeRequest &request);

      /**
       * @summary Modifies the number of nodes in a compute group of a Serverless StarRocks instance.
       *
       * @description Before using this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When calling this operation, note the following:
       * - Only Standard Standard instances support modifying the number of compute group nodes. Basic Standard instances do not support this operation.
       * - The instance must be in the Running state.
       * - The number of FE nodes cannot be an even number, and FE nodes do not support scale-in.
       * After modifying the node count, billing changes are as follows:
       * - Pay-as-you-go: Billed based on the new node count.
       * - Subscription: Within the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days (from 00:00 of the next day to the end of the validity period).
       *
       * @param request ModifyNodeNumberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNodeNumberResponse
       */
      Models::ModifyNodeNumberResponse modifyNodeNumberWithOptions(const Models::ModifyNodeNumberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the number of nodes in a compute group of a Serverless StarRocks instance.
       *
       * @description Before using this operation, make sure that you fully understand the billing method and <props="china">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When calling this operation, note the following:
       * - Only Standard Standard instances support modifying the number of compute group nodes. Basic Standard instances do not support this operation.
       * - The instance must be in the Running state.
       * - The number of FE nodes cannot be an even number, and FE nodes do not support scale-in.
       * After modifying the node count, billing changes are as follows:
       * - Pay-as-you-go: Billed based on the new node count.
       * - Subscription: Within the billing cycle, the additional fee is calculated based on the price difference between the old and new configurations and the remaining days (from 00:00 of the next day to the end of the validity period).
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
       * @summary Modifies an Auto Scaling rule.
       *
       * @param request ModifyScalingRuleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRuleWithOptions(const Models::ModifyScalingRuleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Auto Scaling rule.
       *
       * @param request ModifyScalingRuleRequest
       * @return ModifyScalingRuleResponse
       */
      Models::ModifyScalingRuleResponse modifyScalingRule(const Models::ModifyScalingRuleRequest &request);

      /**
       * @summary Modify the node specifications type of the compute group.
       *
       * @param request ModifySpecTypeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySpecTypeResponse
       */
      Models::ModifySpecTypeResponse modifySpecTypeWithOptions(const Models::ModifySpecTypeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the node specifications type of the compute group.
       *
       * @param request ModifySpecTypeRequest
       * @return ModifySpecTypeResponse
       */
      Models::ModifySpecTypeResponse modifySpecType(const Models::ModifySpecTypeRequest &request);

      /**
       * @summary Runs a precheck to modify the node specification type for a compute group.
       *
       * @param request ModifySpecTypePreCheckRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySpecTypePreCheckResponse
       */
      Models::ModifySpecTypePreCheckResponse modifySpecTypePreCheckWithOptions(const Models::ModifySpecTypePreCheckRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a precheck to modify the node specification type for a compute group.
       *
       * @param request ModifySpecTypePreCheckRequest
       * @return ModifySpecTypePreCheckResponse
       */
      Models::ModifySpecTypePreCheckResponse modifySpecTypePreCheck(const Models::ModifySpecTypePreCheckRequest &request);

      /**
       * @summary Modifies the password for a StarRocks user.
       *
       * @param request ModifyUserPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserPasswordResponse
       */
      Models::ModifyUserPasswordResponse modifyUserPasswordWithOptions(const Models::ModifyUserPasswordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the password for a StarRocks user.
       *
       * @param request ModifyUserPasswordRequest
       * @return ModifyUserPasswordResponse
       */
      Models::ModifyUserPasswordResponse modifyUserPassword(const Models::ModifyUserPasswordRequest &request);

      /**
       * @summary Queries the price for enabling multi-zone deployment.
       *
       * @param request QueryEnableMultiAzPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEnableMultiAzPriceResponse
       */
      Models::QueryEnableMultiAzPriceResponse queryEnableMultiAzPriceWithOptions(const Models::QueryEnableMultiAzPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for enabling multi-zone deployment.
       *
       * @param request QueryEnableMultiAzPriceRequest
       * @return QueryEnableMultiAzPriceResponse
       */
      Models::QueryEnableMultiAzPriceResponse queryEnableMultiAzPrice(const Models::QueryEnableMultiAzPriceRequest &request);

      /**
       * @summary Queries the latest minor version for the current major version.
       *
       * @param request QueryMinorVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMinorVersionResponse
       */
      Models::QueryMinorVersionResponse queryMinorVersionWithOptions(const Models::QueryMinorVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest minor version for the current major version.
       *
       * @param request QueryMinorVersionRequest
       * @return QueryMinorVersionResponse
       */
      Models::QueryMinorVersionResponse queryMinorVersion(const Models::QueryMinorVersionRequest &request);

      /**
       * @summary Queries the price for changing the billing method of a StarRocks instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * Note the following when you call this operation:
       * - You can change the number of compute units (CUs) in a compute group only for Standard Edition instances. This feature is not supported for Starter Edition instances.
       * - You can increase the disk size only for instances that have a standard compute group specification.
       * - The instance must be in the Running state.
       * After you change the number of CUs, the billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new number of CUs.
       * - Subscription: The system calculates the supplementary fee based on the price difference between the old and new configurations and the remaining days in the billing cycle. The calculation starts from 00:00 on the following day.
       *
       * @param request QueryModifyChargeTypePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyChargeTypePriceResponse
       */
      Models::QueryModifyChargeTypePriceResponse queryModifyChargeTypePriceWithOptions(const Models::QueryModifyChargeTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for changing the billing method of a StarRocks instance.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * Note the following when you call this operation:
       * - You can change the number of compute units (CUs) in a compute group only for Standard Edition instances. This feature is not supported for Starter Edition instances.
       * - You can increase the disk size only for instances that have a standard compute group specification.
       * - The instance must be in the Running state.
       * After you change the number of CUs, the billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new number of CUs.
       * - Subscription: The system calculates the supplementary fee based on the price difference between the old and new configurations and the remaining days in the billing cycle. The calculation starts from 00:00 on the following day.
       *
       * @param request QueryModifyChargeTypePriceRequest
       * @return QueryModifyChargeTypePriceResponse
       */
      Models::QueryModifyChargeTypePriceResponse queryModifyChargeTypePrice(const Models::QueryModifyChargeTypePriceRequest &request);

      /**
       * @summary Queries the price for modifying the CU of compute group nodes.
       *
       * @description Before you use this API, understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
       * When you call this API, note the following:
       * - Only standard instances allow you to modify the number of CUs for compute groups. Entry-level instances do not.
       * - You can increase the disk size only for instances with a Standard Edition (standard) compute group.
       * - The instance must be in the Running state.
       * After you modify the number of CUs, billing changes as follows:
       * - Pay-as-you-go: Billing is based on the new number of CUs.
       * - Subscription: The amount to pay is calculated based on the price difference between the old and new configurations for the remainder of the subscription period. This period starts at 00:00 on the following day.
       *
       * @param request QueryModifyCuPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyCuPriceResponse
       */
      Models::QueryModifyCuPriceResponse queryModifyCuPriceWithOptions(const Models::QueryModifyCuPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for modifying the CU of compute group nodes.
       *
       * @description Before you use this API, understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
       * When you call this API, note the following:
       * - Only standard instances allow you to modify the number of CUs for compute groups. Entry-level instances do not.
       * - You can increase the disk size only for instances with a Standard Edition (standard) compute group.
       * - The instance must be in the Running state.
       * After you modify the number of CUs, billing changes as follows:
       * - Pay-as-you-go: Billing is based on the new number of CUs.
       * - Subscription: The amount to pay is calculated based on the price difference between the old and new configurations for the remainder of the subscription period. This period starts at 00:00 on the following day.
       *
       * @param request QueryModifyCuPriceRequest
       * @return QueryModifyCuPriceResponse
       */
      Models::QueryModifyCuPriceResponse queryModifyCuPrice(const Models::QueryModifyCuPriceRequest &request);

      /**
       * @summary Retrieve the price for changing the number of disks in a compute group node
       *
       * @description Before you call this operation, review the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
       * - You can increase the disk count only for Standard Edition instances. You cannot increase the disk count for Starter Edition instances.
       * - You can increase the disk count only for instances with a compute group specification type of Standard Edition (standard).
       * - The instance must be in the Running state.
       * After you increase the disk count, billing changes as follows:
       * - Pay-as-you-go: Billing is based on the new disk type.
       * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the new and original configurations and the remaining days—from 00:00 the next day to the end of the validity period.
       *
       * @param request QueryModifyDiskNumberPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskNumberPriceResponse
       */
      Models::QueryModifyDiskNumberPriceResponse queryModifyDiskNumberPriceWithOptions(const Models::QueryModifyDiskNumberPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the price for changing the number of disks in a compute group node
       *
       * @description Before you call this operation, review the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
       * - You can increase the disk count only for Standard Edition instances. You cannot increase the disk count for Starter Edition instances.
       * - You can increase the disk count only for instances with a compute group specification type of Standard Edition (standard).
       * - The instance must be in the Running state.
       * After you increase the disk count, billing changes as follows:
       * - Pay-as-you-go: Billing is based on the new disk type.
       * - Subscription: During the billing cycle, the additional fee is calculated based on the price difference between the new and original configurations and the remaining days—from 00:00 the next day to the end of the validity period.
       *
       * @param request QueryModifyDiskNumberPriceRequest
       * @return QueryModifyDiskNumberPriceResponse
       */
      Models::QueryModifyDiskNumberPriceResponse queryModifyDiskNumberPrice(const Models::QueryModifyDiskNumberPriceRequest &request);

      /**
       * @summary Queries the price of changing the disk performance level for a compute group node.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and <props="intl">[pricing](https://www.alibabacloud.com/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
       * Note the following when you call this operation:
       * - Only standard instances support disk upgrade or downgrade. Entry-level instances do not.
       * - Only instances with a standard compute group specification support disk upgrade or downgrade.
       * - The instance must be in the running state.
       * - You cannot downgrade the disk to performance level (PL) 0.
       * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, scale out the disk and try again. For more information, see <props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
       * After you upgrade or downgrade a disk, the billing changes as follows:
       * - Pay-as-you-go: You are charged based on the new disk type.
       * - Subscription: A supplementary fee is calculated based on the price difference between the new and old configurations and the remaining days in the subscription period, starting from 00:00 on the following day.
       *
       * @param request QueryModifyDiskPerformanceLevelPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskPerformanceLevelPriceResponse
       */
      Models::QueryModifyDiskPerformanceLevelPriceResponse queryModifyDiskPerformanceLevelPriceWithOptions(const Models::QueryModifyDiskPerformanceLevelPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price of changing the disk performance level for a compute group node.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and <props="intl">[pricing](https://www.alibabacloud.com/product/ecs?_p_lc=1#pricing) of Serverless StarRocks.
       * Note the following when you call this operation:
       * - Only standard instances support disk upgrade or downgrade. Entry-level instances do not.
       * - Only instances with a standard compute group specification support disk upgrade or downgrade.
       * - The instance must be in the running state.
       * - You cannot downgrade the disk to performance level (PL) 0.
       * - The performance level of an Enhanced SSD (ESSD) is limited by its capacity. If you cannot upgrade the performance level, scale out the disk and try again. For more information, see <props="intl">[ESSDs](https://www.alibabacloud.com/help/en/ecs/user-guide/essds).
       * After you upgrade or downgrade a disk, the billing changes as follows:
       * - Pay-as-you-go: You are charged based on the new disk type.
       * - Subscription: A supplementary fee is calculated based on the price difference between the new and old configurations and the remaining days in the subscription period, starting from 00:00 on the following day.
       *
       * @param request QueryModifyDiskPerformanceLevelPriceRequest
       * @return QueryModifyDiskPerformanceLevelPriceResponse
       */
      Models::QueryModifyDiskPerformanceLevelPriceResponse queryModifyDiskPerformanceLevelPrice(const Models::QueryModifyDiskPerformanceLevelPriceRequest &request);

      /**
       * @summary Queries the price for modifying the disk size of a single node in a compute group.
       *
       * @description Before you call this operation, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. When you call this operation, note the following:
       * - Disk scale-out is supported only for standard instances. It is not supported for entry-level instances.
       * - Disk scale-out is supported only for instances that use the standard compute group specification.
       * - The instance must be in the Running state.
       * After you scale out the disk, the billing changes are as follows:
       * - Pay-as-you-go: You are billed for the new disk size.
       * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the remaining days in your subscription. The remaining days are calculated from 00:00 on the next day until the subscription expires.
       *
       * @param request QueryModifyDiskSizePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskSizePriceResponse
       */
      Models::QueryModifyDiskSizePriceResponse queryModifyDiskSizePriceWithOptions(const Models::QueryModifyDiskSizePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for modifying the disk size of a single node in a compute group.
       *
       * @description Before you call this operation, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. When you call this operation, note the following:
       * - Disk scale-out is supported only for standard instances. It is not supported for entry-level instances.
       * - Disk scale-out is supported only for instances that use the standard compute group specification.
       * - The instance must be in the Running state.
       * After you scale out the disk, the billing changes are as follows:
       * - Pay-as-you-go: You are billed for the new disk size.
       * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the remaining days in your subscription. The remaining days are calculated from 00:00 on the next day until the subscription expires.
       *
       * @param request QueryModifyDiskSizePriceRequest
       * @return QueryModifyDiskSizePriceResponse
       */
      Models::QueryModifyDiskSizePriceResponse queryModifyDiskSizePrice(const Models::QueryModifyDiskSizePriceRequest &request);

      /**
       * @summary Queries the price for modifying the disk type of nodes in a compute group.
       *
       * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of the Serverless StarRocks product. Take note of the following:
       * - Only standard instances support disk scale-out. Entry-level instances do not.
       * - Only instances that have a compute group of the Standard Edition (standard) specification type support disk scale-out.
       * - Instances must be in the running (Running) state.
       * After a disk scale-out, the billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new disk size.
       * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remaining duration of the subscription. The remaining duration is calculated from 00:00 on the next day until the subscription expires.
       *
       * @param request QueryModifyDiskTypePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyDiskTypePriceResponse
       */
      Models::QueryModifyDiskTypePriceResponse queryModifyDiskTypePriceWithOptions(const Models::QueryModifyDiskTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for modifying the disk type of nodes in a compute group.
       *
       * @description Before you call this API, make sure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of the Serverless StarRocks product. Take note of the following:
       * - Only standard instances support disk scale-out. Entry-level instances do not.
       * - Only instances that have a compute group of the Standard Edition (standard) specification type support disk scale-out.
       * - Instances must be in the running (Running) state.
       * After a disk scale-out, the billing changes as follows:
       * - Pay-as-you-go: You are billed based on the new disk size.
       * - Subscription: A supplemental fee is calculated based on the price difference between the new and old configurations for the remaining duration of the subscription. The remaining duration is calculated from 00:00 on the next day until the subscription expires.
       *
       * @param request QueryModifyDiskTypePriceRequest
       * @return QueryModifyDiskTypePriceResponse
       */
      Models::QueryModifyDiskTypePriceResponse queryModifyDiskTypePrice(const Models::QueryModifyDiskTypePriceRequest &request);

      /**
       * @summary Queries the price for changing the number of nodes in a compute group.
       *
       * @description Before you call this API, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When you call this API, note the following:
       * - You can change the number of nodes in a compute group only for standard instances. This operation is not supported for entry-level instances.
       * - The instance must be in the Running state.
       * - The number of frontend (FE) nodes cannot be an even number. You cannot scale in FE nodes.
       * After you change the number of nodes, billing is affected as follows:
       * - Pay-as-you-go: You are charged based on the new number of nodes.
       * - Subscription: A supplemental fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period. The remaining period is calculated from 00:00 of the next day until the subscription expires.
       *
       * @param request QueryModifyNodeNumberPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifyNodeNumberPriceResponse
       */
      Models::QueryModifyNodeNumberPriceResponse queryModifyNodeNumberPriceWithOptions(const Models::QueryModifyNodeNumberPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price for changing the number of nodes in a compute group.
       *
       * @description Before you call this API, make sure you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When you call this API, note the following:
       * - You can change the number of nodes in a compute group only for standard instances. This operation is not supported for entry-level instances.
       * - The instance must be in the Running state.
       * - The number of frontend (FE) nodes cannot be an even number. You cannot scale in FE nodes.
       * After you change the number of nodes, billing is affected as follows:
       * - Pay-as-you-go: You are charged based on the new number of nodes.
       * - Subscription: A supplemental fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period. The remaining period is calculated from 00:00 of the next day until the subscription expires.
       *
       * @param request QueryModifyNodeNumberPriceRequest
       * @return QueryModifyNodeNumberPriceResponse
       */
      Models::QueryModifyNodeNumberPriceResponse queryModifyNodeNumberPrice(const Models::QueryModifyNodeNumberPriceRequest &request);

      /**
       * @summary Queries the price to change the specification type of a compute group.
       *
       * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. Note the following:
       * - Only standard instances support disk scale-out. Basic instances do not.
       * - Only instances with the Standard (standard) compute group specification type support disk scale-out.
       * - The instance must be in the Running state.
       * After a disk scale-out, the billing changes are as follows:
       * - Pay-as-you-go: You are billed based on the new disk size.
       * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period (from 00:00 on the next day to the end of the validity period).
       *
       * @param request QueryModifySpecTypePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryModifySpecTypePriceResponse
       */
      Models::QueryModifySpecTypePriceResponse queryModifySpecTypePriceWithOptions(const Models::QueryModifySpecTypePriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the price to change the specification type of a compute group.
       *
       * @description Before you call this operation, ensure that you understand the billing methods and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks. Note the following:
       * - Only standard instances support disk scale-out. Basic instances do not.
       * - Only instances with the Standard (standard) compute group specification type support disk scale-out.
       * - The instance must be in the Running state.
       * After a disk scale-out, the billing changes are as follows:
       * - Pay-as-you-go: You are billed based on the new disk size.
       * - Subscription: A supplementary fee is calculated based on the price difference between the old and new configurations and the number of remaining days in the subscription period (from 00:00 on the next day to the end of the validity period).
       *
       * @param request QueryModifySpecTypePriceRequest
       * @return QueryModifySpecTypePriceResponse
       */
      Models::QueryModifySpecTypePriceResponse queryModifySpecTypePrice(const Models::QueryModifySpecTypePriceRequest &request);

      /**
       * @summary An API for querying the price of new StarRocks purchases.
       *
       * @description Before you use this API, review the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
       *
       * @param request QueryPriceV1Request
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPriceV1Response
       */
      Models::QueryPriceV1Response queryPriceV1WithOptions(const Models::QueryPriceV1Request &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An API for querying the price of new StarRocks purchases.
       *
       * @description Before you use this API, review the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G)<props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) for Serverless StarRocks.
       *
       * @param request QueryPriceV1Request
       * @return QueryPriceV1Response
       */
      Models::QueryPriceV1Response queryPriceV1(const Models::QueryPriceV1Request &request);

      /**
       * @summary Pricing information for unsubscribing from StarRocks subscription instances
       *
       * @description >Danger: 
       * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
       *
       * @param request QueryRefundPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRefundPriceResponse
       */
      Models::QueryRefundPriceResponse queryRefundPriceWithOptions(const Models::QueryRefundPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pricing information for unsubscribing from StarRocks subscription instances
       *
       * @description >Danger: 
       * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
       *
       * @param request QueryRefundPriceRequest
       * @return QueryRefundPriceResponse
       */
      Models::QueryRefundPriceResponse queryRefundPrice(const Models::QueryRefundPriceRequest &request);

      /**
       * @summary Query the renewal price for a StarRocks billing instance.
       *
       * @param request QueryRenewPriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRenewPriceResponse
       */
      Models::QueryRenewPriceResponse queryRenewPriceWithOptions(const Models::QueryRenewPriceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the renewal price for a StarRocks billing instance.
       *
       * @param request QueryRenewPriceRequest
       * @return QueryRenewPriceResponse
       */
      Models::QueryRenewPriceResponse queryRenewPrice(const Models::QueryRenewPriceRequest &request);

      /**
       * @summary Queries the unpaid orders of a compute group or cluster.
       *
       * @description Queries the unpaid orders of a compute group or cluster.
       *
       * @param request QueryUnpaidOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUnpaidOrderResponse
       */
      Models::QueryUnpaidOrderResponse queryUnpaidOrderWithOptions(const Models::QueryUnpaidOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the unpaid orders of a compute group or cluster.
       *
       * @description Queries the unpaid orders of a compute group or cluster.
       *
       * @param request QueryUnpaidOrderRequest
       * @return QueryUnpaidOrderResponse
       */
      Models::QueryUnpaidOrderResponse queryUnpaidOrder(const Models::QueryUnpaidOrderRequest &request);

      /**
       * @summary Queries the available upgrade versions for an EMR Serverless StarRocks instance. StarRocks instances have two version layers: a major version and a minor version. You can view both versions in the Version Information section on the Instance Details page in the EMR console. Use the Minor parameter to specify whether to query upgradable minor versions or major versions.
       *
       * @param request QueryUpgradableVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUpgradableVersionsResponse
       */
      Models::QueryUpgradableVersionsResponse queryUpgradableVersionsWithOptions(const Models::QueryUpgradableVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available upgrade versions for an EMR Serverless StarRocks instance. StarRocks instances have two version layers: a major version and a minor version. You can view both versions in the Version Information section on the Instance Details page in the EMR console. Use the Minor parameter to specify whether to query upgradable minor versions or major versions.
       *
       * @param request QueryUpgradableVersionsRequest
       * @return QueryUpgradableVersionsResponse
       */
      Models::QueryUpgradableVersionsResponse queryUpgradableVersions(const Models::QueryUpgradableVersionsRequest &request);

      /**
       * @summary Reboot ECS instances in a cluster.
       *
       * @description This operation is asynchronous. The instance does not reboot immediately. After a successful call, the instance enters the Rebooting state. The reboot is complete when the instance status changes to Running.
       *
       * @param request RebootECSRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootECSResponse
       */
      Models::RebootECSResponse rebootECSWithOptions(const Models::RebootECSRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reboot ECS instances in a cluster.
       *
       * @description This operation is asynchronous. The instance does not reboot immediately. After a successful call, the instance enters the Rebooting state. The reboot is complete when the instance status changes to Running.
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
       * @summary Renews an instance.
       *
       * @description Before you call this API, make sure that you fully understand the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When you call this API, note that only subscription instances can be renewed.
       *
       * @param request RenewInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews an instance.
       *
       * @description Before you call this API, make sure that you fully understand the billing model and <props="china">[billable items](https://help.aliyun.com/zh/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c4g.11186623.help-menu-28066.d_0_1_1.4db82b05p3Gg0G) <props="intl">[billable items](https://www.alibabacloud.com/help/en/emr/emr-serverless-starrocks/product-overview/billable-items?spm=a2c63.p38356.help-menu-28066.d_0_1_0.3aaf4b0b69jN1P) of Serverless StarRocks.
       * When you call this API, note that only subscription instances can be renewed.
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
       * @summary Restarts a specified node group.
       *
       * @description This operation is asynchronous. The instance does not restart immediately. After you call the operation successfully, the instance enters the restarting state. When the instance status changes to running, the restart is complete.
       *
       * @param request RestartNodeGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartNodeGroupResponse
       */
      Models::RestartNodeGroupResponse restartNodeGroupWithOptions(const Models::RestartNodeGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts a specified node group.
       *
       * @description This operation is asynchronous. The instance does not restart immediately. After you call the operation successfully, the instance enters the restarting state. When the instance status changes to running, the restart is complete.
       *
       * @param request RestartNodeGroupRequest
       * @return RestartNodeGroupResponse
       */
      Models::RestartNodeGroupResponse restartNodeGroup(const Models::RestartNodeGroupRequest &request);

      /**
       * @summary Restart nodes in a cluster.
       *
       * @description This API is asynchronous. The instance restart is not immediate. After a successful call, the instance enters the restarting state. The restart is complete when the returned status is running.
       *
       * @param request RestartNodesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartNodesResponse
       */
      Models::RestartNodesResponse restartNodesWithOptions(const Models::RestartNodesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restart nodes in a cluster.
       *
       * @description This API is asynchronous. The instance restart is not immediate. After a successful call, the instance enters the restarting state. The restart is complete when the returned status is running.
       *
       * @param request RestartNodesRequest
       * @return RestartNodesResponse
       */
      Models::RestartNodesResponse restartNodes(const Models::RestartNodesRequest &request);

      /**
       * @summary Restore an instance from a backup
       *
       * @description This is an asynchronous API. The instance does not restart immediately. After you call this API successfully, the instance enters the restarting state. When the instance status changes to running, the restore is complete.
       *
       * @param request RestoreInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstanceWithOptions(const Models::RestoreInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restore an instance from a backup
       *
       * @description This is an asynchronous API. The instance does not restart immediately. After you call this API successfully, the instance enters the restarting state. When the instance status changes to running, the restore is complete.
       *
       * @param request RestoreInstanceRequest
       * @return RestoreInstanceResponse
       */
      Models::RestoreInstanceResponse restoreInstance(const Models::RestoreInstanceRequest &request);

      /**
       * @summary Resumes an instance automatically stopped by openlake.
       *
       * @description >Danger: 
       * When you release an instance, its physical resources are reclaimed. All data on the instance is lost and cannot be recovered.
       *
       * @param request ResumeInstanceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstanceWithOptions(const Models::ResumeInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an instance automatically stopped by openlake.
       *
       * @description >Danger: 
       * When you release an instance, its physical resources are reclaimed. All data on the instance is lost and cannot be recovered.
       *
       * @param request ResumeInstanceRequest
       * @return ResumeInstanceResponse
       */
      Models::ResumeInstanceResponse resumeInstance(const Models::ResumeInstanceRequest &request);

      /**
       * @summary Rolls back a configuration modification that is currently in progress.
       *
       * @param request RollbackConfigModificationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackConfigModificationResponse
       */
      Models::RollbackConfigModificationResponse rollbackConfigModificationWithOptions(const Models::RollbackConfigModificationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a configuration modification that is currently in progress.
       *
       * @param request RollbackConfigModificationRequest
       * @return RollbackConfigModificationResponse
       */
      Models::RollbackConfigModificationResponse rollbackConfigModification(const Models::RollbackConfigModificationRequest &request);

      /**
       * @summary Switches the active and standby zones.
       *
       * @description Switches the active and standby zones.
       *
       * @param request SwitchActiveStandbyZonesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchActiveStandbyZonesResponse
       */
      Models::SwitchActiveStandbyZonesResponse switchActiveStandbyZonesWithOptions(const Models::SwitchActiveStandbyZonesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the active and standby zones.
       *
       * @description Switches the active and standby zones.
       *
       * @param request SwitchActiveStandbyZonesRequest
       * @return SwitchActiveStandbyZonesResponse
       */
      Models::SwitchActiveStandbyZonesResponse switchActiveStandbyZones(const Models::SwitchActiveStandbyZonesRequest &request);

      /**
       * @summary Attaches tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Enables or disables automatic minor version upgrades for a StarRocks instance.
       *
       * @param request ToggleAutoMinorVersionUpgradeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ToggleAutoMinorVersionUpgradeResponse
       */
      Models::ToggleAutoMinorVersionUpgradeResponse toggleAutoMinorVersionUpgradeWithOptions(const Models::ToggleAutoMinorVersionUpgradeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables automatic minor version upgrades for a StarRocks instance.
       *
       * @param request ToggleAutoMinorVersionUpgradeRequest
       * @return ToggleAutoMinorVersionUpgradeResponse
       */
      Models::ToggleAutoMinorVersionUpgradeResponse toggleAutoMinorVersionUpgrade(const Models::ToggleAutoMinorVersionUpgradeRequest &request);

      /**
       * @summary Switches an Internet-facing SLB instance on or off.
       *
       * @description >Danger: 
       * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
       *
       * @param request TogglePublicSlbRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TogglePublicSlbResponse
       */
      Models::TogglePublicSlbResponse togglePublicSlbWithOptions(const Models::TogglePublicSlbRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches an Internet-facing SLB instance on or off.
       *
       * @description >Danger: 
       * After you release an instance, Alibaba Cloud reclaims all physical resources used by the instance. All associated data is permanently lost and cannot be recovered.
       *
       * @param request TogglePublicSlbRequest
       * @return TogglePublicSlbResponse
       */
      Models::TogglePublicSlbResponse togglePublicSlb(const Models::TogglePublicSlbRequest &request);

      /**
       * @summary Detaches tags from multiple resources.
       *
       * @param tmpReq UnTagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches tags from multiple resources.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Updates the description of a backup job.
       *
       * @param request UpdateBackupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupResponse
       */
      Models::UpdateBackupResponse updateBackupWithOptions(const Models::UpdateBackupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a backup job.
       *
       * @param request UpdateBackupRequest
       * @return UpdateBackupResponse
       */
      Models::UpdateBackupResponse updateBackup(const Models::UpdateBackupRequest &request);

      /**
       * @summary Updates a backup policy.
       *
       * @param request UpdateBackupPolicyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicyWithOptions(const Models::UpdateBackupPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a backup policy.
       *
       * @param request UpdateBackupPolicyRequest
       * @return UpdateBackupPolicyResponse
       */
      Models::UpdateBackupPolicyResponse updateBackupPolicy(const Models::UpdateBackupPolicyRequest &request);

      /**
       * @summary Updates the number of gateway nodes.
       *
       * @description Updates the number of gateway nodes.
       *
       * @param request UpdateGatewayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGatewayWithOptions(const Models::UpdateGatewayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the number of gateway nodes.
       *
       * @description Updates the number of gateway nodes.
       *
       * @param request UpdateGatewayRequest
       * @return UpdateGatewayResponse
       */
      Models::UpdateGatewayResponse updateGateway(const Models::UpdateGatewayRequest &request);

      /**
       * @summary Updates the CIDR blocks in a whitelist group.
       *
       * @param request UpdateInnerIpWhitelistGroupRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInnerIpWhitelistGroupResponse
       */
      Models::UpdateInnerIpWhitelistGroupResponse updateInnerIpWhitelistGroupWithOptions(const Models::UpdateInnerIpWhitelistGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the CIDR blocks in a whitelist group.
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
       * @summary Updates the description of a compute group.
       *
       * @param request UpdateNodeGroupDescriptionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNodeGroupDescriptionResponse
       */
      Models::UpdateNodeGroupDescriptionResponse updateNodeGroupDescriptionWithOptions(const Models::UpdateNodeGroupDescriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a compute group.
       *
       * @param request UpdateNodeGroupDescriptionRequest
       * @return UpdateNodeGroupDescriptionResponse
       */
      Models::UpdateNodeGroupDescriptionResponse updateNodeGroupDescription(const Models::UpdateNodeGroupDescriptionRequest &request);

      /**
       * @summary Enable or disable the Internet-facing SLB for the FE or BE component.
       *
       * @param request UpdatePublicNetworkStatusRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePublicNetworkStatusResponse
       */
      Models::UpdatePublicNetworkStatusResponse updatePublicNetworkStatusWithOptions(const Models::UpdatePublicNetworkStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable or disable the Internet-facing SLB for the FE or BE component.
       *
       * @param request UpdatePublicNetworkStatusRequest
       * @return UpdatePublicNetworkStatusResponse
       */
      Models::UpdatePublicNetworkStatusResponse updatePublicNetworkStatus(const Models::UpdatePublicNetworkStatusRequest &request);

      /**
       * @summary Upgrades the version of a Serverless StarRocks instance. Serverless StarRocks has two levels of version definition: the major version displayed in the "Version" field on the cluster details page, and the minor version displayed in the "Minor Version" field on the cluster details page. This operation can be used to upgrade either the minor version or the major version. You can call the QueryUpgradableVersions operation to query the versions to which a cluster can be upgraded.
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
       * @summary Upgrades the version of a Serverless StarRocks instance. Serverless StarRocks has two levels of version definition: the major version displayed in the "Version" field on the cluster details page, and the minor version displayed in the "Minor Version" field on the cluster details page. This operation can be used to upgrade either the minor version or the major version. You can call the QueryUpgradableVersions operation to query the versions to which a cluster can be upgraded.
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
