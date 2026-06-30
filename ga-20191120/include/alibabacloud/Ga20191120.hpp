// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GA20191120_HPP_
#define ALIBABACLOUD_GA20191120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ga20191120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ga20191120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds IP entries to an access control policy group and allows or restricts the forwarding of access requests to listeners for these IP entries by using Settings such as whitelists or blacklists, enabling precise control over client requests. You can call the AddEntriesToAcl operation to add IP entries to an access control policy group.
       *
       * @description - **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID, but the IP entries are not yet added. The addition node continues in the background. You can call [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) to query the status of the access control policy group:
       *     - If the access control policy group is in the **configuring** state, the IP entries are being added. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the access control policy group is in the **active** state, the IP entries are added.
       * - You cannot concurrently call **AddEntriesToAcl** to add IP entries to an access control policy group within the same Global Accelerator (GA) instance.
       *
       * @param request AddEntriesToAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddEntriesToAclResponse
       */
      Models::AddEntriesToAclResponse addEntriesToAclWithOptions(const Models::AddEntriesToAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds IP entries to an access control policy group and allows or restricts the forwarding of access requests to listeners for these IP entries by using Settings such as whitelists or blacklists, enabling precise control over client requests. You can call the AddEntriesToAcl operation to add IP entries to an access control policy group.
       *
       * @description - **AddEntriesToAcl** is an asynchronous operation. After a request is sent, the system returns a request ID, but the IP entries are not yet added. The addition node continues in the background. You can call [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) to query the status of the access control policy group:
       *     - If the access control policy group is in the **configuring** state, the IP entries are being added. In this state, you can only perform query operations and cannot perform other operations.
       *     - If the access control policy group is in the **active** state, the IP entries are added.
       * - You cannot concurrently call **AddEntriesToAcl** to add IP entries to an access control policy group within the same Global Accelerator (GA) instance.
       *
       * @param request AddEntriesToAclRequest
       * @return AddEntriesToAclResponse
       */
      Models::AddEntriesToAclResponse addEntriesToAcl(const Models::AddEntriesToAclRequest &request);

      /**
       * @summary Invokes the AssociateAclsWithListener operation to associate access control policy groups with a listener.
       *
       * @description - **AssociateAclsWithListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the access control policy group is not yet associated with the listener. The association node continues to run in the background. You can invoke [DescribeListener](https://help.aliyun.com/document_detail/153254.html) to query the listener status:
       *     - If the listener is in the **updating** state, the access control policy group is being associated with the listener. In this state, you can only execute query operations and cannot execute other operations.
       *     - If the listener is in the **active** state, the access control policy group is associated with the listener.
       * - You cannot concurrently associate access control policy groups with listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request AssociateAclsWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateAclsWithListenerResponse
       */
      Models::AssociateAclsWithListenerResponse associateAclsWithListenerWithOptions(const Models::AssociateAclsWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the AssociateAclsWithListener operation to associate access control policy groups with a listener.
       *
       * @description - **AssociateAclsWithListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the access control policy group is not yet associated with the listener. The association node continues to run in the background. You can invoke [DescribeListener](https://help.aliyun.com/document_detail/153254.html) to query the listener status:
       *     - If the listener is in the **updating** state, the access control policy group is being associated with the listener. In this state, you can only execute query operations and cannot execute other operations.
       *     - If the listener is in the **active** state, the access control policy group is associated with the listener.
       * - You cannot concurrently associate access control policy groups with listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request AssociateAclsWithListenerRequest
       * @return AssociateAclsWithListenerResponse
       */
      Models::AssociateAclsWithListenerResponse associateAclsWithListener(const Models::AssociateAclsWithListenerRequest &request);

      /**
       * @summary Binds multiple certificates to an HTTPS listener of a Global Accelerator instance. Combined with virtual endpoint groups and forwarding rules, this enables accelerated access to multiple HTTPS domain names. You can call the AssociateAdditionalCertificatesWithListener operation to bind additional certificates to an HTTPS listener.
       *
       * @description - Only HTTPS protocol listeners support attaching extension certificates.
       * - The **AssociateAdditionalCertificatesWithListener** operation is asynchronous. After you send a request, the system returns a request ID, but the attachment between the HTTPS listener and the extension certificates is not yet complete because the association node is still running in the background. You can invoke [DescribeListener](https://help.aliyun.com/document_detail/153254.html) to query the listener status:
       *     - If the listener is in the **updating** state, the HTTPS listener and extension certificates are being attached. In this state, you can only execute query operations.
       *     - If the listener is in the **active** state, the HTTPS listener and extension certificates are attached.
       * - The **AssociateAdditionalCertificatesWithListener** operation does not support concurrent requests to attach extension certificates to HTTPS listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request AssociateAdditionalCertificatesWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateAdditionalCertificatesWithListenerResponse
       */
      Models::AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListenerWithOptions(const Models::AssociateAdditionalCertificatesWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds multiple certificates to an HTTPS listener of a Global Accelerator instance. Combined with virtual endpoint groups and forwarding rules, this enables accelerated access to multiple HTTPS domain names. You can call the AssociateAdditionalCertificatesWithListener operation to bind additional certificates to an HTTPS listener.
       *
       * @description - Only HTTPS protocol listeners support attaching extension certificates.
       * - The **AssociateAdditionalCertificatesWithListener** operation is asynchronous. After you send a request, the system returns a request ID, but the attachment between the HTTPS listener and the extension certificates is not yet complete because the association node is still running in the background. You can invoke [DescribeListener](https://help.aliyun.com/document_detail/153254.html) to query the listener status:
       *     - If the listener is in the **updating** state, the HTTPS listener and extension certificates are being attached. In this state, you can only execute query operations.
       *     - If the listener is in the **active** state, the HTTPS listener and extension certificates are attached.
       * - The **AssociateAdditionalCertificatesWithListener** operation does not support concurrent requests to attach extension certificates to HTTPS listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request AssociateAdditionalCertificatesWithListenerRequest
       * @return AssociateAdditionalCertificatesWithListenerResponse
       */
      Models::AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListener(const Models::AssociateAdditionalCertificatesWithListenerRequest &request);

      /**
       * @summary Alibaba Cloud Global Accelerator (GA) Integration with Cloud Products
       *
       * @param request AssociateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateResourcesResponse
       */
      Models::AssociateResourcesResponse associateResourcesWithOptions(const Models::AssociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alibaba Cloud Global Accelerator (GA) Integration with Cloud Products
       *
       * @param request AssociateResourcesRequest
       * @return AssociateResourcesResponse
       */
      Models::AssociateResourcesResponse associateResources(const Models::AssociateResourcesRequest &request);

      /**
       * @summary If you want to protect your Global Accelerator (GA) applications from large-scale DDoS attacks and ensure service stability and availability, you can call the AttachDdosToAccelerator operation to associate an Anti-DDoS Pro or Anti-DDoS Premium instance with a GA instance.
       *
       * @description Note the following when you call this operation:
       * - AttachDdosToAccelerator is an asynchronous operation. After you send a request, the system returns a request ID, but the Anti-DDoS Pro or Anti-DDoS Premium instance is not yet associated with the Global Accelerator (GA) instance. The associate task continues to run in the background. You can call [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) to query the status of the GA instance:
       *     - If the GA instance is in the **configuring** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is being associated with the GA instance. In this state, you can only perform query operations.
       *     - If the GA instance is in the **active** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is associated with the GA instance.
       * - The AttachDdosToAccelerator operation does not support concurrent requests to associate Anti-DDoS Pro or Anti-DDoS Premium instances with the same GA instance.
       *
       * @param request AttachDdosToAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDdosToAcceleratorResponse
       */
      Models::AttachDdosToAcceleratorResponse attachDdosToAcceleratorWithOptions(const Models::AttachDdosToAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you want to protect your Global Accelerator (GA) applications from large-scale DDoS attacks and ensure service stability and availability, you can call the AttachDdosToAccelerator operation to associate an Anti-DDoS Pro or Anti-DDoS Premium instance with a GA instance.
       *
       * @description Note the following when you call this operation:
       * - AttachDdosToAccelerator is an asynchronous operation. After you send a request, the system returns a request ID, but the Anti-DDoS Pro or Anti-DDoS Premium instance is not yet associated with the Global Accelerator (GA) instance. The associate task continues to run in the background. You can call [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) to query the status of the GA instance:
       *     - If the GA instance is in the **configuring** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is being associated with the GA instance. In this state, you can only perform query operations.
       *     - If the GA instance is in the **active** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is associated with the GA instance.
       * - The AttachDdosToAccelerator operation does not support concurrent requests to associate Anti-DDoS Pro or Anti-DDoS Premium instances with the same GA instance.
       *
       * @param request AttachDdosToAcceleratorRequest
       * @return AttachDdosToAcceleratorResponse
       */
      Models::AttachDdosToAcceleratorResponse attachDdosToAccelerator(const Models::AttachDdosToAcceleratorRequest &request);

      /**
       * @summary Associates a Simple Log Service (SLS) Logstore with an endpoint group.
       *
       * @description - **AttachLogStoreToEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the association between the SLS Logstore and the endpoint group is not yet complete. The association node continues to run in the background. You can invoke [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) to query the status of the endpoint group:
       *     - If the endpoint group is in the **updating** state, the SLS Logstore is being associated with the endpoint group. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the SLS Logstore is associated with the endpoint group.
       * - **AttachLogStoreToEndpointGroup** does not support concurrent association of SLS Logstores with endpoint groups within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request AttachLogStoreToEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachLogStoreToEndpointGroupResponse
       */
      Models::AttachLogStoreToEndpointGroupResponse attachLogStoreToEndpointGroupWithOptions(const Models::AttachLogStoreToEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a Simple Log Service (SLS) Logstore with an endpoint group.
       *
       * @description - **AttachLogStoreToEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the association between the SLS Logstore and the endpoint group is not yet complete. The association node continues to run in the background. You can invoke [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) to query the status of the endpoint group:
       *     - If the endpoint group is in the **updating** state, the SLS Logstore is being associated with the endpoint group. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the SLS Logstore is associated with the endpoint group.
       * - **AttachLogStoreToEndpointGroup** does not support concurrent association of SLS Logstores with endpoint groups within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request AttachLogStoreToEndpointGroupRequest
       * @return AttachLogStoreToEndpointGroupResponse
       */
      Models::AttachLogStoreToEndpointGroupResponse attachLogStoreToEndpointGroup(const Models::AttachLogStoreToEndpointGroupRequest &request);

      /**
       * @summary Invokes the BandwidthPackageAddAccelerator operation to attach a bandwidth plan to an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **BandwidthPackageAddAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID, but the bandwidth plan is not yet attached to the Alibaba Cloud Global Accelerator (GA) instance. The attachment node continues to run in the background. You can invoke [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) to query the status of the bandwidth plan:
       *     - If the bandwidth plan is in the **binding** state, the bandwidth plan is being attached to the Alibaba Cloud Global Accelerator (GA) instance. In this state, you can only execute query operations.
       *     - If the bandwidth plan is in the **active** state, the bandwidth plan is attached to the Alibaba Cloud Global Accelerator (GA) instance.
       * - The **BandwidthPackageAddAccelerator** operation does not support concurrent requests to attach bandwidth plans to the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request BandwidthPackageAddAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BandwidthPackageAddAcceleratorResponse
       */
      Models::BandwidthPackageAddAcceleratorResponse bandwidthPackageAddAcceleratorWithOptions(const Models::BandwidthPackageAddAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the BandwidthPackageAddAccelerator operation to attach a bandwidth plan to an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **BandwidthPackageAddAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID, but the bandwidth plan is not yet attached to the Alibaba Cloud Global Accelerator (GA) instance. The attachment node continues to run in the background. You can invoke [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) to query the status of the bandwidth plan:
       *     - If the bandwidth plan is in the **binding** state, the bandwidth plan is being attached to the Alibaba Cloud Global Accelerator (GA) instance. In this state, you can only execute query operations.
       *     - If the bandwidth plan is in the **active** state, the bandwidth plan is attached to the Alibaba Cloud Global Accelerator (GA) instance.
       * - The **BandwidthPackageAddAccelerator** operation does not support concurrent requests to attach bandwidth plans to the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request BandwidthPackageAddAcceleratorRequest
       * @return BandwidthPackageAddAcceleratorResponse
       */
      Models::BandwidthPackageAddAcceleratorResponse bandwidthPackageAddAccelerator(const Models::BandwidthPackageAddAcceleratorRequest &request);

      /**
       * @summary Invokes the BandwidthPackageRemoveAccelerator operation to disassociate a bandwidth plan from an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - Before you invoke the **BandwidthPackageRemoveAccelerator** operation, make sure that no acceleration regions or endpoint groups exist under the Alibaba Cloud Global Accelerator (GA) instance.
       *     - To delete an acceleration region, see [DeleteIpSet](https://help.aliyun.com/document_detail/2253276.html) or [DeleteIpSets](https://help.aliyun.com/document_detail/2253278.html).
       *     - To delete an endpoint group, see [DeleteEndpointGroup](https://help.aliyun.com/document_detail/2253305.html), [DeleteEndpointGroups](https://help.aliyun.com/document_detail/2253311.html), or [DeleteCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/2303183.html).
       * - The **BandwidthPackageRemoveAccelerator** operation is asynchronous. After you send a request, the system returns a request ID, but the disassociation has not yet completed. The disassociation node continues to run in the background. You can invoke [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) to query the status of the bandwidth plan:
       *     - If the bandwidth plan is in the **unbinding** state, the bandwidth plan is being disassociated from the GA instance. In this state, you can only execute query operations.
       *     - If the bandwidth plan is in the **active** state, the bandwidth plan is disassociated from the GA instance.
       * - The **BandwidthPackageRemoveAccelerator** operation does not support concurrent disassociation of bandwidth plans from the same GA instance.
       *
       * @param request BandwidthPackageRemoveAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BandwidthPackageRemoveAcceleratorResponse
       */
      Models::BandwidthPackageRemoveAcceleratorResponse bandwidthPackageRemoveAcceleratorWithOptions(const Models::BandwidthPackageRemoveAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the BandwidthPackageRemoveAccelerator operation to disassociate a bandwidth plan from an Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - Before you invoke the **BandwidthPackageRemoveAccelerator** operation, make sure that no acceleration regions or endpoint groups exist under the Alibaba Cloud Global Accelerator (GA) instance.
       *     - To delete an acceleration region, see [DeleteIpSet](https://help.aliyun.com/document_detail/2253276.html) or [DeleteIpSets](https://help.aliyun.com/document_detail/2253278.html).
       *     - To delete an endpoint group, see [DeleteEndpointGroup](https://help.aliyun.com/document_detail/2253305.html), [DeleteEndpointGroups](https://help.aliyun.com/document_detail/2253311.html), or [DeleteCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/2303183.html).
       * - The **BandwidthPackageRemoveAccelerator** operation is asynchronous. After you send a request, the system returns a request ID, but the disassociation has not yet completed. The disassociation node continues to run in the background. You can invoke [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) to query the status of the bandwidth plan:
       *     - If the bandwidth plan is in the **unbinding** state, the bandwidth plan is being disassociated from the GA instance. In this state, you can only execute query operations.
       *     - If the bandwidth plan is in the **active** state, the bandwidth plan is disassociated from the GA instance.
       * - The **BandwidthPackageRemoveAccelerator** operation does not support concurrent disassociation of bandwidth plans from the same GA instance.
       *
       * @param request BandwidthPackageRemoveAcceleratorRequest
       * @return BandwidthPackageRemoveAcceleratorResponse
       */
      Models::BandwidthPackageRemoveAcceleratorResponse bandwidthPackageRemoveAccelerator(const Models::BandwidthPackageRemoveAcceleratorRequest &request);

      /**
       * @summary Modifies the resource group to which a Global Accelerator resource belongs by calling the ChangeResourceGroup operation.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications to the resource group of Global Accelerator resources within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request ChangeResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroupWithOptions(const Models::ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource group to which a Global Accelerator resource belongs by calling the ChangeResourceGroup operation.
       *
       * @description The **ChangeResourceGroup** operation does not support concurrent modifications to the resource group of Global Accelerator resources within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request ChangeResourceGroupRequest
       * @return ChangeResourceGroupResponse
       */
      Models::ChangeResourceGroupResponse changeResourceGroup(const Models::ChangeResourceGroupRequest &request);

      /**
       * @summary Configures latency monitoring for an endpoint.
       *
       * @description *   **ConfigEndpointProbe** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group to which an endpoint belongs and determine whether latency monitoring is configured for the endpoint.
       *     *   If the endpoint group is in the **updating** state, it indicates that latency monitoring is being configured for the endpoint. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state, it indicates that latency monitoring is configured for the endpoint.
       * *   The **ConfigEndpointProbe** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request ConfigEndpointProbeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfigEndpointProbeResponse
       */
      Models::ConfigEndpointProbeResponse configEndpointProbeWithOptions(const Models::ConfigEndpointProbeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures latency monitoring for an endpoint.
       *
       * @description *   **ConfigEndpointProbe** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group to which an endpoint belongs and determine whether latency monitoring is configured for the endpoint.
       *     *   If the endpoint group is in the **updating** state, it indicates that latency monitoring is being configured for the endpoint. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state, it indicates that latency monitoring is configured for the endpoint.
       * *   The **ConfigEndpointProbe** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request ConfigEndpointProbeRequest
       * @return ConfigEndpointProbeResponse
       */
      Models::ConfigEndpointProbeResponse configEndpointProbe(const Models::ConfigEndpointProbeRequest &request);

      /**
       * @summary Global Accelerator (GA) is a network acceleration service that provides coverage across the globe. It uses Alibaba Cloud\\"s high-quality Border Gateway Protocol (BGP) bandwidth and global transmission network to provide low-latency access from nearby locations. This reduces the impact of network issues, such as latency, jitter, and packet loss, on your service quality. GA provides a high-availability and high-performance network acceleration service for users worldwide. You can call the CreateAccelerator operation to create a Global Accelerator instance.
       *
       * @description The **CreateAccelerator** operation is asynchronous. After you send a request, the system returns a Global Accelerator instance ID, but the instance is still being created in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the Global Accelerator instance:
       * - If a Global Accelerator instance is in the **init** state, the instance is being created. You can only perform query operations on the instance.
       * - If a Global Accelerator instance is in the **active** state, the instance is created.
       *
       * @param request CreateAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAcceleratorResponse
       */
      Models::CreateAcceleratorResponse createAcceleratorWithOptions(const Models::CreateAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Global Accelerator (GA) is a network acceleration service that provides coverage across the globe. It uses Alibaba Cloud\\"s high-quality Border Gateway Protocol (BGP) bandwidth and global transmission network to provide low-latency access from nearby locations. This reduces the impact of network issues, such as latency, jitter, and packet loss, on your service quality. GA provides a high-availability and high-performance network acceleration service for users worldwide. You can call the CreateAccelerator operation to create a Global Accelerator instance.
       *
       * @description The **CreateAccelerator** operation is asynchronous. After you send a request, the system returns a Global Accelerator instance ID, but the instance is still being created in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the Global Accelerator instance:
       * - If a Global Accelerator instance is in the **init** state, the instance is being created. You can only perform query operations on the instance.
       * - If a Global Accelerator instance is in the **active** state, the instance is created.
       *
       * @param request CreateAcceleratorRequest
       * @return CreateAcceleratorResponse
       */
      Models::CreateAcceleratorResponse createAccelerator(const Models::CreateAcceleratorRequest &request);

      /**
       * @summary Invokes the CreateAcl operation to create an access control policy group.
       *
       * @description **CreateAcl** is an asynchronous operation. After you invoke the operation, the system returns an access control policy group ID but the access control policy group is not yet created. The creation node continues to run in the background. You can invoke [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) to query the status of the access control policy group:
       * - If the access control policy group is in the **init** state, the access control policy group is being created. In this state, you can only execute query operations and cannot execute other operations.
       * - If the access control policy group is in the **active** state, the access control policy group is created.
       *
       * @param request CreateAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAclWithOptions(const Models::CreateAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateAcl operation to create an access control policy group.
       *
       * @description **CreateAcl** is an asynchronous operation. After you invoke the operation, the system returns an access control policy group ID but the access control policy group is not yet created. The creation node continues to run in the background. You can invoke [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) to query the status of the access control policy group:
       * - If the access control policy group is in the **init** state, the access control policy group is being created. In this state, you can only execute query operations and cannot execute other operations.
       * - If the access control policy group is in the **active** state, the access control policy group is created.
       *
       * @param request CreateAclRequest
       * @return CreateAclResponse
       */
      Models::CreateAclResponse createAcl(const Models::CreateAclRequest &request);

      /**
       * @summary Creates an origin probing task by calling the CreateApplicationMonitor operation.
       *
       * @description You can call the **CreateApplicationMonitor** operation to create an origin probing task. This task monitors the end-to-end network quality from the probing point through Global Accelerator (GA) to the origin server in real time, helping you quickly locate network faults and perform targeted network optimization.
       * Before you begin:
       * - Only subscription Alibaba Cloud Global Accelerator (GA) instances of Medium Ⅰ or higher specifications support origin probing tasks.
       * - Origin probing tasks cannot be created for UDP protocol listeners.
       * - The service port of the monitoring address must be within the listener port range.
       * - The **CreateApplicationMonitor** operation is asynchronous. After you invoke this operation, the system returns a node ID for the origin probing task, but the node is not yet created. The node creation continues in the background. You can invoke [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) to query the status of the origin probing task:
       *     - If the origin probing task is in the **init** state, the task is being created. In this state, you can only perform query operations.
       *     - If the origin probing task is in the **active** state, the task is created.
       * - The **CreateApplicationMonitor** operation does not support concurrent creation of origin probing nodes within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationMonitorResponse
       */
      Models::CreateApplicationMonitorResponse createApplicationMonitorWithOptions(const Models::CreateApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an origin probing task by calling the CreateApplicationMonitor operation.
       *
       * @description You can call the **CreateApplicationMonitor** operation to create an origin probing task. This task monitors the end-to-end network quality from the probing point through Global Accelerator (GA) to the origin server in real time, helping you quickly locate network faults and perform targeted network optimization.
       * Before you begin:
       * - Only subscription Alibaba Cloud Global Accelerator (GA) instances of Medium Ⅰ or higher specifications support origin probing tasks.
       * - Origin probing tasks cannot be created for UDP protocol listeners.
       * - The service port of the monitoring address must be within the listener port range.
       * - The **CreateApplicationMonitor** operation is asynchronous. After you invoke this operation, the system returns a node ID for the origin probing task, but the node is not yet created. The node creation continues in the background. You can invoke [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) to query the status of the origin probing task:
       *     - If the origin probing task is in the **init** state, the task is being created. In this state, you can only perform query operations.
       *     - If the origin probing task is in the **active** state, the task is created.
       * - The **CreateApplicationMonitor** operation does not support concurrent creation of origin probing nodes within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateApplicationMonitorRequest
       * @return CreateApplicationMonitorResponse
       */
      Models::CreateApplicationMonitorResponse createApplicationMonitor(const Models::CreateApplicationMonitorRequest &request);

      /**
       * @summary Creates a bandwidth plan.
       *
       * @description You must create a basic bandwidth plan to use Global Accelerator (GA) for network acceleration. A basic bandwidth plan supports the following bandwidth types:
       * - **Basic bandwidth**: The acceleration area and the area where the endpoint is deployed are in the Chinese mainland. The accelerated service is deployed on Alibaba Cloud.
       * - **Enhanced bandwidth**: The acceleration area and the area where the endpoint is deployed are in the Chinese mainland. This bandwidth type can accelerate services on both Alibaba Cloud and public networks outside Alibaba Cloud.
       * - **Advanced bandwidth**: The acceleration area and the area where the endpoint is deployed are outside the Chinese mainland. This bandwidth type can accelerate services on both Alibaba Cloud and public networks outside Alibaba Cloud. To accelerate access for users in the Chinese mainland, you can select China (Hong Kong) as the acceleration area.
       * Note the following when you call this operation:
       * - The **CreateBandwidthPackage** operation is asynchronous. After you send a request, the system returns a bandwidth plan ID, but the bandwidth plan is not created immediately. The system creates the bandwidth plan in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan:
       *   - If a bandwidth plan is in the **init** state, the bandwidth plan is being created. In this state, you can only query the bandwidth plan and cannot perform other operations.
       *   - If a bandwidth plan is in the **active** state, the bandwidth plan is created.
       * - The **CreateBandwidthPackage** operation does not support concurrent requests to create bandwidth plans for the same Global Accelerator instance.
       *
       * @param request CreateBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBandwidthPackageResponse
       */
      Models::CreateBandwidthPackageResponse createBandwidthPackageWithOptions(const Models::CreateBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a bandwidth plan.
       *
       * @description You must create a basic bandwidth plan to use Global Accelerator (GA) for network acceleration. A basic bandwidth plan supports the following bandwidth types:
       * - **Basic bandwidth**: The acceleration area and the area where the endpoint is deployed are in the Chinese mainland. The accelerated service is deployed on Alibaba Cloud.
       * - **Enhanced bandwidth**: The acceleration area and the area where the endpoint is deployed are in the Chinese mainland. This bandwidth type can accelerate services on both Alibaba Cloud and public networks outside Alibaba Cloud.
       * - **Advanced bandwidth**: The acceleration area and the area where the endpoint is deployed are outside the Chinese mainland. This bandwidth type can accelerate services on both Alibaba Cloud and public networks outside Alibaba Cloud. To accelerate access for users in the Chinese mainland, you can select China (Hong Kong) as the acceleration area.
       * Note the following when you call this operation:
       * - The **CreateBandwidthPackage** operation is asynchronous. After you send a request, the system returns a bandwidth plan ID, but the bandwidth plan is not created immediately. The system creates the bandwidth plan in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the bandwidth plan:
       *   - If a bandwidth plan is in the **init** state, the bandwidth plan is being created. In this state, you can only query the bandwidth plan and cannot perform other operations.
       *   - If a bandwidth plan is in the **active** state, the bandwidth plan is created.
       * - The **CreateBandwidthPackage** operation does not support concurrent requests to create bandwidth plans for the same Global Accelerator instance.
       *
       * @param request CreateBandwidthPackageRequest
       * @return CreateBandwidthPackageResponse
       */
      Models::CreateBandwidthPackageResponse createBandwidthPackage(const Models::CreateBandwidthPackageRequest &request);

      /**
       * @summary Creates an accelerated IP address for a basic Global Accelerator (GA) instance.
       *
       * @description *   **CreateBasicAccelerateIp** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address:
       *     *   If no status information is returned, the accelerated IP address is being created. In this case, you can perform only query operations.
       *     *   If the accelerated IP address is in the **active** state, the accelerated IP address is created.
       * *   The **CreateBasicAccelerateIp** operation cannot be repeatedly called for the same GA instance within a specific period of time.
       *
       * @param request CreateBasicAccelerateIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicAccelerateIpResponse
       */
      Models::CreateBasicAccelerateIpResponse createBasicAccelerateIpWithOptions(const Models::CreateBasicAccelerateIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an accelerated IP address for a basic Global Accelerator (GA) instance.
       *
       * @description *   **CreateBasicAccelerateIp** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address:
       *     *   If no status information is returned, the accelerated IP address is being created. In this case, you can perform only query operations.
       *     *   If the accelerated IP address is in the **active** state, the accelerated IP address is created.
       * *   The **CreateBasicAccelerateIp** operation cannot be repeatedly called for the same GA instance within a specific period of time.
       *
       * @param request CreateBasicAccelerateIpRequest
       * @return CreateBasicAccelerateIpResponse
       */
      Models::CreateBasicAccelerateIpResponse createBasicAccelerateIp(const Models::CreateBasicAccelerateIpRequest &request);

      /**
       * @summary Creates a mapping between an accelerated IP address and an endpoint for a basic Global Accelerator (GA) instance.
       *
       * @description *   **CreateBasicAccelerateIpEndpointRelation** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an accelerated IP address or an endpoint to determine the association status between the accelerated IP address and endpoint.
       *     *   If the status of the accelerated IP address and endpoint is **binding**, the accelerated IP address is being associated with the endpoint. In this case, you can query the accelerated IP address and endpoint but cannot perform other operations.
       *     *   If the status of the accelerated IP address and endpoint is **bound** and the status returned by the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) API operation is **active**, the accelerated IP address is associated with the endpoint.
       * *   The **CreateBasicAccelerateIpEndpointRelation** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
       *
       * @param request CreateBasicAccelerateIpEndpointRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicAccelerateIpEndpointRelationResponse
       */
      Models::CreateBasicAccelerateIpEndpointRelationResponse createBasicAccelerateIpEndpointRelationWithOptions(const Models::CreateBasicAccelerateIpEndpointRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mapping between an accelerated IP address and an endpoint for a basic Global Accelerator (GA) instance.
       *
       * @description *   **CreateBasicAccelerateIpEndpointRelation** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) API operation to query the status of an accelerated IP address or an endpoint to determine the association status between the accelerated IP address and endpoint.
       *     *   If the status of the accelerated IP address and endpoint is **binding**, the accelerated IP address is being associated with the endpoint. In this case, you can query the accelerated IP address and endpoint but cannot perform other operations.
       *     *   If the status of the accelerated IP address and endpoint is **bound** and the status returned by the [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) API operation is **active**, the accelerated IP address is associated with the endpoint.
       * *   The **CreateBasicAccelerateIpEndpointRelation** API operation cannot be repeatedly called for the same basic GA instance within a period of time.
       *
       * @param request CreateBasicAccelerateIpEndpointRelationRequest
       * @return CreateBasicAccelerateIpEndpointRelationResponse
       */
      Models::CreateBasicAccelerateIpEndpointRelationResponse createBasicAccelerateIpEndpointRelation(const Models::CreateBasicAccelerateIpEndpointRelationRequest &request);

      /**
       * @summary Calls the CreateBasicAccelerateIpEndpointRelations operation to batch attach accelerated IP addresses to endpoints for a basic Global Accelerator instance.
       *
       * @description - **CreateBasicAccelerateIpEndpointRelations** is an asynchronous operation. After you send a request, the system returns a request ID, but the task of batch attaching accelerated IP addresses to endpoints is still in progress. You can call [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the status of accelerated IP addresses and endpoints respectively to confirm whether the attachments are created:  
       *     - If an accelerated IP address or endpoint is in the **binding** state, the attachment is being created. In this state, you can only perform query operations.
       *     - If all accelerated IP addresses and endpoints are in the **bound** state, and the attachment status returned by [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) is **active**, the batch task of attaching accelerated IP addresses to endpoints is complete.
       * - **CreateBasicAccelerateIpEndpointRelations** does not support concurrent batch attaching of accelerated IP addresses to endpoints within the same basic Global Accelerator instance.
       *
       * @param request CreateBasicAccelerateIpEndpointRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicAccelerateIpEndpointRelationsResponse
       */
      Models::CreateBasicAccelerateIpEndpointRelationsResponse createBasicAccelerateIpEndpointRelationsWithOptions(const Models::CreateBasicAccelerateIpEndpointRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateBasicAccelerateIpEndpointRelations operation to batch attach accelerated IP addresses to endpoints for a basic Global Accelerator instance.
       *
       * @description - **CreateBasicAccelerateIpEndpointRelations** is an asynchronous operation. After you send a request, the system returns a request ID, but the task of batch attaching accelerated IP addresses to endpoints is still in progress. You can call [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the status of accelerated IP addresses and endpoints respectively to confirm whether the attachments are created:  
       *     - If an accelerated IP address or endpoint is in the **binding** state, the attachment is being created. In this state, you can only perform query operations.
       *     - If all accelerated IP addresses and endpoints are in the **bound** state, and the attachment status returned by [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) is **active**, the batch task of attaching accelerated IP addresses to endpoints is complete.
       * - **CreateBasicAccelerateIpEndpointRelations** does not support concurrent batch attaching of accelerated IP addresses to endpoints within the same basic Global Accelerator instance.
       *
       * @param request CreateBasicAccelerateIpEndpointRelationsRequest
       * @return CreateBasicAccelerateIpEndpointRelationsResponse
       */
      Models::CreateBasicAccelerateIpEndpointRelationsResponse createBasicAccelerateIpEndpointRelations(const Models::CreateBasicAccelerateIpEndpointRelationsRequest &request);

      /**
       * @summary Basic Alibaba Cloud Global Accelerator (GA) instances leverage Alibaba Cloud\\"s premium global the Internet bandwidth and high-quality transmission network to provide users with point-to-point acceleration. Basic Alibaba Cloud Global Accelerator (GA) instances are primarily used for Layer 3 (IP protocol) network acceleration. You can invoke the CreateBasicAccelerator operation to create a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description **CreateBasicAccelerator** is an asynchronous operation. After you invoke this operation, the system returns a basic Alibaba Cloud Global Accelerator (GA) instance ID, but the instance is not yet created. The creation node continues to execute in the background. You can invoke [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) or [ListBasicAccelerators](https://help.aliyun.com/document_detail/353189.html) to query the status of the basic GA instance:
       * - If the basic GA instance is in the **init** state, the instance is being created. In this state, you can only perform query operations.
       * - If the basic GA instance is in the **active** state, the instance is created.
       *
       * @param request CreateBasicAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicAcceleratorResponse
       */
      Models::CreateBasicAcceleratorResponse createBasicAcceleratorWithOptions(const Models::CreateBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Basic Alibaba Cloud Global Accelerator (GA) instances leverage Alibaba Cloud\\"s premium global the Internet bandwidth and high-quality transmission network to provide users with point-to-point acceleration. Basic Alibaba Cloud Global Accelerator (GA) instances are primarily used for Layer 3 (IP protocol) network acceleration. You can invoke the CreateBasicAccelerator operation to create a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description **CreateBasicAccelerator** is an asynchronous operation. After you invoke this operation, the system returns a basic Alibaba Cloud Global Accelerator (GA) instance ID, but the instance is not yet created. The creation node continues to execute in the background. You can invoke [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) or [ListBasicAccelerators](https://help.aliyun.com/document_detail/353189.html) to query the status of the basic GA instance:
       * - If the basic GA instance is in the **init** state, the instance is being created. In this state, you can only perform query operations.
       * - If the basic GA instance is in the **active** state, the instance is created.
       *
       * @param request CreateBasicAcceleratorRequest
       * @return CreateBasicAcceleratorResponse
       */
      Models::CreateBasicAcceleratorResponse createBasicAccelerator(const Models::CreateBasicAcceleratorRequest &request);

      /**
       * @summary Invokes the CreateBasicEndpoint operation to create an endpoint for a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **CreateBasicEndpoint** is an asynchronous operation. After you invoke this operation, the system returns an endpoint ID for the basic Alibaba Cloud Global Accelerator (GA) instance, but the endpoint is not yet created. The creation task continues to execute in the background. You can invoke [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the endpoint status: 
       *     - When the endpoint is in the **init** state, the endpoint is being created. In this state, you can only execute query operations.
       *     - When the endpoint is in the **active** state, the endpoint is created.
       * - **CreateBasicEndpoint** does not support concurrent endpoint creation within the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateBasicEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicEndpointResponse
       */
      Models::CreateBasicEndpointResponse createBasicEndpointWithOptions(const Models::CreateBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateBasicEndpoint operation to create an endpoint for a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **CreateBasicEndpoint** is an asynchronous operation. After you invoke this operation, the system returns an endpoint ID for the basic Alibaba Cloud Global Accelerator (GA) instance, but the endpoint is not yet created. The creation task continues to execute in the background. You can invoke [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the endpoint status: 
       *     - When the endpoint is in the **init** state, the endpoint is being created. In this state, you can only execute query operations.
       *     - When the endpoint is in the **active** state, the endpoint is created.
       * - **CreateBasicEndpoint** does not support concurrent endpoint creation within the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateBasicEndpointRequest
       * @return CreateBasicEndpointResponse
       */
      Models::CreateBasicEndpointResponse createBasicEndpoint(const Models::CreateBasicEndpointRequest &request);

      /**
       * @summary Invokes the CreateBasicEndpointGroup operation to create an endpoint group for a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **CreateBasicEndpointGroup** is an asynchronous operation. After you invoke this operation, the system returns an endpoint group ID before the endpoint group is created. The endpoint group is being created in the background. You can invoke [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) to query the status of the endpoint group:
       *     - If the endpoint group is in the **init** state, the endpoint group is being created. In this state, you can only perform query operations.
       *     - If the endpoint group is in the **active** state, the endpoint group is created.
       * - **CreateBasicEndpointGroup** does not support concurrent requests to create an endpoint group for the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateBasicEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicEndpointGroupResponse
       */
      Models::CreateBasicEndpointGroupResponse createBasicEndpointGroupWithOptions(const Models::CreateBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateBasicEndpointGroup operation to create an endpoint group for a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **CreateBasicEndpointGroup** is an asynchronous operation. After you invoke this operation, the system returns an endpoint group ID before the endpoint group is created. The endpoint group is being created in the background. You can invoke [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) to query the status of the endpoint group:
       *     - If the endpoint group is in the **init** state, the endpoint group is being created. In this state, you can only perform query operations.
       *     - If the endpoint group is in the **active** state, the endpoint group is created.
       * - **CreateBasicEndpointGroup** does not support concurrent requests to create an endpoint group for the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateBasicEndpointGroupRequest
       * @return CreateBasicEndpointGroupResponse
       */
      Models::CreateBasicEndpointGroupResponse createBasicEndpointGroup(const Models::CreateBasicEndpointGroupRequest &request);

      /**
       * @summary Creates multiple endpoints for a basic Global Accelerator (GA) instance.
       *
       * @description *   **CreateBasicEndpoints** is an asynchronous operation. After you call this operation, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operation to query the status of endpoints. - If one or more endpoints are in the **init** state, it indicates that the endpoints are being created. In this case, you can continue to perform query operations on the endpoints. If all endpoints are in the **active** state, it indicates that the endpoints are created.
       * *   You cannot call the **CreateBasicEndpoints** operation again on the same GA instance before the previous operation is complete.
       *
       * @param request CreateBasicEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicEndpointsResponse
       */
      Models::CreateBasicEndpointsResponse createBasicEndpointsWithOptions(const Models::CreateBasicEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple endpoints for a basic Global Accelerator (GA) instance.
       *
       * @description *   **CreateBasicEndpoints** is an asynchronous operation. After you call this operation, the system returns a request ID and runs the task in the background. You can call the [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) operation to query the status of endpoints. - If one or more endpoints are in the **init** state, it indicates that the endpoints are being created. In this case, you can continue to perform query operations on the endpoints. If all endpoints are in the **active** state, it indicates that the endpoints are created.
       * *   You cannot call the **CreateBasicEndpoints** operation again on the same GA instance before the previous operation is complete.
       *
       * @param request CreateBasicEndpointsRequest
       * @return CreateBasicEndpointsResponse
       */
      Models::CreateBasicEndpointsResponse createBasicEndpoints(const Models::CreateBasicEndpointsRequest &request);

      /**
       * @summary Invokes the CreateBasicIpSet operation to create an acceleration region for a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description When you invoke this operation, take note of the following items:
       * - A basic Alibaba Cloud Global Accelerator (GA) instance supports only one acceleration region and supports only the IPv4 protocol.
       * - **CreateBasicIpSet** is an asynchronous operation. After a request is sent, the system returns an acceleration region instance ID but the acceleration region is not yet created. The creation node continues to run in the background. You can invoke [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) to query the status of the acceleration region:
       *     - If the acceleration region is in the **init** state, the acceleration region is being created. In this state, you can only execute query operations.
       *     - If the acceleration region is in the **active** state, the acceleration region is created.
       * - The **CreateBasicIpSet** operation does not support concurrent creation of acceleration regions within the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateBasicIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBasicIpSetResponse
       */
      Models::CreateBasicIpSetResponse createBasicIpSetWithOptions(const Models::CreateBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateBasicIpSet operation to create an acceleration region for a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description When you invoke this operation, take note of the following items:
       * - A basic Alibaba Cloud Global Accelerator (GA) instance supports only one acceleration region and supports only the IPv4 protocol.
       * - **CreateBasicIpSet** is an asynchronous operation. After a request is sent, the system returns an acceleration region instance ID but the acceleration region is not yet created. The creation node continues to run in the background. You can invoke [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) to query the status of the acceleration region:
       *     - If the acceleration region is in the **init** state, the acceleration region is being created. In this state, you can only execute query operations.
       *     - If the acceleration region is in the **active** state, the acceleration region is created.
       * - The **CreateBasicIpSet** operation does not support concurrent creation of acceleration regions within the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request CreateBasicIpSetRequest
       * @return CreateBasicIpSetResponse
       */
      Models::CreateBasicIpSetResponse createBasicIpSet(const Models::CreateBasicIpSetRequest &request);

      /**
       * @summary Invokes the CreateCustomRoutingEndpointGroupDestinations operation to create mapping configurations for an endpoint group that is associated with a custom route listener.
       *
       * @description An Alibaba Cloud Global Accelerator (GA) instance can generate a port mapping table based on the configured listener port range, the mapping configurations (protocols and port ranges) of the destination endpoint group, and the IP address information of the endpoints (vSwitches). This enables deterministic routing of traffic to specific IP addresses and ports within the vSwitches.
       * This operation creates mapping configurations for an endpoint group that is associated with a custom route listener. When you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID, but the mapping configurations for the endpoint group are not yet created. The creation node continues to run in the background. You can invoke the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the endpoint group and confirm whether the mapping configurations are created: 
       *     - If the endpoint group is in the **updating** state, the mapping configurations are being created. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the mapping configurations are created.
       * - **CreateCustomRoutingEndpointGroupDestinations** does not support concurrent creation of mapping configurations for endpoint groups associated with custom route listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       * ### Before you begin
       * Before you create mapping configurations for an endpoint group associated with a custom route listener, make sure that you have completed the following operations:
       * - A standard Alibaba Cloud Global Accelerator (GA) instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - A bandwidth plan is attached to the standard Global Accelerator instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - You have completed the deployment of the required applications as backend services to accept forwarded requests from Global Accelerator. Custom route listeners support only vSwitches as backend service types.
       * - You have obtained the permissions to use custom route listeners and created a custom route listener. The custom route listener type is in invitational preview. To use this feature, contact your account manager. To create a custom route listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       * - You have created an endpoint group for the custom route listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
       *
       * @param request CreateCustomRoutingEndpointGroupDestinationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::CreateCustomRoutingEndpointGroupDestinationsResponse createCustomRoutingEndpointGroupDestinationsWithOptions(const Models::CreateCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateCustomRoutingEndpointGroupDestinations operation to create mapping configurations for an endpoint group that is associated with a custom route listener.
       *
       * @description An Alibaba Cloud Global Accelerator (GA) instance can generate a port mapping table based on the configured listener port range, the mapping configurations (protocols and port ranges) of the destination endpoint group, and the IP address information of the endpoints (vSwitches). This enables deterministic routing of traffic to specific IP addresses and ports within the vSwitches.
       * This operation creates mapping configurations for an endpoint group that is associated with a custom route listener. When you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID, but the mapping configurations for the endpoint group are not yet created. The creation node continues to run in the background. You can invoke the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the endpoint group and confirm whether the mapping configurations are created: 
       *     - If the endpoint group is in the **updating** state, the mapping configurations are being created. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the mapping configurations are created.
       * - **CreateCustomRoutingEndpointGroupDestinations** does not support concurrent creation of mapping configurations for endpoint groups associated with custom route listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       * ### Before you begin
       * Before you create mapping configurations for an endpoint group associated with a custom route listener, make sure that you have completed the following operations:
       * - A standard Alibaba Cloud Global Accelerator (GA) instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - A bandwidth plan is attached to the standard Global Accelerator instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - You have completed the deployment of the required applications as backend services to accept forwarded requests from Global Accelerator. Custom route listeners support only vSwitches as backend service types.
       * - You have obtained the permissions to use custom route listeners and created a custom route listener. The custom route listener type is in invitational preview. To use this feature, contact your account manager. To create a custom route listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       * - You have created an endpoint group for the custom route listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
       *
       * @param request CreateCustomRoutingEndpointGroupDestinationsRequest
       * @return CreateCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::CreateCustomRoutingEndpointGroupDestinationsResponse createCustomRoutingEndpointGroupDestinations(const Models::CreateCustomRoutingEndpointGroupDestinationsRequest &request);

      /**
       * @summary Invokes the CreateCustomRoutingEndpointGroups operation to create endpoint groups for a custom routing type listener in batches.
       *
       * @description Global Accelerator allocates traffic to endpoints within endpoint groups based on the forwarding method defined by the listener routing type.
       * - After you configure an intelligent routing listener, the Alibaba Cloud Global Accelerator (GA) instance automatically selects the nearest healthy endpoint group for traffic forwarding based on latency factors (primarily depending on geographic location and network link conditions), and ultimately delivers client network access requests to healthy endpoints.
       * - After you configure a custom routing type listener, the Alibaba Cloud Global Accelerator (GA) instance generates a port mapping table based on the configured listener port range, destination endpoint group protocol and port range, and IP address information of the endpoints (vSwitches), to deterministically route traffic to specific IP addresses and ports within vSwitches.
       * This operation creates endpoint groups for a custom routing type listener. To create endpoint groups for an intelligent routing listener, invoke [CreateEndpointGroup](https://help.aliyun.com/document_detail/153259.html).
       * When you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the endpoint groups for the custom routing type listener are not yet created. The creation task continues to execute in the background. You can invoke [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) or [ListCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449374.html) to query the status of the endpoint groups: 
       *     - If an endpoint group is in the **init** state, the endpoint groups are being created in batches. In this state, you can only execute query operations.
       *     - When all endpoint groups are in the **active** state, the batch creation is complete.
       * - **CreateCustomRoutingEndpointGroups** does not support concurrent creation of endpoint groups for custom routing type listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       * ### Before you begin
       * Before you create endpoint groups for a custom routing type listener, make sure that you have completed the following operations:
       * - A standard Global Accelerator instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - A bandwidth plan is attached to the standard Alibaba Cloud Global Accelerator (GA) instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - You have deployed the relevant applications as backend services for Global Accelerator to accept forwarded requests. Custom routing type listeners support only vSwitches as the backend service type.
       * - You have applied for permissions to use custom routing type listeners and created a custom routing type listener. The custom routing type for listeners is in invitational preview. To use this feature, contact your account manager. To create a custom routing type listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       *
       * @param request CreateCustomRoutingEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomRoutingEndpointGroupsResponse
       */
      Models::CreateCustomRoutingEndpointGroupsResponse createCustomRoutingEndpointGroupsWithOptions(const Models::CreateCustomRoutingEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateCustomRoutingEndpointGroups operation to create endpoint groups for a custom routing type listener in batches.
       *
       * @description Global Accelerator allocates traffic to endpoints within endpoint groups based on the forwarding method defined by the listener routing type.
       * - After you configure an intelligent routing listener, the Alibaba Cloud Global Accelerator (GA) instance automatically selects the nearest healthy endpoint group for traffic forwarding based on latency factors (primarily depending on geographic location and network link conditions), and ultimately delivers client network access requests to healthy endpoints.
       * - After you configure a custom routing type listener, the Alibaba Cloud Global Accelerator (GA) instance generates a port mapping table based on the configured listener port range, destination endpoint group protocol and port range, and IP address information of the endpoints (vSwitches), to deterministically route traffic to specific IP addresses and ports within vSwitches.
       * This operation creates endpoint groups for a custom routing type listener. To create endpoint groups for an intelligent routing listener, invoke [CreateEndpointGroup](https://help.aliyun.com/document_detail/153259.html).
       * When you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the endpoint groups for the custom routing type listener are not yet created. The creation task continues to execute in the background. You can invoke [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) or [ListCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449374.html) to query the status of the endpoint groups: 
       *     - If an endpoint group is in the **init** state, the endpoint groups are being created in batches. In this state, you can only execute query operations.
       *     - When all endpoint groups are in the **active** state, the batch creation is complete.
       * - **CreateCustomRoutingEndpointGroups** does not support concurrent creation of endpoint groups for custom routing type listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       * ### Before you begin
       * Before you create endpoint groups for a custom routing type listener, make sure that you have completed the following operations:
       * - A standard Global Accelerator instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - A bandwidth plan is attached to the standard Alibaba Cloud Global Accelerator (GA) instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - You have deployed the relevant applications as backend services for Global Accelerator to accept forwarded requests. Custom routing type listeners support only vSwitches as the backend service type.
       * - You have applied for permissions to use custom routing type listeners and created a custom routing type listener. The custom routing type for listeners is in invitational preview. To use this feature, contact your account manager. To create a custom routing type listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       *
       * @param request CreateCustomRoutingEndpointGroupsRequest
       * @return CreateCustomRoutingEndpointGroupsResponse
       */
      Models::CreateCustomRoutingEndpointGroupsResponse createCustomRoutingEndpointGroups(const Models::CreateCustomRoutingEndpointGroupsRequest &request);

      /**
       * @summary Invokes the CreateCustomRoutingEndpointTrafficPolicies operation to create an endpoint traffic policy (custom route type listener).
       *
       * @description This operation takes effect only when the traffic policy of the backend service for the endpoint is set to allow traffic to specified destinations that can accept access traffic. You can invoke [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) to query the traffic policy of the backend service for a specified endpoint. This operation takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom** (specifying destinations that can accept access traffic).
       * Before you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID, but the endpoint traffic policies for the custom route type listener are not yet created. The creation task continues to run in the background. You can invoke [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the endpoint group to confirm whether the traffic policies are created. 
       *     - If the endpoint group is in the **updating** state, the traffic policies are being created. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the traffic policies are created.
       * - The **CreateCustomRoutingEndpointTrafficPolicies** operation does not support concurrent creation of endpoint traffic policies within the same Global Accelerator instance.
       * ### Before you begin
       * Before you create an endpoint traffic policy, make sure that you have completed the following operations:
       * - A standard Global Accelerator instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - If the billing method of the standard Global Accelerator instance is **pay-by-bandwidth**, a basic bandwidth plan is attached to the standard Global Accelerator instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - You have deployed the required applications as backend services to accept forwarded requests from Global Accelerator. The backend service type for custom route type listeners supports only vSwitches.
       * - You have obtained the permissions to use custom route type listeners and created a custom route type listener. The custom route type for listeners is in invitational preview. To use this feature, contact your account manager. To create a custom route type listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       * - An endpoint group is created for the custom route type listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
       * - An endpoint is created for the custom route type listener. For more information, see [CreateCustomRoutingEndpoints](https://help.aliyun.com/document_detail/449382.html).
       *
       * @param request CreateCustomRoutingEndpointTrafficPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::CreateCustomRoutingEndpointTrafficPoliciesResponse createCustomRoutingEndpointTrafficPoliciesWithOptions(const Models::CreateCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateCustomRoutingEndpointTrafficPolicies operation to create an endpoint traffic policy (custom route type listener).
       *
       * @description This operation takes effect only when the traffic policy of the backend service for the endpoint is set to allow traffic to specified destinations that can accept access traffic. You can invoke [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) to query the traffic policy of the backend service for a specified endpoint. This operation takes effect only when **TrafficToEndpointPolicy** is set to **AllowCustom** (specifying destinations that can accept access traffic).
       * Before you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID, but the endpoint traffic policies for the custom route type listener are not yet created. The creation task continues to run in the background. You can invoke [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the endpoint group to confirm whether the traffic policies are created. 
       *     - If the endpoint group is in the **updating** state, the traffic policies are being created. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the traffic policies are created.
       * - The **CreateCustomRoutingEndpointTrafficPolicies** operation does not support concurrent creation of endpoint traffic policies within the same Global Accelerator instance.
       * ### Before you begin
       * Before you create an endpoint traffic policy, make sure that you have completed the following operations:
       * - A standard Global Accelerator instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - If the billing method of the standard Global Accelerator instance is **pay-by-bandwidth**, a basic bandwidth plan is attached to the standard Global Accelerator instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - You have deployed the required applications as backend services to accept forwarded requests from Global Accelerator. The backend service type for custom route type listeners supports only vSwitches.
       * - You have obtained the permissions to use custom route type listeners and created a custom route type listener. The custom route type for listeners is in invitational preview. To use this feature, contact your account manager. To create a custom route type listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       * - An endpoint group is created for the custom route type listener. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
       * - An endpoint is created for the custom route type listener. For more information, see [CreateCustomRoutingEndpoints](https://help.aliyun.com/document_detail/449382.html).
       *
       * @param request CreateCustomRoutingEndpointTrafficPoliciesRequest
       * @return CreateCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::CreateCustomRoutingEndpointTrafficPoliciesResponse createCustomRoutingEndpointTrafficPolicies(const Models::CreateCustomRoutingEndpointTrafficPoliciesRequest &request);

      /**
       * @summary Invokes the CreateCustomRoutingEndpoints operation to create endpoints for a custom route type listener.
       *
       * @description After you configure a custom route type listener, the Alibaba Cloud Global Accelerator (GA) instance generates a port mapping table based on the configured listener port range, the protocol and port range of the destination endpoint group, and the IP address information of the endpoints (vSwitches). This way, traffic is deterministically routed to specific IP addresses and ports in the vSwitches.
       * This operation creates endpoints for a custom route type listener. When you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpoints** is an asynchronous operation. After a request is sent, the system returns a request ID, but the endpoints are not yet created. The creation node continues to run in the background. You can invoke the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the endpoint group to confirm whether the endpoints are created: 
       *     - If the endpoint group is in the **updating** state, the endpoints are being created. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the endpoints are created.
       * - The **CreateCustomRoutingEndpoints** operation does not support concurrent requests to create endpoints for custom route listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       * ### Before you begin
       * Before you create endpoints for a custom route type listener, make sure that the following operations are complete:
       * - A standard Global Accelerator instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - A bandwidth plan is attached to the standard Alibaba Cloud Global Accelerator (GA) instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - Applications are deployed as backend services of Global Accelerator to accept forwarded requests. Custom route type listeners support only vSwitches as the backend service type.
       * - You have obtained the permissions to use custom route type listeners and created a custom route type listener. The custom route type for listeners is in invitational preview. To use this feature, contact your account manager. To create a custom route type listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       * - An endpoint group for the custom route type listener is created. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
       *
       * @param request CreateCustomRoutingEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomRoutingEndpointsResponse
       */
      Models::CreateCustomRoutingEndpointsResponse createCustomRoutingEndpointsWithOptions(const Models::CreateCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the CreateCustomRoutingEndpoints operation to create endpoints for a custom route type listener.
       *
       * @description After you configure a custom route type listener, the Alibaba Cloud Global Accelerator (GA) instance generates a port mapping table based on the configured listener port range, the protocol and port range of the destination endpoint group, and the IP address information of the endpoints (vSwitches). This way, traffic is deterministically routed to specific IP addresses and ports in the vSwitches.
       * This operation creates endpoints for a custom route type listener. When you invoke this operation, take note of the following items:
       * - **CreateCustomRoutingEndpoints** is an asynchronous operation. After a request is sent, the system returns a request ID, but the endpoints are not yet created. The creation node continues to run in the background. You can invoke the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the endpoint group to confirm whether the endpoints are created: 
       *     - If the endpoint group is in the **updating** state, the endpoints are being created. In this state, you can only execute query operations.
       *     - If the endpoint group is in the **active** state, the endpoints are created.
       * - The **CreateCustomRoutingEndpoints** operation does not support concurrent requests to create endpoints for custom route listeners within the same Alibaba Cloud Global Accelerator (GA) instance.
       * ### Before you begin
       * Before you create endpoints for a custom route type listener, make sure that the following operations are complete:
       * - A standard Global Accelerator instance is created. For more information, see [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html).
       * - A bandwidth plan is attached to the standard Alibaba Cloud Global Accelerator (GA) instance. For more information, see [BandwidthPackageAddAccelerator](https://help.aliyun.com/document_detail/153239.html).
       * - Applications are deployed as backend services of Global Accelerator to accept forwarded requests. Custom route type listeners support only vSwitches as the backend service type.
       * - You have obtained the permissions to use custom route type listeners and created a custom route type listener. The custom route type for listeners is in invitational preview. To use this feature, contact your account manager. To create a custom route type listener, see [CreateListener](https://help.aliyun.com/document_detail/153253.html).
       * - An endpoint group for the custom route type listener is created. For more information, see [CreateCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/449363.html).
       *
       * @param request CreateCustomRoutingEndpointsRequest
       * @return CreateCustomRoutingEndpointsResponse
       */
      Models::CreateCustomRoutingEndpointsResponse createCustomRoutingEndpoints(const Models::CreateCustomRoutingEndpointsRequest &request);

      /**
       * @summary Creates an accelerated domain name and associates it with one or more GA instances.
       *
       * @description After you associate an accelerated domain name that has obtained an ICP number with a Global Accelerator (GA) instance, you do not need to complete filing for the accelerated domain name or its subdomains on Alibaba Cloud.
       * This operation adds an accelerated domain name and associates it with GA instances. Take note of the following items when calling this operation:
       * - If your accelerated domain name is hosted in the Chinese mainland, you must obtain an ICP number for the domain name.
       * - The same accelerated domain name cannot be repeatedly associated with the same GA instance.
       * - You cannot repeatedly call the **CreateDomain** operation by using the same Alibaba Cloud account within a specific period of time.
       *
       * @param request CreateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an accelerated domain name and associates it with one or more GA instances.
       *
       * @description After you associate an accelerated domain name that has obtained an ICP number with a Global Accelerator (GA) instance, you do not need to complete filing for the accelerated domain name or its subdomains on Alibaba Cloud.
       * This operation adds an accelerated domain name and associates it with GA instances. Take note of the following items when calling this operation:
       * - If your accelerated domain name is hosted in the Chinese mainland, you must obtain an ICP number for the domain name.
       * - The same accelerated domain name cannot be repeatedly associated with the same GA instance.
       * - You cannot repeatedly call the **CreateDomain** operation by using the same Alibaba Cloud account within a specific period of time.
       *
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @summary Creates an endpoint group.
       *
       * @description - Before you create a virtual endpoint group for a Layer 4 listener, you must first create a default endpoint group.
       * - **CreateEndpointGroup** is an asynchronous operation. After you send a request, the system returns an endpoint group ID and begins creating the endpoint group in the background. You can call [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) to query the status of the endpoint group:
       *   - If the endpoint group is in the **init** state, it is being created. In this state, you can only perform query operations.
       *   - If the endpoint group is in the **active** state, it has been created.
       * - You cannot make concurrent calls to the **CreateEndpointGroup** operation for the same Global Accelerator instance.
       *
       * @param request CreateEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEndpointGroupResponse
       */
      Models::CreateEndpointGroupResponse createEndpointGroupWithOptions(const Models::CreateEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an endpoint group.
       *
       * @description - Before you create a virtual endpoint group for a Layer 4 listener, you must first create a default endpoint group.
       * - **CreateEndpointGroup** is an asynchronous operation. After you send a request, the system returns an endpoint group ID and begins creating the endpoint group in the background. You can call [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) to query the status of the endpoint group:
       *   - If the endpoint group is in the **init** state, it is being created. In this state, you can only perform query operations.
       *   - If the endpoint group is in the **active** state, it has been created.
       * - You cannot make concurrent calls to the **CreateEndpointGroup** operation for the same Global Accelerator instance.
       *
       * @param request CreateEndpointGroupRequest
       * @return CreateEndpointGroupResponse
       */
      Models::CreateEndpointGroupResponse createEndpointGroup(const Models::CreateEndpointGroupRequest &request);

      /**
       * @summary Creates endpoint groups in batches.
       *
       * @description - Creates endpoint groups in batches. Default and virtual endpoint groups cannot be created in a single call.
       * - This API does not support creating virtual endpoint groups for Layer-4 listeners. To create a virtual endpoint group for a Layer-4 listener, call [CreateEndpointGroup](https://help.aliyun.com/document_detail/2302394.html).
       * - **CreateEndpointGroups** is an asynchronous API. It returns a request ID and creates the endpoint groups in the background. You can call [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) or [ListEndpointGroups](https://help.aliyun.com/document_detail/153261.html) to query the status of an endpoint group:
       *   - If an endpoint group is in the **init** state, it is initializing. You can only query the endpoint group in this state.
       *   - The batch creation is complete when all endpoint groups are in the **active** state.
       * - You cannot make concurrent calls to **CreateEndpointGroups** for the same Global Accelerator instance.
       *
       * @param request CreateEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEndpointGroupsResponse
       */
      Models::CreateEndpointGroupsResponse createEndpointGroupsWithOptions(const Models::CreateEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates endpoint groups in batches.
       *
       * @description - Creates endpoint groups in batches. Default and virtual endpoint groups cannot be created in a single call.
       * - This API does not support creating virtual endpoint groups for Layer-4 listeners. To create a virtual endpoint group for a Layer-4 listener, call [CreateEndpointGroup](https://help.aliyun.com/document_detail/2302394.html).
       * - **CreateEndpointGroups** is an asynchronous API. It returns a request ID and creates the endpoint groups in the background. You can call [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) or [ListEndpointGroups](https://help.aliyun.com/document_detail/153261.html) to query the status of an endpoint group:
       *   - If an endpoint group is in the **init** state, it is initializing. You can only query the endpoint group in this state.
       *   - The batch creation is complete when all endpoint groups are in the **active** state.
       * - You cannot make concurrent calls to **CreateEndpointGroups** for the same Global Accelerator instance.
       *
       * @param request CreateEndpointGroupsRequest
       * @return CreateEndpointGroupsResponse
       */
      Models::CreateEndpointGroupsResponse createEndpointGroups(const Models::CreateEndpointGroupsRequest &request);

      /**
       * @summary If you need to distribute traffic based on request attributes such as the domain name, path, HTTP headers, and cookies, you can create custom forwarding rules for a listener. The listener evaluates incoming requests against these rules and performs different forwarding actions. To create forwarding rules, call the `CreateForwardingRules` API.
       *
       * @description Before you call this API, you should understand how forwarding rules work and their matching conditions. For more information, see [Forwarding rules](https://help.aliyun.com/document_detail/204224.html).
       * When you call this API, note the following:
       * - The **CreateForwardingRules** API is asynchronous. After the call is made, the system returns a forwarding rule ID, but the rule is still being created. You can call [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) to query the status of the forwarding rule:
       *   - If a forwarding rule is in the **configuring** status, it is still being created, and you can only perform query operations.
       *   - If a forwarding rule is in the **active** status, the rule has been created.
       * - You cannot use the **CreateForwardingRules** API to create forwarding rules concurrently for the same Global Accelerator instance.
       *
       * @param request CreateForwardingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardingRulesResponse
       */
      Models::CreateForwardingRulesResponse createForwardingRulesWithOptions(const Models::CreateForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you need to distribute traffic based on request attributes such as the domain name, path, HTTP headers, and cookies, you can create custom forwarding rules for a listener. The listener evaluates incoming requests against these rules and performs different forwarding actions. To create forwarding rules, call the `CreateForwardingRules` API.
       *
       * @description Before you call this API, you should understand how forwarding rules work and their matching conditions. For more information, see [Forwarding rules](https://help.aliyun.com/document_detail/204224.html).
       * When you call this API, note the following:
       * - The **CreateForwardingRules** API is asynchronous. After the call is made, the system returns a forwarding rule ID, but the rule is still being created. You can call [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) to query the status of the forwarding rule:
       *   - If a forwarding rule is in the **configuring** status, it is still being created, and you can only perform query operations.
       *   - If a forwarding rule is in the **active** status, the rule has been created.
       * - You cannot use the **CreateForwardingRules** API to create forwarding rules concurrently for the same Global Accelerator instance.
       *
       * @param request CreateForwardingRulesRequest
       * @return CreateForwardingRulesResponse
       */
      Models::CreateForwardingRulesResponse createForwardingRules(const Models::CreateForwardingRulesRequest &request);

      /**
       * @summary Creates acceleration regions.
       *
       * @description *   **CreateIpSets** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
       *     *   If acceleration regions are in the **init** state, it indicates that the acceleration regions are being created. In this case, you can perform only query operations.
       *     *   If acceleration regions are in the **active** state, it indicates that the acceleration regions are created.
       * *   You cannot call the **CreateIpSets** operation again on the same GA instance before the previous operation is completed.
       *
       * @param request CreateIpSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIpSetsResponse
       */
      Models::CreateIpSetsResponse createIpSetsWithOptions(const Models::CreateIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates acceleration regions.
       *
       * @description *   **CreateIpSets** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
       *     *   If acceleration regions are in the **init** state, it indicates that the acceleration regions are being created. In this case, you can perform only query operations.
       *     *   If acceleration regions are in the **active** state, it indicates that the acceleration regions are created.
       * *   You cannot call the **CreateIpSets** operation again on the same GA instance before the previous operation is completed.
       *
       * @param request CreateIpSetsRequest
       * @return CreateIpSetsResponse
       */
      Models::CreateIpSetsResponse createIpSets(const Models::CreateIpSetsRequest &request);

      /**
       * @summary Create a listener for your GA instance.
       *
       * @description Note the following when you call this operation:
       * - **CreateListener** is an asynchronous operation. After you send a request, the system returns a listener ID but the listener is still being created in the background. You can call [DescribeListener](https://help.aliyun.com/document_detail/153254.html) to check the listener\\"s status:
       *   - An **init** status indicates that the listener is being created. In this state, you can only perform query operations.
       *   - An **active** status indicates that the listener is ready.
       * - You cannot concurrently create multiple listeners for the same Global Accelerator instance by using the **CreateListener** operation.
       *
       * @param request CreateListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListenerWithOptions(const Models::CreateListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a listener for your GA instance.
       *
       * @description Note the following when you call this operation:
       * - **CreateListener** is an asynchronous operation. After you send a request, the system returns a listener ID but the listener is still being created in the background. You can call [DescribeListener](https://help.aliyun.com/document_detail/153254.html) to check the listener\\"s status:
       *   - An **init** status indicates that the listener is being created. In this state, you can only perform query operations.
       *   - An **active** status indicates that the listener is ready.
       * - You cannot concurrently create multiple listeners for the same Global Accelerator instance by using the **CreateListener** operation.
       *
       * @param request CreateListenerRequest
       * @return CreateListenerResponse
       */
      Models::CreateListenerResponse createListener(const Models::CreateListenerRequest &request);

      /**
       * @summary Creates secondary IP addresses for a CNAME that is assigned to a Global Accelerator (GA) instance. If an acceleration area of the GA instance becomes unavailable, access traffic is redirected to the secondary IP addresses.
       *
       * @description *   **CreateSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that secondary IP addresses are being created for the CNAME that is assigned to the GA instance. In this case, you can only perform query operations.
       *     *   If the GA instance is in the **active** state, it indicates that secondary IP addresses are created for the CNAME that is assigned to the GA instance.
       * *   The **CreateSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request CreateSpareIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSpareIpsResponse
       */
      Models::CreateSpareIpsResponse createSpareIpsWithOptions(const Models::CreateSpareIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates secondary IP addresses for a CNAME that is assigned to a Global Accelerator (GA) instance. If an acceleration area of the GA instance becomes unavailable, access traffic is redirected to the secondary IP addresses.
       *
       * @description *   **CreateSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that secondary IP addresses are being created for the CNAME that is assigned to the GA instance. In this case, you can only perform query operations.
       *     *   If the GA instance is in the **active** state, it indicates that secondary IP addresses are created for the CNAME that is assigned to the GA instance.
       * *   The **CreateSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request CreateSpareIpsRequest
       * @return CreateSpareIpsResponse
       */
      Models::CreateSpareIpsResponse createSpareIps(const Models::CreateSpareIpsRequest &request);

      /**
       * @summary Deletes a Global Accelerator (GA) instance.
       *
       * @description - You cannot delete subscription GA instances.
       * - **DeleteAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the task.
       *   - If the GA instance is in the **deleting** state, the GA instance is being deleted. In this case, you can perform only query operations.
       *   - If the GA instance cannot be queried, the GA instance is deleted.
       *
       * @param request DeleteAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAcceleratorResponse
       */
      Models::DeleteAcceleratorResponse deleteAcceleratorWithOptions(const Models::DeleteAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Global Accelerator (GA) instance.
       *
       * @description - You cannot delete subscription GA instances.
       * - **DeleteAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of the task.
       *   - If the GA instance is in the **deleting** state, the GA instance is being deleted. In this case, you can perform only query operations.
       *   - If the GA instance cannot be queried, the GA instance is deleted.
       *
       * @param request DeleteAcceleratorRequest
       * @return DeleteAcceleratorResponse
       */
      Models::DeleteAcceleratorResponse deleteAccelerator(const Models::DeleteAcceleratorRequest &request);

      /**
       * @summary Invokes the DeleteAcl operation to delete an access control policy group.
       *
       * @description **DeleteAcl** is an asynchronous operation. After a request is sent, the system returns a request ID, but the access control policy group is not immediately deleted. The deletion node continues to run in the background. You can invoke [GetAcl](https://help.aliyun.com/document_detail/258292.html) to query the status of the access control policy group:
       * - If the access control policy group is in the **deleting** state, the access control policy group is being deleted. In this state, you can only execute query operations and cannot execute other operations.
       * - If the access control policy group cannot be found, the access control policy group is deleted.
       *
       * @param request DeleteAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAclResponse
       */
      Models::DeleteAclResponse deleteAclWithOptions(const Models::DeleteAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteAcl operation to delete an access control policy group.
       *
       * @description **DeleteAcl** is an asynchronous operation. After a request is sent, the system returns a request ID, but the access control policy group is not immediately deleted. The deletion node continues to run in the background. You can invoke [GetAcl](https://help.aliyun.com/document_detail/258292.html) to query the status of the access control policy group:
       * - If the access control policy group is in the **deleting** state, the access control policy group is being deleted. In this state, you can only execute query operations and cannot execute other operations.
       * - If the access control policy group cannot be found, the access control policy group is deleted.
       *
       * @param request DeleteAclRequest
       * @return DeleteAclResponse
       */
      Models::DeleteAclResponse deleteAcl(const Models::DeleteAclRequest &request);

      /**
       * @summary Calls the DeleteApplicationMonitor operation to delete an origin probing task.
       *
       * @description - The **DeleteApplicationMonitor** operation is asynchronous. After you send a request, the system returns a request ID, but the origin probing node is not yet deleted. The deletion node continues to run in the background. You can invoke [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) to query the status of the origin probing node:
       *      - If the origin probing node is in the **deleting** state, the node is being deleted. In this state, you can only execute query operations.
       *     - If the origin probing node cannot be found, the node is deleted.
       * - The **DeleteApplicationMonitor** operation does not support concurrent deletion of origin probing nodes within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request DeleteApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationMonitorResponse
       */
      Models::DeleteApplicationMonitorResponse deleteApplicationMonitorWithOptions(const Models::DeleteApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteApplicationMonitor operation to delete an origin probing task.
       *
       * @description - The **DeleteApplicationMonitor** operation is asynchronous. After you send a request, the system returns a request ID, but the origin probing node is not yet deleted. The deletion node continues to run in the background. You can invoke [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) to query the status of the origin probing node:
       *      - If the origin probing node is in the **deleting** state, the node is being deleted. In this state, you can only execute query operations.
       *     - If the origin probing node cannot be found, the node is deleted.
       * - The **DeleteApplicationMonitor** operation does not support concurrent deletion of origin probing nodes within the same Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request DeleteApplicationMonitorRequest
       * @return DeleteApplicationMonitorResponse
       */
      Models::DeleteApplicationMonitorResponse deleteApplicationMonitor(const Models::DeleteApplicationMonitorRequest &request);

      /**
       * @summary Deletes a bandwidth plan.
       *
       * @description *   By default, subscription bandwidth plans cannot be deleted. If you want to unsubscribe from subscription bandwidth plans, go to the [Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you can unsubscribe from a subscription bandwidth plan that is associated with a Global Accelerator (GA) instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
       * *   Bandwidth plans that are associated with GA instances cannot be deleted. Before you can delete a bandwidth plan that is associated with a GA instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
       * *   **DeleteBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the task.
       *     *   If the bandwidth plan is in the **deleting** state, the bandwidth plan is being deleted. In this case, you can perform only query operations.
       *     *   If the bandwidth plan cannot be found, the bandwidth plan is deleted.
       * *   The **DeleteBandwidthPackage** operation cannot be repeatedly called for the same bandwidth plan within a specific period of time.
       *
       * @param request DeleteBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBandwidthPackageResponse
       */
      Models::DeleteBandwidthPackageResponse deleteBandwidthPackageWithOptions(const Models::DeleteBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bandwidth plan.
       *
       * @description *   By default, subscription bandwidth plans cannot be deleted. If you want to unsubscribe from subscription bandwidth plans, go to the [Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you can unsubscribe from a subscription bandwidth plan that is associated with a Global Accelerator (GA) instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
       * *   Bandwidth plans that are associated with GA instances cannot be deleted. Before you can delete a bandwidth plan that is associated with a GA instance, you must disassociate the bandwidth plan from the GA instance. For information about how to disassociate a bandwidth plan from a GA instance, see [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
       * *   **DeleteBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query the status of the task.
       *     *   If the bandwidth plan is in the **deleting** state, the bandwidth plan is being deleted. In this case, you can perform only query operations.
       *     *   If the bandwidth plan cannot be found, the bandwidth plan is deleted.
       * *   The **DeleteBandwidthPackage** operation cannot be repeatedly called for the same bandwidth plan within a specific period of time.
       *
       * @param request DeleteBandwidthPackageRequest
       * @return DeleteBandwidthPackageResponse
       */
      Models::DeleteBandwidthPackageResponse deleteBandwidthPackage(const Models::DeleteBandwidthPackageRequest &request);

      /**
       * @summary Deletes an accelerated IP address of a basic Global Accelerator (GA) instance.
       *
       * @description *   **DeleteBasicAccelerateIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address.
       *     *   If an accelerated IP address is in the **deleting** state, the accelerated IP address is being deleted. In this case, you can perform only query operations.
       *     *   If the system fails to return information about an accelerated IP address, the accelerated IP address is deleted.
       * *   You cannot repeatedly call the **DeleteBasicAccelerateIp** operation for the same basic GA instance within a specific period of time.
       *
       * @param request DeleteBasicAccelerateIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBasicAccelerateIpResponse
       */
      Models::DeleteBasicAccelerateIpResponse deleteBasicAccelerateIpWithOptions(const Models::DeleteBasicAccelerateIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an accelerated IP address of a basic Global Accelerator (GA) instance.
       *
       * @description *   **DeleteBasicAccelerateIp** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) operation to query the status of an accelerated IP address.
       *     *   If an accelerated IP address is in the **deleting** state, the accelerated IP address is being deleted. In this case, you can perform only query operations.
       *     *   If the system fails to return information about an accelerated IP address, the accelerated IP address is deleted.
       * *   You cannot repeatedly call the **DeleteBasicAccelerateIp** operation for the same basic GA instance within a specific period of time.
       *
       * @param request DeleteBasicAccelerateIpRequest
       * @return DeleteBasicAccelerateIpResponse
       */
      Models::DeleteBasicAccelerateIpResponse deleteBasicAccelerateIp(const Models::DeleteBasicAccelerateIpRequest &request);

      /**
       * @summary Deletes the attach relationship between an accelerated IP address and an endpoint of a basic Global Accelerator (GA) instance.
       *
       * @description - **DeleteBasicAccelerateIpEndpointRelation** is an asynchronous operation. After a request is sent, the system returns a request ID, but the attach relationship between the accelerated IP address and the endpoint of the basic Global Accelerator (GA) instance is not immediately removed. The deletion task continues to run in the background. You can call the following operations to check whether the attach relationship between the accelerated IP address and the endpoint is deleted:  
       *     - Call [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the status of the accelerated IP address and the endpoint respectively. If the status of the accelerated IP address and the endpoint is **unbinding**, the attach relationship is being deleted. In this state, you can only perform query operations and cannot perform other operations.
       *     - Call [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) to query the attach status between the accelerated IP address and the endpoint. If no attach information is returned, the attach relationship between the accelerated IP address and the endpoint is deleted.
       * - **DeleteBasicAccelerateIpEndpointRelation** does not support concurrent deletion of attach relationships between accelerated IP addresses and endpoints within the same basic GA instance.
       *
       * @param request DeleteBasicAccelerateIpEndpointRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBasicAccelerateIpEndpointRelationResponse
       */
      Models::DeleteBasicAccelerateIpEndpointRelationResponse deleteBasicAccelerateIpEndpointRelationWithOptions(const Models::DeleteBasicAccelerateIpEndpointRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the attach relationship between an accelerated IP address and an endpoint of a basic Global Accelerator (GA) instance.
       *
       * @description - **DeleteBasicAccelerateIpEndpointRelation** is an asynchronous operation. After a request is sent, the system returns a request ID, but the attach relationship between the accelerated IP address and the endpoint of the basic Global Accelerator (GA) instance is not immediately removed. The deletion task continues to run in the background. You can call the following operations to check whether the attach relationship between the accelerated IP address and the endpoint is deleted:  
       *     - Call [GetBasicAccelerateIp](https://help.aliyun.com/document_detail/466794.html) or [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the status of the accelerated IP address and the endpoint respectively. If the status of the accelerated IP address and the endpoint is **unbinding**, the attach relationship is being deleted. In this state, you can only perform query operations and cannot perform other operations.
       *     - Call [ListBasicAccelerateIpEndpointRelations](https://help.aliyun.com/document_detail/466803.html) to query the attach status between the accelerated IP address and the endpoint. If no attach information is returned, the attach relationship between the accelerated IP address and the endpoint is deleted.
       * - **DeleteBasicAccelerateIpEndpointRelation** does not support concurrent deletion of attach relationships between accelerated IP addresses and endpoints within the same basic GA instance.
       *
       * @param request DeleteBasicAccelerateIpEndpointRelationRequest
       * @return DeleteBasicAccelerateIpEndpointRelationResponse
       */
      Models::DeleteBasicAccelerateIpEndpointRelationResponse deleteBasicAccelerateIpEndpointRelation(const Models::DeleteBasicAccelerateIpEndpointRelationRequest &request);

      /**
       * @summary Invokes the DeleteBasicAccelerator operation to delete a specified basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - Upfront (subscription) basic Alibaba Cloud Global Accelerator (GA) instances cannot be deleted. You can unsubscribe on the <props="china">[Unsubscribe](https://usercenter2.aliyun.com/refund/refund)<props="intl">[Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you unsubscribe, make sure that the basic Alibaba Cloud Global Accelerator (GA) instance has no acceleration area or endpoint group configurations and is not attached to a bandwidth plan.
       *     - To delete an acceleration area, refer to [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
       *     - To delete an endpoint group, refer to [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
       *     - To disassociate a bandwidth plan from a basic Alibaba Cloud Global Accelerator (GA) instance, refer to [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
       * - Before you invoke this operation to delete a pay-as-you-go basic Alibaba Cloud Global Accelerator (GA) instance, make sure that data migration is complete and that the acceleration area and endpoint group configurations under the instance are deleted.
       *     - To delete an acceleration area, refer to [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
       *     - To delete an endpoint group, refer to [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
       * - **DeleteBasicAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the node in the background. You can invoke [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) to query the status of the basic Alibaba Cloud Global Accelerator (GA) instance:
       *     - If the instance is in the **deleting** state, the instance is being deleted. In this state, you can only execute query operations.
       *     - If the instance cannot be found, the instance is deleted.
       *
       * @param request DeleteBasicAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBasicAcceleratorResponse
       */
      Models::DeleteBasicAcceleratorResponse deleteBasicAcceleratorWithOptions(const Models::DeleteBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteBasicAccelerator operation to delete a specified basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - Upfront (subscription) basic Alibaba Cloud Global Accelerator (GA) instances cannot be deleted. You can unsubscribe on the <props="china">[Unsubscribe](https://usercenter2.aliyun.com/refund/refund)<props="intl">[Unsubscribe](https://usercenter2-intl.aliyun.com/refund/refund) page. Before you unsubscribe, make sure that the basic Alibaba Cloud Global Accelerator (GA) instance has no acceleration area or endpoint group configurations and is not attached to a bandwidth plan.
       *     - To delete an acceleration area, refer to [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
       *     - To delete an endpoint group, refer to [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
       *     - To disassociate a bandwidth plan from a basic Alibaba Cloud Global Accelerator (GA) instance, refer to [BandwidthPackageRemoveAccelerator](https://help.aliyun.com/document_detail/153240.html).
       * - Before you invoke this operation to delete a pay-as-you-go basic Alibaba Cloud Global Accelerator (GA) instance, make sure that data migration is complete and that the acceleration area and endpoint group configurations under the instance are deleted.
       *     - To delete an acceleration area, refer to [DeleteBasicIpSet](https://help.aliyun.com/document_detail/2253388.html).
       *     - To delete an endpoint group, refer to [DeleteBasicEndpointGroup](https://help.aliyun.com/document_detail/2253399.html).
       * - **DeleteBasicAccelerator** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the node in the background. You can invoke [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) to query the status of the basic Alibaba Cloud Global Accelerator (GA) instance:
       *     - If the instance is in the **deleting** state, the instance is being deleted. In this state, you can only execute query operations.
       *     - If the instance cannot be found, the instance is deleted.
       *
       * @param request DeleteBasicAcceleratorRequest
       * @return DeleteBasicAcceleratorResponse
       */
      Models::DeleteBasicAcceleratorResponse deleteBasicAccelerator(const Models::DeleteBasicAcceleratorRequest &request);

      /**
       * @summary Invokes the DeleteBasicEndpoint operation to delete an endpoint of a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **DeleteBasicEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID, but the endpoint is not yet deleted and the deletion node continues in the background. You can invoke [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the status of the endpoint:
       *     - If the endpoint is in the **deleting** state, the endpoint is being deleted. In this state, you can only execute query operations.
       *     - If the endpoint cannot be found, the endpoint is deleted.
       * - **DeleteBasicEndpoint** does not support concurrent deletion of endpoints within the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request DeleteBasicEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBasicEndpointResponse
       */
      Models::DeleteBasicEndpointResponse deleteBasicEndpointWithOptions(const Models::DeleteBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteBasicEndpoint operation to delete an endpoint of a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @description - **DeleteBasicEndpoint** is an asynchronous operation. After a request is sent, the system returns a request ID, but the endpoint is not yet deleted and the deletion node continues in the background. You can invoke [ListBasicEndpoints](https://help.aliyun.com/document_detail/466831.html) to query the status of the endpoint:
       *     - If the endpoint is in the **deleting** state, the endpoint is being deleted. In this state, you can only execute query operations.
       *     - If the endpoint cannot be found, the endpoint is deleted.
       * - **DeleteBasicEndpoint** does not support concurrent deletion of endpoints within the same basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request DeleteBasicEndpointRequest
       * @return DeleteBasicEndpointResponse
       */
      Models::DeleteBasicEndpointResponse deleteBasicEndpoint(const Models::DeleteBasicEndpointRequest &request);

      /**
       * @summary Deletes an endpoint group that is associated with a basic Global Accelerator (GA) instance.
       *
       * @description Before you delete an endpoint group, take note of the following items:
       * *   If an endpoint in the endpoint group is associated with an accelerated IP address, you cannot delete the endpoint group. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the endpoint from the accelerated IP address.
       * *   If no endpoint in the endpoint group is associated with an accelerated IP address, you can delete the endpoint group. When you delete an endpoint group, all endpoints in the endpoint group are deleted.
       * *   **DeleteBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) operation to query the status of the task.
       *     *   If the endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint group cannot be queried, the endpoint group is deleted.
       * *   The **DeleteBasicEndpointGroup** operation cannot be repeatedly called for the same GA instance within a specific period of time.
       *
       * @param request DeleteBasicEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBasicEndpointGroupResponse
       */
      Models::DeleteBasicEndpointGroupResponse deleteBasicEndpointGroupWithOptions(const Models::DeleteBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint group that is associated with a basic Global Accelerator (GA) instance.
       *
       * @description Before you delete an endpoint group, take note of the following items:
       * *   If an endpoint in the endpoint group is associated with an accelerated IP address, you cannot delete the endpoint group. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the endpoint from the accelerated IP address.
       * *   If no endpoint in the endpoint group is associated with an accelerated IP address, you can delete the endpoint group. When you delete an endpoint group, all endpoints in the endpoint group are deleted.
       * *   **DeleteBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicEndpointGroup](https://help.aliyun.com/document_detail/362984.html) operation to query the status of the task.
       *     *   If the endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint group cannot be queried, the endpoint group is deleted.
       * *   The **DeleteBasicEndpointGroup** operation cannot be repeatedly called for the same GA instance within a specific period of time.
       *
       * @param request DeleteBasicEndpointGroupRequest
       * @return DeleteBasicEndpointGroupResponse
       */
      Models::DeleteBasicEndpointGroupResponse deleteBasicEndpointGroup(const Models::DeleteBasicEndpointGroupRequest &request);

      /**
       * @summary Deletes the acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @description *   If an accelerated IP address is associated with an endpoint, you cannot delete the acceleration region. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the accelerated IP address from the endpoint.
       * *   \\*\\*DeleteBasicIpSet\\*\\* is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
       *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
       *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
       * *   The \\*\\*DeleteBasicIpSet\\*\\* operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
       *
       * @param request DeleteBasicIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBasicIpSetResponse
       */
      Models::DeleteBasicIpSetResponse deleteBasicIpSetWithOptions(const Models::DeleteBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @description *   If an accelerated IP address is associated with an endpoint, you cannot delete the acceleration region. You can call the [DeleteBasicAccelerateIpEndpointRelation](https://help.aliyun.com/document_detail/2253413.html) operation to disassociate the accelerated IP address from the endpoint.
       * *   \\*\\*DeleteBasicIpSet\\*\\* is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
       *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
       *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
       * *   The \\*\\*DeleteBasicIpSet\\*\\* operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
       *
       * @param request DeleteBasicIpSetRequest
       * @return DeleteBasicIpSetResponse
       */
      Models::DeleteBasicIpSetResponse deleteBasicIpSet(const Models::DeleteBasicIpSetRequest &request);

      /**
       * @summary Deletes mappings from an endpoint group that is associated with a custom routing listener.
       *
       * @description *   **DeleteCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
       *     *   If the endpoint group is in the **updating** state, it indicates that mappings are being deleted from the endpoint group. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state and no information about the mappings that you want to delete is found in the response when you call the [DescribeCustomRoutingEndpointGroupDestinations](https://help.aliyun.com/document_detail/449378.html) operation, it indicates the mappings are deleted from the endpoint group.
       * *   You cannot call the **DeleteCustomRoutingEndpointGroupDestinations** operation again on the same Global Accelerator (GA) instance before the previous request is completed.
       *
       * @param request DeleteCustomRoutingEndpointGroupDestinationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::DeleteCustomRoutingEndpointGroupDestinationsResponse deleteCustomRoutingEndpointGroupDestinationsWithOptions(const Models::DeleteCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes mappings from an endpoint group that is associated with a custom routing listener.
       *
       * @description *   **DeleteCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
       *     *   If the endpoint group is in the **updating** state, it indicates that mappings are being deleted from the endpoint group. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state and no information about the mappings that you want to delete is found in the response when you call the [DescribeCustomRoutingEndpointGroupDestinations](https://help.aliyun.com/document_detail/449378.html) operation, it indicates the mappings are deleted from the endpoint group.
       * *   You cannot call the **DeleteCustomRoutingEndpointGroupDestinations** operation again on the same Global Accelerator (GA) instance before the previous request is completed.
       *
       * @param request DeleteCustomRoutingEndpointGroupDestinationsRequest
       * @return DeleteCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::DeleteCustomRoutingEndpointGroupDestinationsResponse deleteCustomRoutingEndpointGroupDestinations(const Models::DeleteCustomRoutingEndpointGroupDestinationsRequest &request);

      /**
       * @summary Deletes multiple endpoint groups that are associated with a custom routing listener.
       *
       * @description *   **DeleteCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener that you attempt to delete.
       *     *   If the endpoint groups are in the **deleting** state, the endpoint groups are being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint groups cannot be queried, the endpoint groups are deleted.
       * *   You cannot use the **DeleteCustomRoutingEndpointGroups** operation on the same Global Accelerator (GA) instance before the previous operation is complete.
       *
       * @param request DeleteCustomRoutingEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomRoutingEndpointGroupsResponse
       */
      Models::DeleteCustomRoutingEndpointGroupsResponse deleteCustomRoutingEndpointGroupsWithOptions(const Models::DeleteCustomRoutingEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple endpoint groups that are associated with a custom routing listener.
       *
       * @description *   **DeleteCustomRoutingEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener that you attempt to delete.
       *     *   If the endpoint groups are in the **deleting** state, the endpoint groups are being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint groups cannot be queried, the endpoint groups are deleted.
       * *   You cannot use the **DeleteCustomRoutingEndpointGroups** operation on the same Global Accelerator (GA) instance before the previous operation is complete.
       *
       * @param request DeleteCustomRoutingEndpointGroupsRequest
       * @return DeleteCustomRoutingEndpointGroupsResponse
       */
      Models::DeleteCustomRoutingEndpointGroupsResponse deleteCustomRoutingEndpointGroups(const Models::DeleteCustomRoutingEndpointGroupsRequest &request);

      /**
       * @summary Deletes traffic destinations from an endpoint.
       *
       * @description *   **DeleteCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group to check whether the traffic destinations are deleted.
       *     *   If the endpoint group is in the **updating** state, the traffic destinations are being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state and the traffic destinations that you want to delete cannot be queried by calling the [DescribeCustomRoutingEndPointTrafficPolicy](https://help.aliyun.com/document_detail/449392.html) operation, the traffic destinations are deleted.
       * *   The **DeleteCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteCustomRoutingEndpointTrafficPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::DeleteCustomRoutingEndpointTrafficPoliciesResponse deleteCustomRoutingEndpointTrafficPoliciesWithOptions(const Models::DeleteCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes traffic destinations from an endpoint.
       *
       * @description *   **DeleteCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group to check whether the traffic destinations are deleted.
       *     *   If the endpoint group is in the **updating** state, the traffic destinations are being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state and the traffic destinations that you want to delete cannot be queried by calling the [DescribeCustomRoutingEndPointTrafficPolicy](https://help.aliyun.com/document_detail/449392.html) operation, the traffic destinations are deleted.
       * *   The **DeleteCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteCustomRoutingEndpointTrafficPoliciesRequest
       * @return DeleteCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::DeleteCustomRoutingEndpointTrafficPoliciesResponse deleteCustomRoutingEndpointTrafficPolicies(const Models::DeleteCustomRoutingEndpointTrafficPoliciesRequest &request);

      /**
       * @summary Deletes endpoints from a custom routing listener.
       *
       * @description *   **DeleteCustomRoutingEndpoints** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
       *     *   If an endpoint group is in the **updating** state, the endpoint is being deleted. In this case, you can perform only query operations.
       *     *   If an endpoint group is in the **active** state and the endpoint cannot be found after you call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation, the endpoint is deleted.
       * *   You cannot call the **DeleteCustomRoutingEndpoints** operation again on the same Global Accelerator (GA) instance before the previous task is completed.
       *
       * @param request DeleteCustomRoutingEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomRoutingEndpointsResponse
       */
      Models::DeleteCustomRoutingEndpointsResponse deleteCustomRoutingEndpointsWithOptions(const Models::DeleteCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes endpoints from a custom routing listener.
       *
       * @description *   **DeleteCustomRoutingEndpoints** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) to query the status of the task.
       *     *   If an endpoint group is in the **updating** state, the endpoint is being deleted. In this case, you can perform only query operations.
       *     *   If an endpoint group is in the **active** state and the endpoint cannot be found after you call the [DescribeCustomRoutingEndpoint](https://help.aliyun.com/document_detail/449386.html) operation, the endpoint is deleted.
       * *   You cannot call the **DeleteCustomRoutingEndpoints** operation again on the same Global Accelerator (GA) instance before the previous task is completed.
       *
       * @param request DeleteCustomRoutingEndpointsRequest
       * @return DeleteCustomRoutingEndpointsResponse
       */
      Models::DeleteCustomRoutingEndpointsResponse deleteCustomRoutingEndpoints(const Models::DeleteCustomRoutingEndpointsRequest &request);

      /**
       * @summary Disassociates a domain name from Global Accelerator (GA) instances.
       *
       * @description You cannot call the **DeleteDomainAcceleratorRelation** operation again by using the same Alibaba Cloud account before the previous operation is complete.
       *
       * @param request DeleteDomainAcceleratorRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainAcceleratorRelationResponse
       */
      Models::DeleteDomainAcceleratorRelationResponse deleteDomainAcceleratorRelationWithOptions(const Models::DeleteDomainAcceleratorRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a domain name from Global Accelerator (GA) instances.
       *
       * @description You cannot call the **DeleteDomainAcceleratorRelation** operation again by using the same Alibaba Cloud account before the previous operation is complete.
       *
       * @param request DeleteDomainAcceleratorRelationRequest
       * @return DeleteDomainAcceleratorRelationResponse
       */
      Models::DeleteDomainAcceleratorRelationResponse deleteDomainAcceleratorRelation(const Models::DeleteDomainAcceleratorRelationRequest &request);

      /**
       * @summary Deletes an endpoint group.
       *
       * @description *   **DeleteEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group.
       *     *   If the endpoint group is in the **deleting** state, it indicates that the endpoint group is being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint group cannot be queried, it indicates that the endpoint group is deleted.
       * *   The **DeleteEndpointGroup** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request DeleteEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEndpointGroupResponse
       */
      Models::DeleteEndpointGroupResponse deleteEndpointGroupWithOptions(const Models::DeleteEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an endpoint group.
       *
       * @description *   **DeleteEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the endpoint group.
       *     *   If the endpoint group is in the **deleting** state, it indicates that the endpoint group is being deleted. In this case, you can perform only query operations.
       *     *   If the endpoint group cannot be queried, it indicates that the endpoint group is deleted.
       * *   The **DeleteEndpointGroup** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request DeleteEndpointGroupRequest
       * @return DeleteEndpointGroupResponse
       */
      Models::DeleteEndpointGroupResponse deleteEndpointGroup(const Models::DeleteEndpointGroupRequest &request);

      /**
       * @summary Deletes endpoint groups.
       *
       * @description *   **DeleteEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the task.
       *     *   If an endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
       *     *   If an endpoint group cannot be queried, the endpoint group is deleted.
       * *   The **DeleteEndpointGroups** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEndpointGroupsResponse
       */
      Models::DeleteEndpointGroupsResponse deleteEndpointGroupsWithOptions(const Models::DeleteEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes endpoint groups.
       *
       * @description *   **DeleteEndpointGroups** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the status of the task.
       *     *   If an endpoint group is in the **deleting** state, the endpoint group is being deleted. In this case, you can perform only query operations.
       *     *   If an endpoint group cannot be queried, the endpoint group is deleted.
       * *   The **DeleteEndpointGroups** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteEndpointGroupsRequest
       * @return DeleteEndpointGroupsResponse
       */
      Models::DeleteEndpointGroupsResponse deleteEndpointGroups(const Models::DeleteEndpointGroupsRequest &request);

      /**
       * @summary Deletes forwarding rules.
       *
       * @description *   **DeleteForwardingRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of the task.
       *     *   If a forwarding rule is in the **deleting** state, the forwarding rule is being deleted. In this case, you can perform only query operations.
       *     *   If a forwarding rule cannot be queried, the forwarding rule is deleted.
       * *   The **DeleteForwardingRules** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteForwardingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardingRulesResponse
       */
      Models::DeleteForwardingRulesResponse deleteForwardingRulesWithOptions(const Models::DeleteForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes forwarding rules.
       *
       * @description *   **DeleteForwardingRules** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) operation to query the status of the task.
       *     *   If a forwarding rule is in the **deleting** state, the forwarding rule is being deleted. In this case, you can perform only query operations.
       *     *   If a forwarding rule cannot be queried, the forwarding rule is deleted.
       * *   The **DeleteForwardingRules** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteForwardingRulesRequest
       * @return DeleteForwardingRulesResponse
       */
      Models::DeleteForwardingRulesResponse deleteForwardingRules(const Models::DeleteForwardingRulesRequest &request);

      /**
       * @summary Deletes an acceleration region.
       *
       * @description *   **DeleteIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
       *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
       *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
       * *   The **DeleteIpSet** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request DeleteIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpSetResponse
       */
      Models::DeleteIpSetResponse deleteIpSetWithOptions(const Models::DeleteIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an acceleration region.
       *
       * @description *   **DeleteIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
       *     *   If the acceleration region is in the **deleting** state, it indicates that the acceleration region is being deleted. In this case, you can perform only query operations.
       *     *   If the acceleration region cannot be queried, it indicates that the acceleration region is deleted.
       * *   The **DeleteIpSet** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request DeleteIpSetRequest
       * @return DeleteIpSetResponse
       */
      Models::DeleteIpSetResponse deleteIpSet(const Models::DeleteIpSetRequest &request);

      /**
       * @summary Deletes acceleration regions.
       *
       * @description *   **DeleteIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
       *     *   If the acceleration region is in the **deleting** state, the acceleration region is being deleted. In this case, you can perform only query operations.
       *     *   If you cannot query the acceleration region, the acceleration region is deleted.
       * *   You cannot repeatedly call the **DeleteIpSets** operation for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteIpSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIpSetsResponse
       */
      Models::DeleteIpSetsResponse deleteIpSetsWithOptions(const Models::DeleteIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes acceleration regions.
       *
       * @description *   **DeleteIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
       *     *   If the acceleration region is in the **deleting** state, the acceleration region is being deleted. In this case, you can perform only query operations.
       *     *   If you cannot query the acceleration region, the acceleration region is deleted.
       * *   You cannot repeatedly call the **DeleteIpSets** operation for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteIpSetsRequest
       * @return DeleteIpSetsResponse
       */
      Models::DeleteIpSetsResponse deleteIpSets(const Models::DeleteIpSetsRequest &request);

      /**
       * @summary Deletes a listener.
       *
       * @description *   Before you call the **DeleteListener** operation, make sure that no endpoint groups are associated with the listener that you want to delete. For information about how to delete an endpoint group, see the following topics:
       *     *   [DeleteEndpointGroup](https://help.aliyun.com/document_detail/2253305.html): deletes an endpoint group that is associated with an intelligent routing listener.
       *     *   [DeleteEndpointGroups](https://help.aliyun.com/document_detail/2253311.html): deletes multiple endpoint groups that are associated with intelligent routing listeners at the same time.
       *     *   [DeleteCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/2303183.html): deletes multiple endpoint groups that are associated with custom routing listeners at the same time.
       * *   **DeleteListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the listener.
       *     *   If the listener is in the **deleting** state, the listener is being deleted. In this case, you can perform only query operations.
       *     *   If the listener cannot be queried, the listener is deleted.
       * *   You cannot repeatedly call the **DeleteListener** operation to delete the listeners of the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListenerWithOptions(const Models::DeleteListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a listener.
       *
       * @description *   Before you call the **DeleteListener** operation, make sure that no endpoint groups are associated with the listener that you want to delete. For information about how to delete an endpoint group, see the following topics:
       *     *   [DeleteEndpointGroup](https://help.aliyun.com/document_detail/2253305.html): deletes an endpoint group that is associated with an intelligent routing listener.
       *     *   [DeleteEndpointGroups](https://help.aliyun.com/document_detail/2253311.html): deletes multiple endpoint groups that are associated with intelligent routing listeners at the same time.
       *     *   [DeleteCustomRoutingEndpointGroups](https://help.aliyun.com/document_detail/2303183.html): deletes multiple endpoint groups that are associated with custom routing listeners at the same time.
       * *   **DeleteListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of the listener.
       *     *   If the listener is in the **deleting** state, the listener is being deleted. In this case, you can perform only query operations.
       *     *   If the listener cannot be queried, the listener is deleted.
       * *   You cannot repeatedly call the **DeleteListener** operation to delete the listeners of the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DeleteListenerRequest
       * @return DeleteListenerResponse
       */
      Models::DeleteListenerResponse deleteListener(const Models::DeleteListenerRequest &request);

      /**
       * @summary Deletes the secondary IP addresses that are associated with a CNAME.
       *
       * @description *   **DeleteSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that the secondary IP addresses for the CNAME are being deleted. In this case, you can perform only query operations.
       *     *   If the GA instance is in the **active** state and the secondary IP addresses for the CNAME cannot be queried by calling the [ListSpareIps](https://help.aliyun.com/document_detail/262121.html) operation, it indicates that the IP addresses are deleted.
       * *   The **DeleteSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request DeleteSpareIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSpareIpsResponse
       */
      Models::DeleteSpareIpsResponse deleteSpareIpsWithOptions(const Models::DeleteSpareIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the secondary IP addresses that are associated with a CNAME.
       *
       * @description *   **DeleteSpareIps** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that the secondary IP addresses for the CNAME are being deleted. In this case, you can perform only query operations.
       *     *   If the GA instance is in the **active** state and the secondary IP addresses for the CNAME cannot be queried by calling the [ListSpareIps](https://help.aliyun.com/document_detail/262121.html) operation, it indicates that the IP addresses are deleted.
       * *   The **DeleteSpareIps** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request DeleteSpareIpsRequest
       * @return DeleteSpareIpsResponse
       */
      Models::DeleteSpareIpsResponse deleteSpareIps(const Models::DeleteSpareIpsRequest &request);

      /**
       * @summary You can call the DescribeAccelerator operation to query information about a specified Global Accelerator instance.
       *
       * @param request DescribeAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAcceleratorResponse
       */
      Models::DescribeAcceleratorResponse describeAcceleratorWithOptions(const Models::DescribeAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeAccelerator operation to query information about a specified Global Accelerator instance.
       *
       * @param request DescribeAcceleratorRequest
       * @return DescribeAcceleratorResponse
       */
      Models::DescribeAcceleratorResponse describeAccelerator(const Models::DescribeAcceleratorRequest &request);

      /**
       * @summary Queries the auto-renewal status of a Global Accelerator (GA) instance.
       *
       * @param request DescribeAcceleratorAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAcceleratorAutoRenewAttributeResponse
       */
      Models::DescribeAcceleratorAutoRenewAttributeResponse describeAcceleratorAutoRenewAttributeWithOptions(const Models::DescribeAcceleratorAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of a Global Accelerator (GA) instance.
       *
       * @param request DescribeAcceleratorAutoRenewAttributeRequest
       * @return DescribeAcceleratorAutoRenewAttributeResponse
       */
      Models::DescribeAcceleratorAutoRenewAttributeResponse describeAcceleratorAutoRenewAttribute(const Models::DescribeAcceleratorAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the status of a pay-as-you-go Global Accelerator (GA) instance.
       *
       * @param request DescribeAcceleratorServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAcceleratorServiceStatusResponse
       */
      Models::DescribeAcceleratorServiceStatusResponse describeAcceleratorServiceStatusWithOptions(const Models::DescribeAcceleratorServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a pay-as-you-go Global Accelerator (GA) instance.
       *
       * @param request DescribeAcceleratorServiceStatusRequest
       * @return DescribeAcceleratorServiceStatusResponse
       */
      Models::DescribeAcceleratorServiceStatusResponse describeAcceleratorServiceStatus(const Models::DescribeAcceleratorServiceStatusRequest &request);

      /**
       * @summary Queries the detailed information about an origin probing task.
       *
       * @param request DescribeApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationMonitorResponse
       */
      Models::DescribeApplicationMonitorResponse describeApplicationMonitorWithOptions(const Models::DescribeApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about an origin probing task.
       *
       * @param request DescribeApplicationMonitorRequest
       * @return DescribeApplicationMonitorResponse
       */
      Models::DescribeApplicationMonitorResponse describeApplicationMonitor(const Models::DescribeApplicationMonitorRequest &request);

      /**
       * @summary Queries the details of a bandwidth plan by calling the DescribeBandwidthPackage operation.
       *
       * @param request DescribeBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthPackageResponse
       */
      Models::DescribeBandwidthPackageResponse describeBandwidthPackageWithOptions(const Models::DescribeBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a bandwidth plan by calling the DescribeBandwidthPackage operation.
       *
       * @param request DescribeBandwidthPackageRequest
       * @return DescribeBandwidthPackageResponse
       */
      Models::DescribeBandwidthPackageResponse describeBandwidthPackage(const Models::DescribeBandwidthPackageRequest &request);

      /**
       * @summary Queries the auto-renewal status of a bandwidth plan.
       *
       * @param request DescribeBandwidthPackageAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwidthPackageAutoRenewAttributeResponse
       */
      Models::DescribeBandwidthPackageAutoRenewAttributeResponse describeBandwidthPackageAutoRenewAttributeWithOptions(const Models::DescribeBandwidthPackageAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the auto-renewal status of a bandwidth plan.
       *
       * @param request DescribeBandwidthPackageAutoRenewAttributeRequest
       * @return DescribeBandwidthPackageAutoRenewAttributeResponse
       */
      Models::DescribeBandwidthPackageAutoRenewAttributeResponse describeBandwidthPackageAutoRenewAttribute(const Models::DescribeBandwidthPackageAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the pricing and specification details of Global Accelerator commodity options available for purchase.
       *
       * @param request DescribeCommodityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommodityResponse
       */
      Models::DescribeCommodityResponse describeCommodityWithOptions(const Models::DescribeCommodityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pricing and specification details of Global Accelerator commodity options available for purchase.
       *
       * @param request DescribeCommodityRequest
       * @return DescribeCommodityResponse
       */
      Models::DescribeCommodityResponse describeCommodity(const Models::DescribeCommodityRequest &request);

      /**
       * @summary Queries the prices of commodities.
       *
       * @description You can call the [DescribeCommodity](https://help.aliyun.com/document_detail/2253233.html) operation to query information about the commodity modules.
       *
       * @param request DescribeCommodityPriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCommodityPriceResponse
       */
      Models::DescribeCommodityPriceResponse describeCommodityPriceWithOptions(const Models::DescribeCommodityPriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prices of commodities.
       *
       * @description You can call the [DescribeCommodity](https://help.aliyun.com/document_detail/2253233.html) operation to query information about the commodity modules.
       *
       * @param request DescribeCommodityPriceRequest
       * @return DescribeCommodityPriceResponse
       */
      Models::DescribeCommodityPriceResponse describeCommodityPrice(const Models::DescribeCommodityPriceRequest &request);

      /**
       * @summary Queries a traffic destination of an endpoint.
       *
       * @param request DescribeCustomRoutingEndPointTrafficPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomRoutingEndPointTrafficPolicyResponse
       */
      Models::DescribeCustomRoutingEndPointTrafficPolicyResponse describeCustomRoutingEndPointTrafficPolicyWithOptions(const Models::DescribeCustomRoutingEndPointTrafficPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a traffic destination of an endpoint.
       *
       * @param request DescribeCustomRoutingEndPointTrafficPolicyRequest
       * @return DescribeCustomRoutingEndPointTrafficPolicyResponse
       */
      Models::DescribeCustomRoutingEndPointTrafficPolicyResponse describeCustomRoutingEndPointTrafficPolicy(const Models::DescribeCustomRoutingEndPointTrafficPolicyRequest &request);

      /**
       * @summary Queries a specified endpoint that is associated with a custom routing listener.
       *
       * @param request DescribeCustomRoutingEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomRoutingEndpointResponse
       */
      Models::DescribeCustomRoutingEndpointResponse describeCustomRoutingEndpointWithOptions(const Models::DescribeCustomRoutingEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified endpoint that is associated with a custom routing listener.
       *
       * @param request DescribeCustomRoutingEndpointRequest
       * @return DescribeCustomRoutingEndpointResponse
       */
      Models::DescribeCustomRoutingEndpointResponse describeCustomRoutingEndpoint(const Models::DescribeCustomRoutingEndpointRequest &request);

      /**
       * @summary Queries the information about a specific endpoint group that is associated with a custom routing listener.
       *
       * @param request DescribeCustomRoutingEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomRoutingEndpointGroupResponse
       */
      Models::DescribeCustomRoutingEndpointGroupResponse describeCustomRoutingEndpointGroupWithOptions(const Models::DescribeCustomRoutingEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specific endpoint group that is associated with a custom routing listener.
       *
       * @param request DescribeCustomRoutingEndpointGroupRequest
       * @return DescribeCustomRoutingEndpointGroupResponse
       */
      Models::DescribeCustomRoutingEndpointGroupResponse describeCustomRoutingEndpointGroup(const Models::DescribeCustomRoutingEndpointGroupRequest &request);

      /**
       * @summary Queries the mapping configuration of a specified endpoint group that is associated with a custom routing listener.
       *
       * @param request DescribeCustomRoutingEndpointGroupDestinationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::DescribeCustomRoutingEndpointGroupDestinationsResponse describeCustomRoutingEndpointGroupDestinationsWithOptions(const Models::DescribeCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mapping configuration of a specified endpoint group that is associated with a custom routing listener.
       *
       * @param request DescribeCustomRoutingEndpointGroupDestinationsRequest
       * @return DescribeCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::DescribeCustomRoutingEndpointGroupDestinationsResponse describeCustomRoutingEndpointGroupDestinations(const Models::DescribeCustomRoutingEndpointGroupDestinationsRequest &request);

      /**
       * @summary Queries a specified endpoint group.
       *
       * @param request DescribeEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEndpointGroupResponse
       */
      Models::DescribeEndpointGroupResponse describeEndpointGroupWithOptions(const Models::DescribeEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified endpoint group.
       *
       * @param request DescribeEndpointGroupRequest
       * @return DescribeEndpointGroupResponse
       */
      Models::DescribeEndpointGroupResponse describeEndpointGroup(const Models::DescribeEndpointGroupRequest &request);

      /**
       * @summary Returns the configuration of a specified acceleration region, including its accelerated IP addresses.
       *
       * @param request DescribeIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpSetResponse
       */
      Models::DescribeIpSetResponse describeIpSetWithOptions(const Models::DescribeIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns the configuration of a specified acceleration region, including its accelerated IP addresses.
       *
       * @param request DescribeIpSetRequest
       * @return DescribeIpSetResponse
       */
      Models::DescribeIpSetResponse describeIpSet(const Models::DescribeIpSetRequest &request);

      /**
       * @summary Describes the configurations of a specific listener.
       *
       * @description This operation queries the configuration of a specified listener, such as its routing type, status, creation timestamp, and port information.
       *
       * @param request DescribeListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeListenerResponse
       */
      Models::DescribeListenerResponse describeListenerWithOptions(const Models::DescribeListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Describes the configurations of a specific listener.
       *
       * @description This operation queries the configuration of a specified listener, such as its routing type, status, creation timestamp, and port information.
       *
       * @param request DescribeListenerRequest
       * @return DescribeListenerResponse
       */
      Models::DescribeListenerResponse describeListener(const Models::DescribeListenerRequest &request);

      /**
       * @summary Queries the Simple Log Service project and Logstore associated with an endpoint group.
       *
       * @param request DescribeLogStoreOfEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogStoreOfEndpointGroupResponse
       */
      Models::DescribeLogStoreOfEndpointGroupResponse describeLogStoreOfEndpointGroupWithOptions(const Models::DescribeLogStoreOfEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Simple Log Service project and Logstore associated with an endpoint group.
       *
       * @param request DescribeLogStoreOfEndpointGroupRequest
       * @return DescribeLogStoreOfEndpointGroupResponse
       */
      Models::DescribeLogStoreOfEndpointGroupResponse describeLogStoreOfEndpointGroup(const Models::DescribeLogStoreOfEndpointGroupRequest &request);

      /**
       * @summary Queries the regions where Global Accelerator (GA) instances are deployed.
       *
       * @param request DescribeRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegionsWithOptions(const Models::DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions where Global Accelerator (GA) instances are deployed.
       *
       * @param request DescribeRegionsRequest
       * @return DescribeRegionsResponse
       */
      Models::DescribeRegionsResponse describeRegions(const Models::DescribeRegionsRequest &request);

      /**
       * @summary Call the DetachDdosFromAccelerator operation to detach an Anti-DDoS Pro or Anti-DDoS Premium instance from a Global Accelerator instance.
       *
       * @description - **DetachDdosFromAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and performs the operation in the background. The Anti-DDoS Pro or Anti-DDoS Premium instance is not immediately detached. You can call [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) to query the state of the Global Accelerator instance:
       *   - If the Global Accelerator instance is in the **configuring** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is being detached. In this state, you can only perform query operations.
       *   - If the Global Accelerator instance is in the **active** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is detached.
       * - The **DetachDdosFromAccelerator** operation does not support concurrent requests to detach Anti-DDoS instances from the same Global Accelerator instance.
       *
       * @param request DetachDdosFromAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDdosFromAcceleratorResponse
       */
      Models::DetachDdosFromAcceleratorResponse detachDdosFromAcceleratorWithOptions(const Models::DetachDdosFromAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DetachDdosFromAccelerator operation to detach an Anti-DDoS Pro or Anti-DDoS Premium instance from a Global Accelerator instance.
       *
       * @description - **DetachDdosFromAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and performs the operation in the background. The Anti-DDoS Pro or Anti-DDoS Premium instance is not immediately detached. You can call [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) to query the state of the Global Accelerator instance:
       *   - If the Global Accelerator instance is in the **configuring** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is being detached. In this state, you can only perform query operations.
       *   - If the Global Accelerator instance is in the **active** state, the Anti-DDoS Pro or Anti-DDoS Premium instance is detached.
       * - The **DetachDdosFromAccelerator** operation does not support concurrent requests to detach Anti-DDoS instances from the same Global Accelerator instance.
       *
       * @param request DetachDdosFromAcceleratorRequest
       * @return DetachDdosFromAcceleratorResponse
       */
      Models::DetachDdosFromAcceleratorResponse detachDdosFromAccelerator(const Models::DetachDdosFromAcceleratorRequest &request);

      /**
       * @summary Disassociates a Log Service Logstore from an endpoint group.
       *
       * @description ## Description
       * *   **DetachLogStoreFromEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
       *     *   If the endpoint group is in the **updating** state, the Log Service Logstore is being disassociated from the endpoint group. In this case, you can perform only query operations.
       *     <!---->
       *     *   If the endpoint group is in the **active** state, the Log Service Logstore is disassociated from the endpoint group.
       * *   The **DetachLogStoreFromEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DetachLogStoreFromEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachLogStoreFromEndpointGroupResponse
       */
      Models::DetachLogStoreFromEndpointGroupResponse detachLogStoreFromEndpointGroupWithOptions(const Models::DetachLogStoreFromEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a Log Service Logstore from an endpoint group.
       *
       * @description ## Description
       * *   **DetachLogStoreFromEndpointGroup** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) operation to query the state of an endpoint group.
       *     *   If the endpoint group is in the **updating** state, the Log Service Logstore is being disassociated from the endpoint group. In this case, you can perform only query operations.
       *     <!---->
       *     *   If the endpoint group is in the **active** state, the Log Service Logstore is disassociated from the endpoint group.
       * *   The **DetachLogStoreFromEndpointGroup** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DetachLogStoreFromEndpointGroupRequest
       * @return DetachLogStoreFromEndpointGroupResponse
       */
      Models::DetachLogStoreFromEndpointGroupResponse detachLogStoreFromEndpointGroup(const Models::DetachLogStoreFromEndpointGroupRequest &request);

      /**
       * @summary Enables the diagnostic feature for an origin probing task.
       *
       * @param request DetectApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectApplicationMonitorResponse
       */
      Models::DetectApplicationMonitorResponse detectApplicationMonitorWithOptions(const Models::DetectApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the diagnostic feature for an origin probing task.
       *
       * @param request DetectApplicationMonitorRequest
       * @return DetectApplicationMonitorResponse
       */
      Models::DetectApplicationMonitorResponse detectApplicationMonitor(const Models::DetectApplicationMonitorRequest &request);

      /**
       * @summary Disables an origin probing task.
       *
       * @param request DisableApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationMonitorResponse
       */
      Models::DisableApplicationMonitorResponse disableApplicationMonitorWithOptions(const Models::DisableApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an origin probing task.
       *
       * @param request DisableApplicationMonitorRequest
       * @return DisableApplicationMonitorResponse
       */
      Models::DisableApplicationMonitorResponse disableApplicationMonitor(const Models::DisableApplicationMonitorRequest &request);

      /**
       * @summary Detach integrated cloud product from GA
       *
       * @param request DisassociateResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisassociateResourcesResponse
       */
      Models::DisassociateResourcesResponse disassociateResourcesWithOptions(const Models::DisassociateResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach integrated cloud product from GA
       *
       * @param request DisassociateResourcesRequest
       * @return DisassociateResourcesResponse
       */
      Models::DisassociateResourcesResponse disassociateResources(const Models::DisassociateResourcesRequest &request);

      /**
       * @summary Disassociates access control lists (ACLs) from a listener.
       *
       * @description ## Description
       * *   **DissociateAclsFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of a listener:
       *     *   If the listener is in the **updating** state, ACLs are being disassociated from the listener. In this case, you can perform only query operations.
       *     *   If the listener is in the **active** state, ACLs are disassociated from the listener.
       * *   The **DissociateAclsFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DissociateAclsFromListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateAclsFromListenerResponse
       */
      Models::DissociateAclsFromListenerResponse dissociateAclsFromListenerWithOptions(const Models::DissociateAclsFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates access control lists (ACLs) from a listener.
       *
       * @description ## Description
       * *   **DissociateAclsFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of a listener:
       *     *   If the listener is in the **updating** state, ACLs are being disassociated from the listener. In this case, you can perform only query operations.
       *     *   If the listener is in the **active** state, ACLs are disassociated from the listener.
       * *   The **DissociateAclsFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request DissociateAclsFromListenerRequest
       * @return DissociateAclsFromListenerResponse
       */
      Models::DissociateAclsFromListenerResponse dissociateAclsFromListener(const Models::DissociateAclsFromListenerRequest &request);

      /**
       * @summary Disassociates an additional certificate from an HTTPS listener.
       *
       * @description ## Description
       * *   **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of an HTTPS listener.
       *     *   If the listener is in the **updating** state, it indicates that the additional certificate is being dissociated from the listener. In this case, you can perform only query operations.
       *     *   If the listener is in the **active** state, it indicates that the additional certificate is dissociated from the listener.
       * *   The **DissociateAdditionalCertificatesFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance with a specific period of time.
       *
       * @param request DissociateAdditionalCertificatesFromListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DissociateAdditionalCertificatesFromListenerResponse
       */
      Models::DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListenerWithOptions(const Models::DissociateAdditionalCertificatesFromListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an additional certificate from an HTTPS listener.
       *
       * @description ## Description
       * *   **DissociateAdditionalCertificatesFromListener** is an asynchronous operation. After you send a request, the system returns a request ID, but this operation is still being performed in the system background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the state of an HTTPS listener.
       *     *   If the listener is in the **updating** state, it indicates that the additional certificate is being dissociated from the listener. In this case, you can perform only query operations.
       *     *   If the listener is in the **active** state, it indicates that the additional certificate is dissociated from the listener.
       * *   The **DissociateAdditionalCertificatesFromListener** operation cannot be repeatedly called for the same Global Accelerator (GA) instance with a specific period of time.
       *
       * @param request DissociateAdditionalCertificatesFromListenerRequest
       * @return DissociateAdditionalCertificatesFromListenerResponse
       */
      Models::DissociateAdditionalCertificatesFromListenerResponse dissociateAdditionalCertificatesFromListener(const Models::DissociateAdditionalCertificatesFromListenerRequest &request);

      /**
       * @summary Enables an origin probing task.
       *
       * @param request EnableApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationMonitorResponse
       */
      Models::EnableApplicationMonitorResponse enableApplicationMonitorWithOptions(const Models::EnableApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an origin probing task.
       *
       * @param request EnableApplicationMonitorRequest
       * @return EnableApplicationMonitorResponse
       */
      Models::EnableApplicationMonitorResponse enableApplicationMonitor(const Models::EnableApplicationMonitorRequest &request);

      /**
       * @summary Queries an access control list (ACL).
       *
       * @param request GetAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAclResponse
       */
      Models::GetAclResponse getAclWithOptions(const Models::GetAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an access control list (ACL).
       *
       * @param request GetAclRequest
       * @return GetAclResponse
       */
      Models::GetAclResponse getAcl(const Models::GetAclRequest &request);

      /**
       * @summary Queries the status of an accelerated IP address of a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicAccelerateIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicAccelerateIpResponse
       */
      Models::GetBasicAccelerateIpResponse getBasicAccelerateIpWithOptions(const Models::GetBasicAccelerateIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an accelerated IP address of a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicAccelerateIpRequest
       * @return GetBasicAccelerateIpResponse
       */
      Models::GetBasicAccelerateIpResponse getBasicAccelerateIp(const Models::GetBasicAccelerateIpRequest &request);

      /**
       * @summary Queries the attachment information of an accelerated IP address or endpoint of a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicAccelerateIpEndpointRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicAccelerateIpEndpointRelationResponse
       */
      Models::GetBasicAccelerateIpEndpointRelationResponse getBasicAccelerateIpEndpointRelationWithOptions(const Models::GetBasicAccelerateIpEndpointRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attachment information of an accelerated IP address or endpoint of a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicAccelerateIpEndpointRelationRequest
       * @return GetBasicAccelerateIpEndpointRelationResponse
       */
      Models::GetBasicAccelerateIpEndpointRelationResponse getBasicAccelerateIpEndpointRelation(const Models::GetBasicAccelerateIpEndpointRelationRequest &request);

      /**
       * @summary Invokes the GetBasicAccelerateIpIdleCount operation to query the number of idle accelerated IP addresses of a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request GetBasicAccelerateIpIdleCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicAccelerateIpIdleCountResponse
       */
      Models::GetBasicAccelerateIpIdleCountResponse getBasicAccelerateIpIdleCountWithOptions(const Models::GetBasicAccelerateIpIdleCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the GetBasicAccelerateIpIdleCount operation to query the number of idle accelerated IP addresses of a basic Alibaba Cloud Global Accelerator (GA) instance.
       *
       * @param request GetBasicAccelerateIpIdleCountRequest
       * @return GetBasicAccelerateIpIdleCountResponse
       */
      Models::GetBasicAccelerateIpIdleCountResponse getBasicAccelerateIpIdleCount(const Models::GetBasicAccelerateIpIdleCountRequest &request);

      /**
       * @summary Queries the information about a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicAcceleratorResponse
       */
      Models::GetBasicAcceleratorResponse getBasicAcceleratorWithOptions(const Models::GetBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicAcceleratorRequest
       * @return GetBasicAcceleratorResponse
       */
      Models::GetBasicAcceleratorResponse getBasicAccelerator(const Models::GetBasicAcceleratorRequest &request);

      /**
       * @summary Queries detailed information about an endpoint that is associated with a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicEndpointResponse
       */
      Models::GetBasicEndpointResponse getBasicEndpointWithOptions(const Models::GetBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about an endpoint that is associated with a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicEndpointRequest
       * @return GetBasicEndpointResponse
       */
      Models::GetBasicEndpointResponse getBasicEndpoint(const Models::GetBasicEndpointRequest &request);

      /**
       * @summary Queries the information about the endpoint group of a basic GA instance.
       *
       * @param request GetBasicEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicEndpointGroupResponse
       */
      Models::GetBasicEndpointGroupResponse getBasicEndpointGroupWithOptions(const Models::GetBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the endpoint group of a basic GA instance.
       *
       * @param request GetBasicEndpointGroupRequest
       * @return GetBasicEndpointGroupResponse
       */
      Models::GetBasicEndpointGroupResponse getBasicEndpointGroup(const Models::GetBasicEndpointGroupRequest &request);

      /**
       * @summary Queries the information about the acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBasicIpSetResponse
       */
      Models::GetBasicIpSetResponse getBasicIpSetWithOptions(const Models::GetBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @param request GetBasicIpSetRequest
       * @return GetBasicIpSetResponse
       */
      Models::GetBasicIpSetResponse getBasicIpSet(const Models::GetBasicIpSetRequest &request);

      /**
       * @summary Obtain the cloud products associated with a Global Accelerator (GA) instance
       *
       * @param request GetGlobalAcceleratorResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGlobalAcceleratorResourcesResponse
       */
      Models::GetGlobalAcceleratorResourcesResponse getGlobalAcceleratorResourcesWithOptions(const Models::GetGlobalAcceleratorResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the cloud products associated with a Global Accelerator (GA) instance
       *
       * @param request GetGlobalAcceleratorResourcesRequest
       * @return GetGlobalAcceleratorResourcesResponse
       */
      Models::GetGlobalAcceleratorResourcesResponse getGlobalAcceleratorResources(const Models::GetGlobalAcceleratorResourcesRequest &request);

      /**
       * @summary Queries the health status of the endpoints and endpoint groups of a listener.
       *
       * @param request GetHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHealthStatusResponse
       */
      Models::GetHealthStatusResponse getHealthStatusWithOptions(const Models::GetHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the health status of the endpoints and endpoint groups of a listener.
       *
       * @param request GetHealthStatusRequest
       * @return GetHealthStatusResponse
       */
      Models::GetHealthStatusResponse getHealthStatus(const Models::GetHealthStatusRequest &request);

      /**
       * @summary Calls the GetInvalidDomainCount operation to retrieve the total number of invalid domain names.
       *
       * @param request GetInvalidDomainCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInvalidDomainCountResponse
       */
      Models::GetInvalidDomainCountResponse getInvalidDomainCountWithOptions(const Models::GetInvalidDomainCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the GetInvalidDomainCount operation to retrieve the total number of invalid domain names.
       *
       * @param request GetInvalidDomainCountRequest
       * @return GetInvalidDomainCountResponse
       */
      Models::GetInvalidDomainCountResponse getInvalidDomainCount(const Models::GetInvalidDomainCountRequest &request);

      /**
       * @summary Queries the maximum bandwidth of an acceleration area.
       *
       * @description 本接口用于查询带宽计费方式为**按带宽**的标准型全球加速实例各加速地域的带宽峰值限额，即全球加速实例所绑定基础带宽包的带宽值。
       *
       * @param request GetIpsetsBandwidthLimitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIpsetsBandwidthLimitResponse
       */
      Models::GetIpsetsBandwidthLimitResponse getIpsetsBandwidthLimitWithOptions(const Models::GetIpsetsBandwidthLimitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum bandwidth of an acceleration area.
       *
       * @description 本接口用于查询带宽计费方式为**按带宽**的标准型全球加速实例各加速地域的带宽峰值限额，即全球加速实例所绑定基础带宽包的带宽值。
       *
       * @param request GetIpsetsBandwidthLimitRequest
       * @return GetIpsetsBandwidthLimitResponse
       */
      Models::GetIpsetsBandwidthLimitResponse getIpsetsBandwidthLimit(const Models::GetIpsetsBandwidthLimitRequest &request);

      /**
       * @summary Queries the status of a CNAME spare IP address.
       *
       * @param request GetSpareIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpareIpResponse
       */
      Models::GetSpareIpResponse getSpareIpWithOptions(const Models::GetSpareIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a CNAME spare IP address.
       *
       * @param request GetSpareIpRequest
       * @return GetSpareIpResponse
       */
      Models::GetSpareIpResponse getSpareIp(const Models::GetSpareIpRequest &request);

      /**
       * @summary Queries available acceleration areas and regions.
       *
       * @param request ListAccelerateAreasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccelerateAreasResponse
       */
      Models::ListAccelerateAreasResponse listAccelerateAreasWithOptions(const Models::ListAccelerateAreasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available acceleration areas and regions.
       *
       * @param request ListAccelerateAreasRequest
       * @return ListAccelerateAreasResponse
       */
      Models::ListAccelerateAreasResponse listAccelerateAreas(const Models::ListAccelerateAreasRequest &request);

      /**
       * @summary Queries a list of Global Accelerator instances.
       *
       * @param request ListAcceleratorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAcceleratorsResponse
       */
      Models::ListAcceleratorsResponse listAcceleratorsWithOptions(const Models::ListAcceleratorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Global Accelerator instances.
       *
       * @param request ListAcceleratorsRequest
       * @return ListAcceleratorsResponse
       */
      Models::ListAcceleratorsResponse listAccelerators(const Models::ListAcceleratorsRequest &request);

      /**
       * @summary Queries a list of access control lists (ACLs).
       *
       * @param request ListAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAclsResponse
       */
      Models::ListAclsResponse listAclsWithOptions(const Models::ListAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of access control lists (ACLs).
       *
       * @param request ListAclsRequest
       * @return ListAclsResponse
       */
      Models::ListAclsResponse listAcls(const Models::ListAclsRequest &request);

      /**
       * @summary Queries origin probing tasks.
       *
       * @param request ListApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationMonitorResponse
       */
      Models::ListApplicationMonitorResponse listApplicationMonitorWithOptions(const Models::ListApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries origin probing tasks.
       *
       * @param request ListApplicationMonitorRequest
       * @return ListApplicationMonitorResponse
       */
      Models::ListApplicationMonitorResponse listApplicationMonitor(const Models::ListApplicationMonitorRequest &request);

      /**
       * @summary Queries the diagnostic results of origin probing tasks.
       *
       * @param request ListApplicationMonitorDetectResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationMonitorDetectResultResponse
       */
      Models::ListApplicationMonitorDetectResultResponse listApplicationMonitorDetectResultWithOptions(const Models::ListApplicationMonitorDetectResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the diagnostic results of origin probing tasks.
       *
       * @param request ListApplicationMonitorDetectResultRequest
       * @return ListApplicationMonitorDetectResultResponse
       */
      Models::ListApplicationMonitorDetectResultResponse listApplicationMonitorDetectResult(const Models::ListApplicationMonitorDetectResultRequest &request);

      /**
       * @summary You can call the ListAvailableAccelerateAreas operation to query available acceleration areas.
       *
       * @param request ListAvailableAccelerateAreasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableAccelerateAreasResponse
       */
      Models::ListAvailableAccelerateAreasResponse listAvailableAccelerateAreasWithOptions(const Models::ListAvailableAccelerateAreasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ListAvailableAccelerateAreas operation to query available acceleration areas.
       *
       * @param request ListAvailableAccelerateAreasRequest
       * @return ListAvailableAccelerateAreasResponse
       */
      Models::ListAvailableAccelerateAreasResponse listAvailableAccelerateAreas(const Models::ListAvailableAccelerateAreasRequest &request);

      /**
       * @summary Queries the available acceleration regions of a Global Accelerator (GA) instance.
       *
       * @param request ListAvailableBusiRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableBusiRegionsResponse
       */
      Models::ListAvailableBusiRegionsResponse listAvailableBusiRegionsWithOptions(const Models::ListAvailableBusiRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available acceleration regions of a Global Accelerator (GA) instance.
       *
       * @param request ListAvailableBusiRegionsRequest
       * @return ListAvailableBusiRegionsResponse
       */
      Models::ListAvailableBusiRegionsResponse listAvailableBusiRegions(const Models::ListAvailableBusiRegionsRequest &request);

      /**
       * @summary Queries bandwidth plans.
       *
       * @param request ListBandwidthPackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBandwidthPackagesResponse
       */
      Models::ListBandwidthPackagesResponse listBandwidthPackagesWithOptions(const Models::ListBandwidthPackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth plans.
       *
       * @param request ListBandwidthPackagesRequest
       * @return ListBandwidthPackagesResponse
       */
      Models::ListBandwidthPackagesResponse listBandwidthPackages(const Models::ListBandwidthPackagesRequest &request);

      /**
       * @summary Queries a list of bandwidth plans.
       *
       * @description This operation is deprecated. Use [ListBandwidthPackages](https://help.aliyun.com/document_detail/2253239.html) instead.
       *
       * @param request ListBandwidthackagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBandwidthackagesResponse
       */
      Models::ListBandwidthackagesResponse listBandwidthackagesWithOptions(const Models::ListBandwidthackagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of bandwidth plans.
       *
       * @description This operation is deprecated. Use [ListBandwidthPackages](https://help.aliyun.com/document_detail/2253239.html) instead.
       *
       * @param request ListBandwidthackagesRequest
       * @return ListBandwidthackagesResponse
       */
      Models::ListBandwidthackagesResponse listBandwidthackages(const Models::ListBandwidthackagesRequest &request);

      /**
       * @summary Queries whether the accelerated IP address of a basic Global Accelerator (GA) instance is associated with an endpoint.
       *
       * @param request ListBasicAccelerateIpEndpointRelationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBasicAccelerateIpEndpointRelationsResponse
       */
      Models::ListBasicAccelerateIpEndpointRelationsResponse listBasicAccelerateIpEndpointRelationsWithOptions(const Models::ListBasicAccelerateIpEndpointRelationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether the accelerated IP address of a basic Global Accelerator (GA) instance is associated with an endpoint.
       *
       * @param request ListBasicAccelerateIpEndpointRelationsRequest
       * @return ListBasicAccelerateIpEndpointRelationsResponse
       */
      Models::ListBasicAccelerateIpEndpointRelationsResponse listBasicAccelerateIpEndpointRelations(const Models::ListBasicAccelerateIpEndpointRelationsRequest &request);

      /**
       * @summary Queries the accelerated IP addresses in the acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @param request ListBasicAccelerateIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBasicAccelerateIpsResponse
       */
      Models::ListBasicAccelerateIpsResponse listBasicAccelerateIpsWithOptions(const Models::ListBasicAccelerateIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accelerated IP addresses in the acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @param request ListBasicAccelerateIpsRequest
       * @return ListBasicAccelerateIpsResponse
       */
      Models::ListBasicAccelerateIpsResponse listBasicAccelerateIps(const Models::ListBasicAccelerateIpsRequest &request);

      /**
       * @summary Queries basic Global Accelerator (GA) instances.
       *
       * @param request ListBasicAcceleratorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBasicAcceleratorsResponse
       */
      Models::ListBasicAcceleratorsResponse listBasicAcceleratorsWithOptions(const Models::ListBasicAcceleratorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic Global Accelerator (GA) instances.
       *
       * @param request ListBasicAcceleratorsRequest
       * @return ListBasicAcceleratorsResponse
       */
      Models::ListBasicAcceleratorsResponse listBasicAccelerators(const Models::ListBasicAcceleratorsRequest &request);

      /**
       * @summary Queries the endpoints that are associated with a basic Global Accelerator (GA) instance.
       *
       * @param request ListBasicEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBasicEndpointsResponse
       */
      Models::ListBasicEndpointsResponse listBasicEndpointsWithOptions(const Models::ListBasicEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoints that are associated with a basic Global Accelerator (GA) instance.
       *
       * @param request ListBasicEndpointsRequest
       * @return ListBasicEndpointsResponse
       */
      Models::ListBasicEndpointsResponse listBasicEndpoints(const Models::ListBasicEndpointsRequest &request);

      /**
       * @summary Queries the acceleration regions that are supported by Global Accelerator (GA).
       *
       * @param request ListBusiRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBusiRegionsResponse
       */
      Models::ListBusiRegionsResponse listBusiRegionsWithOptions(const Models::ListBusiRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the acceleration regions that are supported by Global Accelerator (GA).
       *
       * @param request ListBusiRegionsRequest
       * @return ListBusiRegionsResponse
       */
      Models::ListBusiRegionsResponse listBusiRegions(const Models::ListBusiRegionsRequest &request);

      /**
       * @summary Queries the available acceleration areas and regions by calling the ListCommonAreas operation.
       *
       * @description This operation is used to query the available acceleration areas and regions for the intelligent recommendation and free trial on the Global Accelerator wizard page. You can filter results based on specified conditions.
       *
       * @param request ListCommonAreasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCommonAreasResponse
       */
      Models::ListCommonAreasResponse listCommonAreasWithOptions(const Models::ListCommonAreasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available acceleration areas and regions by calling the ListCommonAreas operation.
       *
       * @description This operation is used to query the available acceleration areas and regions for the intelligent recommendation and free trial on the Global Accelerator wizard page. You can filter results based on specified conditions.
       *
       * @param request ListCommonAreasRequest
       * @return ListCommonAreasResponse
       */
      Models::ListCommonAreasResponse listCommonAreas(const Models::ListCommonAreasRequest &request);

      /**
       * @summary Invokes the ListCustomRoutingEndpointGroupDestinations operation to query the destination configurations of an endpoint group for a custom route listener.
       *
       * @param request ListCustomRoutingEndpointGroupDestinationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::ListCustomRoutingEndpointGroupDestinationsResponse listCustomRoutingEndpointGroupDestinationsWithOptions(const Models::ListCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ListCustomRoutingEndpointGroupDestinations operation to query the destination configurations of an endpoint group for a custom route listener.
       *
       * @param request ListCustomRoutingEndpointGroupDestinationsRequest
       * @return ListCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::ListCustomRoutingEndpointGroupDestinationsResponse listCustomRoutingEndpointGroupDestinations(const Models::ListCustomRoutingEndpointGroupDestinationsRequest &request);

      /**
       * @summary Queries the endpoint groups that are associated with a custom routing listener.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code for different SDKs.](https://api.aliyun.com/#product=Ga\\&api=ListCustomRoutingEndpointGroups\\&type=RPC\\&version=2019-11-20)
       *
       * @param request ListCustomRoutingEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomRoutingEndpointGroupsResponse
       */
      Models::ListCustomRoutingEndpointGroupsResponse listCustomRoutingEndpointGroupsWithOptions(const Models::ListCustomRoutingEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the endpoint groups that are associated with a custom routing listener.
       *
       * @description ## Debugging
       * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code for different SDKs.](https://api.aliyun.com/#product=Ga\\&api=ListCustomRoutingEndpointGroups\\&type=RPC\\&version=2019-11-20)
       *
       * @param request ListCustomRoutingEndpointGroupsRequest
       * @return ListCustomRoutingEndpointGroupsResponse
       */
      Models::ListCustomRoutingEndpointGroupsResponse listCustomRoutingEndpointGroups(const Models::ListCustomRoutingEndpointGroupsRequest &request);

      /**
       * @summary Invokes the ListCustomRoutingEndpointTrafficPolicies operation to query the list of endpoint traffic policies for a custom routing type listener.
       *
       * @param request ListCustomRoutingEndpointTrafficPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::ListCustomRoutingEndpointTrafficPoliciesResponse listCustomRoutingEndpointTrafficPoliciesWithOptions(const Models::ListCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the ListCustomRoutingEndpointTrafficPolicies operation to query the list of endpoint traffic policies for a custom routing type listener.
       *
       * @param request ListCustomRoutingEndpointTrafficPoliciesRequest
       * @return ListCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::ListCustomRoutingEndpointTrafficPoliciesResponse listCustomRoutingEndpointTrafficPolicies(const Models::ListCustomRoutingEndpointTrafficPoliciesRequest &request);

      /**
       * @summary Queries the configurations of an endpoint.
       *
       * @param request ListCustomRoutingEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomRoutingEndpointsResponse
       */
      Models::ListCustomRoutingEndpointsResponse listCustomRoutingEndpointsWithOptions(const Models::ListCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an endpoint.
       *
       * @param request ListCustomRoutingEndpointsRequest
       * @return ListCustomRoutingEndpointsResponse
       */
      Models::ListCustomRoutingEndpointsResponse listCustomRoutingEndpoints(const Models::ListCustomRoutingEndpointsRequest &request);

      /**
       * @summary Queries the port mapping table of a custom routing listener.
       *
       * @description After you configure a custom routing listener and an endpoint group, the Global Accelerator (GA) instance generates a port mapping table. This table is based on the listener port range, the protocols and port ranges of the destination endpoint group, and the IP addresses of the endpoints (vSwitches). A custom routing listener uses this port mapping table to deterministically route traffic to specific IP addresses and ports in a vSwitch. This operation queries the generated port mapping table.
       *
       * @param request ListCustomRoutingPortMappingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomRoutingPortMappingsResponse
       */
      Models::ListCustomRoutingPortMappingsResponse listCustomRoutingPortMappingsWithOptions(const Models::ListCustomRoutingPortMappingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the port mapping table of a custom routing listener.
       *
       * @description After you configure a custom routing listener and an endpoint group, the Global Accelerator (GA) instance generates a port mapping table. This table is based on the listener port range, the protocols and port ranges of the destination endpoint group, and the IP addresses of the endpoints (vSwitches). A custom routing listener uses this port mapping table to deterministically route traffic to specific IP addresses and ports in a vSwitch. This operation queries the generated port mapping table.
       *
       * @param request ListCustomRoutingPortMappingsRequest
       * @return ListCustomRoutingPortMappingsResponse
       */
      Models::ListCustomRoutingPortMappingsResponse listCustomRoutingPortMappings(const Models::ListCustomRoutingPortMappingsRequest &request);

      /**
       * @summary Call the ListCustomRoutingPortMappingsByDestination operation to query the port mappings of a specified backend instance for a custom route listener.
       *
       * @param request ListCustomRoutingPortMappingsByDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomRoutingPortMappingsByDestinationResponse
       */
      Models::ListCustomRoutingPortMappingsByDestinationResponse listCustomRoutingPortMappingsByDestinationWithOptions(const Models::ListCustomRoutingPortMappingsByDestinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the ListCustomRoutingPortMappingsByDestination operation to query the port mappings of a specified backend instance for a custom route listener.
       *
       * @param request ListCustomRoutingPortMappingsByDestinationRequest
       * @return ListCustomRoutingPortMappingsByDestinationResponse
       */
      Models::ListCustomRoutingPortMappingsByDestinationResponse listCustomRoutingPortMappingsByDestination(const Models::ListCustomRoutingPortMappingsByDestinationRequest &request);

      /**
       * @summary Queries accelerated domain names.
       *
       * @param request ListDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomainsWithOptions(const Models::ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accelerated domain names.
       *
       * @param request ListDomainsRequest
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomains(const Models::ListDomainsRequest &request);

      /**
       * @summary Queries the public CIDR blocks to which the endpoint group IP addresses belong. The CIDR blocks can be used to configure ACLs in terminals.
       *
       * @param request ListEndpointGroupIpAddressCidrBlocksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEndpointGroupIpAddressCidrBlocksResponse
       */
      Models::ListEndpointGroupIpAddressCidrBlocksResponse listEndpointGroupIpAddressCidrBlocksWithOptions(const Models::ListEndpointGroupIpAddressCidrBlocksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the public CIDR blocks to which the endpoint group IP addresses belong. The CIDR blocks can be used to configure ACLs in terminals.
       *
       * @param request ListEndpointGroupIpAddressCidrBlocksRequest
       * @return ListEndpointGroupIpAddressCidrBlocksResponse
       */
      Models::ListEndpointGroupIpAddressCidrBlocksResponse listEndpointGroupIpAddressCidrBlocks(const Models::ListEndpointGroupIpAddressCidrBlocksRequest &request);

      /**
       * @summary Lists endpoint groups.
       *
       * @param request ListEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEndpointGroupsResponse
       */
      Models::ListEndpointGroupsResponse listEndpointGroupsWithOptions(const Models::ListEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists endpoint groups.
       *
       * @param request ListEndpointGroupsRequest
       * @return ListEndpointGroupsResponse
       */
      Models::ListEndpointGroupsResponse listEndpointGroups(const Models::ListEndpointGroupsRequest &request);

      /**
       * @summary Queries forwarding rules.
       *
       * @description > Queries only custom forwarding rules. The default forwarding rule is not included in the results.
       *
       * @param request ListForwardingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListForwardingRulesResponse
       */
      Models::ListForwardingRulesResponse listForwardingRulesWithOptions(const Models::ListForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries forwarding rules.
       *
       * @description > Queries only custom forwarding rules. The default forwarding rule is not included in the results.
       *
       * @param request ListForwardingRulesRequest
       * @return ListForwardingRulesResponse
       */
      Models::ListForwardingRulesResponse listForwardingRules(const Models::ListForwardingRulesRequest &request);

      /**
       * @summary Queries acceleration regions.
       *
       * @param request ListIpSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIpSetsResponse
       */
      Models::ListIpSetsResponse listIpSetsWithOptions(const Models::ListIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries acceleration regions.
       *
       * @param request ListIpSetsRequest
       * @return ListIpSetsResponse
       */
      Models::ListIpSetsResponse listIpSets(const Models::ListIpSetsRequest &request);

      /**
       * @summary Queries the line types of elastic IP addresses (EIPs) that are supported in an acceleration region.
       *
       * @param request ListIspTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIspTypesResponse
       */
      Models::ListIspTypesResponse listIspTypesWithOptions(const Models::ListIspTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the line types of elastic IP addresses (EIPs) that are supported in an acceleration region.
       *
       * @param request ListIspTypesRequest
       * @return ListIspTypesResponse
       */
      Models::ListIspTypesResponse listIspTypes(const Models::ListIspTypesRequest &request);

      /**
       * @summary Queries the certificates associated with a listener.
       *
       * @param request ListListenerCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenerCertificatesResponse
       */
      Models::ListListenerCertificatesResponse listListenerCertificatesWithOptions(const Models::ListListenerCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates associated with a listener.
       *
       * @param request ListListenerCertificatesRequest
       * @return ListListenerCertificatesResponse
       */
      Models::ListListenerCertificatesResponse listListenerCertificates(const Models::ListListenerCertificatesRequest &request);

      /**
       * @summary Retrieves a list of listeners.
       *
       * @description This operation retrieves the listeners of a Global Accelerator instance. The response includes the routing type, status, creation timestamp, and port details for each listener.
       *
       * @param request ListListenersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListenersWithOptions(const Models::ListListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of listeners.
       *
       * @description This operation retrieves the listeners of a Global Accelerator instance. The response includes the routing type, status, creation timestamp, and port details for each listener.
       *
       * @param request ListListenersRequest
       * @return ListListenersResponse
       */
      Models::ListListenersResponse listListeners(const Models::ListListenersRequest &request);

      /**
       * @summary Queries the information about the secondary IP addresses that are associated with a CNAME.
       *
       * @param request ListSpareIpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSpareIpsResponse
       */
      Models::ListSpareIpsResponse listSpareIpsWithOptions(const Models::ListSpareIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the secondary IP addresses that are associated with a CNAME.
       *
       * @param request ListSpareIpsRequest
       * @return ListSpareIpsResponse
       */
      Models::ListSpareIpsResponse listSpareIps(const Models::ListSpareIpsRequest &request);

      /**
       * @summary Queries the TLS security policies that are supported by HTTPS listeners.
       *
       * @description You can select a TLS security policy when you create an HTTPS listener. This API operation is used to query the TLS security policies that are supported by HTTPS listeners.
       *
       * @param request ListSystemSecurityPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemSecurityPoliciesResponse
       */
      Models::ListSystemSecurityPoliciesResponse listSystemSecurityPoliciesWithOptions(const Models::ListSystemSecurityPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the TLS security policies that are supported by HTTPS listeners.
       *
       * @description You can select a TLS security policy when you create an HTTPS listener. This API operation is used to query the TLS security policies that are supported by HTTPS listeners.
       *
       * @param request ListSystemSecurityPoliciesRequest
       * @return ListSystemSecurityPoliciesResponse
       */
      Models::ListSystemSecurityPoliciesResponse listSystemSecurityPolicies(const Models::ListSystemSecurityPoliciesRequest &request);

      /**
       * @summary Queries the tags that are added to Global Accelerator (GA) resources.
       *
       * @description *   You must specify **ResourceId** or **Tag** in the request to specify the object that you want to query.********
       * *   **Tag** is a resource tag that consists of a key-value pair (Key and Value). If you specify only **Key**, all tag values that are associated with the specified tag key are returned. If you specify only **Value**, an error message is returned.
       * *   If you specify **Tag** and **ResourceId** to filter tags, **ResourceId** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain the key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to Global Accelerator (GA) resources.
       *
       * @description *   You must specify **ResourceId** or **Tag** in the request to specify the object that you want to query.********
       * *   **Tag** is a resource tag that consists of a key-value pair (Key and Value). If you specify only **Key**, all tag values that are associated with the specified tag key are returned. If you specify only **Value**, an error message is returned.
       * *   If you specify **Tag** and **ResourceId** to filter tags, **ResourceId** must match all specified key-value pairs.
       * *   If you specify multiple key-value pairs, resources that contain the key-value pairs are returned.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Activates the pay-as-you-go Global Accelerator (GA) service. If you want to use pay-as-you-go GA instances, you must activate the pay-as-you-go GA service first.
       *
       * @param request OpenAcceleratorServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenAcceleratorServiceResponse
       */
      Models::OpenAcceleratorServiceResponse openAcceleratorServiceWithOptions(const Models::OpenAcceleratorServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the pay-as-you-go Global Accelerator (GA) service. If you want to use pay-as-you-go GA instances, you must activate the pay-as-you-go GA service first.
       *
       * @param request OpenAcceleratorServiceRequest
       * @return OpenAcceleratorServiceResponse
       */
      Models::OpenAcceleratorServiceResponse openAcceleratorService(const Models::OpenAcceleratorServiceRequest &request);

      /**
       * @summary Queries the approval status of cross-border permissions for an Alibaba Cloud account (main account).
       *
       * @param request QueryCrossBorderApprovalStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCrossBorderApprovalStatusResponse
       */
      Models::QueryCrossBorderApprovalStatusResponse queryCrossBorderApprovalStatusWithOptions(const Models::QueryCrossBorderApprovalStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the approval status of cross-border permissions for an Alibaba Cloud account (main account).
       *
       * @param request QueryCrossBorderApprovalStatusRequest
       * @return QueryCrossBorderApprovalStatusResponse
       */
      Models::QueryCrossBorderApprovalStatusResponse queryCrossBorderApprovalStatus(const Models::QueryCrossBorderApprovalStatusRequest &request);

      /**
       * @summary Deletes IP entries from an access control list (ACL).
       *
       * @description *   **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the status of the ACL from which you want to delete IP entries.
       *     *   If the ACL is in the **configuring** state, it indicates that the IP entries are being deleted. In this case, you can perform only query operations.
       *     *   If the ACL is in the **active** state, it indicates that the IP entries are deleted.
       * *   The **RemoveEntriesFromAcl** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request RemoveEntriesFromAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveEntriesFromAclResponse
       */
      Models::RemoveEntriesFromAclResponse removeEntriesFromAclWithOptions(const Models::RemoveEntriesFromAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes IP entries from an access control list (ACL).
       *
       * @description *   **RemoveEntriesFromAcl** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetAcl](https://help.aliyun.com/document_detail/258292.html) or [ListAcls](https://help.aliyun.com/document_detail/258291.html) operation to query the status of the ACL from which you want to delete IP entries.
       *     *   If the ACL is in the **configuring** state, it indicates that the IP entries are being deleted. In this case, you can perform only query operations.
       *     *   If the ACL is in the **active** state, it indicates that the IP entries are deleted.
       * *   The **RemoveEntriesFromAcl** operation holds an exclusive lock on the Global Accelerator (GA) instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request RemoveEntriesFromAclRequest
       * @return RemoveEntriesFromAclResponse
       */
      Models::RemoveEntriesFromAclResponse removeEntriesFromAcl(const Models::RemoveEntriesFromAclRequest &request);

      /**
       * @summary Replaces the bandwidth plans of Global Accelerator (GA) instances.
       *
       * @description When you call this operation, take note of the following items:
       * *   The GA instance continues to forward network traffic.
       * *   **ReplaceBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that the associated bandwidth plan is being replaced. In this case, you can perform only query operations.
       *     *   If the GA instance is in the **active** state, it indicates that the associated bandwidth plan is replaced.
       * *   The **ReplaceBandwidthPackage** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request ReplaceBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplaceBandwidthPackageResponse
       */
      Models::ReplaceBandwidthPackageResponse replaceBandwidthPackageWithOptions(const Models::ReplaceBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces the bandwidth plans of Global Accelerator (GA) instances.
       *
       * @description When you call this operation, take note of the following items:
       * *   The GA instance continues to forward network traffic.
       * *   **ReplaceBandwidthPackage** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) or [ListAccelerators](https://help.aliyun.com/document_detail/153236.html) operation to query the status of the GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that the associated bandwidth plan is being replaced. In this case, you can perform only query operations.
       *     *   If the GA instance is in the **active** state, it indicates that the associated bandwidth plan is replaced.
       * *   The **ReplaceBandwidthPackage** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation in the same Alibaba Cloud account.
       *
       * @param request ReplaceBandwidthPackageRequest
       * @return ReplaceBandwidthPackageResponse
       */
      Models::ReplaceBandwidthPackageResponse replaceBandwidthPackage(const Models::ReplaceBandwidthPackageRequest &request);

      /**
       * @summary Adds tags to Global Accelerator (GA) resources.
       *
       * @description You can add up to 20 tags to each GA resource. When you call this operation, Alibaba Cloud first checks the number of existing tags attached to the resource. If the quota is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to Global Accelerator (GA) resources.
       *
       * @description You can add up to 20 tags to each GA resource. When you call this operation, Alibaba Cloud first checks the number of existing tags attached to the resource. If the quota is reached, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from Global Accelerator (GA) resources.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from Global Accelerator (GA) resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Use the UpdateAccelerator operation to modify a Global Accelerator instance.
       *
       * @description - **UpdateAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and performs the modification in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the state of a Global Accelerator (GA) instance:
       *   - If the GA instance is in the **configuring** state, the instance is being modified. In this state, you can only perform query operations.
       *   - If the GA instance is in the **active** state, the modification is complete.
       * - You cannot call the **UpdateAccelerator** operation concurrently on the same GA instance.
       *
       * @param request UpdateAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAcceleratorResponse
       */
      Models::UpdateAcceleratorResponse updateAcceleratorWithOptions(const Models::UpdateAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use the UpdateAccelerator operation to modify a Global Accelerator instance.
       *
       * @description - **UpdateAccelerator** is an asynchronous operation. After you send a request, the system returns a request ID and performs the modification in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the state of a Global Accelerator (GA) instance:
       *   - If the GA instance is in the **configuring** state, the instance is being modified. In this state, you can only perform query operations.
       *   - If the GA instance is in the **active** state, the modification is complete.
       * - You cannot call the **UpdateAccelerator** operation concurrently on the same GA instance.
       *
       * @param request UpdateAcceleratorRequest
       * @return UpdateAcceleratorResponse
       */
      Models::UpdateAcceleratorResponse updateAccelerator(const Models::UpdateAcceleratorRequest &request);

      /**
       * @summary You can call the UpdateAcceleratorAutoRenewAttribute operation to modify the auto-renewal property of a Global Accelerator instance.
       *
       * @description The **UpdateAcceleratorAutoRenewAttribute** operation does not support concurrent modifications to the auto-renewal property of the same Global Accelerator instance.
       *
       * @param request UpdateAcceleratorAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAcceleratorAutoRenewAttributeResponse
       */
      Models::UpdateAcceleratorAutoRenewAttributeResponse updateAcceleratorAutoRenewAttributeWithOptions(const Models::UpdateAcceleratorAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateAcceleratorAutoRenewAttribute operation to modify the auto-renewal property of a Global Accelerator instance.
       *
       * @description The **UpdateAcceleratorAutoRenewAttribute** operation does not support concurrent modifications to the auto-renewal property of the same Global Accelerator instance.
       *
       * @param request UpdateAcceleratorAutoRenewAttributeRequest
       * @return UpdateAcceleratorAutoRenewAttributeResponse
       */
      Models::UpdateAcceleratorAutoRenewAttributeResponse updateAcceleratorAutoRenewAttribute(const Models::UpdateAcceleratorAutoRenewAttributeRequest &request);

      /**
       * @summary Confirms the updated specification of a Global Accelerator (GA) instance.
       *
       * @description After you modify the specification of a GA instance, you must confirm the modification. The **UpdateAcceleratorConfirm** operation is used to confirm the specification of a GA instance that is modified. When you call this operation to confirm the specification of a GA instance, take note of the following items:
       * *   **UpdateAcceleratorConfirm** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that the specification of the instance is being modified. In this case, you can perform only query operations.
       *     *   If the GA instance is in the **active** state, it indicates that the specification of the instance is modified.
       * *   The **UpdateAcceleratorConfirm** operation cannot be called repeatedly for the same GA instance within a specific period of time.
       *
       * @param request UpdateAcceleratorConfirmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAcceleratorConfirmResponse
       */
      Models::UpdateAcceleratorConfirmResponse updateAcceleratorConfirmWithOptions(const Models::UpdateAcceleratorConfirmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms the updated specification of a Global Accelerator (GA) instance.
       *
       * @description After you modify the specification of a GA instance, you must confirm the modification. The **UpdateAcceleratorConfirm** operation is used to confirm the specification of a GA instance that is modified. When you call this operation to confirm the specification of a GA instance, take note of the following items:
       * *   **UpdateAcceleratorConfirm** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation to query the status of a GA instance.
       *     *   If the GA instance is in the **configuring** state, it indicates that the specification of the instance is being modified. In this case, you can perform only query operations.
       *     *   If the GA instance is in the **active** state, it indicates that the specification of the instance is modified.
       * *   The **UpdateAcceleratorConfirm** operation cannot be called repeatedly for the same GA instance within a specific period of time.
       *
       * @param request UpdateAcceleratorConfirmRequest
       * @return UpdateAcceleratorConfirmResponse
       */
      Models::UpdateAcceleratorConfirmResponse updateAcceleratorConfirm(const Models::UpdateAcceleratorConfirmRequest &request);

      /**
       * @summary Changes the type of transmission network for a Global Accelerator (GA) instance.
       *
       * @description Changes the type of transmission network for a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**. Before you call this operation, make sure that the following requirements are met:
       * - Cloud Data Transfer (CDT) is activated. When you call the [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html) operation and set **BandwidthBillingType** to **CDT** to create a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**, CDT is automatically activated. The data transfer fees are managed by CDT.
       * - If you want to set **CrossBorderMode** to **private**, which specifies cross-border Express Connect circuit as the type of transmission network, make sure that real-name verification is complete for your enterprise account. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/52595.html).
       *
       * @param request UpdateAcceleratorCrossBorderModeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAcceleratorCrossBorderModeResponse
       */
      Models::UpdateAcceleratorCrossBorderModeResponse updateAcceleratorCrossBorderModeWithOptions(const Models::UpdateAcceleratorCrossBorderModeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the type of transmission network for a Global Accelerator (GA) instance.
       *
       * @description Changes the type of transmission network for a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**. Before you call this operation, make sure that the following requirements are met:
       * - Cloud Data Transfer (CDT) is activated. When you call the [CreateAccelerator](https://help.aliyun.com/document_detail/206786.html) operation and set **BandwidthBillingType** to **CDT** to create a **standard** GA instance whose bandwidth metering method is **pay-by-data-transfer**, CDT is automatically activated. The data transfer fees are managed by CDT.
       * - If you want to set **CrossBorderMode** to **private**, which specifies cross-border Express Connect circuit as the type of transmission network, make sure that real-name verification is complete for your enterprise account. For more information, see [Real-name verification](https://help.aliyun.com/document_detail/52595.html).
       *
       * @param request UpdateAcceleratorCrossBorderModeRequest
       * @return UpdateAcceleratorCrossBorderModeResponse
       */
      Models::UpdateAcceleratorCrossBorderModeResponse updateAcceleratorCrossBorderMode(const Models::UpdateAcceleratorCrossBorderModeRequest &request);

      /**
       * @summary Enables cross-border data transmission for a Global Accelerator (GA) instance.
       *
       * @description Enables or disables cross-border data transmission for basic or standard GA instances that use Cloud Data Transfer (CDT) to bill data transfers.
       *
       * @param request UpdateAcceleratorCrossBorderStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAcceleratorCrossBorderStatusResponse
       */
      Models::UpdateAcceleratorCrossBorderStatusResponse updateAcceleratorCrossBorderStatusWithOptions(const Models::UpdateAcceleratorCrossBorderStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables cross-border data transmission for a Global Accelerator (GA) instance.
       *
       * @description Enables or disables cross-border data transmission for basic or standard GA instances that use Cloud Data Transfer (CDT) to bill data transfers.
       *
       * @param request UpdateAcceleratorCrossBorderStatusRequest
       * @return UpdateAcceleratorCrossBorderStatusResponse
       */
      Models::UpdateAcceleratorCrossBorderStatusResponse updateAcceleratorCrossBorderStatus(const Models::UpdateAcceleratorCrossBorderStatusRequest &request);

      /**
       * @summary Modifies the attributes of an access control list (ACL) of a Global Accelerator (GA) instance.
       *
       * @param request UpdateAclAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAclAttributeResponse
       */
      Models::UpdateAclAttributeResponse updateAclAttributeWithOptions(const Models::UpdateAclAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an access control list (ACL) of a Global Accelerator (GA) instance.
       *
       * @param request UpdateAclAttributeRequest
       * @return UpdateAclAttributeResponse
       */
      Models::UpdateAclAttributeResponse updateAclAttribute(const Models::UpdateAclAttributeRequest &request);

      /**
       * @summary Replaces an expired additional certificate for an HTTPS listener.
       *
       * @description The UpdateAdditionalCertificateWithListener operation is used to replace an additional certificate. This operation is suitable for scenarios in which the original certificate expires and needs to be replaced with a new certificate and the associated domain name remains unchanged.
       * *   **UpdateAdditionalCertificateWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/307743.html) to query the status of the task:
       *     *   If the certificate to be replaced is in the **updating** state, the certificate is being replaced. In this case, you can only query the certificate.
       *     *   If the new certificate is in the **active** state, the new certificate is in effect.
       * *   You cannot repeatedly call the **UpdateAdditionalCertificateWithListener** operation for the same GA instance within a specific period of time.
       *
       * @param request UpdateAdditionalCertificateWithListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAdditionalCertificateWithListenerResponse
       */
      Models::UpdateAdditionalCertificateWithListenerResponse updateAdditionalCertificateWithListenerWithOptions(const Models::UpdateAdditionalCertificateWithListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Replaces an expired additional certificate for an HTTPS listener.
       *
       * @description The UpdateAdditionalCertificateWithListener operation is used to replace an additional certificate. This operation is suitable for scenarios in which the original certificate expires and needs to be replaced with a new certificate and the associated domain name remains unchanged.
       * *   **UpdateAdditionalCertificateWithListener** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [ListListenerCertificates](https://help.aliyun.com/document_detail/307743.html) to query the status of the task:
       *     *   If the certificate to be replaced is in the **updating** state, the certificate is being replaced. In this case, you can only query the certificate.
       *     *   If the new certificate is in the **active** state, the new certificate is in effect.
       * *   You cannot repeatedly call the **UpdateAdditionalCertificateWithListener** operation for the same GA instance within a specific period of time.
       *
       * @param request UpdateAdditionalCertificateWithListenerRequest
       * @return UpdateAdditionalCertificateWithListenerResponse
       */
      Models::UpdateAdditionalCertificateWithListenerResponse updateAdditionalCertificateWithListener(const Models::UpdateAdditionalCertificateWithListenerRequest &request);

      /**
       * @summary Modifies the configuration of an origin probing task by calling the UpdateApplicationMonitor operation.
       *
       * @description **UpdateApplicationMonitor** is an asynchronous operation. After you call this operation, the system returns a request ID, but the origin probing task is not yet modified. The modification task continues to run in the background. You can call [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) to check whether the origin probing task configuration has been modified:
       * - If the modified parameter values have not changed, the origin probing task is still being modified. In this case, you can only perform query operations and cannot perform other operations.
       * - If the modified parameter values have changed, the origin probing task has been modified.
       *
       * @param request UpdateApplicationMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationMonitorResponse
       */
      Models::UpdateApplicationMonitorResponse updateApplicationMonitorWithOptions(const Models::UpdateApplicationMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an origin probing task by calling the UpdateApplicationMonitor operation.
       *
       * @description **UpdateApplicationMonitor** is an asynchronous operation. After you call this operation, the system returns a request ID, but the origin probing task is not yet modified. The modification task continues to run in the background. You can call [DescribeApplicationMonitor](https://help.aliyun.com/document_detail/408463.html) or [ListApplicationMonitor](https://help.aliyun.com/document_detail/408462.html) to check whether the origin probing task configuration has been modified:
       * - If the modified parameter values have not changed, the origin probing task is still being modified. In this case, you can only perform query operations and cannot perform other operations.
       * - If the modified parameter values have changed, the origin probing task has been modified.
       *
       * @param request UpdateApplicationMonitorRequest
       * @return UpdateApplicationMonitorResponse
       */
      Models::UpdateApplicationMonitorResponse updateApplicationMonitor(const Models::UpdateApplicationMonitorRequest &request);

      /**
       * @summary Changes the auto-renewal status of a bandwidth plan.
       *
       * @description You cannot repeatedly call the **UpdateBandwidthPackagaAutoRenewAttribute** operation to modify the auto-renewal settings of a bandwidth plan.
       *
       * @param request UpdateBandwidthPackagaAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBandwidthPackagaAutoRenewAttributeResponse
       */
      Models::UpdateBandwidthPackagaAutoRenewAttributeResponse updateBandwidthPackagaAutoRenewAttributeWithOptions(const Models::UpdateBandwidthPackagaAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the auto-renewal status of a bandwidth plan.
       *
       * @description You cannot repeatedly call the **UpdateBandwidthPackagaAutoRenewAttribute** operation to modify the auto-renewal settings of a bandwidth plan.
       *
       * @param request UpdateBandwidthPackagaAutoRenewAttributeRequest
       * @return UpdateBandwidthPackagaAutoRenewAttributeResponse
       */
      Models::UpdateBandwidthPackagaAutoRenewAttributeResponse updateBandwidthPackagaAutoRenewAttribute(const Models::UpdateBandwidthPackagaAutoRenewAttributeRequest &request);

      /**
       * @summary You can call the UpdateBandwidthPackage operation to modify the configuration of a bandwidth plan.
       *
       * @description Before you call this operation, note the following:
       * - If you do not change the bandwidth value, **UpdateBandwidthPackage** is a synchronous operation. The modification takes effect immediately.
       * - If you change the bandwidth value of a bandwidth plan that is not associated with a Global Accelerator (GA) instance, **UpdateBandwidthPackage** is an asynchronous operation. The system returns a request ID, but the modification is not complete. The system performs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query whether the configuration of the bandwidth plan is modified:
       *   - If the values of the parameters that you want to modify remain unchanged, the bandwidth plan is being modified. In this case, you can only perform query operations.
       *   - If the values of the parameters that you want to modify have changed, the modification is complete.
       * - If you change the bandwidth value of a bandwidth plan that is associated with a GA instance, **UpdateBandwidthPackage** is an asynchronous operation. The system returns a request ID, but the modification is not complete. The system performs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation and query the status of the GA instance to check whether the bandwidth plan is modified:
       *   - If the GA instance is in the **configuring** state, the bandwidth plan that is associated with the GA instance is being modified. In this case, you can only perform query operations.
       *   - If the GA instance is in the **active** state, the bandwidth plan that is associated with the GA instance has been modified.
       * - You cannot repeatedly call the **UpdateBandwidthPackage** operation to modify the configuration of the same bandwidth plan.
       *
       * @param request UpdateBandwidthPackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBandwidthPackageResponse
       */
      Models::UpdateBandwidthPackageResponse updateBandwidthPackageWithOptions(const Models::UpdateBandwidthPackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateBandwidthPackage operation to modify the configuration of a bandwidth plan.
       *
       * @description Before you call this operation, note the following:
       * - If you do not change the bandwidth value, **UpdateBandwidthPackage** is a synchronous operation. The modification takes effect immediately.
       * - If you change the bandwidth value of a bandwidth plan that is not associated with a Global Accelerator (GA) instance, **UpdateBandwidthPackage** is an asynchronous operation. The system returns a request ID, but the modification is not complete. The system performs the task in the background. You can call the [DescribeBandwidthPackage](https://help.aliyun.com/document_detail/153241.html) operation to query whether the configuration of the bandwidth plan is modified:
       *   - If the values of the parameters that you want to modify remain unchanged, the bandwidth plan is being modified. In this case, you can only perform query operations.
       *   - If the values of the parameters that you want to modify have changed, the modification is complete.
       * - If you change the bandwidth value of a bandwidth plan that is associated with a GA instance, **UpdateBandwidthPackage** is an asynchronous operation. The system returns a request ID, but the modification is not complete. The system performs the task in the background. You can call the [DescribeAccelerator](https://help.aliyun.com/document_detail/153235.html) operation and query the status of the GA instance to check whether the bandwidth plan is modified:
       *   - If the GA instance is in the **configuring** state, the bandwidth plan that is associated with the GA instance is being modified. In this case, you can only perform query operations.
       *   - If the GA instance is in the **active** state, the bandwidth plan that is associated with the GA instance has been modified.
       * - You cannot repeatedly call the **UpdateBandwidthPackage** operation to modify the configuration of the same bandwidth plan.
       *
       * @param request UpdateBandwidthPackageRequest
       * @return UpdateBandwidthPackageResponse
       */
      Models::UpdateBandwidthPackageResponse updateBandwidthPackage(const Models::UpdateBandwidthPackageRequest &request);

      /**
       * @summary Modifies the name and description of a basic Global Accelerator (GA) instance.
       *
       * @param request UpdateBasicAcceleratorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBasicAcceleratorResponse
       */
      Models::UpdateBasicAcceleratorResponse updateBasicAcceleratorWithOptions(const Models::UpdateBasicAcceleratorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a basic Global Accelerator (GA) instance.
       *
       * @param request UpdateBasicAcceleratorRequest
       * @return UpdateBasicAcceleratorResponse
       */
      Models::UpdateBasicAcceleratorResponse updateBasicAccelerator(const Models::UpdateBasicAcceleratorRequest &request);

      /**
       * @summary Modifies the name of an endpoint that is associated with a basic Global Accelerator (GA) instance.
       *
       * @param request UpdateBasicEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBasicEndpointResponse
       */
      Models::UpdateBasicEndpointResponse updateBasicEndpointWithOptions(const Models::UpdateBasicEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of an endpoint that is associated with a basic Global Accelerator (GA) instance.
       *
       * @param request UpdateBasicEndpointRequest
       * @return UpdateBasicEndpointResponse
       */
      Models::UpdateBasicEndpointResponse updateBasicEndpoint(const Models::UpdateBasicEndpointRequest &request);

      /**
       * @summary Updates the configurations of an endpoint group that is associated with a basic Global Accelerator (GA) instance.
       *
       * @description - **UpdateBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. The system modifies the configurations of an endpoint group that is associated with a basic GA instance by deleting the endpoint group and creating a new endpoint group. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) operation to query the status of the task.
       *   - If the basic GA instance is in the **configuring** state, the configurations of the endpoint group are being modified. In this case, you can perform only query operations.
       *   - If the basic GA instance is in the **active** state, the configurations of the endpoint group are modified.
       * - The **UpdateBasicEndpointGroup** operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
       *
       * @param request UpdateBasicEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBasicEndpointGroupResponse
       */
      Models::UpdateBasicEndpointGroupResponse updateBasicEndpointGroupWithOptions(const Models::UpdateBasicEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of an endpoint group that is associated with a basic Global Accelerator (GA) instance.
       *
       * @description - **UpdateBasicEndpointGroup** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. The system modifies the configurations of an endpoint group that is associated with a basic GA instance by deleting the endpoint group and creating a new endpoint group. You can call the [GetBasicAccelerator](https://help.aliyun.com/document_detail/353188.html) operation to query the status of the task.
       *   - If the basic GA instance is in the **configuring** state, the configurations of the endpoint group are being modified. In this case, you can perform only query operations.
       *   - If the basic GA instance is in the **active** state, the configurations of the endpoint group are modified.
       * - The **UpdateBasicEndpointGroup** operation cannot be repeatedly called for the same basic GA instance within a specific period of time.
       *
       * @param request UpdateBasicEndpointGroupRequest
       * @return UpdateBasicEndpointGroupResponse
       */
      Models::UpdateBasicEndpointGroupResponse updateBasicEndpointGroup(const Models::UpdateBasicEndpointGroupRequest &request);

      /**
       * @summary Modifies the bandwidth of an acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @description Before you call this operation, take note of the following limits:
       * *   You can modify the bandwidth of an acceleration region of a basic GA instance only if the bandwidth metering method of the basic GA instance is **pay-by-data-transfer**.
       * *   **UpdateBasicIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
       *     *   If the acceleration region is in the **updating** state, it indicates that the bandwidth of the acceleration region is being modified. In this case, you can perform only query operations.
       *     *   If the acceleration region is in the **active** state, it indicates that the bandwidth of the acceleration region is modified.
       * *   You cannot repeatedly call the **UpdateBasicIpSet** operation for the same basic GA instance within a specific period of time.
       *
       * @param request UpdateBasicIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBasicIpSetResponse
       */
      Models::UpdateBasicIpSetResponse updateBasicIpSetWithOptions(const Models::UpdateBasicIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the bandwidth of an acceleration region of a basic Global Accelerator (GA) instance.
       *
       * @description Before you call this operation, take note of the following limits:
       * *   You can modify the bandwidth of an acceleration region of a basic GA instance only if the bandwidth metering method of the basic GA instance is **pay-by-data-transfer**.
       * *   **UpdateBasicIpSet** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [GetBasicIpSet](https://help.aliyun.com/document_detail/362987.html) operation to query the status of the task.
       *     *   If the acceleration region is in the **updating** state, it indicates that the bandwidth of the acceleration region is being modified. In this case, you can perform only query operations.
       *     *   If the acceleration region is in the **active** state, it indicates that the bandwidth of the acceleration region is modified.
       * *   You cannot repeatedly call the **UpdateBasicIpSet** operation for the same basic GA instance within a specific period of time.
       *
       * @param request UpdateBasicIpSetRequest
       * @return UpdateBasicIpSetResponse
       */
      Models::UpdateBasicIpSetResponse updateBasicIpSet(const Models::UpdateBasicIpSetRequest &request);

      /**
       * @summary You can call the UpdateCustomRoutingEndpointGroupAttribute operation to modify the name and description of an endpoint group associated with a custom routing listener.
       *
       * @param request UpdateCustomRoutingEndpointGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomRoutingEndpointGroupAttributeResponse
       */
      Models::UpdateCustomRoutingEndpointGroupAttributeResponse updateCustomRoutingEndpointGroupAttributeWithOptions(const Models::UpdateCustomRoutingEndpointGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the UpdateCustomRoutingEndpointGroupAttribute operation to modify the name and description of an endpoint group associated with a custom routing listener.
       *
       * @param request UpdateCustomRoutingEndpointGroupAttributeRequest
       * @return UpdateCustomRoutingEndpointGroupAttributeResponse
       */
      Models::UpdateCustomRoutingEndpointGroupAttributeResponse updateCustomRoutingEndpointGroupAttribute(const Models::UpdateCustomRoutingEndpointGroupAttributeRequest &request);

      /**
       * @summary Modifies the mapping configurations of an endpoint group that is associated with a custom routing listener.
       *
       * @description *   **UpdateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group associated with a custom routing listener to check whether the mapping configurations of the endpoint group are modified.
       *     *   If the endpoint group is in the **updating** state, the mapping configurations of the endpoint group are being modified. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state, the mapping configurations of the endpoint group are modified.
       * *   The **UpdateCustomRoutingEndpointGroupDestinations** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request UpdateCustomRoutingEndpointGroupDestinationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::UpdateCustomRoutingEndpointGroupDestinationsResponse updateCustomRoutingEndpointGroupDestinationsWithOptions(const Models::UpdateCustomRoutingEndpointGroupDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the mapping configurations of an endpoint group that is associated with a custom routing listener.
       *
       * @description *   **UpdateCustomRoutingEndpointGroupDestinations** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of an endpoint group associated with a custom routing listener to check whether the mapping configurations of the endpoint group are modified.
       *     *   If the endpoint group is in the **updating** state, the mapping configurations of the endpoint group are being modified. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state, the mapping configurations of the endpoint group are modified.
       * *   The **UpdateCustomRoutingEndpointGroupDestinations** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request UpdateCustomRoutingEndpointGroupDestinationsRequest
       * @return UpdateCustomRoutingEndpointGroupDestinationsResponse
       */
      Models::UpdateCustomRoutingEndpointGroupDestinationsResponse updateCustomRoutingEndpointGroupDestinations(const Models::UpdateCustomRoutingEndpointGroupDestinationsRequest &request);

      /**
       * @summary Modifies the traffic policies for an endpoint that is associated with a custom routing listener.
       *
       * @description *   **UpdateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
       *     *   If the endpoint group is in the **updating** state, traffic policies are being modified for endpoints in the endpoint group. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state, traffic policies are modified for endpoints in the endpoint group.
       * *   The **UpdateCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request UpdateCustomRoutingEndpointTrafficPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::UpdateCustomRoutingEndpointTrafficPoliciesResponse updateCustomRoutingEndpointTrafficPoliciesWithOptions(const Models::UpdateCustomRoutingEndpointTrafficPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the traffic policies for an endpoint that is associated with a custom routing listener.
       *
       * @description *   **UpdateCustomRoutingEndpointTrafficPolicies** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the status of the task.
       *     *   If the endpoint group is in the **updating** state, traffic policies are being modified for endpoints in the endpoint group. In this case, you can perform only query operations.
       *     *   If the endpoint group is in the **active** state, traffic policies are modified for endpoints in the endpoint group.
       * *   The **UpdateCustomRoutingEndpointTrafficPolicies** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request UpdateCustomRoutingEndpointTrafficPoliciesRequest
       * @return UpdateCustomRoutingEndpointTrafficPoliciesResponse
       */
      Models::UpdateCustomRoutingEndpointTrafficPoliciesResponse updateCustomRoutingEndpointTrafficPolicies(const Models::UpdateCustomRoutingEndpointTrafficPoliciesRequest &request);

      /**
       * @summary Modifies the endpoints of a custom routing listener.
       *
       * @description ## Description
       * *   **UpdateCustomRoutingEndpoints** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener to check whether the endpoints in the endpoint groups are modified.
       *     *   If an endpoint group is in the **updating** state, the endpoints in the endpoint group are being modified. In this case, you can perform only query operations.
       *     *   If an endpoint group is in the **active** state, the endpoints in the endpoint group are modified.
       * *   The **UpdateCustomRoutingEndpoints** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request UpdateCustomRoutingEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomRoutingEndpointsResponse
       */
      Models::UpdateCustomRoutingEndpointsResponse updateCustomRoutingEndpointsWithOptions(const Models::UpdateCustomRoutingEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the endpoints of a custom routing listener.
       *
       * @description ## Description
       * *   **UpdateCustomRoutingEndpoints** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation is still being performed in the system background. You can call the [DescribeCustomRoutingEndpointGroup](https://help.aliyun.com/document_detail/449373.html) operation to query the state of the endpoint groups associated with a custom routing listener to check whether the endpoints in the endpoint groups are modified.
       *     *   If an endpoint group is in the **updating** state, the endpoints in the endpoint group are being modified. In this case, you can perform only query operations.
       *     *   If an endpoint group is in the **active** state, the endpoints in the endpoint group are modified.
       * *   The **UpdateCustomRoutingEndpoints** operation cannot be repeatedly called for the same Global Accelerator (GA) instance within a specific period of time.
       *
       * @param request UpdateCustomRoutingEndpointsRequest
       * @return UpdateCustomRoutingEndpointsResponse
       */
      Models::UpdateCustomRoutingEndpointsResponse updateCustomRoutingEndpoints(const Models::UpdateCustomRoutingEndpointsRequest &request);

      /**
       * @summary Calls the UpdateDomain operation to update a domain name.
       *
       * @description This operation is used to update an accelerated domain name. If the new accelerated domain name is deployed in the Chinese mainland, the domain name must have obtained an ICP filing.
       * The **UpdateDomain** operation does not support concurrent updates of accelerated domain names within the same account.
       *
       * @param request UpdateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainResponse
       */
      Models::UpdateDomainResponse updateDomainWithOptions(const Models::UpdateDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the UpdateDomain operation to update a domain name.
       *
       * @description This operation is used to update an accelerated domain name. If the new accelerated domain name is deployed in the Chinese mainland, the domain name must have obtained an ICP filing.
       * The **UpdateDomain** operation does not support concurrent updates of accelerated domain names within the same account.
       *
       * @param request UpdateDomainRequest
       * @return UpdateDomainResponse
       */
      Models::UpdateDomainResponse updateDomain(const Models::UpdateDomainRequest &request);

      /**
       * @summary Queries and updates the ICP filing status of an accelerated domain name.
       *
       * @description This operation queries the latest ICP filing status of an accelerated domain name and updates the status accordingly.
       * The **UpdateDomainState** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation with the same Alibaba Cloud account.
       *
       * @param request UpdateDomainStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainStateResponse
       */
      Models::UpdateDomainStateResponse updateDomainStateWithOptions(const Models::UpdateDomainStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries and updates the ICP filing status of an accelerated domain name.
       *
       * @description This operation queries the latest ICP filing status of an accelerated domain name and updates the status accordingly.
       * The **UpdateDomainState** operation holds an exclusive lock on the GA instance. While the operation is in progress, you cannot call the same operation with the same Alibaba Cloud account.
       *
       * @param request UpdateDomainStateRequest
       * @return UpdateDomainStateResponse
       */
      Models::UpdateDomainStateResponse updateDomainState(const Models::UpdateDomainStateRequest &request);

      /**
       * @summary Updates the configuration of an endpoint group.
       *
       * @description - The **UpdateEndpointGroup** API is an asynchronous API. After you call this API, the system returns a request ID and starts the update in the background; the configuration is not modified immediately. Call [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) to check the status of the endpoint group:
       *   - If an endpoint group is in the **updating** status, its configuration is being modified, and you can only perform queries.
       *   - If an endpoint group is in the **active** status, the update is complete.
       * - The **UpdateEndpointGroup** API does not support concurrent updates to endpoint groups in the same Global Accelerator (GA) instance.
       *
       * @param request UpdateEndpointGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEndpointGroupResponse
       */
      Models::UpdateEndpointGroupResponse updateEndpointGroupWithOptions(const Models::UpdateEndpointGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an endpoint group.
       *
       * @description - The **UpdateEndpointGroup** API is an asynchronous API. After you call this API, the system returns a request ID and starts the update in the background; the configuration is not modified immediately. Call [DescribeEndpointGroup](https://help.aliyun.com/document_detail/153260.html) to check the status of the endpoint group:
       *   - If an endpoint group is in the **updating** status, its configuration is being modified, and you can only perform queries.
       *   - If an endpoint group is in the **active** status, the update is complete.
       * - The **UpdateEndpointGroup** API does not support concurrent updates to endpoint groups in the same Global Accelerator (GA) instance.
       *
       * @param request UpdateEndpointGroupRequest
       * @return UpdateEndpointGroupResponse
       */
      Models::UpdateEndpointGroupResponse updateEndpointGroup(const Models::UpdateEndpointGroupRequest &request);

      /**
       * @summary Modifies the name and description of an endpoint group.
       *
       * @param request UpdateEndpointGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEndpointGroupAttributeResponse
       */
      Models::UpdateEndpointGroupAttributeResponse updateEndpointGroupAttributeWithOptions(const Models::UpdateEndpointGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of an endpoint group.
       *
       * @param request UpdateEndpointGroupAttributeRequest
       * @return UpdateEndpointGroupAttributeResponse
       */
      Models::UpdateEndpointGroupAttributeResponse updateEndpointGroupAttribute(const Models::UpdateEndpointGroupAttributeRequest &request);

      /**
       * @summary Modifies endpoint groups for a listener in a batch.
       *
       * @description ### Usage notes
       * - **UpdateEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation continues to run in the background. You can call the or [](t2323644.xdita#)operation to query the state of an endpoint group.
       *   - If an endpoint group is in the **updating** state, its configuration is being modified. In this state, you can only perform query operations.
       *   - If an endpoint group is in the **active** state, its configuration has been modified.
       * - You cannot concurrently call the **UpdateEndpointGroups** operation to modify the configurations of endpoint groups that belong to the same Global Accelerator (GA) instance.
       *
       * @param request UpdateEndpointGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEndpointGroupsResponse
       */
      Models::UpdateEndpointGroupsResponse updateEndpointGroupsWithOptions(const Models::UpdateEndpointGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies endpoint groups for a listener in a batch.
       *
       * @description ### Usage notes
       * - **UpdateEndpointGroups** is an asynchronous operation. After you send a request, the system returns a request ID, but the operation continues to run in the background. You can call the or [](t2323644.xdita#)operation to query the state of an endpoint group.
       *   - If an endpoint group is in the **updating** state, its configuration is being modified. In this state, you can only perform query operations.
       *   - If an endpoint group is in the **active** state, its configuration has been modified.
       * - You cannot concurrently call the **UpdateEndpointGroups** operation to modify the configurations of endpoint groups that belong to the same Global Accelerator (GA) instance.
       *
       * @param request UpdateEndpointGroupsRequest
       * @return UpdateEndpointGroupsResponse
       */
      Models::UpdateEndpointGroupsResponse updateEndpointGroups(const Models::UpdateEndpointGroupsRequest &request);

      /**
       * @summary To update forwarding rules, call the UpdateForwardingRules API.
       *
       * @description - **UpdateForwardingRules** is an asynchronous API. A call to this API returns a request ID and runs the update in the background. You can call [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) to query the status of the forwarding rule:
       *   - A status of **configuring** indicates that the forwarding rule is being updated. During this process, you can only perform query operations.
       *   - A status of **active** indicates that the update is complete.
       * - You cannot use **UpdateForwardingRules** to concurrently update forwarding rules within the same Global Accelerator instance.
       *
       * @param request UpdateForwardingRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateForwardingRulesResponse
       */
      Models::UpdateForwardingRulesResponse updateForwardingRulesWithOptions(const Models::UpdateForwardingRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To update forwarding rules, call the UpdateForwardingRules API.
       *
       * @description - **UpdateForwardingRules** is an asynchronous API. A call to this API returns a request ID and runs the update in the background. You can call [ListForwardingRules](https://help.aliyun.com/document_detail/205817.html) to query the status of the forwarding rule:
       *   - A status of **configuring** indicates that the forwarding rule is being updated. During this process, you can only perform query operations.
       *   - A status of **active** indicates that the update is complete.
       * - You cannot use **UpdateForwardingRules** to concurrently update forwarding rules within the same Global Accelerator instance.
       *
       * @param request UpdateForwardingRulesRequest
       * @return UpdateForwardingRulesResponse
       */
      Models::UpdateForwardingRulesResponse updateForwardingRules(const Models::UpdateForwardingRulesRequest &request);

      /**
       * @summary Modifies the attributes of an acceleration region in an acceleration area for a Global Accelerator (GA) instance.
       *
       * @description *   **UpdateIpSet** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
       *     *   If the acceleration region is in the **updating** state, it indicates that the acceleration region is being modified. In this case, you can continue to perform query operations on the acceleration regions.
       *     *   If the acceleration region is in the **active** state, it indicates that the acceleration region is modified.
       * *   You cannot call the **UpdateIpSet** operation again on the same GA instance before the previous operation is complete.
       *
       * @param request UpdateIpSetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpSetResponse
       */
      Models::UpdateIpSetResponse updateIpSetWithOptions(const Models::UpdateIpSetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an acceleration region in an acceleration area for a Global Accelerator (GA) instance.
       *
       * @description *   **UpdateIpSet** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of an acceleration region.
       *     *   If the acceleration region is in the **updating** state, it indicates that the acceleration region is being modified. In this case, you can continue to perform query operations on the acceleration regions.
       *     *   If the acceleration region is in the **active** state, it indicates that the acceleration region is modified.
       * *   You cannot call the **UpdateIpSet** operation again on the same GA instance before the previous operation is complete.
       *
       * @param request UpdateIpSetRequest
       * @return UpdateIpSetResponse
       */
      Models::UpdateIpSetResponse updateIpSet(const Models::UpdateIpSetRequest &request);

      /**
       * @summary Modifies the attributes of acceleration regions in an acceleration area for a Global Accelerator (GA) instance.
       *
       * @description *   **UpdateIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
       *     *   If an acceleration region is in the **updating** state, the acceleration region is being modified. In this case, you can perform only query operations.
       *     *   If an acceleration region is in the **active** state, the acceleration region is modified.
       * *   You cannot repeatedly call the **UpdateIpSets** operation for the same GA instance within a specific period of time.
       *
       * @param request UpdateIpSetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIpSetsResponse
       */
      Models::UpdateIpSetsResponse updateIpSetsWithOptions(const Models::UpdateIpSetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of acceleration regions in an acceleration area for a Global Accelerator (GA) instance.
       *
       * @description *   **UpdateIpSets** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the [DescribeIpSet](https://help.aliyun.com/document_detail/153246.html) operation to query the status of the task.
       *     *   If an acceleration region is in the **updating** state, the acceleration region is being modified. In this case, you can perform only query operations.
       *     *   If an acceleration region is in the **active** state, the acceleration region is modified.
       * *   You cannot repeatedly call the **UpdateIpSets** operation for the same GA instance within a specific period of time.
       *
       * @param request UpdateIpSetsRequest
       * @return UpdateIpSetsResponse
       */
      Models::UpdateIpSetsResponse updateIpSets(const Models::UpdateIpSetsRequest &request);

      /**
       * @summary Updates the configurations of a listener for a Global Accelerator (GA) instance.
       *
       * @description Modifies the protocol, ports, and other configurations of a listener to meet your business requirements.
       * When you call this operation, take note of the following items:
       * - **UpdateListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of a listener.
       *   - If the listener is in the **updating** state, it indicates that its configurations are being modified. In this case, you can perform only query operations.
       *   - If the listener is in the **active** state, it indicates that its configurations are modified.
       * - The **UpdateListener** operation cannot be repeatedly called to modify listener configurations for the same GA instance within a specific period of time.
       *
       * @param request UpdateListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateListenerResponse
       */
      Models::UpdateListenerResponse updateListenerWithOptions(const Models::UpdateListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of a listener for a Global Accelerator (GA) instance.
       *
       * @description Modifies the protocol, ports, and other configurations of a listener to meet your business requirements.
       * When you call this operation, take note of the following items:
       * - **UpdateListener** is an asynchronous operation. After you send a request, the system returns a request ID and runs the task in the background. You can call the [DescribeListener](https://help.aliyun.com/document_detail/153254.html) operation to query the status of a listener.
       *   - If the listener is in the **updating** state, it indicates that its configurations are being modified. In this case, you can perform only query operations.
       *   - If the listener is in the **active** state, it indicates that its configurations are modified.
       * - The **UpdateListener** operation cannot be repeatedly called to modify listener configurations for the same GA instance within a specific period of time.
       *
       * @param request UpdateListenerRequest
       * @return UpdateListenerResponse
       */
      Models::UpdateListenerResponse updateListener(const Models::UpdateListenerRequest &request);

      /**
       * @summary Modify Simple Log Service log configuration
       *
       * @param request UpdateLogStoreConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLogStoreConfigResponse
       */
      Models::UpdateLogStoreConfigResponse updateLogStoreConfigWithOptions(const Models::UpdateLogStoreConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Simple Log Service log configuration
       *
       * @param request UpdateLogStoreConfigRequest
       * @return UpdateLogStoreConfigResponse
       */
      Models::UpdateLogStoreConfigResponse updateLogStoreConfig(const Models::UpdateLogStoreConfigRequest &request);

      /**
       * @summary Changes the control mode of a resource from managed mode to unmanaged mode.
       *
       * @description *   This operation is applicable only to **managed** Global Accelerator (GA) instances.
       * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you cannot change the mode of the instance to managed mode.
       * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you can obtain all operation permissions on the instance.
       *   <warning>If you change or delete a configuration of a GA instance whose control mode is changed from managed mode to unmanaged mode, the cloud services that depend on the instance may not work as expected. Proceed with caution.
       *
       * @param request UpdateServiceManagedControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateServiceManagedControlResponse
       */
      Models::UpdateServiceManagedControlResponse updateServiceManagedControlWithOptions(const Models::UpdateServiceManagedControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the control mode of a resource from managed mode to unmanaged mode.
       *
       * @description *   This operation is applicable only to **managed** Global Accelerator (GA) instances.
       * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you cannot change the mode of the instance to managed mode.
       * *   After you change the control mode of a GA instance from managed mode to unmanaged mode, you can obtain all operation permissions on the instance.
       *   <warning>If you change or delete a configuration of a GA instance whose control mode is changed from managed mode to unmanaged mode, the cloud services that depend on the instance may not work as expected. Proceed with caution.
       *
       * @param request UpdateServiceManagedControlRequest
       * @return UpdateServiceManagedControlResponse
       */
      Models::UpdateServiceManagedControlResponse updateServiceManagedControl(const Models::UpdateServiceManagedControlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
