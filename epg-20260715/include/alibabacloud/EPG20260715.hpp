// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EPG20260715_HPP_
#define ALIBABACLOUD_EPG20260715_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EPG20260715Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EPG20260715.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 向出口代理地址池添加IP地址
       *
       * @param request AddIpAddressesToEgressProxyIpPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddIpAddressesToEgressProxyIpPoolResponse
       */
      Models::AddIpAddressesToEgressProxyIpPoolResponse addIpAddressesToEgressProxyIpPoolWithOptions(const Models::AddIpAddressesToEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 向出口代理地址池添加IP地址
       *
       * @param request AddIpAddressesToEgressProxyIpPoolRequest
       * @return AddIpAddressesToEgressProxyIpPoolResponse
       */
      Models::AddIpAddressesToEgressProxyIpPoolResponse addIpAddressesToEgressProxyIpPool(const Models::AddIpAddressesToEgressProxyIpPoolRequest &request);

      /**
       * @summary Attaches egress proxy rule groups to an egress proxy configuration.
       *
       * @description When you call this operation to attach egress proxy rule groups to an egress proxy configuration, take note of the following items:
       * - This operation attaches one or more egress proxy rule groups to a specified egress proxy configuration and specifies the priority of each egress proxy rule group in the egress proxy configuration.
       * - The **AttachEgressProxyRuleGroupsToConfiguration** operation is asynchronous. After you send the request, the system returns a response, but the egress proxy rule groups are not yet attached. The attachment task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
       *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
       *     - If the egress proxy configuration is in the **Available** state, the attachment is successful.
       *
       * @param request AttachEgressProxyRuleGroupsToConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachEgressProxyRuleGroupsToConfigurationResponse
       */
      Models::AttachEgressProxyRuleGroupsToConfigurationResponse attachEgressProxyRuleGroupsToConfigurationWithOptions(const Models::AttachEgressProxyRuleGroupsToConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches egress proxy rule groups to an egress proxy configuration.
       *
       * @description When you call this operation to attach egress proxy rule groups to an egress proxy configuration, take note of the following items:
       * - This operation attaches one or more egress proxy rule groups to a specified egress proxy configuration and specifies the priority of each egress proxy rule group in the egress proxy configuration.
       * - The **AttachEgressProxyRuleGroupsToConfiguration** operation is asynchronous. After you send the request, the system returns a response, but the egress proxy rule groups are not yet attached. The attachment task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
       *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
       *     - If the egress proxy configuration is in the **Available** state, the attachment is successful.
       *
       * @param request AttachEgressProxyRuleGroupsToConfigurationRequest
       * @return AttachEgressProxyRuleGroupsToConfigurationResponse
       */
      Models::AttachEgressProxyRuleGroupsToConfigurationResponse attachEgressProxyRuleGroupsToConfiguration(const Models::AttachEgressProxyRuleGroupsToConfigurationRequest &request);

      /**
       * @summary Creates an egress proxy configuration.
       *
       * @description When you call this operation to create an egress proxy configuration, take note of the following items:
       * - The **CreateEgressProxyConfiguration** operation is asynchronous. After you call this operation, the system returns the ID of the egress proxy configuration, but the configuration is not yet created. The creation task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
       *     - If the egress proxy configuration is in the **Provisioning** state, the configuration is being created.
       *     - If the egress proxy configuration is in the **Available** state, the configuration is created.
       *
       * @param request CreateEgressProxyConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEgressProxyConfigurationResponse
       */
      Models::CreateEgressProxyConfigurationResponse createEgressProxyConfigurationWithOptions(const Models::CreateEgressProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an egress proxy configuration.
       *
       * @description When you call this operation to create an egress proxy configuration, take note of the following items:
       * - The **CreateEgressProxyConfiguration** operation is asynchronous. After you call this operation, the system returns the ID of the egress proxy configuration, but the configuration is not yet created. The creation task is still running in the background. You can call GetEgressProxyConfigurationAttribute to query the status of the egress proxy configuration:
       *     - If the egress proxy configuration is in the **Provisioning** state, the configuration is being created.
       *     - If the egress proxy configuration is in the **Available** state, the configuration is created.
       *
       * @param request CreateEgressProxyConfigurationRequest
       * @return CreateEgressProxyConfigurationResponse
       */
      Models::CreateEgressProxyConfigurationResponse createEgressProxyConfiguration(const Models::CreateEgressProxyConfigurationRequest &request);

      /**
       * @summary Creates an egress proxy gateway instance.
       *
       * @description The **CreateEgressProxyGateway** operation is asynchronous. After you call this operation, the system returns an instance ID, but the egress proxy gateway instance is not yet created and the creation task is still running in the background. You can call GetEgressProxyGatewayAttribute to query the creation status of the egress proxy gateway instance:
       * - When the egress proxy gateway instance is in the **Provisioning** state, the instance is being created.
       * - When the egress proxy gateway instance is in the **Active** state, the instance is created.
       *
       * @param request CreateEgressProxyGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEgressProxyGatewayResponse
       */
      Models::CreateEgressProxyGatewayResponse createEgressProxyGatewayWithOptions(const Models::CreateEgressProxyGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an egress proxy gateway instance.
       *
       * @description The **CreateEgressProxyGateway** operation is asynchronous. After you call this operation, the system returns an instance ID, but the egress proxy gateway instance is not yet created and the creation task is still running in the background. You can call GetEgressProxyGatewayAttribute to query the creation status of the egress proxy gateway instance:
       * - When the egress proxy gateway instance is in the **Provisioning** state, the instance is being created.
       * - When the egress proxy gateway instance is in the **Active** state, the instance is created.
       *
       * @param request CreateEgressProxyGatewayRequest
       * @return CreateEgressProxyGatewayResponse
       */
      Models::CreateEgressProxyGatewayResponse createEgressProxyGateway(const Models::CreateEgressProxyGatewayRequest &request);

      /**
       * @summary 创建出口代理地址池
       *
       * @param request CreateEgressProxyIpPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEgressProxyIpPoolResponse
       */
      Models::CreateEgressProxyIpPoolResponse createEgressProxyIpPoolWithOptions(const Models::CreateEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建出口代理地址池
       *
       * @param request CreateEgressProxyIpPoolRequest
       * @return CreateEgressProxyIpPoolResponse
       */
      Models::CreateEgressProxyIpPoolResponse createEgressProxyIpPool(const Models::CreateEgressProxyIpPoolRequest &request);

      /**
       * @summary Creates an egress rule group.
       *
       * @description When you call this operation to create an egress rule group, take note of the following items:
       * - You can create egress rules in batches by phase (PreDns, PreRequest, and PostResponse) when you create the rule group.
       * - Within the same phase of a rule group, rule priorities (Priority) must be unique. Valid values: 1 to 1000. A smaller value indicates a higher priority.
       * - This operation is asynchronous. After you call this operation, the system returns the ID of the egress rule group, but the rule group is not yet created. The creation task is still running in the background. You can call GetEgressProxyRuleGroupAttribute to query the status of the egress rule group:
       *     - If the egress rule group is in the **Provisioning** state, the rule group is being created.
       *     - If the egress rule group is in the **Available** state, the rule group is created.
       *
       * @param request CreateEgressProxyRuleGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEgressProxyRuleGroupResponse
       */
      Models::CreateEgressProxyRuleGroupResponse createEgressProxyRuleGroupWithOptions(const Models::CreateEgressProxyRuleGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an egress rule group.
       *
       * @description When you call this operation to create an egress rule group, take note of the following items:
       * - You can create egress rules in batches by phase (PreDns, PreRequest, and PostResponse) when you create the rule group.
       * - Within the same phase of a rule group, rule priorities (Priority) must be unique. Valid values: 1 to 1000. A smaller value indicates a higher priority.
       * - This operation is asynchronous. After you call this operation, the system returns the ID of the egress rule group, but the rule group is not yet created. The creation task is still running in the background. You can call GetEgressProxyRuleGroupAttribute to query the status of the egress rule group:
       *     - If the egress rule group is in the **Provisioning** state, the rule group is being created.
       *     - If the egress rule group is in the **Available** state, the rule group is created.
       *
       * @param request CreateEgressProxyRuleGroupRequest
       * @return CreateEgressProxyRuleGroupResponse
       */
      Models::CreateEgressProxyRuleGroupResponse createEgressProxyRuleGroup(const Models::CreateEgressProxyRuleGroupRequest &request);

      /**
       * @summary Creates multiple egress proxy rules.
       *
       * @description When you call this operation to create multiple egress proxy rules in a specified egress rule group, note the following items:
       * - Egress rules are created in groups based on the effective phase (PreDns, PreRequest, or PostResponse).
       * - Within the same effective phase of an egress rule group, the priority of rules must be unique.
       * - Valid values for the priority: 1 to 1000. A smaller value indicates a higher priority.
       * - This operation is asynchronous. After you call this operation, the system returns the IDs of the created egress rules, but the rules are not yet created. The creation task is still running in the background. You can call the GetEgressProxyRuleGroupAttribute operation to query the status of the egress rule group:
       *     - If the egress rule group is in the **Provisioning** state, the rules are being created.
       *     - If the egress rule group is in the **Available** state, the rules are created.
       *
       * @param request CreateEgressProxyRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEgressProxyRulesResponse
       */
      Models::CreateEgressProxyRulesResponse createEgressProxyRulesWithOptions(const Models::CreateEgressProxyRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple egress proxy rules.
       *
       * @description When you call this operation to create multiple egress proxy rules in a specified egress rule group, note the following items:
       * - Egress rules are created in groups based on the effective phase (PreDns, PreRequest, or PostResponse).
       * - Within the same effective phase of an egress rule group, the priority of rules must be unique.
       * - Valid values for the priority: 1 to 1000. A smaller value indicates a higher priority.
       * - This operation is asynchronous. After you call this operation, the system returns the IDs of the created egress rules, but the rules are not yet created. The creation task is still running in the background. You can call the GetEgressProxyRuleGroupAttribute operation to query the status of the egress rule group:
       *     - If the egress rule group is in the **Provisioning** state, the rules are being created.
       *     - If the egress rule group is in the **Available** state, the rules are created.
       *
       * @param request CreateEgressProxyRulesRequest
       * @return CreateEgressProxyRulesResponse
       */
      Models::CreateEgressProxyRulesResponse createEgressProxyRules(const Models::CreateEgressProxyRulesRequest &request);

      /**
       * @summary Deletes an egress proxy configuration.
       *
       * @param request DeleteEgressProxyConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEgressProxyConfigurationResponse
       */
      Models::DeleteEgressProxyConfigurationResponse deleteEgressProxyConfigurationWithOptions(const Models::DeleteEgressProxyConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an egress proxy configuration.
       *
       * @param request DeleteEgressProxyConfigurationRequest
       * @return DeleteEgressProxyConfigurationResponse
       */
      Models::DeleteEgressProxyConfigurationResponse deleteEgressProxyConfiguration(const Models::DeleteEgressProxyConfigurationRequest &request);

      /**
       * @summary Deletes an egress proxy gateway instance.
       *
       * @description ## Request description
       * - `EgressProxyGatewayId` is a required parameter that specifies the egress proxy gateway instance ID to delete.
       * - `ClientToken` is an optional parameter used to ensure the idempotence of the request.
       *
       * @param request DeleteEgressProxyGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEgressProxyGatewayResponse
       */
      Models::DeleteEgressProxyGatewayResponse deleteEgressProxyGatewayWithOptions(const Models::DeleteEgressProxyGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an egress proxy gateway instance.
       *
       * @description ## Request description
       * - `EgressProxyGatewayId` is a required parameter that specifies the egress proxy gateway instance ID to delete.
       * - `ClientToken` is an optional parameter used to ensure the idempotence of the request.
       *
       * @param request DeleteEgressProxyGatewayRequest
       * @return DeleteEgressProxyGatewayResponse
       */
      Models::DeleteEgressProxyGatewayResponse deleteEgressProxyGateway(const Models::DeleteEgressProxyGatewayRequest &request);

      /**
       * @summary Deletes an egress proxy IP address pool.
       *
       * @description ## Request description
       * - **EgressProxyIpPoolId** is a required parameter that specifies the ID of the egress proxy IP address pool to delete.
       * - **ClientToken** is an optional parameter used to ensure the idempotence of the request.
       * - **DryRun** is an optional parameter. Default value: `false`. If you set this parameter to `true`, the system only prechecks the request and does not perform the delete operation.
       *
       * @param request DeleteEgressProxyIpPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEgressProxyIpPoolResponse
       */
      Models::DeleteEgressProxyIpPoolResponse deleteEgressProxyIpPoolWithOptions(const Models::DeleteEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an egress proxy IP address pool.
       *
       * @description ## Request description
       * - **EgressProxyIpPoolId** is a required parameter that specifies the ID of the egress proxy IP address pool to delete.
       * - **ClientToken** is an optional parameter used to ensure the idempotence of the request.
       * - **DryRun** is an optional parameter. Default value: `false`. If you set this parameter to `true`, the system only prechecks the request and does not perform the delete operation.
       *
       * @param request DeleteEgressProxyIpPoolRequest
       * @return DeleteEgressProxyIpPoolResponse
       */
      Models::DeleteEgressProxyIpPoolResponse deleteEgressProxyIpPool(const Models::DeleteEgressProxyIpPoolRequest &request);

      /**
       * @summary Deletes an egress proxy rule group.
       *
       * @param request DeleteEgressProxyRuleGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEgressProxyRuleGroupResponse
       */
      Models::DeleteEgressProxyRuleGroupResponse deleteEgressProxyRuleGroupWithOptions(const Models::DeleteEgressProxyRuleGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an egress proxy rule group.
       *
       * @param request DeleteEgressProxyRuleGroupRequest
       * @return DeleteEgressProxyRuleGroupResponse
       */
      Models::DeleteEgressProxyRuleGroupResponse deleteEgressProxyRuleGroup(const Models::DeleteEgressProxyRuleGroupRequest &request);

      /**
       * @summary Deletes multiple egress proxy rules.
       *
       * @param request DeleteEgressProxyRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEgressProxyRulesResponse
       */
      Models::DeleteEgressProxyRulesResponse deleteEgressProxyRulesWithOptions(const Models::DeleteEgressProxyRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple egress proxy rules.
       *
       * @param request DeleteEgressProxyRulesRequest
       * @return DeleteEgressProxyRulesResponse
       */
      Models::DeleteEgressProxyRulesResponse deleteEgressProxyRules(const Models::DeleteEgressProxyRulesRequest &request);

      /**
       * @summary Queries the available regions.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available regions.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries zones.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries zones.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Disassociates egress proxy rule groups from an egress proxy configuration.
       *
       * @description When you call this operation to disassociate egress proxy rule groups from an egress proxy configuration, take note of the following items:
       * - This operation disassociates one or more egress proxy rule groups from a specified egress proxy configuration. After the disassociation, these egress proxy rule groups no longer take effect in the egress proxy configuration.
       * - The **DetachEgressProxyRuleGroupsFromConfiguration** operation is asynchronous. After you send a request, the system returns a response, but the egress proxy rule groups are not yet disassociated. The disassociation task is still running in the background. You can call the GetEgressProxyConfigurationAttribute operation to query the status of the egress proxy configuration:
       *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
       *     - If the egress proxy configuration is in the **Available** state, the disassociation is successful.
       *
       * @param request DetachEgressProxyRuleGroupsFromConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachEgressProxyRuleGroupsFromConfigurationResponse
       */
      Models::DetachEgressProxyRuleGroupsFromConfigurationResponse detachEgressProxyRuleGroupsFromConfigurationWithOptions(const Models::DetachEgressProxyRuleGroupsFromConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates egress proxy rule groups from an egress proxy configuration.
       *
       * @description When you call this operation to disassociate egress proxy rule groups from an egress proxy configuration, take note of the following items:
       * - This operation disassociates one or more egress proxy rule groups from a specified egress proxy configuration. After the disassociation, these egress proxy rule groups no longer take effect in the egress proxy configuration.
       * - The **DetachEgressProxyRuleGroupsFromConfiguration** operation is asynchronous. After you send a request, the system returns a response, but the egress proxy rule groups are not yet disassociated. The disassociation task is still running in the background. You can call the GetEgressProxyConfigurationAttribute operation to query the status of the egress proxy configuration:
       *     - If the egress proxy configuration is in the **Configuring** state, the configuration is being updated.
       *     - If the egress proxy configuration is in the **Available** state, the disassociation is successful.
       *
       * @param request DetachEgressProxyRuleGroupsFromConfigurationRequest
       * @return DetachEgressProxyRuleGroupsFromConfigurationResponse
       */
      Models::DetachEgressProxyRuleGroupsFromConfigurationResponse detachEgressProxyRuleGroupsFromConfiguration(const Models::DetachEgressProxyRuleGroupsFromConfigurationRequest &request);

      /**
       * @summary Queries the details of an egress proxy configuration.
       *
       * @description **GetEgressProxyConfigurationAttribute** is a synchronous API operation that returns the details of a specified egress proxy configuration in real time after the call. You can determine the current status of the egress proxy configuration based on the returned **Status**. For example, **Provisioning** indicates that the configuration is being created, and **Available** indicates that the configuration is created and available.
       *
       * @param request GetEgressProxyConfigurationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEgressProxyConfigurationAttributeResponse
       */
      Models::GetEgressProxyConfigurationAttributeResponse getEgressProxyConfigurationAttributeWithOptions(const Models::GetEgressProxyConfigurationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an egress proxy configuration.
       *
       * @description **GetEgressProxyConfigurationAttribute** is a synchronous API operation that returns the details of a specified egress proxy configuration in real time after the call. You can determine the current status of the egress proxy configuration based on the returned **Status**. For example, **Provisioning** indicates that the configuration is being created, and **Available** indicates that the configuration is created and available.
       *
       * @param request GetEgressProxyConfigurationAttributeRequest
       * @return GetEgressProxyConfigurationAttributeResponse
       */
      Models::GetEgressProxyConfigurationAttributeResponse getEgressProxyConfigurationAttribute(const Models::GetEgressProxyConfigurationAttributeRequest &request);

      /**
       * @summary Queries the details of an egress proxy gateway instance.
       *
       * @description **GetEgressProxyGatewayAttribute** is a synchronous operation that returns the current attribute information of the egress proxy gateway in real time after it is called.
       * You can determine the current status of the egress proxy gateway based on the returned **Status**. For example, **Provisioning** indicates that the instance is being created, **Active** indicates that the instance is running, **Configuring** indicates that the instance is being reconfigured, and **Inactive** indicates that the instance is stopped.
       *
       * @param request GetEgressProxyGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEgressProxyGatewayAttributeResponse
       */
      Models::GetEgressProxyGatewayAttributeResponse getEgressProxyGatewayAttributeWithOptions(const Models::GetEgressProxyGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an egress proxy gateway instance.
       *
       * @description **GetEgressProxyGatewayAttribute** is a synchronous operation that returns the current attribute information of the egress proxy gateway in real time after it is called.
       * You can determine the current status of the egress proxy gateway based on the returned **Status**. For example, **Provisioning** indicates that the instance is being created, **Active** indicates that the instance is running, **Configuring** indicates that the instance is being reconfigured, and **Inactive** indicates that the instance is stopped.
       *
       * @param request GetEgressProxyGatewayAttributeRequest
       * @return GetEgressProxyGatewayAttributeResponse
       */
      Models::GetEgressProxyGatewayAttributeResponse getEgressProxyGatewayAttribute(const Models::GetEgressProxyGatewayAttributeRequest &request);

      /**
       * @summary 查询出口代理地址池详细信息
       *
       * @description ## 请求说明
       * 通过提供`EgressProxyIpPoolId`，可以获取到与该ID关联的出口代理IP池的所有相关信息，包括但不限于名称、描述、网络类型等。请确保提供的`EgressProxyIpPoolId`是有效的且属于您的账户。
       *
       * @param request GetEgressProxyIpPoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEgressProxyIpPoolAttributeResponse
       */
      Models::GetEgressProxyIpPoolAttributeResponse getEgressProxyIpPoolAttributeWithOptions(const Models::GetEgressProxyIpPoolAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出口代理地址池详细信息
       *
       * @description ## 请求说明
       * 通过提供`EgressProxyIpPoolId`，可以获取到与该ID关联的出口代理IP池的所有相关信息，包括但不限于名称、描述、网络类型等。请确保提供的`EgressProxyIpPoolId`是有效的且属于您的账户。
       *
       * @param request GetEgressProxyIpPoolAttributeRequest
       * @return GetEgressProxyIpPoolAttributeResponse
       */
      Models::GetEgressProxyIpPoolAttributeResponse getEgressProxyIpPoolAttribute(const Models::GetEgressProxyIpPoolAttributeRequest &request);

      /**
       * @summary 查询出口代理规则组详细信息
       *
       * @param request GetEgressProxyRuleGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEgressProxyRuleGroupAttributeResponse
       */
      Models::GetEgressProxyRuleGroupAttributeResponse getEgressProxyRuleGroupAttributeWithOptions(const Models::GetEgressProxyRuleGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出口代理规则组详细信息
       *
       * @param request GetEgressProxyRuleGroupAttributeRequest
       * @return GetEgressProxyRuleGroupAttributeResponse
       */
      Models::GetEgressProxyRuleGroupAttributeResponse getEgressProxyRuleGroupAttribute(const Models::GetEgressProxyRuleGroupAttributeRequest &request);

      /**
       * @summary Queries the list of egress proxy configurations.
       *
       * @description **ListEgressProxyConfigurations** is a synchronous API operation that returns a list of egress proxy configurations that meet the specified conditions in real time after the call. The returned results are paginated by using **MaxResults** and **NextToken**:
       * - If **NextToken** is empty, all data has been returned.
       * - If **NextToken** has a value, you can use it as the **NextToken** for the next call to continue the query.
       *
       * @param request ListEgressProxyConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEgressProxyConfigurationsResponse
       */
      Models::ListEgressProxyConfigurationsResponse listEgressProxyConfigurationsWithOptions(const Models::ListEgressProxyConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of egress proxy configurations.
       *
       * @description **ListEgressProxyConfigurations** is a synchronous API operation that returns a list of egress proxy configurations that meet the specified conditions in real time after the call. The returned results are paginated by using **MaxResults** and **NextToken**:
       * - If **NextToken** is empty, all data has been returned.
       * - If **NextToken** has a value, you can use it as the **NextToken** for the next call to continue the query.
       *
       * @param request ListEgressProxyConfigurationsRequest
       * @return ListEgressProxyConfigurationsResponse
       */
      Models::ListEgressProxyConfigurationsResponse listEgressProxyConfigurations(const Models::ListEgressProxyConfigurationsRequest &request);

      /**
       * @summary 查询出口代理网关列表
       *
       * @description ## 请求说明
       * - `MaxResults` 参数用于指定每页返回的最大结果数量，默认值为20，最大可设置为1000。
       * - `NextToken` 参数用于分页查询时获取下一页的数据。
       * - `Skip` 参数用于跳过指定数量的结果，默认值为0。
       * - `VpcIds` 参数允许通过指定一个或多个VPC ID来过滤查询结果，一次最多支持20个ID。
       * - `EgressProxyGatewayIds` 和 `EgressProxyGatewayNames` 分别允许通过实例ID和实例名称来过滤查询结果，每次请求中每个参数最多支持20个值。
       * - `Status` 参数可用于根据实例状态（如Active, Inactive等）进行过滤。
       * - `ResourceGroupId` 参数允许按资源组ID过滤查询结果。
       * - `Tags` 参数支持基于标签键值对的过滤条件，可以用来更精确地定位特定资源。
       * 请注意，所有数组类型的参数在实际使用时需要按照API的具体要求格式化输入数据。
       *
       * @param request ListEgressProxyGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEgressProxyGatewaysResponse
       */
      Models::ListEgressProxyGatewaysResponse listEgressProxyGatewaysWithOptions(const Models::ListEgressProxyGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出口代理网关列表
       *
       * @description ## 请求说明
       * - `MaxResults` 参数用于指定每页返回的最大结果数量，默认值为20，最大可设置为1000。
       * - `NextToken` 参数用于分页查询时获取下一页的数据。
       * - `Skip` 参数用于跳过指定数量的结果，默认值为0。
       * - `VpcIds` 参数允许通过指定一个或多个VPC ID来过滤查询结果，一次最多支持20个ID。
       * - `EgressProxyGatewayIds` 和 `EgressProxyGatewayNames` 分别允许通过实例ID和实例名称来过滤查询结果，每次请求中每个参数最多支持20个值。
       * - `Status` 参数可用于根据实例状态（如Active, Inactive等）进行过滤。
       * - `ResourceGroupId` 参数允许按资源组ID过滤查询结果。
       * - `Tags` 参数支持基于标签键值对的过滤条件，可以用来更精确地定位特定资源。
       * 请注意，所有数组类型的参数在实际使用时需要按照API的具体要求格式化输入数据。
       *
       * @param request ListEgressProxyGatewaysRequest
       * @return ListEgressProxyGatewaysResponse
       */
      Models::ListEgressProxyGatewaysResponse listEgressProxyGateways(const Models::ListEgressProxyGatewaysRequest &request);

      /**
       * @summary 查询出口代理地址池列表
       *
       * @description ## 请求说明
       * - `MaxResults` 参数用于控制每页返回的结果数量，默认为20，最大值为1000。
       * - `NextToken` 用于分页查询时获取下一页的数据。
       * - `Skip` 参数用于跳过指定数量的记录，默认值为0。
       * - 可以通过 `EgressProxyGatewayIds`, `EgressProxyIpPoolIds`, `EgressProxyIpPoolNames` 等参数进行过滤查询。
       * - `Status` 参数支持按状态过滤结果。
       * - `Tags` 参数可用于更细粒度的资源筛选。
       * - 返回结果中包含 `NextToken` 以便于继续请求后续页面的数据。
       * - `CreateTime` 字段表示的是UTC时间格式。
       *
       * @param request ListEgressProxyIpPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEgressProxyIpPoolsResponse
       */
      Models::ListEgressProxyIpPoolsResponse listEgressProxyIpPoolsWithOptions(const Models::ListEgressProxyIpPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出口代理地址池列表
       *
       * @description ## 请求说明
       * - `MaxResults` 参数用于控制每页返回的结果数量，默认为20，最大值为1000。
       * - `NextToken` 用于分页查询时获取下一页的数据。
       * - `Skip` 参数用于跳过指定数量的记录，默认值为0。
       * - 可以通过 `EgressProxyGatewayIds`, `EgressProxyIpPoolIds`, `EgressProxyIpPoolNames` 等参数进行过滤查询。
       * - `Status` 参数支持按状态过滤结果。
       * - `Tags` 参数可用于更细粒度的资源筛选。
       * - 返回结果中包含 `NextToken` 以便于继续请求后续页面的数据。
       * - `CreateTime` 字段表示的是UTC时间格式。
       *
       * @param request ListEgressProxyIpPoolsRequest
       * @return ListEgressProxyIpPoolsResponse
       */
      Models::ListEgressProxyIpPoolsResponse listEgressProxyIpPools(const Models::ListEgressProxyIpPoolsRequest &request);

      /**
       * @summary 查询出口代理规则组列表
       *
       * @param request ListEgressProxyRuleGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEgressProxyRuleGroupsResponse
       */
      Models::ListEgressProxyRuleGroupsResponse listEgressProxyRuleGroupsWithOptions(const Models::ListEgressProxyRuleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询出口代理规则组列表
       *
       * @param request ListEgressProxyRuleGroupsRequest
       * @return ListEgressProxyRuleGroupsResponse
       */
      Models::ListEgressProxyRuleGroupsResponse listEgressProxyRuleGroups(const Models::ListEgressProxyRuleGroupsRequest &request);

      /**
       * @summary Queries the tags bound to the specified resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to the specified resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies the resource group to which a resource belongs.
       *
       * @description Shifts a resource to another resource group. After the shift, the resource belongs to the new resource group. For valid values of the ResourceType parameter, see the metric description.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a resource belongs.
       *
       * @description Shifts a resource to another resource group. After the shift, the resource belongs to the new resource group. For valid values of the ResourceType parameter, see the metric description.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary 从出口代理地址池移除IP地址
       *
       * @param request RemoveIpAddressesFromEgressProxyIpPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveIpAddressesFromEgressProxyIpPoolResponse
       */
      Models::RemoveIpAddressesFromEgressProxyIpPoolResponse removeIpAddressesFromEgressProxyIpPoolWithOptions(const Models::RemoveIpAddressesFromEgressProxyIpPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从出口代理地址池移除IP地址
       *
       * @param request RemoveIpAddressesFromEgressProxyIpPoolRequest
       * @return RemoveIpAddressesFromEgressProxyIpPoolResponse
       */
      Models::RemoveIpAddressesFromEgressProxyIpPoolResponse removeIpAddressesFromEgressProxyIpPool(const Models::RemoveIpAddressesFromEgressProxyIpPoolRequest &request);

      /**
       * @summary Creates and attaches tags to a specified list of resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to a specified list of resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from the specified resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from the specified resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 更新出口代理配置属性
       *
       * @param request UpdateEgressProxyConfigurationAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEgressProxyConfigurationAttributeResponse
       */
      Models::UpdateEgressProxyConfigurationAttributeResponse updateEgressProxyConfigurationAttributeWithOptions(const Models::UpdateEgressProxyConfigurationAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新出口代理配置属性
       *
       * @param request UpdateEgressProxyConfigurationAttributeRequest
       * @return UpdateEgressProxyConfigurationAttributeResponse
       */
      Models::UpdateEgressProxyConfigurationAttributeResponse updateEgressProxyConfigurationAttribute(const Models::UpdateEgressProxyConfigurationAttributeRequest &request);

      /**
       * @summary 修改出口代理网关属性
       *
       * @param request UpdateEgressProxyGatewayAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEgressProxyGatewayAttributeResponse
       */
      Models::UpdateEgressProxyGatewayAttributeResponse updateEgressProxyGatewayAttributeWithOptions(const Models::UpdateEgressProxyGatewayAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改出口代理网关属性
       *
       * @param request UpdateEgressProxyGatewayAttributeRequest
       * @return UpdateEgressProxyGatewayAttributeResponse
       */
      Models::UpdateEgressProxyGatewayAttributeResponse updateEgressProxyGatewayAttribute(const Models::UpdateEgressProxyGatewayAttributeRequest &request);

      /**
       * @summary 更新出口代理地址池属性
       *
       * @description ## 请求说明
       * - `EgressProxyIpPoolId` 是必填参数，用来指定要更新的出口地址池ID。
       * - `DryRun` 参数可以设置为 `true` 来预检此次请求而不实际执行更改，默认值为 `false`。
       * - `Scheduler` 和 `HashFactor` 参数用于定义出口IP的选择逻辑及相关的哈希因子，可根据具体需求进行设置。
       * - 其他参数如 `EgressProxyIpPoolName`, `Description` 等均为可选项，提供给用户根据需要自定义出口地址池的名字和描述等信息。
       *
       * @param request UpdateEgressProxyIpPoolAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEgressProxyIpPoolAttributeResponse
       */
      Models::UpdateEgressProxyIpPoolAttributeResponse updateEgressProxyIpPoolAttributeWithOptions(const Models::UpdateEgressProxyIpPoolAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新出口代理地址池属性
       *
       * @description ## 请求说明
       * - `EgressProxyIpPoolId` 是必填参数，用来指定要更新的出口地址池ID。
       * - `DryRun` 参数可以设置为 `true` 来预检此次请求而不实际执行更改，默认值为 `false`。
       * - `Scheduler` 和 `HashFactor` 参数用于定义出口IP的选择逻辑及相关的哈希因子，可根据具体需求进行设置。
       * - 其他参数如 `EgressProxyIpPoolName`, `Description` 等均为可选项，提供给用户根据需要自定义出口地址池的名字和描述等信息。
       *
       * @param request UpdateEgressProxyIpPoolAttributeRequest
       * @return UpdateEgressProxyIpPoolAttributeResponse
       */
      Models::UpdateEgressProxyIpPoolAttributeResponse updateEgressProxyIpPoolAttribute(const Models::UpdateEgressProxyIpPoolAttributeRequest &request);

      /**
       * @summary 更新出口代理规则组属性
       *
       * @param request UpdateEgressProxyRuleGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEgressProxyRuleGroupAttributeResponse
       */
      Models::UpdateEgressProxyRuleGroupAttributeResponse updateEgressProxyRuleGroupAttributeWithOptions(const Models::UpdateEgressProxyRuleGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新出口代理规则组属性
       *
       * @param request UpdateEgressProxyRuleGroupAttributeRequest
       * @return UpdateEgressProxyRuleGroupAttributeResponse
       */
      Models::UpdateEgressProxyRuleGroupAttributeResponse updateEgressProxyRuleGroupAttribute(const Models::UpdateEgressProxyRuleGroupAttributeRequest &request);

      /**
       * @summary 批量更新出口代理规则属性
       *
       * @param request UpdateEgressProxyRulesAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEgressProxyRulesAttributeResponse
       */
      Models::UpdateEgressProxyRulesAttributeResponse updateEgressProxyRulesAttributeWithOptions(const Models::UpdateEgressProxyRulesAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新出口代理规则属性
       *
       * @param request UpdateEgressProxyRulesAttributeRequest
       * @return UpdateEgressProxyRulesAttributeResponse
       */
      Models::UpdateEgressProxyRulesAttributeResponse updateEgressProxyRulesAttribute(const Models::UpdateEgressProxyRulesAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
