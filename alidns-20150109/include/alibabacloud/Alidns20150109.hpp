// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIDNS20150109_HPP_
#define ALIBABACLOUD_ALIDNS20150109_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Alidns20150109Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Alidns20150109.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a custom line for a domain name.
       *
       * @description The end IP address of an IP address segment must be greater than or equal to its start IP address.
       * The IP address ranges of segments cannot overlap across any custom lines for the domain name.
       *
       * @param request AddCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomLineResponse
       */
      Models::AddCustomLineResponse addCustomLineWithOptions(const Models::AddCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom line for a domain name.
       *
       * @description The end IP address of an IP address segment must be greater than or equal to its start IP address.
       * The IP address ranges of segments cannot overlap across any custom lines for the domain name.
       *
       * @param request AddCustomLineRequest
       * @return AddCustomLineResponse
       */
      Models::AddCustomLineResponse addCustomLine(const Models::AddCustomLineRequest &request);

      /**
       * @summary Adds a domain name to the DNS authoritative proxy service.
       *
       * @param request AddDnsCacheDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsCacheDomainResponse
       */
      Models::AddDnsCacheDomainResponse addDnsCacheDomainWithOptions(const Models::AddDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to the DNS authoritative proxy service.
       *
       * @param request AddDnsCacheDomainRequest
       * @return AddDnsCacheDomainResponse
       */
      Models::AddDnsCacheDomainResponse addDnsCacheDomain(const Models::AddDnsCacheDomainRequest &request);

      /**
       * @summary Adds an access strategy.
       *
       * @param request AddDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsGtmAccessStrategyResponse
       */
      Models::AddDnsGtmAccessStrategyResponse addDnsGtmAccessStrategyWithOptions(const Models::AddDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an access strategy.
       *
       * @param request AddDnsGtmAccessStrategyRequest
       * @return AddDnsGtmAccessStrategyResponse
       */
      Models::AddDnsGtmAccessStrategyResponse addDnsGtmAccessStrategy(const Models::AddDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Adds an address pool.
       *
       * @param request AddDnsGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsGtmAddressPoolResponse
       */
      Models::AddDnsGtmAddressPoolResponse addDnsGtmAddressPoolWithOptions(const Models::AddDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an address pool.
       *
       * @param request AddDnsGtmAddressPoolRequest
       * @return AddDnsGtmAddressPoolResponse
       */
      Models::AddDnsGtmAddressPoolResponse addDnsGtmAddressPool(const Models::AddDnsGtmAddressPoolRequest &request);

      /**
       * @summary Creates a health check.
       *
       * @description ***
       *
       * @param request AddDnsGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDnsGtmMonitorResponse
       */
      Models::AddDnsGtmMonitorResponse addDnsGtmMonitorWithOptions(const Models::AddDnsGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a health check.
       *
       * @description ***
       *
       * @param request AddDnsGtmMonitorRequest
       * @return AddDnsGtmMonitorResponse
       */
      Models::AddDnsGtmMonitorResponse addDnsGtmMonitor(const Models::AddDnsGtmMonitorRequest &request);

      /**
       * @summary Adds a domain name.
       *
       * @description For more information, see <props="china">[Domain name validity](https://help.aliyun.com/document_detail/67788.html)<props="intl">[Domain name validity](https://www.alibabacloud.com/help/zh/doc-detail/67788.htm).
       *
       * @param request AddDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomainWithOptions(const Models::AddDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name.
       *
       * @description For more information, see <props="china">[Domain name validity](https://help.aliyun.com/document_detail/67788.html)<props="intl">[Domain name validity](https://www.alibabacloud.com/help/zh/doc-detail/67788.htm).
       *
       * @param request AddDomainRequest
       * @return AddDomainResponse
       */
      Models::AddDomainResponse addDomain(const Models::AddDomainRequest &request);

      /**
       * @summary Creates a backup for a domain based on the specified domain name and backup cycle.
       *
       * @param request AddDomainBackupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainBackupResponse
       */
      Models::AddDomainBackupResponse addDomainBackupWithOptions(const Models::AddDomainBackupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a backup for a domain based on the specified domain name and backup cycle.
       *
       * @param request AddDomainBackupRequest
       * @return AddDomainBackupResponse
       */
      Models::AddDomainBackupResponse addDomainBackup(const Models::AddDomainBackupRequest &request);

      /**
       * @summary Creates a domain name group.
       *
       * @param request AddDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainGroupResponse
       */
      Models::AddDomainGroupResponse addDomainGroupWithOptions(const Models::AddDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a domain name group.
       *
       * @param request AddDomainGroupRequest
       * @return AddDomainGroupResponse
       */
      Models::AddDomainGroupResponse addDomainGroup(const Models::AddDomainGroupRequest &request);

      /**
       * @summary Adds a DNS record.
       *
       * @param request AddDomainRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDomainRecordResponse
       */
      Models::AddDomainRecordResponse addDomainRecordWithOptions(const Models::AddDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a DNS record.
       *
       * @param request AddDomainRecordRequest
       * @return AddDomainRecordResponse
       */
      Models::AddDomainRecordResponse addDomainRecord(const Models::AddDomainRecordRequest &request);

      /**
       * @summary Creates an access strategy based on the specified parameters.
       *
       * @param request AddGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmAccessStrategyResponse
       */
      Models::AddGtmAccessStrategyResponse addGtmAccessStrategyWithOptions(const Models::AddGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access strategy based on the specified parameters.
       *
       * @param request AddGtmAccessStrategyRequest
       * @return AddGtmAccessStrategyResponse
       */
      Models::AddGtmAccessStrategyResponse addGtmAccessStrategy(const Models::AddGtmAccessStrategyRequest &request);

      /**
       * @summary Adds an address pool.
       *
       * @param request AddGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmAddressPoolResponse
       */
      Models::AddGtmAddressPoolResponse addGtmAddressPoolWithOptions(const Models::AddGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an address pool.
       *
       * @param request AddGtmAddressPoolRequest
       * @return AddGtmAddressPoolResponse
       */
      Models::AddGtmAddressPoolResponse addGtmAddressPool(const Models::AddGtmAddressPoolRequest &request);

      /**
       * @summary Adds a health check.
       *
       * @param request AddGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmMonitorResponse
       */
      Models::AddGtmMonitorResponse addGtmMonitorWithOptions(const Models::AddGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a health check.
       *
       * @param request AddGtmMonitorRequest
       * @return AddGtmMonitorResponse
       */
      Models::AddGtmMonitorResponse addGtmMonitor(const Models::AddGtmMonitorRequest &request);

      /**
       * @summary Adds a disaster recovery plan.
       *
       * @param request AddGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGtmRecoveryPlanResponse
       */
      Models::AddGtmRecoveryPlanResponse addGtmRecoveryPlanWithOptions(const Models::AddGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a disaster recovery plan.
       *
       * @param request AddGtmRecoveryPlanRequest
       * @return AddGtmRecoveryPlanResponse
       */
      Models::AddGtmRecoveryPlanResponse addGtmRecoveryPlan(const Models::AddGtmRecoveryPlanRequest &request);

      /**
       * @summary Adds an authoritative record for recursive resolution.
       *
       * @description - You can specify a domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve the list of DNS records for that domain name.
       * - To find DNS records that contain a specific keyword, you can specify the keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord).
       * - By default, the list of DNS records is sorted from newest to oldest.
       * - You can specify a domain group ID (GroupId). The \\`All Domains\\` group includes all domain names. The \\`Default Group\\` includes domain names that are not assigned to a group.
       *
       * @param request AddRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecursionRecordResponse
       */
      Models::AddRecursionRecordResponse addRecursionRecordWithOptions(const Models::AddRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an authoritative record for recursive resolution.
       *
       * @description - You can specify a domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve the list of DNS records for that domain name.
       * - To find DNS records that contain a specific keyword, you can specify the keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord).
       * - By default, the list of DNS records is sorted from newest to oldest.
       * - You can specify a domain group ID (GroupId). The \\`All Domains\\` group includes all domain names. The \\`Default Group\\` includes domain names that are not assigned to a group.
       *
       * @param request AddRecursionRecordRequest
       * @return AddRecursionRecordResponse
       */
      Models::AddRecursionRecordResponse addRecursionRecord(const Models::AddRecursionRecordRequest &request);

      /**
       * @summary Adds a built-in authoritative domain name zone for recursive resolution.
       *
       * @description The end IP address of each IP range must be greater than or equal to the start IP address.
       * The IP address ranges of all IP ranges in all custom lines for a domain name cannot overlap.
       *
       * @param request AddRecursionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRecursionZoneResponse
       */
      Models::AddRecursionZoneResponse addRecursionZoneWithOptions(const Models::AddRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a built-in authoritative domain name zone for recursive resolution.
       *
       * @description The end IP address of each IP range must be greater than or equal to the start IP address.
       * The IP address ranges of all IP ranges in all custom lines for a domain name cannot overlap.
       *
       * @param request AddRecursionZoneRequest
       * @return AddRecursionZoneResponse
       */
      Models::AddRecursionZoneResponse addRecursionZone(const Models::AddRecursionZoneRequest &request);

      /**
       * @summary Adds the serverHold status to a specified domain name.
       *
       * @description ## Request description
       * - This API adds the serverHold property to a specified domain name.
       *
       * @param request AddRspDomainServerHoldStatusForGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRspDomainServerHoldStatusForGatewayResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayResponse addRspDomainServerHoldStatusForGatewayWithOptions(const Models::AddRspDomainServerHoldStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the serverHold status to a specified domain name.
       *
       * @description ## Request description
       * - This API adds the serverHold property to a specified domain name.
       *
       * @param request AddRspDomainServerHoldStatusForGatewayRequest
       * @return AddRspDomainServerHoldStatusForGatewayResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayResponse addRspDomainServerHoldStatusForGateway(const Models::AddRspDomainServerHoldStatusForGatewayRequest &request);

      /**
       * @summary Adds the serverHold status for a specified domain name.
       *
       * @description ## Request description
       * - Adds the serverHold status for a specified domain name.
       *
       * @param request AddRspDomainServerHoldStatusForGatewayOteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayOteResponse addRspDomainServerHoldStatusForGatewayOteWithOptions(const Models::AddRspDomainServerHoldStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the serverHold status for a specified domain name.
       *
       * @description ## Request description
       * - Adds the serverHold status for a specified domain name.
       *
       * @param request AddRspDomainServerHoldStatusForGatewayOteRequest
       * @return AddRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::AddRspDomainServerHoldStatusForGatewayOteResponse addRspDomainServerHoldStatusForGatewayOte(const Models::AddRspDomainServerHoldStatusForGatewayOteRequest &request);

      /**
       * @summary Binds paid domain names in Alibaba Cloud DNS to an instance ID.
       *
       * @description An instance is considered a new instance if its ID starts with \\"dns-\\". New instances support multiple domain names. You can call this operation to bind domain names directly to the instance. An error occurs if the number of domain names exceeds the instance\\"s limit.
       * An instance is considered a legacy instance if its ID does not start with \\"dns-\\". Legacy instances support only one domain name. If you call this operation on a legacy instance that already has a domain name, the existing domain name is replaced.
       *
       * @param request BindInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindInstanceDomainsResponse
       */
      Models::BindInstanceDomainsResponse bindInstanceDomainsWithOptions(const Models::BindInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds paid domain names in Alibaba Cloud DNS to an instance ID.
       *
       * @description An instance is considered a new instance if its ID starts with \\"dns-\\". New instances support multiple domain names. You can call this operation to bind domain names directly to the instance. An error occurs if the number of domain names exceeds the instance\\"s limit.
       * An instance is considered a legacy instance if its ID does not start with \\"dns-\\". Legacy instances support only one domain name. If you call this operation on a legacy instance that already has a domain name, the existing domain name is replaced.
       *
       * @param request BindInstanceDomainsRequest
       * @return BindInstanceDomainsResponse
       */
      Models::BindInstanceDomainsResponse bindInstanceDomains(const Models::BindInstanceDomainsRequest &request);

      /**
       * @summary Moves a domain name to a new group.
       *
       * @description You can specify the ID of a domain name group (GroupId). The All Domains group contains all domain names, while the Default group contains domain names that are not assigned to any group.
       *
       * @param request ChangeDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDomainGroupResponse
       */
      Models::ChangeDomainGroupResponse changeDomainGroupWithOptions(const Models::ChangeDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a domain name to a new group.
       *
       * @description You can specify the ID of a domain name group (GroupId). The All Domains group contains all domain names, while the Default group contains domain names that are not assigned to any group.
       *
       * @param request ChangeDomainGroupRequest
       * @return ChangeDomainGroupResponse
       */
      Models::ChangeDomainGroupResponse changeDomainGroup(const Models::ChangeDomainGroupRequest &request);

      /**
       * @summary Changes the domain name that is attached to a Cloud DNS product.
       *
       * @description - **You can call this operation to change the domain name that is attached to a Cloud DNS product. To detach a domain name, call this operation and leave the NewDomain parameter empty.**
       * - **This operation applies to instances of earlier versions. If you use a new edition, such as Personal Edition, Enterprise Standard Edition, or Enterprise Ultimate Edition, call the BindInstanceDomains operation instead.**
       *
       * @param request ChangeDomainOfDnsProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDomainOfDnsProductResponse
       */
      Models::ChangeDomainOfDnsProductResponse changeDomainOfDnsProductWithOptions(const Models::ChangeDomainOfDnsProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the domain name that is attached to a Cloud DNS product.
       *
       * @description - **You can call this operation to change the domain name that is attached to a Cloud DNS product. To detach a domain name, call this operation and leave the NewDomain parameter empty.**
       * - **This operation applies to instances of earlier versions. If you use a new edition, such as Personal Edition, Enterprise Standard Edition, or Enterprise Ultimate Edition, call the BindInstanceDomains operation instead.**
       *
       * @param request ChangeDomainOfDnsProductRequest
       * @return ChangeDomainOfDnsProductResponse
       */
      Models::ChangeDomainOfDnsProductResponse changeDomainOfDnsProduct(const Models::ChangeDomainOfDnsProductRequest &request);

      /**
       * @summary Copies a Global Traffic Manager (GTM) configuration.
       *
       * @param request CopyGtmConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopyGtmConfigResponse
       */
      Models::CopyGtmConfigResponse copyGtmConfigWithOptions(const Models::CopyGtmConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a Global Traffic Manager (GTM) configuration.
       *
       * @param request CopyGtmConfigRequest
       * @return CopyGtmConfigResponse
       */
      Models::CopyGtmConfigResponse copyGtmConfig(const Models::CopyGtmConfigRequest &request);

      /**
       * @summary Registers an agent.
       *
       * @param tmpReq CreateAtiAgentRegisterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAtiAgentRegisterInfoResponse
       */
      Models::CreateAtiAgentRegisterInfoResponse createAtiAgentRegisterInfoWithOptions(const Models::CreateAtiAgentRegisterInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers an agent.
       *
       * @param request CreateAtiAgentRegisterInfoRequest
       * @return CreateAtiAgentRegisterInfoResponse
       */
      Models::CreateAtiAgentRegisterInfoResponse createAtiAgentRegisterInfo(const Models::CreateAtiAgentRegisterInfoRequest &request);

      /**
       * @summary Registers an agent - Step 2: Generates a DNS record for domain ownership verification.
       *
       * @param request CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse
       */
      Models::CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse createAtiAgentRegisterInfoAcmeChallengeRecordWithOptions(const Models::CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Registers an agent - Step 2: Generates a DNS record for domain ownership verification.
       *
       * @param request CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest
       * @return CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse
       */
      Models::CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse createAtiAgentRegisterInfoAcmeChallengeRecord(const Models::CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest &request);

      /**
       * @summary Submits a real-name registrant.
       *
       * @param request CreateAtiRegistrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAtiRegistrantResponse
       */
      Models::CreateAtiRegistrantResponse createAtiRegistrantWithOptions(const Models::CreateAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a real-name registrant.
       *
       * @param request CreateAtiRegistrantRequest
       * @return CreateAtiRegistrantResponse
       */
      Models::CreateAtiRegistrantResponse createAtiRegistrant(const Models::CreateAtiRegistrantRequest &request);

      /**
       * @summary Creates an address in Global Traffic Manager (GTM) 3.0.
       *
       * @param tmpReq CreateCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmAddressResponse
       */
      Models::CreateCloudGtmAddressResponse createCloudGtmAddressWithOptions(const Models::CreateCloudGtmAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address in Global Traffic Manager (GTM) 3.0.
       *
       * @param request CreateCloudGtmAddressRequest
       * @return CreateCloudGtmAddressResponse
       */
      Models::CreateCloudGtmAddressResponse createCloudGtmAddress(const Models::CreateCloudGtmAddressRequest &request);

      /**
       * @summary Creates an address pool based on the specified parameters.
       *
       * @param request CreateCloudGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmAddressPoolResponse
       */
      Models::CreateCloudGtmAddressPoolResponse createCloudGtmAddressPoolWithOptions(const Models::CreateCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an address pool based on the specified parameters.
       *
       * @param request CreateCloudGtmAddressPoolRequest
       * @return CreateCloudGtmAddressPoolResponse
       */
      Models::CreateCloudGtmAddressPoolResponse createCloudGtmAddressPool(const Models::CreateCloudGtmAddressPoolRequest &request);

      /**
       * @summary Creates a configuration for a Global Traffic Manager (GTM) instance.
       *
       * @param request CreateCloudGtmInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmInstanceConfigResponse
       */
      Models::CreateCloudGtmInstanceConfigResponse createCloudGtmInstanceConfigWithOptions(const Models::CreateCloudGtmInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a configuration for a Global Traffic Manager (GTM) instance.
       *
       * @param request CreateCloudGtmInstanceConfigRequest
       * @return CreateCloudGtmInstanceConfigResponse
       */
      Models::CreateCloudGtmInstanceConfigResponse createCloudGtmInstanceConfig(const Models::CreateCloudGtmInstanceConfigRequest &request);

      /**
       * @summary Creates a health check template in Global Traffic Manager (GTM) 3.0.
       *
       * @param tmpReq CreateCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudGtmMonitorTemplateResponse
       */
      Models::CreateCloudGtmMonitorTemplateResponse createCloudGtmMonitorTemplateWithOptions(const Models::CreateCloudGtmMonitorTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a health check template in Global Traffic Manager (GTM) 3.0.
       *
       * @param request CreateCloudGtmMonitorTemplateRequest
       * @return CreateCloudGtmMonitorTemplateResponse
       */
      Models::CreateCloudGtmMonitorTemplateResponse createCloudGtmMonitorTemplate(const Models::CreateCloudGtmMonitorTemplateRequest &request);

      /**
       * @summary Creates a public DNS AccessKey.
       *
       * @param request CreatePdnsAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdnsAppKeyResponse
       */
      Models::CreatePdnsAppKeyResponse createPdnsAppKeyWithOptions(const Models::CreatePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a public DNS AccessKey.
       *
       * @param request CreatePdnsAppKeyRequest
       * @return CreatePdnsAppKeyResponse
       */
      Models::CreatePdnsAppKeyResponse createPdnsAppKey(const Models::CreatePdnsAppKeyRequest &request);

      /**
       * @summary Create Public DNS UDP IP Address Segment
       *
       * @param request CreatePdnsUdpIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePdnsUdpIpSegmentResponse
       */
      Models::CreatePdnsUdpIpSegmentResponse createPdnsUdpIpSegmentWithOptions(const Models::CreatePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Public DNS UDP IP Address Segment
       *
       * @param request CreatePdnsUdpIpSegmentRequest
       * @return CreatePdnsUdpIpSegmentResponse
       */
      Models::CreatePdnsUdpIpSegmentResponse createPdnsUdpIpSegment(const Models::CreatePdnsUdpIpSegmentRequest &request);

      /**
       * @summary Deletes Agent registration information.
       *
       * @param request DeleteAtiAgentRegisterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAtiAgentRegisterInfoResponse
       */
      Models::DeleteAtiAgentRegisterInfoResponse deleteAtiAgentRegisterInfoWithOptions(const Models::DeleteAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes Agent registration information.
       *
       * @param request DeleteAtiAgentRegisterInfoRequest
       * @return DeleteAtiAgentRegisterInfoResponse
       */
      Models::DeleteAtiAgentRegisterInfoResponse deleteAtiAgentRegisterInfo(const Models::DeleteAtiAgentRegisterInfoRequest &request);

      /**
       * @summary Revokes a verified registrant.
       *
       * @param request DeleteAtiRegistrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAtiRegistrantResponse
       */
      Models::DeleteAtiRegistrantResponse deleteAtiRegistrantWithOptions(const Models::DeleteAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a verified registrant.
       *
       * @param request DeleteAtiRegistrantRequest
       * @return DeleteAtiRegistrantResponse
       */
      Models::DeleteAtiRegistrantResponse deleteAtiRegistrant(const Models::DeleteAtiRegistrantRequest &request);

      /**
       * @summary Deletes an address.
       *
       * @param request DeleteCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmAddressResponse
       */
      Models::DeleteCloudGtmAddressResponse deleteCloudGtmAddressWithOptions(const Models::DeleteCloudGtmAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an address.
       *
       * @param request DeleteCloudGtmAddressRequest
       * @return DeleteCloudGtmAddressResponse
       */
      Models::DeleteCloudGtmAddressResponse deleteCloudGtmAddress(const Models::DeleteCloudGtmAddressRequest &request);

      /**
       * @summary Deletes an address pool.
       *
       * @param request DeleteCloudGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmAddressPoolResponse
       */
      Models::DeleteCloudGtmAddressPoolResponse deleteCloudGtmAddressPoolWithOptions(const Models::DeleteCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an address pool.
       *
       * @param request DeleteCloudGtmAddressPoolRequest
       * @return DeleteCloudGtmAddressPoolResponse
       */
      Models::DeleteCloudGtmAddressPoolResponse deleteCloudGtmAddressPool(const Models::DeleteCloudGtmAddressPoolRequest &request);

      /**
       * @summary Deletes an access domain name from the configuration of a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request DeleteCloudGtmInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmInstanceConfigResponse
       */
      Models::DeleteCloudGtmInstanceConfigResponse deleteCloudGtmInstanceConfigWithOptions(const Models::DeleteCloudGtmInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access domain name from the configuration of a Global Traffic Manager (GTM) 3.0 instance.
       *
       * @param request DeleteCloudGtmInstanceConfigRequest
       * @return DeleteCloudGtmInstanceConfigResponse
       */
      Models::DeleteCloudGtmInstanceConfigResponse deleteCloudGtmInstanceConfig(const Models::DeleteCloudGtmInstanceConfigRequest &request);

      /**
       * @summary Deletes a health check template.
       *
       * @param request DeleteCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudGtmMonitorTemplateResponse
       */
      Models::DeleteCloudGtmMonitorTemplateResponse deleteCloudGtmMonitorTemplateWithOptions(const Models::DeleteCloudGtmMonitorTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a health check template.
       *
       * @param request DeleteCloudGtmMonitorTemplateRequest
       * @return DeleteCloudGtmMonitorTemplateResponse
       */
      Models::DeleteCloudGtmMonitorTemplateResponse deleteCloudGtmMonitorTemplate(const Models::DeleteCloudGtmMonitorTemplateRequest &request);

      /**
       * @summary Deletes a batch of custom lines by specifying their unique IDs.
       *
       * @param request DeleteCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomLinesResponse
       */
      Models::DeleteCustomLinesResponse deleteCustomLinesWithOptions(const Models::DeleteCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a batch of custom lines by specifying their unique IDs.
       *
       * @param request DeleteCustomLinesRequest
       * @return DeleteCustomLinesResponse
       */
      Models::DeleteCustomLinesResponse deleteCustomLines(const Models::DeleteCustomLinesRequest &request);

      /**
       * @summary Deletes a specified domain name from the authoritative DNS proxy.
       *
       * @param request DeleteDnsCacheDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsCacheDomainResponse
       */
      Models::DeleteDnsCacheDomainResponse deleteDnsCacheDomainWithOptions(const Models::DeleteDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified domain name from the authoritative DNS proxy.
       *
       * @param request DeleteDnsCacheDomainRequest
       * @return DeleteDnsCacheDomainResponse
       */
      Models::DeleteDnsCacheDomainResponse deleteDnsCacheDomain(const Models::DeleteDnsCacheDomainRequest &request);

      /**
       * @summary Deletes an access policy by its ID.
       *
       * @param request DeleteDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsGtmAccessStrategyResponse
       */
      Models::DeleteDnsGtmAccessStrategyResponse deleteDnsGtmAccessStrategyWithOptions(const Models::DeleteDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access policy by its ID.
       *
       * @param request DeleteDnsGtmAccessStrategyRequest
       * @return DeleteDnsGtmAccessStrategyResponse
       */
      Models::DeleteDnsGtmAccessStrategyResponse deleteDnsGtmAccessStrategy(const Models::DeleteDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Deletes an address pool by its ID.
       *
       * @param request DeleteDnsGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDnsGtmAddressPoolResponse
       */
      Models::DeleteDnsGtmAddressPoolResponse deleteDnsGtmAddressPoolWithOptions(const Models::DeleteDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an address pool by its ID.
       *
       * @param request DeleteDnsGtmAddressPoolRequest
       * @return DeleteDnsGtmAddressPoolResponse
       */
      Models::DeleteDnsGtmAddressPoolResponse deleteDnsGtmAddressPool(const Models::DeleteDnsGtmAddressPoolRequest &request);

      /**
       * @summary Deletes the specified domain name.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified domain name.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Deletes a domain name group and moves its domain names to the default group.
       *
       * @description > The default group cannot be deleted.
       *
       * @param request DeleteDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroupWithOptions(const Models::DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a domain name group and moves its domain names to the default group.
       *
       * @description > The default group cannot be deleted.
       *
       * @param request DeleteDomainGroupRequest
       * @return DeleteDomainGroupResponse
       */
      Models::DeleteDomainGroupResponse deleteDomainGroup(const Models::DeleteDomainGroupRequest &request);

      /**
       * @summary Deletes a DNS record based on the specified request parameters.
       *
       * @param request DeleteDomainRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainRecordResponse
       */
      Models::DeleteDomainRecordResponse deleteDomainRecordWithOptions(const Models::DeleteDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a DNS record based on the specified request parameters.
       *
       * @param request DeleteDomainRecordRequest
       * @return DeleteDomainRecordResponse
       */
      Models::DeleteDomainRecordResponse deleteDomainRecord(const Models::DeleteDomainRecordRequest &request);

      /**
       * @summary Deletes an access policy.
       *
       * @param request DeleteGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGtmAccessStrategyResponse
       */
      Models::DeleteGtmAccessStrategyResponse deleteGtmAccessStrategyWithOptions(const Models::DeleteGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access policy.
       *
       * @param request DeleteGtmAccessStrategyRequest
       * @return DeleteGtmAccessStrategyResponse
       */
      Models::DeleteGtmAccessStrategyResponse deleteGtmAccessStrategy(const Models::DeleteGtmAccessStrategyRequest &request);

      /**
       * @summary Deletes an address pool.
       *
       * @param request DeleteGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGtmAddressPoolResponse
       */
      Models::DeleteGtmAddressPoolResponse deleteGtmAddressPoolWithOptions(const Models::DeleteGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an address pool.
       *
       * @param request DeleteGtmAddressPoolRequest
       * @return DeleteGtmAddressPoolResponse
       */
      Models::DeleteGtmAddressPoolResponse deleteGtmAddressPool(const Models::DeleteGtmAddressPoolRequest &request);

      /**
       * @summary Deletes a disaster recovery plan.
       *
       * @param request DeleteGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGtmRecoveryPlanResponse
       */
      Models::DeleteGtmRecoveryPlanResponse deleteGtmRecoveryPlanWithOptions(const Models::DeleteGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a disaster recovery plan.
       *
       * @param request DeleteGtmRecoveryPlanRequest
       * @return DeleteGtmRecoveryPlanResponse
       */
      Models::DeleteGtmRecoveryPlanResponse deleteGtmRecoveryPlan(const Models::DeleteGtmRecoveryPlanRequest &request);

      /**
       * @summary Deletes a built-in authoritative DNS record used for recursive resolution.
       *
       * @param request DeleteRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecursionRecordResponse
       */
      Models::DeleteRecursionRecordResponse deleteRecursionRecordWithOptions(const Models::DeleteRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a built-in authoritative DNS record used for recursive resolution.
       *
       * @param request DeleteRecursionRecordRequest
       * @return DeleteRecursionRecordResponse
       */
      Models::DeleteRecursionRecordResponse deleteRecursionRecord(const Models::DeleteRecursionRecordRequest &request);

      /**
       * @summary Deletes a built-in authoritative zone used for recursive resolution.
       *
       * @description If a zone contains locked DNS records, this operation does not delete them.
       *
       * @param request DeleteRecursionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRecursionZoneResponse
       */
      Models::DeleteRecursionZoneResponse deleteRecursionZoneWithOptions(const Models::DeleteRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a built-in authoritative zone used for recursive resolution.
       *
       * @description If a zone contains locked DNS records, this operation does not delete them.
       *
       * @param request DeleteRecursionZoneRequest
       * @return DeleteRecursionZoneResponse
       */
      Models::DeleteRecursionZoneResponse deleteRecursionZone(const Models::DeleteRecursionZoneRequest &request);

      /**
       * @summary Deletes the DNS records for a specified host record.
       *
       * @description Locked DNS records will not be deleted.
       *
       * @param request DeleteSubDomainRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubDomainRecordsResponse
       */
      Models::DeleteSubDomainRecordsResponse deleteSubDomainRecordsWithOptions(const Models::DeleteSubDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the DNS records for a specified host record.
       *
       * @description Locked DNS records will not be deleted.
       *
       * @param request DeleteSubDomainRecordsRequest
       * @return DeleteSubDomainRecordsResponse
       */
      Models::DeleteSubDomainRecordsResponse deleteSubDomainRecords(const Models::DeleteSubDomainRecordsRequest &request);

      /**
       * @summary Queries the details of an Agent registration.
       *
       * @param request DescribeAtiAgentRegisterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAtiAgentRegisterInfoResponse
       */
      Models::DescribeAtiAgentRegisterInfoResponse describeAtiAgentRegisterInfoWithOptions(const Models::DescribeAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Agent registration.
       *
       * @param request DescribeAtiAgentRegisterInfoRequest
       * @return DescribeAtiAgentRegisterInfoResponse
       */
      Models::DescribeAtiAgentRegisterInfoResponse describeAtiAgentRegisterInfo(const Models::DescribeAtiAgentRegisterInfoRequest &request);

      /**
       * @summary Queries alert settings.
       *
       * @param request DescribeAtiAlertSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAtiAlertSettingsResponse
       */
      Models::DescribeAtiAlertSettingsResponse describeAtiAlertSettingsWithOptions(const Models::DescribeAtiAlertSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert settings.
       *
       * @param request DescribeAtiAlertSettingsRequest
       * @return DescribeAtiAlertSettingsResponse
       */
      Models::DescribeAtiAlertSettingsResponse describeAtiAlertSettings(const Models::DescribeAtiAlertSettingsRequest &request);

      /**
       * @summary Queries the details of a certificate.
       *
       * @param request DescribeAtiCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAtiCertificateResponse
       */
      Models::DescribeAtiCertificateResponse describeAtiCertificateWithOptions(const Models::DescribeAtiCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a certificate.
       *
       * @param request DescribeAtiCertificateRequest
       * @return DescribeAtiCertificateResponse
       */
      Models::DescribeAtiCertificateResponse describeAtiCertificate(const Models::DescribeAtiCertificateRequest &request);

      /**
       * @summary Retrieves the details of a real-name verified registrant.
       *
       * @param request DescribeAtiRegistrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAtiRegistrantResponse
       */
      Models::DescribeAtiRegistrantResponse describeAtiRegistrantWithOptions(const Models::DescribeAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a real-name verified registrant.
       *
       * @param request DescribeAtiRegistrantRequest
       * @return DescribeAtiRegistrantResponse
       */
      Models::DescribeAtiRegistrantResponse describeAtiRegistrant(const Models::DescribeAtiRegistrantRequest &request);

      /**
       * @summary Queries the execution results of a batch operation task using a task ID. If you do not specify a task ID, the results of the most recent batch task are returned.
       *
       * @param request DescribeBatchResultCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchResultCountResponse
       */
      Models::DescribeBatchResultCountResponse describeBatchResultCountWithOptions(const Models::DescribeBatchResultCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution results of a batch operation task using a task ID. If you do not specify a task ID, the results of the most recent batch task are returned.
       *
       * @param request DescribeBatchResultCountRequest
       * @return DescribeBatchResultCountResponse
       */
      Models::DescribeBatchResultCountResponse describeBatchResultCount(const Models::DescribeBatchResultCountRequest &request);

      /**
       * @summary Retrieves the details of a batch processing result.
       *
       * @description **Prerequisite: You can call this operation after the batch task is complete.**
       *
       * @param request DescribeBatchResultDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBatchResultDetailResponse
       */
      Models::DescribeBatchResultDetailResponse describeBatchResultDetailWithOptions(const Models::DescribeBatchResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a batch processing result.
       *
       * @description **Prerequisite: You can call this operation after the batch task is complete.**
       *
       * @param request DescribeBatchResultDetailRequest
       * @return DescribeBatchResultDetailResponse
       */
      Models::DescribeBatchResultDetailResponse describeBatchResultDetail(const Models::DescribeBatchResultDetailRequest &request);

      /**
       * @summary Queries the configuration of an address based on the specified input parameters.
       *
       * @param request DescribeCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressResponse
       */
      Models::DescribeCloudGtmAddressResponse describeCloudGtmAddressWithOptions(const Models::DescribeCloudGtmAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an address based on the specified input parameters.
       *
       * @param request DescribeCloudGtmAddressRequest
       * @return DescribeCloudGtmAddressResponse
       */
      Models::DescribeCloudGtmAddressResponse describeCloudGtmAddress(const Models::DescribeCloudGtmAddressRequest &request);

      /**
       * @summary Retrieves the configuration of a specified address pool.
       *
       * @param request DescribeCloudGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressPoolResponse
       */
      Models::DescribeCloudGtmAddressPoolResponse describeCloudGtmAddressPoolWithOptions(const Models::DescribeCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a specified address pool.
       *
       * @param request DescribeCloudGtmAddressPoolRequest
       * @return DescribeCloudGtmAddressPoolResponse
       */
      Models::DescribeCloudGtmAddressPoolResponse describeCloudGtmAddressPool(const Models::DescribeCloudGtmAddressPoolRequest &request);

      /**
       * @summary Retrieves information about the instances that reference an address pool.
       *
       * @param request DescribeCloudGtmAddressPoolReferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressPoolReferenceResponse
       */
      Models::DescribeCloudGtmAddressPoolReferenceResponse describeCloudGtmAddressPoolReferenceWithOptions(const Models::DescribeCloudGtmAddressPoolReferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about the instances that reference an address pool.
       *
       * @param request DescribeCloudGtmAddressPoolReferenceRequest
       * @return DescribeCloudGtmAddressPoolReferenceResponse
       */
      Models::DescribeCloudGtmAddressPoolReferenceResponse describeCloudGtmAddressPoolReference(const Models::DescribeCloudGtmAddressPoolReferenceRequest &request);

      /**
       * @summary Queries the address pools and Global Traffic Manager (GTM) 3.0 instances that reference a specified address.
       *
       * @param request DescribeCloudGtmAddressReferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmAddressReferenceResponse
       */
      Models::DescribeCloudGtmAddressReferenceResponse describeCloudGtmAddressReferenceWithOptions(const Models::DescribeCloudGtmAddressReferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the address pools and Global Traffic Manager (GTM) 3.0 instances that reference a specified address.
       *
       * @param request DescribeCloudGtmAddressReferenceRequest
       * @return DescribeCloudGtmAddressReferenceResponse
       */
      Models::DescribeCloudGtmAddressReferenceResponse describeCloudGtmAddressReference(const Models::DescribeCloudGtmAddressReferenceRequest &request);

      /**
       * @summary Queries the global alert configuration for Global Traffic Manager (GTM).
       *
       * @param request DescribeCloudGtmGlobalAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmGlobalAlertResponse
       */
      Models::DescribeCloudGtmGlobalAlertResponse describeCloudGtmGlobalAlertWithOptions(const Models::DescribeCloudGtmGlobalAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global alert configuration for Global Traffic Manager (GTM).
       *
       * @param request DescribeCloudGtmGlobalAlertRequest
       * @return DescribeCloudGtmGlobalAlertResponse
       */
      Models::DescribeCloudGtmGlobalAlertResponse describeCloudGtmGlobalAlert(const Models::DescribeCloudGtmGlobalAlertRequest &request);

      /**
       * @summary Queries the alert configuration for an instance.
       *
       * @param request DescribeCloudGtmInstanceConfigAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmInstanceConfigAlertResponse
       */
      Models::DescribeCloudGtmInstanceConfigAlertResponse describeCloudGtmInstanceConfigAlertWithOptions(const Models::DescribeCloudGtmInstanceConfigAlertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert configuration for an instance.
       *
       * @param request DescribeCloudGtmInstanceConfigAlertRequest
       * @return DescribeCloudGtmInstanceConfigAlertResponse
       */
      Models::DescribeCloudGtmInstanceConfigAlertResponse describeCloudGtmInstanceConfigAlert(const Models::DescribeCloudGtmInstanceConfigAlertRequest &request);

      /**
       * @summary Queries the full configuration of a GTM 3.0 access domain name, including alert settings, address pools, and address details.
       *
       * @param request DescribeCloudGtmInstanceConfigFullInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmInstanceConfigFullInfoResponse
       */
      Models::DescribeCloudGtmInstanceConfigFullInfoResponse describeCloudGtmInstanceConfigFullInfoWithOptions(const Models::DescribeCloudGtmInstanceConfigFullInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full configuration of a GTM 3.0 access domain name, including alert settings, address pools, and address details.
       *
       * @param request DescribeCloudGtmInstanceConfigFullInfoRequest
       * @return DescribeCloudGtmInstanceConfigFullInfoResponse
       */
      Models::DescribeCloudGtmInstanceConfigFullInfoResponse describeCloudGtmInstanceConfigFullInfo(const Models::DescribeCloudGtmInstanceConfigFullInfoRequest &request);

      /**
       * @summary Retrieves the configuration of a specified health check template.
       *
       * @param request DescribeCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmMonitorTemplateResponse
       */
      Models::DescribeCloudGtmMonitorTemplateResponse describeCloudGtmMonitorTemplateWithOptions(const Models::DescribeCloudGtmMonitorTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a specified health check template.
       *
       * @param request DescribeCloudGtmMonitorTemplateRequest
       * @return DescribeCloudGtmMonitorTemplateResponse
       */
      Models::DescribeCloudGtmMonitorTemplateResponse describeCloudGtmMonitorTemplate(const Models::DescribeCloudGtmMonitorTemplateRequest &request);

      /**
       * @param request DescribeCloudGtmSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmSummaryResponse
       */
      Models::DescribeCloudGtmSummaryResponse describeCloudGtmSummaryWithOptions(const Models::DescribeCloudGtmSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeCloudGtmSummaryRequest
       * @return DescribeCloudGtmSummaryResponse
       */
      Models::DescribeCloudGtmSummaryResponse describeCloudGtmSummary(const Models::DescribeCloudGtmSummaryRequest &request);

      /**
       * @summary Queries the system lines supported by Global Traffic Manager (GTM).
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudGtmSystemLinesResponse
       */
      Models::DescribeCloudGtmSystemLinesResponse describeCloudGtmSystemLinesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the system lines supported by Global Traffic Manager (GTM).
       *
       * @return DescribeCloudGtmSystemLinesResponse
       */
      Models::DescribeCloudGtmSystemLinesResponse describeCloudGtmSystemLines();

      /**
       * @summary Queries a custom line by its unique ID.
       *
       * @param request DescribeCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLineResponse
       */
      Models::DescribeCustomLineResponse describeCustomLineWithOptions(const Models::DescribeCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a custom line by its unique ID.
       *
       * @param request DescribeCustomLineRequest
       * @return DescribeCustomLineResponse
       */
      Models::DescribeCustomLineResponse describeCustomLine(const Models::DescribeCustomLineRequest &request);

      /**
       * @summary Queries the custom lines for a domain name.
       *
       * @param request DescribeCustomLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLinesResponse
       */
      Models::DescribeCustomLinesResponse describeCustomLinesWithOptions(const Models::DescribeCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom lines for a domain name.
       *
       * @param request DescribeCustomLinesRequest
       * @return DescribeCustomLinesResponse
       */
      Models::DescribeCustomLinesResponse describeCustomLines(const Models::DescribeCustomLinesRequest &request);

      /**
       * @summary Retrieves a list of subdomains that have weight configurations based on the specified parameters.
       *
       * @param request DescribeDNSSLBSubDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDNSSLBSubDomainsResponse
       */
      Models::DescribeDNSSLBSubDomainsResponse describeDNSSLBSubDomainsWithOptions(const Models::DescribeDNSSLBSubDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of subdomains that have weight configurations based on the specified parameters.
       *
       * @param request DescribeDNSSLBSubDomainsRequest
       * @return DescribeDNSSLBSubDomainsResponse
       */
      Models::DescribeDNSSLBSubDomainsResponse describeDNSSLBSubDomains(const Models::DescribeDNSSLBSubDomainsRequest &request);

      /**
       * @summary Queries authoritative proxy domain names based on the specified parameters.
       *
       * @param request DescribeDnsCacheDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsCacheDomainsResponse
       */
      Models::DescribeDnsCacheDomainsResponse describeDnsCacheDomainsWithOptions(const Models::DescribeDnsCacheDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries authoritative proxy domain names based on the specified parameters.
       *
       * @param request DescribeDnsCacheDomainsRequest
       * @return DescribeDnsCacheDomainsResponse
       */
      Models::DescribeDnsCacheDomainsResponse describeDnsCacheDomains(const Models::DescribeDnsCacheDomainsRequest &request);

      /**
       * @summary Queries the access strategies for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAccessStrategiesResponse
       */
      Models::DescribeDnsGtmAccessStrategiesResponse describeDnsGtmAccessStrategiesWithOptions(const Models::DescribeDnsGtmAccessStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access strategies for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAccessStrategiesRequest
       * @return DescribeDnsGtmAccessStrategiesResponse
       */
      Models::DescribeDnsGtmAccessStrategiesResponse describeDnsGtmAccessStrategies(const Models::DescribeDnsGtmAccessStrategiesRequest &request);

      /**
       * @summary Retrieves the details of a specified access strategy.
       *
       * @param request DescribeDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAccessStrategyResponse
       */
      Models::DescribeDnsGtmAccessStrategyResponse describeDnsGtmAccessStrategyWithOptions(const Models::DescribeDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified access strategy.
       *
       * @param request DescribeDnsGtmAccessStrategyRequest
       * @return DescribeDnsGtmAccessStrategyResponse
       */
      Models::DescribeDnsGtmAccessStrategyResponse describeDnsGtmAccessStrategy(const Models::DescribeDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Describes the available configurations for an access policy based on an instance ID.
       *
       * @param request DescribeDnsGtmAccessStrategyAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeDnsGtmAccessStrategyAvailableConfigResponse describeDnsGtmAccessStrategyAvailableConfigWithOptions(const Models::DescribeDnsGtmAccessStrategyAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the available configurations for an access policy based on an instance ID.
       *
       * @param request DescribeDnsGtmAccessStrategyAvailableConfigRequest
       * @return DescribeDnsGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeDnsGtmAccessStrategyAvailableConfigResponse describeDnsGtmAccessStrategyAvailableConfig(const Models::DescribeDnsGtmAccessStrategyAvailableConfigRequest &request);

      /**
       * @summary Queries the region where an address is located.
       *
       * @param request DescribeDnsGtmAddrAttributeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAddrAttributeInfoResponse
       */
      Models::DescribeDnsGtmAddrAttributeInfoResponse describeDnsGtmAddrAttributeInfoWithOptions(const Models::DescribeDnsGtmAddrAttributeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the region where an address is located.
       *
       * @param request DescribeDnsGtmAddrAttributeInfoRequest
       * @return DescribeDnsGtmAddrAttributeInfoResponse
       */
      Models::DescribeDnsGtmAddrAttributeInfoResponse describeDnsGtmAddrAttributeInfo(const Models::DescribeDnsGtmAddrAttributeInfoRequest &request);

      /**
       * @summary Queries the available configurations for an address pool in a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAddressPoolAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAddressPoolAvailableConfigResponse
       */
      Models::DescribeDnsGtmAddressPoolAvailableConfigResponse describeDnsGtmAddressPoolAvailableConfigWithOptions(const Models::DescribeDnsGtmAddressPoolAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available configurations for an address pool in a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmAddressPoolAvailableConfigRequest
       * @return DescribeDnsGtmAddressPoolAvailableConfigResponse
       */
      Models::DescribeDnsGtmAddressPoolAvailableConfigResponse describeDnsGtmAddressPoolAvailableConfig(const Models::DescribeDnsGtmAddressPoolAvailableConfigRequest &request);

      /**
       * @summary Queries the available alert contact groups.
       *
       * @param request DescribeDnsGtmAvailableAlertGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmAvailableAlertGroupResponse
       */
      Models::DescribeDnsGtmAvailableAlertGroupResponse describeDnsGtmAvailableAlertGroupWithOptions(const Models::DescribeDnsGtmAvailableAlertGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available alert contact groups.
       *
       * @param request DescribeDnsGtmAvailableAlertGroupRequest
       * @return DescribeDnsGtmAvailableAlertGroupResponse
       */
      Models::DescribeDnsGtmAvailableAlertGroupResponse describeDnsGtmAvailableAlertGroup(const Models::DescribeDnsGtmAvailableAlertGroupRequest &request);

      /**
       * @summary Queries the details of an instance based on the specified instance ID.
       *
       * @param request DescribeDnsGtmInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceResponse
       */
      Models::DescribeDnsGtmInstanceResponse describeDnsGtmInstanceWithOptions(const Models::DescribeDnsGtmInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance based on the specified instance ID.
       *
       * @param request DescribeDnsGtmInstanceRequest
       * @return DescribeDnsGtmInstanceResponse
       */
      Models::DescribeDnsGtmInstanceResponse describeDnsGtmInstance(const Models::DescribeDnsGtmInstanceRequest &request);

      /**
       * @summary Queries the details of an address pool by its ID.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceAddressPoolResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolResponse describeDnsGtmInstanceAddressPoolWithOptions(const Models::DescribeDnsGtmInstanceAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an address pool by its ID.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolRequest
       * @return DescribeDnsGtmInstanceAddressPoolResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolResponse describeDnsGtmInstanceAddressPool(const Models::DescribeDnsGtmInstanceAddressPoolRequest &request);

      /**
       * @summary Retrieves the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceAddressPoolsResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolsResponse describeDnsGtmInstanceAddressPoolsWithOptions(const Models::DescribeDnsGtmInstanceAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeDnsGtmInstanceAddressPoolsRequest
       * @return DescribeDnsGtmInstanceAddressPoolsResponse
       */
      Models::DescribeDnsGtmInstanceAddressPoolsResponse describeDnsGtmInstanceAddressPools(const Models::DescribeDnsGtmInstanceAddressPoolsRequest &request);

      /**
       * @summary Describes the status of an instance based on its ID.
       *
       * @param request DescribeDnsGtmInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceStatusResponse
       */
      Models::DescribeDnsGtmInstanceStatusResponse describeDnsGtmInstanceStatusWithOptions(const Models::DescribeDnsGtmInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the status of an instance based on its ID.
       *
       * @param request DescribeDnsGtmInstanceStatusRequest
       * @return DescribeDnsGtmInstanceStatusResponse
       */
      Models::DescribeDnsGtmInstanceStatusResponse describeDnsGtmInstanceStatus(const Models::DescribeDnsGtmInstanceStatusRequest &request);

      /**
       * @summary Retrieves the system-assigned CNAME based on the specified instance ID.
       *
       * @param request DescribeDnsGtmInstanceSystemCnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstanceSystemCnameResponse
       */
      Models::DescribeDnsGtmInstanceSystemCnameResponse describeDnsGtmInstanceSystemCnameWithOptions(const Models::DescribeDnsGtmInstanceSystemCnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the system-assigned CNAME based on the specified instance ID.
       *
       * @param request DescribeDnsGtmInstanceSystemCnameRequest
       * @return DescribeDnsGtmInstanceSystemCnameResponse
       */
      Models::DescribeDnsGtmInstanceSystemCnameResponse describeDnsGtmInstanceSystemCname(const Models::DescribeDnsGtmInstanceSystemCnameRequest &request);

      /**
       * @summary Queries a list of instances.
       *
       * @param request DescribeDnsGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmInstancesResponse
       */
      Models::DescribeDnsGtmInstancesResponse describeDnsGtmInstancesWithOptions(const Models::DescribeDnsGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of instances.
       *
       * @param request DescribeDnsGtmInstancesRequest
       * @return DescribeDnsGtmInstancesResponse
       */
      Models::DescribeDnsGtmInstancesResponse describeDnsGtmInstances(const Models::DescribeDnsGtmInstancesRequest &request);

      /**
       * @summary Queries the operation logs for an instance.
       *
       * @param request DescribeDnsGtmLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmLogsResponse
       */
      Models::DescribeDnsGtmLogsResponse describeDnsGtmLogsWithOptions(const Models::DescribeDnsGtmLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs for an instance.
       *
       * @param request DescribeDnsGtmLogsRequest
       * @return DescribeDnsGtmLogsResponse
       */
      Models::DescribeDnsGtmLogsResponse describeDnsGtmLogs(const Models::DescribeDnsGtmLogsRequest &request);

      /**
       * @summary Queries the available configurations for DNS health checks.
       *
       * @param request DescribeDnsGtmMonitorAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmMonitorAvailableConfigResponse
       */
      Models::DescribeDnsGtmMonitorAvailableConfigResponse describeDnsGtmMonitorAvailableConfigWithOptions(const Models::DescribeDnsGtmMonitorAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available configurations for DNS health checks.
       *
       * @param request DescribeDnsGtmMonitorAvailableConfigRequest
       * @return DescribeDnsGtmMonitorAvailableConfigResponse
       */
      Models::DescribeDnsGtmMonitorAvailableConfigResponse describeDnsGtmMonitorAvailableConfig(const Models::DescribeDnsGtmMonitorAvailableConfigRequest &request);

      /**
       * @summary Queries the health check configuration for an address pool.
       *
       * @param request DescribeDnsGtmMonitorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsGtmMonitorConfigResponse
       */
      Models::DescribeDnsGtmMonitorConfigResponse describeDnsGtmMonitorConfigWithOptions(const Models::DescribeDnsGtmMonitorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check configuration for an address pool.
       *
       * @param request DescribeDnsGtmMonitorConfigRequest
       * @return DescribeDnsGtmMonitorConfigResponse
       */
      Models::DescribeDnsGtmMonitorConfigResponse describeDnsGtmMonitorConfig(const Models::DescribeDnsGtmMonitorConfigRequest &request);

      /**
       * @summary Retrieves the details of a paid Alibaba Cloud DNS instance by its instance ID.
       *
       * @param request DescribeDnsProductInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsProductInstanceResponse
       */
      Models::DescribeDnsProductInstanceResponse describeDnsProductInstanceWithOptions(const Models::DescribeDnsProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a paid Alibaba Cloud DNS instance by its instance ID.
       *
       * @param request DescribeDnsProductInstanceRequest
       * @return DescribeDnsProductInstanceResponse
       */
      Models::DescribeDnsProductInstanceResponse describeDnsProductInstance(const Models::DescribeDnsProductInstanceRequest &request);

      /**
       * @summary Retrieves a list of paid DNS product instances that match the specified parameters.
       *
       * @description > **If the response does not contain a domain name, the Alibaba Cloud DNS instance is not associated with any domain names.**
       *
       * @param request DescribeDnsProductInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDnsProductInstancesResponse
       */
      Models::DescribeDnsProductInstancesResponse describeDnsProductInstancesWithOptions(const Models::DescribeDnsProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of paid DNS product instances that match the specified parameters.
       *
       * @description > **If the response does not contain a domain name, the Alibaba Cloud DNS instance is not associated with any domain names.**
       *
       * @param request DescribeDnsProductInstancesRequest
       * @return DescribeDnsProductInstancesResponse
       */
      Models::DescribeDnsProductInstancesResponse describeDnsProductInstances(const Models::DescribeDnsProductInstancesRequest &request);

      /**
       * @summary Queries an overview of request statistics for a DNS over HTTPS (DoH) account.
       *
       * @param request DescribeDohAccountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohAccountStatisticsResponse
       */
      Models::DescribeDohAccountStatisticsResponse describeDohAccountStatisticsWithOptions(const Models::DescribeDohAccountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an overview of request statistics for a DNS over HTTPS (DoH) account.
       *
       * @param request DescribeDohAccountStatisticsRequest
       * @return DescribeDohAccountStatisticsResponse
       */
      Models::DescribeDohAccountStatisticsResponse describeDohAccountStatistics(const Models::DescribeDohAccountStatisticsRequest &request);

      /**
       * @summary Retrieves an overview of statistics for DNS over HTTPS (DoH) requests for a domain name.
       *
       * @param request DescribeDohDomainStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohDomainStatisticsResponse
       */
      Models::DescribeDohDomainStatisticsResponse describeDohDomainStatisticsWithOptions(const Models::DescribeDohDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an overview of statistics for DNS over HTTPS (DoH) requests for a domain name.
       *
       * @param request DescribeDohDomainStatisticsRequest
       * @return DescribeDohDomainStatisticsResponse
       */
      Models::DescribeDohDomainStatisticsResponse describeDohDomainStatistics(const Models::DescribeDohDomainStatisticsRequest &request);

      /**
       * @summary Queries request statistics for DNS over HTTPS (DoH) domain names.
       *
       * @param request DescribeDohDomainStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohDomainStatisticsSummaryResponse
       */
      Models::DescribeDohDomainStatisticsSummaryResponse describeDohDomainStatisticsSummaryWithOptions(const Models::DescribeDohDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries request statistics for DNS over HTTPS (DoH) domain names.
       *
       * @param request DescribeDohDomainStatisticsSummaryRequest
       * @return DescribeDohDomainStatisticsSummaryResponse
       */
      Models::DescribeDohDomainStatisticsSummaryResponse describeDohDomainStatisticsSummary(const Models::DescribeDohDomainStatisticsSummaryRequest &request);

      /**
       * @summary Queries for statistics on DNS over HTTPS (DoH) requests for a subdomain.
       *
       * @param request DescribeDohSubDomainStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohSubDomainStatisticsResponse
       */
      Models::DescribeDohSubDomainStatisticsResponse describeDohSubDomainStatisticsWithOptions(const Models::DescribeDohSubDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries for statistics on DNS over HTTPS (DoH) requests for a subdomain.
       *
       * @param request DescribeDohSubDomainStatisticsRequest
       * @return DescribeDohSubDomainStatisticsResponse
       */
      Models::DescribeDohSubDomainStatisticsResponse describeDohSubDomainStatistics(const Models::DescribeDohSubDomainStatisticsRequest &request);

      /**
       * @summary Queries a summary of request statistics for subdomains using DNS over HTTPS (DoH).
       *
       * @param request DescribeDohSubDomainStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohSubDomainStatisticsSummaryResponse
       */
      Models::DescribeDohSubDomainStatisticsSummaryResponse describeDohSubDomainStatisticsSummaryWithOptions(const Models::DescribeDohSubDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a summary of request statistics for subdomains using DNS over HTTPS (DoH).
       *
       * @param request DescribeDohSubDomainStatisticsSummaryRequest
       * @return DescribeDohSubDomainStatisticsSummaryResponse
       */
      Models::DescribeDohSubDomainStatisticsSummaryResponse describeDohSubDomainStatisticsSummary(const Models::DescribeDohSubDomainStatisticsSummaryRequest &request);

      /**
       * @summary Retrieves the basic information of a DNS over HTTPS (DoH) user.
       *
       * @param request DescribeDohUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDohUserInfoResponse
       */
      Models::DescribeDohUserInfoResponse describeDohUserInfoWithOptions(const Models::DescribeDohUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the basic information of a DNS over HTTPS (DoH) user.
       *
       * @param request DescribeDohUserInfoRequest
       * @return DescribeDohUserInfoResponse
       */
      Models::DescribeDohUserInfoResponse describeDohUserInfo(const Models::DescribeDohUserInfoRequest &request);

      /**
       * @summary Queries the Domain Name System Security Extensions (DNSSEC) information for a specified domain name.
       *
       * @param request DescribeDomainDnssecInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDnssecInfoResponse
       */
      Models::DescribeDomainDnssecInfoResponse describeDomainDnssecInfoWithOptions(const Models::DescribeDomainDnssecInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Domain Name System Security Extensions (DNSSEC) information for a specified domain name.
       *
       * @param request DescribeDomainDnssecInfoRequest
       * @return DescribeDomainDnssecInfoResponse
       */
      Models::DescribeDomainDnssecInfoResponse describeDomainDnssecInfo(const Models::DescribeDomainDnssecInfoRequest &request);

      /**
       * @summary Queries domain name groups.
       *
       * @param request DescribeDomainGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainGroupsResponse
       */
      Models::DescribeDomainGroupsResponse describeDomainGroupsWithOptions(const Models::DescribeDomainGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain name groups.
       *
       * @param request DescribeDomainGroupsRequest
       * @return DescribeDomainGroupsResponse
       */
      Models::DescribeDomainGroupsResponse describeDomainGroups(const Models::DescribeDomainGroupsRequest &request);

      /**
       * @summary Queries information about a specified domain name.
       *
       * @description In this example, the domain name is bound to an instance of Alibaba Cloud DNS Ultimate Edition. For more information about line enumeration, see the RecordLines response parameter.
       *
       * @param request DescribeDomainInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainInfoResponse
       */
      Models::DescribeDomainInfoResponse describeDomainInfoWithOptions(const Models::DescribeDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a specified domain name.
       *
       * @description In this example, the domain name is bound to an instance of Alibaba Cloud DNS Ultimate Edition. For more information about line enumeration, see the RecordLines response parameter.
       *
       * @param request DescribeDomainInfoRequest
       * @return DescribeDomainInfoResponse
       */
      Models::DescribeDomainInfoResponse describeDomainInfo(const Models::DescribeDomainInfoRequest &request);

      /**
       * @summary Queries the operation logs for a domain name based on the specified parameters.
       *
       * @param request DescribeDomainLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainLogsResponse
       */
      Models::DescribeDomainLogsResponse describeDomainLogsWithOptions(const Models::DescribeDomainLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs for a domain name based on the specified parameters.
       *
       * @param request DescribeDomainLogsRequest
       * @return DescribeDomainLogsResponse
       */
      Models::DescribeDomainLogsResponse describeDomainLogs(const Models::DescribeDomainLogsRequest &request);

      /**
       * @summary Queries the current list of name servers for a domain name and determines whether the servers are managed by Alibaba Cloud DNS.
       *
       * @description > This operation directly queries the authoritative server of the domain name registry to retrieve the DNS server names for the domain name. An error may be returned if the domain name is inactive. For example, if the domain name has a serverHold or clientHold status, or has not passed identity verification.
       *
       * @param request DescribeDomainNsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainNsResponse
       */
      Models::DescribeDomainNsResponse describeDomainNsWithOptions(const Models::DescribeDomainNsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current list of name servers for a domain name and determines whether the servers are managed by Alibaba Cloud DNS.
       *
       * @description > This operation directly queries the authoritative server of the domain name registry to retrieve the DNS server names for the domain name. An error may be returned if the domain name is inactive. For example, if the domain name has a serverHold or clientHold status, or has not passed identity verification.
       *
       * @param request DescribeDomainNsRequest
       * @return DescribeDomainNsResponse
       */
      Models::DescribeDomainNsResponse describeDomainNs(const Models::DescribeDomainNsRequest &request);

      /**
       * @summary Retrieves the details of a DNS record by its ID.
       *
       * @param request DescribeDomainRecordInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRecordInfoResponse
       */
      Models::DescribeDomainRecordInfoResponse describeDomainRecordInfoWithOptions(const Models::DescribeDomainRecordInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a DNS record by its ID.
       *
       * @param request DescribeDomainRecordInfoRequest
       * @return DescribeDomainRecordInfoResponse
       */
      Models::DescribeDomainRecordInfoResponse describeDomainRecordInfo(const Models::DescribeDomainRecordInfoRequest &request);

      /**
       * @summary Retrieves the DNS records for a specified root domain based on the input parameters.
       *
       * @description - You can specify the domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve a list of DNS records.
       * - You can specify a keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord) to query DNS records that contain the keyword.
       * - By default, DNS records are sorted in descending order by the time they were added.
       * - You can specify a domain group ID (GroupId) to query the DNS records in a specific group.
       *
       * @param request DescribeDomainRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRecordsResponse
       */
      Models::DescribeDomainRecordsResponse describeDomainRecordsWithOptions(const Models::DescribeDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the DNS records for a specified root domain based on the input parameters.
       *
       * @description - You can specify the domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve a list of DNS records.
       * - You can specify a keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord) to query DNS records that contain the keyword.
       * - By default, DNS records are sorted in descending order by the time they were added.
       * - You can specify a domain group ID (GroupId) to query the DNS records in a specific group.
       *
       * @param request DescribeDomainRecordsRequest
       * @return DescribeDomainRecordsResponse
       */
      Models::DescribeDomainRecordsResponse describeDomainRecords(const Models::DescribeDomainRecordsRequest &request);

      /**
       * @summary Queries the request volumes for all paid domain names in your account.
       *
       * @param request DescribeDomainResolveStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainResolveStatisticsSummaryResponse
       */
      Models::DescribeDomainResolveStatisticsSummaryResponse describeDomainResolveStatisticsSummaryWithOptions(const Models::DescribeDomainResolveStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request volumes for all paid domain names in your account.
       *
       * @param request DescribeDomainResolveStatisticsSummaryRequest
       * @return DescribeDomainResolveStatisticsSummaryResponse
       */
      Models::DescribeDomainResolveStatisticsSummaryResponse describeDomainResolveStatisticsSummary(const Models::DescribeDomainResolveStatisticsSummaryRequest &request);

      /**
       * @summary Queries the number of real-time requests for a specified primary domain name.
       *
       * @description Real-time data is collected hourly.
       *
       * @param request DescribeDomainStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatisticsResponse
       */
      Models::DescribeDomainStatisticsResponse describeDomainStatisticsWithOptions(const Models::DescribeDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of real-time requests for a specified primary domain name.
       *
       * @description Real-time data is collected hourly.
       *
       * @param request DescribeDomainStatisticsRequest
       * @return DescribeDomainStatisticsResponse
       */
      Models::DescribeDomainStatisticsResponse describeDomainStatistics(const Models::DescribeDomainStatisticsRequest &request);

      /**
       * @summary Queries the number of requests for all paid domain names in your account.
       *
       * @param request DescribeDomainStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainStatisticsSummaryResponse
       */
      Models::DescribeDomainStatisticsSummaryResponse describeDomainStatisticsSummaryWithOptions(const Models::DescribeDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of requests for all paid domain names in your account.
       *
       * @param request DescribeDomainStatisticsSummaryRequest
       * @return DescribeDomainStatisticsSummaryResponse
       */
      Models::DescribeDomainStatisticsSummaryResponse describeDomainStatisticsSummary(const Models::DescribeDomainStatisticsSummaryRequest &request);

      /**
       * @summary Queries a list of domain names based on specified parameters.
       *
       * @description 1. You can specify a page number (PageNumber) and page size (PageSize) to retrieve a paginated list of domain names.
       * 2. You can specify a keyword (KeyWord) to query for domain names that contain the specified keyword.
       * 3. By default, domain names are sorted in descending order of their creation time.
       * 4. You can specify a domain name group ID (GroupId) to query for domain names in a specific group. This lets you retrieve all domain names or only the domain names that are not assigned to a group.
       *
       * @param request DescribeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomainsWithOptions(const Models::DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names based on specified parameters.
       *
       * @description 1. You can specify a page number (PageNumber) and page size (PageSize) to retrieve a paginated list of domain names.
       * 2. You can specify a keyword (KeyWord) to query for domain names that contain the specified keyword.
       * 3. By default, domain names are sorted in descending order of their creation time.
       * 4. You can specify a domain name group ID (GroupId) to query for domain names in a specific group. This lets you retrieve all domain names or only the domain names that are not assigned to a group.
       *
       * @param request DescribeDomainsRequest
       * @return DescribeDomainsResponse
       */
      Models::DescribeDomainsResponse describeDomains(const Models::DescribeDomainsRequest &request);

      /**
       * @summary Queries the access policies for an instance.
       *
       * @param request DescribeGtmAccessStrategiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAccessStrategiesResponse
       */
      Models::DescribeGtmAccessStrategiesResponse describeGtmAccessStrategiesWithOptions(const Models::DescribeGtmAccessStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access policies for an instance.
       *
       * @param request DescribeGtmAccessStrategiesRequest
       * @return DescribeGtmAccessStrategiesResponse
       */
      Models::DescribeGtmAccessStrategiesResponse describeGtmAccessStrategies(const Models::DescribeGtmAccessStrategiesRequest &request);

      /**
       * @summary Queries the details of an access policy based on the policy ID.
       *
       * @param request DescribeGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAccessStrategyResponse
       */
      Models::DescribeGtmAccessStrategyResponse describeGtmAccessStrategyWithOptions(const Models::DescribeGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an access policy based on the policy ID.
       *
       * @param request DescribeGtmAccessStrategyRequest
       * @return DescribeGtmAccessStrategyResponse
       */
      Models::DescribeGtmAccessStrategyResponse describeGtmAccessStrategy(const Models::DescribeGtmAccessStrategyRequest &request);

      /**
       * @summary Queries the available configurations for an access policy.
       *
       * @param request DescribeGtmAccessStrategyAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeGtmAccessStrategyAvailableConfigResponse describeGtmAccessStrategyAvailableConfigWithOptions(const Models::DescribeGtmAccessStrategyAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available configurations for an access policy.
       *
       * @param request DescribeGtmAccessStrategyAvailableConfigRequest
       * @return DescribeGtmAccessStrategyAvailableConfigResponse
       */
      Models::DescribeGtmAccessStrategyAvailableConfigResponse describeGtmAccessStrategyAvailableConfig(const Models::DescribeGtmAccessStrategyAvailableConfigRequest &request);

      /**
       * @summary Queries the list of available alert contact groups for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmAvailableAlertGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmAvailableAlertGroupResponse
       */
      Models::DescribeGtmAvailableAlertGroupResponse describeGtmAvailableAlertGroupWithOptions(const Models::DescribeGtmAvailableAlertGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of available alert contact groups for a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmAvailableAlertGroupRequest
       * @return DescribeGtmAvailableAlertGroupResponse
       */
      Models::DescribeGtmAvailableAlertGroupResponse describeGtmAvailableAlertGroup(const Models::DescribeGtmAvailableAlertGroupRequest &request);

      /**
       * @summary Queries the details of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceResponse
       */
      Models::DescribeGtmInstanceResponse describeGtmInstanceWithOptions(const Models::DescribeGtmInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceRequest
       * @return DescribeGtmInstanceResponse
       */
      Models::DescribeGtmInstanceResponse describeGtmInstance(const Models::DescribeGtmInstanceRequest &request);

      /**
       * @summary Describes the details of an address pool.
       *
       * @param request DescribeGtmInstanceAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceAddressPoolResponse
       */
      Models::DescribeGtmInstanceAddressPoolResponse describeGtmInstanceAddressPoolWithOptions(const Models::DescribeGtmInstanceAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the details of an address pool.
       *
       * @param request DescribeGtmInstanceAddressPoolRequest
       * @return DescribeGtmInstanceAddressPoolResponse
       */
      Models::DescribeGtmInstanceAddressPoolResponse describeGtmInstanceAddressPool(const Models::DescribeGtmInstanceAddressPoolRequest &request);

      /**
       * @summary Describes the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceAddressPoolsResponse
       */
      Models::DescribeGtmInstanceAddressPoolsResponse describeGtmInstanceAddressPoolsWithOptions(const Models::DescribeGtmInstanceAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the address pools of a Global Traffic Manager (GTM) instance.
       *
       * @param request DescribeGtmInstanceAddressPoolsRequest
       * @return DescribeGtmInstanceAddressPoolsResponse
       */
      Models::DescribeGtmInstanceAddressPoolsResponse describeGtmInstanceAddressPools(const Models::DescribeGtmInstanceAddressPoolsRequest &request);

      /**
       * @summary Queries the current status of an instance.
       *
       * @param request DescribeGtmInstanceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceStatusResponse
       */
      Models::DescribeGtmInstanceStatusResponse describeGtmInstanceStatusWithOptions(const Models::DescribeGtmInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current status of an instance.
       *
       * @param request DescribeGtmInstanceStatusRequest
       * @return DescribeGtmInstanceStatusResponse
       */
      Models::DescribeGtmInstanceStatusResponse describeGtmInstanceStatus(const Models::DescribeGtmInstanceStatusRequest &request);

      /**
       * @summary Retrieves the system-assigned CNAME domain name.
       *
       * @param request DescribeGtmInstanceSystemCnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstanceSystemCnameResponse
       */
      Models::DescribeGtmInstanceSystemCnameResponse describeGtmInstanceSystemCnameWithOptions(const Models::DescribeGtmInstanceSystemCnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the system-assigned CNAME domain name.
       *
       * @param request DescribeGtmInstanceSystemCnameRequest
       * @return DescribeGtmInstanceSystemCnameResponse
       */
      Models::DescribeGtmInstanceSystemCnameResponse describeGtmInstanceSystemCname(const Models::DescribeGtmInstanceSystemCnameRequest &request);

      /**
       * @summary Queries Global Traffic Manager (GTM) instances.
       *
       * @param request DescribeGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmInstancesResponse
       */
      Models::DescribeGtmInstancesResponse describeGtmInstancesWithOptions(const Models::DescribeGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Global Traffic Manager (GTM) instances.
       *
       * @param request DescribeGtmInstancesRequest
       * @return DescribeGtmInstancesResponse
       */
      Models::DescribeGtmInstancesResponse describeGtmInstances(const Models::DescribeGtmInstancesRequest &request);

      /**
       * @summary Queries a list of logs.
       *
       * @param request DescribeGtmLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmLogsResponse
       */
      Models::DescribeGtmLogsResponse describeGtmLogsWithOptions(const Models::DescribeGtmLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of logs.
       *
       * @param request DescribeGtmLogsRequest
       * @return DescribeGtmLogsResponse
       */
      Models::DescribeGtmLogsResponse describeGtmLogs(const Models::DescribeGtmLogsRequest &request);

      /**
       * @summary Retrieves the available configurations for health checks.
       *
       * @param request DescribeGtmMonitorAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmMonitorAvailableConfigResponse
       */
      Models::DescribeGtmMonitorAvailableConfigResponse describeGtmMonitorAvailableConfigWithOptions(const Models::DescribeGtmMonitorAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the available configurations for health checks.
       *
       * @param request DescribeGtmMonitorAvailableConfigRequest
       * @return DescribeGtmMonitorAvailableConfigResponse
       */
      Models::DescribeGtmMonitorAvailableConfigResponse describeGtmMonitorAvailableConfig(const Models::DescribeGtmMonitorAvailableConfigRequest &request);

      /**
       * @summary Retrieves the health check configuration for an address pool.
       *
       * @param request DescribeGtmMonitorConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmMonitorConfigResponse
       */
      Models::DescribeGtmMonitorConfigResponse describeGtmMonitorConfigWithOptions(const Models::DescribeGtmMonitorConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the health check configuration for an address pool.
       *
       * @param request DescribeGtmMonitorConfigRequest
       * @return DescribeGtmMonitorConfigResponse
       */
      Models::DescribeGtmMonitorConfigResponse describeGtmMonitorConfig(const Models::DescribeGtmMonitorConfigRequest &request);

      /**
       * @summary Retrieves the details of a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmRecoveryPlanResponse
       */
      Models::DescribeGtmRecoveryPlanResponse describeGtmRecoveryPlanWithOptions(const Models::DescribeGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanRequest
       * @return DescribeGtmRecoveryPlanResponse
       */
      Models::DescribeGtmRecoveryPlanResponse describeGtmRecoveryPlan(const Models::DescribeGtmRecoveryPlanRequest &request);

      /**
       * @summary Describes the available configurations for a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanAvailableConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmRecoveryPlanAvailableConfigResponse
       */
      Models::DescribeGtmRecoveryPlanAvailableConfigResponse describeGtmRecoveryPlanAvailableConfigWithOptions(const Models::DescribeGtmRecoveryPlanAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the available configurations for a disaster recovery plan.
       *
       * @param request DescribeGtmRecoveryPlanAvailableConfigRequest
       * @return DescribeGtmRecoveryPlanAvailableConfigResponse
       */
      Models::DescribeGtmRecoveryPlanAvailableConfigResponse describeGtmRecoveryPlanAvailableConfig(const Models::DescribeGtmRecoveryPlanAvailableConfigRequest &request);

      /**
       * @summary Queries a list of disaster recovery plans.
       *
       * @param request DescribeGtmRecoveryPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGtmRecoveryPlansResponse
       */
      Models::DescribeGtmRecoveryPlansResponse describeGtmRecoveryPlansWithOptions(const Models::DescribeGtmRecoveryPlansRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of disaster recovery plans.
       *
       * @param request DescribeGtmRecoveryPlansRequest
       * @return DescribeGtmRecoveryPlansResponse
       */
      Models::DescribeGtmRecoveryPlansResponse describeGtmRecoveryPlans(const Models::DescribeGtmRecoveryPlansRequest &request);

      /**
       * @summary Retrieves a list of domain names that are attached to an instance.
       *
       * @param request DescribeInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceDomainsResponse
       */
      Models::DescribeInstanceDomainsResponse describeInstanceDomainsWithOptions(const Models::DescribeInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of domain names that are attached to an instance.
       *
       * @param request DescribeInstanceDomainsRequest
       * @return DescribeInstanceDomainsResponse
       */
      Models::DescribeInstanceDomainsResponse describeInstanceDomains(const Models::DescribeInstanceDomainsRequest &request);

      /**
       * @summary Retrieves a global overview of statistics for public authoritative DNS.
       *
       * @description Real-time data is aggregated hourly.
       *
       * @param request DescribeInterAuthStatisticsGlobalOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInterAuthStatisticsGlobalOverviewResponse
       */
      Models::DescribeInterAuthStatisticsGlobalOverviewResponse describeInterAuthStatisticsGlobalOverviewWithOptions(const Models::DescribeInterAuthStatisticsGlobalOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a global overview of statistics for public authoritative DNS.
       *
       * @description Real-time data is aggregated hourly.
       *
       * @param request DescribeInterAuthStatisticsGlobalOverviewRequest
       * @return DescribeInterAuthStatisticsGlobalOverviewResponse
       */
      Models::DescribeInterAuthStatisticsGlobalOverviewResponse describeInterAuthStatisticsGlobalOverview(const Models::DescribeInterAuthStatisticsGlobalOverviewRequest &request);

      /**
       * @summary Historical statistics for public authoritative DNS resolution
       *
       * @description Real-time data statistics are aggregated hourly.
       *
       * @param request DescribeInterAuthStatisticsHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInterAuthStatisticsHistoryResponse
       */
      Models::DescribeInterAuthStatisticsHistoryResponse describeInterAuthStatisticsHistoryWithOptions(const Models::DescribeInterAuthStatisticsHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Historical statistics for public authoritative DNS resolution
       *
       * @description Real-time data statistics are aggregated hourly.
       *
       * @param request DescribeInterAuthStatisticsHistoryRequest
       * @return DescribeInterAuthStatisticsHistoryResponse
       */
      Models::DescribeInterAuthStatisticsHistoryResponse describeInterAuthStatisticsHistory(const Models::DescribeInterAuthStatisticsHistoryRequest &request);

      /**
       * @summary Queries the summary list of public authoritative parse statistics.
       *
       * @description Real-time data is aggregated by hour.
       *
       * @param request DescribeInterAuthStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInterAuthStatisticsSummaryResponse
       */
      Models::DescribeInterAuthStatisticsSummaryResponse describeInterAuthStatisticsSummaryWithOptions(const Models::DescribeInterAuthStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary list of public authoritative parse statistics.
       *
       * @description Real-time data is aggregated by hour.
       *
       * @param request DescribeInterAuthStatisticsSummaryRequest
       * @return DescribeInterAuthStatisticsSummaryResponse
       */
      Models::DescribeInterAuthStatisticsSummaryResponse describeInterAuthStatisticsSummary(const Models::DescribeInterAuthStatisticsSummaryRequest &request);

      /**
       * @summary Retrieves a zone-level overview of statistics for public authoritative DNS.
       *
       * @param request DescribeInterAuthStatisticsZoneOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInterAuthStatisticsZoneOverviewResponse
       */
      Models::DescribeInterAuthStatisticsZoneOverviewResponse describeInterAuthStatisticsZoneOverviewWithOptions(const Models::DescribeInterAuthStatisticsZoneOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a zone-level overview of statistics for public authoritative DNS.
       *
       * @param request DescribeInterAuthStatisticsZoneOverviewRequest
       * @return DescribeInterAuthStatisticsZoneOverviewResponse
       */
      Models::DescribeInterAuthStatisticsZoneOverviewResponse describeInterAuthStatisticsZoneOverview(const Models::DescribeInterAuthStatisticsZoneOverviewRequest &request);

      /**
       * @summary Query parsing logs
       *
       * @param request DescribeInternetDnsLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInternetDnsLogsResponse
       */
      Models::DescribeInternetDnsLogsResponse describeInternetDnsLogsWithOptions(const Models::DescribeInternetDnsLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query parsing logs
       *
       * @param request DescribeInternetDnsLogsRequest
       * @return DescribeInternetDnsLogsResponse
       */
      Models::DescribeInternetDnsLogsResponse describeInternetDnsLogs(const Models::DescribeInternetDnsLogsRequest &request);

      /**
       * @summary Queries the list of cache refresh instances.
       *
       * @param request DescribeIspFlushCacheInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheInstancesResponse
       */
      Models::DescribeIspFlushCacheInstancesResponse describeIspFlushCacheInstancesWithOptions(const Models::DescribeIspFlushCacheInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cache refresh instances.
       *
       * @param request DescribeIspFlushCacheInstancesRequest
       * @return DescribeIspFlushCacheInstancesResponse
       */
      Models::DescribeIspFlushCacheInstancesResponse describeIspFlushCacheInstances(const Models::DescribeIspFlushCacheInstancesRequest &request);

      /**
       * @summary Retrieves the remaining number of cache refresh operations available.
       *
       * @param request DescribeIspFlushCacheRemainQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheRemainQuotaResponse
       */
      Models::DescribeIspFlushCacheRemainQuotaResponse describeIspFlushCacheRemainQuotaWithOptions(const Models::DescribeIspFlushCacheRemainQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the remaining number of cache refresh operations available.
       *
       * @param request DescribeIspFlushCacheRemainQuotaRequest
       * @return DescribeIspFlushCacheRemainQuotaResponse
       */
      Models::DescribeIspFlushCacheRemainQuotaResponse describeIspFlushCacheRemainQuota(const Models::DescribeIspFlushCacheRemainQuotaRequest &request);

      /**
       * @summary Queries the details of a cache flush task.
       *
       * @param request DescribeIspFlushCacheTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheTaskResponse
       */
      Models::DescribeIspFlushCacheTaskResponse describeIspFlushCacheTaskWithOptions(const Models::DescribeIspFlushCacheTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cache flush task.
       *
       * @param request DescribeIspFlushCacheTaskRequest
       * @return DescribeIspFlushCacheTaskResponse
       */
      Models::DescribeIspFlushCacheTaskResponse describeIspFlushCacheTask(const Models::DescribeIspFlushCacheTaskRequest &request);

      /**
       * @summary Queries the list of cache refresh tasks.
       *
       * @param request DescribeIspFlushCacheTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIspFlushCacheTasksResponse
       */
      Models::DescribeIspFlushCacheTasksResponse describeIspFlushCacheTasksWithOptions(const Models::DescribeIspFlushCacheTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cache refresh tasks.
       *
       * @param request DescribeIspFlushCacheTasksRequest
       * @return DescribeIspFlushCacheTasksResponse
       */
      Models::DescribeIspFlushCacheTasksResponse describeIspFlushCacheTasks(const Models::DescribeIspFlushCacheTasksRequest &request);

      /**
       * @summary Queries the overview of Public DNS user data.
       *
       * @param request DescribePdnsAccountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsAccountSummaryResponse
       */
      Models::DescribePdnsAccountSummaryResponse describePdnsAccountSummaryWithOptions(const Models::DescribePdnsAccountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview of Public DNS user data.
       *
       * @param request DescribePdnsAccountSummaryRequest
       * @return DescribePdnsAccountSummaryResponse
       */
      Models::DescribePdnsAccountSummaryResponse describePdnsAccountSummary(const Models::DescribePdnsAccountSummaryRequest &request);

      /**
       * @summary Query the details of a public DNS AppKey
       *
       * @param request DescribePdnsAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsAppKeyResponse
       */
      Models::DescribePdnsAppKeyResponse describePdnsAppKeyWithOptions(const Models::DescribePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the details of a public DNS AppKey
       *
       * @param request DescribePdnsAppKeyRequest
       * @return DescribePdnsAppKeyResponse
       */
      Models::DescribePdnsAppKeyResponse describePdnsAppKey(const Models::DescribePdnsAppKeyRequest &request);

      /**
       * @summary Queries the list of AppKeys of Public DNS
       *
       * @param request DescribePdnsAppKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsAppKeysResponse
       */
      Models::DescribePdnsAppKeysResponse describePdnsAppKeysWithOptions(const Models::DescribePdnsAppKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of AppKeys of Public DNS
       *
       * @param request DescribePdnsAppKeysRequest
       * @return DescribePdnsAppKeysResponse
       */
      Models::DescribePdnsAppKeysResponse describePdnsAppKeys(const Models::DescribePdnsAppKeysRequest &request);

      /**
       * @summary Queries the operation log list of Public DNS.
       *
       * @param request DescribePdnsOperateLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsOperateLogsResponse
       */
      Models::DescribePdnsOperateLogsResponse describePdnsOperateLogsWithOptions(const Models::DescribePdnsOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation log list of Public DNS.
       *
       * @param request DescribePdnsOperateLogsRequest
       * @return DescribePdnsOperateLogsResponse
       */
      Models::DescribePdnsOperateLogsResponse describePdnsOperateLogs(const Models::DescribePdnsOperateLogsRequest &request);

      /**
       * @summary Queries the request statistics for Public DNS.
       *
       * @param request DescribePdnsRequestStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsRequestStatisticResponse
       */
      Models::DescribePdnsRequestStatisticResponse describePdnsRequestStatisticWithOptions(const Models::DescribePdnsRequestStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request statistics for Public DNS.
       *
       * @param request DescribePdnsRequestStatisticRequest
       * @return DescribePdnsRequestStatisticResponse
       */
      Models::DescribePdnsRequestStatisticResponse describePdnsRequestStatistic(const Models::DescribePdnsRequestStatisticRequest &request);

      /**
       * @summary Queries the request statistics for a specified subdomain.
       *
       * @param request DescribePdnsRequestStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsRequestStatisticsResponse
       */
      Models::DescribePdnsRequestStatisticsResponse describePdnsRequestStatisticsWithOptions(const Models::DescribePdnsRequestStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request statistics for a specified subdomain.
       *
       * @param request DescribePdnsRequestStatisticsRequest
       * @return DescribePdnsRequestStatisticsResponse
       */
      Models::DescribePdnsRequestStatisticsResponse describePdnsRequestStatistics(const Models::DescribePdnsRequestStatisticsRequest &request);

      /**
       * @summary Queries the list of Public DNS threat logs.
       *
       * @param request DescribePdnsThreatLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsThreatLogsResponse
       */
      Models::DescribePdnsThreatLogsResponse describePdnsThreatLogsWithOptions(const Models::DescribePdnsThreatLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Public DNS threat logs.
       *
       * @param request DescribePdnsThreatLogsRequest
       * @return DescribePdnsThreatLogsResponse
       */
      Models::DescribePdnsThreatLogsResponse describePdnsThreatLogs(const Models::DescribePdnsThreatLogsRequest &request);

      /**
       * @summary Retrieves Public DNS threat statistics.
       *
       * @param request DescribePdnsThreatStatisticRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsThreatStatisticResponse
       */
      Models::DescribePdnsThreatStatisticResponse describePdnsThreatStatisticWithOptions(const Models::DescribePdnsThreatStatisticRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves Public DNS threat statistics.
       *
       * @param request DescribePdnsThreatStatisticRequest
       * @return DescribePdnsThreatStatisticResponse
       */
      Models::DescribePdnsThreatStatisticResponse describePdnsThreatStatistic(const Models::DescribePdnsThreatStatisticRequest &request);

      /**
       * @summary Retrieves the public DNS threat statistics list.
       *
       * @param request DescribePdnsThreatStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsThreatStatisticsResponse
       */
      Models::DescribePdnsThreatStatisticsResponse describePdnsThreatStatisticsWithOptions(const Models::DescribePdnsThreatStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the public DNS threat statistics list.
       *
       * @param request DescribePdnsThreatStatisticsRequest
       * @return DescribePdnsThreatStatisticsResponse
       */
      Models::DescribePdnsThreatStatisticsResponse describePdnsThreatStatistics(const Models::DescribePdnsThreatStatisticsRequest &request);

      /**
       * @summary Retrieves the list of Public DNS UDP IP address ranges.
       *
       * @param request DescribePdnsUdpIpSegmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsUdpIpSegmentsResponse
       */
      Models::DescribePdnsUdpIpSegmentsResponse describePdnsUdpIpSegmentsWithOptions(const Models::DescribePdnsUdpIpSegmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of Public DNS UDP IP address ranges.
       *
       * @param request DescribePdnsUdpIpSegmentsRequest
       * @return DescribePdnsUdpIpSegmentsResponse
       */
      Models::DescribePdnsUdpIpSegmentsResponse describePdnsUdpIpSegments(const Models::DescribePdnsUdpIpSegmentsRequest &request);

      /**
       * @summary Retrieves user information for Public DNS.
       *
       * @param request DescribePdnsUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePdnsUserInfoResponse
       */
      Models::DescribePdnsUserInfoResponse describePdnsUserInfoWithOptions(const Models::DescribePdnsUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves user information for Public DNS.
       *
       * @param request DescribePdnsUserInfoRequest
       * @return DescribePdnsUserInfoResponse
       */
      Models::DescribePdnsUserInfoResponse describePdnsUserInfo(const Models::DescribePdnsUserInfoRequest &request);

      /**
       * @summary Queries the operation logs for the DNS records of a domain name.
       *
       * @param request DescribeRecordLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordLogsResponse
       */
      Models::DescribeRecordLogsResponse describeRecordLogsWithOptions(const Models::DescribeRecordLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs for the DNS records of a domain name.
       *
       * @param request DescribeRecordLogsRequest
       * @return DescribeRecordLogsResponse
       */
      Models::DescribeRecordLogsResponse describeRecordLogs(const Models::DescribeRecordLogsRequest &request);

      /**
       * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
       *
       * @param request DescribeRecordResolveStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordResolveStatisticsSummaryResponse
       */
      Models::DescribeRecordResolveStatisticsSummaryResponse describeRecordResolveStatisticsSummaryWithOptions(const Models::DescribeRecordResolveStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
       *
       * @param request DescribeRecordResolveStatisticsSummaryRequest
       * @return DescribeRecordResolveStatisticsSummaryResponse
       */
      Models::DescribeRecordResolveStatisticsSummaryResponse describeRecordResolveStatisticsSummary(const Models::DescribeRecordResolveStatisticsSummaryRequest &request);

      /**
       * @summary Queries real-time data about DNS requests for a specified subdomain.
       *
       * @description Real-time data is collected hourly.
       *
       * @param request DescribeRecordStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordStatisticsResponse
       */
      Models::DescribeRecordStatisticsResponse describeRecordStatisticsWithOptions(const Models::DescribeRecordStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries real-time data about DNS requests for a specified subdomain.
       *
       * @description Real-time data is collected hourly.
       *
       * @param request DescribeRecordStatisticsRequest
       * @return DescribeRecordStatisticsResponse
       */
      Models::DescribeRecordStatisticsResponse describeRecordStatistics(const Models::DescribeRecordStatisticsRequest &request);

      /**
       * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
       *
       * @param request DescribeRecordStatisticsSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordStatisticsSummaryResponse
       */
      Models::DescribeRecordStatisticsSummaryResponse describeRecordStatisticsSummaryWithOptions(const Models::DescribeRecordStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
       *
       * @param request DescribeRecordStatisticsSummaryRequest
       * @return DescribeRecordStatisticsSummaryResponse
       */
      Models::DescribeRecordStatisticsSummaryResponse describeRecordStatisticsSummary(const Models::DescribeRecordStatisticsSummaryRequest &request);

      /**
       * @summary Describes a built-in authoritative DNS record used for recursive resolution.
       *
       * @param request DescribeRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecursionRecordResponse
       */
      Models::DescribeRecursionRecordResponse describeRecursionRecordWithOptions(const Models::DescribeRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes a built-in authoritative DNS record used for recursive resolution.
       *
       * @param request DescribeRecursionRecordRequest
       * @return DescribeRecursionRecordResponse
       */
      Models::DescribeRecursionRecordResponse describeRecursionRecord(const Models::DescribeRecursionRecordRequest &request);

      /**
       * @summary Queries the details of an authoritative zone for recursive resolution.
       *
       * @description Real-time data is measured hourly.
       *
       * @param request DescribeRecursionZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecursionZoneResponse
       */
      Models::DescribeRecursionZoneResponse describeRecursionZoneWithOptions(const Models::DescribeRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an authoritative zone for recursive resolution.
       *
       * @description Real-time data is measured hourly.
       *
       * @param request DescribeRecursionZoneRequest
       * @return DescribeRecursionZoneResponse
       */
      Models::DescribeRecursionZoneResponse describeRecursionZone(const Models::DescribeRecursionZoneRequest &request);

      /**
       * @summary Retrieves all DNS records for a specific subdomain based on the specified parameters.
       *
       * @param request DescribeSubDomainRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSubDomainRecordsResponse
       */
      Models::DescribeSubDomainRecordsResponse describeSubDomainRecordsWithOptions(const Models::DescribeSubDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all DNS records for a specific subdomain based on the specified parameters.
       *
       * @param request DescribeSubDomainRecordsRequest
       * @return DescribeSubDomainRecordsResponse
       */
      Models::DescribeSubDomainRecordsResponse describeSubDomainRecords(const Models::DescribeSubDomainRecordsRequest &request);

      /**
       * @summary Queries all lines supported by Cloud DNS.
       *
       * @param request DescribeSupportLinesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSupportLinesResponse
       */
      Models::DescribeSupportLinesResponse describeSupportLinesWithOptions(const Models::DescribeSupportLinesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all lines supported by Cloud DNS.
       *
       * @param request DescribeSupportLinesRequest
       * @return DescribeSupportLinesResponse
       */
      Models::DescribeSupportLinesResponse describeSupportLines(const Models::DescribeSupportLinesRequest &request);

      /**
       * @summary Queries existing tags.
       *
       * @param request DescribeTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTagsWithOptions(const Models::DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries existing tags.
       *
       * @param request DescribeTagsRequest
       * @return DescribeTagsResponse
       */
      Models::DescribeTagsResponse describeTags(const Models::DescribeTagsRequest &request);

      /**
       * @summary Queries the domain names transferred between accounts based on the specified input parameters.
       *
       * @param request DescribeTransferDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTransferDomainsResponse
       */
      Models::DescribeTransferDomainsResponse describeTransferDomainsWithOptions(const Models::DescribeTransferDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names transferred between accounts based on the specified input parameters.
       *
       * @param request DescribeTransferDomainsRequest
       * @return DescribeTransferDomainsResponse
       */
      Models::DescribeTransferDomainsResponse describeTransferDomains(const Models::DescribeTransferDomainsRequest &request);

      /**
       * @summary Executes a disaster recovery plan.
       *
       * @param request ExecuteGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteGtmRecoveryPlanResponse
       */
      Models::ExecuteGtmRecoveryPlanResponse executeGtmRecoveryPlanWithOptions(const Models::ExecuteGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a disaster recovery plan.
       *
       * @param request ExecuteGtmRecoveryPlanRequest
       * @return ExecuteGtmRecoveryPlanResponse
       */
      Models::ExecuteGtmRecoveryPlanResponse executeGtmRecoveryPlan(const Models::ExecuteGtmRecoveryPlanRequest &request);

      /**
       * @summary Retrieves the primary domain name from a specified domain name.
       *
       * @description For more information about primary and subdomain name levels, see
       * <props="china">[Domain name levels](https://help.aliyun.com/document_detail/39803.html?spm=a2c4g.2357293.0.0.211f41ffUR1cPb). For example, if you enter `www.abc.com`, the output is abc.com.
       * <props="intl">[Domain name levels](https://www.alibabacloud.com/help/zh/faq-detail/39803.htm). For example, if you enter `www.abc.com`, the output is abc.com.
       *
       * @param request GetMainDomainNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMainDomainNameResponse
       */
      Models::GetMainDomainNameResponse getMainDomainNameWithOptions(const Models::GetMainDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the primary domain name from a specified domain name.
       *
       * @description For more information about primary and subdomain name levels, see
       * <props="china">[Domain name levels](https://help.aliyun.com/document_detail/39803.html?spm=a2c4g.2357293.0.0.211f41ffUR1cPb). For example, if you enter `www.abc.com`, the output is abc.com.
       * <props="intl">[Domain name levels](https://www.alibabacloud.com/help/zh/faq-detail/39803.htm). For example, if you enter `www.abc.com`, the output is abc.com.
       *
       * @param request GetMainDomainNameRequest
       * @return GetMainDomainNameResponse
       */
      Models::GetMainDomainNameResponse getMainDomainName(const Models::GetMainDomainNameRequest &request);

      /**
       * @summary Generates a TXT record for domain and subdomain verification. This operation supports batch retrieval.
       *
       * @param request GetTxtRecordForVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTxtRecordForVerifyResponse
       */
      Models::GetTxtRecordForVerifyResponse getTxtRecordForVerifyWithOptions(const Models::GetTxtRecordForVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a TXT record for domain and subdomain verification. This operation supports batch retrieval.
       *
       * @param request GetTxtRecordForVerifyRequest
       * @return GetTxtRecordForVerifyResponse
       */
      Models::GetTxtRecordForVerifyResponse getTxtRecordForVerify(const Models::GetTxtRecordForVerifyRequest &request);

      /**
       * @summary Queries the list of Agent registration information.
       *
       * @param request ListAtiAgentRegisterInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAtiAgentRegisterInfosResponse
       */
      Models::ListAtiAgentRegisterInfosResponse listAtiAgentRegisterInfosWithOptions(const Models::ListAtiAgentRegisterInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Agent registration information.
       *
       * @param request ListAtiAgentRegisterInfosRequest
       * @return ListAtiAgentRegisterInfosResponse
       */
      Models::ListAtiAgentRegisterInfosResponse listAtiAgentRegisterInfos(const Models::ListAtiAgentRegisterInfosRequest &request);

      /**
       * @summary Queries the list of real-name registered contacts.
       *
       * @param request ListAtiChangeLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAtiChangeLogsResponse
       */
      Models::ListAtiChangeLogsResponse listAtiChangeLogsWithOptions(const Models::ListAtiChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of real-name registered contacts.
       *
       * @param request ListAtiChangeLogsRequest
       * @return ListAtiChangeLogsResponse
       */
      Models::ListAtiChangeLogsResponse listAtiChangeLogs(const Models::ListAtiChangeLogsRequest &request);

      /**
       * @summary 查询实名注册人列表
       *
       * @param request ListAtiRegistrantsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAtiRegistrantsResponse
       */
      Models::ListAtiRegistrantsResponse listAtiRegistrantsWithOptions(const Models::ListAtiRegistrantsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实名注册人列表
       *
       * @param request ListAtiRegistrantsRequest
       * @return ListAtiRegistrantsResponse
       */
      Models::ListAtiRegistrantsResponse listAtiRegistrants(const Models::ListAtiRegistrantsRequest &request);

      /**
       * @summary Queries the list of address pools in Global Traffic Manager (GTM) 3.0.
       *
       * @param request ListCloudGtmAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAddressPoolsResponse
       */
      Models::ListCloudGtmAddressPoolsResponse listCloudGtmAddressPoolsWithOptions(const Models::ListCloudGtmAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of address pools in Global Traffic Manager (GTM) 3.0.
       *
       * @param request ListCloudGtmAddressPoolsRequest
       * @return ListCloudGtmAddressPoolsResponse
       */
      Models::ListCloudGtmAddressPoolsResponse listCloudGtmAddressPools(const Models::ListCloudGtmAddressPoolsRequest &request);

      /**
       * @summary Queries a list of addresses based on the specified parameters.
       *
       * @param request ListCloudGtmAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAddressesResponse
       */
      Models::ListCloudGtmAddressesResponse listCloudGtmAddressesWithOptions(const Models::ListCloudGtmAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of addresses based on the specified parameters.
       *
       * @param request ListCloudGtmAddressesRequest
       * @return ListCloudGtmAddressesResponse
       */
      Models::ListCloudGtmAddressesResponse listCloudGtmAddresses(const Models::ListCloudGtmAddressesRequest &request);

      /**
       * @summary Queries a list of alert logs.
       *
       * @param request ListCloudGtmAlertLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAlertLogsResponse
       */
      Models::ListCloudGtmAlertLogsResponse listCloudGtmAlertLogsWithOptions(const Models::ListCloudGtmAlertLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of alert logs.
       *
       * @param request ListCloudGtmAlertLogsRequest
       * @return ListCloudGtmAlertLogsResponse
       */
      Models::ListCloudGtmAlertLogsResponse listCloudGtmAlertLogs(const Models::ListCloudGtmAlertLogsRequest &request);

      /**
       * @param request ListCloudGtmAvailableAlertGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmAvailableAlertGroupsResponse
       */
      Models::ListCloudGtmAvailableAlertGroupsResponse listCloudGtmAvailableAlertGroupsWithOptions(const Models::ListCloudGtmAvailableAlertGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListCloudGtmAvailableAlertGroupsRequest
       * @return ListCloudGtmAvailableAlertGroupsResponse
       */
      Models::ListCloudGtmAvailableAlertGroupsResponse listCloudGtmAvailableAlertGroups(const Models::ListCloudGtmAvailableAlertGroupsRequest &request);

      /**
       * @summary Retrieves a list of instance configurations that contain access domain names and address pool information.
       *
       * @param request ListCloudGtmInstanceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmInstanceConfigsResponse
       */
      Models::ListCloudGtmInstanceConfigsResponse listCloudGtmInstanceConfigsWithOptions(const Models::ListCloudGtmInstanceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of instance configurations that contain access domain names and address pool information.
       *
       * @param request ListCloudGtmInstanceConfigsRequest
       * @return ListCloudGtmInstanceConfigsResponse
       */
      Models::ListCloudGtmInstanceConfigsResponse listCloudGtmInstanceConfigs(const Models::ListCloudGtmInstanceConfigsRequest &request);

      /**
       * @summary Retrieves a list of GTM 3.0 instances based on the specified parameters.
       *
       * @param request ListCloudGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmInstancesResponse
       */
      Models::ListCloudGtmInstancesResponse listCloudGtmInstancesWithOptions(const Models::ListCloudGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of GTM 3.0 instances based on the specified parameters.
       *
       * @param request ListCloudGtmInstancesRequest
       * @return ListCloudGtmInstancesResponse
       */
      Models::ListCloudGtmInstancesResponse listCloudGtmInstances(const Models::ListCloudGtmInstancesRequest &request);

      /**
       * @summary Lists the health check monitoring nodes based on the specified input parameters.
       *
       * @param request ListCloudGtmMonitorNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmMonitorNodesResponse
       */
      Models::ListCloudGtmMonitorNodesResponse listCloudGtmMonitorNodesWithOptions(const Models::ListCloudGtmMonitorNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the health check monitoring nodes based on the specified input parameters.
       *
       * @param request ListCloudGtmMonitorNodesRequest
       * @return ListCloudGtmMonitorNodesResponse
       */
      Models::ListCloudGtmMonitorNodesResponse listCloudGtmMonitorNodes(const Models::ListCloudGtmMonitorNodesRequest &request);

      /**
       * @summary Queries health check templates based on the specified parameters.
       *
       * @param request ListCloudGtmMonitorTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudGtmMonitorTemplatesResponse
       */
      Models::ListCloudGtmMonitorTemplatesResponse listCloudGtmMonitorTemplatesWithOptions(const Models::ListCloudGtmMonitorTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries health check templates based on the specified parameters.
       *
       * @param request ListCloudGtmMonitorTemplatesRequest
       * @return ListCloudGtmMonitorTemplatesResponse
       */
      Models::ListCloudGtmMonitorTemplatesResponse listCloudGtmMonitorTemplates(const Models::ListCloudGtmMonitorTemplatesRequest &request);

      /**
       * @summary Lists the built-in authoritative records for recursive resolution.
       *
       * @param request ListRecursionRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecursionRecordsResponse
       */
      Models::ListRecursionRecordsResponse listRecursionRecordsWithOptions(const Models::ListRecursionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the built-in authoritative records for recursive resolution.
       *
       * @param request ListRecursionRecordsRequest
       * @return ListRecursionRecordsResponse
       */
      Models::ListRecursionRecordsResponse listRecursionRecords(const Models::ListRecursionRecordsRequest &request);

      /**
       * @summary Queries the zones that are used for recursive resolution of built-in authoritative domain names.
       *
       * @description - Specify at least ResourceId.N or Tag.N (Tag.N.Key and Tag.N.Value) in your request to identify the resources to retrieve.
       * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with the tag key are returned. An error is returned if you specify only Tag.N.Value.
       * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified key-value pairs are returned.
       * - If you specify multiple tag key-value pairs, the resources that match all of them are returned.
       *
       * @param request ListRecursionZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecursionZonesResponse
       */
      Models::ListRecursionZonesResponse listRecursionZonesWithOptions(const Models::ListRecursionZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones that are used for recursive resolution of built-in authoritative domain names.
       *
       * @description - Specify at least ResourceId.N or Tag.N (Tag.N.Key and Tag.N.Value) in your request to identify the resources to retrieve.
       * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with the tag key are returned. An error is returned if you specify only Tag.N.Value.
       * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified key-value pairs are returned.
       * - If you specify multiple tag key-value pairs, the resources that match all of them are returned.
       *
       * @param request ListRecursionZonesRequest
       * @return ListRecursionZonesResponse
       */
      Models::ListRecursionZonesResponse listRecursionZones(const Models::ListRecursionZonesRequest &request);

      /**
       * @summary Queries resources by tag.
       *
       * @description - To specify the objects to retrieve, your request must contain at least one of the following parameters: `ResourceId.N` or `Tag.N` (which consists of Tag.N.Key and Tag.N.Value).
       * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with that tag key are returned. An error occurs if you specify only Tag.N.Value.
       * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified tag key-value pairs are returned.
       * - If you specify multiple tag key-value pairs, only the resources that have all the specified key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resources by tag.
       *
       * @description - To specify the objects to retrieve, your request must contain at least one of the following parameters: `ResourceId.N` or `Tag.N` (which consists of Tag.N.Key and Tag.N.Value).
       * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with that tag key are returned. An error occurs if you specify only Tag.N.Value.
       * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified tag key-value pairs are returned.
       * - If you specify multiple tag key-value pairs, only the resources that have all the specified key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Changes the DNS servers for a domain name from a third-party provider to Alibaba Cloud DNS.
       *
       * @description After the operation is successful, the DNS servers are changed to Alibaba Cloud DNS servers. The names of these new servers end with hichina.com.
       * > **Prerequisite: This operation applies to domain names that are registered with Alibaba Cloud and currently use third-party DNS servers.**
       *
       * @param request ModifyHichinaDomainDNSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHichinaDomainDNSResponse
       */
      Models::ModifyHichinaDomainDNSResponse modifyHichinaDomainDNSWithOptions(const Models::ModifyHichinaDomainDNSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the DNS servers for a domain name from a third-party provider to Alibaba Cloud DNS.
       *
       * @description After the operation is successful, the DNS servers are changed to Alibaba Cloud DNS servers. The names of these new servers end with hichina.com.
       * > **Prerequisite: This operation applies to domain names that are registered with Alibaba Cloud and currently use third-party DNS servers.**
       *
       * @param request ModifyHichinaDomainDNSRequest
       * @return ModifyHichinaDomainDNSResponse
       */
      Models::ModifyHichinaDomainDNSResponse modifyHichinaDomainDNS(const Models::ModifyHichinaDomainDNSRequest &request);

      /**
       * @summary Moves a domain name to a different resource group.
       *
       * @param request MoveDomainResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveDomainResourceGroupResponse
       */
      Models::MoveDomainResourceGroupResponse moveDomainResourceGroupWithOptions(const Models::MoveDomainResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a domain name to a different resource group.
       *
       * @param request MoveDomainResourceGroupRequest
       * @return MoveDomainResourceGroupResponse
       */
      Models::MoveDomainResourceGroupResponse moveDomainResourceGroup(const Models::MoveDomainResourceGroupRequest &request);

      /**
       * @summary Moves a Global Traffic Manager (GTM) instance to a new resource group.
       *
       * @param request MoveGtmResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveGtmResourceGroupResponse
       */
      Models::MoveGtmResourceGroupResponse moveGtmResourceGroupWithOptions(const Models::MoveGtmResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves a Global Traffic Manager (GTM) instance to a new resource group.
       *
       * @param request MoveGtmResourceGroupRequest
       * @return MoveGtmResourceGroupResponse
       */
      Models::MoveGtmResourceGroupResponse moveGtmResourceGroup(const Models::MoveGtmResourceGroupRequest &request);

      /**
       * @summary Adds or deletes domain names and DNS records in batches.
       *
       * @description Use this operation for batch DNS tasks that do not require immediate execution.
       *
       * @param request OperateBatchDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateBatchDomainResponse
       */
      Models::OperateBatchDomainResponse operateBatchDomainWithOptions(const Models::OperateBatchDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or deletes domain names and DNS records in batches.
       *
       * @description Use this operation for batch DNS tasks that do not require immediate execution.
       *
       * @param request OperateBatchDomainRequest
       * @return OperateBatchDomainResponse
       */
      Models::OperateBatchDomainResponse operateBatchDomain(const Models::OperateBatchDomainRequest &request);

      /**
       * @summary Pause Public DNS Service
       *
       * @param request PausePdnsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PausePdnsServiceResponse
       */
      Models::PausePdnsServiceResponse pausePdnsServiceWithOptions(const Models::PausePdnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pause Public DNS Service
       *
       * @param request PausePdnsServiceRequest
       * @return PausePdnsServiceResponse
       */
      Models::PausePdnsServiceResponse pausePdnsService(const Models::PausePdnsServiceRequest &request);

      /**
       * @summary Previews a disaster recovery plan.
       *
       * @param request PreviewGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreviewGtmRecoveryPlanResponse
       */
      Models::PreviewGtmRecoveryPlanResponse previewGtmRecoveryPlanWithOptions(const Models::PreviewGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Previews a disaster recovery plan.
       *
       * @param request PreviewGtmRecoveryPlanRequest
       * @return PreviewGtmRecoveryPlanResponse
       */
      Models::PreviewGtmRecoveryPlanResponse previewGtmRecoveryPlan(const Models::PreviewGtmRecoveryPlanRequest &request);

      /**
       * @summary Delete Public DNS AppKey
       *
       * @param request RemovePdnsAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePdnsAppKeyResponse
       */
      Models::RemovePdnsAppKeyResponse removePdnsAppKeyWithOptions(const Models::RemovePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Public DNS AppKey
       *
       * @param request RemovePdnsAppKeyRequest
       * @return RemovePdnsAppKeyResponse
       */
      Models::RemovePdnsAppKeyResponse removePdnsAppKey(const Models::RemovePdnsAppKeyRequest &request);

      /**
       * @summary Remove Public DNS UDP IP Segment
       *
       * @param request RemovePdnsUdpIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePdnsUdpIpSegmentResponse
       */
      Models::RemovePdnsUdpIpSegmentResponse removePdnsUdpIpSegmentWithOptions(const Models::RemovePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove Public DNS UDP IP Segment
       *
       * @param request RemovePdnsUdpIpSegmentRequest
       * @return RemovePdnsUdpIpSegmentResponse
       */
      Models::RemovePdnsUdpIpSegmentResponse removePdnsUdpIpSegment(const Models::RemovePdnsUdpIpSegmentRequest &request);

      /**
       * @summary Removes the serverHold status of a specified domain name.
       *
       * @description ## Description
       * - This operation removes the serverHold status of a specified domain name.
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRspDomainServerHoldStatusForGatewayResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayResponse removeRspDomainServerHoldStatusForGatewayWithOptions(const Models::RemoveRspDomainServerHoldStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the serverHold status of a specified domain name.
       *
       * @description ## Description
       * - This operation removes the serverHold status of a specified domain name.
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayRequest
       * @return RemoveRspDomainServerHoldStatusForGatewayResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayResponse removeRspDomainServerHoldStatusForGateway(const Models::RemoveRspDomainServerHoldStatusForGatewayRequest &request);

      /**
       * @summary Removes the serverHold status for a specified domain name.
       *
       * @description ## Description
       * - This operation removes the serverHold status for a specified domain name.
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayOteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayOteResponse removeRspDomainServerHoldStatusForGatewayOteWithOptions(const Models::RemoveRspDomainServerHoldStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the serverHold status for a specified domain name.
       *
       * @description ## Description
       * - This operation removes the serverHold status for a specified domain name.
       *
       * @param request RemoveRspDomainServerHoldStatusForGatewayOteRequest
       * @return RemoveRspDomainServerHoldStatusForGatewayOteResponse
       */
      Models::RemoveRspDomainServerHoldStatusForGatewayOteResponse removeRspDomainServerHoldStatusForGatewayOte(const Models::RemoveRspDomainServerHoldStatusForGatewayOteRequest &request);

      /**
       * @summary Replaces the addresses in a specified address pool.
       *
       * @param tmpReq ReplaceCloudGtmAddressPoolAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceCloudGtmAddressPoolAddressResponse
       */
      Models::ReplaceCloudGtmAddressPoolAddressResponse replaceCloudGtmAddressPoolAddressWithOptions(const Models::ReplaceCloudGtmAddressPoolAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the addresses in a specified address pool.
       *
       * @param request ReplaceCloudGtmAddressPoolAddressRequest
       * @return ReplaceCloudGtmAddressPoolAddressResponse
       */
      Models::ReplaceCloudGtmAddressPoolAddressResponse replaceCloudGtmAddressPoolAddress(const Models::ReplaceCloudGtmAddressPoolAddressRequest &request);

      /**
       * @summary Replaces the address pools associated with an instance.
       *
       * @param tmpReq ReplaceCloudGtmInstanceConfigAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceCloudGtmInstanceConfigAddressPoolResponse
       */
      Models::ReplaceCloudGtmInstanceConfigAddressPoolResponse replaceCloudGtmInstanceConfigAddressPoolWithOptions(const Models::ReplaceCloudGtmInstanceConfigAddressPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the address pools associated with an instance.
       *
       * @param request ReplaceCloudGtmInstanceConfigAddressPoolRequest
       * @return ReplaceCloudGtmInstanceConfigAddressPoolResponse
       */
      Models::ReplaceCloudGtmInstanceConfigAddressPoolResponse replaceCloudGtmInstanceConfigAddressPool(const Models::ReplaceCloudGtmInstanceConfigAddressPoolRequest &request);

      /**
       * @summary Resume Public DNS Service
       *
       * @param request ResumePdnsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumePdnsServiceResponse
       */
      Models::ResumePdnsServiceResponse resumePdnsServiceWithOptions(const Models::ResumePdnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resume Public DNS Service
       *
       * @param request ResumePdnsServiceRequest
       * @return ResumePdnsServiceResponse
       */
      Models::ResumePdnsServiceResponse resumePdnsService(const Models::ResumePdnsServiceRequest &request);

      /**
       * @summary Retrieves a domain name.
       *
       * @description Before you can retrieve a domain name, you must verify it using a TXT record. Use this operation in conjunction with the <props="china">[Generate a TXT record](https://help.aliyun.com/document_detail/145533.html) <props="intl">[Generate a TXT record](https://www.alibabacloud.com/help/zh/alibaba-cloud-dns/latest/generating-a-txt-record) operation.
       *
       * @param request RetrieveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveDomainResponse
       */
      Models::RetrieveDomainResponse retrieveDomainWithOptions(const Models::RetrieveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a domain name.
       *
       * @description Before you can retrieve a domain name, you must verify it using a TXT record. Use this operation in conjunction with the <props="china">[Generate a TXT record](https://help.aliyun.com/document_detail/145533.html) <props="intl">[Generate a TXT record](https://www.alibabacloud.com/help/zh/alibaba-cloud-dns/latest/generating-a-txt-record) operation.
       *
       * @param request RetrieveDomainRequest
       * @return RetrieveDomainResponse
       */
      Models::RetrieveDomainResponse retrieveDomain(const Models::RetrieveDomainRequest &request);

      /**
       * @summary Revokes the registration information of an Agent.
       *
       * @param request RevokeAtiAgentRegisterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAtiAgentRegisterInfoResponse
       */
      Models::RevokeAtiAgentRegisterInfoResponse revokeAtiAgentRegisterInfoWithOptions(const Models::RevokeAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the registration information of an Agent.
       *
       * @param request RevokeAtiAgentRegisterInfoRequest
       * @return RevokeAtiAgentRegisterInfoResponse
       */
      Models::RevokeAtiAgentRegisterInfoResponse revokeAtiAgentRegisterInfo(const Models::RevokeAtiAgentRegisterInfoRequest &request);

      /**
       * @summary Revokes a real-name registrant.
       *
       * @param request RevokeAtiRegistrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeAtiRegistrantResponse
       */
      Models::RevokeAtiRegistrantResponse revokeAtiRegistrantWithOptions(const Models::RevokeAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a real-name registrant.
       *
       * @param request RevokeAtiRegistrantRequest
       * @return RevokeAtiRegistrantResponse
       */
      Models::RevokeAtiRegistrantResponse revokeAtiRegistrant(const Models::RevokeAtiRegistrantRequest &request);

      /**
       * @summary Rolls back a disaster recovery plan.
       *
       * @param request RollbackGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackGtmRecoveryPlanResponse
       */
      Models::RollbackGtmRecoveryPlanResponse rollbackGtmRecoveryPlanWithOptions(const Models::RollbackGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a disaster recovery plan.
       *
       * @param request RollbackGtmRecoveryPlanRequest
       * @return RollbackGtmRecoveryPlanResponse
       */
      Models::RollbackGtmRecoveryPlanResponse rollbackGtmRecoveryPlan(const Models::RollbackGtmRecoveryPlanRequest &request);

      /**
       * @summary Searches for agents in the Agent Marketplace.
       *
       * @param request SearchAtiAgentRegisterInfoMarketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchAtiAgentRegisterInfoMarketResponse
       */
      Models::SearchAtiAgentRegisterInfoMarketResponse searchAtiAgentRegisterInfoMarketWithOptions(const Models::SearchAtiAgentRegisterInfoMarketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for agents in the Agent Marketplace.
       *
       * @param request SearchAtiAgentRegisterInfoMarketRequest
       * @return SearchAtiAgentRegisterInfoMarketResponse
       */
      Models::SearchAtiAgentRegisterInfoMarketResponse searchAtiAgentRegisterInfoMarket(const Models::SearchAtiAgentRegisterInfoMarketRequest &request);

      /**
       * @summary Searches for address pools by name, remarks, or other criteria.
       *
       * @param request SearchCloudGtmAddressPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmAddressPoolsResponse
       */
      Models::SearchCloudGtmAddressPoolsResponse searchCloudGtmAddressPoolsWithOptions(const Models::SearchCloudGtmAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for address pools by name, remarks, or other criteria.
       *
       * @param request SearchCloudGtmAddressPoolsRequest
       * @return SearchCloudGtmAddressPoolsResponse
       */
      Models::SearchCloudGtmAddressPoolsResponse searchCloudGtmAddressPools(const Models::SearchCloudGtmAddressPoolsRequest &request);

      /**
       * @summary Searches for addresses based on criteria such as address name, remarks, referenced health check template, or address ID.
       *
       * @param request SearchCloudGtmAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmAddressesResponse
       */
      Models::SearchCloudGtmAddressesResponse searchCloudGtmAddressesWithOptions(const Models::SearchCloudGtmAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for addresses based on criteria such as address name, remarks, referenced health check template, or address ID.
       *
       * @param request SearchCloudGtmAddressesRequest
       * @return SearchCloudGtmAddressesResponse
       */
      Models::SearchCloudGtmAddressesResponse searchCloudGtmAddresses(const Models::SearchCloudGtmAddressesRequest &request);

      /**
       * @summary Retrieves instance configurations that match the specified parameters.
       *
       * @param request SearchCloudGtmInstanceConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmInstanceConfigsResponse
       */
      Models::SearchCloudGtmInstanceConfigsResponse searchCloudGtmInstanceConfigsWithOptions(const Models::SearchCloudGtmInstanceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves instance configurations that match the specified parameters.
       *
       * @param request SearchCloudGtmInstanceConfigsRequest
       * @return SearchCloudGtmInstanceConfigsResponse
       */
      Models::SearchCloudGtmInstanceConfigsResponse searchCloudGtmInstanceConfigs(const Models::SearchCloudGtmInstanceConfigsRequest &request);

      /**
       * @summary This operation searches for instances based on specified parameters.
       *
       * @param request SearchCloudGtmInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmInstancesResponse
       */
      Models::SearchCloudGtmInstancesResponse searchCloudGtmInstancesWithOptions(const Models::SearchCloudGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation searches for instances based on specified parameters.
       *
       * @param request SearchCloudGtmInstancesRequest
       * @return SearchCloudGtmInstancesResponse
       */
      Models::SearchCloudGtmInstancesResponse searchCloudGtmInstances(const Models::SearchCloudGtmInstancesRequest &request);

      /**
       * @summary Searches for health check templates.
       *
       * @param request SearchCloudGtmMonitorTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCloudGtmMonitorTemplatesResponse
       */
      Models::SearchCloudGtmMonitorTemplatesResponse searchCloudGtmMonitorTemplatesWithOptions(const Models::SearchCloudGtmMonitorTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for health check templates.
       *
       * @param request SearchCloudGtmMonitorTemplatesRequest
       * @return SearchCloudGtmMonitorTemplatesResponse
       */
      Models::SearchCloudGtmMonitorTemplatesResponse searchCloudGtmMonitorTemplates(const Models::SearchCloudGtmMonitorTemplatesRequest &request);

      /**
       * @summary Searches for built-in authoritative DNS records used for recursive resolution.
       *
       * @param request SearchRecursionRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchRecursionRecordsResponse
       */
      Models::SearchRecursionRecordsResponse searchRecursionRecordsWithOptions(const Models::SearchRecursionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for built-in authoritative DNS records used for recursive resolution.
       *
       * @param request SearchRecursionRecordsRequest
       * @return SearchRecursionRecordsResponse
       */
      Models::SearchRecursionRecordsResponse searchRecursionRecords(const Models::SearchRecursionRecordsRequest &request);

      /**
       * @summary Searches for zones of built-in authoritative domain names used for recursive resolution.
       *
       * @description - To retrieve resources, you must specify at least `ResourceId.N` or `Tag.N` (`Tag.N.Key` and `Tag.N.Value`) in the request.
       * - `Tag.N` is a resource tag that consists of a key-value pair. If you specify only `Tag.N.Key`, all tag values associated with that key are returned. If you specify only `Tag.N.Value`, an error is returned.
       * - If you specify both `Tag.N` and `ResourceId.N`, the operation returns only the resources that are identified by `ResourceId.N` and match all the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, only resources that match all of them are returned.
       *
       * @param tmpReq SearchRecursionZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchRecursionZonesResponse
       */
      Models::SearchRecursionZonesResponse searchRecursionZonesWithOptions(const Models::SearchRecursionZonesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for zones of built-in authoritative domain names used for recursive resolution.
       *
       * @description - To retrieve resources, you must specify at least `ResourceId.N` or `Tag.N` (`Tag.N.Key` and `Tag.N.Value`) in the request.
       * - `Tag.N` is a resource tag that consists of a key-value pair. If you specify only `Tag.N.Key`, all tag values associated with that key are returned. If you specify only `Tag.N.Value`, an error is returned.
       * - If you specify both `Tag.N` and `ResourceId.N`, the operation returns only the resources that are identified by `ResourceId.N` and match all the specified tag key-value pairs.
       * - If you specify multiple tag key-value pairs, only resources that match all of them are returned.
       *
       * @param request SearchRecursionZonesRequest
       * @return SearchRecursionZonesResponse
       */
      Models::SearchRecursionZonesResponse searchRecursionZones(const Models::SearchRecursionZonesRequest &request);

      /**
       * @summary Enables or disables the network traffic analysis feature for a Global Traffic Manager (GTM) instance. After this feature is enabled, you can view resolution logs and statistical reports for the domain name. You can also use the intelligent alerting feature based on abnormal metrics, such as resolution success rate and sudden changes in queries per second (QPS). This improves the observability and operations and maintenance (O&M) efficiency of the GTM instance.
       *
       * @param request SetCloudGtmInstanceConfigLogSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCloudGtmInstanceConfigLogSwitchResponse
       */
      Models::SetCloudGtmInstanceConfigLogSwitchResponse setCloudGtmInstanceConfigLogSwitchWithOptions(const Models::SetCloudGtmInstanceConfigLogSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the network traffic analysis feature for a Global Traffic Manager (GTM) instance. After this feature is enabled, you can view resolution logs and statistical reports for the domain name. You can also use the intelligent alerting feature based on abnormal metrics, such as resolution success rate and sudden changes in queries per second (QPS). This improves the observability and operations and maintenance (O&M) efficiency of the GTM instance.
       *
       * @param request SetCloudGtmInstanceConfigLogSwitchRequest
       * @return SetCloudGtmInstanceConfigLogSwitchResponse
       */
      Models::SetCloudGtmInstanceConfigLogSwitchResponse setCloudGtmInstanceConfigLogSwitch(const Models::SetCloudGtmInstanceConfigLogSwitchRequest &request);

      /**
       * @summary Enables or disables the weight configuration.
       *
       * @param request SetDNSSLBStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDNSSLBStatusResponse
       */
      Models::SetDNSSLBStatusResponse setDNSSLBStatusWithOptions(const Models::SetDNSSLBStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the weight configuration.
       *
       * @param request SetDNSSLBStatusRequest
       * @return SetDNSSLBStatusResponse
       */
      Models::SetDNSSLBStatusResponse setDNSSLBStatus(const Models::SetDNSSLBStatusRequest &request);

      /**
       * @summary Sets the access mode for an access policy.
       *
       * @description ***
       *
       * @param request SetDnsGtmAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDnsGtmAccessModeResponse
       */
      Models::SetDnsGtmAccessModeResponse setDnsGtmAccessModeWithOptions(const Models::SetDnsGtmAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the access mode for an access policy.
       *
       * @description ***
       *
       * @param request SetDnsGtmAccessModeRequest
       * @return SetDnsGtmAccessModeResponse
       */
      Models::SetDnsGtmAccessModeResponse setDnsGtmAccessMode(const Models::SetDnsGtmAccessModeRequest &request);

      /**
       * @summary Sets the health check status for an address pool.
       *
       * @param request SetDnsGtmMonitorStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDnsGtmMonitorStatusResponse
       */
      Models::SetDnsGtmMonitorStatusResponse setDnsGtmMonitorStatusWithOptions(const Models::SetDnsGtmMonitorStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the health check status for an address pool.
       *
       * @param request SetDnsGtmMonitorStatusRequest
       * @return SetDnsGtmMonitorStatusResponse
       */
      Models::SetDnsGtmMonitorStatusResponse setDnsGtmMonitorStatus(const Models::SetDnsGtmMonitorStatusRequest &request);

      /**
       * @summary Enables or disables Domain Name System Security Extensions (DNSSEC) for a domain name. This feature is available only to users of paid Alibaba Cloud DNS.
       *
       * @param request SetDomainDnssecStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainDnssecStatusResponse
       */
      Models::SetDomainDnssecStatusResponse setDomainDnssecStatusWithOptions(const Models::SetDomainDnssecStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables Domain Name System Security Extensions (DNSSEC) for a domain name. This feature is available only to users of paid Alibaba Cloud DNS.
       *
       * @param request SetDomainDnssecStatusRequest
       * @return SetDomainDnssecStatusResponse
       */
      Models::SetDomainDnssecStatusResponse setDomainDnssecStatus(const Models::SetDomainDnssecStatusRequest &request);

      /**
       * @summary Sets the status of a DNS record.
       *
       * @param request SetDomainRecordStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDomainRecordStatusResponse
       */
      Models::SetDomainRecordStatusResponse setDomainRecordStatusWithOptions(const Models::SetDomainRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the status of a DNS record.
       *
       * @param request SetDomainRecordStatusRequest
       * @return SetDomainRecordStatusResponse
       */
      Models::SetDomainRecordStatusResponse setDomainRecordStatus(const Models::SetDomainRecordStatusRequest &request);

      /**
       * @summary Modifies the address pool switchover policy based on the request parameters.
       *
       * @param request SetGtmAccessModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetGtmAccessModeResponse
       */
      Models::SetGtmAccessModeResponse setGtmAccessModeWithOptions(const Models::SetGtmAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the address pool switchover policy based on the request parameters.
       *
       * @param request SetGtmAccessModeRequest
       * @return SetGtmAccessModeResponse
       */
      Models::SetGtmAccessModeResponse setGtmAccessMode(const Models::SetGtmAccessModeRequest &request);

      /**
       * @summary Sets the health check status of an address pool.
       *
       * @param request SetGtmMonitorStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetGtmMonitorStatusResponse
       */
      Models::SetGtmMonitorStatusResponse setGtmMonitorStatusWithOptions(const Models::SetGtmMonitorStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the health check status of an address pool.
       *
       * @param request SetGtmMonitorStatusRequest
       * @return SetGtmMonitorStatusResponse
       */
      Models::SetGtmMonitorStatusResponse setGtmMonitorStatus(const Models::SetGtmMonitorStatusRequest &request);

      /**
       * @summary Submits Agent registration information.
       *
       * @param request SubmitAtiAgentRegisterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAtiAgentRegisterInfoResponse
       */
      Models::SubmitAtiAgentRegisterInfoResponse submitAtiAgentRegisterInfoWithOptions(const Models::SubmitAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits Agent registration information.
       *
       * @param request SubmitAtiAgentRegisterInfoRequest
       * @return SubmitAtiAgentRegisterInfoResponse
       */
      Models::SubmitAtiAgentRegisterInfoResponse submitAtiAgentRegisterInfo(const Models::SubmitAtiAgentRegisterInfoRequest &request);

      /**
       * @summary Submits a cache refresh task.
       *
       * @param request SubmitIspFlushCacheTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitIspFlushCacheTaskResponse
       */
      Models::SubmitIspFlushCacheTaskResponse submitIspFlushCacheTaskWithOptions(const Models::SubmitIspFlushCacheTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a cache refresh task.
       *
       * @param request SubmitIspFlushCacheTaskRequest
       * @return SubmitIspFlushCacheTaskResponse
       */
      Models::SubmitIspFlushCacheTaskResponse submitIspFlushCacheTask(const Models::SubmitIspFlushCacheTaskRequest &request);

      /**
       * @summary Switches the access strategy mode of an instance.
       *
       * @param request SwitchDnsGtmInstanceStrategyModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchDnsGtmInstanceStrategyModeResponse
       */
      Models::SwitchDnsGtmInstanceStrategyModeResponse switchDnsGtmInstanceStrategyModeWithOptions(const Models::SwitchDnsGtmInstanceStrategyModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switches the access strategy mode of an instance.
       *
       * @param request SwitchDnsGtmInstanceStrategyModeRequest
       * @return SwitchDnsGtmInstanceStrategyModeResponse
       */
      Models::SwitchDnsGtmInstanceStrategyModeResponse switchDnsGtmInstanceStrategyMode(const Models::SwitchDnsGtmInstanceStrategyModeRequest &request);

      /**
       * @summary Adds or modifies tags for resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies tags for resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Batch transfers DNS permissions for multiple domain names to a specified execution account.
       *
       * @param request TransferDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferDomainResponse
       */
      Models::TransferDomainResponse transferDomainWithOptions(const Models::TransferDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch transfers DNS permissions for multiple domain names to a specified execution account.
       *
       * @param request TransferDomainRequest
       * @return TransferDomainResponse
       */
      Models::TransferDomainResponse transferDomain(const Models::TransferDomainRequest &request);

      /**
       * @summary Detaches domain names from a paid Alibaba Cloud DNS instance.
       *
       * @description An instance with an ID that starts with \\`dns-\\` is a new version instance. New version instances support attaching multiple domain names. You can call an API operation to attach domain names directly to an instance. An error is returned if the number of domain names exceeds the instance limit.
       * An instance with an ID that does not start with \\`dns-\\` is a legacy instance. Legacy instances support only one domain name. Therefore, if you call this operation for an instance that already has a domain name attached, the domain name is replaced.
       *
       * @param request UnbindInstanceDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindInstanceDomainsResponse
       */
      Models::UnbindInstanceDomainsResponse unbindInstanceDomainsWithOptions(const Models::UnbindInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches domain names from a paid Alibaba Cloud DNS instance.
       *
       * @description An instance with an ID that starts with \\`dns-\\` is a new version instance. New version instances support attaching multiple domain names. You can call an API operation to attach domain names directly to an instance. An error is returned if the number of domain names exceeds the instance limit.
       * An instance with an ID that does not start with \\`dns-\\` is a legacy instance. Legacy instances support only one domain name. Therefore, if you call this operation for an instance that already has a domain name attached, the domain name is replaced.
       *
       * @param request UnbindInstanceDomainsRequest
       * @return UnbindInstanceDomainsResponse
       */
      Models::UnbindInstanceDomainsResponse unbindInstanceDomains(const Models::UnbindInstanceDomainsRequest &request);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modify AppKey State
       *
       * @param request UpdateAppKeyStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAppKeyStateResponse
       */
      Models::UpdateAppKeyStateResponse updateAppKeyStateWithOptions(const Models::UpdateAppKeyStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify AppKey State
       *
       * @param request UpdateAppKeyStateRequest
       * @return UpdateAppKeyStateResponse
       */
      Models::UpdateAppKeyStateResponse updateAppKeyState(const Models::UpdateAppKeyStateRequest &request);

      /**
       * @summary Updates the registration information of an Agent.
       *
       * @param tmpReq UpdateAtiAgentRegisterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAtiAgentRegisterInfoResponse
       */
      Models::UpdateAtiAgentRegisterInfoResponse updateAtiAgentRegisterInfoWithOptions(const Models::UpdateAtiAgentRegisterInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the registration information of an Agent.
       *
       * @param request UpdateAtiAgentRegisterInfoRequest
       * @return UpdateAtiAgentRegisterInfoResponse
       */
      Models::UpdateAtiAgentRegisterInfoResponse updateAtiAgentRegisterInfo(const Models::UpdateAtiAgentRegisterInfoRequest &request);

      /**
       * @summary 更新告警设置
       *
       * @param request UpdateAtiAlertSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAtiAlertSettingsResponse
       */
      Models::UpdateAtiAlertSettingsResponse updateAtiAlertSettingsWithOptions(const Models::UpdateAtiAlertSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新告警设置
       *
       * @param request UpdateAtiAlertSettingsRequest
       * @return UpdateAtiAlertSettingsResponse
       */
      Models::UpdateAtiAlertSettingsResponse updateAtiAlertSettings(const Models::UpdateAtiAlertSettingsRequest &request);

      /**
       * @summary Modifies a registrant profile.
       *
       * @param request UpdateAtiRegistrantRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAtiRegistrantResponse
       */
      Models::UpdateAtiRegistrantResponse updateAtiRegistrantWithOptions(const Models::UpdateAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a registrant profile.
       *
       * @param request UpdateAtiRegistrantRequest
       * @return UpdateAtiRegistrantResponse
       */
      Models::UpdateAtiRegistrantResponse updateAtiRegistrant(const Models::UpdateAtiRegistrantRequest &request);

      /**
       * @summary Modifies the basic configuration of a specified address, such as the address name, type, and value.
       *
       * @param tmpReq UpdateCloudGtmAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressResponse
       */
      Models::UpdateCloudGtmAddressResponse updateCloudGtmAddressWithOptions(const Models::UpdateCloudGtmAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic configuration of a specified address, such as the address name, type, and value.
       *
       * @param request UpdateCloudGtmAddressRequest
       * @return UpdateCloudGtmAddressResponse
       */
      Models::UpdateCloudGtmAddressResponse updateCloudGtmAddress(const Models::UpdateCloudGtmAddressRequest &request);

      /**
       * @summary Updates the enabled status of an address.
       *
       * @description - The service status of an address is **active** if the address is **enabled** and its health check status is **Normal**.
       * - The service status of an address is **unavailable** if the address is **disabled** or its health check status is **abnormal**.
       *
       * @param request UpdateCloudGtmAddressEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressEnableStatusResponse updateCloudGtmAddressEnableStatusWithOptions(const Models::UpdateCloudGtmAddressEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the enabled status of an address.
       *
       * @description - The service status of an address is **active** if the address is **enabled** and its health check status is **Normal**.
       * - The service status of an address is **unavailable** if the address is **disabled** or its health check status is **abnormal**.
       *
       * @param request UpdateCloudGtmAddressEnableStatusRequest
       * @return UpdateCloudGtmAddressEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressEnableStatusResponse updateCloudGtmAddressEnableStatus(const Models::UpdateCloudGtmAddressEnableStatusRequest &request);

      /**
       * @summary Updates the failover method for an address based on the specified parameters.
       *
       * @param request UpdateCloudGtmAddressManualAvailableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressManualAvailableStatusResponse
       */
      Models::UpdateCloudGtmAddressManualAvailableStatusResponse updateCloudGtmAddressManualAvailableStatusWithOptions(const Models::UpdateCloudGtmAddressManualAvailableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the failover method for an address based on the specified parameters.
       *
       * @param request UpdateCloudGtmAddressManualAvailableStatusRequest
       * @return UpdateCloudGtmAddressManualAvailableStatusResponse
       */
      Models::UpdateCloudGtmAddressManualAvailableStatusResponse updateCloudGtmAddressManualAvailableStatus(const Models::UpdateCloudGtmAddressManualAvailableStatusRequest &request);

      /**
       * @summary Modifies the basic configuration of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolBasicConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolBasicConfigResponse
       */
      Models::UpdateCloudGtmAddressPoolBasicConfigResponse updateCloudGtmAddressPoolBasicConfigWithOptions(const Models::UpdateCloudGtmAddressPoolBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the basic configuration of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolBasicConfigRequest
       * @return UpdateCloudGtmAddressPoolBasicConfigResponse
       */
      Models::UpdateCloudGtmAddressPoolBasicConfigResponse updateCloudGtmAddressPoolBasicConfig(const Models::UpdateCloudGtmAddressPoolBasicConfigRequest &request);

      /**
       * @summary Updates the enabled status of an address pool.
       *
       * @description - An address pool is considered **active** if it is **enabled** and its health check status is **Normal**.
       * - An address pool is considered **unavailable** if it is **disabled** or its health check status is **abnormal**.
       *
       * @param request UpdateCloudGtmAddressPoolEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressPoolEnableStatusResponse updateCloudGtmAddressPoolEnableStatusWithOptions(const Models::UpdateCloudGtmAddressPoolEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the enabled status of an address pool.
       *
       * @description - An address pool is considered **active** if it is **enabled** and its health check status is **Normal**.
       * - An address pool is considered **unavailable** if it is **disabled** or its health check status is **abnormal**.
       *
       * @param request UpdateCloudGtmAddressPoolEnableStatusRequest
       * @return UpdateCloudGtmAddressPoolEnableStatusResponse
       */
      Models::UpdateCloudGtmAddressPoolEnableStatusResponse updateCloudGtmAddressPoolEnableStatus(const Models::UpdateCloudGtmAddressPoolEnableStatusRequest &request);

      /**
       * @summary Updates the load balancing policy of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolLbStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolLbStrategyResponse
       */
      Models::UpdateCloudGtmAddressPoolLbStrategyResponse updateCloudGtmAddressPoolLbStrategyWithOptions(const Models::UpdateCloudGtmAddressPoolLbStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the load balancing policy of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolLbStrategyRequest
       * @return UpdateCloudGtmAddressPoolLbStrategyResponse
       */
      Models::UpdateCloudGtmAddressPoolLbStrategyResponse updateCloudGtmAddressPoolLbStrategy(const Models::UpdateCloudGtmAddressPoolLbStrategyRequest &request);

      /**
       * @summary Updates the remarks of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressPoolRemarkResponse
       */
      Models::UpdateCloudGtmAddressPoolRemarkResponse updateCloudGtmAddressPoolRemarkWithOptions(const Models::UpdateCloudGtmAddressPoolRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks of an address pool.
       *
       * @param request UpdateCloudGtmAddressPoolRemarkRequest
       * @return UpdateCloudGtmAddressPoolRemarkResponse
       */
      Models::UpdateCloudGtmAddressPoolRemarkResponse updateCloudGtmAddressPoolRemark(const Models::UpdateCloudGtmAddressPoolRemarkRequest &request);

      /**
       * @summary Updates the remarks for an address in Global Traffic Manager (GTM) 3.0.
       *
       * @param request UpdateCloudGtmAddressRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmAddressRemarkResponse
       */
      Models::UpdateCloudGtmAddressRemarkResponse updateCloudGtmAddressRemarkWithOptions(const Models::UpdateCloudGtmAddressRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks for an address in Global Traffic Manager (GTM) 3.0.
       *
       * @param request UpdateCloudGtmAddressRemarkRequest
       * @return UpdateCloudGtmAddressRemarkResponse
       */
      Models::UpdateCloudGtmAddressRemarkResponse updateCloudGtmAddressRemark(const Models::UpdateCloudGtmAddressRemarkRequest &request);

      /**
       * @summary 更新全局流量管理告警设置
       *
       * @param tmpReq UpdateCloudGtmGlobalAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmGlobalAlertResponse
       */
      Models::UpdateCloudGtmGlobalAlertResponse updateCloudGtmGlobalAlertWithOptions(const Models::UpdateCloudGtmGlobalAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新全局流量管理告警设置
       *
       * @param request UpdateCloudGtmGlobalAlertRequest
       * @return UpdateCloudGtmGlobalAlertResponse
       */
      Models::UpdateCloudGtmGlobalAlertResponse updateCloudGtmGlobalAlert(const Models::UpdateCloudGtmGlobalAlertRequest &request);

      /**
       * @param tmpReq UpdateCloudGtmInstanceConfigAlertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigAlertResponse
       */
      Models::UpdateCloudGtmInstanceConfigAlertResponse updateCloudGtmInstanceConfigAlertWithOptions(const Models::UpdateCloudGtmInstanceConfigAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCloudGtmInstanceConfigAlertRequest
       * @return UpdateCloudGtmInstanceConfigAlertResponse
       */
      Models::UpdateCloudGtmInstanceConfigAlertResponse updateCloudGtmInstanceConfigAlert(const Models::UpdateCloudGtmInstanceConfigAlertRequest &request);

      /**
       * @summary Updates the global TTL configuration of a Global Traffic Manager (GTM) 3.0 instance based on the specified parameters.
       *
       * @param request UpdateCloudGtmInstanceConfigBasicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigBasicResponse
       */
      Models::UpdateCloudGtmInstanceConfigBasicResponse updateCloudGtmInstanceConfigBasicWithOptions(const Models::UpdateCloudGtmInstanceConfigBasicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the global TTL configuration of a Global Traffic Manager (GTM) 3.0 instance based on the specified parameters.
       *
       * @param request UpdateCloudGtmInstanceConfigBasicRequest
       * @return UpdateCloudGtmInstanceConfigBasicResponse
       */
      Models::UpdateCloudGtmInstanceConfigBasicResponse updateCloudGtmInstanceConfigBasic(const Models::UpdateCloudGtmInstanceConfigBasicRequest &request);

      /**
       * @summary Updates the enablement status of an instance configuration based on the input parameters.
       *
       * @description - If a domain name is **enabled** and its health status is **Normal**, the service associated with the access domain name is **active**.
       * - If a domain name is **disabled** or its health status is **abnormal**, the service associated with the access domain name is **unavailable**.
       *
       * @param request UpdateCloudGtmInstanceConfigEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigEnableStatusResponse
       */
      Models::UpdateCloudGtmInstanceConfigEnableStatusResponse updateCloudGtmInstanceConfigEnableStatusWithOptions(const Models::UpdateCloudGtmInstanceConfigEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the enablement status of an instance configuration based on the input parameters.
       *
       * @description - If a domain name is **enabled** and its health status is **Normal**, the service associated with the access domain name is **active**.
       * - If a domain name is **disabled** or its health status is **abnormal**, the service associated with the access domain name is **unavailable**.
       *
       * @param request UpdateCloudGtmInstanceConfigEnableStatusRequest
       * @return UpdateCloudGtmInstanceConfigEnableStatusResponse
       */
      Models::UpdateCloudGtmInstanceConfigEnableStatusResponse updateCloudGtmInstanceConfigEnableStatus(const Models::UpdateCloudGtmInstanceConfigEnableStatusRequest &request);

      /**
       * @summary Updates the load balancing policy for an instance configuration.
       *
       * @param request UpdateCloudGtmInstanceConfigLbStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigLbStrategyResponse
       */
      Models::UpdateCloudGtmInstanceConfigLbStrategyResponse updateCloudGtmInstanceConfigLbStrategyWithOptions(const Models::UpdateCloudGtmInstanceConfigLbStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the load balancing policy for an instance configuration.
       *
       * @param request UpdateCloudGtmInstanceConfigLbStrategyRequest
       * @return UpdateCloudGtmInstanceConfigLbStrategyResponse
       */
      Models::UpdateCloudGtmInstanceConfigLbStrategyResponse updateCloudGtmInstanceConfigLbStrategy(const Models::UpdateCloudGtmInstanceConfigLbStrategyRequest &request);

      /**
       * @summary Updates the remarks for an instance configuration.
       *
       * @param request UpdateCloudGtmInstanceConfigRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceConfigRemarkResponse
       */
      Models::UpdateCloudGtmInstanceConfigRemarkResponse updateCloudGtmInstanceConfigRemarkWithOptions(const Models::UpdateCloudGtmInstanceConfigRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks for an instance configuration.
       *
       * @param request UpdateCloudGtmInstanceConfigRemarkRequest
       * @return UpdateCloudGtmInstanceConfigRemarkResponse
       */
      Models::UpdateCloudGtmInstanceConfigRemarkResponse updateCloudGtmInstanceConfigRemark(const Models::UpdateCloudGtmInstanceConfigRemarkRequest &request);

      /**
       * @param request UpdateCloudGtmInstanceNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmInstanceNameResponse
       */
      Models::UpdateCloudGtmInstanceNameResponse updateCloudGtmInstanceNameWithOptions(const Models::UpdateCloudGtmInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCloudGtmInstanceNameRequest
       * @return UpdateCloudGtmInstanceNameResponse
       */
      Models::UpdateCloudGtmInstanceNameResponse updateCloudGtmInstanceName(const Models::UpdateCloudGtmInstanceNameRequest &request);

      /**
       * @summary Updates the configuration of a health check template.
       *
       * @param tmpReq UpdateCloudGtmMonitorTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmMonitorTemplateResponse
       */
      Models::UpdateCloudGtmMonitorTemplateResponse updateCloudGtmMonitorTemplateWithOptions(const Models::UpdateCloudGtmMonitorTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a health check template.
       *
       * @param request UpdateCloudGtmMonitorTemplateRequest
       * @return UpdateCloudGtmMonitorTemplateResponse
       */
      Models::UpdateCloudGtmMonitorTemplateResponse updateCloudGtmMonitorTemplate(const Models::UpdateCloudGtmMonitorTemplateRequest &request);

      /**
       * @param request UpdateCloudGtmMonitorTemplateRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudGtmMonitorTemplateRemarkResponse
       */
      Models::UpdateCloudGtmMonitorTemplateRemarkResponse updateCloudGtmMonitorTemplateRemarkWithOptions(const Models::UpdateCloudGtmMonitorTemplateRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateCloudGtmMonitorTemplateRemarkRequest
       * @return UpdateCloudGtmMonitorTemplateRemarkResponse
       */
      Models::UpdateCloudGtmMonitorTemplateRemarkResponse updateCloudGtmMonitorTemplateRemark(const Models::UpdateCloudGtmMonitorTemplateRemarkRequest &request);

      /**
       * @summary Updates a custom line specified by its unique ID.
       *
       * @description For each IP range, the value of EndIp must be greater than or equal to the value of StartIp.
       * The IP ranges of IP ranges cannot overlap across all custom lines for a domain name.
       *
       * @param request UpdateCustomLineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLineWithOptions(const Models::UpdateCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom line specified by its unique ID.
       *
       * @description For each IP range, the value of EndIp must be greater than or equal to the value of StartIp.
       * The IP ranges of IP ranges cannot overlap across all custom lines for a domain name.
       *
       * @param request UpdateCustomLineRequest
       * @return UpdateCustomLineResponse
       */
      Models::UpdateCustomLineResponse updateCustomLine(const Models::UpdateCustomLineRequest &request);

      /**
       * @summary Modifies the weight of a DNS record based on the specified parameters.
       *
       * @param request UpdateDNSSLBWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDNSSLBWeightResponse
       */
      Models::UpdateDNSSLBWeightResponse updateDNSSLBWeightWithOptions(const Models::UpdateDNSSLBWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weight of a DNS record based on the specified parameters.
       *
       * @param request UpdateDNSSLBWeightRequest
       * @return UpdateDNSSLBWeightResponse
       */
      Models::UpdateDNSSLBWeightResponse updateDNSSLBWeight(const Models::UpdateDNSSLBWeightRequest &request);

      /**
       * @summary Updates a DNS authoritative proxy domain.
       *
       * @param request UpdateDnsCacheDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsCacheDomainResponse
       */
      Models::UpdateDnsCacheDomainResponse updateDnsCacheDomainWithOptions(const Models::UpdateDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a DNS authoritative proxy domain.
       *
       * @param request UpdateDnsCacheDomainRequest
       * @return UpdateDnsCacheDomainResponse
       */
      Models::UpdateDnsCacheDomainResponse updateDnsCacheDomain(const Models::UpdateDnsCacheDomainRequest &request);

      /**
       * @summary Updates the remark for a domain name in the DNS cache.
       *
       * @param request UpdateDnsCacheDomainRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsCacheDomainRemarkResponse
       */
      Models::UpdateDnsCacheDomainRemarkResponse updateDnsCacheDomainRemarkWithOptions(const Models::UpdateDnsCacheDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remark for a domain name in the DNS cache.
       *
       * @param request UpdateDnsCacheDomainRemarkRequest
       * @return UpdateDnsCacheDomainRemarkResponse
       */
      Models::UpdateDnsCacheDomainRemarkResponse updateDnsCacheDomainRemark(const Models::UpdateDnsCacheDomainRemarkRequest &request);

      /**
       * @summary Updates an existing access policy.
       *
       * @param request UpdateDnsGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmAccessStrategyResponse
       */
      Models::UpdateDnsGtmAccessStrategyResponse updateDnsGtmAccessStrategyWithOptions(const Models::UpdateDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an existing access policy.
       *
       * @param request UpdateDnsGtmAccessStrategyRequest
       * @return UpdateDnsGtmAccessStrategyResponse
       */
      Models::UpdateDnsGtmAccessStrategyResponse updateDnsGtmAccessStrategy(const Models::UpdateDnsGtmAccessStrategyRequest &request);

      /**
       * @summary Updates the configuration of an address pool.
       *
       * @param request UpdateDnsGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmAddressPoolResponse
       */
      Models::UpdateDnsGtmAddressPoolResponse updateDnsGtmAddressPoolWithOptions(const Models::UpdateDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an address pool.
       *
       * @param request UpdateDnsGtmAddressPoolRequest
       * @return UpdateDnsGtmAddressPoolResponse
       */
      Models::UpdateDnsGtmAddressPoolResponse updateDnsGtmAddressPool(const Models::UpdateDnsGtmAddressPoolRequest &request);

      /**
       * @summary Updates the configuration of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateDnsGtmInstanceGlobalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmInstanceGlobalConfigResponse
       */
      Models::UpdateDnsGtmInstanceGlobalConfigResponse updateDnsGtmInstanceGlobalConfigWithOptions(const Models::UpdateDnsGtmInstanceGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateDnsGtmInstanceGlobalConfigRequest
       * @return UpdateDnsGtmInstanceGlobalConfigResponse
       */
      Models::UpdateDnsGtmInstanceGlobalConfigResponse updateDnsGtmInstanceGlobalConfig(const Models::UpdateDnsGtmInstanceGlobalConfigRequest &request);

      /**
       * @summary Modifies a health check configuration.
       *
       * @param request UpdateDnsGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDnsGtmMonitorResponse
       */
      Models::UpdateDnsGtmMonitorResponse updateDnsGtmMonitorWithOptions(const Models::UpdateDnsGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a health check configuration.
       *
       * @param request UpdateDnsGtmMonitorRequest
       * @return UpdateDnsGtmMonitorResponse
       */
      Models::UpdateDnsGtmMonitorResponse updateDnsGtmMonitor(const Models::UpdateDnsGtmMonitorRequest &request);

      /**
       * @summary Modifies the name of a domain name group.
       *
       * @description This operation modifies the name of an existing domain name group.
       *
       * @param request UpdateDomainGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainGroupResponse
       */
      Models::UpdateDomainGroupResponse updateDomainGroupWithOptions(const Models::UpdateDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a domain name group.
       *
       * @description This operation modifies the name of an existing domain name group.
       *
       * @param request UpdateDomainGroupRequest
       * @return UpdateDomainGroupResponse
       */
      Models::UpdateDomainGroupResponse updateDomainGroup(const Models::UpdateDomainGroupRequest &request);

      /**
       * @summary Modifies a DNS record based on the specified parameters.
       *
       * @param request UpdateDomainRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainRecordResponse
       */
      Models::UpdateDomainRecordResponse updateDomainRecordWithOptions(const Models::UpdateDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a DNS record based on the specified parameters.
       *
       * @param request UpdateDomainRecordRequest
       * @return UpdateDomainRecordResponse
       */
      Models::UpdateDomainRecordResponse updateDomainRecord(const Models::UpdateDomainRecordRequest &request);

      /**
       * @summary Updates the remarks of a DNS record.
       *
       * @param request UpdateDomainRecordRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainRecordRemarkResponse
       */
      Models::UpdateDomainRecordRemarkResponse updateDomainRecordRemarkWithOptions(const Models::UpdateDomainRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks of a DNS record.
       *
       * @param request UpdateDomainRecordRemarkRequest
       * @return UpdateDomainRecordRemarkResponse
       */
      Models::UpdateDomainRecordRemarkResponse updateDomainRecordRemark(const Models::UpdateDomainRecordRemarkRequest &request);

      /**
       * @summary Updates the remarks for a domain name.
       *
       * @param request UpdateDomainRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainRemarkResponse
       */
      Models::UpdateDomainRemarkResponse updateDomainRemarkWithOptions(const Models::UpdateDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks for a domain name.
       *
       * @param request UpdateDomainRemarkRequest
       * @return UpdateDomainRemarkResponse
       */
      Models::UpdateDomainRemarkResponse updateDomainRemark(const Models::UpdateDomainRemarkRequest &request);

      /**
       * @summary Updates an access policy.
       *
       * @param request UpdateGtmAccessStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmAccessStrategyResponse
       */
      Models::UpdateGtmAccessStrategyResponse updateGtmAccessStrategyWithOptions(const Models::UpdateGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an access policy.
       *
       * @param request UpdateGtmAccessStrategyRequest
       * @return UpdateGtmAccessStrategyResponse
       */
      Models::UpdateGtmAccessStrategyResponse updateGtmAccessStrategy(const Models::UpdateGtmAccessStrategyRequest &request);

      /**
       * @summary Modifies an address pool.
       *
       * @param request UpdateGtmAddressPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmAddressPoolResponse
       */
      Models::UpdateGtmAddressPoolResponse updateGtmAddressPoolWithOptions(const Models::UpdateGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an address pool.
       *
       * @param request UpdateGtmAddressPoolRequest
       * @return UpdateGtmAddressPoolResponse
       */
      Models::UpdateGtmAddressPoolResponse updateGtmAddressPool(const Models::UpdateGtmAddressPoolRequest &request);

      /**
       * @summary Updates the global configuration of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateGtmInstanceGlobalConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmInstanceGlobalConfigResponse
       */
      Models::UpdateGtmInstanceGlobalConfigResponse updateGtmInstanceGlobalConfigWithOptions(const Models::UpdateGtmInstanceGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the global configuration of a Global Traffic Manager (GTM) instance.
       *
       * @param request UpdateGtmInstanceGlobalConfigRequest
       * @return UpdateGtmInstanceGlobalConfigResponse
       */
      Models::UpdateGtmInstanceGlobalConfigResponse updateGtmInstanceGlobalConfig(const Models::UpdateGtmInstanceGlobalConfigRequest &request);

      /**
       * @summary Updates a health check configuration.
       *
       * @param request UpdateGtmMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmMonitorResponse
       */
      Models::UpdateGtmMonitorResponse updateGtmMonitorWithOptions(const Models::UpdateGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a health check configuration.
       *
       * @param request UpdateGtmMonitorRequest
       * @return UpdateGtmMonitorResponse
       */
      Models::UpdateGtmMonitorResponse updateGtmMonitor(const Models::UpdateGtmMonitorRequest &request);

      /**
       * @summary Updates a disaster recovery plan.
       *
       * @param request UpdateGtmRecoveryPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGtmRecoveryPlanResponse
       */
      Models::UpdateGtmRecoveryPlanResponse updateGtmRecoveryPlanWithOptions(const Models::UpdateGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a disaster recovery plan.
       *
       * @param request UpdateGtmRecoveryPlanRequest
       * @return UpdateGtmRecoveryPlanResponse
       */
      Models::UpdateGtmRecoveryPlanResponse updateGtmRecoveryPlan(const Models::UpdateGtmRecoveryPlanRequest &request);

      /**
       * @summary Modifies the configuration of a cache refresh plan.
       *
       * @param request UpdateIspFlushCacheInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIspFlushCacheInstanceConfigResponse
       */
      Models::UpdateIspFlushCacheInstanceConfigResponse updateIspFlushCacheInstanceConfigWithOptions(const Models::UpdateIspFlushCacheInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a cache refresh plan.
       *
       * @param request UpdateIspFlushCacheInstanceConfigRequest
       * @return UpdateIspFlushCacheInstanceConfigResponse
       */
      Models::UpdateIspFlushCacheInstanceConfigResponse updateIspFlushCacheInstanceConfig(const Models::UpdateIspFlushCacheInstanceConfigRequest &request);

      /**
       * @summary Modifies a built-in authoritative record for recursive resolution.
       *
       * @description If a DNS record is locked, it cannot be deleted.
       *
       * @param request UpdateRecursionRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordResponse
       */
      Models::UpdateRecursionRecordResponse updateRecursionRecordWithOptions(const Models::UpdateRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a built-in authoritative record for recursive resolution.
       *
       * @description If a DNS record is locked, it cannot be deleted.
       *
       * @param request UpdateRecursionRecordRequest
       * @return UpdateRecursionRecordResponse
       */
      Models::UpdateRecursionRecordResponse updateRecursionRecord(const Models::UpdateRecursionRecordRequest &request);

      /**
       * @summary Updates the enable status of a recursion record.
       *
       * @param request UpdateRecursionRecordEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordEnableStatusResponse
       */
      Models::UpdateRecursionRecordEnableStatusResponse updateRecursionRecordEnableStatusWithOptions(const Models::UpdateRecursionRecordEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the enable status of a recursion record.
       *
       * @param request UpdateRecursionRecordEnableStatusRequest
       * @return UpdateRecursionRecordEnableStatusResponse
       */
      Models::UpdateRecursionRecordEnableStatusResponse updateRecursionRecordEnableStatus(const Models::UpdateRecursionRecordEnableStatusRequest &request);

      /**
       * @summary Updates the remarks for a built-in authoritative record in HTTPDNS.
       *
       * @param request UpdateRecursionRecordRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordRemarkResponse
       */
      Models::UpdateRecursionRecordRemarkResponse updateRecursionRecordRemarkWithOptions(const Models::UpdateRecursionRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the remarks for a built-in authoritative record in HTTPDNS.
       *
       * @param request UpdateRecursionRecordRemarkRequest
       * @return UpdateRecursionRecordRemarkResponse
       */
      Models::UpdateRecursionRecordRemarkResponse updateRecursionRecordRemark(const Models::UpdateRecursionRecordRemarkRequest &request);

      /**
       * @summary Updates the weight of a DNS record for recursive resolution.
       *
       * @param request UpdateRecursionRecordWeightRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordWeightResponse
       */
      Models::UpdateRecursionRecordWeightResponse updateRecursionRecordWeightWithOptions(const Models::UpdateRecursionRecordWeightRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the weight of a DNS record for recursive resolution.
       *
       * @param request UpdateRecursionRecordWeightRequest
       * @return UpdateRecursionRecordWeightResponse
       */
      Models::UpdateRecursionRecordWeightResponse updateRecursionRecordWeight(const Models::UpdateRecursionRecordWeightRequest &request);

      /**
       * @summary Updates the enabled status of the weight algorithm for a DNS record used for recursive resolution.
       *
       * @param request UpdateRecursionRecordWeightEnableStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionRecordWeightEnableStatusResponse
       */
      Models::UpdateRecursionRecordWeightEnableStatusResponse updateRecursionRecordWeightEnableStatusWithOptions(const Models::UpdateRecursionRecordWeightEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the enabled status of the weight algorithm for a DNS record used for recursive resolution.
       *
       * @param request UpdateRecursionRecordWeightEnableStatusRequest
       * @return UpdateRecursionRecordWeightEnableStatusResponse
       */
      Models::UpdateRecursionRecordWeightEnableStatusResponse updateRecursionRecordWeightEnableStatus(const Models::UpdateRecursionRecordWeightEnableStatusRequest &request);

      /**
       * @summary Updates the effective scope of a built-in authoritative domain name zone in HTTPDNS.
       *
       * @param tmpReq UpdateRecursionZoneEffectiveScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionZoneEffectiveScopeResponse
       */
      Models::UpdateRecursionZoneEffectiveScopeResponse updateRecursionZoneEffectiveScopeWithOptions(const Models::UpdateRecursionZoneEffectiveScopeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the effective scope of a built-in authoritative domain name zone in HTTPDNS.
       *
       * @param request UpdateRecursionZoneEffectiveScopeRequest
       * @return UpdateRecursionZoneEffectiveScopeResponse
       */
      Models::UpdateRecursionZoneEffectiveScopeResponse updateRecursionZoneEffectiveScope(const Models::UpdateRecursionZoneEffectiveScopeRequest &request);

      /**
       * @summary Modifies the recursive proxy mode for a zone.
       *
       * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
       * The IP address ranges of all IP segments for the domain name cannot overlap across custom lines.
       *
       * @param request UpdateRecursionZoneProxyPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionZoneProxyPatternResponse
       */
      Models::UpdateRecursionZoneProxyPatternResponse updateRecursionZoneProxyPatternWithOptions(const Models::UpdateRecursionZoneProxyPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the recursive proxy mode for a zone.
       *
       * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
       * The IP address ranges of all IP segments for the domain name cannot overlap across custom lines.
       *
       * @param request UpdateRecursionZoneProxyPatternRequest
       * @return UpdateRecursionZoneProxyPatternResponse
       */
      Models::UpdateRecursionZoneProxyPatternResponse updateRecursionZoneProxyPattern(const Models::UpdateRecursionZoneProxyPatternRequest &request);

      /**
       * @summary Modifies the remarks for a built-in authoritative domain name zone used for recursive resolution.
       *
       * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
       * For a domain name, the IP address ranges of all IP segments in all custom lines cannot overlap.
       *
       * @param request UpdateRecursionZoneRemarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRecursionZoneRemarkResponse
       */
      Models::UpdateRecursionZoneRemarkResponse updateRecursionZoneRemarkWithOptions(const Models::UpdateRecursionZoneRemarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the remarks for a built-in authoritative domain name zone used for recursive resolution.
       *
       * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
       * For a domain name, the IP address ranges of all IP segments in all custom lines cannot overlap.
       *
       * @param request UpdateRecursionZoneRemarkRequest
       * @return UpdateRecursionZoneRemarkResponse
       */
      Models::UpdateRecursionZoneRemarkResponse updateRecursionZoneRemark(const Models::UpdateRecursionZoneRemarkRequest &request);

      /**
       * @summary Updates the server-side status of a domain name.
       *
       * @description ## Request description
       * - This operation updates the server-side status of a domain name.
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRspDomainServerProhibitStatusForGatewayResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayResponse updateRspDomainServerProhibitStatusForGatewayWithOptions(const Models::UpdateRspDomainServerProhibitStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the server-side status of a domain name.
       *
       * @description ## Request description
       * - This operation updates the server-side status of a domain name.
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayRequest
       * @return UpdateRspDomainServerProhibitStatusForGatewayResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayResponse updateRspDomainServerProhibitStatusForGateway(const Models::UpdateRspDomainServerProhibitStatusForGatewayRequest &request);

      /**
       * @summary Updates the server-side status of a domain name.
       *
       * @description This operation updates the server-side status of a domain name.
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayOteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRspDomainServerProhibitStatusForGatewayOteResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayOteResponse updateRspDomainServerProhibitStatusForGatewayOteWithOptions(const Models::UpdateRspDomainServerProhibitStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the server-side status of a domain name.
       *
       * @description This operation updates the server-side status of a domain name.
       *
       * @param request UpdateRspDomainServerProhibitStatusForGatewayOteRequest
       * @return UpdateRspDomainServerProhibitStatusForGatewayOteResponse
       */
      Models::UpdateRspDomainServerProhibitStatusForGatewayOteResponse updateRspDomainServerProhibitStatusForGatewayOte(const Models::UpdateRspDomainServerProhibitStatusForGatewayOteRequest &request);

      /**
       * @summary Checks whether an instance hostname can be added.
       *
       * @param request ValidateDnsGtmCnameRrCanUseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidateDnsGtmCnameRrCanUseResponse
       */
      Models::ValidateDnsGtmCnameRrCanUseResponse validateDnsGtmCnameRrCanUseWithOptions(const Models::ValidateDnsGtmCnameRrCanUseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether an instance hostname can be added.
       *
       * @param request ValidateDnsGtmCnameRrCanUseRequest
       * @return ValidateDnsGtmCnameRrCanUseResponse
       */
      Models::ValidateDnsGtmCnameRrCanUseResponse validateDnsGtmCnameRrCanUse(const Models::ValidateDnsGtmCnameRrCanUseRequest &request);

      /**
       * @summary Validates a UDP IP address segment for Public DNS.
       *
       * @param request ValidatePdnsUdpIpSegmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidatePdnsUdpIpSegmentResponse
       */
      Models::ValidatePdnsUdpIpSegmentResponse validatePdnsUdpIpSegmentWithOptions(const Models::ValidatePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates a UDP IP address segment for Public DNS.
       *
       * @param request ValidatePdnsUdpIpSegmentRequest
       * @return ValidatePdnsUdpIpSegmentResponse
       */
      Models::ValidatePdnsUdpIpSegmentResponse validatePdnsUdpIpSegment(const Models::ValidatePdnsUdpIpSegmentRequest &request);

      /**
       * @summary Verifies DNS records.
       *
       * @param request VerifyAtiAgentDnsRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyAtiAgentDnsRecordsResponse
       */
      Models::VerifyAtiAgentDnsRecordsResponse verifyAtiAgentDnsRecordsWithOptions(const Models::VerifyAtiAgentDnsRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies DNS records.
       *
       * @param request VerifyAtiAgentDnsRecordsRequest
       * @return VerifyAtiAgentDnsRecordsResponse
       */
      Models::VerifyAtiAgentDnsRecordsResponse verifyAtiAgentDnsRecords(const Models::VerifyAtiAgentDnsRecordsRequest &request);

      /**
       * @summary 触发 ACME 预检
       *
       * @param request VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse
       */
      Models::VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse verifyAtiAgentRegisterInfoAcmeChallengeRecordWithOptions(const Models::VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发 ACME 预检
       *
       * @param request VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest
       * @return VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse
       */
      Models::VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse verifyAtiAgentRegisterInfoAcmeChallengeRecord(const Models::VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
