// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ENS20171110_HPP_
#define ALIBABACLOUD_ENS20171110_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ens20171110Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ens20171110.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Associates a network access control list (ACL) with a network.
       *
       * @param request AccosicateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccosicateNetworkAclResponse
       */
      Models::AccosicateNetworkAclResponse accosicateNetworkAclWithOptions(const Models::AccosicateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a network access control list (ACL) with a network.
       *
       * @param request AccosicateNetworkAclRequest
       * @return AccosicateNetworkAclResponse
       */
      Models::AccosicateNetworkAclResponse accosicateNetworkAcl(const Models::AccosicateNetworkAclRequest &request);

      /**
       * @summary Adds backend servers.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param tmpReq AddBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServersWithOptions(const Models::AddBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request AddBackendServersRequest
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServers(const Models::AddBackendServersRequest &request);

      /**
       * @summary Adds an IPv6 network interface controller (NIC). A public IP address is automatically assigned at the same time.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 5 times per second per user.
       * *   Internal networks and IPv4 addresses are not supported.
       *
       * @param request AddNetworkInterfaceToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddNetworkInterfaceToInstanceResponse
       */
      Models::AddNetworkInterfaceToInstanceResponse addNetworkInterfaceToInstanceWithOptions(const Models::AddNetworkInterfaceToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an IPv6 network interface controller (NIC). A public IP address is automatically assigned at the same time.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 5 times per second per user.
       * *   Internal networks and IPv4 addresses are not supported.
       *
       * @param request AddNetworkInterfaceToInstanceRequest
       * @return AddNetworkInterfaceToInstanceResponse
       */
      Models::AddNetworkInterfaceToInstanceResponse addNetworkInterfaceToInstance(const Models::AddNetworkInterfaceToInstanceRequest &request);

      /**
       * @summary Adds an elastic IP address (EIP) to a Source Network Address Translation (SNAT) entry.
       *
       * @param request AddSnatIpForSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSnatIpForSnatEntryResponse
       */
      Models::AddSnatIpForSnatEntryResponse addSnatIpForSnatEntryWithOptions(const Models::AddSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an elastic IP address (EIP) to a Source Network Address Translation (SNAT) entry.
       *
       * @param request AddSnatIpForSnatEntryRequest
       * @return AddSnatIpForSnatEntryResponse
       */
      Models::AddSnatIpForSnatEntryResponse addSnatIpForSnatEntry(const Models::AddSnatIpForSnatEntryRequest &request);

      /**
       * @summary Assigns secondary private IP addresses to an elastic network interface (ENI).
       *
       * @param request AssignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignPrivateIpAddressesResponse
       */
      Models::AssignPrivateIpAddressesResponse assignPrivateIpAddressesWithOptions(const Models::AssignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns secondary private IP addresses to an elastic network interface (ENI).
       *
       * @param request AssignPrivateIpAddressesRequest
       * @return AssignPrivateIpAddressesResponse
       */
      Models::AssignPrivateIpAddressesResponse assignPrivateIpAddresses(const Models::AssignPrivateIpAddressesRequest &request);

      /**
       * @summary Associates an elastic IP address (EIP) with a cloud resource that is deployed in the same region.
       *
       * @param request AssociateEnsEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEnsEipAddressResponse
       */
      Models::AssociateEnsEipAddressResponse associateEnsEipAddressWithOptions(const Models::AssociateEnsEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an elastic IP address (EIP) with a cloud resource that is deployed in the same region.
       *
       * @param request AssociateEnsEipAddressRequest
       * @return AssociateEnsEipAddressResponse
       */
      Models::AssociateEnsEipAddressResponse associateEnsEipAddress(const Models::AssociateEnsEipAddressRequest &request);

      /**
       * @summary Associates a high-availability virtual IP address (HAVIP) with an Edge Node Service (ENS) instance or elastic network interface (ENI).
       *
       * @description When you call this operation to associate an HAVIP, take note of the following items:
       * *   An HAVIP immediately takes effect after it is associated. You do not need to restart the ENS instance. However, you need to associate the HAVIP with the ENI of the ENS instance.
       * *   The HAVIP and ENS instance must belong to the same vSwitch.
       * *   The ENS instance must be in the Running or Stopped state.
       * *   The HAVIP must be in the Available or InUse state.
       * *   AssociateHaVip is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the DescribeHaVips operation to query the status of an HAVIP:
       *     *   If the HAVIP is in the Associating state, the HAVIP is being associated.
       *     <!---->
       *     *   If the HAVIP is in the InUse state, the HAVIP is associated.
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a high-availability virtual IP address (HAVIP) with an Edge Node Service (ENS) instance or elastic network interface (ENI).
       *
       * @description When you call this operation to associate an HAVIP, take note of the following items:
       * *   An HAVIP immediately takes effect after it is associated. You do not need to restart the ENS instance. However, you need to associate the HAVIP with the ENI of the ENS instance.
       * *   The HAVIP and ENS instance must belong to the same vSwitch.
       * *   The ENS instance must be in the Running or Stopped state.
       * *   The HAVIP must be in the Available or InUse state.
       * *   AssociateHaVip is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the DescribeHaVips operation to query the status of an HAVIP:
       *     *   If the HAVIP is in the Associating state, the HAVIP is being associated.
       *     <!---->
       *     *   If the HAVIP is in the InUse state, the HAVIP is associated.
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Attaches a disk to an Edge Node Service (ENS) instance.
       *
       * @param request AttachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDiskWithOptions(const Models::AttachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a disk to an Edge Node Service (ENS) instance.
       *
       * @param request AttachDiskRequest
       * @return AttachDiskResponse
       */
      Models::AttachDiskResponse attachDisk(const Models::AttachDiskRequest &request);

      /**
       * @summary Adds an Edge Node Service (ENS) instance to Container Service for Kubernetes (ACK).
       *
       * @description # [](#)Usage notes
       * *   You can call this operation up to 10 times per second per account.
       * *   After you execute the command, the instance restarts loading.
       * *   Limits: The instance has at least two vCPUs and 4 GB memory. An image of CentOS 7.4 or later is required.
       *
       * @param request AttachEnsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachEnsInstancesResponse
       */
      Models::AttachEnsInstancesResponse attachEnsInstancesWithOptions(const Models::AttachEnsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Edge Node Service (ENS) instance to Container Service for Kubernetes (ACK).
       *
       * @description # [](#)Usage notes
       * *   You can call this operation up to 10 times per second per account.
       * *   After you execute the command, the instance restarts loading.
       * *   Limits: The instance has at least two vCPUs and 4 GB memory. An image of CentOS 7.4 or later is required.
       *
       * @param request AttachEnsInstancesRequest
       * @return AttachEnsInstancesResponse
       */
      Models::AttachEnsInstancesResponse attachEnsInstances(const Models::AttachEnsInstancesRequest &request);

      /**
       * @summary Attaches a shared data group (SDG) to the corresponding Android in Container (AIC) instance.
       *
       * @param tmpReq AttachInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstanceSDGResponse
       */
      Models::AttachInstanceSDGResponse attachInstanceSDGWithOptions(const Models::AttachInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a shared data group (SDG) to the corresponding Android in Container (AIC) instance.
       *
       * @param request AttachInstanceSDGRequest
       * @return AttachInstanceSDGResponse
       */
      Models::AttachInstanceSDGResponse attachInstanceSDG(const Models::AttachInstanceSDGRequest &request);

      /**
       * @summary Attaches an Elastic Network Interface (ENI) to an Edge Node Service (ECS) instance.
       *
       * @description When you call this operation, take note of the following limits:
       * *   The ENI must be in the Available state.
       * *   An ENI can be attached to only one instance that is the same zone and the same Virtual Private Cloud (VPC).
       * *   The instance must be in the Stopped state.
       * *   A maximum of 10 ENIs can be attached to an instance.
       * *   This operation is an asynchronous operation. After you call this operation to attach an ENI, you can view the status of the ENI to check whether the ENI is attached.
       *
       * @param request AttachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterfaceWithOptions(const Models::AttachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an Elastic Network Interface (ENI) to an Edge Node Service (ECS) instance.
       *
       * @description When you call this operation, take note of the following limits:
       * *   The ENI must be in the Available state.
       * *   An ENI can be attached to only one instance that is the same zone and the same Virtual Private Cloud (VPC).
       * *   The instance must be in the Stopped state.
       * *   A maximum of 10 ENIs can be attached to an instance.
       * *   This operation is an asynchronous operation. After you call this operation to attach an ENI, you can view the status of the ENI to check whether the ENI is attached.
       *
       * @param request AttachNetworkInterfaceRequest
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterface(const Models::AttachNetworkInterfaceRequest &request);

      /**
       * @summary Creates an inbound security group rule. This operation allows or denies the inbound traffic from other devices to instances in the security group.
       *
       * @param request AuthorizeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroupWithOptions(const Models::AuthorizeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an inbound security group rule. This operation allows or denies the inbound traffic from other devices to instances in the security group.
       *
       * @param request AuthorizeSecurityGroupRequest
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroup(const Models::AuthorizeSecurityGroupRequest &request);

      /**
       * @summary Creates an outbound security group rule. This operation allows or denies the outbound traffic from the instances in the security group to other devices.
       *
       * @description In the security group-related API documents, outbound traffic refers to the traffic that is sent by the source device and received at the destination device.
       *
       * @param request AuthorizeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupEgressResponse
       */
      Models::AuthorizeSecurityGroupEgressResponse authorizeSecurityGroupEgressWithOptions(const Models::AuthorizeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an outbound security group rule. This operation allows or denies the outbound traffic from the instances in the security group to other devices.
       *
       * @description In the security group-related API documents, outbound traffic refers to the traffic that is sent by the source device and received at the destination device.
       *
       * @param request AuthorizeSecurityGroupEgressRequest
       * @return AuthorizeSecurityGroupEgressResponse
       */
      Models::AuthorizeSecurityGroupEgressResponse authorizeSecurityGroupEgress(const Models::AuthorizeSecurityGroupEgressRequest &request);

      /**
       * @summary Migrates multiple instances in a specified event at a time. You can execute the task immediately or schedule the task execution.
       *
       * @description ## [](#)Request description
       * *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
       *
       * @param tmpReq BatchEventMigrateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEventMigrateInstanceResponse
       */
      Models::BatchEventMigrateInstanceResponse batchEventMigrateInstanceWithOptions(const Models::BatchEventMigrateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates multiple instances in a specified event at a time. You can execute the task immediately or schedule the task execution.
       *
       * @description ## [](#)Request description
       * *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
       *
       * @param request BatchEventMigrateInstanceRequest
       * @return BatchEventMigrateInstanceResponse
       */
      Models::BatchEventMigrateInstanceResponse batchEventMigrateInstance(const Models::BatchEventMigrateInstanceRequest &request);

      /**
       * @summary The event that is used to immediately redeploy specified resources in batches or by appointment
       *
       * @description *   This O\\&M operation supports only the following event types: Instance:SystemMaintenance.Reboot (instance reboot due to system problems)
       *
       * @param tmpReq BatchEventRebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEventRebootInstanceResponse
       */
      Models::BatchEventRebootInstanceResponse batchEventRebootInstanceWithOptions(const Models::BatchEventRebootInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The event that is used to immediately redeploy specified resources in batches or by appointment
       *
       * @description *   This O\\&M operation supports only the following event types: Instance:SystemMaintenance.Reboot (instance reboot due to system problems)
       *
       * @param request BatchEventRebootInstanceRequest
       * @return BatchEventRebootInstanceResponse
       */
      Models::BatchEventRebootInstanceResponse batchEventRebootInstance(const Models::BatchEventRebootInstanceRequest &request);

      /**
       * @summary Batch redeployment
       *
       * @description - This operation currently only supports event types: Instance:SystemFailure.Redeploy (redeploy instance due to system issues), Instance:SystemMaintenance.Redeploy (redeploy instance due to system maintenance)
       *
       * @param tmpReq BatchEventRedeployInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEventRedeployInstanceResponse
       */
      Models::BatchEventRedeployInstanceResponse batchEventRedeployInstanceWithOptions(const Models::BatchEventRedeployInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch redeployment
       *
       * @description - This operation currently only supports event types: Instance:SystemFailure.Redeploy (redeploy instance due to system issues), Instance:SystemMaintenance.Redeploy (redeploy instance due to system maintenance)
       *
       * @param request BatchEventRedeployInstanceRequest
       * @return BatchEventRedeployInstanceResponse
       */
      Models::BatchEventRedeployInstanceResponse batchEventRedeployInstance(const Models::BatchEventRedeployInstanceRequest &request);

      /**
       * @summary 清理分发数据
       *
       * @param request CleanDistDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CleanDistDataResponse
       */
      Models::CleanDistDataResponse cleanDistDataWithOptions(const Models::CleanDistDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清理分发数据
       *
       * @param request CleanDistDataRequest
       * @return CleanDistDataResponse
       */
      Models::CleanDistDataResponse cleanDistData(const Models::CleanDistDataRequest &request);

      /**
       * @summary Copies a shared data group (SDG) across nodes.
       *
       * @param tmpReq CopySDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySDGResponse
       */
      Models::CopySDGResponse copySDGWithOptions(const Models::CopySDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a shared data group (SDG) across nodes.
       *
       * @param request CopySDGRequest
       * @return CopySDGResponse
       */
      Models::CopySDGResponse copySDG(const Models::CopySDGRequest &request);

      /**
       * @summary Copies a snapshot across nodes.
       *
       * @param tmpReq CopySnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshotWithOptions(const Models::CopySnapshotRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies a snapshot across nodes.
       *
       * @param request CopySnapshotRequest
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshot(const Models::CopySnapshotRequest &request);

      /**
       * @summary Creates an ARM server.
       *
       * @param request CreateARMServerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateARMServerInstancesResponse
       */
      Models::CreateARMServerInstancesResponse createARMServerInstancesWithOptions(const Models::CreateARMServerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an ARM server.
       *
       * @param request CreateARMServerInstancesRequest
       * @return CreateARMServerInstancesResponse
       */
      Models::CreateARMServerInstancesResponse createARMServerInstances(const Models::CreateARMServerInstancesRequest &request);

      /**
       * @summary Creates an edge application that allows you to manage Edge Node Service (ENS) nodes in containers, bare metal instances, and virtual machines.
       *
       * @param request CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge application that allows you to manage Edge Node Service (ENS) nodes in containers, bare metal instances, and virtual machines.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates a classic network
       *
       * @param request CreateClassicNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClassicNetworkResponse
       */
      Models::CreateClassicNetworkResponse createClassicNetworkWithOptions(const Models::CreateClassicNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a classic network
       *
       * @param request CreateClassicNetworkRequest
       * @return CreateClassicNetworkResponse
       */
      Models::CreateClassicNetworkResponse createClassicNetwork(const Models::CreateClassicNetworkRequest &request);

      /**
       * @summary Creates a Container Service for Kubernetes (ACK) edge cluster.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   Creating a cluster is an asynchronous operation. After this operation returns the response, it takes 10 to 20 minutes to initialize the cluster. You can call the DescribeCluster operation to query the cluster status. After you create a cluster, you can call the DescribeClusterKubeConfig operation to obtain the cluster certificate.
       *
       * @param tmpReq CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Container Service for Kubernetes (ACK) edge cluster.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   Creating a cluster is an asynchronous operation. After this operation returns the response, it takes 10 to 20 minutes to initialize the cluster. You can call the DescribeCluster operation to query the cluster status. After you create a cluster, you can call the DescribeClusterKubeConfig operation to obtain the cluster certificate.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @param request CreateDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDiskWithOptions(const Models::CreateDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription data disk.
       *
       * @param request CreateDiskRequest
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDisk(const Models::CreateDiskRequest &request);

      /**
       * @summary Applies for an elastic IP address (EIP).
       *
       * @description *   You can call this operation up to 5,000 times per second per account.
       * *   You can call this operation up to 50 times per second per user.
       *
       * @param request CreateEipInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEipInstanceResponse
       */
      Models::CreateEipInstanceResponse createEipInstanceWithOptions(const Models::CreateEipInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for an elastic IP address (EIP).
       *
       * @description *   You can call this operation up to 5,000 times per second per account.
       * *   You can call this operation up to 50 times per second per user.
       *
       * @param request CreateEipInstanceRequest
       * @return CreateEipInstanceResponse
       */
      Models::CreateEipInstanceResponse createEipInstance(const Models::CreateEipInstanceRequest &request);

      /**
       * @summary Creates a custom route entry.
       *
       * @param request CreateEnsRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnsRouteEntryResponse
       */
      Models::CreateEnsRouteEntryResponse createEnsRouteEntryWithOptions(const Models::CreateEnsRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom route entry.
       *
       * @param request CreateEnsRouteEntryRequest
       * @return CreateEnsRouteEntryResponse
       */
      Models::CreateEnsRouteEntryResponse createEnsRouteEntry(const Models::CreateEnsRouteEntryRequest &request);

      /**
       * @summary 创建售卖约束
       *
       * @param tmpReq CreateEnsSaleControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnsSaleControlResponse
       */
      Models::CreateEnsSaleControlResponse createEnsSaleControlWithOptions(const Models::CreateEnsSaleControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建售卖约束
       *
       * @param request CreateEnsSaleControlRequest
       * @return CreateEnsSaleControlResponse
       */
      Models::CreateEnsSaleControlResponse createEnsSaleControl(const Models::CreateEnsSaleControlRequest &request);

      /**
       * @summary Creates an edge service.
       *
       * @param request CreateEnsServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEnsServiceResponse
       */
      Models::CreateEnsServiceResponse createEnsServiceWithOptions(const Models::CreateEnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge service.
       *
       * @param request CreateEnsServiceRequest
       * @return CreateEnsServiceResponse
       */
      Models::CreateEnsServiceResponse createEnsService(const Models::CreateEnsServiceRequest &request);

      /**
       * @summary Creates an edge private network (EPN) instance.
       *
       * @param request CreateEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEpnInstanceResponse
       */
      Models::CreateEpnInstanceResponse createEpnInstanceWithOptions(const Models::CreateEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge private network (EPN) instance.
       *
       * @param request CreateEpnInstanceRequest
       * @return CreateEpnInstanceResponse
       */
      Models::CreateEpnInstanceResponse createEpnInstance(const Models::CreateEpnInstanceRequest &request);

      /**
       * @summary Creates a NAS file system.
       *
       * @param tmpReq CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAS file system.
       *
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @summary Adds a Destination Network Address Translation (DNAT) entry to a DNAT table.
       *
       * @param request CreateForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntryWithOptions(const Models::CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Destination Network Address Translation (DNAT) entry to a DNAT table.
       *
       * @param request CreateForwardEntryRequest
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntry(const Models::CreateForwardEntryRequest &request);

      /**
       * @summary Creates a high-availability virtual IP address (HAVIP).
       *
       * @param request CreateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVipWithOptions(const Models::CreateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a high-availability virtual IP address (HAVIP).
       *
       * @param request CreateHaVipRequest
       * @return CreateHaVipResponse
       */
      Models::CreateHaVipResponse createHaVip(const Models::CreateHaVipRequest &request);

      /**
       * @summary Creates an image from an instance.
       *
       * @param request CreateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImageWithOptions(const Models::CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image from an instance.
       *
       * @param request CreateImageRequest
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImage(const Models::CreateImageRequest &request);

      /**
       * @summary Creates an instance.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   We recommend that you increase the request time because instance creation is an asynchronous operation. If the return code of the API operation is 0, it indicates that the request is successful, but does not indicate that the instance is created. If the request is successful, an instance ID is returned. You can check whether the instance is created based on the instance ID.
       * *   InvalidUserData.NotInWhiteList operation restriction: You can create an instance only if you are in the whitelist in which members have the purchase permissions. Otherwise, an error is returned.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   We recommend that you increase the request time because instance creation is an asynchronous operation. If the return code of the API operation is 0, it indicates that the request is successful, but does not indicate that the instance is created. If the request is successful, an instance ID is returned. You can check whether the instance is created based on the instance ID.
       * *   InvalidUserData.NotInWhiteList operation restriction: You can create an instance only if you are in the whitelist in which members have the purchase permissions. Otherwise, an error is returned.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary 调用CreateInstanceOpsTask来针对一个实例或实例运维组发起运维任务
       *
       * @param tmpReq CreateInstanceActiveOpsTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceActiveOpsTaskResponse
       */
      Models::CreateInstanceActiveOpsTaskResponse createInstanceActiveOpsTaskWithOptions(const Models::CreateInstanceActiveOpsTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用CreateInstanceOpsTask来针对一个实例或实例运维组发起运维任务
       *
       * @param request CreateInstanceActiveOpsTaskRequest
       * @return CreateInstanceActiveOpsTaskResponse
       */
      Models::CreateInstanceActiveOpsTaskResponse createInstanceActiveOpsTask(const Models::CreateInstanceActiveOpsTaskRequest &request);

      /**
       * @summary Creates an SSH key pair.
       *
       * @description An SSH key pair consists of a public key and a private key. ENS stores the public key and returns the unencrypted private key that is PEM-encoded in the PKCS#8 format. You must securely lock away the private key.
       *
       * @param request CreateKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPairWithOptions(const Models::CreateKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an SSH key pair.
       *
       * @description An SSH key pair consists of a public key and a private key. ENS stores the public key and returns the unencrypted private key that is PEM-encoded in the PKCS#8 format. You must securely lock away the private key.
       *
       * @param request CreateKeyPairRequest
       * @return CreateKeyPairResponse
       */
      Models::CreateKeyPairResponse createKeyPair(const Models::CreateKeyPairRequest &request);

      /**
       * @summary Creates an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Creates an HTTP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerHTTPListenerResponse
       */
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListenerWithOptions(const Models::CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPListenerRequest
       * @return CreateLoadBalancerHTTPListenerResponse
       */
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListener(const Models::CreateLoadBalancerHTTPListenerRequest &request);

      /**
       * @summary Creates an HTTPS listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPSListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerHTTPSListenerResponse
       */
      Models::CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListenerWithOptions(const Models::CreateLoadBalancerHTTPSListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTPS listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPSListenerRequest
       * @return CreateLoadBalancerHTTPSListenerResponse
       */
      Models::CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListener(const Models::CreateLoadBalancerHTTPSListenerRequest &request);

      /**
       * @summary Creates a Transmission Control Protocol (TCP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListenerWithOptions(const Models::CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Transmission Control Protocol (TCP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListener(const Models::CreateLoadBalancerTCPListenerRequest &request);

      /**
       * @summary Creates a User Datagram Protocol (UDP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerUDPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerUDPListenerResponse
       */
      Models::CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListenerWithOptions(const Models::CreateLoadBalancerUDPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a User Datagram Protocol (UDP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerUDPListenerRequest
       * @return CreateLoadBalancerUDPListenerResponse
       */
      Models::CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListener(const Models::CreateLoadBalancerUDPListenerRequest &request);

      /**
       * @summary Creates a mount target.
       *
       * @description ## [](#)Precautions
       * After you call this operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the Active state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
       *
       * @param request CreateMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTargetWithOptions(const Models::CreateMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a mount target.
       *
       * @description ## [](#)Precautions
       * After you call this operation, a mount target is not immediately created. Therefore, we recommend that you call the DescribeMountTargets operation to query the status of the mount target. If the mount target is in the Active state, you can then mount the file system. Otherwise, the file system may fail to be mounted.
       *
       * @param request CreateMountTargetRequest
       * @return CreateMountTargetResponse
       */
      Models::CreateMountTargetResponse createMountTarget(const Models::CreateMountTargetRequest &request);

      /**
       * @summary Creates a network address translation (NAT) gateway.
       *
       * @param request CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network address translation (NAT) gateway.
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request CreateNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkResponse
       */
      Models::CreateNetworkResponse createNetworkWithOptions(const Models::CreateNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual private cloud (VPC).
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request CreateNetworkRequest
       * @return CreateNetworkResponse
       */
      Models::CreateNetworkResponse createNetwork(const Models::CreateNetworkRequest &request);

      /**
       * @summary Creates a network access control list (ACL).
       *
       * @param request CreateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkAclResponse
       */
      Models::CreateNetworkAclResponse createNetworkAclWithOptions(const Models::CreateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network access control list (ACL).
       *
       * @param request CreateNetworkAclRequest
       * @return CreateNetworkAclResponse
       */
      Models::CreateNetworkAclResponse createNetworkAcl(const Models::CreateNetworkAclRequest &request);

      /**
       * @summary Creates a network access control list (ACL) rule.
       *
       * @param request CreateNetworkAclEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkAclEntryResponse
       */
      Models::CreateNetworkAclEntryResponse createNetworkAclEntryWithOptions(const Models::CreateNetworkAclEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network access control list (ACL) rule.
       *
       * @param request CreateNetworkAclEntryRequest
       * @return CreateNetworkAclEntryResponse
       */
      Models::CreateNetworkAclEntryResponse createNetworkAclEntry(const Models::CreateNetworkAclEntryRequest &request);

      /**
       * @summary Create an Elastic Network Interface (ENI).
       *
       * @param tmpReq CreateNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterfaceWithOptions(const Models::CreateNetworkInterfaceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an Elastic Network Interface (ENI).
       *
       * @param request CreateNetworkInterfaceRequest
       * @return CreateNetworkInterfaceResponse
       */
      Models::CreateNetworkInterfaceResponse createNetworkInterface(const Models::CreateNetworkInterfaceRequest &request);

      /**
       * @summary Creates a shared data group (SDG) on an Android in Container (AIC) instance.
       *
       * @description A SDG can be regarded as a data partition image of a virtual device. You can save a data partition of a virtual device as an SDG. A created SDG can be deployed in data partitions of other virtual devices to achieve rapid data distribution and application. The procedure for calling SDG-related API operations:
       * *   Call the [CreateSDG](~~CreateSDG~~) operation to create an SDG, which is bound to AIC Instance A (InstanceId). After you create the SDG, a blank cloud disk (also known as an original cloud disk) is attached to Device A (InstanceId).
       * *   Install applications on and deliver files to AIC Instance A (InstanceId).
       * *   Call the [SaveSDG](~~SaveSDG~~) operation to save the data disk of AIC instance A as SDG A.
       * *   Call the [DeploySDG](~~DeploySDG~~) operation to deploy SDG A to AIC Instance B. This operattion is executed asynchronously. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the status of AIC Instance B. If the status of AIC Instance B changes to success, AIC insance B is available, and AIC Instances A and B have the same applications running.
       *
       * @param request CreateSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSDGResponse
       */
      Models::CreateSDGResponse createSDGWithOptions(const Models::CreateSDGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a shared data group (SDG) on an Android in Container (AIC) instance.
       *
       * @description A SDG can be regarded as a data partition image of a virtual device. You can save a data partition of a virtual device as an SDG. A created SDG can be deployed in data partitions of other virtual devices to achieve rapid data distribution and application. The procedure for calling SDG-related API operations:
       * *   Call the [CreateSDG](~~CreateSDG~~) operation to create an SDG, which is bound to AIC Instance A (InstanceId). After you create the SDG, a blank cloud disk (also known as an original cloud disk) is attached to Device A (InstanceId).
       * *   Install applications on and deliver files to AIC Instance A (InstanceId).
       * *   Call the [SaveSDG](~~SaveSDG~~) operation to save the data disk of AIC instance A as SDG A.
       * *   Call the [DeploySDG](~~DeploySDG~~) operation to deploy SDG A to AIC Instance B. This operattion is executed asynchronously. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the status of AIC Instance B. If the status of AIC Instance B changes to success, AIC insance B is available, and AIC Instances A and B have the same applications running.
       *
       * @param request CreateSDGRequest
       * @return CreateSDGResponse
       */
      Models::CreateSDGResponse createSDG(const Models::CreateSDGRequest &request);

      /**
       * @summary Creates a security group.
       *
       * @param tmpReq CreateSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroupWithOptions(const Models::CreateSecurityGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group.
       *
       * @param request CreateSecurityGroupRequest
       * @return CreateSecurityGroupResponse
       */
      Models::CreateSecurityGroupResponse createSecurityGroup(const Models::CreateSecurityGroupRequest &request);

      /**
       * @summary Create an ENS security group rule.
       *
       * @param tmpReq CreateSecurityGroupPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityGroupPermissionsResponse
       */
      Models::CreateSecurityGroupPermissionsResponse createSecurityGroupPermissionsWithOptions(const Models::CreateSecurityGroupPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an ENS security group rule.
       *
       * @param request CreateSecurityGroupPermissionsRequest
       * @return CreateSecurityGroupPermissionsResponse
       */
      Models::CreateSecurityGroupPermissionsResponse createSecurityGroupPermissions(const Models::CreateSecurityGroupPermissionsRequest &request);

      /**
       * @summary Creates a snapshot.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot.
       *
       * @param request CreateSnapshotRequest
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshot(const Models::CreateSnapshotRequest &request);

      /**
       * @summary Adds a source network address translation (SNAT) entry to a specified SNAT table.
       *
       * @param request CreateSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntryWithOptions(const Models::CreateSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a source network address translation (SNAT) entry to a specified SNAT table.
       *
       * @param request CreateSnatEntryRequest
       * @return CreateSnatEntryResponse
       */
      Models::CreateSnatEntryResponse createSnatEntry(const Models::CreateSnatEntryRequest &request);

      /**
       * @summary Creates a storage gateway.
       *
       * @param tmpReq CreateStorageGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStorageGatewayResponse
       */
      Models::CreateStorageGatewayResponse createStorageGatewayWithOptions(const Models::CreateStorageGatewayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a storage gateway.
       *
       * @param request CreateStorageGatewayRequest
       * @return CreateStorageGatewayResponse
       */
      Models::CreateStorageGatewayResponse createStorageGateway(const Models::CreateStorageGatewayRequest &request);

      /**
       * @summary Creates a storage volume.
       *
       * @param request CreateStorageVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateStorageVolumeResponse
       */
      Models::CreateStorageVolumeResponse createStorageVolumeWithOptions(const Models::CreateStorageVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a storage volume.
       *
       * @param request CreateStorageVolumeRequest
       * @return CreateStorageVolumeResponse
       */
      Models::CreateStorageVolumeResponse createStorageVolume(const Models::CreateStorageVolumeRequest &request);

      /**
       * @summary A vSwitch is created.
       *
       * @param request CreateVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitchWithOptions(const Models::CreateVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A vSwitch is created.
       *
       * @param request CreateVSwitchRequest
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitch(const Models::CreateVSwitchRequest &request);

      /**
       * @summary Deletes a specified AIC public key. You can delete a public key only if it is not associated with the public key.
       *
       * @param request DeleteAICPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAICPublicKeyResponse
       */
      Models::DeleteAICPublicKeyResponse deleteAICPublicKeyWithOptions(const Models::DeleteAICPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified AIC public key. You can delete a public key only if it is not associated with the public key.
       *
       * @param request DeleteAICPublicKeyRequest
       * @return DeleteAICPublicKeyResponse
       */
      Models::DeleteAICPublicKeyResponse deleteAICPublicKey(const Models::DeleteAICPublicKeyRequest &request);

      /**
       * @summary Releases all containers and resource instances related to a specific application in an asynchronous manner.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases all containers and resource instances related to a specific application in an asynchronous manner.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes a bucket.
       *
       * @description *   Only the Alibaba Cloud Account ID owner of a bucket can delete the bucket from the account.
       * *   You cannot delete buckets that store objects. You can only delete empty buckets.
       *
       * @param request DeleteBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBucketResponse
       */
      Models::DeleteBucketResponse deleteBucketWithOptions(const Models::DeleteBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a bucket.
       *
       * @description *   Only the Alibaba Cloud Account ID owner of a bucket can delete the bucket from the account.
       * *   You cannot delete buckets that store objects. You can only delete empty buckets.
       *
       * @param request DeleteBucketRequest
       * @return DeleteBucketResponse
       */
      Models::DeleteBucketResponse deleteBucket(const Models::DeleteBucketRequest &request);

      /**
       * @summary Deletes the lifecycle rules for objects in a bucket.
       *
       * @param request DeleteBucketLifecycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBucketLifecycleResponse
       */
      Models::DeleteBucketLifecycleResponse deleteBucketLifecycleWithOptions(const Models::DeleteBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the lifecycle rules for objects in a bucket.
       *
       * @param request DeleteBucketLifecycleRequest
       * @return DeleteBucketLifecycleResponse
       */
      Models::DeleteBucketLifecycleResponse deleteBucketLifecycle(const Models::DeleteBucketLifecycleRequest &request);

      /**
       * @summary Deletes a disk.
       *
       * @description When you release a disk, the disk must be in the Available state.
       *
       * @param request DeleteDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDiskWithOptions(const Models::DeleteDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a disk.
       *
       * @description When you release a disk, the disk must be in the Available state.
       *
       * @param request DeleteDiskRequest
       * @return DeleteDiskResponse
       */
      Models::DeleteDiskResponse deleteDisk(const Models::DeleteDiskRequest &request);

      /**
       * @summary Deletes a pay-as-you-go elastic IP address (EIP).
       *
       * @param request DeleteEipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEipResponse
       */
      Models::DeleteEipResponse deleteEipWithOptions(const Models::DeleteEipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go elastic IP address (EIP).
       *
       * @param request DeleteEipRequest
       * @return DeleteEipResponse
       */
      Models::DeleteEipResponse deleteEip(const Models::DeleteEipRequest &request);

      /**
       * @summary Deletes a custom route entry.
       *
       * @param request DeleteEnsRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnsRouteEntryResponse
       */
      Models::DeleteEnsRouteEntryResponse deleteEnsRouteEntryWithOptions(const Models::DeleteEnsRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom route entry.
       *
       * @param request DeleteEnsRouteEntryRequest
       * @return DeleteEnsRouteEntryResponse
       */
      Models::DeleteEnsRouteEntryResponse deleteEnsRouteEntry(const Models::DeleteEnsRouteEntryRequest &request);

      /**
       * @summary 删除售卖约束的条件约束
       *
       * @param tmpReq DeleteEnsSaleConditionControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnsSaleConditionControlResponse
       */
      Models::DeleteEnsSaleConditionControlResponse deleteEnsSaleConditionControlWithOptions(const Models::DeleteEnsSaleConditionControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除售卖约束的条件约束
       *
       * @param request DeleteEnsSaleConditionControlRequest
       * @return DeleteEnsSaleConditionControlResponse
       */
      Models::DeleteEnsSaleConditionControlResponse deleteEnsSaleConditionControl(const Models::DeleteEnsSaleConditionControlRequest &request);

      /**
       * @summary 删除售卖约束基础约束
       *
       * @param tmpReq DeleteEnsSaleControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEnsSaleControlResponse
       */
      Models::DeleteEnsSaleControlResponse deleteEnsSaleControlWithOptions(const Models::DeleteEnsSaleControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除售卖约束基础约束
       *
       * @param request DeleteEnsSaleControlRequest
       * @return DeleteEnsSaleControlResponse
       */
      Models::DeleteEnsSaleControlResponse deleteEnsSaleControl(const Models::DeleteEnsSaleControlRequest &request);

      /**
       * @summary Deletes an edge private network (EPN) instance.
       *
       * @description You can delete an EPN instance only when the instance group information is empty.
       *
       * @param request DeleteEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEpnInstanceResponse
       */
      Models::DeleteEpnInstanceResponse deleteEpnInstanceWithOptions(const Models::DeleteEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an edge private network (EPN) instance.
       *
       * @description You can delete an EPN instance only when the instance group information is empty.
       *
       * @param request DeleteEpnInstanceRequest
       * @return DeleteEpnInstanceResponse
       */
      Models::DeleteEpnInstanceResponse deleteEpnInstance(const Models::DeleteEpnInstanceRequest &request);

      /**
       * @summary Deletes a File Storage NAS file system.
       *
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a File Storage NAS file system.
       *
       * @param request DeleteFileSystemRequest
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystem(const Models::DeleteFileSystemRequest &request);

      /**
       * @summary Deletes a Destination Network Address Translation (DNAT) entry from a specified DNAT table.
       *
       * @param request DeleteForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntryWithOptions(const Models::DeleteForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Destination Network Address Translation (DNAT) entry from a specified DNAT table.
       *
       * @param request DeleteForwardEntryRequest
       * @return DeleteForwardEntryResponse
       */
      Models::DeleteForwardEntryResponse deleteForwardEntry(const Models::DeleteForwardEntryRequest &request);

      /**
       * @summary Deletes a high-availability VIP (HAVIP).
       *
       * @param tmpReq DeleteHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHaVipsResponse
       */
      Models::DeleteHaVipsResponse deleteHaVipsWithOptions(const Models::DeleteHaVipsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a high-availability VIP (HAVIP).
       *
       * @param request DeleteHaVipsRequest
       * @return DeleteHaVipsResponse
       */
      Models::DeleteHaVipsResponse deleteHaVips(const Models::DeleteHaVipsRequest &request);

      /**
       * @summary Deletes a custom image.
       *
       * @param request DeleteImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImageWithOptions(const Models::DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom image.
       *
       * @param request DeleteImageRequest
       * @return DeleteImageResponse
       */
      Models::DeleteImageResponse deleteImage(const Models::DeleteImageRequest &request);

      /**
       * @summary Deletes SSH key pairs.
       *
       * @description *   After you delete an SSH key pair, you can no longer query the key pair by calling the DescribeKeyPairs operation.
       * *   If you delete an SSH key pair that is bound to an Edge Node Service (ENS) instance, ENS no longer stores the SSH key pair. However, you can still use the key pair to access the instance. When you call the DescribeInstance operation to query instance information, no other information but the name of the key pair (**KeyPairName**) is returned.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes SSH key pairs.
       *
       * @description *   After you delete an SSH key pair, you can no longer query the key pair by calling the DescribeKeyPairs operation.
       * *   If you delete an SSH key pair that is bound to an Edge Node Service (ENS) instance, ENS no longer stores the SSH key pair. However, you can still use the key pair to access the instance. When you call the DescribeInstance operation to query instance information, no other information but the name of the key pair (**KeyPairName**) is returned.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListenerWithOptions(const Models::DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListener(const Models::DeleteLoadBalancerListenerRequest &request);

      /**
       * @summary Deletes a mount target.
       *
       * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTargetWithOptions(const Models::DeleteMountTargetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a mount target.
       *
       * @description After you delete a mount target, the mount target cannot be restored. Proceed with caution.
       *
       * @param request DeleteMountTargetRequest
       * @return DeleteMountTargetResponse
       */
      Models::DeleteMountTargetResponse deleteMountTarget(const Models::DeleteMountTargetRequest &request);

      /**
       * @summary Deletes an Internet network address translation (NAT) gateway.
       *
       * @param request DeleteNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGatewayWithOptions(const Models::DeleteNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Internet network address translation (NAT) gateway.
       *
       * @param request DeleteNatGatewayRequest
       * @return DeleteNatGatewayResponse
       */
      Models::DeleteNatGatewayResponse deleteNatGateway(const Models::DeleteNatGatewayRequest &request);

      /**
       * @summary Deletes a virtual private cloud (VPC).
       *
       * @param request DeleteNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkResponse
       */
      Models::DeleteNetworkResponse deleteNetworkWithOptions(const Models::DeleteNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a virtual private cloud (VPC).
       *
       * @param request DeleteNetworkRequest
       * @return DeleteNetworkResponse
       */
      Models::DeleteNetworkResponse deleteNetwork(const Models::DeleteNetworkRequest &request);

      /**
       * @summary Deletes a network access control list (ACL).
       *
       * @param request DeleteNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkAclResponse
       */
      Models::DeleteNetworkAclResponse deleteNetworkAclWithOptions(const Models::DeleteNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network access control list (ACL).
       *
       * @param request DeleteNetworkAclRequest
       * @return DeleteNetworkAclResponse
       */
      Models::DeleteNetworkAclResponse deleteNetworkAcl(const Models::DeleteNetworkAclRequest &request);

      /**
       * @summary Deletes a network access control list (ACL) rule.
       *
       * @param request DeleteNetworkAclEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkAclEntryResponse
       */
      Models::DeleteNetworkAclEntryResponse deleteNetworkAclEntryWithOptions(const Models::DeleteNetworkAclEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network access control list (ACL) rule.
       *
       * @param request DeleteNetworkAclEntryRequest
       * @return DeleteNetworkAclEntryResponse
       */
      Models::DeleteNetworkAclEntryResponse deleteNetworkAclEntry(const Models::DeleteNetworkAclEntryRequest &request);

      /**
       * @summary Deletes an elastic network interface (ENI).
       *
       * @param tmpReq DeleteNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkInterfacesResponse
       */
      Models::DeleteNetworkInterfacesResponse deleteNetworkInterfacesWithOptions(const Models::DeleteNetworkInterfacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an elastic network interface (ENI).
       *
       * @param request DeleteNetworkInterfacesRequest
       * @return DeleteNetworkInterfacesResponse
       */
      Models::DeleteNetworkInterfacesResponse deleteNetworkInterfaces(const Models::DeleteNetworkInterfacesRequest &request);

      /**
       * @summary Deletes an object.
       *
       * @param request DeleteObjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteObjectResponse
       */
      Models::DeleteObjectResponse deleteObjectWithOptions(const Models::DeleteObjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an object.
       *
       * @param request DeleteObjectRequest
       * @return DeleteObjectResponse
       */
      Models::DeleteObjectResponse deleteObject(const Models::DeleteObjectRequest &request);

      /**
       * @summary Deletes a shared data group (SDG).
       *
       * @description If all the SDGs corresponding to the original disk are deleted, the original disk is automatically cleared.
       *
       * @param tmpReq DeleteSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSDGResponse
       */
      Models::DeleteSDGResponse deleteSDGWithOptions(const Models::DeleteSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a shared data group (SDG).
       *
       * @description If all the SDGs corresponding to the original disk are deleted, the original disk is automatically cleared.
       *
       * @param request DeleteSDGRequest
       * @return DeleteSDGResponse
       */
      Models::DeleteSDGResponse deleteSDG(const Models::DeleteSDGRequest &request);

      /**
       * @summary Deletes a security group.
       *
       * @description Before you delete a security group, make sure that no instances exist in the security group.
       *
       * @param request DeleteSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroupWithOptions(const Models::DeleteSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a security group.
       *
       * @description Before you delete a security group, make sure that no instances exist in the security group.
       *
       * @param request DeleteSecurityGroupRequest
       * @return DeleteSecurityGroupResponse
       */
      Models::DeleteSecurityGroupResponse deleteSecurityGroup(const Models::DeleteSecurityGroupRequest &request);

      /**
       * @summary Deletes an ENS security group rule.
       *
       * @param tmpReq DeleteSecurityGroupPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityGroupPermissionsResponse
       */
      Models::DeleteSecurityGroupPermissionsResponse deleteSecurityGroupPermissionsWithOptions(const Models::DeleteSecurityGroupPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ENS security group rule.
       *
       * @param request DeleteSecurityGroupPermissionsRequest
       * @return DeleteSecurityGroupPermissionsResponse
       */
      Models::DeleteSecurityGroupPermissionsResponse deleteSecurityGroupPermissions(const Models::DeleteSecurityGroupPermissionsRequest &request);

      /**
       * @summary Deletes a snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshotWithOptions(const Models::DeleteSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a snapshot.
       *
       * @param request DeleteSnapshotRequest
       * @return DeleteSnapshotResponse
       */
      Models::DeleteSnapshotResponse deleteSnapshot(const Models::DeleteSnapshotRequest &request);

      /**
       * @summary Deletes a source network address translation (SNAT) entry from a specified SNAT table.
       *
       * @param request DeleteSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntryWithOptions(const Models::DeleteSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a source network address translation (SNAT) entry from a specified SNAT table.
       *
       * @param request DeleteSnatEntryRequest
       * @return DeleteSnatEntryResponse
       */
      Models::DeleteSnatEntryResponse deleteSnatEntry(const Models::DeleteSnatEntryRequest &request);

      /**
       * @summary Deletes an elastic IP address (EIP) from a source network address translation (SNAT) entry.
       *
       * @param request DeleteSnatIpForSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSnatIpForSnatEntryResponse
       */
      Models::DeleteSnatIpForSnatEntryResponse deleteSnatIpForSnatEntryWithOptions(const Models::DeleteSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an elastic IP address (EIP) from a source network address translation (SNAT) entry.
       *
       * @param request DeleteSnatIpForSnatEntryRequest
       * @return DeleteSnatIpForSnatEntryResponse
       */
      Models::DeleteSnatIpForSnatEntryResponse deleteSnatIpForSnatEntry(const Models::DeleteSnatIpForSnatEntryRequest &request);

      /**
       * @summary Deletes a storage gateway.
       *
       * @param request DeleteStorageGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStorageGatewayResponse
       */
      Models::DeleteStorageGatewayResponse deleteStorageGatewayWithOptions(const Models::DeleteStorageGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a storage gateway.
       *
       * @param request DeleteStorageGatewayRequest
       * @return DeleteStorageGatewayResponse
       */
      Models::DeleteStorageGatewayResponse deleteStorageGateway(const Models::DeleteStorageGatewayRequest &request);

      /**
       * @summary Deletes a storage volume.
       *
       * @param request DeleteStorageVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteStorageVolumeResponse
       */
      Models::DeleteStorageVolumeResponse deleteStorageVolumeWithOptions(const Models::DeleteStorageVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a storage volume.
       *
       * @param request DeleteStorageVolumeRequest
       * @return DeleteStorageVolumeResponse
       */
      Models::DeleteStorageVolumeResponse deleteStorageVolume(const Models::DeleteStorageVolumeRequest &request);

      /**
       * @summary Deletes a vSwitch.
       *
       * @description Before you delete a vSwitch, make sure that no instances exist in the vSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitchWithOptions(const Models::DeleteVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a vSwitch.
       *
       * @description Before you delete a vSwitch, make sure that no instances exist in the vSwitch.
       *
       * @param request DeleteVSwitchRequest
       * @return DeleteVSwitchResponse
       */
      Models::DeleteVSwitchResponse deleteVSwitch(const Models::DeleteVSwitchRequest &request);

      /**
       * @summary Deploys a shared data group (SDG) to compute instances.
       *
       * @param tmpReq DeployInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployInstanceSDGResponse
       */
      Models::DeployInstanceSDGResponse deployInstanceSDGWithOptions(const Models::DeployInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys a shared data group (SDG) to compute instances.
       *
       * @param request DeployInstanceSDGRequest
       * @return DeployInstanceSDGResponse
       */
      Models::DeployInstanceSDGResponse deployInstanceSDG(const Models::DeployInstanceSDGRequest &request);

      /**
       * @summary Deploys shared data groups (SDGs).
       *
       * @param tmpReq DeploySDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeploySDGResponse
       */
      Models::DeploySDGResponse deploySDGWithOptions(const Models::DeploySDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys shared data groups (SDGs).
       *
       * @param request DeploySDGRequest
       * @return DeploySDGResponse
       */
      Models::DeploySDGResponse deploySDG(const Models::DeploySDGRequest &request);

      /**
       * @summary Queries information about images of the Android in Container (AIC) instance.
       *
       * @param request DescribeAICImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAICImagesResponse
       */
      Models::DescribeAICImagesResponse describeAICImagesWithOptions(const Models::DescribeAICImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about images of the Android in Container (AIC) instance.
       *
       * @param request DescribeAICImagesRequest
       * @return DescribeAICImagesResponse
       */
      Models::DescribeAICImagesResponse describeAICImages(const Models::DescribeAICImagesRequest &request);

      /**
       * @summary Queries information about ARM servers and Android in Container (AIC) instances.
       *
       * @param tmpReq DescribeARMServerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeARMServerInstancesResponse
       */
      Models::DescribeARMServerInstancesResponse describeARMServerInstancesWithOptions(const Models::DescribeARMServerInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about ARM servers and Android in Container (AIC) instances.
       *
       * @param request DescribeARMServerInstancesRequest
       * @return DescribeARMServerInstancesResponse
       */
      Models::DescribeARMServerInstancesResponse describeARMServerInstances(const Models::DescribeARMServerInstancesRequest &request);

      /**
       * @summary Queries the basic properties, resources, and container status of an application.
       *
       * @param request DescribeApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeApplicationResponse
       */
      Models::DescribeApplicationResponse describeApplicationWithOptions(const Models::DescribeApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic properties, resources, and container status of an application.
       *
       * @param request DescribeApplicationRequest
       * @return DescribeApplicationResponse
       */
      Models::DescribeApplicationResponse describeApplication(const Models::DescribeApplicationRequest &request);

      /**
       * @summary Queries the resources that can be created.
       *
       * @param request DescribeAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that can be created.
       *
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource();

      /**
       * @summary Queries the specifications of resources that you can purchase when you create an instance.
       *
       * @param request DescribeAvailableResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceInfoResponse
       */
      Models::DescribeAvailableResourceInfoResponse describeAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of resources that you can purchase when you create an instance.
       *
       * @return DescribeAvailableResourceInfoResponse
       */
      Models::DescribeAvailableResourceInfoResponse describeAvailableResourceInfo();

      /**
       * @summary Queries available bandwidth metering methods.
       *
       * @param request DescribeBandWithdChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandWithdChargeTypeResponse
       */
      Models::DescribeBandWithdChargeTypeResponse describeBandWithdChargeTypeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available bandwidth metering methods.
       *
       * @return DescribeBandWithdChargeTypeResponse
       */
      Models::DescribeBandWithdChargeTypeResponse describeBandWithdChargeType();

      /**
       * @summary Queries the metering method for the bandwidth.
       *
       * @param request DescribeBandwitdhByInternetChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBandwitdhByInternetChargeTypeResponse
       */
      Models::DescribeBandwitdhByInternetChargeTypeResponse describeBandwitdhByInternetChargeTypeWithOptions(const Models::DescribeBandwitdhByInternetChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metering method for the bandwidth.
       *
       * @param request DescribeBandwitdhByInternetChargeTypeRequest
       * @return DescribeBandwitdhByInternetChargeTypeResponse
       */
      Models::DescribeBandwitdhByInternetChargeTypeResponse describeBandwitdhByInternetChargeType(const Models::DescribeBandwitdhByInternetChargeTypeRequest &request);

      /**
       * @summary Queries the available resources in a region.
       *
       * @param request DescribeCloudDiskAvailableResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDiskAvailableResourceInfoResponse
       */
      Models::DescribeCloudDiskAvailableResourceInfoResponse describeCloudDiskAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available resources in a region.
       *
       * @return DescribeCloudDiskAvailableResourceInfoResponse
       */
      Models::DescribeCloudDiskAvailableResourceInfoResponse describeCloudDiskAvailableResourceInfo();

      /**
       * @summary The specifications of available resources are queried when you create a disk.
       *
       * @param tmpReq DescribeCloudDiskTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudDiskTypesResponse
       */
      Models::DescribeCloudDiskTypesResponse describeCloudDiskTypesWithOptions(const Models::DescribeCloudDiskTypesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The specifications of available resources are queried when you create a disk.
       *
       * @param request DescribeCloudDiskTypesRequest
       * @return DescribeCloudDiskTypesResponse
       */
      Models::DescribeCloudDiskTypesResponse describeCloudDiskTypes(const Models::DescribeCloudDiskTypesRequest &request);

      /**
       * @summary Queries Container Service for Kubernetes (ACK) edge clusters.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResponse
       */
      Models::DescribeClusterResponse describeClusterWithOptions(const Models::DescribeClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Container Service for Kubernetes (ACK) edge clusters.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeClusterRequest
       * @return DescribeClusterResponse
       */
      Models::DescribeClusterResponse describeCluster(const Models::DescribeClusterRequest &request);

      /**
       * @summary Queries the certificate of a Container Service for Kubernetes (ACK) edge cluster.
       *
       * @description *   The maximum number of times that each user can call this operation per second is 100.
       *
       * @param request DescribeClusterKubeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterKubeConfigResponse
       */
      Models::DescribeClusterKubeConfigResponse describeClusterKubeConfigWithOptions(const Models::DescribeClusterKubeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate of a Container Service for Kubernetes (ACK) edge cluster.
       *
       * @description *   The maximum number of times that each user can call this operation per second is 100.
       *
       * @param request DescribeClusterKubeConfigRequest
       * @return DescribeClusterKubeConfigResponse
       */
      Models::DescribeClusterKubeConfigResponse describeClusterKubeConfig(const Models::DescribeClusterKubeConfigRequest &request);

      /**
       * @summary Queries a list of clusters.
       *
       * @param request DescribeClustersV1Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClustersV1Response
       */
      Models::DescribeClustersV1Response describeClustersV1WithOptions(const Models::DescribeClustersV1Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of clusters.
       *
       * @param request DescribeClustersV1Request
       * @return DescribeClustersV1Response
       */
      Models::DescribeClustersV1Response describeClustersV1(const Models::DescribeClustersV1Request &request);

      /**
       * @summary Queries the results of creating an instance.
       *
       * @param request DescribeCreatePrePaidInstanceResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCreatePrePaidInstanceResultResponse
       */
      Models::DescribeCreatePrePaidInstanceResultResponse describeCreatePrePaidInstanceResultWithOptions(const Models::DescribeCreatePrePaidInstanceResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the results of creating an instance.
       *
       * @param request DescribeCreatePrePaidInstanceResultRequest
       * @return DescribeCreatePrePaidInstanceResultResponse
       */
      Models::DescribeCreatePrePaidInstanceResultResponse describeCreatePrePaidInstanceResult(const Models::DescribeCreatePrePaidInstanceResultRequest &request);

      /**
       * @summary Queries the distribution status of data files on edge instances of an application.
       *
       * @param tmpReq DescribeDataDistResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataDistResultResponse
       */
      Models::DescribeDataDistResultResponse describeDataDistResultWithOptions(const Models::DescribeDataDistResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution status of data files on edge instances of an application.
       *
       * @param request DescribeDataDistResultRequest
       * @return DescribeDataDistResultResponse
       */
      Models::DescribeDataDistResultResponse describeDataDistResult(const Models::DescribeDataDistResultRequest &request);

      /**
       * @summary Queries the download URLs of application data on file servers and returns the file servers on which data is pushed.
       *
       * @param request DescribeDataDownloadURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataDownloadURLResponse
       */
      Models::DescribeDataDownloadURLResponse describeDataDownloadURLWithOptions(const Models::DescribeDataDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the download URLs of application data on file servers and returns the file servers on which data is pushed.
       *
       * @param request DescribeDataDownloadURLRequest
       * @return DescribeDataDownloadURLResponse
       */
      Models::DescribeDataDownloadURLResponse describeDataDownloadURL(const Models::DescribeDataDownloadURLRequest &request);

      /**
       * @summary Queries the push status of application data files on Edge Node Service (ENS) nodes.
       *
       * @param request DescribeDataPushResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataPushResultResponse
       */
      Models::DescribeDataPushResultResponse describeDataPushResultWithOptions(const Models::DescribeDataPushResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the push status of application data files on Edge Node Service (ENS) nodes.
       *
       * @param request DescribeDataPushResultRequest
       * @return DescribeDataPushResultResponse
       */
      Models::DescribeDataPushResultResponse describeDataPushResult(const Models::DescribeDataPushResultRequest &request);

      /**
       * @summary Queries the properties of instances and virtual devices in a specific edge application.
       *
       * @param request DescribeDeviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceServiceResponse
       */
      Models::DescribeDeviceServiceResponse describeDeviceServiceWithOptions(const Models::DescribeDeviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the properties of instances and virtual devices in a specific edge application.
       *
       * @param request DescribeDeviceServiceRequest
       * @return DescribeDeviceServiceResponse
       */
      Models::DescribeDeviceServiceResponse describeDeviceService(const Models::DescribeDeviceServiceRequest &request);

      /**
       * @summary Queries the disk IOPS monitoring data.
       *
       * @param request DescribeDiskIopsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskIopsListResponse
       */
      Models::DescribeDiskIopsListResponse describeDiskIopsListWithOptions(const Models::DescribeDiskIopsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the disk IOPS monitoring data.
       *
       * @param request DescribeDiskIopsListRequest
       * @return DescribeDiskIopsListResponse
       */
      Models::DescribeDiskIopsListResponse describeDiskIopsList(const Models::DescribeDiskIopsListRequest &request);

      /**
       * @summary Queries the information about one or more disks.
       *
       * @param request DescribeDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisksWithOptions(const Models::DescribeDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more disks.
       *
       * @param request DescribeDisksRequest
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisks(const Models::DescribeDisksRequest &request);

      /**
       * @summary Queries the specifications of resources that you can purchase when you create an instance.
       *
       * @param request DescribeElbAvailableResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElbAvailableResourceInfoResponse
       */
      Models::DescribeElbAvailableResourceInfoResponse describeElbAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of resources that you can purchase when you create an instance.
       *
       * @return DescribeElbAvailableResourceInfoResponse
       */
      Models::DescribeElbAvailableResourceInfoResponse describeElbAvailableResourceInfo();

      /**
       * @summary 描述商品code
       *
       * @param request DescribeEnsCommodityCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsCommodityCodeResponse
       */
      Models::DescribeEnsCommodityCodeResponse describeEnsCommodityCodeWithOptions(const Models::DescribeEnsCommodityCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 描述商品code
       *
       * @param request DescribeEnsCommodityCodeRequest
       * @return DescribeEnsCommodityCodeResponse
       */
      Models::DescribeEnsCommodityCodeResponse describeEnsCommodityCode(const Models::DescribeEnsCommodityCodeRequest &request);

      /**
       * @summary 获取模块code
       *
       * @param request DescribeEnsCommodityModuleCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsCommodityModuleCodeResponse
       */
      Models::DescribeEnsCommodityModuleCodeResponse describeEnsCommodityModuleCodeWithOptions(const Models::DescribeEnsCommodityModuleCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模块code
       *
       * @param request DescribeEnsCommodityModuleCodeRequest
       * @return DescribeEnsCommodityModuleCodeResponse
       */
      Models::DescribeEnsCommodityModuleCodeResponse describeEnsCommodityModuleCode(const Models::DescribeEnsCommodityModuleCodeRequest &request);

      /**
       * @summary Queries elastic IP addresses (EIPs).
       *
       * @param request DescribeEnsEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsEipAddressesResponse
       */
      Models::DescribeEnsEipAddressesResponse describeEnsEipAddressesWithOptions(const Models::DescribeEnsEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic IP addresses (EIPs).
       *
       * @param request DescribeEnsEipAddressesRequest
       * @return DescribeEnsEipAddressesResponse
       */
      Models::DescribeEnsEipAddressesResponse describeEnsEipAddresses(const Models::DescribeEnsEipAddressesRequest &request);

      /**
       * @summary Queries regions in which ENS resources can be created.
       *
       * @param request DescribeEnsNetDistrictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsNetDistrictResponse
       */
      Models::DescribeEnsNetDistrictResponse describeEnsNetDistrictWithOptions(const Models::DescribeEnsNetDistrictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regions in which ENS resources can be created.
       *
       * @param request DescribeEnsNetDistrictRequest
       * @return DescribeEnsNetDistrictResponse
       */
      Models::DescribeEnsNetDistrictResponse describeEnsNetDistrict(const Models::DescribeEnsNetDistrictRequest &request);

      /**
       * @summary Queries the supported network levels.
       *
       * @param request DescribeEnsNetLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsNetLevelResponse
       */
      Models::DescribeEnsNetLevelResponse describeEnsNetLevelWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported network levels.
       *
       * @return DescribeEnsNetLevelResponse
       */
      Models::DescribeEnsNetLevelResponse describeEnsNetLevel();

      /**
       * @summary Queries the information about ISPs and number of ISPs in an area.
       *
       * @param request DescribeEnsNetSaleDistrictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsNetSaleDistrictResponse
       */
      Models::DescribeEnsNetSaleDistrictResponse describeEnsNetSaleDistrictWithOptions(const Models::DescribeEnsNetSaleDistrictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about ISPs and number of ISPs in an area.
       *
       * @param request DescribeEnsNetSaleDistrictRequest
       * @return DescribeEnsNetSaleDistrictResponse
       */
      Models::DescribeEnsNetSaleDistrictResponse describeEnsNetSaleDistrict(const Models::DescribeEnsNetSaleDistrictRequest &request);

      /**
       * @summary Queries whether a node supports IPv6.
       *
       * @param request DescribeEnsRegionIdIpv6InfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRegionIdIpv6InfoResponse
       */
      Models::DescribeEnsRegionIdIpv6InfoResponse describeEnsRegionIdIpv6InfoWithOptions(const Models::DescribeEnsRegionIdIpv6InfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a node supports IPv6.
       *
       * @param request DescribeEnsRegionIdIpv6InfoRequest
       * @return DescribeEnsRegionIdIpv6InfoResponse
       */
      Models::DescribeEnsRegionIdIpv6InfoResponse describeEnsRegionIdIpv6Info(const Models::DescribeEnsRegionIdIpv6InfoRequest &request);

      /**
       * @summary Queries node resources.
       *
       * @description ****
       *
       * @param request DescribeEnsRegionIdResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRegionIdResourceResponse
       */
      Models::DescribeEnsRegionIdResourceResponse describeEnsRegionIdResourceWithOptions(const Models::DescribeEnsRegionIdResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries node resources.
       *
       * @description ****
       *
       * @param request DescribeEnsRegionIdResourceRequest
       * @return DescribeEnsRegionIdResourceResponse
       */
      Models::DescribeEnsRegionIdResourceResponse describeEnsRegionIdResource(const Models::DescribeEnsRegionIdResourceRequest &request);

      /**
       * @summary Queries the Edge Node Service (ENS) nodes that you can use.
       *
       * @param request DescribeEnsRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRegionsResponse
       */
      Models::DescribeEnsRegionsResponse describeEnsRegionsWithOptions(const Models::DescribeEnsRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Edge Node Service (ENS) nodes that you can use.
       *
       * @param request DescribeEnsRegionsRequest
       * @return DescribeEnsRegionsResponse
       */
      Models::DescribeEnsRegionsResponse describeEnsRegions(const Models::DescribeEnsRegionsRequest &request);

      /**
       * @summary Queries the usage summary of ENS virtual machines (VMs), disks, and networks.
       *
       * @param request DescribeEnsResourceUsageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsResourceUsageResponse
       */
      Models::DescribeEnsResourceUsageResponse describeEnsResourceUsageWithOptions(const Models::DescribeEnsResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage summary of ENS virtual machines (VMs), disks, and networks.
       *
       * @param request DescribeEnsResourceUsageRequest
       * @return DescribeEnsResourceUsageResponse
       */
      Models::DescribeEnsResourceUsageResponse describeEnsResourceUsage(const Models::DescribeEnsResourceUsageRequest &request);

      /**
       * @summary Queries route entries.
       *
       * @param request DescribeEnsRouteEntryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRouteEntryListResponse
       */
      Models::DescribeEnsRouteEntryListResponse describeEnsRouteEntryListWithOptions(const Models::DescribeEnsRouteEntryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route entries.
       *
       * @param request DescribeEnsRouteEntryListRequest
       * @return DescribeEnsRouteEntryListResponse
       */
      Models::DescribeEnsRouteEntryListResponse describeEnsRouteEntryList(const Models::DescribeEnsRouteEntryListRequest &request);

      /**
       * @summary Queries route tables.
       *
       * @param request DescribeEnsRouteTablesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRouteTablesResponse
       */
      Models::DescribeEnsRouteTablesResponse describeEnsRouteTablesWithOptions(const Models::DescribeEnsRouteTablesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route tables.
       *
       * @param request DescribeEnsRouteTablesRequest
       * @return DescribeEnsRouteTablesResponse
       */
      Models::DescribeEnsRouteTablesResponse describeEnsRouteTables(const Models::DescribeEnsRouteTablesRequest &request);

      /**
       * @summary 展示配置的售卖约束信息
       *
       * @param request DescribeEnsSaleControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsSaleControlResponse
       */
      Models::DescribeEnsSaleControlResponse describeEnsSaleControlWithOptions(const Models::DescribeEnsSaleControlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 展示配置的售卖约束信息
       *
       * @param request DescribeEnsSaleControlRequest
       * @return DescribeEnsSaleControlResponse
       */
      Models::DescribeEnsSaleControlResponse describeEnsSaleControl(const Models::DescribeEnsSaleControlRequest &request);

      /**
       * @summary 获取可用资源
       *
       * @param request DescribeEnsSaleControlAvailableResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsSaleControlAvailableResourceResponse
       */
      Models::DescribeEnsSaleControlAvailableResourceResponse describeEnsSaleControlAvailableResourceWithOptions(const Models::DescribeEnsSaleControlAvailableResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取可用资源
       *
       * @param request DescribeEnsSaleControlAvailableResourceRequest
       * @return DescribeEnsSaleControlAvailableResourceResponse
       */
      Models::DescribeEnsSaleControlAvailableResourceResponse describeEnsSaleControlAvailableResource(const Models::DescribeEnsSaleControlAvailableResourceRequest &request);

      /**
       * @summary 获取售卖约束库存
       *
       * @param request DescribeEnsSaleControlStockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsSaleControlStockResponse
       */
      Models::DescribeEnsSaleControlStockResponse describeEnsSaleControlStockWithOptions(const Models::DescribeEnsSaleControlStockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取售卖约束库存
       *
       * @param request DescribeEnsSaleControlStockRequest
       * @return DescribeEnsSaleControlStockResponse
       */
      Models::DescribeEnsSaleControlStockResponse describeEnsSaleControlStock(const Models::DescribeEnsSaleControlStockRequest &request);

      /**
       * @summary Queries the EPN bandwidth usage.
       *
       * @param request DescribeEpnBandWidthDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEpnBandWidthDataResponse
       */
      Models::DescribeEpnBandWidthDataResponse describeEpnBandWidthDataWithOptions(const Models::DescribeEpnBandWidthDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the EPN bandwidth usage.
       *
       * @param request DescribeEpnBandWidthDataRequest
       * @return DescribeEpnBandWidthDataResponse
       */
      Models::DescribeEpnBandWidthDataResponse describeEpnBandWidthData(const Models::DescribeEpnBandWidthDataRequest &request);

      /**
       * @summary Queries the metering method of the EPN bandwidth within a time period.
       *
       * @param request DescribeEpnBandwitdhByInternetChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEpnBandwitdhByInternetChargeTypeResponse
       */
      Models::DescribeEpnBandwitdhByInternetChargeTypeResponse describeEpnBandwitdhByInternetChargeTypeWithOptions(const Models::DescribeEpnBandwitdhByInternetChargeTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metering method of the EPN bandwidth within a time period.
       *
       * @param request DescribeEpnBandwitdhByInternetChargeTypeRequest
       * @return DescribeEpnBandwitdhByInternetChargeTypeResponse
       */
      Models::DescribeEpnBandwitdhByInternetChargeTypeResponse describeEpnBandwitdhByInternetChargeType(const Models::DescribeEpnBandwitdhByInternetChargeTypeRequest &request);

      /**
       * @summary Queries networking information about an EPN instance.
       *
       * @description In internal networking mode, the value of Instances is empty in the response. In public networking mode, the value of VSwitches is empty in the response.
       *
       * @param request DescribeEpnInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEpnInstanceAttributeResponse
       */
      Models::DescribeEpnInstanceAttributeResponse describeEpnInstanceAttributeWithOptions(const Models::DescribeEpnInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries networking information about an EPN instance.
       *
       * @description In internal networking mode, the value of Instances is empty in the response. In public networking mode, the value of VSwitches is empty in the response.
       *
       * @param request DescribeEpnInstanceAttributeRequest
       * @return DescribeEpnInstanceAttributeResponse
       */
      Models::DescribeEpnInstanceAttributeResponse describeEpnInstanceAttribute(const Models::DescribeEpnInstanceAttributeRequest &request);

      /**
       * @summary Queries EPN instances.
       *
       * @param request DescribeEpnInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEpnInstancesResponse
       */
      Models::DescribeEpnInstancesResponse describeEpnInstancesWithOptions(const Models::DescribeEpnInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries EPN instances.
       *
       * @param request DescribeEpnInstancesRequest
       * @return DescribeEpnInstancesResponse
       */
      Models::DescribeEpnInstancesResponse describeEpnInstances(const Models::DescribeEpnInstancesRequest &request);

      /**
       * @summary Queries the metering data of the edge private network (EPN).
       *
       * @param request DescribeEpnMeasurementDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEpnMeasurementDataResponse
       */
      Models::DescribeEpnMeasurementDataResponse describeEpnMeasurementDataWithOptions(const Models::DescribeEpnMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metering data of the edge private network (EPN).
       *
       * @param request DescribeEpnMeasurementDataRequest
       * @return DescribeEpnMeasurementDataResponse
       */
      Models::DescribeEpnMeasurementDataResponse describeEpnMeasurementData(const Models::DescribeEpnMeasurementDataRequest &request);

      /**
       * @summary Queries the export result of an image.
       *
       * @description *   You can call this operation to query information about all custom images in your account. The information include the image properties, image export status, and the Object Storage Service (OSS) download links.
       * *   Empty strings are returned for images that are not exported.
       * *   The download links may become invalid if you delete objects in OSS.
       *
       * @param request DescribeExportImageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportImageInfoResponse
       */
      Models::DescribeExportImageInfoResponse describeExportImageInfoWithOptions(const Models::DescribeExportImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export result of an image.
       *
       * @description *   You can call this operation to query information about all custom images in your account. The information include the image properties, image export status, and the Object Storage Service (OSS) download links.
       * *   Empty strings are returned for images that are not exported.
       * *   The download links may become invalid if you delete objects in OSS.
       *
       * @param request DescribeExportImageInfoRequest
       * @return DescribeExportImageInfoResponse
       */
      Models::DescribeExportImageInfoResponse describeExportImageInfo(const Models::DescribeExportImageInfoRequest &request);

      /**
       * @summary Queries the export status of an image.
       *
       * @param request DescribeExportImageStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportImageStatusResponse
       */
      Models::DescribeExportImageStatusResponse describeExportImageStatusWithOptions(const Models::DescribeExportImageStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export status of an image.
       *
       * @param request DescribeExportImageStatusRequest
       * @return DescribeExportImageStatusResponse
       */
      Models::DescribeExportImageStatusResponse describeExportImageStatus(const Models::DescribeExportImageStatusRequest &request);

      /**
       * @summary Queries the information about file systems.
       *
       * @param request DescribeFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystemsWithOptions(const Models::DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about file systems.
       *
       * @param request DescribeFileSystemsRequest
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystems(const Models::DescribeFileSystemsRequest &request);

      /**
       * @summary You can call the DescribeForwardEntryAttribute operation to query the details of a DNAT rule.
       *
       * @param request DescribeForwardEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardEntryAttributeResponse
       */
      Models::DescribeForwardEntryAttributeResponse describeForwardEntryAttributeWithOptions(const Models::DescribeForwardEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeForwardEntryAttribute operation to query the details of a DNAT rule.
       *
       * @param request DescribeForwardEntryAttributeRequest
       * @return DescribeForwardEntryAttributeResponse
       */
      Models::DescribeForwardEntryAttributeResponse describeForwardEntryAttribute(const Models::DescribeForwardEntryAttributeRequest &request);

      /**
       * @summary Queries Destination Network Address Translation (DNAT) entries that you created.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntriesWithOptions(const Models::DescribeForwardTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Destination Network Address Translation (DNAT) entries that you created.
       *
       * @param request DescribeForwardTableEntriesRequest
       * @return DescribeForwardTableEntriesResponse
       */
      Models::DescribeForwardTableEntriesResponse describeForwardTableEntries(const Models::DescribeForwardTableEntriesRequest &request);

      /**
       * @summary Queries high-availability virtual IP addresses (HAVIPs).
       *
       * @param request DescribeHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVipsWithOptions(const Models::DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries high-availability virtual IP addresses (HAVIPs).
       *
       * @param request DescribeHaVipsRequest
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVips(const Models::DescribeHaVipsRequest &request);

      /**
       * @summary Queries instance system events.
       *
       * @description *   You must specify an event type to query. You can query multiple event types at the same time.
       *
       * @param tmpReq DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance system events.
       *
       * @description *   You must specify an event type to query. You can query multiple event types at the same time.
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Queries available images.
       *
       * @param request DescribeImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageInfosResponse
       */
      Models::DescribeImageInfosResponse describeImageInfosWithOptions(const Models::DescribeImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available images.
       *
       * @param request DescribeImageInfosRequest
       * @return DescribeImageInfosResponse
       */
      Models::DescribeImageInfosResponse describeImageInfos(const Models::DescribeImageInfosRequest &request);

      /**
       * @summary Queries the accounts with which you share an image specified by the ImageId parameter.
       *
       * @param request DescribeImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermissionWithOptions(const Models::DescribeImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accounts with which you share an image specified by the ImageId parameter.
       *
       * @param request DescribeImageSharePermissionRequest
       * @return DescribeImageSharePermissionResponse
       */
      Models::DescribeImageSharePermissionResponse describeImageSharePermission(const Models::DescribeImageSharePermissionRequest &request);

      /**
       * @summary Queries available images.
       *
       * @param request DescribeImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImagesWithOptions(const Models::DescribeImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available images.
       *
       * @param request DescribeImagesRequest
       * @return DescribeImagesResponse
       */
      Models::DescribeImagesResponse describeImages(const Models::DescribeImagesRequest &request);

      /**
       * @summary You can call this operation to query whether auto-renewal is enabled for an instance.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttributeWithOptions(const Models::DescribeInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query whether auto-renewal is enabled for an instance.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttribute(const Models::DescribeInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the detailed bandwidth data of an instance, which is collected every 5 minutes.
       *
       * @description *   You can call this operation up to 800 times per second per account.
       * *   You can call this operation up to 100 times per second per user.
       * *   You can specify multiple request parameters to filter query results. Specified request parameters have logical AND relations. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, this parameter is regarded as a valid filter condition and an empty result is returned.
       *
       * @param request DescribeInstanceBandwidthDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceBandwidthDetailResponse
       */
      Models::DescribeInstanceBandwidthDetailResponse describeInstanceBandwidthDetailWithOptions(const Models::DescribeInstanceBandwidthDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed bandwidth data of an instance, which is collected every 5 minutes.
       *
       * @description *   You can call this operation up to 800 times per second per account.
       * *   You can call this operation up to 100 times per second per user.
       * *   You can specify multiple request parameters to filter query results. Specified request parameters have logical AND relations. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, this parameter is regarded as a valid filter condition and an empty result is returned.
       *
       * @param request DescribeInstanceBandwidthDetailRequest
       * @return DescribeInstanceBandwidthDetailResponse
       */
      Models::DescribeInstanceBandwidthDetailResponse describeInstanceBandwidthDetail(const Models::DescribeInstanceBandwidthDetailRequest &request);

      /**
       * @summary Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
       *
       * @description Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
       *
       * @param request DescribeInstanceBootConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceBootConfigurationResponse
       */
      Models::DescribeInstanceBootConfigurationResponse describeInstanceBootConfigurationWithOptions(const Models::DescribeInstanceBootConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
       *
       * @description Queries the boot configuration of a heterogeneous PC Farm bare metal instance.
       *
       * @param request DescribeInstanceBootConfigurationRequest
       * @return DescribeInstanceBootConfigurationResponse
       */
      Models::DescribeInstanceBootConfigurationResponse describeInstanceBootConfiguration(const Models::DescribeInstanceBootConfigurationRequest &request);

      /**
       * @summary Queries the vCPU and memory usage of an instance.
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorDataWithOptions(const Models::DescribeInstanceMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the vCPU and memory usage of an instance.
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorData(const Models::DescribeInstanceMonitorDataRequest &request);

      /**
       * @summary Queries shared data groups (SDGs) that are mounted to an Android in Container (AIC) instance.
       *
       * @param tmpReq DescribeInstanceSDGStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSDGStatusResponse
       */
      Models::DescribeInstanceSDGStatusResponse describeInstanceSDGStatusWithOptions(const Models::DescribeInstanceSDGStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries shared data groups (SDGs) that are mounted to an Android in Container (AIC) instance.
       *
       * @param request DescribeInstanceSDGStatusRequest
       * @return DescribeInstanceSDGStatusResponse
       */
      Models::DescribeInstanceSDGStatusResponse describeInstanceSDGStatus(const Models::DescribeInstanceSDGStatusRequest &request);

      /**
       * @summary Queries the instance specifications that you can purchase.
       *
       * @param request DescribeInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSpecResponse
       */
      Models::DescribeInstanceSpecResponse describeInstanceSpecWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance specifications that you can purchase.
       *
       * @return DescribeInstanceSpecResponse
       */
      Models::DescribeInstanceSpecResponse describeInstanceSpec();

      /**
       * @summary Queries the specifications of instance types.
       *
       * @param request DescribeInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of instance types.
       *
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypes();

      /**
       * @summary Queries the Virtual Network Computing (VNC) URL of an Edge Node Service (ENS) instance.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrlWithOptions(const Models::DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Virtual Network Computing (VNC) URL of an Edge Node Service (ENS) instance.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrl(const Models::DescribeInstanceVncUrlRequest &request);

      /**
       * @summary You can call this operation to view the details of one or more instances.
       *
       * @description *   You can call this operation up to 800 times per second per account.
       * *   You can call this operation up to 100 times per second per user.
       * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, it is regarded as a valid filter condition and an empty result is returned.
       *
       * @param tmpReq DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to view the details of one or more instances.
       *
       * @description *   You can call this operation up to 800 times per second per account.
       * *   You can call this operation up to 100 times per second per user.
       * *   You can specify multiple request parameters to be queried. Specified parameters are evaluated by using the AND operator. Only the specified parameters are included in the filter conditions. However, if InstanceIds is set to an empty JSON array, it is regarded as a valid filter condition and an empty result is returned.
       *
       * @param request DescribeInstancesRequest
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstances(const Models::DescribeInstancesRequest &request);

      /**
       * @summary Queries one or more key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairsWithOptions(const Models::DescribeKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more key pairs.
       *
       * @param request DescribeKeyPairsRequest
       * @return DescribeKeyPairsResponse
       */
      Models::DescribeKeyPairsResponse describeKeyPairs(const Models::DescribeKeyPairsRequest &request);

      /**
       * @summary Queries detailed information about an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttributeWithOptions(const Models::DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries detailed information about an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttribute(const Models::DescribeLoadBalancerAttributeRequest &request);

      /**
       * @summary Queries the configuration of an HTTP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an HTTP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttribute(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request);

      /**
       * @summary Queries the configurations of an HTTPS listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an HTTPS listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttribute(const Models::DescribeLoadBalancerHTTPSListenerAttributeRequest &request);

      /**
       * @summary Queries monitoring data of an edge load balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerListenMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerListenMonitorResponse
       */
      Models::DescribeLoadBalancerListenMonitorResponse describeLoadBalancerListenMonitorWithOptions(const Models::DescribeLoadBalancerListenMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring data of an edge load balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerListenMonitorRequest
       * @return DescribeLoadBalancerListenMonitorResponse
       */
      Models::DescribeLoadBalancerListenMonitorResponse describeLoadBalancerListenMonitor(const Models::DescribeLoadBalancerListenMonitorRequest &request);

      /**
       * @summary Queries listeners of Edge Load Balancer (ELB) instances.
       *
       * @param request DescribeLoadBalancerListenersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerListenersResponse
       */
      Models::DescribeLoadBalancerListenersResponse describeLoadBalancerListenersWithOptions(const Models::DescribeLoadBalancerListenersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries listeners of Edge Load Balancer (ELB) instances.
       *
       * @param request DescribeLoadBalancerListenersRequest
       * @return DescribeLoadBalancerListenersResponse
       */
      Models::DescribeLoadBalancerListenersResponse describeLoadBalancerListeners(const Models::DescribeLoadBalancerListenersRequest &request);

      /**
       * @summary Queries the specifications of an Edge Load Balancer (ELB) instance.
       *
       * @param request DescribeLoadBalancerSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerSpecResponse
       */
      Models::DescribeLoadBalancerSpecResponse describeLoadBalancerSpecWithOptions(const Models::DescribeLoadBalancerSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of an Edge Load Balancer (ELB) instance.
       *
       * @param request DescribeLoadBalancerSpecRequest
       * @return DescribeLoadBalancerSpecResponse
       */
      Models::DescribeLoadBalancerSpecResponse describeLoadBalancerSpec(const Models::DescribeLoadBalancerSpecRequest &request);

      /**
       * @summary Queries the configurations of a Transmission Control Protocol (TCP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttributeWithOptions(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a Transmission Control Protocol (TCP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttribute(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request);

      /**
       * @summary Queries the configuration of a User Datagram Protocol (UDP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerUDPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerUDPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttributeWithOptions(const Models::DescribeLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a User Datagram Protocol (UDP) listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerUDPListenerAttributeRequest
       * @return DescribeLoadBalancerUDPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttribute(const Models::DescribeLoadBalancerUDPListenerAttributeRequest &request);

      /**
       * @summary Queries the Edge Load Balance (ELB) instances that you have created.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancersWithOptions(const Models::DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Edge Load Balance (ELB) instances that you have created.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancersRequest
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancers(const Models::DescribeLoadBalancersRequest &request);

      /**
       * @summary Queries the metering data of the user.
       *
       * @param request DescribeMeasurementDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeasurementDataResponse
       */
      Models::DescribeMeasurementDataResponse describeMeasurementDataWithOptions(const Models::DescribeMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metering data of the user.
       *
       * @param request DescribeMeasurementDataRequest
       * @return DescribeMeasurementDataResponse
       */
      Models::DescribeMeasurementDataResponse describeMeasurementData(const Models::DescribeMeasurementDataRequest &request);

      /**
       * @summary Queries the information about mount targets.
       *
       * @param request DescribeMountTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargetsWithOptions(const Models::DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about mount targets.
       *
       * @param request DescribeMountTargetsRequest
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargets(const Models::DescribeMountTargetsRequest &request);

      /**
       * @summary Queries the specifications of resources that you can purchase when you create a NAS.
       *
       * @param request DescribeNASAvailableResourceInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNASAvailableResourceInfoResponse
       */
      Models::DescribeNASAvailableResourceInfoResponse describeNASAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of resources that you can purchase when you create a NAS.
       *
       * @return DescribeNASAvailableResourceInfoResponse
       */
      Models::DescribeNASAvailableResourceInfoResponse describeNASAvailableResourceInfo();

      /**
       * @summary 根据筛选条件获取指定NC属性和资源量信息
       *
       * @param request DescribeNCInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNCInformationResponse
       */
      Models::DescribeNCInformationResponse describeNCInformationWithOptions(const Models::DescribeNCInformationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据筛选条件获取指定NC属性和资源量信息
       *
       * @param request DescribeNCInformationRequest
       * @return DescribeNCInformationResponse
       */
      Models::DescribeNCInformationResponse describeNCInformation(const Models::DescribeNCInformationRequest &request);

      /**
       * @summary Queries created Network Address Translation (NAT) gateways.
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created Network Address Translation (NAT) gateways.
       *
       * @param request DescribeNatGatewaysRequest
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGateways(const Models::DescribeNatGatewaysRequest &request);

      /**
       * @summary Queries network access control lists (ACLs).
       *
       * @param request DescribeNetworkAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAclsWithOptions(const Models::DescribeNetworkAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network access control lists (ACLs).
       *
       * @param request DescribeNetworkAclsRequest
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAcls(const Models::DescribeNetworkAclsRequest &request);

      /**
       * @summary Queries the configuration of a specified network.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeNetworkAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAttributeResponse
       */
      Models::DescribeNetworkAttributeResponse describeNetworkAttributeWithOptions(const Models::DescribeNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of a specified network.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeNetworkAttributeRequest
       * @return DescribeNetworkAttributeResponse
       */
      Models::DescribeNetworkAttributeResponse describeNetworkAttribute(const Models::DescribeNetworkAttributeRequest &request);

      /**
       * @summary Queries Elastic Network Interfaces (ENIs).
       *
       * @param request DescribeNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfacesWithOptions(const Models::DescribeNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Elastic Network Interfaces (ENIs).
       *
       * @param request DescribeNetworkInterfacesRequest
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfaces(const Models::DescribeNetworkInterfacesRequest &request);

      /**
       * @summary Query the network list.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworksResponse
       */
      Models::DescribeNetworksResponse describeNetworksWithOptions(const Models::DescribeNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the network list.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeNetworksRequest
       * @return DescribeNetworksResponse
       */
      Models::DescribeNetworksResponse describeNetworks(const Models::DescribeNetworksRequest &request);

      /**
       * @summary Queries the specifications of resources that can be purchased in subscription billing mode.
       *
       * @param request DescribePrePaidInstanceStockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePrePaidInstanceStockResponse
       */
      Models::DescribePrePaidInstanceStockResponse describePrePaidInstanceStockWithOptions(const Models::DescribePrePaidInstanceStockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of resources that can be purchased in subscription billing mode.
       *
       * @param request DescribePrePaidInstanceStockRequest
       * @return DescribePrePaidInstanceStockResponse
       */
      Models::DescribePrePaidInstanceStockResponse describePrePaidInstanceStock(const Models::DescribePrePaidInstanceStockRequest &request);

      /**
       * @summary Queries the most recent price of an Edge Node Service (ENS) instance.
       *
       * @param tmpReq DescribePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePriceWithOptions(const Models::DescribePriceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the most recent price of an Edge Node Service (ENS) instance.
       *
       * @param request DescribePriceRequest
       * @return DescribePriceResponse
       */
      Models::DescribePriceResponse describePrice(const Models::DescribePriceRequest &request);

      /**
       * @summary Queries information about the Internet service providers (ISPs) of edge nodes.
       *
       * @param request DescribeRegionIspsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionIspsResponse
       */
      Models::DescribeRegionIspsResponse describeRegionIspsWithOptions(const Models::DescribeRegionIspsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the Internet service providers (ISPs) of edge nodes.
       *
       * @param request DescribeRegionIspsRequest
       * @return DescribeRegionIspsResponse
       */
      Models::DescribeRegionIspsResponse describeRegionIsps(const Models::DescribeRegionIspsRequest &request);

      /**
       * @summary 获取区域节点资源量信息
       *
       * @param request DescribeRegionResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionResourceResponse
       */
      Models::DescribeRegionResourceResponse describeRegionResourceWithOptions(const Models::DescribeRegionResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取区域节点资源量信息
       *
       * @param request DescribeRegionResourceRequest
       * @return DescribeRegionResourceResponse
       */
      Models::DescribeRegionResourceResponse describeRegionResource(const Models::DescribeRegionResourceRequest &request);

      /**
       * @summary Queries the specifications of resources that you can purchase.
       *
       * @param request DescribeReservedResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeReservedResourceResponse
       */
      Models::DescribeReservedResourceResponse describeReservedResourceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of resources that you can purchase.
       *
       * @return DescribeReservedResourceResponse
       */
      Models::DescribeReservedResourceResponse describeReservedResource();

      /**
       * @summary 获取资源状态变化时间线
       *
       * @param request DescribeResourceTimelineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceTimelineResponse
       */
      Models::DescribeResourceTimelineResponse describeResourceTimelineWithOptions(const Models::DescribeResourceTimelineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取资源状态变化时间线
       *
       * @param request DescribeResourceTimelineRequest
       * @return DescribeResourceTimelineResponse
       */
      Models::DescribeResourceTimelineResponse describeResourceTimeline(const Models::DescribeResourceTimelineRequest &request);

      /**
       * @summary Queries basic information about shared data groups (SDGs), including node preload information.
       *
       * @param tmpReq DescribeSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGResponse
       */
      Models::DescribeSDGResponse describeSDGWithOptions(const Models::DescribeSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic information about shared data groups (SDGs), including node preload information.
       *
       * @param request DescribeSDGRequest
       * @return DescribeSDGResponse
       */
      Models::DescribeSDGResponse describeSDG(const Models::DescribeSDGRequest &request);

      /**
       * @summary Queries the deployment status of the shared data group (SDG).
       *
       * @param tmpReq DescribeSDGDeploymentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGDeploymentStatusResponse
       */
      Models::DescribeSDGDeploymentStatusResponse describeSDGDeploymentStatusWithOptions(const Models::DescribeSDGDeploymentStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment status of the shared data group (SDG).
       *
       * @param request DescribeSDGDeploymentStatusRequest
       * @return DescribeSDGDeploymentStatusResponse
       */
      Models::DescribeSDGDeploymentStatusResponse describeSDGDeploymentStatus(const Models::DescribeSDGDeploymentStatusRequest &request);

      /**
       * @summary You can query the information of shared disks in a specified SDG.
       *
       * @param request DescribeSDGSharedDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGSharedDisksResponse
       */
      Models::DescribeSDGSharedDisksResponse describeSDGSharedDisksWithOptions(const Models::DescribeSDGSharedDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can query the information of shared disks in a specified SDG.
       *
       * @param request DescribeSDGSharedDisksRequest
       * @return DescribeSDGSharedDisksResponse
       */
      Models::DescribeSDGSharedDisksResponse describeSDGSharedDisks(const Models::DescribeSDGSharedDisksRequest &request);

      /**
       * @summary Queries information about created shared data groups (SDGs).
       *
       * @param tmpReq DescribeSDGsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGsResponse
       */
      Models::DescribeSDGsResponse describeSDGsWithOptions(const Models::DescribeSDGsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about created shared data groups (SDGs).
       *
       * @param request DescribeSDGsRequest
       * @return DescribeSDGsResponse
       */
      Models::DescribeSDGsResponse describeSDGs(const Models::DescribeSDGsRequest &request);

      /**
       * @summary Queries created secondary public IP addresses.
       *
       * @param request DescribeSecondaryPublicIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecondaryPublicIpAddressesResponse
       */
      Models::DescribeSecondaryPublicIpAddressesResponse describeSecondaryPublicIpAddressesWithOptions(const Models::DescribeSecondaryPublicIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created secondary public IP addresses.
       *
       * @param request DescribeSecondaryPublicIpAddressesRequest
       * @return DescribeSecondaryPublicIpAddressesResponse
       */
      Models::DescribeSecondaryPublicIpAddressesResponse describeSecondaryPublicIpAddresses(const Models::DescribeSecondaryPublicIpAddressesRequest &request);

      /**
       * @summary Queries the rules of a security group.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttributeWithOptions(const Models::DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the rules of a security group.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttribute(const Models::DescribeSecurityGroupAttributeRequest &request);

      /**
       * @summary Queries details about created security groups.
       *
       * @param request DescribeSecurityGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroupsWithOptions(const Models::DescribeSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about created security groups.
       *
       * @param request DescribeSecurityGroupsRequest
       * @return DescribeSecurityGroupsResponse
       */
      Models::DescribeSecurityGroupsResponse describeSecurityGroups(const Models::DescribeSecurityGroupsRequest &request);

      /**
       * @summary Queries custom images.
       *
       * @param request DescribeSelfImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSelfImagesResponse
       */
      Models::DescribeSelfImagesResponse describeSelfImagesWithOptions(const Models::DescribeSelfImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom images.
       *
       * @param request DescribeSelfImagesRequest
       * @return DescribeSelfImagesResponse
       */
      Models::DescribeSelfImagesResponse describeSelfImages(const Models::DescribeSelfImagesRequest &request);

      /**
       * @summary You can call the DescribeServcieSchedule to query the real-time status of the instance device or container that is being occupied by the UUID.
       *
       * @param request DescribeServcieScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServcieScheduleResponse
       */
      Models::DescribeServcieScheduleResponse describeServcieScheduleWithOptions(const Models::DescribeServcieScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeServcieSchedule to query the real-time status of the instance device or container that is being occupied by the UUID.
       *
       * @param request DescribeServcieScheduleRequest
       * @return DescribeServcieScheduleResponse
       */
      Models::DescribeServcieScheduleResponse describeServcieSchedule(const Models::DescribeServcieScheduleRequest &request);

      /**
       * @summary Queries the monitoring data of an edge load balancer (ELB) instance based on the listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeServerLoadBalancerListenMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerLoadBalancerListenMonitorResponse
       */
      Models::DescribeServerLoadBalancerListenMonitorResponse describeServerLoadBalancerListenMonitorWithOptions(const Models::DescribeServerLoadBalancerListenMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of an edge load balancer (ELB) instance based on the listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeServerLoadBalancerListenMonitorRequest
       * @return DescribeServerLoadBalancerListenMonitorResponse
       */
      Models::DescribeServerLoadBalancerListenMonitorResponse describeServerLoadBalancerListenMonitor(const Models::DescribeServerLoadBalancerListenMonitorRequest &request);

      /**
       * @summary Queries the request monitoring data of an edge load balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeServerLoadBalancerMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerLoadBalancerMonitorResponse
       */
      Models::DescribeServerLoadBalancerMonitorResponse describeServerLoadBalancerMonitorWithOptions(const Models::DescribeServerLoadBalancerMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request monitoring data of an edge load balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request DescribeServerLoadBalancerMonitorRequest
       * @return DescribeServerLoadBalancerMonitorResponse
       */
      Models::DescribeServerLoadBalancerMonitorResponse describeServerLoadBalancerMonitor(const Models::DescribeServerLoadBalancerMonitorRequest &request);

      /**
       * @summary Queries information about snapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about snapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary Queries the details of a specific source network address translation (SNAT) entry.
       *
       * @param request DescribeSnatAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatAttributeResponse
       */
      Models::DescribeSnatAttributeResponse describeSnatAttributeWithOptions(const Models::DescribeSnatAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific source network address translation (SNAT) entry.
       *
       * @param request DescribeSnatAttributeRequest
       * @return DescribeSnatAttributeResponse
       */
      Models::DescribeSnatAttributeResponse describeSnatAttribute(const Models::DescribeSnatAttributeRequest &request);

      /**
       * @summary Queries source network address translation (SNAT) entries.
       *
       * @param request DescribeSnatTableEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntriesWithOptions(const Models::DescribeSnatTableEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries source network address translation (SNAT) entries.
       *
       * @param request DescribeSnatTableEntriesRequest
       * @return DescribeSnatTableEntriesResponse
       */
      Models::DescribeSnatTableEntriesResponse describeSnatTableEntries(const Models::DescribeSnatTableEntriesRequest &request);

      /**
       * @summary Queries storage gateways.
       *
       * @param request DescribeStorageGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageGatewayResponse
       */
      Models::DescribeStorageGatewayResponse describeStorageGatewayWithOptions(const Models::DescribeStorageGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries storage gateways.
       *
       * @param request DescribeStorageGatewayRequest
       * @return DescribeStorageGatewayResponse
       */
      Models::DescribeStorageGatewayResponse describeStorageGateway(const Models::DescribeStorageGatewayRequest &request);

      /**
       * @summary Queries volumes.
       *
       * @param request DescribeStorageVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageVolumeResponse
       */
      Models::DescribeStorageVolumeResponse describeStorageVolumeWithOptions(const Models::DescribeStorageVolumeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries volumes.
       *
       * @param request DescribeStorageVolumeRequest
       * @return DescribeStorageVolumeResponse
       */
      Models::DescribeStorageVolumeResponse describeStorageVolume(const Models::DescribeStorageVolumeRequest &request);

      /**
       * @summary Queries the bandwidth that you use within a specified period of time.
       *
       * @param request DescribeUserBandWidthDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBandWidthDataResponse
       */
      Models::DescribeUserBandWidthDataResponse describeUserBandWidthDataWithOptions(const Models::DescribeUserBandWidthDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth that you use within a specified period of time.
       *
       * @param request DescribeUserBandWidthDataRequest
       * @return DescribeUserBandWidthDataResponse
       */
      Models::DescribeUserBandWidthDataResponse describeUserBandWidthData(const Models::DescribeUserBandWidthDataRequest &request);

      /**
       * @summary Call the DescribeVSwitchAttributes interface to query the configuration of a specified VSwitch.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributesWithOptions(const Models::DescribeVSwitchAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeVSwitchAttributes interface to query the configuration of a specified VSwitch.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributes(const Models::DescribeVSwitchAttributesRequest &request);

      /**
       * @summary Queries information about available vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about available vSwitches.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Detaches a pay-as-you-go disk from an Edge Node Service (ENS) instance. You cannot call this operation to detach a disk that is created together with an instance.
       *
       * @param request DetachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDiskWithOptions(const Models::DetachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a pay-as-you-go disk from an Edge Node Service (ENS) instance. You cannot call this operation to detach a disk that is created together with an instance.
       *
       * @param request DetachDiskRequest
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDisk(const Models::DetachDiskRequest &request);

      /**
       * @summary Detaches a shared data group (SDG).
       *
       * @param tmpReq DetachInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachInstanceSDGResponse
       */
      Models::DetachInstanceSDGResponse detachInstanceSDGWithOptions(const Models::DetachInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a shared data group (SDG).
       *
       * @param request DetachInstanceSDGRequest
       * @return DetachInstanceSDGResponse
       */
      Models::DetachInstanceSDGResponse detachInstanceSDG(const Models::DetachInstanceSDGRequest &request);

      /**
       * @summary Detach an elastic network interface (ENI) from an instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   You cannot detach a primary ENI from an instance.
       * *   The ENI must be in the InUse state.
       * *   The instances are in the Stopped state.
       * *   This operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the state of the ENI to determine whether the ENI is detached.
       *
       * @param request DetachNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachNetworkInterfaceResponse
       */
      Models::DetachNetworkInterfaceResponse detachNetworkInterfaceWithOptions(const Models::DetachNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach an elastic network interface (ENI) from an instance.
       *
       * @description Before you call this operation, take note of the following items:
       * *   You cannot detach a primary ENI from an instance.
       * *   The ENI must be in the InUse state.
       * *   The instances are in the Stopped state.
       * *   This operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the state of the ENI to determine whether the ENI is detached.
       *
       * @param request DetachNetworkInterfaceRequest
       * @return DetachNetworkInterfaceResponse
       */
      Models::DetachNetworkInterfaceResponse detachNetworkInterface(const Models::DetachNetworkInterfaceRequest &request);

      /**
       * @summary Distributes pushed data to the Edge Node Service (ENS) instances of the application. You can specify multiple canary release policies, decompress files, and restart containers.
       *
       * @param request DistApplicationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DistApplicationDataResponse
       */
      Models::DistApplicationDataResponse distApplicationDataWithOptions(const Models::DistApplicationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Distributes pushed data to the Edge Node Service (ENS) instances of the application. You can specify multiple canary release policies, decompress files, and restart containers.
       *
       * @param request DistApplicationDataRequest
       * @return DistApplicationDataResponse
       */
      Models::DistApplicationDataResponse distApplicationData(const Models::DistApplicationDataRequest &request);

      /**
       * @summary Migrates the instance across nodes after an O\\\\\\&M event occurs on an instance.
       *
       * @description *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
       *
       * @param request EventMigrateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventMigrateInstanceResponse
       */
      Models::EventMigrateInstanceResponse eventMigrateInstanceWithOptions(const Models::EventMigrateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates the instance across nodes after an O\\\\\\&M event occurs on an instance.
       *
       * @description *   This O\\&M operation is supported only by the Instance:SystemUpgrade.Migrate event.
       *
       * @param request EventMigrateInstanceRequest
       * @return EventMigrateInstanceResponse
       */
      Models::EventMigrateInstanceResponse eventMigrateInstance(const Models::EventMigrateInstanceRequest &request);

      /**
       * @summary Restart the instance across nodes after an O\\\\\\&M event occurs on an instance.
       *
       * @description *   This O\\&M operation supports only the Instance:SystemMaintenance.Reboot event
       *
       * @param request EventRebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventRebootInstanceResponse
       */
      Models::EventRebootInstanceResponse eventRebootInstanceWithOptions(const Models::EventRebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restart the instance across nodes after an O\\\\\\&M event occurs on an instance.
       *
       * @description *   This O\\&M operation supports only the Instance:SystemMaintenance.Reboot event
       *
       * @param request EventRebootInstanceRequest
       * @return EventRebootInstanceResponse
       */
      Models::EventRebootInstanceResponse eventRebootInstance(const Models::EventRebootInstanceRequest &request);

      /**
       * @summary The event that is used to immediately redeploy a specified resource or by appointment
       *
       * @description *   This O\\&M operation supports only the following event types: Instance:SystemFailure.Redeploy (instance redeployment due to system problems) and Instance:SystemMaintenance.Redeploy (instance redeployment due to system maintenance).
       *
       * @param request EventRedeployInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventRedeployInstanceResponse
       */
      Models::EventRedeployInstanceResponse eventRedeployInstanceWithOptions(const Models::EventRedeployInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The event that is used to immediately redeploy a specified resource or by appointment
       *
       * @description *   This O\\&M operation supports only the following event types: Instance:SystemFailure.Redeploy (instance redeployment due to system problems) and Instance:SystemMaintenance.Redeploy (instance redeployment due to system maintenance).
       *
       * @param request EventRedeployInstanceRequest
       * @return EventRedeployInstanceResponse
       */
      Models::EventRedeployInstanceResponse eventRedeployInstance(const Models::EventRedeployInstanceRequest &request);

      /**
       * @summary Exports billing details within a specific time range.
       *
       * @param request ExportBillDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportBillDetailDataResponse
       */
      Models::ExportBillDetailDataResponse exportBillDetailDataWithOptions(const Models::ExportBillDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports billing details within a specific time range.
       *
       * @param request ExportBillDetailDataRequest
       * @return ExportBillDetailDataResponse
       */
      Models::ExportBillDetailDataResponse exportBillDetailData(const Models::ExportBillDetailDataRequest &request);

      /**
       * @summary Exports a custom image to an Object Storage Service (OSS) bucket in the same region.
       *
       * @param request ExportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImageWithOptions(const Models::ExportImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports a custom image to an Object Storage Service (OSS) bucket in the same region.
       *
       * @param request ExportImageRequest
       * @return ExportImageResponse
       */
      Models::ExportImageResponse exportImage(const Models::ExportImageRequest &request);

      /**
       * @summary Exports the metering data within a specific time range.
       *
       * @param request ExportMeasurementDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExportMeasurementDataResponse
       */
      Models::ExportMeasurementDataResponse exportMeasurementDataWithOptions(const Models::ExportMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the metering data within a specific time range.
       *
       * @param request ExportMeasurementDataRequest
       * @return ExportMeasurementDataResponse
       */
      Models::ExportMeasurementDataResponse exportMeasurementData(const Models::ExportMeasurementDataRequest &request);

      /**
       * @summary Queries the access control list (ACL) of a bucket.
       *
       * @param request GetBucketAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucketAclResponse
       */
      Models::GetBucketAclResponse getBucketAclWithOptions(const Models::GetBucketAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access control list (ACL) of a bucket.
       *
       * @param request GetBucketAclRequest
       * @return GetBucketAclResponse
       */
      Models::GetBucketAclResponse getBucketAcl(const Models::GetBucketAclRequest &request);

      /**
       * @summary Queries the detailed information about a bucket.
       *
       * @param request GetBucketInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucketInfoResponse
       */
      Models::GetBucketInfoResponse getBucketInfoWithOptions(const Models::GetBucketInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about a bucket.
       *
       * @param request GetBucketInfoRequest
       * @return GetBucketInfoResponse
       */
      Models::GetBucketInfoResponse getBucketInfo(const Models::GetBucketInfoRequest &request);

      /**
       * @summary Queries lifecycle rules.
       *
       * @param request GetBucketLifecycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucketLifecycleResponse
       */
      Models::GetBucketLifecycleResponse getBucketLifecycleWithOptions(const Models::GetBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries lifecycle rules.
       *
       * @param request GetBucketLifecycleRequest
       * @return GetBucketLifecycleResponse
       */
      Models::GetBucketLifecycleResponse getBucketLifecycle(const Models::GetBucketLifecycleRequest &request);

      /**
       * @summary Queries the storage usage in the previous billing cycle and the cumulative number of calls in this month.
       *
       * @param request GetOssStorageAndAccByBucketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssStorageAndAccByBucketsResponse
       */
      Models::GetOssStorageAndAccByBucketsResponse getOssStorageAndAccByBucketsWithOptions(const Models::GetOssStorageAndAccByBucketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage usage in the previous billing cycle and the cumulative number of calls in this month.
       *
       * @param request GetOssStorageAndAccByBucketsRequest
       * @return GetOssStorageAndAccByBucketsResponse
       */
      Models::GetOssStorageAndAccByBucketsResponse getOssStorageAndAccByBuckets(const Models::GetOssStorageAndAccByBucketsRequest &request);

      /**
       * @summary Queries the storage and bandwidth usage within a specific time range.
       *
       * @description The query and aggregation granularity of bandwidth and storage usage cannot exceed one day. Data aggregation is to collect the maximum values of usage data within a period of time.
       *
       * @param request GetOssUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssUsageDataResponse
       */
      Models::GetOssUsageDataResponse getOssUsageDataWithOptions(const Models::GetOssUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage and bandwidth usage within a specific time range.
       *
       * @description The query and aggregation granularity of bandwidth and storage usage cannot exceed one day. Data aggregation is to collect the maximum values of usage data within a period of time.
       *
       * @param request GetOssUsageDataRequest
       * @return GetOssUsageDataResponse
       */
      Models::GetOssUsageDataResponse getOssUsageData(const Models::GetOssUsageDataRequest &request);

      /**
       * @summary Call ImportImage to import your image file to the cloud server.
       *
       * @param tmpReq ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ImportImage to import your image file to the cloud server.
       *
       * @param request ImportImageRequest
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImage(const Models::ImportImageRequest &request);

      /**
       * @summary Imports the public key of a Rivest–Shamir–Adleman (RSA)-encrypted key pair that is generated by a third-party tool.
       *
       * @description *   After the key pair is imported, ENS stores the public key. You must securely store the private key.
       * *   The key pair can be only in the ssh-rsa format.
       *
       * @param request ImportKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPairWithOptions(const Models::ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the public key of a Rivest–Shamir–Adleman (RSA)-encrypted key pair that is generated by a third-party tool.
       *
       * @description *   After the key pair is imported, ENS stores the public key. You must securely store the private key.
       * *   The key pair can be only in the ssh-rsa format.
       *
       * @param request ImportKeyPairRequest
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPair(const Models::ImportKeyPairRequest &request);

      /**
       * @summary 为当前用户创建ENS的服务关联角色（SLR），管控资源。
       *
       * @param request InitializeENSECKServiceRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeENSECKServiceRoleResponse
       */
      Models::InitializeENSECKServiceRoleResponse initializeENSECKServiceRoleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为当前用户创建ENS的服务关联角色（SLR），管控资源。
       *
       * @return InitializeENSECKServiceRoleResponse
       */
      Models::InitializeENSECKServiceRoleResponse initializeENSECKServiceRole();

      /**
       * @summary Assigns public IP addresses to an EPN instance.
       *
       * @param request JoinPublicIpsToEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinPublicIpsToEpnInstanceResponse
       */
      Models::JoinPublicIpsToEpnInstanceResponse joinPublicIpsToEpnInstanceWithOptions(const Models::JoinPublicIpsToEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns public IP addresses to an EPN instance.
       *
       * @param request JoinPublicIpsToEpnInstanceRequest
       * @return JoinPublicIpsToEpnInstanceResponse
       */
      Models::JoinPublicIpsToEpnInstanceResponse joinPublicIpsToEpnInstance(const Models::JoinPublicIpsToEpnInstanceRequest &request);

      /**
       * @summary Adds an Edge Node Service (ENS) instance to a specified security group.
       *
       * @description Before you call this operation to add an instance to a security group, make sure that the instance is in the Stopped or Running state.
       *
       * @param request JoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroupWithOptions(const Models::JoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Edge Node Service (ENS) instance to a specified security group.
       *
       * @description Before you call this operation to add an instance to a security group, make sure that the instance is in the Stopped or Running state.
       *
       * @param request JoinSecurityGroupRequest
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroup(const Models::JoinSecurityGroupRequest &request);

      /**
       * @summary Performs networking.
       *
       * @description For the Internal Connection mode and the Intelligent Acceleration and Internal Connection mode, instances of the vSwitch take effect automatically. You do not need to manually add instances. For public connections such as intelligent acceleration, you need to call an operation to manually add the instances to Internet-facing instances.
       *
       * @param request JoinVSwitchesToEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinVSwitchesToEpnInstanceResponse
       */
      Models::JoinVSwitchesToEpnInstanceResponse joinVSwitchesToEpnInstanceWithOptions(const Models::JoinVSwitchesToEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs networking.
       *
       * @description For the Internal Connection mode and the Intelligent Acceleration and Internal Connection mode, instances of the vSwitch take effect automatically. You do not need to manually add instances. For public connections such as intelligent acceleration, you need to call an operation to manually add the instances to Internet-facing instances.
       *
       * @param request JoinVSwitchesToEpnInstanceRequest
       * @return JoinVSwitchesToEpnInstanceResponse
       */
      Models::JoinVSwitchesToEpnInstanceResponse joinVSwitchesToEpnInstance(const Models::JoinVSwitchesToEpnInstanceRequest &request);

      /**
       * @summary Removes an instance from a security group.
       *
       * @description Before you remove an instance from a security group, the instance must be in the Stopped or Running state.
       *
       * @param request LeaveSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroupWithOptions(const Models::LeaveSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an instance from a security group.
       *
       * @description Before you remove an instance from a security group, the instance must be in the Stopped or Running state.
       *
       * @param request LeaveSecurityGroupRequest
       * @return LeaveSecurityGroupResponse
       */
      Models::LeaveSecurityGroupResponse leaveSecurityGroup(const Models::LeaveSecurityGroupRequest &request);

      /**
       * @summary Queries the related information of AIC public keys. Paged query is supported.
       *
       * @param request ListAICPublicKeyDeliveriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAICPublicKeyDeliveriesResponse
       */
      Models::ListAICPublicKeyDeliveriesResponse listAICPublicKeyDeliveriesWithOptions(const Models::ListAICPublicKeyDeliveriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the related information of AIC public keys. Paged query is supported.
       *
       * @param request ListAICPublicKeyDeliveriesRequest
       * @return ListAICPublicKeyDeliveriesResponse
       */
      Models::ListAICPublicKeyDeliveriesResponse listAICPublicKeyDeliveries(const Models::ListAICPublicKeyDeliveriesRequest &request);

      /**
       * @summary Query the list of AIC public keys that meet the conditions. Paged query is supported.
       *
       * @param request ListAICPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAICPublicKeysResponse
       */
      Models::ListAICPublicKeysResponse listAICPublicKeysWithOptions(const Models::ListAICPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of AIC public keys that meet the conditions. Paged query is supported.
       *
       * @param request ListAICPublicKeysRequest
       * @return ListAICPublicKeysResponse
       */
      Models::ListAICPublicKeysResponse listAICPublicKeys(const Models::ListAICPublicKeysRequest &request);

      /**
       * @summary Querying the details of a cluster component
       *
       * @param request ListAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying the details of a cluster component
       *
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddons();

      /**
       * @summary Queries the created applications.
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the created applications.
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary Queries all buckets of a user.
       *
       * @param request ListBucketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBucketsResponse
       */
      Models::ListBucketsResponse listBucketsWithOptions(const Models::ListBucketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all buckets of a user.
       *
       * @param request ListBucketsRequest
       * @return ListBucketsResponse
       */
      Models::ListBucketsResponse listBuckets(const Models::ListBucketsRequest &request);

      /**
       * @summary List of Installed Addon Instances in the Cluster
       *
       * @param request ListClusterAddonInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstancesWithOptions(const Models::ListClusterAddonInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of Installed Addon Instances in the Cluster
       *
       * @param request ListClusterAddonInstancesRequest
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstances(const Models::ListClusterAddonInstancesRequest &request);

      /**
       * @summary Queries the information about all objects in a bucket.
       *
       * @param request ListObjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListObjectsResponse
       */
      Models::ListObjectsResponse listObjectsWithOptions(const Models::ListObjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all objects in a bucket.
       *
       * @param request ListObjectsRequest
       * @return ListObjectsResponse
       */
      Models::ListObjectsResponse listObjects(const Models::ListObjectsRequest &request);

      /**
       * @summary 获取所有产品能力
       *
       * @param request ListProductAbilitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductAbilitiesResponse
       */
      Models::ListProductAbilitiesResponse listProductAbilitiesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取所有产品能力
       *
       * @return ListProductAbilitiesResponse
       */
      Models::ListProductAbilitiesResponse listProductAbilities();

      /**
       * @summary Queries tags that are added to Edge Node Service (ENS) instances.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags that are added to Edge Node Service (ENS) instances.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Log on to the AIC instance. You can associate or disassociate an AIC instance based on the uploaded AIC public key.
       *
       * @param request ManageAICLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageAICLoginResponse
       */
      Models::ManageAICLoginResponse manageAICLoginWithOptions(const Models::ManageAICLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Log on to the AIC instance. You can associate or disassociate an AIC instance based on the uploaded AIC public key.
       *
       * @param request ManageAICLoginRequest
       * @return ManageAICLoginResponse
       */
      Models::ManageAICLoginResponse manageAICLogin(const Models::ManageAICLoginRequest &request);

      /**
       * @summary Modifies the name, description, and peak bandwidth of a specified elastic IP address (EIP).
       *
       * @param request ModifyEnsEipAddressAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEnsEipAddressAttributeResponse
       */
      Models::ModifyEnsEipAddressAttributeResponse modifyEnsEipAddressAttributeWithOptions(const Models::ModifyEnsEipAddressAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name, description, and peak bandwidth of a specified elastic IP address (EIP).
       *
       * @param request ModifyEnsEipAddressAttributeRequest
       * @return ModifyEnsEipAddressAttributeResponse
       */
      Models::ModifyEnsEipAddressAttributeResponse modifyEnsEipAddressAttribute(const Models::ModifyEnsEipAddressAttributeRequest &request);

      /**
       * @summary Modifies the name and description of a custom route.
       *
       * @param request ModifyEnsRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEnsRouteEntryResponse
       */
      Models::ModifyEnsRouteEntryResponse modifyEnsRouteEntryWithOptions(const Models::ModifyEnsRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a custom route.
       *
       * @param request ModifyEnsRouteEntryRequest
       * @return ModifyEnsRouteEntryResponse
       */
      Models::ModifyEnsRouteEntryResponse modifyEnsRouteEntry(const Models::ModifyEnsRouteEntryRequest &request);

      /**
       * @summary Modifies an Edge Private Network (EPN) instance.
       *
       * @param request ModifyEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyEpnInstanceResponse
       */
      Models::ModifyEpnInstanceResponse modifyEpnInstanceWithOptions(const Models::ModifyEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Edge Private Network (EPN) instance.
       *
       * @param request ModifyEpnInstanceRequest
       * @return ModifyEpnInstanceResponse
       */
      Models::ModifyEpnInstanceResponse modifyEpnInstance(const Models::ModifyEpnInstanceRequest &request);

      /**
       * @summary Modifies the description of a NAS file system.
       *
       * @param request ModifyFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyFileSystemResponse
       */
      Models::ModifyFileSystemResponse modifyFileSystemWithOptions(const Models::ModifyFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a NAS file system.
       *
       * @param request ModifyFileSystemRequest
       * @return ModifyFileSystemResponse
       */
      Models::ModifyFileSystemResponse modifyFileSystem(const Models::ModifyFileSystemRequest &request);

      /**
       * @summary Modifies a Destination Network Address Translation (DNAT) rule.
       *
       * @param request ModifyForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntryWithOptions(const Models::ModifyForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Destination Network Address Translation (DNAT) rule.
       *
       * @param request ModifyForwardEntryRequest
       * @return ModifyForwardEntryResponse
       */
      Models::ModifyForwardEntryResponse modifyForwardEntry(const Models::ModifyForwardEntryRequest &request);

      /**
       * @summary Modifies the name of a high-availability virtual IP address (HAVIP).
       *
       * @param request ModifyHaVipAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttributeWithOptions(const Models::ModifyHaVipAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a high-availability virtual IP address (HAVIP).
       *
       * @param request ModifyHaVipAttributeRequest
       * @return ModifyHaVipAttributeResponse
       */
      Models::ModifyHaVipAttributeResponse modifyHaVipAttribute(const Models::ModifyHaVipAttributeRequest &request);

      /**
       * @summary Modifies the image attributes.
       *
       * @param request ModifyImageAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttributeWithOptions(const Models::ModifyImageAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the image attributes.
       *
       * @param request ModifyImageAttributeRequest
       * @return ModifyImageAttributeResponse
       */
      Models::ModifyImageAttributeResponse modifyImageAttribute(const Models::ModifyImageAttributeRequest &request);

      /**
       * @summary Shares or unshares an image.
       *
       * @param request ModifyImageSharePermissionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermissionWithOptions(const Models::ModifyImageSharePermissionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares or unshares an image.
       *
       * @param request ModifyImageSharePermissionRequest
       * @return ModifyImageSharePermissionResponse
       */
      Models::ModifyImageSharePermissionResponse modifyImageSharePermission(const Models::ModifyImageSharePermissionRequest &request);

      /**
       * @summary Changes the attributes of an instance, such as the name and the password.
       *
       * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
       * *   When the instance is in the Running state, you cannot change the password of the instance.
       * *   After resetting the password, you must Restart the instance in the ECS console or call the RebootInstance operation to validate the modifications. The restart operation within the instance does not validate the modifications.
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the attributes of an instance, such as the name and the password.
       *
       * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
       * *   When the instance is in the Running state, you cannot change the password of the instance.
       * *   After resetting the password, you must Restart the instance in the ECS console or call the RebootInstance operation to validate the modifications. The restart operation within the instance does not validate the modifications.
       *
       * @param request ModifyInstanceAttributeRequest
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttribute(const Models::ModifyInstanceAttributeRequest &request);

      /**
       * @summary Configures auto-renewal for instances.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttributeWithOptions(const Models::ModifyInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures auto-renewal for instances.
       *
       * @param request ModifyInstanceAutoRenewAttributeRequest
       * @return ModifyInstanceAutoRenewAttributeResponse
       */
      Models::ModifyInstanceAutoRenewAttributeResponse modifyInstanceAutoRenewAttribute(const Models::ModifyInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Modifies the boot configuration of a heterogeneous PC Farm bare metal instance.
       *
       * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
       * *   If the instance is in the Running state, you cannot change the password of the instance.
       * *   After resetting the password, you must restart the instance in the ENS console or call the RebootInstance operation to apply the change. The restart operation within the instance does not apply the change.
       *
       * @param request ModifyInstanceBootConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceBootConfigurationResponse
       */
      Models::ModifyInstanceBootConfigurationResponse modifyInstanceBootConfigurationWithOptions(const Models::ModifyInstanceBootConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the boot configuration of a heterogeneous PC Farm bare metal instance.
       *
       * @description *   If an instance is in the Starting state, you cannot reset the password of the instance.
       * *   If the instance is in the Running state, you cannot change the password of the instance.
       * *   After resetting the password, you must restart the instance in the ENS console or call the RebootInstance operation to apply the change. The restart operation within the instance does not apply the change.
       *
       * @param request ModifyInstanceBootConfigurationRequest
       * @return ModifyInstanceBootConfigurationResponse
       */
      Models::ModifyInstanceBootConfigurationResponse modifyInstanceBootConfiguration(const Models::ModifyInstanceBootConfigurationRequest &request);

      /**
       * @summary Changes the billing method of Edge Node Service (ENS) instances. You can switch between the pay-as-you-go and subscription billing methods for instances. You can also change the billing method for disks that you created with pay-as-you-go instances to subscription.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of ENS.
       * The instances must be in the Running or Stopped state, and you have no overdue payments for them.
       *
       * @param tmpReq ModifyInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(const Models::ModifyInstanceChargeTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the billing method of Edge Node Service (ENS) instances. You can switch between the pay-as-you-go and subscription billing methods for instances. You can also change the billing method for disks that you created with pay-as-you-go instances to subscription.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of ENS.
       * The instances must be in the Running or Stopped state, and you have no overdue payments for them.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the private IP address or vSwitch of a VPC-type ECS instance.
       *
       * @description The instance that you want to manage must be in the Stopped state. When you modify the parameters of a scaling group, the following limits apply:
       * *   Instance:
       *     *   Instances that are associated with SLB are not supported.
       * *   Network:
       *     *   Instances that are associated with EIPs are not supported.
       *     *   Instances that are associated with high-availability virtual IP addresses are not supported.
       *     *   Instances that have been used as next hops in the routing table are not supported.
       *     *   Secondary ENIs cannot be attached to the ECS instance.
       *     *   Instances configured with secondary IP addresses are not supported.
       *
       * @param request ModifyInstanceNetworkAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceNetworkAttributeResponse
       */
      Models::ModifyInstanceNetworkAttributeResponse modifyInstanceNetworkAttributeWithOptions(const Models::ModifyInstanceNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the private IP address or vSwitch of a VPC-type ECS instance.
       *
       * @description The instance that you want to manage must be in the Stopped state. When you modify the parameters of a scaling group, the following limits apply:
       * *   Instance:
       *     *   Instances that are associated with SLB are not supported.
       * *   Network:
       *     *   Instances that are associated with EIPs are not supported.
       *     *   Instances that are associated with high-availability virtual IP addresses are not supported.
       *     *   Instances that have been used as next hops in the routing table are not supported.
       *     *   Secondary ENIs cannot be attached to the ECS instance.
       *     *   Instances configured with secondary IP addresses are not supported.
       *
       * @param request ModifyInstanceNetworkAttributeRequest
       * @return ModifyInstanceNetworkAttributeResponse
       */
      Models::ModifyInstanceNetworkAttributeResponse modifyInstanceNetworkAttribute(const Models::ModifyInstanceNetworkAttributeRequest &request);

      /**
       * @summary Modifies the information about an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request ModifyLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLoadBalancerAttributeResponse
       */
      Models::ModifyLoadBalancerAttributeResponse modifyLoadBalancerAttributeWithOptions(const Models::ModifyLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request ModifyLoadBalancerAttributeRequest
       * @return ModifyLoadBalancerAttributeResponse
       */
      Models::ModifyLoadBalancerAttributeResponse modifyLoadBalancerAttribute(const Models::ModifyLoadBalancerAttributeRequest &request);

      /**
       * @summary Modifies the network information.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request ModifyNetworkAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkAttributeResponse
       */
      Models::ModifyNetworkAttributeResponse modifyNetworkAttributeWithOptions(const Models::ModifyNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network information.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request ModifyNetworkAttributeRequest
       * @return ModifyNetworkAttributeResponse
       */
      Models::ModifyNetworkAttributeResponse modifyNetworkAttribute(const Models::ModifyNetworkAttributeRequest &request);

      /**
       * @summary Modifies the attributes of an elastic network interface (ENI), such as its name and description.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttributeWithOptions(const Models::ModifyNetworkInterfaceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of an elastic network interface (ENI), such as its name and description.
       *
       * @param request ModifyNetworkInterfaceAttributeRequest
       * @return ModifyNetworkInterfaceAttributeResponse
       */
      Models::ModifyNetworkInterfaceAttributeResponse modifyNetworkInterfaceAttribute(const Models::ModifyNetworkInterfaceAttributeRequest &request);

      /**
       * @summary Upgrades or downgrades the instance type of a subscription Edge Node Service (ENS) instance. The new instance type takes effect for the remaining lifecycle of the instance.
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades or downgrades the instance type of a subscription Edge Node Service (ENS) instance. The new instance type takes effect for the remaining lifecycle of the instance.
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @summary Modifies the information about a security group.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttributeWithOptions(const Models::ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a security group.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttribute(const Models::ModifySecurityGroupAttributeRequest &request);

      /**
       * @summary Modifies the information about a snapshot.
       *
       * @param request ModifySnapshotAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnapshotAttributeResponse
       */
      Models::ModifySnapshotAttributeResponse modifySnapshotAttributeWithOptions(const Models::ModifySnapshotAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a snapshot.
       *
       * @param request ModifySnapshotAttributeRequest
       * @return ModifySnapshotAttributeResponse
       */
      Models::ModifySnapshotAttributeResponse modifySnapshotAttribute(const Models::ModifySnapshotAttributeRequest &request);

      /**
       * @summary 修改snat规则
       *
       * @param request ModifySnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntryWithOptions(const Models::ModifySnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改snat规则
       *
       * @param request ModifySnatEntryRequest
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntry(const Models::ModifySnatEntryRequest &request);

      /**
       * @summary Modifies information about a vSwitch.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a vSwitch.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 5 times per second per user.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @summary Deploys the SDG that has been attached to instances on the corresponding Android in Container (AIC) instance.
       *
       * @param tmpReq MountInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MountInstanceSDGResponse
       */
      Models::MountInstanceSDGResponse mountInstanceSDGWithOptions(const Models::MountInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys the SDG that has been attached to instances on the corresponding Android in Container (AIC) instance.
       *
       * @param request MountInstanceSDGRequest
       * @return MountInstanceSDGResponse
       */
      Models::MountInstanceSDGResponse mountInstanceSDG(const Models::MountInstanceSDGRequest &request);

      /**
       * @summary Preloads a shared data group (SDG).
       *
       * @param tmpReq PreloadRegionSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadRegionSDGResponse
       */
      Models::PreloadRegionSDGResponse preloadRegionSDGWithOptions(const Models::PreloadRegionSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Preloads a shared data group (SDG).
       *
       * @param request PreloadRegionSDGRequest
       * @return PreloadRegionSDGResponse
       */
      Models::PreloadRegionSDGResponse preloadRegionSDG(const Models::PreloadRegionSDGRequest &request);

      /**
       * @summary Prepares the upload and obtains the location of the bucket.
       *
       * @param request PrepareUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrepareUploadResponse
       */
      Models::PrepareUploadResponse prepareUploadWithOptions(const Models::PrepareUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prepares the upload and obtains the location of the bucket.
       *
       * @param request PrepareUploadRequest
       * @return PrepareUploadResponse
       */
      Models::PrepareUploadResponse prepareUpload(const Models::PrepareUploadRequest &request);

      /**
       * @summary Pushes the business or service data of an application to file servers.
       *
       * @param request PushApplicationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushApplicationDataResponse
       */
      Models::PushApplicationDataResponse pushApplicationDataWithOptions(const Models::PushApplicationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pushes the business or service data of an application to file servers.
       *
       * @param request PushApplicationDataRequest
       * @return PushApplicationDataResponse
       */
      Models::PushApplicationDataResponse pushApplicationData(const Models::PushApplicationDataRequest &request);

      /**
       * @summary Creates an Edge Object Storage (EOS) bucket.
       *
       * @param request PutBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutBucketResponse
       */
      Models::PutBucketResponse putBucketWithOptions(const Models::PutBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Edge Object Storage (EOS) bucket.
       *
       * @param request PutBucketRequest
       * @return PutBucketResponse
       */
      Models::PutBucketResponse putBucket(const Models::PutBucketRequest &request);

      /**
       * @summary Modifies the access control list (ACL) of a bucket.
       *
       * @param request PutBucketAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutBucketAclResponse
       */
      Models::PutBucketAclResponse putBucketAclWithOptions(const Models::PutBucketAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the access control list (ACL) of a bucket.
       *
       * @param request PutBucketAclRequest
       * @return PutBucketAclResponse
       */
      Models::PutBucketAclResponse putBucketAcl(const Models::PutBucketAclRequest &request);

      /**
       * @summary Configures lifecycle rules for objects.
       *
       * @description *   You can configure up to 1,000 rules.
       * *   If an object meets multiple rules, the rule that has the earliest expiration time prevails.
       *
       * @param request PutBucketLifecycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutBucketLifecycleResponse
       */
      Models::PutBucketLifecycleResponse putBucketLifecycleWithOptions(const Models::PutBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures lifecycle rules for objects.
       *
       * @description *   You can configure up to 1,000 rules.
       * *   If an object meets multiple rules, the rule that has the earliest expiration time prevails.
       *
       * @param request PutBucketLifecycleRequest
       * @return PutBucketLifecycleResponse
       */
      Models::PutBucketLifecycleResponse putBucketLifecycle(const Models::PutBucketLifecycleRequest &request);

      /**
       * @summary Initializes a disk.
       *
       * @param request ReInitDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDiskWithOptions(const Models::ReInitDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes a disk.
       *
       * @param request ReInitDiskRequest
       * @return ReInitDiskResponse
       */
      Models::ReInitDiskResponse reInitDisk(const Models::ReInitDiskRequest &request);

      /**
       * @summary Restarts an Android in Container (AIC) instance.
       *
       * @param tmpReq RebootAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootAICInstanceResponse
       */
      Models::RebootAICInstanceResponse rebootAICInstanceWithOptions(const Models::RebootAICInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an Android in Container (AIC) instance.
       *
       * @param request RebootAICInstanceRequest
       * @return RebootAICInstanceResponse
       */
      Models::RebootAICInstanceResponse rebootAICInstance(const Models::RebootAICInstanceRequest &request);

      /**
       * @summary Reboots an Android in Container (AIC) server.
       *
       * @param request RebootARMServerInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootARMServerInstanceResponse
       */
      Models::RebootARMServerInstanceResponse rebootARMServerInstanceWithOptions(const Models::RebootARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reboots an Android in Container (AIC) server.
       *
       * @param request RebootARMServerInstanceRequest
       * @return RebootARMServerInstanceResponse
       */
      Models::RebootARMServerInstanceResponse rebootARMServerInstance(const Models::RebootARMServerInstanceRequest &request);

      /**
       * @summary Reboots an instance.
       *
       * @description *   Only instances that are in the Running state can be restarted.
       * *   If the operation is successful, the status of the instance becomes Starting.
       *
       * @param request RebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstanceWithOptions(const Models::RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reboots an instance.
       *
       * @description *   Only instances that are in the Running state can be restarted.
       * *   If the operation is successful, the status of the instance becomes Starting.
       *
       * @param request RebootInstanceRequest
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstance(const Models::RebootInstanceRequest &request);

      /**
       * @summary 选择批量实例进行重启操作
       *
       * @param tmpReq RebootInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstancesWithOptions(const Models::RebootInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 选择批量实例进行重启操作
       *
       * @param request RebootInstancesRequest
       * @return RebootInstancesResponse
       */
      Models::RebootInstancesResponse rebootInstances(const Models::RebootInstancesRequest &request);

      /**
       * @summary Recovers an Android in Container (AIC) instance on the server.
       *
       * @param request RecoverAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAICInstanceResponse
       */
      Models::RecoverAICInstanceResponse recoverAICInstanceWithOptions(const Models::RecoverAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recovers an Android in Container (AIC) instance on the server.
       *
       * @param request RecoverAICInstanceRequest
       * @return RecoverAICInstanceResponse
       */
      Models::RecoverAICInstanceResponse recoverAICInstance(const Models::RecoverAICInstanceRequest &request);

      /**
       * @summary Resets an instance based on specific parameters.
       *
       * @param request ReinitInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinitInstanceResponse
       */
      Models::ReinitInstanceResponse reinitInstanceWithOptions(const Models::ReinitInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an instance based on specific parameters.
       *
       * @param request ReinitInstanceRequest
       * @return ReinitInstanceResponse
       */
      Models::ReinitInstanceResponse reinitInstance(const Models::ReinitInstanceRequest &request);

      /**
       * @summary 选择批量实例进行重置操作
       *
       * @param tmpReq ReinitInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReinitInstancesResponse
       */
      Models::ReinitInstancesResponse reinitInstancesWithOptions(const Models::ReinitInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 选择批量实例进行重置操作
       *
       * @param request ReinitInstancesRequest
       * @return ReinitInstancesResponse
       */
      Models::ReinitInstancesResponse reinitInstances(const Models::ReinitInstancesRequest &request);

      /**
       * @summary Releases an Android in Container (AIC) instance from the server.
       *
       * @param request ReleaseAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseAICInstanceResponse
       */
      Models::ReleaseAICInstanceResponse releaseAICInstanceWithOptions(const Models::ReleaseAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an Android in Container (AIC) instance from the server.
       *
       * @param request ReleaseAICInstanceRequest
       * @return ReleaseAICInstanceResponse
       */
      Models::ReleaseAICInstanceResponse releaseAICInstance(const Models::ReleaseAICInstanceRequest &request);

      /**
       * @summary Releases an ARM server.
       *
       * @param request ReleaseARMServerInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseARMServerInstanceResponse
       */
      Models::ReleaseARMServerInstanceResponse releaseARMServerInstanceWithOptions(const Models::ReleaseARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an ARM server.
       *
       * @param request ReleaseARMServerInstanceRequest
       * @return ReleaseARMServerInstanceResponse
       */
      Models::ReleaseARMServerInstanceResponse releaseARMServerInstance(const Models::ReleaseARMServerInstanceRequest &request);

      /**
       * @summary Releases an instance. You can call this operation to release only Elastic IP Addresses (EIPs), Edge Load Balancer (ELB) instances, and cloud disk-based instances. We recommend that you call service-specific operations to release or unsubscribe from instances.
       *
       * @description *   You can call this operation up to 10,000 times per second per account.
       * *   The maximum number of times that each user can call this operation per second is 50.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an instance. You can call this operation to release only Elastic IP Addresses (EIPs), Edge Load Balancer (ELB) instances, and cloud disk-based instances. We recommend that you call service-specific operations to release or unsubscribe from instances.
       *
       * @description *   You can call this operation up to 10,000 times per second per account.
       * *   The maximum number of times that each user can call this operation per second is 50.
       *
       * @param request ReleaseInstanceRequest
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstance(const Models::ReleaseInstanceRequest &request);

      /**
       * @summary Deletes a pay-as-you-go instance.
       *
       * @param request ReleasePostPaidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePostPaidInstanceResponse
       */
      Models::ReleasePostPaidInstanceResponse releasePostPaidInstanceWithOptions(const Models::ReleasePostPaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a pay-as-you-go instance.
       *
       * @param request ReleasePostPaidInstanceRequest
       * @return ReleasePostPaidInstanceResponse
       */
      Models::ReleasePostPaidInstanceResponse releasePostPaidInstance(const Models::ReleasePostPaidInstanceRequest &request);

      /**
       * @summary Call ReleasePrePaidInstance to delete a subscription instance.
       *
       * @param request ReleasePrePaidInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleasePrePaidInstanceResponse
       */
      Models::ReleasePrePaidInstanceResponse releasePrePaidInstanceWithOptions(const Models::ReleasePrePaidInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call ReleasePrePaidInstance to delete a subscription instance.
       *
       * @param request ReleasePrePaidInstanceRequest
       * @return ReleasePrePaidInstanceResponse
       */
      Models::ReleasePrePaidInstanceResponse releasePrePaidInstance(const Models::ReleasePrePaidInstanceRequest &request);

      /**
       * @summary Removes backend servers.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param tmpReq RemoveBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServersWithOptions(const Models::RemoveBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes backend servers.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request RemoveBackendServersRequest
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServers(const Models::RemoveBackendServersRequest &request);

      /**
       * @summary Removes a shared data group (SDG) that is attached to the compute instance.
       *
       * @param tmpReq RemoveInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInstanceSDGResponse
       */
      Models::RemoveInstanceSDGResponse removeInstanceSDGWithOptions(const Models::RemoveInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a shared data group (SDG) that is attached to the compute instance.
       *
       * @param request RemoveInstanceSDGRequest
       * @return RemoveInstanceSDGResponse
       */
      Models::RemoveInstanceSDGResponse removeInstanceSDG(const Models::RemoveInstanceSDGRequest &request);

      /**
       * @summary Removes IP addresses from an edge private network (EPN) instance.
       *
       * @param request RemovePublicIpsFromEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePublicIpsFromEpnInstanceResponse
       */
      Models::RemovePublicIpsFromEpnInstanceResponse removePublicIpsFromEpnInstanceWithOptions(const Models::RemovePublicIpsFromEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes IP addresses from an edge private network (EPN) instance.
       *
       * @param request RemovePublicIpsFromEpnInstanceRequest
       * @return RemovePublicIpsFromEpnInstanceResponse
       */
      Models::RemovePublicIpsFromEpnInstanceResponse removePublicIpsFromEpnInstance(const Models::RemovePublicIpsFromEpnInstanceRequest &request);

      /**
       * @summary Removes a deployed shared data group (SDG) and restore local storage.
       *
       * @param tmpReq RemoveSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSDGResponse
       */
      Models::RemoveSDGResponse removeSDGWithOptions(const Models::RemoveSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a deployed shared data group (SDG) and restore local storage.
       *
       * @param request RemoveSDGRequest
       * @return RemoveSDGResponse
       */
      Models::RemoveSDGResponse removeSDG(const Models::RemoveSDGRequest &request);

      /**
       * @summary Removes all versions of SDG and restores the mount to the local disk.
       *
       * @param tmpReq RemoveSDGsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSDGsResponse
       */
      Models::RemoveSDGsResponse removeSDGsWithOptions(const Models::RemoveSDGsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes all versions of SDG and restores the mount to the local disk.
       *
       * @param request RemoveSDGsRequest
       * @return RemoveSDGsResponse
       */
      Models::RemoveSDGsResponse removeSDGs(const Models::RemoveSDGsRequest &request);

      /**
       * @summary Deletes the networking information. This operation is applicable only for instances that reside in the internal network.
       *
       * @param request RemoveVSwitchesFromEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveVSwitchesFromEpnInstanceResponse
       */
      Models::RemoveVSwitchesFromEpnInstanceResponse removeVSwitchesFromEpnInstanceWithOptions(const Models::RemoveVSwitchesFromEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the networking information. This operation is applicable only for instances that reside in the internal network.
       *
       * @param request RemoveVSwitchesFromEpnInstanceRequest
       * @return RemoveVSwitchesFromEpnInstanceResponse
       */
      Models::RemoveVSwitchesFromEpnInstanceResponse removeVSwitchesFromEpnInstance(const Models::RemoveVSwitchesFromEpnInstanceRequest &request);

      /**
       * @summary Renews a subscription Android in Container (AIC) instance.
       *
       * @param request RenewARMServerInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewARMServerInstanceResponse
       */
      Models::RenewARMServerInstanceResponse renewARMServerInstanceWithOptions(const Models::RenewARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription Android in Container (AIC) instance.
       *
       * @param request RenewARMServerInstanceRequest
       * @return RenewARMServerInstanceResponse
       */
      Models::RenewARMServerInstanceResponse renewARMServerInstance(const Models::RenewARMServerInstanceRequest &request);

      /**
       * @summary Renews a subscription instance.
       *
       * @param request RenewInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstanceWithOptions(const Models::RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription instance.
       *
       * @param request RenewInstanceRequest
       * @return RenewInstanceResponse
       */
      Models::RenewInstanceResponse renewInstance(const Models::RenewInstanceRequest &request);

      /**
       * @summary Scales resources in an asynchronous manner and deploys or releases the container.
       *
       * @param request RescaleApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RescaleApplicationResponse
       */
      Models::RescaleApplicationResponse rescaleApplicationWithOptions(const Models::RescaleApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales resources in an asynchronous manner and deploys or releases the container.
       *
       * @param request RescaleApplicationRequest
       * @return RescaleApplicationResponse
       */
      Models::RescaleApplicationResponse rescaleApplication(const Models::RescaleApplicationRequest &request);

      /**
       * @summary Scales out a bare metal device.
       *
       * @param request RescaleDeviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RescaleDeviceServiceResponse
       */
      Models::RescaleDeviceServiceResponse rescaleDeviceServiceWithOptions(const Models::RescaleDeviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out a bare metal device.
       *
       * @param request RescaleDeviceServiceRequest
       * @return RescaleDeviceServiceResponse
       */
      Models::RescaleDeviceServiceResponse rescaleDeviceService(const Models::RescaleDeviceServiceRequest &request);

      /**
       * @summary Resets an Android in Container (AIC) instance.
       *
       * @param request ResetAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAICInstanceResponse
       */
      Models::ResetAICInstanceResponse resetAICInstanceWithOptions(const Models::ResetAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an Android in Container (AIC) instance.
       *
       * @param request ResetAICInstanceRequest
       * @return ResetAICInstanceResponse
       */
      Models::ResetAICInstanceResponse resetAICInstance(const Models::ResetAICInstanceRequest &request);

      /**
       * @summary Rolls back a disk by using a snapshot.
       *
       * @description When you call this operation, take note of the following items:
       * *   The disk must be in the In Use (In_Use) or Unattached (Available) state.
       * *   The instance to which the disk is attached must be in the Stopped (Stopped) state. You can call the [StopInstance](~~StopInstance~~) operation to stop an instance.
       * *   The specified snapshot must be created from the disk specified by the DiskId parameter.
       * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ENS instance by calling the [DescribeInstances](~~DescribeInstances~~) operation, the instance is locked for security reasons and no operations are allowed on the instance.
       *
       * @param request ResetDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDiskWithOptions(const Models::ResetDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back a disk by using a snapshot.
       *
       * @description When you call this operation, take note of the following items:
       * *   The disk must be in the In Use (In_Use) or Unattached (Available) state.
       * *   The instance to which the disk is attached must be in the Stopped (Stopped) state. You can call the [StopInstance](~~StopInstance~~) operation to stop an instance.
       * *   The specified snapshot must be created from the disk specified by the DiskId parameter.
       * *   If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ENS instance by calling the [DescribeInstances](~~DescribeInstances~~) operation, the instance is locked for security reasons and no operations are allowed on the instance.
       *
       * @param request ResetDiskRequest
       * @return ResetDiskResponse
       */
      Models::ResetDiskResponse resetDisk(const Models::ResetDiskRequest &request);

      /**
       * @summary Resizes a pay-as-you-go disk that you purchase.
       *
       * @param request ResizeDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDiskWithOptions(const Models::ResizeDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resizes a pay-as-you-go disk that you purchase.
       *
       * @param request ResizeDiskRequest
       * @return ResizeDiskResponse
       */
      Models::ResizeDiskResponse resizeDisk(const Models::ResizeDiskRequest &request);

      /**
       * @summary Deletes an inbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
       *
       * @description *   In the security group-related API documents, inbound traffic refers to the traffic sent by the source and received by the destination.
       * *   You can determine an inbound security group rule by specifying one of the following groups of parameters. You cannot determine a security group rule by specifying only one parameter.
       * *   You can specify one or more of the following parameters to remove access control for a CIDR block: IpProtocol, PortRange, Policy, and SourceCidrIp.
       *
       * @param request RevokeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroupWithOptions(const Models::RevokeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an inbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
       *
       * @description *   In the security group-related API documents, inbound traffic refers to the traffic sent by the source and received by the destination.
       * *   You can determine an inbound security group rule by specifying one of the following groups of parameters. You cannot determine a security group rule by specifying only one parameter.
       * *   You can specify one or more of the following parameters to remove access control for a CIDR block: IpProtocol, PortRange, Policy, and SourceCidrIp.
       *
       * @param request RevokeSecurityGroupRequest
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroup(const Models::RevokeSecurityGroupRequest &request);

      /**
       * @summary Deletes an outbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
       *
       * @description >  In the security group-related API documents, outbound traffic refers to the traffic sent by the source and received by the destination.
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgressWithOptions(const Models::RevokeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an outbound security group rule. After the rule is deleted, the access control implemented by the rule is removed.
       *
       * @description >  In the security group-related API documents, outbound traffic refers to the traffic sent by the source and received by the destination.
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgress(const Models::RevokeSecurityGroupEgressRequest &request);

      /**
       * @summary Rolls back the container version of a specific application.
       *
       * @param request RollbackApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplicationWithOptions(const Models::RollbackApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back the container version of a specific application.
       *
       * @param request RollbackApplicationRequest
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplication(const Models::RollbackApplicationRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription ENS instance.
       *
       * @param tmpReq RunInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstancesWithOptions(const Models::RunInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription ENS instance.
       *
       * @param request RunInstancesRequest
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstances(const Models::RunInstancesRequest &request);

      /**
       * @summary Schedules the nearest idle resources including instances and pods for your device based on the user ID and IP address and initializes the virtual environment.
       *
       * @param request RunServiceScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunServiceScheduleResponse
       */
      Models::RunServiceScheduleResponse runServiceScheduleWithOptions(const Models::RunServiceScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Schedules the nearest idle resources including instances and pods for your device based on the user ID and IP address and initializes the virtual environment.
       *
       * @param request RunServiceScheduleRequest
       * @return RunServiceScheduleResponse
       */
      Models::RunServiceScheduleResponse runServiceSchedule(const Models::RunServiceScheduleRequest &request);

      /**
       * @summary Saves the disk of a specific device as a shared data group (SDG).
       *
       * @param request SaveSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSDGResponse
       */
      Models::SaveSDGResponse saveSDGWithOptions(const Models::SaveSDGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the disk of a specific device as a shared data group (SDG).
       *
       * @param request SaveSDGRequest
       * @return SaveSDGResponse
       */
      Models::SaveSDGResponse saveSDG(const Models::SaveSDGRequest &request);

      /**
       * @summary Sets the weights of backend servers.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param tmpReq SetBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetBackendServersResponse
       */
      Models::SetBackendServersResponse setBackendServersWithOptions(const Models::SetBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the weights of backend servers.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request SetBackendServersRequest
       * @return SetBackendServersResponse
       */
      Models::SetBackendServersResponse setBackendServers(const Models::SetBackendServersRequest &request);

      /**
       * @summary Modifies the configurations of an HTTP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerHTTPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerHTTPListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an HTTP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerHTTPListenerAttributeRequest
       * @return SetLoadBalancerHTTPListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttribute(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request);

      /**
       * @summary Modifies the configurations of an HTTPS listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerHTTPSListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of an HTTPS listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerHTTPSListenerAttributeRequest
       * @return SetLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttribute(const Models::SetLoadBalancerHTTPSListenerAttributeRequest &request);

      /**
       * @summary Modifies the status of an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatusWithOptions(const Models::SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of an Edge Load Balancer (ELB) instance.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerStatusRequest
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatus(const Models::SetLoadBalancerStatusRequest &request);

      /**
       * @summary Modifies the configurations of a TCP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttributeWithOptions(const Models::SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a TCP listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttribute(const Models::SetLoadBalancerTCPListenerAttributeRequest &request);

      /**
       * @summary Modifies the configurations of a UDP listener.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request SetLoadBalancerUDPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerUDPListenerAttributeResponse
       */
      Models::SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttributeWithOptions(const Models::SetLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a UDP listener.
       *
       * @description *   You can call this operation up to 100 times per second.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request SetLoadBalancerUDPListenerAttributeRequest
       * @return SetLoadBalancerUDPListenerAttributeResponse
       */
      Models::SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttribute(const Models::SetLoadBalancerUDPListenerAttributeRequest &request);

      /**
       * @summary Share the specified AIC image to other users.
       *
       * @param tmpReq ShareAICImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShareAICImageResponse
       */
      Models::ShareAICImageResponse shareAICImageWithOptions(const Models::ShareAICImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Share the specified AIC image to other users.
       *
       * @param request ShareAICImageRequest
       * @return ShareAICImageResponse
       */
      Models::ShareAICImageResponse shareAICImage(const Models::ShareAICImageRequest &request);

      /**
       * @summary Starts an edge network instance.
       *
       * @param request StartEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEpnInstanceResponse
       */
      Models::StartEpnInstanceResponse startEpnInstanceWithOptions(const Models::StartEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an edge network instance.
       *
       * @param request StartEpnInstanceRequest
       * @return StartEpnInstanceResponse
       */
      Models::StartEpnInstanceResponse startEpnInstance(const Models::StartEpnInstanceRequest &request);

      /**
       * @summary Starts an instance.
       *
       * @description *   You can call the operation only when the instance is in the Stopped state.
       * *   If the operation is successful, the status of the instance becomes Starting.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an instance.
       *
       * @description *   You can call the operation only when the instance is in the Stopped state.
       * *   If the operation is successful, the status of the instance becomes Starting.
       *
       * @param request StartInstanceRequest
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

      /**
       * @summary 选择批量实例进行启动操作
       *
       * @param tmpReq StartInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstancesWithOptions(const Models::StartInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 选择批量实例进行启动操作
       *
       * @param request StartInstancesRequest
       * @return StartInstancesResponse
       */
      Models::StartInstancesResponse startInstances(const Models::StartInstancesRequest &request);

      /**
       * @summary Enables a listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request StartLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLoadBalancerListenerResponse
       */
      Models::StartLoadBalancerListenerResponse startLoadBalancerListenerWithOptions(const Models::StartLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request StartLoadBalancerListenerRequest
       * @return StartLoadBalancerListenerResponse
       */
      Models::StartLoadBalancerListenerResponse startLoadBalancerListener(const Models::StartLoadBalancerListenerRequest &request);

      /**
       * @summary Starts the elastic IP address (EIP) specified in a source network address translation (SNAT) entry.
       *
       * @param request StartSnatIpForSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartSnatIpForSnatEntryResponse
       */
      Models::StartSnatIpForSnatEntryResponse startSnatIpForSnatEntryWithOptions(const Models::StartSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts the elastic IP address (EIP) specified in a source network address translation (SNAT) entry.
       *
       * @param request StartSnatIpForSnatEntryRequest
       * @return StartSnatIpForSnatEntryResponse
       */
      Models::StartSnatIpForSnatEntryResponse startSnatIpForSnatEntry(const Models::StartSnatIpForSnatEntryRequest &request);

      /**
       * @summary Stops an EPN instance.
       *
       * @param request StopEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopEpnInstanceResponse
       */
      Models::StopEpnInstanceResponse stopEpnInstanceWithOptions(const Models::StopEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an EPN instance.
       *
       * @param request StopEpnInstanceRequest
       * @return StopEpnInstanceResponse
       */
      Models::StopEpnInstanceResponse stopEpnInstance(const Models::StopEpnInstanceRequest &request);

      /**
       * @summary Stops an instance.
       *
       * @description *   You can call this operation to stop instances that are only in the Running state.
       * *   If the call is successful, the state of the instance becomes Stopping.
       * *   Once the instance is stopped, the state of the instance becomes Stopped.
       * *   Force stop is supported, which is equivalent to power-off. Data that is not written to disks on the instance may be lost.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an instance.
       *
       * @description *   You can call this operation to stop instances that are only in the Running state.
       * *   If the call is successful, the state of the instance becomes Stopping.
       * *   Once the instance is stopped, the state of the instance becomes Stopped.
       * *   Force stop is supported, which is equivalent to power-off. Data that is not written to disks on the instance may be lost.
       *
       * @param request StopInstanceRequest
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

      /**
       * @summary 选择批量实例进行停止操作
       *
       * @param tmpReq StopInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstancesWithOptions(const Models::StopInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 选择批量实例进行停止操作
       *
       * @param request StopInstancesRequest
       * @return StopInstancesResponse
       */
      Models::StopInstancesResponse stopInstances(const Models::StopInstancesRequest &request);

      /**
       * @summary Disables a listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request StopLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLoadBalancerListenerResponse
       */
      Models::StopLoadBalancerListenerResponse stopLoadBalancerListenerWithOptions(const Models::StopLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a listener.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request StopLoadBalancerListenerRequest
       * @return StopLoadBalancerListenerResponse
       */
      Models::StopLoadBalancerListenerResponse stopLoadBalancerListener(const Models::StopLoadBalancerListenerRequest &request);

      /**
       * @summary Disables an elastic IP address (EIP) in a source network address translation (SNAT) entry.
       *
       * @param request StopSnatIpForSnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSnatIpForSnatEntryResponse
       */
      Models::StopSnatIpForSnatEntryResponse stopSnatIpForSnatEntryWithOptions(const Models::StopSnatIpForSnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an elastic IP address (EIP) in a source network address translation (SNAT) entry.
       *
       * @param request StopSnatIpForSnatEntryRequest
       * @return StopSnatIpForSnatEntryResponse
       */
      Models::StopSnatIpForSnatEntryResponse stopSnatIpForSnatEntry(const Models::StopSnatIpForSnatEntryRequest &request);

      /**
       * @summary Creates and adds tags to specific Edge Node Service (ENS) resources.
       *
       * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags on the resource. If the number exceeds the upper limit, an error message is returned. Only instance resources, such as virtual machines and bare machines, are supported.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and adds tags to specific Edge Node Service (ENS) resources.
       *
       * @description Before you add tags to a resource, Alibaba Cloud checks the number of existing tags on the resource. If the number exceeds the upper limit, an error message is returned. Only instance resources, such as virtual machines and bare machines, are supported.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Disassociates an elastic IP address (EIP) from an instance.
       *
       * @param request UnAssociateEnsEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnAssociateEnsEipAddressResponse
       */
      Models::UnAssociateEnsEipAddressResponse unAssociateEnsEipAddressWithOptions(const Models::UnAssociateEnsEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an elastic IP address (EIP) from an instance.
       *
       * @param request UnAssociateEnsEipAddressRequest
       * @return UnAssociateEnsEipAddressResponse
       */
      Models::UnAssociateEnsEipAddressResponse unAssociateEnsEipAddress(const Models::UnAssociateEnsEipAddressRequest &request);

      /**
       * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
       *
       * @param request UnassignPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignPrivateIpAddressesResponse
       */
      Models::UnassignPrivateIpAddressesResponse unassignPrivateIpAddressesWithOptions(const Models::UnassignPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unassigns secondary private IP addresses from an elastic network interface (ENI).
       *
       * @param request UnassignPrivateIpAddressesRequest
       * @return UnassignPrivateIpAddressesResponse
       */
      Models::UnassignPrivateIpAddressesResponse unassignPrivateIpAddresses(const Models::UnassignPrivateIpAddressesRequest &request);

      /**
       * @summary Disassociates a high-availability virtual IP address (HAVIP) from an Edge Node Service (ENS) instance or Elastic Network Interface (ENI).
       *
       * @param request UnassociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVipWithOptions(const Models::UnassociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a high-availability virtual IP address (HAVIP) from an Edge Node Service (ENS) instance or Elastic Network Interface (ENI).
       *
       * @param request UnassociateHaVipRequest
       * @return UnassociateHaVipResponse
       */
      Models::UnassociateHaVipResponse unassociateHaVip(const Models::UnassociateHaVipRequest &request);

      /**
       * @summary Disassociates a network access control list (ACL) from a network.
       *
       * @param request UnassociateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAclWithOptions(const Models::UnassociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a network access control list (ACL) from a network.
       *
       * @param request UnassociateNetworkAclRequest
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAcl(const Models::UnassociateNetworkAclRequest &request);

      /**
       * @summary Deletes preloaded data.
       *
       * @param tmpReq UnloadRegionSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnloadRegionSDGResponse
       */
      Models::UnloadRegionSDGResponse unloadRegionSDGWithOptions(const Models::UnloadRegionSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes preloaded data.
       *
       * @param request UnloadRegionSDGRequest
       * @return UnloadRegionSDGResponse
       */
      Models::UnloadRegionSDGResponse unloadRegionSDG(const Models::UnloadRegionSDGRequest &request);

      /**
       * @summary Unmounts a shared data group (SDG) from instances.
       *
       * @param tmpReq UnmountInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnmountInstanceSDGResponse
       */
      Models::UnmountInstanceSDGResponse unmountInstanceSDGWithOptions(const Models::UnmountInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmounts a shared data group (SDG) from instances.
       *
       * @param request UnmountInstanceSDGRequest
       * @return UnmountInstanceSDGResponse
       */
      Models::UnmountInstanceSDGResponse unmountInstanceSDG(const Models::UnmountInstanceSDGRequest &request);

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
       * @summary 修改售卖约束
       *
       * @param tmpReq UpdateEnsSaleControlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEnsSaleControlResponse
       */
      Models::UpdateEnsSaleControlResponse updateEnsSaleControlWithOptions(const Models::UpdateEnsSaleControlRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改售卖约束
       *
       * @param request UpdateEnsSaleControlRequest
       * @return UpdateEnsSaleControlResponse
       */
      Models::UpdateEnsSaleControlResponse updateEnsSaleControl(const Models::UpdateEnsSaleControlRequest &request);

      /**
       * @summary Updates the image of an Android in Container (AIC) instance.
       *
       * @param tmpReq UpgradeAICInstanceImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeAICInstanceImageResponse
       */
      Models::UpgradeAICInstanceImageResponse upgradeAICInstanceImageWithOptions(const Models::UpgradeAICInstanceImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the image of an Android in Container (AIC) instance.
       *
       * @param request UpgradeAICInstanceImageRequest
       * @return UpgradeAICInstanceImageResponse
       */
      Models::UpgradeAICInstanceImageResponse upgradeAICInstanceImage(const Models::UpgradeAICInstanceImageRequest &request);

      /**
       * @summary Updates the container in an asynchronous manner. You can configure multiple canary release policies.
       *
       * @param request UpgradeApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeApplicationResponse
       */
      Models::UpgradeApplicationResponse upgradeApplicationWithOptions(const Models::UpgradeApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the container in an asynchronous manner. You can configure multiple canary release policies.
       *
       * @param request UpgradeApplicationRequest
       * @return UpgradeApplicationResponse
       */
      Models::UpgradeApplicationResponse upgradeApplication(const Models::UpgradeApplicationRequest &request);

      /**
       * @summary Upload a new AIC public key.
       *
       * @param request UploadAICPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAICPublicKeyResponse
       */
      Models::UploadAICPublicKeyResponse uploadAICPublicKeyWithOptions(const Models::UploadAICPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a new AIC public key.
       *
       * @param request UploadAICPublicKeyRequest
       * @return UploadAICPublicKeyResponse
       */
      Models::UploadAICPublicKeyResponse uploadAICPublicKey(const Models::UploadAICPublicKeyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
