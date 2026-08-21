// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PVTZ20180101_HPP_
#define ALIBABACLOUD_PVTZ20180101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Pvtz20180101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Pvtz20180101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a custom line.
       *
       * @param request AddCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomLineResponse
       */
      Models::AddCustomLineResponse addCustomLineWithOptions(const Models::AddCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom line.
       *
       * @param request AddCustomLineRequest
       * @return AddCustomLineResponse
       */
      Models::AddCustomLineResponse addCustomLine(const Models::AddCustomLineRequest &request);

      /**
       * @summary You can call this operation to add an endpoint.
       *
       * @param request AddResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddResolverEndpointResponse
       */
      Models::AddResolverEndpointResponse addResolverEndpointWithOptions(const Models::AddResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to add an endpoint.
       *
       * @param request AddResolverEndpointRequest
       * @return AddResolverEndpointResponse
       */
      Models::AddResolverEndpointResponse addResolverEndpoint(const Models::AddResolverEndpointRequest &request);

      /**
       * @summary Adds a forwarding rule.
       *
       * @description If the outbound VPC and the inbound VPC are the same, the IP address of the external DNS system in the forwarding rule for the outbound endpoint cannot be the same as the IP address of the inbound endpoint service. This is because if the IP addresses are the same, a request loopback occurs and DNS resolution fails.
       *
       * @param request AddResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddResolverRuleResponse
       */
      Models::AddResolverRuleResponse addResolverRuleWithOptions(const Models::AddResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a forwarding rule.
       *
       * @description If the outbound VPC and the inbound VPC are the same, the IP address of the external DNS system in the forwarding rule for the outbound endpoint cannot be the same as the IP address of the inbound endpoint service. This is because if the IP addresses are the same, a request loopback occurs and DNS resolution fails.
       *
       * @param request AddResolverRuleRequest
       * @return AddResolverRuleResponse
       */
      Models::AddResolverRuleResponse addResolverRule(const Models::AddResolverRuleRequest &request);

      /**
       * @summary Adds cross-account VPC authorization.
       *
       * @description #### **Limits**
       * - Cross-account settings for the effective scope only support Alibaba Cloud accounts (primary accounts) and do not support RAM users. Only accounts within the same site can be associated, such as between Alibaba Cloud China Website (www.aliyun.com) accounts or between Alibaba Cloud International Website (www.alibabacloud.com) accounts. Cross-site association is not supported, such as between a China Website account and an International Website account.
       * - For scenarios that use authentication code authorization, no API is currently available for sending authentication codes.
       * #### **Precautions**
       * When you configure cross-account settings for the effective scope, billing is settled under the account that manages the built-in authoritative domain name.
       *
       * @param request AddUserVpcAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserVpcAuthorizationResponse
       */
      Models::AddUserVpcAuthorizationResponse addUserVpcAuthorizationWithOptions(const Models::AddUserVpcAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds cross-account VPC authorization.
       *
       * @description #### **Limits**
       * - Cross-account settings for the effective scope only support Alibaba Cloud accounts (primary accounts) and do not support RAM users. Only accounts within the same site can be associated, such as between Alibaba Cloud China Website (www.aliyun.com) accounts or between Alibaba Cloud International Website (www.alibabacloud.com) accounts. Cross-site association is not supported, such as between a China Website account and an International Website account.
       * - For scenarios that use authentication code authorization, no API is currently available for sending authentication codes.
       * #### **Precautions**
       * When you configure cross-account settings for the effective scope, billing is settled under the account that manages the built-in authoritative domain name.
       *
       * @param request AddUserVpcAuthorizationRequest
       * @return AddUserVpcAuthorizationResponse
       */
      Models::AddUserVpcAuthorizationResponse addUserVpcAuthorization(const Models::AddUserVpcAuthorizationRequest &request);

      /**
       * @summary Call the AddZone operation to create a built-in authoritative zone. The built-in authoritative zone can be a standard zone or an accelerated zone.
       *
       * @description Starting from April 30, 2025 (UTC+8), zones added by new users of Alibaba Cloud DNS PrivateZone are set as accelerated zones by default. Starting from <props="china">October 30, 2025 (UTC+8)<props="intl">April 30, 2026 (UTC+8), all built-in authoritative standard zones will be automatically switched to accelerated zones. After the switch, the number of DNS queries may increase, which can increase your costs. To reduce the increase in DNS queries caused by the absence of a local cache, [enable NSCD for your ECS instances](https://help.aliyun.com/document_detail/2592999.html).
       *
       * @param request AddZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddZoneResponse
       */
      Models::AddZoneResponse addZoneWithOptions(const Models::AddZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the AddZone operation to create a built-in authoritative zone. The built-in authoritative zone can be a standard zone or an accelerated zone.
       *
       * @description Starting from April 30, 2025 (UTC+8), zones added by new users of Alibaba Cloud DNS PrivateZone are set as accelerated zones by default. Starting from <props="china">October 30, 2025 (UTC+8)<props="intl">April 30, 2026 (UTC+8), all built-in authoritative standard zones will be automatically switched to accelerated zones. After the switch, the number of DNS queries may increase, which can increase your costs. To reduce the increase in DNS queries caused by the absence of a local cache, [enable NSCD for your ECS instances](https://help.aliyun.com/document_detail/2592999.html).
       *
       * @param request AddZoneRequest
       * @return AddZoneResponse
       */
      Models::AddZoneResponse addZone(const Models::AddZoneRequest &request);

      /**
       * @summary Call the AddZoneRecord operation to add a DNS record to an authoritative zone. Within the effective scope of the zone, the internal DNS record for a domain name overwrites its public DNS record.
       *
       * @param request AddZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddZoneRecordResponse
       */
      Models::AddZoneRecordResponse addZoneRecordWithOptions(const Models::AddZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the AddZoneRecord operation to add a DNS record to an authoritative zone. Within the effective scope of the zone, the internal DNS record for a domain name overwrites its public DNS record.
       *
       * @param request AddZoneRecordRequest
       * @return AddZoneRecordResponse
       */
      Models::AddZoneRecordResponse addZoneRecord(const Models::AddZoneRecordRequest &request);

      /**
       * @summary The BindResolverRuleVpc operation associates a forwarding rule with a virtual private cloud (VPC).
       *
       * @description >Notice: 
       * This operation performs a full replacement. Any existing VPC associations not included in your request will be removed. To add a new VPC, you must include the IDs of all VPCs that should remain associated.
       *
       * @param request BindResolverRuleVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindResolverRuleVpcResponse
       */
      Models::BindResolverRuleVpcResponse bindResolverRuleVpcWithOptions(const Models::BindResolverRuleVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The BindResolverRuleVpc operation associates a forwarding rule with a virtual private cloud (VPC).
       *
       * @description >Notice: 
       * This operation performs a full replacement. Any existing VPC associations not included in your request will be removed. To add a new VPC, you must include the IDs of all VPCs that should remain associated.
       *
       * @param request BindResolverRuleVpcRequest
       * @return BindResolverRuleVpcResponse
       */
      Models::BindResolverRuleVpcResponse bindResolverRuleVpc(const Models::BindResolverRuleVpcRequest &request);

      /**
       * @summary Binds a Zone to, or unbinds it from, one or more VPCs to define its effective scope.
       *
       * @description ##### Notes
       * We recommend binding VPCs to a Zone only after you configure all its DNS records. Otherwise, DNS queries for the domain name in the specified VPCs may fail. This issue does not occur if the subdomain recursive resolution proxy feature is enabled.
       * >Notice: This API operation performs a full overwrite. The list of VPCs provided in a request replaces all existing associated VPCs. To add a VPC, you must include the IDs of the new VPC and all existing VPCs that you want to retain.
       *
       * @param request BindZoneVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindZoneVpcResponse
       */
      Models::BindZoneVpcResponse bindZoneVpcWithOptions(const Models::BindZoneVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a Zone to, or unbinds it from, one or more VPCs to define its effective scope.
       *
       * @description ##### Notes
       * We recommend binding VPCs to a Zone only after you configure all its DNS records. Otherwise, DNS queries for the domain name in the specified VPCs may fail. This issue does not occur if the subdomain recursive resolution proxy feature is enabled.
       * >Notice: This API operation performs a full overwrite. The list of VPCs provided in a request replaces all existing associated VPCs. To add a VPC, you must include the IDs of the new VPC and all existing VPCs that you want to retain.
       *
       * @param request BindZoneVpcRequest
       * @return BindZoneVpcResponse
       */
      Models::BindZoneVpcResponse bindZoneVpc(const Models::BindZoneVpcRequest &request);

      /**
       * @summary Modify the location of a ZONE.
       *
       * @description Starting April 30, 2025 (UTC+8), zones added by new Alibaba Cloud DNS PrivateZone users will be set to acceleration zones by default. <props="china">Starting October 30, 2025 (UTC+8)<props="intl">Starting April 30, 2026 (UTC+8), built-in authoritative zones in the standard zone group for all users will be automatically switched to the acceleration zone group. After the switch, the number of DNS requests may increase, which can result in higher usage costs. You can enable [NSCD for ECS](https://help.aliyun.com/document_detail/2592999.html) to reduce the increase in DNS requests caused by the lack of a local cache.
       *
       * @param request ChangeZoneDnsGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeZoneDnsGroupResponse
       */
      Models::ChangeZoneDnsGroupResponse changeZoneDnsGroupWithOptions(const Models::ChangeZoneDnsGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the location of a ZONE.
       *
       * @description Starting April 30, 2025 (UTC+8), zones added by new Alibaba Cloud DNS PrivateZone users will be set to acceleration zones by default. <props="china">Starting October 30, 2025 (UTC+8)<props="intl">Starting April 30, 2026 (UTC+8), built-in authoritative zones in the standard zone group for all users will be automatically switched to the acceleration zone group. After the switch, the number of DNS requests may increase, which can result in higher usage costs. You can enable [NSCD for ECS](https://help.aliyun.com/document_detail/2592999.html) to reduce the increase in DNS requests caused by the lack of a local cache.
       *
       * @param request ChangeZoneDnsGroupRequest
       * @return ChangeZoneDnsGroupResponse
       */
      Models::ChangeZoneDnsGroupResponse changeZoneDnsGroup(const Models::ChangeZoneDnsGroupRequest &request);

      /**
       * @summary You can call the CheckZoneName operation to check whether a zone name is available.
       *
       * @param request CheckZoneNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckZoneNameResponse
       */
      Models::CheckZoneNameResponse checkZoneNameWithOptions(const Models::CheckZoneNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CheckZoneName operation to check whether a zone name is available.
       *
       * @param request CheckZoneNameRequest
       * @return CheckZoneNameResponse
       */
      Models::CheckZoneNameResponse checkZoneName(const Models::CheckZoneNameRequest &request);

      /**
       * @summary Deletes a custom line.
       *
       * @param request DeleteCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomLineResponse
       */
      Models::DeleteCustomLineResponse deleteCustomLineWithOptions(const Models::DeleteCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom line.
       *
       * @param request DeleteCustomLineRequest
       * @return DeleteCustomLineResponse
       */
      Models::DeleteCustomLineResponse deleteCustomLine(const Models::DeleteCustomLineRequest &request);

      /**
       * @summary You can call the DeleteResolverEndpoint operation to delete an endpoint by its ID.
       *
       * @param request DeleteResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResolverEndpointResponse
       */
      Models::DeleteResolverEndpointResponse deleteResolverEndpointWithOptions(const Models::DeleteResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteResolverEndpoint operation to delete an endpoint by its ID.
       *
       * @param request DeleteResolverEndpointRequest
       * @return DeleteResolverEndpointResponse
       */
      Models::DeleteResolverEndpointResponse deleteResolverEndpoint(const Models::DeleteResolverEndpointRequest &request);

      /**
       * @summary Deletes a forwarding rule by its ID.
       *
       * @param request DeleteResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResolverRuleResponse
       */
      Models::DeleteResolverRuleResponse deleteResolverRuleWithOptions(const Models::DeleteResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a forwarding rule by its ID.
       *
       * @param request DeleteResolverRuleRequest
       * @return DeleteResolverRuleResponse
       */
      Models::DeleteResolverRuleResponse deleteResolverRule(const Models::DeleteResolverRuleRequest &request);

      /**
       * @summary Deletes a cross-account authorization based on a specified account ID and authorization type.
       *
       * @param request DeleteUserVpcAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserVpcAuthorizationResponse
       */
      Models::DeleteUserVpcAuthorizationResponse deleteUserVpcAuthorizationWithOptions(const Models::DeleteUserVpcAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cross-account authorization based on a specified account ID and authorization type.
       *
       * @param request DeleteUserVpcAuthorizationRequest
       * @return DeleteUserVpcAuthorizationResponse
       */
      Models::DeleteUserVpcAuthorizationResponse deleteUserVpcAuthorization(const Models::DeleteUserVpcAuthorizationRequest &request);

      /**
       * @summary Deletes an idle zone (built-in authoritative domain name).
       *
       * @description #### Notes
       * You must dissociate a zone from its scope before you delete it.
       *
       * @param request DeleteZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteZoneResponse
       */
      Models::DeleteZoneResponse deleteZoneWithOptions(const Models::DeleteZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an idle zone (built-in authoritative domain name).
       *
       * @description #### Notes
       * You must dissociate a zone from its scope before you delete it.
       *
       * @param request DeleteZoneRequest
       * @return DeleteZoneResponse
       */
      Models::DeleteZoneResponse deleteZone(const Models::DeleteZoneRequest &request);

      /**
       * @summary The DeleteZoneRecord operation deletes a DNS record by its ID.
       *
       * @description #### **Notes**
       * This operation is irreversible. Deleted records cannot be recovered.
       *
       * @param request DeleteZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteZoneRecordResponse
       */
      Models::DeleteZoneRecordResponse deleteZoneRecordWithOptions(const Models::DeleteZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DeleteZoneRecord operation deletes a DNS record by its ID.
       *
       * @description #### **Notes**
       * This operation is irreversible. Deleted records cannot be recovered.
       *
       * @param request DeleteZoneRecordRequest
       * @return DeleteZoneRecordResponse
       */
      Models::DeleteZoneRecordResponse deleteZoneRecord(const Models::DeleteZoneRecordRequest &request);

      /**
       * @summary You can call the DescribeChangeLogs operation to retrieve the operation logs for a private zone. The logs record operations related to built-in authoritative zones, cache management, forwarding management, endpoints, and DNS record queries. You can perform a fuzzy search by keywords such as behavior and content.
       *
       * @description #### **Limits**
       * You can query operation logs for a private zone generated within the last six months.
       *
       * @param request DescribeChangeLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChangeLogsResponse
       */
      Models::DescribeChangeLogsResponse describeChangeLogsWithOptions(const Models::DescribeChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeChangeLogs operation to retrieve the operation logs for a private zone. The logs record operations related to built-in authoritative zones, cache management, forwarding management, endpoints, and DNS record queries. You can perform a fuzzy search by keywords such as behavior and content.
       *
       * @description #### **Limits**
       * You can query operation logs for a private zone generated within the last six months.
       *
       * @param request DescribeChangeLogsRequest
       * @return DescribeChangeLogsResponse
       */
      Models::DescribeChangeLogsResponse describeChangeLogs(const Models::DescribeChangeLogsRequest &request);

      /**
       * @summary Retrieves the details of a custom line.
       *
       * @param request DescribeCustomLineInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLineInfoResponse
       */
      Models::DescribeCustomLineInfoResponse describeCustomLineInfoWithOptions(const Models::DescribeCustomLineInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a custom line.
       *
       * @param request DescribeCustomLineInfoRequest
       * @return DescribeCustomLineInfoResponse
       */
      Models::DescribeCustomLineInfoResponse describeCustomLineInfo(const Models::DescribeCustomLineInfoRequest &request);

      /**
       * @summary Queries a list of custom lines.
       *
       * @param request DescribeCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLinesResponse
       */
      Models::DescribeCustomLinesResponse describeCustomLinesWithOptions(const Models::DescribeCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom lines.
       *
       * @param request DescribeCustomLinesRequest
       * @return DescribeCustomLinesResponse
       */
      Models::DescribeCustomLinesResponse describeCustomLines(const Models::DescribeCustomLinesRequest &request);

      /**
       * @summary Retrieves a list of VPCs that a user can analyze.
       *
       * @description This operation is not recommended due to its low performance. To retrieve a list of zones, call the `DescribeZones` operation. To get details about a VPC in a specific zone, call `DescribeZoneInfo` and specify the `zoneId`.
       *
       * @param request DescribeIntranetUserCanAnalysisVpcsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIntranetUserCanAnalysisVpcsResponse
       */
      Models::DescribeIntranetUserCanAnalysisVpcsResponse describeIntranetUserCanAnalysisVpcsWithOptions(const Models::DescribeIntranetUserCanAnalysisVpcsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of VPCs that a user can analyze.
       *
       * @description This operation is not recommended due to its low performance. To retrieve a list of zones, call the `DescribeZones` operation. To get details about a VPC in a specific zone, call `DescribeZoneInfo` and specify the `zoneId`.
       *
       * @param request DescribeIntranetUserCanAnalysisVpcsRequest
       * @return DescribeIntranetUserCanAnalysisVpcsResponse
       */
      Models::DescribeIntranetUserCanAnalysisVpcsResponse describeIntranetUserCanAnalysisVpcs(const Models::DescribeIntranetUserCanAnalysisVpcsRequest &request);

      /**
       * @summary Retrieves global DNS resolution statistics for PrivateZone.
       *
       * @description #### **Usage notes**
       * This operation queries tag information only for zone resources.
       *
       * @param request DescribePvtzStatisticsGlobalOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePvtzStatisticsGlobalOverviewResponse
       */
      Models::DescribePvtzStatisticsGlobalOverviewResponse describePvtzStatisticsGlobalOverviewWithOptions(const Models::DescribePvtzStatisticsGlobalOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves global DNS resolution statistics for PrivateZone.
       *
       * @description #### **Usage notes**
       * This operation queries tag information only for zone resources.
       *
       * @param request DescribePvtzStatisticsGlobalOverviewRequest
       * @return DescribePvtzStatisticsGlobalOverviewResponse
       */
      Models::DescribePvtzStatisticsGlobalOverviewResponse describePvtzStatisticsGlobalOverview(const Models::DescribePvtzStatisticsGlobalOverviewRequest &request);

      /**
       * @summary PrivateZone Resolution Trends
       *
       * @description #### **Limits**
       * Currently, you can only query tags for availability zone resources.
       *
       * @param request DescribePvtzStatisticsHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePvtzStatisticsHistoryResponse
       */
      Models::DescribePvtzStatisticsHistoryResponse describePvtzStatisticsHistoryWithOptions(const Models::DescribePvtzStatisticsHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PrivateZone Resolution Trends
       *
       * @description #### **Limits**
       * Currently, you can only query tags for availability zone resources.
       *
       * @param request DescribePvtzStatisticsHistoryRequest
       * @return DescribePvtzStatisticsHistoryResponse
       */
      Models::DescribePvtzStatisticsHistoryResponse describePvtzStatisticsHistory(const Models::DescribePvtzStatisticsHistoryRequest &request);

      /**
       * @summary PrivateZone Resolution Statistics Summary
       *
       * @description #### **Limits**
       * You can only query tags for zone resources.
       *
       * @param request DescribePvtzStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePvtzStatisticsSummaryResponse
       */
      Models::DescribePvtzStatisticsSummaryResponse describePvtzStatisticsSummaryWithOptions(const Models::DescribePvtzStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PrivateZone Resolution Statistics Summary
       *
       * @description #### **Limits**
       * You can only query tags for zone resources.
       *
       * @param request DescribePvtzStatisticsSummaryRequest
       * @return DescribePvtzStatisticsSummaryResponse
       */
      Models::DescribePvtzStatisticsSummaryResponse describePvtzStatisticsSummary(const Models::DescribePvtzStatisticsSummaryRequest &request);

      /**
       * @summary Provides an overview of resolution statistics for zones in PrivateZone.
       *
       * @description This is a low-performance operation and is not recommended. To retrieve a list of zones, use the DescribeZones operation. To get details of the VPCs bound to a zone, call the DescribeZoneInfo operation and specify the zone ID.
       *
       * @param request DescribePvtzStatisticsZoneOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePvtzStatisticsZoneOverviewResponse
       */
      Models::DescribePvtzStatisticsZoneOverviewResponse describePvtzStatisticsZoneOverviewWithOptions(const Models::DescribePvtzStatisticsZoneOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides an overview of resolution statistics for zones in PrivateZone.
       *
       * @description This is a low-performance operation and is not recommended. To retrieve a list of zones, use the DescribeZones operation. To get details of the VPCs bound to a zone, call the DescribeZoneInfo operation and specify the zone ID.
       *
       * @param request DescribePvtzStatisticsZoneOverviewRequest
       * @return DescribePvtzStatisticsZoneOverviewResponse
       */
      Models::DescribePvtzStatisticsZoneOverviewResponse describePvtzStatisticsZoneOverview(const Models::DescribePvtzStatisticsZoneOverviewRequest &request);

      /**
       * @summary Call the DescribeRegions operation to query a list of available regions. You can filter the list by criteria such as the scenario and VPC type.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeRegions operation to query a list of available regions. You can filter the list by criteria such as the scenario and VPC type.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries details about the number of requests based on conditions such as a time range.
       *
       * @param request DescribeRequestGraphRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRequestGraphResponse
       */
      Models::DescribeRequestGraphResponse describeRequestGraphWithOptions(const Models::DescribeRequestGraphRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about the number of requests based on conditions such as a time range.
       *
       * @param request DescribeRequestGraphRequest
       * @return DescribeRequestGraphResponse
       */
      Models::DescribeRequestGraphResponse describeRequestGraph(const Models::DescribeRequestGraphRequest &request);

      /**
       * @summary Call DescribeResolverAvailableZones to retrieve a list of available zones.
       *
       * @param request DescribeResolverAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverAvailableZonesResponse
       */
      Models::DescribeResolverAvailableZonesResponse describeResolverAvailableZonesWithOptions(const Models::DescribeResolverAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeResolverAvailableZones to retrieve a list of available zones.
       *
       * @param request DescribeResolverAvailableZonesRequest
       * @return DescribeResolverAvailableZonesResponse
       */
      Models::DescribeResolverAvailableZonesResponse describeResolverAvailableZones(const Models::DescribeResolverAvailableZonesRequest &request);

      /**
       * @summary You can call DescribeResolverEndpoint to retrieve the details of an endpoint by its ID.
       *
       * @param request DescribeResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverEndpointResponse
       */
      Models::DescribeResolverEndpointResponse describeResolverEndpointWithOptions(const Models::DescribeResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DescribeResolverEndpoint to retrieve the details of an endpoint by its ID.
       *
       * @param request DescribeResolverEndpointRequest
       * @return DescribeResolverEndpointResponse
       */
      Models::DescribeResolverEndpointResponse describeResolverEndpoint(const Models::DescribeResolverEndpointRequest &request);

      /**
       * @summary You can call DescribeResolverEndpoints to retrieve a list of endpoints.
       *
       * @param request DescribeResolverEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverEndpointsResponse
       */
      Models::DescribeResolverEndpointsResponse describeResolverEndpointsWithOptions(const Models::DescribeResolverEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DescribeResolverEndpoints to retrieve a list of endpoints.
       *
       * @param request DescribeResolverEndpointsRequest
       * @return DescribeResolverEndpointsResponse
       */
      Models::DescribeResolverEndpointsResponse describeResolverEndpoints(const Models::DescribeResolverEndpointsRequest &request);

      /**
       * @summary Call the DescribeResolverRule operation to retrieve the details of a forwarding rule.
       *
       * @param request DescribeResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverRuleResponse
       */
      Models::DescribeResolverRuleResponse describeResolverRuleWithOptions(const Models::DescribeResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeResolverRule operation to retrieve the details of a forwarding rule.
       *
       * @param request DescribeResolverRuleRequest
       * @return DescribeResolverRuleResponse
       */
      Models::DescribeResolverRuleResponse describeResolverRule(const Models::DescribeResolverRuleRequest &request);

      /**
       * @summary Describes one or more forwarding rules.
       *
       * @param request DescribeResolverRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverRulesResponse
       */
      Models::DescribeResolverRulesResponse describeResolverRulesWithOptions(const Models::DescribeResolverRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes one or more forwarding rules.
       *
       * @param request DescribeResolverRulesRequest
       * @return DescribeResolverRulesResponse
       */
      Models::DescribeResolverRulesResponse describeResolverRules(const Models::DescribeResolverRulesRequest &request);

      /**
       * @summary Call the DescribeStatisticSummary operation to retrieve a summary of yesterday\\"s request volume. This summary includes the top three zones and top three VPCs ranked by request volume.
       *
       * @param request DescribeStatisticSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStatisticSummaryResponse
       */
      Models::DescribeStatisticSummaryResponse describeStatisticSummaryWithOptions(const Models::DescribeStatisticSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeStatisticSummary operation to retrieve a summary of yesterday\\"s request volume. This summary includes the top three zones and top three VPCs ranked by request volume.
       *
       * @param request DescribeStatisticSummaryRequest
       * @return DescribeStatisticSummaryResponse
       */
      Models::DescribeStatisticSummaryResponse describeStatisticSummary(const Models::DescribeStatisticSummaryRequest &request);

      /**
       * @summary Call DescribeSyncEcsHostTask to retrieve the details of a hostname sync task based on a zone ID.
       *
       * @param request DescribeSyncEcsHostTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncEcsHostTaskResponse
       */
      Models::DescribeSyncEcsHostTaskResponse describeSyncEcsHostTaskWithOptions(const Models::DescribeSyncEcsHostTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call DescribeSyncEcsHostTask to retrieve the details of a hostname sync task based on a zone ID.
       *
       * @param request DescribeSyncEcsHostTaskRequest
       * @return DescribeSyncEcsHostTaskResponse
       */
      Models::DescribeSyncEcsHostTaskResponse describeSyncEcsHostTask(const Models::DescribeSyncEcsHostTaskRequest &request);

      /**
       * @summary Queries the tags that are added to resources in PrivateZone.
       *
       * @description #### **Limits**
       * You can query tags for zone resources only.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources in PrivateZone.
       *
       * @description #### **Limits**
       * You can query tags for zone resources only.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the service status of the current user, which indicates whether the service is activated or has overdue payments.
       *
       * @param request DescribeUserServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserServiceStatusResponse
       */
      Models::DescribeUserServiceStatusResponse describeUserServiceStatusWithOptions(const Models::DescribeUserServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the service status of the current user, which indicates whether the service is activated or has overdue payments.
       *
       * @param request DescribeUserServiceStatusRequest
       * @return DescribeUserServiceStatusResponse
       */
      Models::DescribeUserServiceStatusResponse describeUserServiceStatus(const Models::DescribeUserServiceStatusRequest &request);

      /**
       * @summary Call the DescribeUserVpcAuthorizations operation to retrieve a list of cross-account authorizations.
       *
       * @param request DescribeUserVpcAuthorizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserVpcAuthorizationsResponse
       */
      Models::DescribeUserVpcAuthorizationsResponse describeUserVpcAuthorizationsWithOptions(const Models::DescribeUserVpcAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeUserVpcAuthorizations operation to retrieve a list of cross-account authorizations.
       *
       * @param request DescribeUserVpcAuthorizationsRequest
       * @return DescribeUserVpcAuthorizationsResponse
       */
      Models::DescribeUserVpcAuthorizationsResponse describeUserVpcAuthorizations(const Models::DescribeUserVpcAuthorizationsRequest &request);

      /**
       * @summary Call the DescribeZoneInfo operation to retrieve the details of a specified built-in authoritative zone. The details include the list of VPCs that are bound to the zone.
       *
       * @param request DescribeZoneInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneInfoResponse
       */
      Models::DescribeZoneInfoResponse describeZoneInfoWithOptions(const Models::DescribeZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeZoneInfo operation to retrieve the details of a specified built-in authoritative zone. The details include the list of VPCs that are bound to the zone.
       *
       * @param request DescribeZoneInfoRequest
       * @return DescribeZoneInfoResponse
       */
      Models::DescribeZoneInfoResponse describeZoneInfo(const Models::DescribeZoneInfoRequest &request);

      /**
       * @summary Queries the details of a DNS record.
       *
       * @param request DescribeZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneRecordResponse
       */
      Models::DescribeZoneRecordResponse describeZoneRecordWithOptions(const Models::DescribeZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a DNS record.
       *
       * @param request DescribeZoneRecordRequest
       * @return DescribeZoneRecordResponse
       */
      Models::DescribeZoneRecordResponse describeZoneRecord(const Models::DescribeZoneRecordRequest &request);

      /**
       * @summary You can call DescribeZoneRecords to query DNS records for a zone.
       *
       * @param request DescribeZoneRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneRecordsResponse
       */
      Models::DescribeZoneRecordsResponse describeZoneRecordsWithOptions(const Models::DescribeZoneRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DescribeZoneRecords to query DNS records for a zone.
       *
       * @param request DescribeZoneRecordsRequest
       * @return DescribeZoneRecordsResponse
       */
      Models::DescribeZoneRecordsResponse describeZoneRecords(const Models::DescribeZoneRecordsRequest &request);

      /**
       * @summary Call the DescribeZoneVpcTree operation to query the zones and the Virtual Private Clouds (VPCs) attached to them in your account.
       *
       * @description This operation is not recommended due to low performance. To retrieve a list of zones, call DescribeZones. To retrieve the details of attached VPCs, call DescribeZoneInfo with the zone ID.
       *
       * @param request DescribeZoneVpcTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneVpcTreeResponse
       */
      Models::DescribeZoneVpcTreeResponse describeZoneVpcTreeWithOptions(const Models::DescribeZoneVpcTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeZoneVpcTree operation to query the zones and the Virtual Private Clouds (VPCs) attached to them in your account.
       *
       * @description This operation is not recommended due to low performance. To retrieve a list of zones, call DescribeZones. To retrieve the details of attached VPCs, call DescribeZoneInfo with the zone ID.
       *
       * @param request DescribeZoneVpcTreeRequest
       * @return DescribeZoneVpcTreeResponse
       */
      Models::DescribeZoneVpcTreeResponse describeZoneVpcTree(const Models::DescribeZoneVpcTreeRequest &request);

      /**
       * @summary You can call the DescribeZones operation to query a list of zones available to your account.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeZones operation to query a list of zones available to your account.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Queries the tags that are added to resources in Private Zone.
       *
       * @description #### **Limits**
       * This operation queries tags for zone resources only.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to resources in Private Zone.
       *
       * @description #### **Limits**
       * This operation queries tags for zone resources only.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary You can call the MoveResourceGroup operation to move a resource to a different resource group.
       *
       * @description #### Conditions
       * This operation can be used to change the resource group of only zone-specific resources.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the MoveResourceGroup operation to move a resource to a different resource group.
       *
       * @description #### Conditions
       * This operation can be used to change the resource group of only zone-specific resources.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Searches for custom access control lists (ACLs).
       *
       * @param request SearchCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCustomLinesResponse
       */
      Models::SearchCustomLinesResponse searchCustomLinesWithOptions(const Models::SearchCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for custom access control lists (ACLs).
       *
       * @param request SearchCustomLinesRequest
       * @return SearchCustomLinesResponse
       */
      Models::SearchCustomLinesResponse searchCustomLines(const Models::SearchCustomLinesRequest &request);

      /**
       * @summary Sets the recursive resolution proxy for subdomains.
       *
       * @param request SetProxyPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetProxyPatternResponse
       */
      Models::SetProxyPatternResponse setProxyPatternWithOptions(const Models::SetProxyPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the recursive resolution proxy for subdomains.
       *
       * @param request SetProxyPatternRequest
       * @return SetProxyPatternResponse
       */
      Models::SetProxyPatternResponse setProxyPattern(const Models::SetProxyPatternRequest &request);

      /**
       * @summary Sets the weight enabling status.
       *
       * @description #### Precautions
       * Built-in authoritative domain names that have configured domain name effective scopes must first be dissociated from the domain name effective scope before they can be deleted.
       *
       * @param request SetZoneLbaStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetZoneLbaStatusResponse
       */
      Models::SetZoneLbaStatusResponse setZoneLbaStatusWithOptions(const Models::SetZoneLbaStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the weight enabling status.
       *
       * @description #### Precautions
       * Built-in authoritative domain names that have configured domain name effective scopes must first be dissociated from the domain name effective scope before they can be deleted.
       *
       * @param request SetZoneLbaStatusRequest
       * @return SetZoneLbaStatusResponse
       */
      Models::SetZoneLbaStatusResponse setZoneLbaStatus(const Models::SetZoneLbaStatusRequest &request);

      /**
       * @summary You can call SetZoneRecordStatus to set the status of a DNS record for a zone. This enables or pauses DNS resolution.
       *
       * @param request SetZoneRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetZoneRecordStatusResponse
       */
      Models::SetZoneRecordStatusResponse setZoneRecordStatusWithOptions(const Models::SetZoneRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call SetZoneRecordStatus to set the status of a DNS record for a zone. This enables or pauses DNS resolution.
       *
       * @param request SetZoneRecordStatusRequest
       * @return SetZoneRecordStatusResponse
       */
      Models::SetZoneRecordStatusResponse setZoneRecordStatus(const Models::SetZoneRecordStatusRequest &request);

      /**
       * @summary You can call the TagResources operation to add or modify tags for one or more zones in a batch.
       *
       * @description ##### Limits
       * You can add tags only to zone resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the TagResources operation to add or modify tags for one or more zones in a batch.
       *
       * @description ##### Limits
       * You can add tags only to zone resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary You can call the UntagResources operation to remove tags from one or more zones in PrivateZone.
       *
       * @description #### **Limits**
       * You can remove tags only from zone resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UntagResources operation to remove tags from one or more zones in PrivateZone.
       *
       * @description #### **Limits**
       * You can remove tags only from zone resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a custom line.
       *
       * @param request UpdateCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLineWithOptions(const Models::UpdateCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom line.
       *
       * @param request UpdateCustomLineRequest
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLine(const Models::UpdateCustomLineRequest &request);

      /**
       * @summary You can call the UpdateRecordRemark operation to modify the remarks of a DNS record based on its ID.
       *
       * @param request UpdateRecordRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordRemarkResponse
       */
      Models::UpdateRecordRemarkResponse updateRecordRemarkWithOptions(const Models::UpdateRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateRecordRemark operation to modify the remarks of a DNS record based on its ID.
       *
       * @param request UpdateRecordRemarkRequest
       * @return UpdateRecordRemarkResponse
       */
      Models::UpdateRecordRemarkResponse updateRecordRemark(const Models::UpdateRecordRemarkRequest &request);

      /**
       * @summary Updates an endpoint.
       *
       * @param request UpdateResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResolverEndpointResponse
       */
      Models::UpdateResolverEndpointResponse updateResolverEndpointWithOptions(const Models::UpdateResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an endpoint.
       *
       * @param request UpdateResolverEndpointRequest
       * @return UpdateResolverEndpointResponse
       */
      Models::UpdateResolverEndpointResponse updateResolverEndpoint(const Models::UpdateResolverEndpointRequest &request);

      /**
       * @summary Modifies a forwarding rule.
       *
       * @param request UpdateResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResolverRuleResponse
       */
      Models::UpdateResolverRuleResponse updateResolverRuleWithOptions(const Models::UpdateResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a forwarding rule.
       *
       * @param request UpdateResolverRuleRequest
       * @return UpdateResolverRuleResponse
       */
      Models::UpdateResolverRuleResponse updateResolverRule(const Models::UpdateResolverRuleRequest &request);

      /**
       * @summary Call the UpdateSyncEcsHostTask operation to add or update a hostname sync task.
       *
       * @param request UpdateSyncEcsHostTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSyncEcsHostTaskResponse
       */
      Models::UpdateSyncEcsHostTaskResponse updateSyncEcsHostTaskWithOptions(const Models::UpdateSyncEcsHostTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the UpdateSyncEcsHostTask operation to add or update a hostname sync task.
       *
       * @param request UpdateSyncEcsHostTaskRequest
       * @return UpdateSyncEcsHostTaskResponse
       */
      Models::UpdateSyncEcsHostTaskResponse updateSyncEcsHostTask(const Models::UpdateSyncEcsHostTaskRequest &request);

      /**
       * @summary The UpdateZoneRecord operation modifies a DNS record for a zone. You can change properties such as the host record, record type, and weight.
       *
       * @description #### **Notes**
       * Modifications to DNS records in standard zones take effect after the Time to Live (TTL) expires. Modifications to DNS records in acceleration regions take effect immediately and are not affected by the TTL.
       *
       * @param request UpdateZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateZoneRecordResponse
       */
      Models::UpdateZoneRecordResponse updateZoneRecordWithOptions(const Models::UpdateZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The UpdateZoneRecord operation modifies a DNS record for a zone. You can change properties such as the host record, record type, and weight.
       *
       * @description #### **Notes**
       * Modifications to DNS records in standard zones take effect after the Time to Live (TTL) expires. Modifications to DNS records in acceleration regions take effect immediately and are not affected by the TTL.
       *
       * @param request UpdateZoneRecordRequest
       * @return UpdateZoneRecordResponse
       */
      Models::UpdateZoneRecordResponse updateZoneRecord(const Models::UpdateZoneRecordRequest &request);

      /**
       * @summary Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
       *
       * @description Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
       *
       * @param request UpdateZoneRecordWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateZoneRecordWeightResponse
       */
      Models::UpdateZoneRecordWeightResponse updateZoneRecordWeightWithOptions(const Models::UpdateZoneRecordWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
       *
       * @description Updates the weight value of an authoritative DNS record in Alibaba Cloud DNS PrivateZone.
       *
       * @param request UpdateZoneRecordWeightRequest
       * @return UpdateZoneRecordWeightResponse
       */
      Models::UpdateZoneRecordWeightResponse updateZoneRecordWeight(const Models::UpdateZoneRecordWeightRequest &request);

      /**
       * @summary Modifies the remark for a built-in authoritative domain name (zone).
       *
       * @param request UpdateZoneRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateZoneRemarkResponse
       */
      Models::UpdateZoneRemarkResponse updateZoneRemarkWithOptions(const Models::UpdateZoneRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remark for a built-in authoritative domain name (zone).
       *
       * @param request UpdateZoneRemarkRequest
       * @return UpdateZoneRemarkResponse
       */
      Models::UpdateZoneRemarkResponse updateZoneRemark(const Models::UpdateZoneRemarkRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
