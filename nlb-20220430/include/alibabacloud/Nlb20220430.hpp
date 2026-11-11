// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NLB20220430_HPP_
#define ALIBABACLOUD_NLB20220430_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Nlb20220430Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Nlb20220430.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds backend servers to a Network Load Balancer (NLB) server group.
       *
       * @param request AddServersToServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddServersToServerGroupResponse
       */
      Models::AddServersToServerGroupResponse addServersToServerGroupWithOptions(const Models::AddServersToServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers to a Network Load Balancer (NLB) server group.
       *
       * @param request AddServersToServerGroupRequest
       * @return AddServersToServerGroupResponse
       */
      Models::AddServersToServerGroupResponse addServersToServerGroup(const Models::AddServersToServerGroupRequest &request);

      /**
       * @summary Associates additional certificates with a TCPSSL listener.
       *
       * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. The system returns a request ID, but the additional certificates are not immediately added. The addition task is still running in the background. You can call [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) to query the addition status of the additional certificates:
       * - When the TCPSSL listener is in the **Associating** state, the additional certificates are being added.
       * - When the TCPSSL listener is in the **Associated** state, the additional certificates are added.
       *
       * @param request AssociateAdditionalCertificatesWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateAdditionalCertificatesWithListenerResponse
       */
      Models::AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListenerWithOptions(const Models::AssociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates additional certificates with a TCPSSL listener.
       *
       * @description **AssociateAdditionalCertificatesWithListener** is an asynchronous operation. The system returns a request ID, but the additional certificates are not immediately added. The addition task is still running in the background. You can call [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) to query the addition status of the additional certificates:
       * - When the TCPSSL listener is in the **Associating** state, the additional certificates are being added.
       * - When the TCPSSL listener is in the **Associated** state, the additional certificates are added.
       *
       * @param request AssociateAdditionalCertificatesWithListenerRequest
       * @return AssociateAdditionalCertificatesWithListenerResponse
       */
      Models::AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListener(const Models::AssociateAdditionalCertificatesWithListenerRequest &request);

      /**
       * @summary Associates an Internet Shared Bandwidth with a Network Load Balancer (NLB) instance.
       *
       * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachCommonBandwidthPackageToLoadBalancerResponse
       */
      Models::AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancerWithOptions(const Models::AttachCommonBandwidthPackageToLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an Internet Shared Bandwidth with a Network Load Balancer (NLB) instance.
       *
       * @param request AttachCommonBandwidthPackageToLoadBalancerRequest
       * @return AttachCommonBandwidthPackageToLoadBalancerResponse
       */
      Models::AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancer(const Models::AttachCommonBandwidthPackageToLoadBalancerRequest &request);

      /**
       * @summary Adds the EIP or VIP of a zone back to DNS resolution.
       *
       * @description When you call this operation, you must have already removed a zone from the NLB instance by calling the [StartShiftLoadBalancerZones](https://help.aliyun.com/document_detail/2411999.html) operation or in the console.
       *
       * @param request CancelShiftLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelShiftLoadBalancerZonesResponse
       */
      Models::CancelShiftLoadBalancerZonesResponse cancelShiftLoadBalancerZonesWithOptions(const Models::CancelShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the EIP or VIP of a zone back to DNS resolution.
       *
       * @description When you call this operation, you must have already removed a zone from the NLB instance by calling the [StartShiftLoadBalancerZones](https://help.aliyun.com/document_detail/2411999.html) operation or in the console.
       *
       * @param request CancelShiftLoadBalancerZonesRequest
       * @return CancelShiftLoadBalancerZonesResponse
       */
      Models::CancelShiftLoadBalancerZonesResponse cancelShiftLoadBalancerZones(const Models::CancelShiftLoadBalancerZonesRequest &request);

      /**
       * @summary Creates a TCP, UDP, or TCPSSL listener on a Network Load Balancer (NLB) instance.
       *
       * @param tmpReq CreateListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListenerWithOptions(const Models::CreateListenerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a TCP, UDP, or TCPSSL listener on a Network Load Balancer (NLB) instance.
       *
       * @param request CreateListenerRequest
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListener(const Models::CreateListenerRequest &request);

      /**
       * @summary Creates a Network Load Balancing (NLB) instance.
       *
       * @description - When you create a Network Load Balancing (NLB) instance, the system automatically creates the AliyunServiceRoleForNlb service-linked role for you.
       * - The **CreateLoadBalancer** operation is asynchronous. The system returns an instance ID, but the Network Load Balancing (NLB) instance is not yet created and the creation task is still running in the background. You can invoke the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the creation status of the Network Load Balancing (NLB) instance:
       *     - If the Network Load Balancing (NLB) instance is in the **Provisioning** state, the Network Load Balancing (NLB) instance is being created.
       *     - If the Network Load Balancing (NLB) instance is in the **Active** state, the Network Load Balancing (NLB) instance is created.
       *
       * @param request CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Network Load Balancing (NLB) instance.
       *
       * @description - When you create a Network Load Balancing (NLB) instance, the system automatically creates the AliyunServiceRoleForNlb service-linked role for you.
       * - The **CreateLoadBalancer** operation is asynchronous. The system returns an instance ID, but the Network Load Balancing (NLB) instance is not yet created and the creation task is still running in the background. You can invoke the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the creation status of the Network Load Balancing (NLB) instance:
       *     - If the Network Load Balancing (NLB) instance is in the **Provisioning** state, the Network Load Balancing (NLB) instance is being created.
       *     - If the Network Load Balancing (NLB) instance is in the **Active** state, the Network Load Balancing (NLB) instance is created.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Creates a custom security policy for a TCPSSL listener in a specified region.
       *
       * @param request CreateSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityPolicyResponse
       */
      Models::CreateSecurityPolicyResponse createSecurityPolicyWithOptions(const Models::CreateSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom security policy for a TCPSSL listener in a specified region.
       *
       * @param request CreateSecurityPolicyRequest
       * @return CreateSecurityPolicyResponse
       */
      Models::CreateSecurityPolicyResponse createSecurityPolicy(const Models::CreateSecurityPolicyRequest &request);

      /**
       * @summary Creates a server group in a specified region.
       *
       * @description The **CreateServerGroup** operation is asynchronous. The system returns a request ID, but the server group of the Network Load Balancer (NLB) is not yet created, and the creation task is still running in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the creation status of the server group:
       *    - If the task status is **Succeeded**, the server group is created.
       *    - If the task status is **Processing**, the server group is being created. In this state, you can only perform query operations and cannot perform other operations.
       *
       * @param request CreateServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServerGroupResponse
       */
      Models::CreateServerGroupResponse createServerGroupWithOptions(const Models::CreateServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a server group in a specified region.
       *
       * @description The **CreateServerGroup** operation is asynchronous. The system returns a request ID, but the server group of the Network Load Balancer (NLB) is not yet created, and the creation task is still running in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the creation status of the server group:
       *    - If the task status is **Succeeded**, the server group is created.
       *    - If the task status is **Processing**, the server group is being created. In this state, you can only perform query operations and cannot perform other operations.
       *
       * @param request CreateServerGroupRequest
       * @return CreateServerGroupResponse
       */
      Models::CreateServerGroupResponse createServerGroup(const Models::CreateServerGroupRequest &request);

      /**
       * @summary Deletes a Network Load Balancer (NLB) listener.
       *
       * @param request DeleteListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListenerWithOptions(const Models::DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Network Load Balancer (NLB) listener.
       *
       * @param request DeleteListenerRequest
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListener(const Models::DeleteListenerRequest &request);

      /**
       * @summary Deletes a Network Load Balancer (NLB) instance.
       *
       * @param request DeleteLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(const Models::DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Network Load Balancer (NLB) instance.
       *
       * @param request DeleteLoadBalancerRequest
       * @return DeleteLoadBalancerResponse
       */
      Models::DeleteLoadBalancerResponse deleteLoadBalancer(const Models::DeleteLoadBalancerRequest &request);

      /**
       * @summary Deletes a custom TLS security policy for Network Load Balancer (NLB).
       *
       * @param request DeleteSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityPolicyResponse
       */
      Models::DeleteSecurityPolicyResponse deleteSecurityPolicyWithOptions(const Models::DeleteSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom TLS security policy for Network Load Balancer (NLB).
       *
       * @param request DeleteSecurityPolicyRequest
       * @return DeleteSecurityPolicyResponse
       */
      Models::DeleteSecurityPolicyResponse deleteSecurityPolicy(const Models::DeleteSecurityPolicyRequest &request);

      /**
       * @summary Deletes a server group of a Network Load Balancer (NLB).
       *
       * @description You can delete a server group only when it is not used by any listener.
       *
       * @param request DeleteServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteServerGroupResponse
       */
      Models::DeleteServerGroupResponse deleteServerGroupWithOptions(const Models::DeleteServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a server group of a Network Load Balancer (NLB).
       *
       * @description You can delete a server group only when it is not used by any listener.
       *
       * @param request DeleteServerGroupRequest
       * @return DeleteServerGroupResponse
       */
      Models::DeleteServerGroupResponse deleteServerGroup(const Models::DeleteServerGroupRequest &request);

      /**
       * @summary Queries the storage configuration for second-level monitoring.
       *
       * @description Queries the data warehouse configured for second-level monitoring storage in the current region.
       *
       * @param request DescribeHdMonitorRegionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHdMonitorRegionConfigResponse
       */
      Models::DescribeHdMonitorRegionConfigResponse describeHdMonitorRegionConfigWithOptions(const Models::DescribeHdMonitorRegionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage configuration for second-level monitoring.
       *
       * @description Queries the data warehouse configured for second-level monitoring storage in the current region.
       *
       * @param request DescribeHdMonitorRegionConfigRequest
       * @return DescribeHdMonitorRegionConfigResponse
       */
      Models::DescribeHdMonitorRegionConfigResponse describeHdMonitorRegionConfig(const Models::DescribeHdMonitorRegionConfigRequest &request);

      /**
       * @summary Queries the available regions for NLB.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available regions for NLB.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Queries the zones in a region for Network Load Balancer (NLB).
       *
       * @param request DescribeZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZonesWithOptions(const Models::DescribeZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones in a region for Network Load Balancer (NLB).
       *
       * @param request DescribeZonesRequest
       * @return DescribeZonesResponse
       */
      Models::DescribeZonesResponse describeZones(const Models::DescribeZonesRequest &request);

      /**
       * @summary Disassociates an Internet Shared Bandwidth plan from a Network Load Balancer (NLB) instance.
       *
       * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
       */
      Models::DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancerWithOptions(const Models::DetachCommonBandwidthPackageFromLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an Internet Shared Bandwidth plan from a Network Load Balancer (NLB) instance.
       *
       * @param request DetachCommonBandwidthPackageFromLoadBalancerRequest
       * @return DetachCommonBandwidthPackageFromLoadBalancerResponse
       */
      Models::DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancer(const Models::DetachCommonBandwidthPackageFromLoadBalancerRequest &request);

      /**
       * @summary Changes the IPv6 address of a dual-stack Network Load Balancer (NLB) instance from public to private.
       *
       * @param request DisableLoadBalancerIpv6InternetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableLoadBalancerIpv6InternetResponse
       */
      Models::DisableLoadBalancerIpv6InternetResponse disableLoadBalancerIpv6InternetWithOptions(const Models::DisableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the IPv6 address of a dual-stack Network Load Balancer (NLB) instance from public to private.
       *
       * @param request DisableLoadBalancerIpv6InternetRequest
       * @return DisableLoadBalancerIpv6InternetResponse
       */
      Models::DisableLoadBalancerIpv6InternetResponse disableLoadBalancerIpv6Internet(const Models::DisableLoadBalancerIpv6InternetRequest &request);

      /**
       * @summary Disassociates additional certificates from a listener that uses SSL over TCP.
       *
       * @description **DisassociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) operation to query the status of the task:
       * *   If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated.
       * *   If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
       *
       * @param request DisassociateAdditionalCertificatesWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateAdditionalCertificatesWithListenerResponse
       */
      Models::DisassociateAdditionalCertificatesWithListenerResponse disassociateAdditionalCertificatesWithListenerWithOptions(const Models::DisassociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates additional certificates from a listener that uses SSL over TCP.
       *
       * @description **DisassociateAdditionalCertificatesWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/615175.html) operation to query the status of the task:
       * *   If an additional certificate is in the **Dissociating** state, the additional certificate is being disassociated.
       * *   If an additional certificate is in the **Dissociated** state, the additional certificate is disassociated.
       *
       * @param request DisassociateAdditionalCertificatesWithListenerRequest
       * @return DisassociateAdditionalCertificatesWithListenerResponse
       */
      Models::DisassociateAdditionalCertificatesWithListenerResponse disassociateAdditionalCertificatesWithListener(const Models::DisassociateAdditionalCertificatesWithListenerRequest &request);

      /**
       * @summary Changes the network type of the IPv6 address of a dual-stack Network Load Balancer (NLB) instance from internal-facing to Internet-facing.
       *
       * @param request EnableLoadBalancerIpv6InternetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableLoadBalancerIpv6InternetResponse
       */
      Models::EnableLoadBalancerIpv6InternetResponse enableLoadBalancerIpv6InternetWithOptions(const Models::EnableLoadBalancerIpv6InternetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the network type of the IPv6 address of a dual-stack Network Load Balancer (NLB) instance from internal-facing to Internet-facing.
       *
       * @param request EnableLoadBalancerIpv6InternetRequest
       * @return EnableLoadBalancerIpv6InternetResponse
       */
      Models::EnableLoadBalancerIpv6InternetResponse enableLoadBalancerIpv6Internet(const Models::EnableLoadBalancerIpv6InternetRequest &request);

      /**
       * @summary Queries the execution result of an asynchronous task for Network Load Balancer (NLB).
       *
       * @param request GetJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobStatusResponse
       */
      Models::GetJobStatusResponse getJobStatusWithOptions(const Models::GetJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution result of an asynchronous task for Network Load Balancer (NLB).
       *
       * @param request GetJobStatusRequest
       * @return GetJobStatusResponse
       */
      Models::GetJobStatusResponse getJobStatus(const Models::GetJobStatusRequest &request);

      /**
       * @summary Queries the details of a listener on a Network Load Balancer (NLB) instance.
       *
       * @param request GetListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListenerAttributeResponse
       */
      Models::GetListenerAttributeResponse getListenerAttributeWithOptions(const Models::GetListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a listener on a Network Load Balancer (NLB) instance.
       *
       * @param request GetListenerAttributeRequest
       * @return GetListenerAttributeResponse
       */
      Models::GetListenerAttributeResponse getListenerAttribute(const Models::GetListenerAttributeRequest &request);

      /**
       * @summary Queries the health check status of a Network Load Balancer (NLB) listener.
       *
       * @param request GetListenerHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetListenerHealthStatusResponse
       */
      Models::GetListenerHealthStatusResponse getListenerHealthStatusWithOptions(const Models::GetListenerHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health check status of a Network Load Balancer (NLB) listener.
       *
       * @param request GetListenerHealthStatusRequest
       * @return GetListenerHealthStatusResponse
       */
      Models::GetListenerHealthStatusResponse getListenerHealthStatus(const Models::GetListenerHealthStatusRequest &request);

      /**
       * @summary Queries the details of a specified Network Load Balancer (NLB) instance.
       *
       * @param request GetLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoadBalancerAttributeResponse
       */
      Models::GetLoadBalancerAttributeResponse getLoadBalancerAttributeWithOptions(const Models::GetLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified Network Load Balancer (NLB) instance.
       *
       * @param request GetLoadBalancerAttributeRequest
       * @return GetLoadBalancerAttributeResponse
       */
      Models::GetLoadBalancerAttributeResponse getLoadBalancerAttribute(const Models::GetLoadBalancerAttributeRequest &request);

      /**
       * @summary Queries the results of multiple asynchronous operations performed on a Network Load Balancer (NLB) instance.
       *
       * @param request ListAsynJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAsynJobsResponse
       */
      Models::ListAsynJobsResponse listAsynJobsWithOptions(const Models::ListAsynJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of multiple asynchronous operations performed on a Network Load Balancer (NLB) instance.
       *
       * @param request ListAsynJobsRequest
       * @return ListAsynJobsResponse
       */
      Models::ListAsynJobsResponse listAsynJobs(const Models::ListAsynJobsRequest &request);

      /**
       * @summary Queries the server certificates of a TCPSSL listener.
       *
       * @param request ListListenerCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenerCertificatesResponse
       */
      Models::ListListenerCertificatesResponse listListenerCertificatesWithOptions(const Models::ListListenerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the server certificates of a TCPSSL listener.
       *
       * @param request ListListenerCertificatesRequest
       * @return ListListenerCertificatesResponse
       */
      Models::ListListenerCertificatesResponse listListenerCertificates(const Models::ListListenerCertificatesRequest &request);

      /**
       * @summary Queries the list of Network Load Balancer (NLB) listeners.
       *
       * @param request ListListenersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListenersWithOptions(const Models::ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Network Load Balancer (NLB) listeners.
       *
       * @param request ListListenersRequest
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListeners(const Models::ListListenersRequest &request);

      /**
       * @summary Queries the basic information about created Network Load Balancer (NLB) instances.
       *
       * @param request ListLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancersWithOptions(const Models::ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about created Network Load Balancer (NLB) instances.
       *
       * @param request ListLoadBalancersRequest
       * @return ListLoadBalancersResponse
       */
      Models::ListLoadBalancersResponse listLoadBalancers(const Models::ListLoadBalancersRequest &request);

      /**
       * @summary Queries the TLS security policies set for a Network Load Balancer (NLB) instance.
       *
       * @param request ListSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSecurityPolicyResponse
       */
      Models::ListSecurityPolicyResponse listSecurityPolicyWithOptions(const Models::ListSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the TLS security policies set for a Network Load Balancer (NLB) instance.
       *
       * @param request ListSecurityPolicyRequest
       * @return ListSecurityPolicyResponse
       */
      Models::ListSecurityPolicyResponse listSecurityPolicy(const Models::ListSecurityPolicyRequest &request);

      /**
       * @summary Queries servers in a server group of a Network Load Balancer (NLB) instance.
       *
       * @param request ListServerGroupServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerGroupServersResponse
       */
      Models::ListServerGroupServersResponse listServerGroupServersWithOptions(const Models::ListServerGroupServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries servers in a server group of a Network Load Balancer (NLB) instance.
       *
       * @param request ListServerGroupServersRequest
       * @return ListServerGroupServersResponse
       */
      Models::ListServerGroupServersResponse listServerGroupServers(const Models::ListServerGroupServersRequest &request);

      /**
       * @summary Queries the server group list of a Network Load Balancer (NLB) load balancing instance.
       *
       * @param request ListServerGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServerGroupsResponse
       */
      Models::ListServerGroupsResponse listServerGroupsWithOptions(const Models::ListServerGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the server group list of a Network Load Balancer (NLB) load balancing instance.
       *
       * @param request ListServerGroupsRequest
       * @return ListServerGroupsResponse
       */
      Models::ListServerGroupsResponse listServerGroups(const Models::ListServerGroupsRequest &request);

      /**
       * @summary Queries the default TLS policy.
       *
       * @param request ListSystemSecurityPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemSecurityPolicyResponse
       */
      Models::ListSystemSecurityPolicyResponse listSystemSecurityPolicyWithOptions(const Models::ListSystemSecurityPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default TLS policy.
       *
       * @param request ListSystemSecurityPolicyRequest
       * @return ListSystemSecurityPolicyResponse
       */
      Models::ListSystemSecurityPolicyResponse listSystemSecurityPolicy(const Models::ListSystemSecurityPolicyRequest &request);

      /**
       * @summary Queries the tags of a resource.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of a resource.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Associates a security group with a Network Load Balancer (NLB) instance.
       *
       * @description *   Make sure that you have created a security group. For more information about how to create a security group, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/25553.html).
       * *   An NLB instance can be associated with up to four security groups.
       * *   You can query the security groups that are associated with an NLB instance by calling the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation.
       * *   LoadBalancerJoinSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
       *     *   If the task is in the **Succeeded** state, the security group is associated.
       *     *   If the task is in the **Processing** state, the security group is being associated. In this case, you can perform only query operations.
       *
       * @param request LoadBalancerJoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadBalancerJoinSecurityGroupResponse
       */
      Models::LoadBalancerJoinSecurityGroupResponse loadBalancerJoinSecurityGroupWithOptions(const Models::LoadBalancerJoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a security group with a Network Load Balancer (NLB) instance.
       *
       * @description *   Make sure that you have created a security group. For more information about how to create a security group, see [CreateSecurityGroup](https://help.aliyun.com/document_detail/25553.html).
       * *   An NLB instance can be associated with up to four security groups.
       * *   You can query the security groups that are associated with an NLB instance by calling the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/214362.html) operation.
       * *   LoadBalancerJoinSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
       *     *   If the task is in the **Succeeded** state, the security group is associated.
       *     *   If the task is in the **Processing** state, the security group is being associated. In this case, you can perform only query operations.
       *
       * @param request LoadBalancerJoinSecurityGroupRequest
       * @return LoadBalancerJoinSecurityGroupResponse
       */
      Models::LoadBalancerJoinSecurityGroupResponse loadBalancerJoinSecurityGroup(const Models::LoadBalancerJoinSecurityGroupRequest &request);

      /**
       * @summary Disassociates a Network Load Balancer (NLB) instance from a security group.
       *
       * @description LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
       * *   If the task is in the **Succeeded** state, the security group is disassociated.
       * *   If the task is in the **Processing** state, the security group is being disassociated. In this case, you can perform only query operations.
       *
       * @param request LoadBalancerLeaveSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadBalancerLeaveSecurityGroupResponse
       */
      Models::LoadBalancerLeaveSecurityGroupResponse loadBalancerLeaveSecurityGroupWithOptions(const Models::LoadBalancerLeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Network Load Balancer (NLB) instance from a security group.
       *
       * @description LoadBalancerLeaveSecurityGroup is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the status of a task.
       * *   If the task is in the **Succeeded** state, the security group is disassociated.
       * *   If the task is in the **Processing** state, the security group is being disassociated. In this case, you can perform only query operations.
       *
       * @param request LoadBalancerLeaveSecurityGroupRequest
       * @return LoadBalancerLeaveSecurityGroupResponse
       */
      Models::LoadBalancerLeaveSecurityGroupResponse loadBalancerLeaveSecurityGroup(const Models::LoadBalancerLeaveSecurityGroupRequest &request);

      /**
       * @summary Modify the group of resource.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the group of resource.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Deletes server groups from a Network Load Balancer (NLB) instance.
       *
       * @param request RemoveServersFromServerGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveServersFromServerGroupResponse
       */
      Models::RemoveServersFromServerGroupResponse removeServersFromServerGroupWithOptions(const Models::RemoveServersFromServerGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes server groups from a Network Load Balancer (NLB) instance.
       *
       * @param request RemoveServersFromServerGroupRequest
       * @return RemoveServersFromServerGroupResponse
       */
      Models::RemoveServersFromServerGroupResponse removeServersFromServerGroup(const Models::RemoveServersFromServerGroupRequest &request);

      /**
       * @summary Configures storage for fine-grained monitoring.
       *
       * @description This operation is used to configure a data warehouse for the fine-grained monitoring feature. If a listener in the current region has fine-grained monitoring enabled, you must disable fine-grained monitoring before you can configure a warehouse.
       *
       * @param request SetHdMonitorRegionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetHdMonitorRegionConfigResponse
       */
      Models::SetHdMonitorRegionConfigResponse setHdMonitorRegionConfigWithOptions(const Models::SetHdMonitorRegionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures storage for fine-grained monitoring.
       *
       * @description This operation is used to configure a data warehouse for the fine-grained monitoring feature. If a listener in the current region has fine-grained monitoring enabled, you must disable fine-grained monitoring before you can configure a warehouse.
       *
       * @param request SetHdMonitorRegionConfigRequest
       * @return SetHdMonitorRegionConfigResponse
       */
      Models::SetHdMonitorRegionConfigResponse setHdMonitorRegionConfig(const Models::SetHdMonitorRegionConfigRequest &request);

      /**
       * @summary Enables a Network Load Balancer (NLB) listener.
       *
       * @param request StartListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartListenerResponse
       */
      Models::StartListenerResponse startListenerWithOptions(const Models::StartListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a Network Load Balancer (NLB) listener.
       *
       * @param request StartListenerRequest
       * @return StartListenerResponse
       */
      Models::StartListenerResponse startListener(const Models::StartListenerRequest &request);

      /**
       * @summary Removes the elastic IP address (EIP) or virtual IP address (VIP) used in a zone from the DNS record.
       *
       * @description >  If the NLB instance is deployed in only one zone, you cannot remove the EIP or VIP from the DNS record.
       *
       * @param request StartShiftLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartShiftLoadBalancerZonesResponse
       */
      Models::StartShiftLoadBalancerZonesResponse startShiftLoadBalancerZonesWithOptions(const Models::StartShiftLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the elastic IP address (EIP) or virtual IP address (VIP) used in a zone from the DNS record.
       *
       * @description >  If the NLB instance is deployed in only one zone, you cannot remove the EIP or VIP from the DNS record.
       *
       * @param request StartShiftLoadBalancerZonesRequest
       * @return StartShiftLoadBalancerZonesResponse
       */
      Models::StartShiftLoadBalancerZonesResponse startShiftLoadBalancerZones(const Models::StartShiftLoadBalancerZonesRequest &request);

      /**
       * @summary Stops a listener of a Network Load Balancer (NLB) instance.
       *
       * @param request StopListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopListenerResponse
       */
      Models::StopListenerResponse stopListenerWithOptions(const Models::StopListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a listener of a Network Load Balancer (NLB) instance.
       *
       * @param request StopListenerRequest
       * @return StopListenerResponse
       */
      Models::StopListenerResponse stopListener(const Models::StopListenerRequest &request);

      /**
       * @summary Adds tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to specified resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

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
       * @summary Updates the configuration of a Network Load Balancer (NLB) listener.
       *
       * @param tmpReq UpdateListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListenerAttributeResponse
       */
      Models::UpdateListenerAttributeResponse updateListenerAttributeWithOptions(const Models::UpdateListenerAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a Network Load Balancer (NLB) listener.
       *
       * @param request UpdateListenerAttributeRequest
       * @return UpdateListenerAttributeResponse
       */
      Models::UpdateListenerAttributeResponse updateListenerAttribute(const Models::UpdateListenerAttributeRequest &request);

      /**
       * @summary Changes the network type of the IPv4 address for a Network Load Balancer (NLB) instance.
       *
       * @description *   Make sure that an NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
       * *   You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the **AddressType** value of an NLB instance after you change the network type.
       * *   **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the task status:
       *     *   If the task is in the **Succeeded** state, the network type of the IPv4 address of the NLB instance is changed.
       *     *   If the task is in the **Processing** state, the network type of the IPv4 address of the NLB instance is being changed. In this case, you can perform only query operations.
       *
       * @param request UpdateLoadBalancerAddressTypeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerAddressTypeConfigResponse
       */
      Models::UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfigWithOptions(const Models::UpdateLoadBalancerAddressTypeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the network type of the IPv4 address for a Network Load Balancer (NLB) instance.
       *
       * @description *   Make sure that an NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
       * *   You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the **AddressType** value of an NLB instance after you change the network type.
       * *   **UpdateLoadBalancerAddressTypeConfig** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation to query the task status:
       *     *   If the task is in the **Succeeded** state, the network type of the IPv4 address of the NLB instance is changed.
       *     *   If the task is in the **Processing** state, the network type of the IPv4 address of the NLB instance is being changed. In this case, you can perform only query operations.
       *
       * @param request UpdateLoadBalancerAddressTypeConfigRequest
       * @return UpdateLoadBalancerAddressTypeConfigResponse
       */
      Models::UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfig(const Models::UpdateLoadBalancerAddressTypeConfigRequest &request);

      /**
       * @summary Updates the attributes, including the name, of a Network Load Balancer (NLB) instance.
       *
       * @param request UpdateLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerAttributeResponse
       */
      Models::UpdateLoadBalancerAttributeResponse updateLoadBalancerAttributeWithOptions(const Models::UpdateLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the attributes, including the name, of a Network Load Balancer (NLB) instance.
       *
       * @param request UpdateLoadBalancerAttributeRequest
       * @return UpdateLoadBalancerAttributeResponse
       */
      Models::UpdateLoadBalancerAttributeResponse updateLoadBalancerAttribute(const Models::UpdateLoadBalancerAttributeRequest &request);

      /**
       * @summary create operation
       *
       * @param request UpdateLoadBalancerProtectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerProtectionResponse
       */
      Models::UpdateLoadBalancerProtectionResponse updateLoadBalancerProtectionWithOptions(const Models::UpdateLoadBalancerProtectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary create operation
       *
       * @param request UpdateLoadBalancerProtectionRequest
       * @return UpdateLoadBalancerProtectionResponse
       */
      Models::UpdateLoadBalancerProtectionResponse updateLoadBalancerProtection(const Models::UpdateLoadBalancerProtectionRequest &request);

      /**
       * @summary Modifies the zones and zone attributes of a Network Load Balancer (NLB) instance.
       *
       * @description When you call this operation, make sure that you specify all the zones of the NLB instance, including the existing zones and new zones. If you do not specify the existing zones, the existing zones are removed.
       * Prerequisites
       * - An NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
       * - You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the zones and zone attributes of an NLB instance.
       * - **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation query to query the status of a task:
       *   - If the task is in the **Succeeded** state, the zones and zone attributes are modified.
       *   - If the task is in the **Processing** state, the zones and zone attributes are being modified. In this case, you can perform only query operations.
       *
       * @param request UpdateLoadBalancerZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoadBalancerZonesResponse
       */
      Models::UpdateLoadBalancerZonesResponse updateLoadBalancerZonesWithOptions(const Models::UpdateLoadBalancerZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the zones and zone attributes of a Network Load Balancer (NLB) instance.
       *
       * @description When you call this operation, make sure that you specify all the zones of the NLB instance, including the existing zones and new zones. If you do not specify the existing zones, the existing zones are removed.
       * Prerequisites
       * - An NLB instance is created. For more information, see [CreateLoadBalancer](https://help.aliyun.com/document_detail/445868.html).
       * - You can call the [GetLoadBalancerAttribute](https://help.aliyun.com/document_detail/445873.html) operation to query the zones and zone attributes of an NLB instance.
       * - **UpdateLoadBalancerZones** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetJobStatus](https://help.aliyun.com/document_detail/445904.html) operation query to query the status of a task:
       *   - If the task is in the **Succeeded** state, the zones and zone attributes are modified.
       *   - If the task is in the **Processing** state, the zones and zone attributes are being modified. In this case, you can perform only query operations.
       *
       * @param request UpdateLoadBalancerZonesRequest
       * @return UpdateLoadBalancerZonesResponse
       */
      Models::UpdateLoadBalancerZonesResponse updateLoadBalancerZones(const Models::UpdateLoadBalancerZonesRequest &request);

      /**
       * @summary Modifies the configurations of a security policy for a Network Load Balancer (NLB) instance.
       *
       * @param request UpdateSecurityPolicyAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSecurityPolicyAttributeResponse
       */
      Models::UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttributeWithOptions(const Models::UpdateSecurityPolicyAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a security policy for a Network Load Balancer (NLB) instance.
       *
       * @param request UpdateSecurityPolicyAttributeRequest
       * @return UpdateSecurityPolicyAttributeResponse
       */
      Models::UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttribute(const Models::UpdateSecurityPolicyAttributeRequest &request);

      /**
       * @summary Updates the configuration of a Network Load Balancer (NLB) server group.
       *
       * @param request UpdateServerGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServerGroupAttributeResponse
       */
      Models::UpdateServerGroupAttributeResponse updateServerGroupAttributeWithOptions(const Models::UpdateServerGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a Network Load Balancer (NLB) server group.
       *
       * @param request UpdateServerGroupAttributeRequest
       * @return UpdateServerGroupAttributeResponse
       */
      Models::UpdateServerGroupAttributeResponse updateServerGroupAttribute(const Models::UpdateServerGroupAttributeRequest &request);

      /**
       * @summary Modifies the weights and descriptions of backend servers in a server group of a Network Load Balancer (NLB) instance.
       *
       * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/445895.html) operation to query the status of a server group.
       *     *   If a server group is in the **Configuring** state, the server group is being modified.
       *     *   If a server group is in the **Available** state, the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/445896.html) operation to query the status of a backend server.
       *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
       *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
       *
       * @param request UpdateServerGroupServersAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServerGroupServersAttributeResponse
       */
      Models::UpdateServerGroupServersAttributeResponse updateServerGroupServersAttributeWithOptions(const Models::UpdateServerGroupServersAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the weights and descriptions of backend servers in a server group of a Network Load Balancer (NLB) instance.
       *
       * @description **UpdateServerGroupServersAttribute** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background.
       * 1.  You can call the [ListServerGroups](https://help.aliyun.com/document_detail/445895.html) operation to query the status of a server group.
       *     *   If a server group is in the **Configuring** state, the server group is being modified.
       *     *   If a server group is in the **Available** state, the server group is running.
       * 2.  You can call the [ListServerGroupServers](https://help.aliyun.com/document_detail/445896.html) operation to query the status of a backend server.
       *     *   If a backend server is in the **Configuring** state, it indicates that the backend server is being modified.
       *     *   If a backend server is in the **Available** state, it indicates that the backend server is running.
       *
       * @param request UpdateServerGroupServersAttributeRequest
       * @return UpdateServerGroupServersAttributeResponse
       */
      Models::UpdateServerGroupServersAttributeResponse updateServerGroupServersAttribute(const Models::UpdateServerGroupServersAttributeRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
