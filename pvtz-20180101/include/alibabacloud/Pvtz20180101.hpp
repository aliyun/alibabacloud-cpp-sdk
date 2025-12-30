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
       * @summary Creates an endpoint.
       *
       * @param request AddResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddResolverEndpointResponse
       */
      Models::AddResolverEndpointResponse addResolverEndpointWithOptions(const Models::AddResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint.
       *
       * @param request AddResolverEndpointRequest
       * @return AddResolverEndpointResponse
       */
      Models::AddResolverEndpointResponse addResolverEndpoint(const Models::AddResolverEndpointRequest &request);

      /**
       * @summary Creates a forwarding rule.
       *
       * @description #### [](#)**Precautions**
       * If a virtual private cloud (VPC) serves as both an inbound VPC and an outbound VPC, the IP addresses of external Domain Name System (DNS) servers cannot be the same as the IP addresses of the inbound endpoint in the VPC. The IP addresses of the external DNS servers are specified in the forwarding rule associated with the outbound endpoint in the same VPC. If the IP addresses are the same, the DNS requests sent from the IP addresses of the inbound endpoint are returned to the VPC. This results in resolution failures.
       *
       * @param request AddResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddResolverRuleResponse
       */
      Models::AddResolverRuleResponse addResolverRuleWithOptions(const Models::AddResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a forwarding rule.
       *
       * @description #### [](#)**Precautions**
       * If a virtual private cloud (VPC) serves as both an inbound VPC and an outbound VPC, the IP addresses of external Domain Name System (DNS) servers cannot be the same as the IP addresses of the inbound endpoint in the VPC. The IP addresses of the external DNS servers are specified in the forwarding rule associated with the outbound endpoint in the same VPC. If the IP addresses are the same, the DNS requests sent from the IP addresses of the inbound endpoint are returned to the VPC. This results in resolution failures.
       *
       * @param request AddResolverRuleRequest
       * @return AddResolverRuleResponse
       */
      Models::AddResolverRuleResponse addResolverRule(const Models::AddResolverRuleRequest &request);

      /**
       * @summary Adds another account to associate one or more virtual private clouds (VPCs) of the current account with a private zone.
       *
       * @description #### **Limits**
       * *   You can set an effective scope across accounts only by using an Alibaba Cloud account instead of a RAM user. You can set an effective scope across accounts registered on the same site. For example, you can perform the operation across accounts that are both registered on the Alibaba Cloud China site or Alibaba Cloud international site. You cannot set an effective scope across accounts registered on different sites. For example, you cannot perform the operation across accounts that are separately registered on the Alibaba Cloud China site and Alibaba Cloud international site.
       * *   No API operation is provided for sending the verification codes that are required for authorization.
       * #### **Precautions**
       * If you set an effective scope across accounts, bills are settled within the account that is used to perform routine management on built-in authoritative zones.
       *
       * @param request AddUserVpcAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserVpcAuthorizationResponse
       */
      Models::AddUserVpcAuthorizationResponse addUserVpcAuthorizationWithOptions(const Models::AddUserVpcAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds another account to associate one or more virtual private clouds (VPCs) of the current account with a private zone.
       *
       * @description #### **Limits**
       * *   You can set an effective scope across accounts only by using an Alibaba Cloud account instead of a RAM user. You can set an effective scope across accounts registered on the same site. For example, you can perform the operation across accounts that are both registered on the Alibaba Cloud China site or Alibaba Cloud international site. You cannot set an effective scope across accounts registered on different sites. For example, you cannot perform the operation across accounts that are separately registered on the Alibaba Cloud China site and Alibaba Cloud international site.
       * *   No API operation is provided for sending the verification codes that are required for authorization.
       * #### **Precautions**
       * If you set an effective scope across accounts, bills are settled within the account that is used to perform routine management on built-in authoritative zones.
       *
       * @param request AddUserVpcAuthorizationRequest
       * @return AddUserVpcAuthorizationResponse
       */
      Models::AddUserVpcAuthorizationResponse addUserVpcAuthorization(const Models::AddUserVpcAuthorizationRequest &request);

      /**
       * @summary Creates a built-in authoritative zone in the regular module or acceleration module.
       *
       * @param request AddZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddZoneResponse
       */
      Models::AddZoneResponse addZoneWithOptions(const Models::AddZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a built-in authoritative zone in the regular module or acceleration module.
       *
       * @param request AddZoneRequest
       * @return AddZoneResponse
       */
      Models::AddZoneResponse addZone(const Models::AddZoneRequest &request);

      /**
       * @summary Adds a Domain Name System (DNS) record for a built-in authoritative zone. Within the effective scope, the intranet DNS records rather than the Internet DNS records take effect for the zone.
       *
       * @param request AddZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddZoneRecordResponse
       */
      Models::AddZoneRecordResponse addZoneRecordWithOptions(const Models::AddZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Domain Name System (DNS) record for a built-in authoritative zone. Within the effective scope, the intranet DNS records rather than the Internet DNS records take effect for the zone.
       *
       * @param request AddZoneRecordRequest
       * @return AddZoneRecordResponse
       */
      Models::AddZoneRecordResponse addZoneRecord(const Models::AddZoneRecordRequest &request);

      /**
       * @summary Associates a forwarding rule with virtual private clouds (VPCs).
       *
       * @param request BindResolverRuleVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindResolverRuleVpcResponse
       */
      Models::BindResolverRuleVpcResponse bindResolverRuleVpcWithOptions(const Models::BindResolverRuleVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a forwarding rule with virtual private clouds (VPCs).
       *
       * @param request BindResolverRuleVpcRequest
       * @return BindResolverRuleVpcResponse
       */
      Models::BindResolverRuleVpcResponse bindResolverRuleVpc(const Models::BindResolverRuleVpcRequest &request);

      /**
       * @summary Associates or dissociates virtual private clouds (VPCs) from a zone to set the effective scope of the zone.
       *
       * @description ##### [](#)Precautions:
       * We recommend that you set the effective scope of a zone after you configure all Domain Name System (DNS) records. If you set an effective scope before you configure DNS records, the DNS resolution for the zone within the effective scope will fail unless you enable the recursive resolution proxy for subdomain names.
       *
       * @param request BindZoneVpcRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindZoneVpcResponse
       */
      Models::BindZoneVpcResponse bindZoneVpcWithOptions(const Models::BindZoneVpcRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates or dissociates virtual private clouds (VPCs) from a zone to set the effective scope of the zone.
       *
       * @description ##### [](#)Precautions:
       * We recommend that you set the effective scope of a zone after you configure all Domain Name System (DNS) records. If you set an effective scope before you configure DNS records, the DNS resolution for the zone within the effective scope will fail unless you enable the recursive resolution proxy for subdomain names.
       *
       * @param request BindZoneVpcRequest
       * @return BindZoneVpcResponse
       */
      Models::BindZoneVpcResponse bindZoneVpc(const Models::BindZoneVpcRequest &request);

      /**
       * @summary Changes the logical location of a zone.
       *
       * @param request ChangeZoneDnsGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeZoneDnsGroupResponse
       */
      Models::ChangeZoneDnsGroupResponse changeZoneDnsGroupWithOptions(const Models::ChangeZoneDnsGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the logical location of a zone.
       *
       * @param request ChangeZoneDnsGroupRequest
       * @return ChangeZoneDnsGroupResponse
       */
      Models::ChangeZoneDnsGroupResponse changeZoneDnsGroup(const Models::ChangeZoneDnsGroupRequest &request);

      /**
       * @summary Checks whether a zone name can be added based on a rule.
       *
       * @param request CheckZoneNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckZoneNameResponse
       */
      Models::CheckZoneNameResponse checkZoneNameWithOptions(const Models::CheckZoneNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a zone name can be added based on a rule.
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
       * @summary Deletes an endpoint based on the endpoint ID.
       *
       * @param request DeleteResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResolverEndpointResponse
       */
      Models::DeleteResolverEndpointResponse deleteResolverEndpointWithOptions(const Models::DeleteResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint based on the endpoint ID.
       *
       * @param request DeleteResolverEndpointRequest
       * @return DeleteResolverEndpointResponse
       */
      Models::DeleteResolverEndpointResponse deleteResolverEndpoint(const Models::DeleteResolverEndpointRequest &request);

      /**
       * @summary Deletes a forwarding rule based on the rule ID.
       *
       * @param request DeleteResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResolverRuleResponse
       */
      Models::DeleteResolverRuleResponse deleteResolverRuleWithOptions(const Models::DeleteResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a forwarding rule based on the rule ID.
       *
       * @param request DeleteResolverRuleRequest
       * @return DeleteResolverRuleResponse
       */
      Models::DeleteResolverRuleResponse deleteResolverRule(const Models::DeleteResolverRuleRequest &request);

      /**
       * @summary Removes an account from the central management of private Domain Name System (DNS) resolution based on the account ID and authorization type.
       *
       * @param request DeleteUserVpcAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserVpcAuthorizationResponse
       */
      Models::DeleteUserVpcAuthorizationResponse deleteUserVpcAuthorizationWithOptions(const Models::DeleteUserVpcAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an account from the central management of private Domain Name System (DNS) resolution based on the account ID and authorization type.
       *
       * @param request DeleteUserVpcAuthorizationRequest
       * @return DeleteUserVpcAuthorizationResponse
       */
      Models::DeleteUserVpcAuthorizationResponse deleteUserVpcAuthorization(const Models::DeleteUserVpcAuthorizationRequest &request);

      /**
       * @summary Deletes an idle built-in authoritative zone.
       *
       * @description #### [](#)Precautions
       * If you want to delete a built-in authoritative zone whose effective scope is configured, you must disassociate the zone from the effective scope first.
       *
       * @param request DeleteZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteZoneResponse
       */
      Models::DeleteZoneResponse deleteZoneWithOptions(const Models::DeleteZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an idle built-in authoritative zone.
       *
       * @description #### [](#)Precautions
       * If you want to delete a built-in authoritative zone whose effective scope is configured, you must disassociate the zone from the effective scope first.
       *
       * @param request DeleteZoneRequest
       * @return DeleteZoneResponse
       */
      Models::DeleteZoneResponse deleteZone(const Models::DeleteZoneRequest &request);

      /**
       * @summary Deletes a Domain Name System (DNS) record based on the ID of the DNS record.
       *
       * @description #### **Precautions**
       * Deleted DNS records cannot be restored. Exercise caution when you perform this operation.
       *
       * @param request DeleteZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteZoneRecordResponse
       */
      Models::DeleteZoneRecordResponse deleteZoneRecordWithOptions(const Models::DeleteZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Domain Name System (DNS) record based on the ID of the DNS record.
       *
       * @description #### **Precautions**
       * Deleted DNS records cannot be restored. Exercise caution when you perform this operation.
       *
       * @param request DeleteZoneRecordRequest
       * @return DeleteZoneRecordResponse
       */
      Models::DeleteZoneRecordResponse deleteZoneRecord(const Models::DeleteZoneRecordRequest &request);

      /**
       * @summary Queries the operation logs of Private DNS. Operation logs record operations in modules such as the built-in authoritative module, cache module, forward module, and service address module and record the queries for Domain Name System (DNS) records. You can query operation logs by operation or operation content.
       *
       * @description #### **Precautions**
       * You can query the operation logs of Private DNS that are generated within the last six months.
       *
       * @param request DescribeChangeLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeChangeLogsResponse
       */
      Models::DescribeChangeLogsResponse describeChangeLogsWithOptions(const Models::DescribeChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of Private DNS. Operation logs record operations in modules such as the built-in authoritative module, cache module, forward module, and service address module and record the queries for Domain Name System (DNS) records. You can query operation logs by operation or operation content.
       *
       * @description #### **Precautions**
       * You can query the operation logs of Private DNS that are generated within the last six months.
       *
       * @param request DescribeChangeLogsRequest
       * @return DescribeChangeLogsResponse
       */
      Models::DescribeChangeLogsResponse describeChangeLogs(const Models::DescribeChangeLogsRequest &request);

      /**
       * @summary Queries the information about a custom line.
       *
       * @param request DescribeCustomLineInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLineInfoResponse
       */
      Models::DescribeCustomLineInfoResponse describeCustomLineInfoWithOptions(const Models::DescribeCustomLineInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a custom line.
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
       * @summary Queries a list of regions for selection based on the scenario and virtual private cloud (VPC) type.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of regions for selection based on the scenario and virtual private cloud (VPC) type.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the information about Domain Name System (DNS) requests based on conditions such as the time range.
       *
       * @param request DescribeRequestGraphRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRequestGraphResponse
       */
      Models::DescribeRequestGraphResponse describeRequestGraphWithOptions(const Models::DescribeRequestGraphRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Domain Name System (DNS) requests based on conditions such as the time range.
       *
       * @param request DescribeRequestGraphRequest
       * @return DescribeRequestGraphResponse
       */
      Models::DescribeRequestGraphResponse describeRequestGraph(const Models::DescribeRequestGraphRequest &request);

      /**
       * @summary Queries a list of available zones.
       *
       * @param request DescribeResolverAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverAvailableZonesResponse
       */
      Models::DescribeResolverAvailableZonesResponse describeResolverAvailableZonesWithOptions(const Models::DescribeResolverAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available zones.
       *
       * @param request DescribeResolverAvailableZonesRequest
       * @return DescribeResolverAvailableZonesResponse
       */
      Models::DescribeResolverAvailableZonesResponse describeResolverAvailableZones(const Models::DescribeResolverAvailableZonesRequest &request);

      /**
       * @summary Queries the information about an endpoint based on the endpoint ID.
       *
       * @param request DescribeResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverEndpointResponse
       */
      Models::DescribeResolverEndpointResponse describeResolverEndpointWithOptions(const Models::DescribeResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an endpoint based on the endpoint ID.
       *
       * @param request DescribeResolverEndpointRequest
       * @return DescribeResolverEndpointResponse
       */
      Models::DescribeResolverEndpointResponse describeResolverEndpoint(const Models::DescribeResolverEndpointRequest &request);

      /**
       * @summary Queries a list of endpoints.
       *
       * @param request DescribeResolverEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverEndpointsResponse
       */
      Models::DescribeResolverEndpointsResponse describeResolverEndpointsWithOptions(const Models::DescribeResolverEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of endpoints.
       *
       * @param request DescribeResolverEndpointsRequest
       * @return DescribeResolverEndpointsResponse
       */
      Models::DescribeResolverEndpointsResponse describeResolverEndpoints(const Models::DescribeResolverEndpointsRequest &request);

      /**
       * @summary Queries the information about a forwarding rule based on the ID of the forwarding rule.
       *
       * @param request DescribeResolverRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverRuleResponse
       */
      Models::DescribeResolverRuleResponse describeResolverRuleWithOptions(const Models::DescribeResolverRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a forwarding rule based on the ID of the forwarding rule.
       *
       * @param request DescribeResolverRuleRequest
       * @return DescribeResolverRuleResponse
       */
      Models::DescribeResolverRuleResponse describeResolverRule(const Models::DescribeResolverRuleRequest &request);

      /**
       * @summary Queries a list of forwarding rules.
       *
       * @param request DescribeResolverRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResolverRulesResponse
       */
      Models::DescribeResolverRulesResponse describeResolverRulesWithOptions(const Models::DescribeResolverRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of forwarding rules.
       *
       * @param request DescribeResolverRulesRequest
       * @return DescribeResolverRulesResponse
       */
      Models::DescribeResolverRulesResponse describeResolverRules(const Models::DescribeResolverRulesRequest &request);

      /**
       * @summary Queries the statistics on Domain Name System (DNS) requests received on the previous day, including the top three zones and virtual private clouds (VPCs) with the largest number of DNS requests.
       *
       * @param request DescribeStatisticSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStatisticSummaryResponse
       */
      Models::DescribeStatisticSummaryResponse describeStatisticSummaryWithOptions(const Models::DescribeStatisticSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics on Domain Name System (DNS) requests received on the previous day, including the top three zones and virtual private clouds (VPCs) with the largest number of DNS requests.
       *
       * @param request DescribeStatisticSummaryRequest
       * @return DescribeStatisticSummaryResponse
       */
      Models::DescribeStatisticSummaryResponse describeStatisticSummary(const Models::DescribeStatisticSummaryRequest &request);

      /**
       * @summary Queries the information about a hostname synchronization task based on a zone ID.
       *
       * @description You can call the DescribeSyncEcsHostTask operation to query the information about a hostname synchronization task based on a zone ID.
       *
       * @param request DescribeSyncEcsHostTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyncEcsHostTaskResponse
       */
      Models::DescribeSyncEcsHostTaskResponse describeSyncEcsHostTaskWithOptions(const Models::DescribeSyncEcsHostTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a hostname synchronization task based on a zone ID.
       *
       * @description You can call the DescribeSyncEcsHostTask operation to query the information about a hostname synchronization task based on a zone ID.
       *
       * @param request DescribeSyncEcsHostTaskRequest
       * @return DescribeSyncEcsHostTaskResponse
       */
      Models::DescribeSyncEcsHostTaskResponse describeSyncEcsHostTask(const Models::DescribeSyncEcsHostTaskRequest &request);

      /**
       * @summary Queries a list of tags added to zones.
       *
       * @description #### **Precautions**
       * You can call this API operation to query the information about tags added only to zones.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags added to zones.
       *
       * @description #### **Precautions**
       * You can call this API operation to query the information about tags added only to zones.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Query the current user\\"s service status, such as whether the service is activated, whether there are any unpaid fees, etc.
       *
       * @param request DescribeUserServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserServiceStatusResponse
       */
      Models::DescribeUserServiceStatusResponse describeUserServiceStatusWithOptions(const Models::DescribeUserServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the current user\\"s service status, such as whether the service is activated, whether there are any unpaid fees, etc.
       *
       * @param request DescribeUserServiceStatusRequest
       * @return DescribeUserServiceStatusResponse
       */
      Models::DescribeUserServiceStatusResponse describeUserServiceStatus(const Models::DescribeUserServiceStatusRequest &request);

      /**
       * @summary Queries a list of accounts whose virtual private clouds (VPCs) are associated with a private zone.
       *
       * @param request DescribeUserVpcAuthorizationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserVpcAuthorizationsResponse
       */
      Models::DescribeUserVpcAuthorizationsResponse describeUserVpcAuthorizationsWithOptions(const Models::DescribeUserVpcAuthorizationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of accounts whose virtual private clouds (VPCs) are associated with a private zone.
       *
       * @param request DescribeUserVpcAuthorizationsRequest
       * @return DescribeUserVpcAuthorizationsResponse
       */
      Models::DescribeUserVpcAuthorizationsResponse describeUserVpcAuthorizations(const Models::DescribeUserVpcAuthorizationsRequest &request);

      /**
       * @summary Queries the information about a built-in authoritative zone, such as the virtual private clouds (VPCs) that are associated with the zone.
       *
       * @param request DescribeZoneInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneInfoResponse
       */
      Models::DescribeZoneInfoResponse describeZoneInfoWithOptions(const Models::DescribeZoneInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a built-in authoritative zone, such as the virtual private clouds (VPCs) that are associated with the zone.
       *
       * @param request DescribeZoneInfoRequest
       * @return DescribeZoneInfoResponse
       */
      Models::DescribeZoneInfoResponse describeZoneInfo(const Models::DescribeZoneInfoRequest &request);

      /**
       * @summary Queries the information about a Domain Name System (DNS) record.
       *
       * @param request DescribeZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneRecordResponse
       */
      Models::DescribeZoneRecordResponse describeZoneRecordWithOptions(const Models::DescribeZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Domain Name System (DNS) record.
       *
       * @param request DescribeZoneRecordRequest
       * @return DescribeZoneRecordResponse
       */
      Models::DescribeZoneRecordResponse describeZoneRecord(const Models::DescribeZoneRecordRequest &request);

      /**
       * @summary Queries a list of Domain Name System (DNS) records.
       *
       * @param request DescribeZoneRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneRecordsResponse
       */
      Models::DescribeZoneRecordsResponse describeZoneRecordsWithOptions(const Models::DescribeZoneRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Domain Name System (DNS) records.
       *
       * @param request DescribeZoneRecordsRequest
       * @return DescribeZoneRecordsResponse
       */
      Models::DescribeZoneRecordsResponse describeZoneRecords(const Models::DescribeZoneRecordsRequest &request);

      /**
       * @summary Queries a list of zones within the current account and a list of virtual private clouds (VPCs) associated with the zones.
       *
       * @description We recommend that you do not call this API operation due to its poor performance. Instead, you can call the DescribeZones operation to query a list of zones. If you want to query the information about VPCs with which a zone is associated, you can call the DescribeZoneInfo operation based on the zone ID.
       *
       * @param request DescribeZoneVpcTreeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZoneVpcTreeResponse
       */
      Models::DescribeZoneVpcTreeResponse describeZoneVpcTreeWithOptions(const Models::DescribeZoneVpcTreeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of zones within the current account and a list of virtual private clouds (VPCs) associated with the zones.
       *
       * @description We recommend that you do not call this API operation due to its poor performance. Instead, you can call the DescribeZones operation to query a list of zones. If you want to query the information about VPCs with which a zone is associated, you can call the DescribeZoneInfo operation based on the zone ID.
       *
       * @param request DescribeZoneVpcTreeRequest
       * @return DescribeZoneVpcTreeResponse
       */
      Models::DescribeZoneVpcTreeResponse describeZoneVpcTree(const Models::DescribeZoneVpcTreeRequest &request);

      /**
       * @summary Queries a list of zones within the current account.
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of zones within the current account.
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Queries a list of tags added to zones.
       *
       * @description #### [](#)**Precautions**
       * You can call this API operation to query tags added only to zones.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags added to zones.
       *
       * @description #### [](#)**Precautions**
       * You can call this API operation to query tags added only to zones.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Changes a resource group.
       *
       * @description #### [](#)Precautions
       * You can call this API operation to change a resource group only for a zone.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes a resource group.
       *
       * @description #### [](#)Precautions
       * You can call this API operation to change a resource group only for a zone.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Queries a list of custom lines.
       *
       * @param request SearchCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCustomLinesResponse
       */
      Models::SearchCustomLinesResponse searchCustomLinesWithOptions(const Models::SearchCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of custom lines.
       *
       * @param request SearchCustomLinesRequest
       * @return SearchCustomLinesResponse
       */
      Models::SearchCustomLinesResponse searchCustomLines(const Models::SearchCustomLinesRequest &request);

      /**
       * @summary Enables the recursive resolution proxy for subdomain names.
       *
       * @param request SetProxyPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetProxyPatternResponse
       */
      Models::SetProxyPatternResponse setProxyPatternWithOptions(const Models::SetProxyPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the recursive resolution proxy for subdomain names.
       *
       * @param request SetProxyPatternRequest
       * @return SetProxyPatternResponse
       */
      Models::SetProxyPatternResponse setProxyPattern(const Models::SetProxyPatternRequest &request);

      /**
       * @summary Enables or disables a Domain Name System (DNS) record.
       *
       * @param request SetZoneRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetZoneRecordStatusResponse
       */
      Models::SetZoneRecordStatusResponse setZoneRecordStatusWithOptions(const Models::SetZoneRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a Domain Name System (DNS) record.
       *
       * @param request SetZoneRecordStatusRequest
       * @return SetZoneRecordStatusResponse
       */
      Models::SetZoneRecordStatusResponse setZoneRecordStatus(const Models::SetZoneRecordStatusRequest &request);

      /**
       * @summary Adds or modifies tags for zones.
       *
       * @description ##### [](#)Precautions
       * You can configure tags only for zones.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies tags for zones.
       *
       * @description ##### [](#)Precautions
       * You can configure tags only for zones.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes the tags of multiple zones at a time.
       *
       * @description #### [](#)**Precautions**
       * You can call this API operation to remove tags added only to zones.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the tags of multiple zones at a time.
       *
       * @description #### [](#)**Precautions**
       * You can call this API operation to remove tags added only to zones.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies a custom line.
       *
       * @param request UpdateCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLineWithOptions(const Models::UpdateCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom line.
       *
       * @param request UpdateCustomLineRequest
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLine(const Models::UpdateCustomLineRequest &request);

      /**
       * @summary Modifies the description of a Domain Name System (DNS) record based on the record ID.
       *
       * @param request UpdateRecordRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecordRemarkResponse
       */
      Models::UpdateRecordRemarkResponse updateRecordRemarkWithOptions(const Models::UpdateRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a Domain Name System (DNS) record based on the record ID.
       *
       * @param request UpdateRecordRemarkRequest
       * @return UpdateRecordRemarkResponse
       */
      Models::UpdateRecordRemarkResponse updateRecordRemark(const Models::UpdateRecordRemarkRequest &request);

      /**
       * @summary Modifies an endpoint.
       *
       * @param request UpdateResolverEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResolverEndpointResponse
       */
      Models::UpdateResolverEndpointResponse updateResolverEndpointWithOptions(const Models::UpdateResolverEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an endpoint.
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
       * @summary Adds or updates a hostname synchronization task.
       *
       * @param request UpdateSyncEcsHostTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSyncEcsHostTaskResponse
       */
      Models::UpdateSyncEcsHostTaskResponse updateSyncEcsHostTaskWithOptions(const Models::UpdateSyncEcsHostTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or updates a hostname synchronization task.
       *
       * @param request UpdateSyncEcsHostTaskRequest
       * @return UpdateSyncEcsHostTaskResponse
       */
      Models::UpdateSyncEcsHostTaskResponse updateSyncEcsHostTask(const Models::UpdateSyncEcsHostTaskRequest &request);

      /**
       * @summary Modifies a Domain Name System (DNS) record of a zone, including the hostname, record value, and weight value of the DNS record.
       *
       * @description #### **Precautions**
       * The DNS record modification for a zone in the regular module takes effect only after the time to live (TTL) expires. The DNS record modification for a zone in the acceleration module takes effect immediately.
       *
       * @param request UpdateZoneRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateZoneRecordResponse
       */
      Models::UpdateZoneRecordResponse updateZoneRecordWithOptions(const Models::UpdateZoneRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Domain Name System (DNS) record of a zone, including the hostname, record value, and weight value of the DNS record.
       *
       * @description #### **Precautions**
       * The DNS record modification for a zone in the regular module takes effect only after the time to live (TTL) expires. The DNS record modification for a zone in the acceleration module takes effect immediately.
       *
       * @param request UpdateZoneRecordRequest
       * @return UpdateZoneRecordResponse
       */
      Models::UpdateZoneRecordResponse updateZoneRecord(const Models::UpdateZoneRecordRequest &request);

      /**
       * @summary Modifies the description of a built-in authoritative zone.
       *
       * @param request UpdateZoneRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateZoneRemarkResponse
       */
      Models::UpdateZoneRemarkResponse updateZoneRemarkWithOptions(const Models::UpdateZoneRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a built-in authoritative zone.
       *
       * @param request UpdateZoneRemarkRequest
       * @return UpdateZoneRemarkResponse
       */
      Models::UpdateZoneRemarkResponse updateZoneRemark(const Models::UpdateZoneRemarkRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
