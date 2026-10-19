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
       * @summary Calls the AccosicateNetworkAcl operation to attach a network ACL to a network.
       *
       * @param request AccosicateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccosicateNetworkAclResponse
       */
      Models::AccosicateNetworkAclResponse accosicateNetworkAclWithOptions(const Models::AccosicateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the AccosicateNetworkAcl operation to attach a network ACL to a network.
       *
       * @param request AccosicateNetworkAclRequest
       * @return AccosicateNetworkAclResponse
       */
      Models::AccosicateNetworkAclResponse accosicateNetworkAcl(const Models::AccosicateNetworkAclRequest &request);

      /**
       * @summary Adds backend servers.
       *
       * @description - API call rate limit: 100 calls per second.
       * - Per-user call rate limit: 10 calls per second.
       *
       * @param tmpReq AddBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServersWithOptions(const Models::AddBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds backend servers.
       *
       * @description - API call rate limit: 100 calls per second.
       * - Per-user call rate limit: 10 calls per second.
       *
       * @param request AddBackendServersRequest
       * @return AddBackendServersResponse
       */
      Models::AddBackendServersResponse addBackendServers(const Models::AddBackendServersRequest &request);

      /**
       * @summary Adds an IPv6 network interface controller (NIC). A public IP address is automatically assigned at the same time.
       *
       * @description - up to 100 times per second per account.
       * - up to 5 times per second per user.
       * - Internal networks and IPv4 addresses are not supported.
       *
       * @param request AddNetworkInterfaceToInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddNetworkInterfaceToInstanceResponse
       */
      Models::AddNetworkInterfaceToInstanceResponse addNetworkInterfaceToInstanceWithOptions(const Models::AddNetworkInterfaceToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an IPv6 network interface controller (NIC). A public IP address is automatically assigned at the same time.
       *
       * @description - up to 100 times per second per account.
       * - up to 5 times per second per user.
       * - Internal networks and IPv4 addresses are not supported.
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
       * @summary Associates an Elastic IP Address (EIP) with a cloud product instance on the same edge node.
       *
       * @param request AssociateEnsEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateEnsEipAddressResponse
       */
      Models::AssociateEnsEipAddressResponse associateEnsEipAddressWithOptions(const Models::AssociateEnsEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates an Elastic IP Address (EIP) with a cloud product instance on the same edge node.
       *
       * @param request AssociateEnsEipAddressRequest
       * @return AssociateEnsEipAddressResponse
       */
      Models::AssociateEnsEipAddressResponse associateEnsEipAddress(const Models::AssociateEnsEipAddressRequest &request);

      /**
       * @summary Associates a high-availability virtual IP address (HAVIP) with an Edge Node Service (ENS) instance or elastic network interface (ENI).
       *
       * @description When you To associate an HAVIP, take note of the following items:
       * - An HAVIP immediately takes effect after it is associated. You do not need to restart the ENS instance. However, you need to associate the HAVIP with the ENI of the ENS instance.
       * - The HAVIP and ENS instance must belong to the same vSwitch.
       * - The ENS instance must be in the Running or Stopped state.
       * - The HAVIP must be in the Available or InUse state.
       * - AssociateHaVip is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the DescribeHaVips operation to query the status of an HAVIP:
       *   - If the HAVIP is in the Associating state, the HAVIP is being associated.
       *   <!---->
       *   - If the HAVIP is in the InUse state, the HAVIP is associated.
       *
       * @param request AssociateHaVipRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVipWithOptions(const Models::AssociateHaVipRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a high-availability virtual IP address (HAVIP) with an Edge Node Service (ENS) instance or elastic network interface (ENI).
       *
       * @description When you To associate an HAVIP, take note of the following items:
       * - An HAVIP immediately takes effect after it is associated. You do not need to restart the ENS instance. However, you need to associate the HAVIP with the ENI of the ENS instance.
       * - The HAVIP and ENS instance must belong to the same vSwitch.
       * - The ENS instance must be in the Running or Stopped state.
       * - The HAVIP must be in the Available or InUse state.
       * - AssociateHaVip is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can call the DescribeHaVips operation to query the status of an HAVIP:
       *   - If the HAVIP is in the Associating state, the HAVIP is being associated.
       *   <!---->
       *   - If the HAVIP is in the InUse state, the HAVIP is associated.
       *
       * @param request AssociateHaVipRequest
       * @return AssociateHaVipResponse
       */
      Models::AssociateHaVipResponse associateHaVip(const Models::AssociateHaVipRequest &request);

      /**
       * @summary Adds a secondary CIDR block to a network.
       *
       * @description The maximum number of secondary CIDR blocks that you can add to a network is as follows:
       * - A network supports up to five secondary IPv4 CIDR blocks.
       *
       * @param request AssociateNetworkCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateNetworkCidrBlockResponse
       */
      Models::AssociateNetworkCidrBlockResponse associateNetworkCidrBlockWithOptions(const Models::AssociateNetworkCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a secondary CIDR block to a network.
       *
       * @description The maximum number of secondary CIDR blocks that you can add to a network is as follows:
       * - A network supports up to five secondary IPv4 CIDR blocks.
       *
       * @param request AssociateNetworkCidrBlockRequest
       * @return AssociateNetworkCidrBlockResponse
       */
      Models::AssociateNetworkCidrBlockResponse associateNetworkCidrBlock(const Models::AssociateNetworkCidrBlockRequest &request);

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
       * @summary Add ENS instances to Container Service for Kubernetes.
       *
       * @description - Maximum request rate per user: 10 requests per second.
       * - After the command script runs successfully, the instance restarts and loads automatically.
       * - Instance requirements: minimum size of 2C4G and CentOS 7.4 or later image.
       * <props="china">
       * Before calling this operation, [activate Container Service for Kubernetes](https://cs.console.aliyun.com/#/k8s/overview).
       *
       * @param request AttachEnsInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachEnsInstancesResponse
       */
      Models::AttachEnsInstancesResponse attachEnsInstancesWithOptions(const Models::AttachEnsInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add ENS instances to Container Service for Kubernetes.
       *
       * @description - Maximum request rate per user: 10 requests per second.
       * - After the command script runs successfully, the instance restarts and loads automatically.
       * - Instance requirements: minimum size of 2C4G and CentOS 7.4 or later image.
       * <props="china">
       * Before calling this operation, [activate Container Service for Kubernetes](https://cs.console.aliyun.com/#/k8s/overview).
       *
       * @param request AttachEnsInstancesRequest
       * @return AttachEnsInstancesResponse
       */
      Models::AttachEnsInstancesResponse attachEnsInstances(const Models::AttachEnsInstancesRequest &request);

      /**
       * @summary Attaches an SDG to the corresponding AIC instance.
       *
       * @param tmpReq AttachInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstanceSDGResponse
       */
      Models::AttachInstanceSDGResponse attachInstanceSDGWithOptions(const Models::AttachInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an SDG to the corresponding AIC instance.
       *
       * @param request AttachInstanceSDGRequest
       * @return AttachInstanceSDGResponse
       */
      Models::AttachInstanceSDGResponse attachInstanceSDG(const Models::AttachInstanceSDGRequest &request);

      /**
       * @summary Adds existing instances to a node pool. You can call this operation to add existing Edge Node Service (ENS) instances to an ECK cluster as worker nodes, or to re-add node instances to a node pool after they are removed.
       *
       * @param tmpReq AttachInstancesToNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachInstancesToNodePoolResponse
       */
      Models::AttachInstancesToNodePoolResponse attachInstancesToNodePoolWithOptions(const Models::AttachInstancesToNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds existing instances to a node pool. You can call this operation to add existing Edge Node Service (ENS) instances to an ECK cluster as worker nodes, or to re-add node instances to a node pool after they are removed.
       *
       * @param request AttachInstancesToNodePoolRequest
       * @return AttachInstancesToNodePoolResponse
       */
      Models::AttachInstancesToNodePoolResponse attachInstancesToNodePool(const Models::AttachInstancesToNodePoolRequest &request);

      /**
       * @summary Attaches an SSH key pair to up to 30 instances in a single call.
       *
       * @description You can only attach a key pair to stopped instances.
       * - Specify up to 30 instances per call.
       * - Specify either `KeyPairName` or `KeyPairId`.
       * - We recommend using `KeyPairId`, as `KeyPairName` will be deprecated.
       *
       * @param tmpReq AttachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPairWithOptions(const Models::AttachKeyPairRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches an SSH key pair to up to 30 instances in a single call.
       *
       * @description You can only attach a key pair to stopped instances.
       * - Specify up to 30 instances per call.
       * - Specify either `KeyPairName` or `KeyPairId`.
       * - We recommend using `KeyPairId`, as `KeyPairName` will be deprecated.
       *
       * @param request AttachKeyPairRequest
       * @return AttachKeyPairResponse
       */
      Models::AttachKeyPairResponse attachKeyPair(const Models::AttachKeyPairRequest &request);

      /**
       * @summary Attaches an Elastic Network Interface (ENI) to an Edge Node Service (ECS) instance.
       *
       * @description When you call this operation, take note of the following limits:
       * - The ENI must be in the Available state.
       * - An ENI can be attached to only one instance that is the same zone and the same Virtual Private Cloud (VPC).
       * - The instance must be in the Stopped state.
       * - A maximum of 10 ENIs can be attached to an instance.
       * - This operation is an asynchronous operation. After you To attach an ENI, you can view the status of the ENI to check whether the ENI is attached.
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
       * - The ENI must be in the Available state.
       * - An ENI can be attached to only one instance that is the same zone and the same Virtual Private Cloud (VPC).
       * - The instance must be in the Stopped state.
       * - A maximum of 10 ENIs can be attached to an instance.
       * - This operation is an asynchronous operation. After you To attach an ENI, you can view the status of the ENI to check whether the ENI is attached.
       *
       * @param request AttachNetworkInterfaceRequest
       * @return AttachNetworkInterfaceResponse
       */
      Models::AttachNetworkInterfaceResponse attachNetworkInterface(const Models::AttachNetworkInterfaceRequest &request);

      /**
       * @summary Calls AuthorizeSecurityGroup to configure inbound access permissions for a security group, allowing or denying other devices from sending inbound traffic to instances in the security group.
       *
       * @param request AuthorizeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeSecurityGroupResponse
       */
      Models::AuthorizeSecurityGroupResponse authorizeSecurityGroupWithOptions(const Models::AuthorizeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls AuthorizeSecurityGroup to configure inbound access permissions for a security group, allowing or denying other devices from sending inbound traffic to instances in the security group.
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
       * @summary Batch migrates instances under a specified event. Supports immediate or scheduled execution.
       *
       * @description ## Operation description
       * - This O&M operation currently supports only the following event type: Instance:SystemUpgrade.Migrate (migration required due to underlying infrastructure upgrade).
       *
       * @param tmpReq BatchEventMigrateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEventMigrateInstanceResponse
       */
      Models::BatchEventMigrateInstanceResponse batchEventMigrateInstanceWithOptions(const Models::BatchEventMigrateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch migrates instances under a specified event. Supports immediate or scheduled execution.
       *
       * @description ## Operation description
       * - This O&M operation currently supports only the following event type: Instance:SystemUpgrade.Migrate (migration required due to underlying infrastructure upgrade).
       *
       * @param request BatchEventMigrateInstanceRequest
       * @return BatchEventMigrateInstanceResponse
       */
      Models::BatchEventMigrateInstanceResponse batchEventMigrateInstance(const Models::BatchEventMigrateInstanceRequest &request);

      /**
       * @summary Batch restarts specified resources immediately or at a scheduled time.
       *
       * @description - This O&M operation currently supports only the following event type: Instance:SystemMaintenance.Reboot (instance restart due to system maintenance).
       *
       * @param tmpReq BatchEventRebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEventRebootInstanceResponse
       */
      Models::BatchEventRebootInstanceResponse batchEventRebootInstanceWithOptions(const Models::BatchEventRebootInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch restarts specified resources immediately or at a scheduled time.
       *
       * @description - This O&M operation currently supports only the following event type: Instance:SystemMaintenance.Reboot (instance restart due to system maintenance).
       *
       * @param request BatchEventRebootInstanceRequest
       * @return BatchEventRebootInstanceResponse
       */
      Models::BatchEventRebootInstanceResponse batchEventRebootInstance(const Models::BatchEventRebootInstanceRequest &request);

      /**
       * @summary Batch redeploys specified resources immediately or at a scheduled time.
       *
       * @description - This O&M operation currently supports only the following event types: Instance:SystemFailure.Redeploy (instance redeployment due to system failures) and Instance:SystemMaintenance.Redeploy (instance redeployment due to system maintenance).
       *
       * @param tmpReq BatchEventRedeployInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchEventRedeployInstanceResponse
       */
      Models::BatchEventRedeployInstanceResponse batchEventRedeployInstanceWithOptions(const Models::BatchEventRedeployInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Batch redeploys specified resources immediately or at a scheduled time.
       *
       * @description - This O&M operation currently supports only the following event types: Instance:SystemFailure.Redeploy (instance redeployment due to system failures) and Instance:SystemMaintenance.Redeploy (instance redeployment due to system maintenance).
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
       * @summary Copies an SDG across edge zones by calling CopySDG.
       *
       * @param tmpReq CopySDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySDGResponse
       */
      Models::CopySDGResponse copySDGWithOptions(const Models::CopySDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Copies an SDG across edge zones by calling CopySDG.
       *
       * @param request CopySDGRequest
       * @return CopySDGResponse
       */
      Models::CopySDGResponse copySDG(const Models::CopySDGRequest &request);

      /**
       * @summary Calls CopySnapshot to copy a snapshot across edge zones.
       *
       * @param tmpReq CopySnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshotWithOptions(const Models::CopySnapshotRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls CopySnapshot to copy a snapshot across edge zones.
       *
       * @param request CopySnapshotRequest
       * @return CopySnapshotResponse
       */
      Models::CopySnapshotResponse copySnapshot(const Models::CopySnapshotRequest &request);

      /**
       * @summary Creates ARM board card servers by calling CreateARMServerInstances.
       *
       * @param request CreateARMServerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateARMServerInstancesResponse
       */
      Models::CreateARMServerInstancesResponse createARMServerInstancesWithOptions(const Models::CreateARMServerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates ARM board card servers by calling CreateARMServerInstances.
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
       * @summary Creates an edge container cluster.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Cluster creation is an asynchronous operation. After you call this operation, you must wait 10 to 20 minutes for the cluster to be initialized. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param tmpReq CreateClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createClusterWithOptions(const Models::CreateClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge container cluster.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Cluster creation is an asynchronous operation. After you call this operation, you must wait 10 to 20 minutes for the cluster to be initialized. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request CreateClusterRequest
       * @return CreateClusterResponse
       */
      Models::CreateClusterResponse createCluster(const Models::CreateClusterRequest &request);

      /**
       * @summary A node pool is a logical collection of nodes with identical attributes that enables unified management and O&M operations such as node upgrades and elastic scaling. You can further leverage the automated O&M capabilities of node pools to reduce O&M costs through features such as automatic OS CVE vulnerability remediation, automatic recovery of faulty nodes, and automatic version upgrades for kubelet and containerd. You can call the CreateClusterNodePool operation to create a node pool for a cluster.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Creating a cluster is an asynchronous operation. After the API call returns, you must wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param tmpReq CreateClusterNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClusterNodePoolResponse
       */
      Models::CreateClusterNodePoolResponse createClusterNodePoolWithOptions(const Models::CreateClusterNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A node pool is a logical collection of nodes with identical attributes that enables unified management and O&M operations such as node upgrades and elastic scaling. You can further leverage the automated O&M capabilities of node pools to reduce O&M costs through features such as automatic OS CVE vulnerability remediation, automatic recovery of faulty nodes, and automatic version upgrades for kubelet and containerd. You can call the CreateClusterNodePool operation to create a node pool for a cluster.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Creating a cluster is an asynchronous operation. After the API call returns, you must wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request CreateClusterNodePoolRequest
       * @return CreateClusterNodePoolResponse
       */
      Models::CreateClusterNodePoolResponse createClusterNodePool(const Models::CreateClusterNodePoolRequest &request);

      /**
       * @summary Creates a pay-as-you-go or subscription data cloud disk by calling CreateDisk.
       *
       * @param request CreateDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDiskWithOptions(const Models::CreateDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a pay-as-you-go or subscription data cloud disk by calling CreateDisk.
       *
       * @param request CreateDiskRequest
       * @return CreateDiskResponse
       */
      Models::CreateDiskResponse createDisk(const Models::CreateDiskRequest &request);

      /**
       * @summary Creates an elastic IP address (EIP) by calling the CreateEipInstance operation.
       *
       * @description - API call frequency: 5000 calls per second.
       * - Per-user call frequency: 50 calls per second.
       *
       * @param request CreateEipInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEipInstanceResponse
       */
      Models::CreateEipInstanceResponse createEipInstanceWithOptions(const Models::CreateEipInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an elastic IP address (EIP) by calling the CreateEipInstance operation.
       *
       * @description - API call frequency: 5000 calls per second.
       * - Per-user call frequency: 50 calls per second.
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
       * @summary Creates a NAS file system by calling the CreateFileSystem operation.
       *
       * @param tmpReq CreateFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystemWithOptions(const Models::CreateFileSystemRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAS file system by calling the CreateFileSystem operation.
       *
       * @param request CreateFileSystemRequest
       * @return CreateFileSystemResponse
       */
      Models::CreateFileSystemResponse createFileSystem(const Models::CreateFileSystemRequest &request);

      /**
       * @summary Adds a DNAT entry by calling CreateForwardEntry.
       *
       * @param request CreateForwardEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateForwardEntryResponse
       */
      Models::CreateForwardEntryResponse createForwardEntryWithOptions(const Models::CreateForwardEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a DNAT entry by calling CreateForwardEntry.
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
       * @summary Creates an image from a specified instance.
       *
       * @param request CreateImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImageWithOptions(const Models::CreateImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image from a specified instance.
       *
       * @param request CreateImageRequest
       * @return CreateImageResponse
       */
      Models::CreateImageResponse createImage(const Models::CreateImageRequest &request);

      /**
       * @summary Creates a subscription instance. This operation can be replaced by RunInstances. No new features will be added to CreateInstance.
       *
       * @description - Per-user call frequency: 10 calls per second.
       * - Because instance creation is an asynchronous operation, increase the request timeout as needed. When the API returns Code=0, this only indicates that the request was successful, not that the instance was created successfully. An instance ID is returned upon a successful request. You can then query the instance by its ID to check whether the instance is created.
       * - InvalidUserData.NotInWhiteList restriction: Only accounts that are added to the relevant whitelist with purchase permissions can create instances. Otherwise, an error is returned.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a subscription instance. This operation can be replaced by RunInstances. No new features will be added to CreateInstance.
       *
       * @description - Per-user call frequency: 10 calls per second.
       * - Because instance creation is an asynchronous operation, increase the request timeout as needed. When the API returns Code=0, this only indicates that the request was successful, not that the instance was created successfully. An instance ID is returned upon a successful request. You can then query the instance by its ID to check whether the instance is created.
       * - InvalidUserData.NotInWhiteList restriction: Only accounts that are added to the relevant whitelist with purchase permissions can create instances. Otherwise, an error is returned.
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
       * @summary Creates a load balancing instance by calling the CreateLoadBalancer operation.
       *
       * @description - API call frequency: 100 times per second.
       * - Per-user call frequency: 5 times per second.
       *
       * @param request CreateLoadBalancerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancerWithOptions(const Models::CreateLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a load balancing instance by calling the CreateLoadBalancer operation.
       *
       * @description - API call frequency: 100 times per second.
       * - Per-user call frequency: 5 times per second.
       *
       * @param request CreateLoadBalancerRequest
       * @return CreateLoadBalancerResponse
       */
      Models::CreateLoadBalancerResponse createLoadBalancer(const Models::CreateLoadBalancerRequest &request);

      /**
       * @summary Creates an HTTP listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerHTTPListenerResponse
       */
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListenerWithOptions(const Models::CreateLoadBalancerHTTPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTP listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPListenerRequest
       * @return CreateLoadBalancerHTTPListenerResponse
       */
      Models::CreateLoadBalancerHTTPListenerResponse createLoadBalancerHTTPListener(const Models::CreateLoadBalancerHTTPListenerRequest &request);

      /**
       * @summary Creates an HTTPS listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPSListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerHTTPSListenerResponse
       */
      Models::CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListenerWithOptions(const Models::CreateLoadBalancerHTTPSListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an HTTPS listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request CreateLoadBalancerHTTPSListenerRequest
       * @return CreateLoadBalancerHTTPSListenerResponse
       */
      Models::CreateLoadBalancerHTTPSListenerResponse createLoadBalancerHTTPSListener(const Models::CreateLoadBalancerHTTPSListenerRequest &request);

      /**
       * @summary To create a TCP listener, call `CreateLoadBalancerTCPListener`.
       *
       * @description - API call rate: 100 requests per second.
       * - Per-user call rate: 10 requests per second.
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListenerWithOptions(const Models::CreateLoadBalancerTCPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To create a TCP listener, call `CreateLoadBalancerTCPListener`.
       *
       * @description - API call rate: 100 requests per second.
       * - Per-user call rate: 10 requests per second.
       *
       * @param request CreateLoadBalancerTCPListenerRequest
       * @return CreateLoadBalancerTCPListenerResponse
       */
      Models::CreateLoadBalancerTCPListenerResponse createLoadBalancerTCPListener(const Models::CreateLoadBalancerTCPListenerRequest &request);

      /**
       * @summary To create a UDP listener, call `CreateLoadBalancerUDPListener`.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request CreateLoadBalancerUDPListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoadBalancerUDPListenerResponse
       */
      Models::CreateLoadBalancerUDPListenerResponse createLoadBalancerUDPListenerWithOptions(const Models::CreateLoadBalancerUDPListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To create a UDP listener, call `CreateLoadBalancerUDPListener`.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
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
       * @summary Creates a NAT gateway.
       *
       * @param request CreateNatGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGatewayWithOptions(const Models::CreateNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a NAT gateway.
       *
       * @param request CreateNatGatewayRequest
       * @return CreateNatGatewayResponse
       */
      Models::CreateNatGatewayResponse createNatGateway(const Models::CreateNatGatewayRequest &request);

      /**
       * @summary Creates a VPC.
       *
       * @description - API rate limit: 100 calls per second.
       * - Rate limit per user: 5 calls per second.
       *
       * @param request CreateNetworkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkResponse
       */
      Models::CreateNetworkResponse createNetworkWithOptions(const Models::CreateNetworkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a VPC.
       *
       * @description - API rate limit: 100 calls per second.
       * - Rate limit per user: 5 calls per second.
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
       * @summary You can invoke the CreateNetworkAclEntry API to create a network ACL rule.
       *
       * @param request CreateNetworkAclEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkAclEntryResponse
       */
      Models::CreateNetworkAclEntryResponse createNetworkAclEntryWithOptions(const Models::CreateNetworkAclEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the CreateNetworkAclEntry API to create a network ACL rule.
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
       * @summary Creates a Shared Data Group (SDG) on an Android in Container (AIC) instance.
       *
       * @description A Shared Data Group (SDG) is a data partition image of a virtual device. You can save the data partition of a virtual device as an SDG. The SDG can then be deployed to the data partition of other virtual devices for fast data sharing and application deployment. The following describes the workflow of SDG-related operations:
       * - Call the [CreateSDG](~~CreateSDG~~) operation to create an SDG. The SDG is bound to AIC instance A (InstanceId). After the SDG is created, a blank cloud disk (also called a raw cloud disk) is mounted to device A (InstanceId) for SDG creation.
       * - Install applications, deliver files, and perform other required operations on AIC instance A (InstanceId).
       * - Call the [SaveSDG](~~SaveSDG~~) operation to save the data cloud disk of AIC instance A as SDG A.
       * - Call the [DeploySDG](~~DeploySDG~~) operation to deploy SDG A to AIC instance B. This process is asynchronous. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the status of AIC instance B. When the status changes back to success, AIC instance B is available and has the same applications as AIC instance A.
       *
       * @param request CreateSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSDGResponse
       */
      Models::CreateSDGResponse createSDGWithOptions(const Models::CreateSDGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Shared Data Group (SDG) on an Android in Container (AIC) instance.
       *
       * @description A Shared Data Group (SDG) is a data partition image of a virtual device. You can save the data partition of a virtual device as an SDG. The SDG can then be deployed to the data partition of other virtual devices for fast data sharing and application deployment. The following describes the workflow of SDG-related operations:
       * - Call the [CreateSDG](~~CreateSDG~~) operation to create an SDG. The SDG is bound to AIC instance A (InstanceId). After the SDG is created, a blank cloud disk (also called a raw cloud disk) is mounted to device A (InstanceId) for SDG creation.
       * - Install applications, deliver files, and perform other required operations on AIC instance A (InstanceId).
       * - Call the [SaveSDG](~~SaveSDG~~) operation to save the data cloud disk of AIC instance A as SDG A.
       * - Call the [DeploySDG](~~DeploySDG~~) operation to deploy SDG A to AIC instance B. This process is asynchronous. You can call the [DescribeARMServerInstances](~~DescribeARMServerInstances~~) operation to query the status of AIC instance B. When the status changes back to success, AIC instance B is available and has the same applications as AIC instance A.
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
       * @summary Creates a security group rule for Edge Node Service (ENS).
       *
       * @param tmpReq CreateSecurityGroupPermissionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSecurityGroupPermissionsResponse
       */
      Models::CreateSecurityGroupPermissionsResponse createSecurityGroupPermissionsWithOptions(const Models::CreateSecurityGroupPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a security group rule for Edge Node Service (ENS).
       *
       * @param request CreateSecurityGroupPermissionsRequest
       * @return CreateSecurityGroupPermissionsResponse
       */
      Models::CreateSecurityGroupPermissionsResponse createSecurityGroupPermissions(const Models::CreateSecurityGroupPermissionsRequest &request);

      /**
       * @summary Creates a snapshot by calling CreateSnapshot.
       *
       * @param request CreateSnapshotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSnapshotResponse
       */
      Models::CreateSnapshotResponse createSnapshotWithOptions(const Models::CreateSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a snapshot by calling CreateSnapshot.
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
       * @summary Creates a vSwitch.
       *
       * @param request CreateVSwitchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitchWithOptions(const Models::CreateVSwitchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a vSwitch.
       *
       * @param request CreateVSwitchRequest
       * @return CreateVSwitchResponse
       */
      Models::CreateVSwitchResponse createVSwitch(const Models::CreateVSwitchRequest &request);

      /**
       * @summary Deletes a specified AIC public key. The public key can be deleted only when it is not associated with any resource.
       *
       * @param request DeleteAICPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAICPublicKeyResponse
       */
      Models::DeleteAICPublicKeyResponse deleteAICPublicKeyWithOptions(const Models::DeleteAICPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified AIC public key. The public key can be deleted only when it is not associated with any resource.
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
       * @summary You can call the DeleteBucket operation to delete a bucket.
       *
       * @description - Only the Alibaba Cloud account that owns the bucket can delete it.
       * - A bucket must be empty before it can be deleted.
       *
       * @param request DeleteBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBucketResponse
       */
      Models::DeleteBucketResponse deleteBucketWithOptions(const Models::DeleteBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DeleteBucket operation to delete a bucket.
       *
       * @description - Only the Alibaba Cloud account that owns the bucket can delete it.
       * - A bucket must be empty before it can be deleted.
       *
       * @param request DeleteBucketRequest
       * @return DeleteBucketResponse
       */
      Models::DeleteBucketResponse deleteBucket(const Models::DeleteBucketRequest &request);

      /**
       * @summary Deletes the lifecycle rules of a bucket.
       *
       * @param request DeleteBucketLifecycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBucketLifecycleResponse
       */
      Models::DeleteBucketLifecycleResponse deleteBucketLifecycleWithOptions(const Models::DeleteBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the lifecycle rules of a bucket.
       *
       * @param request DeleteBucketLifecycleRequest
       * @return DeleteBucketLifecycleResponse
       */
      Models::DeleteBucketLifecycleResponse deleteBucketLifecycle(const Models::DeleteBucketLifecycleRequest &request);

      /**
       * @summary Deletes a cluster.
       *
       * @description You can specify the RetainResources parameter when you delete a cluster. The default value is false. If you set this parameter to true, the Edge Node Service (ENS) compute instances on which worker nodes run are retained.
       * When you delete a cluster, all nodes and node pools in the cluster are automatically deleted. ENS compute instances that you manually added by using scripts obtained from the DescribeAttachScript operation are retained.
       * If a node pool in the cluster is being scaled out or in, wait until the scaling process is complete before you delete the cluster.
       *
       * @param request DeleteClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteClusterWithOptions(const Models::DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cluster.
       *
       * @description You can specify the RetainResources parameter when you delete a cluster. The default value is false. If you set this parameter to true, the Edge Node Service (ENS) compute instances on which worker nodes run are retained.
       * When you delete a cluster, all nodes and node pools in the cluster are automatically deleted. ENS compute instances that you manually added by using scripts obtained from the DescribeAttachScript operation are retained.
       * If a node pool in the cluster is being scaled out or in, wait until the scaling process is complete before you delete the cluster.
       *
       * @param request DeleteClusterRequest
       * @return DeleteClusterResponse
       */
      Models::DeleteClusterResponse deleteCluster(const Models::DeleteClusterRequest &request);

      /**
       * @summary Deletes an unused node pool. When a node pool is deleted, all pods on the nodes in the node pool are deleted. This may trigger rescheduling. If rescheduling fails, your services may be affected. Make sure that the cluster has sufficient resources for rescheduling.
       *
       * @description - Call frequency per user: 10 calls per second.
       * - Creating a cluster is an asynchronous operation. After the API call returns, wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request DeleteClusterNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterNodePoolResponse
       */
      Models::DeleteClusterNodePoolResponse deleteClusterNodePoolWithOptions(const Models::DeleteClusterNodePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an unused node pool. When a node pool is deleted, all pods on the nodes in the node pool are deleted. This may trigger rescheduling. If rescheduling fails, your services may be affected. Make sure that the cluster has sufficient resources for rescheduling.
       *
       * @description - Call frequency per user: 10 calls per second.
       * - Creating a cluster is an asynchronous operation. After the API call returns, wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request DeleteClusterNodePoolRequest
       * @return DeleteClusterNodePoolResponse
       */
      Models::DeleteClusterNodePoolResponse deleteClusterNodePool(const Models::DeleteClusterNodePoolRequest &request);

      /**
       * @summary Removes nodes from a cluster when the nodes are no longer needed. The ReleaseNode parameter specifies whether to release the underlying Edge Node Service (ENS) compute instances. Default value: false. If the node to be removed is in the failed state, this parameter does not take effect and the corresponding compute instance is released by default. For ENS compute instances that you manually connect to the cluster by using the script obtained from the DescribeAttachScript operation, this parameter does not take effect and the corresponding compute instances are not released by default.
       *
       * @description If ReleaseNode is set to false, you must manually stop the kubelet process on the node before you call DeleteClusterNodes. Otherwise, the node may automatically rejoin the cluster.
       *
       * @param tmpReq DeleteClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClusterNodesResponse
       */
      Models::DeleteClusterNodesResponse deleteClusterNodesWithOptions(const Models::DeleteClusterNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes nodes from a cluster when the nodes are no longer needed. The ReleaseNode parameter specifies whether to release the underlying Edge Node Service (ENS) compute instances. Default value: false. If the node to be removed is in the failed state, this parameter does not take effect and the corresponding compute instance is released by default. For ENS compute instances that you manually connect to the cluster by using the script obtained from the DescribeAttachScript operation, this parameter does not take effect and the corresponding compute instances are not released by default.
       *
       * @description If ReleaseNode is set to false, you must manually stop the kubelet process on the node before you call DeleteClusterNodes. Otherwise, the node may automatically rejoin the cluster.
       *
       * @param request DeleteClusterNodesRequest
       * @return DeleteClusterNodesResponse
       */
      Models::DeleteClusterNodesResponse deleteClusterNodes(const Models::DeleteClusterNodesRequest &request);

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
       * @summary Calls DeleteFileSystem to delete a NAS service.
       *
       * @description Deletes a NAS file system. Before deleting the file system, call DeleteMountTarget to delete all mount targets of the file system. After DeleteMountTarget succeeds, there is an eventual consistency window. Poll DescribeFileSystems to confirm that MountTargets is empty before calling this API operation.
       *
       * @param request DeleteFileSystemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFileSystemResponse
       */
      Models::DeleteFileSystemResponse deleteFileSystemWithOptions(const Models::DeleteFileSystemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls DeleteFileSystem to delete a NAS service.
       *
       * @description Deletes a NAS file system. Before deleting the file system, call DeleteMountTarget to delete all mount targets of the file system. After DeleteMountTarget succeeds, there is an eventual consistency window. Poll DescribeFileSystems to confirm that MountTargets is empty before calling this API operation.
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
       * @description - After you delete an SSH key pair, you can no longer query the key pair by calling the DescribeKeyPairs operation.
       * - If you delete an SSH key pair that is bound to an Edge Node Service (ENS) instance, ENS no longer stores the SSH key pair. However, you can still use the key pair to access the instance. When you call the DescribeInstance operation to query instance information, no other information but the name of the key pair (**KeyPairName**) is returned.
       *
       * @param request DeleteKeyPairsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairsWithOptions(const Models::DeleteKeyPairsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes SSH key pairs.
       *
       * @description - After you delete an SSH key pair, you can no longer query the key pair by calling the DescribeKeyPairs operation.
       * - If you delete an SSH key pair that is bound to an Edge Node Service (ENS) instance, ENS no longer stores the SSH key pair. However, you can still use the key pair to access the instance. When you call the DescribeInstance operation to query instance information, no other information but the name of the key pair (**KeyPairName**) is returned.
       *
       * @param request DeleteKeyPairsRequest
       * @return DeleteKeyPairsResponse
       */
      Models::DeleteKeyPairsResponse deleteKeyPairs(const Models::DeleteKeyPairsRequest &request);

      /**
       * @summary Deletes a listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request DeleteLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoadBalancerListenerResponse
       */
      Models::DeleteLoadBalancerListenerResponse deleteLoadBalancerListenerWithOptions(const Models::DeleteLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
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
       * @summary Deletes a network peer connection.
       *
       * @param request DeleteNetworkPeerConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkPeerConnectionResponse
       */
      Models::DeleteNetworkPeerConnectionResponse deleteNetworkPeerConnectionWithOptions(const Models::DeleteNetworkPeerConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network peer connection.
       *
       * @param request DeleteNetworkPeerConnectionRequest
       * @return DeleteNetworkPeerConnectionResponse
       */
      Models::DeleteNetworkPeerConnectionResponse deleteNetworkPeerConnection(const Models::DeleteNetworkPeerConnectionRequest &request);

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
       * @summary Deletes an SDG by calling DeleteSDG.
       *
       * @description If all SDGs associated with the original cloud disk are deleted, the original cloud disk is automatically cleaned up.
       *
       * @param tmpReq DeleteSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSDGResponse
       */
      Models::DeleteSDGResponse deleteSDGWithOptions(const Models::DeleteSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SDG by calling DeleteSDG.
       *
       * @description If all SDGs associated with the original cloud disk are deleted, the original cloud disk is automatically cleaned up.
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
       * @summary Deploys an SDG to compute instances.
       *
       * @param tmpReq DeployInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeployInstanceSDGResponse
       */
      Models::DeployInstanceSDGResponse deployInstanceSDGWithOptions(const Models::DeployInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an SDG to compute instances.
       *
       * @param request DeployInstanceSDGRequest
       * @return DeployInstanceSDGResponse
       */
      Models::DeployInstanceSDGResponse deployInstanceSDG(const Models::DeployInstanceSDGRequest &request);

      /**
       * @summary Deploys an SDG.
       *
       * @param tmpReq DeploySDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeploySDGResponse
       */
      Models::DeploySDGResponse deploySDGWithOptions(const Models::DeploySDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an SDG.
       *
       * @param request DeploySDGRequest
       * @return DeploySDGResponse
       */
      Models::DeploySDGResponse deploySDG(const Models::DeploySDGRequest &request);

      /**
       * @summary Retrieves image information.
       *
       * @param request DescribeAICImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAICImagesResponse
       */
      Models::DescribeAICImagesResponse describeAICImagesWithOptions(const Models::DescribeAICImagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves image information.
       *
       * @param request DescribeAICImagesRequest
       * @return DescribeAICImagesResponse
       */
      Models::DescribeAICImagesResponse describeAICImages(const Models::DescribeAICImagesRequest &request);

      /**
       * @summary Retrieves information about ARM servers and AIC instances.
       *
       * @param tmpReq DescribeARMServerInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeARMServerInstancesResponse
       */
      Models::DescribeARMServerInstancesResponse describeARMServerInstancesWithOptions(const Models::DescribeARMServerInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about ARM servers and AIC instances.
       *
       * @param request DescribeARMServerInstancesRequest
       * @return DescribeARMServerInstancesResponse
       */
      Models::DescribeARMServerInstancesResponse describeARMServerInstances(const Models::DescribeARMServerInstancesRequest &request);

      /**
       * @summary Queries the details of a specified add-on.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeAddonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAddonResponse
       */
      Models::DescribeAddonResponse describeAddonWithOptions(const Models::DescribeAddonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified add-on.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeAddonRequest
       * @return DescribeAddonResponse
       */
      Models::DescribeAddonResponse describeAddon(const Models::DescribeAddonRequest &request);

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
       * @summary Queries the instance resources that can be created by calling DescribeAvailableResource.
       *
       * @description Queries available resources. A successful business response is indicated by Code=0 in the response body. Do not confuse the business code in the response body with the HTTP status code.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResourceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the instance resources that can be created by calling DescribeAvailableResource.
       *
       * @description Queries available resources. A successful business response is indicated by Code=0 in the response body. Do not confuse the business code in the response body with the HTTP status code.
       *
       * @return DescribeAvailableResourceResponse
       */
      Models::DescribeAvailableResourceResponse describeAvailableResource();

      /**
       * @summary You can call DescribeAvailableResourceInfo to query the specifications of purchasable resources for instance creation.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAvailableResourceInfoResponse
       */
      Models::DescribeAvailableResourceInfoResponse describeAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call DescribeAvailableResourceInfo to query the specifications of purchasable resources for instance creation.
       *
       * @return DescribeAvailableResourceInfoResponse
       */
      Models::DescribeAvailableResourceInfoResponse describeAvailableResourceInfo();

      /**
       * @summary Queries available bandwidth metering methods.
       *
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
       * @summary Queries edge container clusters.
       *
       * @description - Single-user call frequency: 100 calls per second.
       *
       * @param request DescribeClusterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterResponse
       */
      Models::DescribeClusterResponse describeClusterWithOptions(const Models::DescribeClusterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries edge container clusters.
       *
       * @description - Single-user call frequency: 100 calls per second.
       *
       * @param request DescribeClusterRequest
       * @return DescribeClusterResponse
       */
      Models::DescribeClusterResponse describeCluster(const Models::DescribeClusterRequest &request);

      /**
       * @summary To add an existing ENS instance to an ECK cluster as a worker node or re-add a node to a node pool, call the DescribeClusterAttachScripts operation to get the required script.
       *
       * @param request DescribeClusterAttachScriptsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterAttachScriptsResponse
       */
      Models::DescribeClusterAttachScriptsResponse describeClusterAttachScriptsWithOptions(const Models::DescribeClusterAttachScriptsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary To add an existing ENS instance to an ECK cluster as a worker node or re-add a node to a node pool, call the DescribeClusterAttachScripts operation to get the required script.
       *
       * @param request DescribeClusterAttachScriptsRequest
       * @return DescribeClusterAttachScriptsResponse
       */
      Models::DescribeClusterAttachScriptsResponse describeClusterAttachScripts(const Models::DescribeClusterAttachScriptsRequest &request);

      /**
       * @summary Queries the details of a cluster.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterDetailResponse
       */
      Models::DescribeClusterDetailResponse describeClusterDetailWithOptions(const Models::DescribeClusterDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a cluster.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterDetailRequest
       * @return DescribeClusterDetailResponse
       */
      Models::DescribeClusterDetailResponse describeClusterDetail(const Models::DescribeClusterDetailRequest &request);

      /**
       * @summary Queries the certificate of an edge container cluster.
       *
       * @description - Single-user call frequency: 100 calls per second.
       *
       * @param request DescribeClusterKubeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterKubeConfigResponse
       */
      Models::DescribeClusterKubeConfigResponse describeClusterKubeConfigWithOptions(const Models::DescribeClusterKubeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate of an edge container cluster.
       *
       * @description - Single-user call frequency: 100 calls per second.
       *
       * @param request DescribeClusterKubeConfigRequest
       * @return DescribeClusterKubeConfigResponse
       */
      Models::DescribeClusterKubeConfigResponse describeClusterKubeConfig(const Models::DescribeClusterKubeConfigRequest &request);

      /**
       * @summary Queries all node pools in a cluster.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterNodePoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodePoolsResponse
       */
      Models::DescribeClusterNodePoolsResponse describeClusterNodePoolsWithOptions(const Models::DescribeClusterNodePoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all node pools in a cluster.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterNodePoolsRequest
       * @return DescribeClusterNodePoolsResponse
       */
      Models::DescribeClusterNodePoolsResponse describeClusterNodePools(const Models::DescribeClusterNodePoolsRequest &request);

      /**
       * @summary Queries a list of nodes that meet specific conditions.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterNodesResponse
       */
      Models::DescribeClusterNodesResponse describeClusterNodesWithOptions(const Models::DescribeClusterNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of nodes that meet specific conditions.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterNodesRequest
       * @return DescribeClusterNodesResponse
       */
      Models::DescribeClusterNodesResponse describeClusterNodes(const Models::DescribeClusterNodesRequest &request);

      /**
       * @summary Retrieves the KubeConfig of a specified cluster. KubeConfig is used to configure access credentials for an ECK cluster on the client side, including identity and authentication data for accessing the target cluster. When you use kubectl for cluster management, you must first connect to the cluster by using KubeConfig. You can invoke the DescribeClusterUserKubeconfig operation to query the KubeConfig of the specified cluster.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterUserKubeconfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeClusterUserKubeconfigResponse
       */
      Models::DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfigWithOptions(const Models::DescribeClusterUserKubeconfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the KubeConfig of a specified cluster. KubeConfig is used to configure access credentials for an ECK cluster on the client side, including identity and authentication data for accessing the target cluster. When you use kubectl for cluster management, you must first connect to the cluster by using KubeConfig. You can invoke the DescribeClusterUserKubeconfig operation to query the KubeConfig of the specified cluster.
       *
       * @description - Rate limit per user: 100 calls per second.
       *
       * @param request DescribeClusterUserKubeconfigRequest
       * @return DescribeClusterUserKubeconfigResponse
       */
      Models::DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfig(const Models::DescribeClusterUserKubeconfigRequest &request);

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
       * @summary Retrieves the distribution status of data files across edge resource instances of an application by calling DescribeDataDistResult.
       *
       * @param tmpReq DescribeDataDistResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataDistResultResponse
       */
      Models::DescribeDataDistResultResponse describeDataDistResultWithOptions(const Models::DescribeDataDistResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the distribution status of data files across edge resource instances of an application by calling DescribeDataDistResult.
       *
       * @param request DescribeDataDistResultRequest
       * @return DescribeDataDistResultResponse
       */
      Models::DescribeDataDistResultResponse describeDataDistResult(const Models::DescribeDataDistResultRequest &request);

      /**
       * @summary Retrieves the download URL of application data from file servers and returns the list of file servers to which the data has been successfully pre-pushed.
       *
       * @param request DescribeDataDownloadURLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataDownloadURLResponse
       */
      Models::DescribeDataDownloadURLResponse describeDataDownloadURLWithOptions(const Models::DescribeDataDownloadURLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the download URL of application data from file servers and returns the list of file servers to which the data has been successfully pre-pushed.
       *
       * @param request DescribeDataDownloadURLRequest
       * @return DescribeDataDownloadURLResponse
       */
      Models::DescribeDataDownloadURLResponse describeDataDownloadURL(const Models::DescribeDataDownloadURLRequest &request);

      /**
       * @summary Queries the pre-push status of data files for an application on edge nodes.
       *
       * @description Queries the pre-push results of application data. Before calling this operation, make sure that your account has activated the Edge Node Service (ENS) edge application hosting service.
       *
       * @param request DescribeDataPushResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataPushResultResponse
       */
      Models::DescribeDataPushResultResponse describeDataPushResultWithOptions(const Models::DescribeDataPushResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the pre-push status of data files for an application on edge nodes.
       *
       * @description Queries the pre-push results of application data. Before calling this operation, make sure that your account has activated the Edge Node Service (ENS) edge application hosting service.
       *
       * @param request DescribeDataPushResultRequest
       * @return DescribeDataPushResultResponse
       */
      Models::DescribeDataPushResultResponse describeDataPushResult(const Models::DescribeDataPushResultRequest &request);

      /**
       * @summary Queries the list of basic property information such as instances and virtual device network status under an edge application.
       *
       * @param request DescribeDeviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeviceServiceResponse
       */
      Models::DescribeDeviceServiceResponse describeDeviceServiceWithOptions(const Models::DescribeDeviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of basic property information such as instances and virtual device network status under an edge application.
       *
       * @param request DescribeDeviceServiceRequest
       * @return DescribeDeviceServiceResponse
       */
      Models::DescribeDeviceServiceResponse describeDeviceService(const Models::DescribeDeviceServiceRequest &request);

      /**
       * @summary Queries disk IOPS monitoring data.
       *
       * @param request DescribeDiskIopsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDiskIopsListResponse
       */
      Models::DescribeDiskIopsListResponse describeDiskIopsListWithOptions(const Models::DescribeDiskIopsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries disk IOPS monitoring data.
       *
       * @param request DescribeDiskIopsListRequest
       * @return DescribeDiskIopsListResponse
       */
      Models::DescribeDiskIopsListResponse describeDiskIopsList(const Models::DescribeDiskIopsListRequest &request);

      /**
       * @summary Queries information about one or more created disks.
       *
       * @param request DescribeDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisksWithOptions(const Models::DescribeDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more created disks.
       *
       * @param request DescribeDisksRequest
       * @return DescribeDisksResponse
       */
      Models::DescribeDisksResponse describeDisks(const Models::DescribeDisksRequest &request);

      /**
       * @summary Queries the specifications of available resources for purchase when you create an instance by calling DescribeElbAvailableResourceInfo.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeElbAvailableResourceInfoResponse
       */
      Models::DescribeElbAvailableResourceInfoResponse describeElbAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of available resources for purchase when you create an instance by calling DescribeElbAvailableResourceInfo.
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
       * @summary Queries elastic IP addresses (EIPs) in Edge Node Service (ENS).
       *
       * @param request DescribeEnsEipAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsEipAddressesResponse
       */
      Models::DescribeEnsEipAddressesResponse describeEnsEipAddressesWithOptions(const Models::DescribeEnsEipAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries elastic IP addresses (EIPs) in Edge Node Service (ENS).
       *
       * @param request DescribeEnsEipAddressesRequest
       * @return DescribeEnsEipAddressesResponse
       */
      Models::DescribeEnsEipAddressesResponse describeEnsEipAddresses(const Models::DescribeEnsEipAddressesRequest &request);

      /**
       * @summary Invoke DescribeEnsNetDistrict to query the regions where edge service resources can be created.
       *
       * @param request DescribeEnsNetDistrictRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsNetDistrictResponse
       */
      Models::DescribeEnsNetDistrictResponse describeEnsNetDistrictWithOptions(const Models::DescribeEnsNetDistrictRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DescribeEnsNetDistrict to query the regions where edge service resources can be created.
       *
       * @param request DescribeEnsNetDistrictRequest
       * @return DescribeEnsNetDistrictResponse
       */
      Models::DescribeEnsNetDistrictResponse describeEnsNetDistrict(const Models::DescribeEnsNetDistrictRequest &request);

      /**
       * @summary Queries the supported network levels.
       *
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
       * @summary Queries edge zone resource information by calling DescribeEnsRegionIdResource.
       *
       * @description ****
       *
       * @param request DescribeEnsRegionIdResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRegionIdResourceResponse
       */
      Models::DescribeEnsRegionIdResourceResponse describeEnsRegionIdResourceWithOptions(const Models::DescribeEnsRegionIdResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries edge zone resource information by calling DescribeEnsRegionIdResource.
       *
       * @description ****
       *
       * @param request DescribeEnsRegionIdResourceRequest
       * @return DescribeEnsRegionIdResourceResponse
       */
      Models::DescribeEnsRegionIdResourceResponse describeEnsRegionIdResource(const Models::DescribeEnsRegionIdResourceRequest &request);

      /**
       * @summary Queries a list of available ENS nodes.
       *
       * @param request DescribeEnsRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEnsRegionsResponse
       */
      Models::DescribeEnsRegionsResponse describeEnsRegionsWithOptions(const Models::DescribeEnsRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of available ENS nodes.
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
       * @summary Invokes DescribeEpnBandWidthData to query the network bandwidth usage of an edge-to-edge network.
       *
       * @param request DescribeEpnBandWidthDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEpnBandWidthDataResponse
       */
      Models::DescribeEpnBandWidthDataResponse describeEpnBandWidthDataWithOptions(const Models::DescribeEpnBandWidthDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes DescribeEpnBandWidthData to query the network bandwidth usage of an edge-to-edge network.
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
       * @description - to query information about all custom images in your account. The information include the image properties, image export status, and the Object Storage Service (OSS) download links.
       * - Empty strings are returned for images that are not exported.
       * - The download links may become invalid if you delete objects in OSS.
       *
       * @param request DescribeExportImageInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExportImageInfoResponse
       */
      Models::DescribeExportImageInfoResponse describeExportImageInfoWithOptions(const Models::DescribeExportImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the export result of an image.
       *
       * @description - to query information about all custom images in your account. The information include the image properties, image export status, and the Object Storage Service (OSS) download links.
       * - Empty strings are returned for images that are not exported.
       * - The download links may become invalid if you delete objects in OSS.
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
       * @summary Query NAS file system information.
       *
       * @param request DescribeFileSystemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystemsWithOptions(const Models::DescribeFileSystemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query NAS file system information.
       *
       * @param request DescribeFileSystemsRequest
       * @return DescribeFileSystemsResponse
       */
      Models::DescribeFileSystemsResponse describeFileSystems(const Models::DescribeFileSystemsRequest &request);

      /**
       * @summary Queries a DNAT rule.
       *
       * @param request DescribeForwardEntryAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeForwardEntryAttributeResponse
       */
      Models::DescribeForwardEntryAttributeResponse describeForwardEntryAttributeWithOptions(const Models::DescribeForwardEntryAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a DNAT rule.
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
       * @summary Queries high-availability virtual IP addresses (HaVips).
       *
       * @param request DescribeHaVipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVipsWithOptions(const Models::DescribeHaVipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries high-availability virtual IP addresses (HaVips).
       *
       * @param request DescribeHaVipsRequest
       * @return DescribeHaVipsResponse
       */
      Models::DescribeHaVipsResponse describeHaVips(const Models::DescribeHaVipsRequest &request);

      /**
       * @summary Queries system event information.
       *
       * @description - EventTypes must specify at least one event type for the query. Multiple event types can be queried at the same time.
       *
       * @param tmpReq DescribeHistoryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEventsWithOptions(const Models::DescribeHistoryEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries system event information.
       *
       * @description - EventTypes must specify at least one event type for the query. Multiple event types can be queried at the same time.
       *
       * @param request DescribeHistoryEventsRequest
       * @return DescribeHistoryEventsResponse
       */
      Models::DescribeHistoryEventsResponse describeHistoryEvents(const Models::DescribeHistoryEventsRequest &request);

      /**
       * @summary Queries available image resources.
       *
       * @param request DescribeImageInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImageInfosResponse
       */
      Models::DescribeImageInfosResponse describeImageInfosWithOptions(const Models::DescribeImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available image resources.
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
       * @summary to query whether auto-renewal is enabled for an instance.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttributeWithOptions(const Models::DescribeInstanceAutoRenewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary to query whether auto-renewal is enabled for an instance.
       *
       * @param request DescribeInstanceAutoRenewAttributeRequest
       * @return DescribeInstanceAutoRenewAttributeResponse
       */
      Models::DescribeInstanceAutoRenewAttributeResponse describeInstanceAutoRenewAttribute(const Models::DescribeInstanceAutoRenewAttributeRequest &request);

      /**
       * @summary Queries the bandwidth details of an instance at a 5-minute granularity.
       *
       * @description - Request parameters act as filters. Filters are evaluated by using the logical AND operator. If a parameter is empty, the corresponding filter does not take effect. However, if InstanceIds is set to an empty JSON array, the filter is considered valid and an empty result is returned.
       *
       * @param request DescribeInstanceBandwidthDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceBandwidthDetailResponse
       */
      Models::DescribeInstanceBandwidthDetailResponse describeInstanceBandwidthDetailWithOptions(const Models::DescribeInstanceBandwidthDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth details of an instance at a 5-minute granularity.
       *
       * @description - Request parameters act as filters. Filters are evaluated by using the logical AND operator. If a parameter is empty, the corresponding filter does not take effect. However, if InstanceIds is set to an empty JSON array, the filter is considered valid and an empty result is returned.
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
       * @summary Queries the CPU and memory usage of an instance.
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorDataWithOptions(const Models::DescribeInstanceMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the CPU and memory usage of an instance.
       *
       * @param request DescribeInstanceMonitorDataRequest
       * @return DescribeInstanceMonitorDataResponse
       */
      Models::DescribeInstanceMonitorDataResponse describeInstanceMonitorData(const Models::DescribeInstanceMonitorDataRequest &request);

      /**
       * @summary Queries the mount status of SDGs under a specified AIC instance.
       *
       * @param tmpReq DescribeInstanceSDGStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceSDGStatusResponse
       */
      Models::DescribeInstanceSDGStatusResponse describeInstanceSDGStatusWithOptions(const Models::DescribeInstanceSDGStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the mount status of SDGs under a specified AIC instance.
       *
       * @param request DescribeInstanceSDGStatusRequest
       * @return DescribeInstanceSDGStatusResponse
       */
      Models::DescribeInstanceSDGStatusResponse describeInstanceSDGStatus(const Models::DescribeInstanceSDGStatusRequest &request);

      /**
       * @summary Queries the instance specifications that you can purchase.
       *
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
       * @summary Queries the list of instance types by calling DescribeInstanceTypes.
       *
       * @param request DescribeInstanceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypesWithOptions(const Models::DescribeInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of instance types by calling DescribeInstanceTypes.
       *
       * @param request DescribeInstanceTypesRequest
       * @return DescribeInstanceTypesResponse
       */
      Models::DescribeInstanceTypesResponse describeInstanceTypes(const Models::DescribeInstanceTypesRequest &request);

      /**
       * @summary Queries the web management terminal URL of an ENS instance.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrlWithOptions(const Models::DescribeInstanceVncUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the web management terminal URL of an ENS instance.
       *
       * @param request DescribeInstanceVncUrlRequest
       * @return DescribeInstanceVncUrlResponse
       */
      Models::DescribeInstanceVncUrlResponse describeInstanceVncUrl(const Models::DescribeInstanceVncUrlRequest &request);

      /**
       * @summary Queries the details of one or more instances.
       *
       * @description - API call frequency: 800 calls per second.
       *
       * @param tmpReq DescribeInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstancesResponse
       */
      Models::DescribeInstancesResponse describeInstancesWithOptions(const Models::DescribeInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more instances.
       *
       * @description - API call frequency: 800 calls per second.
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
       * @summary Queries the details of a specified load balancing instance.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttributeWithOptions(const Models::DescribeLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified load balancing instance.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request DescribeLoadBalancerAttributeRequest
       * @return DescribeLoadBalancerAttributeResponse
       */
      Models::DescribeLoadBalancerAttributeResponse describeLoadBalancerAttribute(const Models::DescribeLoadBalancerAttributeRequest &request);

      /**
       * @summary Queries the configuration of an HTTP listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of an HTTP listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPListenerAttributeResponse describeLoadBalancerHTTPListenerAttribute(const Models::DescribeLoadBalancerHTTPListenerAttributeRequest &request);

      /**
       * @summary Queries the configurations of an HTTPS listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttributeWithOptions(const Models::DescribeLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an HTTPS listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerHTTPSListenerAttributeRequest
       * @return DescribeLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::DescribeLoadBalancerHTTPSListenerAttributeResponse describeLoadBalancerHTTPSListenerAttribute(const Models::DescribeLoadBalancerHTTPSListenerAttributeRequest &request);

      /**
       * @summary Queries monitoring data of an edge load balancer (ELB) instance.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request DescribeLoadBalancerListenMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerListenMonitorResponse
       */
      Models::DescribeLoadBalancerListenMonitorResponse describeLoadBalancerListenMonitorWithOptions(const Models::DescribeLoadBalancerListenMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring data of an edge load balancer (ELB) instance.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
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
       * @summary Call the `DescribeLoadBalancerTCPListenerAttribute` operation to query the configuration of a TCP listener.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttributeWithOptions(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the `DescribeLoadBalancerTCPListenerAttribute` operation to query the configuration of a TCP listener.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request DescribeLoadBalancerTCPListenerAttributeRequest
       * @return DescribeLoadBalancerTCPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerTCPListenerAttributeResponse describeLoadBalancerTCPListenerAttribute(const Models::DescribeLoadBalancerTCPListenerAttributeRequest &request);

      /**
       * @summary Call `DescribeLoadBalancerUDPListenerAttribute` to get a UDP listener\\"s configuration.
       *
       * @description - API rate limit: 100 requests per second (RPS).
       * - Per-user rate limit: 10 RPS.
       *
       * @param request DescribeLoadBalancerUDPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancerUDPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttributeWithOptions(const Models::DescribeLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `DescribeLoadBalancerUDPListenerAttribute` to get a UDP listener\\"s configuration.
       *
       * @description - API rate limit: 100 requests per second (RPS).
       * - Per-user rate limit: 10 RPS.
       *
       * @param request DescribeLoadBalancerUDPListenerAttributeRequest
       * @return DescribeLoadBalancerUDPListenerAttributeResponse
       */
      Models::DescribeLoadBalancerUDPListenerAttributeResponse describeLoadBalancerUDPListenerAttribute(const Models::DescribeLoadBalancerUDPListenerAttributeRequest &request);

      /**
       * @summary Invokes the DescribeLoadBalancers operation to query the list of created load balancing instances.
       *
       * @description - API call rate: 100 calls per second.
       * - Call rate per user: 10 calls per second.
       *
       * @param request DescribeLoadBalancersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancersWithOptions(const Models::DescribeLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DescribeLoadBalancers operation to query the list of created load balancing instances.
       *
       * @description - API call rate: 100 calls per second.
       * - Call rate per user: 10 calls per second.
       *
       * @param request DescribeLoadBalancersRequest
       * @return DescribeLoadBalancersResponse
       */
      Models::DescribeLoadBalancersResponse describeLoadBalancers(const Models::DescribeLoadBalancersRequest &request);

      /**
       * @summary Retrieves user metering data.
       *
       * @param request DescribeMeasurementDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMeasurementDataResponse
       */
      Models::DescribeMeasurementDataResponse describeMeasurementDataWithOptions(const Models::DescribeMeasurementDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves user metering data.
       *
       * @param request DescribeMeasurementDataRequest
       * @return DescribeMeasurementDataResponse
       */
      Models::DescribeMeasurementDataResponse describeMeasurementData(const Models::DescribeMeasurementDataRequest &request);

      /**
       * @summary Queries mount target information by calling DescribeMountTargets.
       *
       * @param request DescribeMountTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargetsWithOptions(const Models::DescribeMountTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries mount target information by calling DescribeMountTargets.
       *
       * @param request DescribeMountTargetsRequest
       * @return DescribeMountTargetsResponse
       */
      Models::DescribeMountTargetsResponse describeMountTargets(const Models::DescribeMountTargetsRequest &request);

      /**
       * @summary Query the resources that you can purchase when creating a NAS file system.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNASAvailableResourceInfoResponse
       */
      Models::DescribeNASAvailableResourceInfoResponse describeNASAvailableResourceInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the resources that you can purchase when creating a NAS file system.
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
       * @summary Invoke DescribeNatGateways to query created NAT Gateways.
       *
       * @param request DescribeNatGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGatewaysWithOptions(const Models::DescribeNatGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DescribeNatGateways to query created NAT Gateways.
       *
       * @param request DescribeNatGatewaysRequest
       * @return DescribeNatGatewaysResponse
       */
      Models::DescribeNatGatewaysResponse describeNatGateways(const Models::DescribeNatGatewaysRequest &request);

      /**
       * @summary You can invoke the DescribeNetworkAcls API to query created network ACLs.
       *
       * @param request DescribeNetworkAclsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAclsWithOptions(const Models::DescribeNetworkAclsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the DescribeNetworkAcls API to query created network ACLs.
       *
       * @param request DescribeNetworkAclsRequest
       * @return DescribeNetworkAclsResponse
       */
      Models::DescribeNetworkAclsResponse describeNetworkAcls(const Models::DescribeNetworkAclsRequest &request);

      /**
       * @summary Queries the configuration information of a specified network.
       *
       * @description - API call rate: 100 calls per second.
       * - Call rate per user: 10 calls per second.
       *
       * @param request DescribeNetworkAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkAttributeResponse
       */
      Models::DescribeNetworkAttributeResponse describeNetworkAttributeWithOptions(const Models::DescribeNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of a specified network.
       *
       * @description - API call rate: 100 calls per second.
       * - Call rate per user: 10 calls per second.
       *
       * @param request DescribeNetworkAttributeRequest
       * @return DescribeNetworkAttributeResponse
       */
      Models::DescribeNetworkAttributeResponse describeNetworkAttribute(const Models::DescribeNetworkAttributeRequest &request);

      /**
       * @summary Queries a list of elastic network interfaces (ENIs).
       *
       * @param request DescribeNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfacesWithOptions(const Models::DescribeNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of elastic network interfaces (ENIs).
       *
       * @param request DescribeNetworkInterfacesRequest
       * @return DescribeNetworkInterfacesResponse
       */
      Models::DescribeNetworkInterfacesResponse describeNetworkInterfaces(const Models::DescribeNetworkInterfacesRequest &request);

      /**
       * @summary Call `DescribeNetworkPeerConnections` to query network peer connections.
       *
       * @param request DescribeNetworkPeerConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworkPeerConnectionsResponse
       */
      Models::DescribeNetworkPeerConnectionsResponse describeNetworkPeerConnectionsWithOptions(const Models::DescribeNetworkPeerConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `DescribeNetworkPeerConnections` to query network peer connections.
       *
       * @param request DescribeNetworkPeerConnectionsRequest
       * @return DescribeNetworkPeerConnectionsResponse
       */
      Models::DescribeNetworkPeerConnectionsResponse describeNetworkPeerConnections(const Models::DescribeNetworkPeerConnectionsRequest &request);

      /**
       * @summary Queries a list of networks.
       *
       * @description - API call rate: 100 calls per second.
       * - Call rate per user: 10 calls per second.
       *
       * @param request DescribeNetworksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNetworksResponse
       */
      Models::DescribeNetworksResponse describeNetworksWithOptions(const Models::DescribeNetworksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of networks.
       *
       * @description - API call rate: 100 calls per second.
       * - Call rate per user: 10 calls per second.
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
       * @summary Queries the Internet Service Provider (ISP) information of an ENS edge node.
       *
       * @param request DescribeRegionIspsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRegionIspsResponse
       */
      Models::DescribeRegionIspsResponse describeRegionIspsWithOptions(const Models::DescribeRegionIspsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Internet Service Provider (ISP) information of an ENS edge node.
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
       * @summary Queries basic SDG information, including node preload information.
       *
       * @param tmpReq DescribeSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGResponse
       */
      Models::DescribeSDGResponse describeSDGWithOptions(const Models::DescribeSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries basic SDG information, including node preload information.
       *
       * @param request DescribeSDGRequest
       * @return DescribeSDGResponse
       */
      Models::DescribeSDGResponse describeSDG(const Models::DescribeSDGRequest &request);

      /**
       * @summary Queries the deployment status of an SDG.
       *
       * @param tmpReq DescribeSDGDeploymentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGDeploymentStatusResponse
       */
      Models::DescribeSDGDeploymentStatusResponse describeSDGDeploymentStatusWithOptions(const Models::DescribeSDGDeploymentStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the deployment status of an SDG.
       *
       * @param request DescribeSDGDeploymentStatusRequest
       * @return DescribeSDGDeploymentStatusResponse
       */
      Models::DescribeSDGDeploymentStatusResponse describeSDGDeploymentStatus(const Models::DescribeSDGDeploymentStatusRequest &request);

      /**
       * @summary Queries the information about shared disks in a specified SDG.
       *
       * @param request DescribeSDGSharedDisksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSDGSharedDisksResponse
       */
      Models::DescribeSDGSharedDisksResponse describeSDGSharedDisksWithOptions(const Models::DescribeSDGSharedDisksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about shared disks in a specified SDG.
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
       * @summary Queries the secondary public IP addresses that have been created.
       *
       * @param request DescribeSecondaryPublicIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecondaryPublicIpAddressesResponse
       */
      Models::DescribeSecondaryPublicIpAddressesResponse describeSecondaryPublicIpAddressesWithOptions(const Models::DescribeSecondaryPublicIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the secondary public IP addresses that have been created.
       *
       * @param request DescribeSecondaryPublicIpAddressesRequest
       * @return DescribeSecondaryPublicIpAddressesResponse
       */
      Models::DescribeSecondaryPublicIpAddressesResponse describeSecondaryPublicIpAddresses(const Models::DescribeSecondaryPublicIpAddressesRequest &request);

      /**
       * @summary You can invoke DescribeSecurityGroupAttribute to query the security group rules of a security group.
       *
       * @param request DescribeSecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityGroupAttributeResponse
       */
      Models::DescribeSecurityGroupAttributeResponse describeSecurityGroupAttributeWithOptions(const Models::DescribeSecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke DescribeSecurityGroupAttribute to query the security group rules of a security group.
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
       * @summary Queries the real-time status of the instance devices or containers that are being scheduled and occupied by the specified UUID.
       *
       * @param request DescribeServcieScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServcieScheduleResponse
       */
      Models::DescribeServcieScheduleResponse describeServcieScheduleWithOptions(const Models::DescribeServcieScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time status of the instance devices or containers that are being scheduled and occupied by the specified UUID.
       *
       * @param request DescribeServcieScheduleRequest
       * @return DescribeServcieScheduleResponse
       */
      Models::DescribeServcieScheduleResponse describeServcieSchedule(const Models::DescribeServcieScheduleRequest &request);

      /**
       * @summary Queries listener-level monitoring data for an ESLB instance.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request DescribeServerLoadBalancerListenMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerLoadBalancerListenMonitorResponse
       */
      Models::DescribeServerLoadBalancerListenMonitorResponse describeServerLoadBalancerListenMonitorWithOptions(const Models::DescribeServerLoadBalancerListenMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries listener-level monitoring data for an ESLB instance.
       *
       * @description - API call rate: 100 calls per second.
       * - Per-user call rate: 10 calls per second.
       *
       * @param request DescribeServerLoadBalancerListenMonitorRequest
       * @return DescribeServerLoadBalancerListenMonitorResponse
       */
      Models::DescribeServerLoadBalancerListenMonitorResponse describeServerLoadBalancerListenMonitor(const Models::DescribeServerLoadBalancerListenMonitorRequest &request);

      /**
       * @summary Queries request monitoring data of an ESLB instance.
       *
       * @description - API call frequency: 100 calls per second.
       * - Per-user call frequency: 10 calls per second.
       *
       * @param request DescribeServerLoadBalancerMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServerLoadBalancerMonitorResponse
       */
      Models::DescribeServerLoadBalancerMonitorResponse describeServerLoadBalancerMonitorWithOptions(const Models::DescribeServerLoadBalancerMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries request monitoring data of an ESLB instance.
       *
       * @description - API call frequency: 100 calls per second.
       * - Per-user call frequency: 10 calls per second.
       *
       * @param request DescribeServerLoadBalancerMonitorRequest
       * @return DescribeServerLoadBalancerMonitorResponse
       */
      Models::DescribeServerLoadBalancerMonitorResponse describeServerLoadBalancerMonitor(const Models::DescribeServerLoadBalancerMonitorRequest &request);

      /**
       * @summary Queries snapshot information by calling DescribeSnapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshotsWithOptions(const Models::DescribeSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries snapshot information by calling DescribeSnapshots.
       *
       * @param request DescribeSnapshotsRequest
       * @return DescribeSnapshotsResponse
       */
      Models::DescribeSnapshotsResponse describeSnapshots(const Models::DescribeSnapshotsRequest &request);

      /**
       * @summary Queries a specific source network address translation (SNAT) entry.
       *
       * @param request DescribeSnatAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSnatAttributeResponse
       */
      Models::DescribeSnatAttributeResponse describeSnatAttributeWithOptions(const Models::DescribeSnatAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specific source network address translation (SNAT) entry.
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
       * @summary Queries the configuration information of a specified vSwitch.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributesWithOptions(const Models::DescribeVSwitchAttributesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of a specified vSwitch.
       *
       * @param request DescribeVSwitchAttributesRequest
       * @return DescribeVSwitchAttributesResponse
       */
      Models::DescribeVSwitchAttributesResponse describeVSwitchAttributes(const Models::DescribeVSwitchAttributesRequest &request);

      /**
       * @summary Queries information about vSwitches available for networking. Internal networks are organized by vSwitch.
       *
       * @param request DescribeVSwitchesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitchesWithOptions(const Models::DescribeVSwitchesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about vSwitches available for networking. Internal networks are organized by vSwitch.
       *
       * @param request DescribeVSwitchesRequest
       * @return DescribeVSwitchesResponse
       */
      Models::DescribeVSwitchesResponse describeVSwitches(const Models::DescribeVSwitchesRequest &request);

      /**
       * @summary Detaches a pay-as-you-go disk from an Edge Node Service (ENS) instance. You cannot To detach a disk that is created together with an instance.
       *
       * @param request DetachDiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachDiskResponse
       */
      Models::DetachDiskResponse detachDiskWithOptions(const Models::DetachDiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a pay-as-you-go disk from an Edge Node Service (ENS) instance. You cannot To detach a disk that is created together with an instance.
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
       * @summary Detaches a key pair from up to 30 instances in a single request. You can specify the key pair by its key pair name or key pair ID.
       *
       * @description ## Usage notes
       * This operation detaches a key pair from multiple instances in a batch. The target instances must be in a stopped state.
       * - You can detach a key pair from a maximum of 30 instances in a single request.
       * - The operation returns an error if you specify the `KeyPairName` parameter and any of the specified instances are not associated with that key pair name.
       * - You must specify either the `KeyPairName` or `KeyPairId` parameter.
       * - We recommend using the `KeyPairId` parameter. The `KeyPairName` parameter will be deprecated in a future release.
       *
       * @param tmpReq DetachKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPairWithOptions(const Models::DetachKeyPairRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a key pair from up to 30 instances in a single request. You can specify the key pair by its key pair name or key pair ID.
       *
       * @description ## Usage notes
       * This operation detaches a key pair from multiple instances in a batch. The target instances must be in a stopped state.
       * - You can detach a key pair from a maximum of 30 instances in a single request.
       * - The operation returns an error if you specify the `KeyPairName` parameter and any of the specified instances are not associated with that key pair name.
       * - You must specify either the `KeyPairName` or `KeyPairId` parameter.
       * - We recommend using the `KeyPairId` parameter. The `KeyPairName` parameter will be deprecated in a future release.
       *
       * @param request DetachKeyPairRequest
       * @return DetachKeyPairResponse
       */
      Models::DetachKeyPairResponse detachKeyPair(const Models::DetachKeyPairRequest &request);

      /**
       * @summary Detach an elastic network interface (ENI) from an instance.
       *
       * @description Before you call this operation, take note of the following items:
       * - You cannot detach a primary ENI from an instance.
       * - The ENI must be in the InUse state.
       * - The instances are in the Stopped state.
       * - This operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the state of the ENI to determine whether the ENI is detached.
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
       * - You cannot detach a primary ENI from an instance.
       * - The ENI must be in the InUse state.
       * - The instances are in the Stopped state.
       * - This operation is an asynchronous operation. After this operation is called to detach an ENI, you can check the state of the ENI to determine whether the ENI is detached.
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
       * @summary Migrates an instance across physical nodes in response to an O&M event.
       *
       * @description - This O\\&M task currently supports only the `Instance:SystemUpgrade.Migrate` event type for migrations due to an underlying upgrade.
       *
       * @param request EventMigrateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventMigrateInstanceResponse
       */
      Models::EventMigrateInstanceResponse eventMigrateInstanceWithOptions(const Models::EventMigrateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Migrates an instance across physical nodes in response to an O&M event.
       *
       * @description - This O\\&M task currently supports only the `Instance:SystemUpgrade.Migrate` event type for migrations due to an underlying upgrade.
       *
       * @param request EventMigrateInstanceRequest
       * @return EventMigrateInstanceResponse
       */
      Models::EventMigrateInstanceResponse eventMigrateInstance(const Models::EventMigrateInstanceRequest &request);

      /**
       * @summary Reboots an Instance affected by an Operational Event.
       *
       * @description - This operation currently supports only the following Event Type: Instance:SystemMaintenance.Reboot (an Instance Reboot due to System Maintenance).
       *
       * @param request EventRebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventRebootInstanceResponse
       */
      Models::EventRebootInstanceResponse eventRebootInstanceWithOptions(const Models::EventRebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reboots an Instance affected by an Operational Event.
       *
       * @description - This operation currently supports only the following Event Type: Instance:SystemMaintenance.Reboot (an Instance Reboot due to System Maintenance).
       *
       * @param request EventRebootInstanceRequest
       * @return EventRebootInstanceResponse
       */
      Models::EventRebootInstanceResponse eventRebootInstance(const Models::EventRebootInstanceRequest &request);

      /**
       * @summary Redeploys a specified instance either immediately or at a scheduled time.
       *
       * @description - This O\\&M operation supports only the following event types: `Instance:SystemFailure.Redeploy` (redeployment due to a system failure) and `Instance:SystemMaintenance.Redeploy` (redeployment for system maintenance).
       *
       * @param request EventRedeployInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventRedeployInstanceResponse
       */
      Models::EventRedeployInstanceResponse eventRedeployInstanceWithOptions(const Models::EventRedeployInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Redeploys a specified instance either immediately or at a scheduled time.
       *
       * @description - This O\\&M operation supports only the following event types: `Instance:SystemFailure.Redeploy` (redeployment due to a system failure) and `Instance:SystemMaintenance.Redeploy` (redeployment for system maintenance).
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
       * @summary You can call GetBucketInfo to retrieve detailed Bucket information.
       *
       * @param request GetBucketInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucketInfoResponse
       */
      Models::GetBucketInfoResponse getBucketInfoWithOptions(const Models::GetBucketInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call GetBucketInfo to retrieve detailed Bucket information.
       *
       * @param request GetBucketInfoRequest
       * @return GetBucketInfoResponse
       */
      Models::GetBucketInfoResponse getBucketInfo(const Models::GetBucketInfoRequest &request);

      /**
       * @summary Retrieves lifecycle rule information.
       *
       * @param request GetBucketLifecycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBucketLifecycleResponse
       */
      Models::GetBucketLifecycleResponse getBucketLifecycleWithOptions(const Models::GetBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves lifecycle rule information.
       *
       * @param request GetBucketLifecycleRequest
       * @return GetBucketLifecycleResponse
       */
      Models::GetBucketLifecycleResponse getBucketLifecycle(const Models::GetBucketLifecycleRequest &request);

      /**
       * @summary Queries the details of a specified add-on in a cluster, including the version, parameter settings, and status of the add-on instance.
       *
       * @description It can be deleted only when the instance group information is empty.
       *
       * @param request GetClusterAddonInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClusterAddonInstanceResponse
       */
      Models::GetClusterAddonInstanceResponse getClusterAddonInstanceWithOptions(const Models::GetClusterAddonInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified add-on in a cluster, including the version, parameter settings, and status of the add-on instance.
       *
       * @description It can be deleted only when the instance group information is empty.
       *
       * @param request GetClusterAddonInstanceRequest
       * @return GetClusterAddonInstanceResponse
       */
      Models::GetClusterAddonInstanceResponse getClusterAddonInstance(const Models::GetClusterAddonInstanceRequest &request);

      /**
       * @summary Queries the storage usage of the previous billing cycle and the cumulative number of calls for the current month by bucket.
       *
       * @param request GetOssStorageAndAccByBucketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOssStorageAndAccByBucketsResponse
       */
      Models::GetOssStorageAndAccByBucketsResponse getOssStorageAndAccByBucketsWithOptions(const Models::GetOssStorageAndAccByBucketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage usage of the previous billing cycle and the cumulative number of calls for the current month by bucket.
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
       * @summary Imports image information.
       *
       * @param tmpReq ImportImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImageWithOptions(const Models::ImportImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports image information.
       *
       * @param request ImportImageRequest
       * @return ImportImageResponse
       */
      Models::ImportImageResponse importImage(const Models::ImportImageRequest &request);

      /**
       * @summary Imports the public key of a Rivest–Shamir–Adleman (RSA)-encrypted key pair that is generated by a third-party tool.
       *
       * @description - After the key pair is imported, ENS stores the public key. You must securely store the private key.
       * - The key pair can be only in the ssh-rsa format.
       *
       * @param request ImportKeyPairRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPairWithOptions(const Models::ImportKeyPairRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the public key of a Rivest–Shamir–Adleman (RSA)-encrypted key pair that is generated by a third-party tool.
       *
       * @description - After the key pair is imported, ENS stores the public key. You must securely store the private key.
       * - The key pair can be only in the ssh-rsa format.
       *
       * @param request ImportKeyPairRequest
       * @return ImportKeyPairResponse
       */
      Models::ImportKeyPairResponse importKeyPair(const Models::ImportKeyPairRequest &request);

      /**
       * @summary Creates a service-linked role (SLR) that grants ENS the permissions to manage your resources.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeENSECKServiceRoleResponse
       */
      Models::InitializeENSECKServiceRoleResponse initializeENSECKServiceRoleWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role (SLR) that grants ENS the permissions to manage your resources.
       *
       * @return InitializeENSECKServiceRoleResponse
       */
      Models::InitializeENSECKServiceRoleResponse initializeENSECKServiceRole();

      /**
       * @summary Installs components in an ECK cluster to enhance Kubernetes capabilities. ECK clusters support various components, such as managed core components, as well as application, logging and monitoring, networking, storage, and security components. You can call the InstallClusterAddons operation to install components by specifying the component name and version.
       *
       * @description - The rate limit is 10 calls per second per user.
       * - Cluster creation is an asynchronous operation. After the API call returns, wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param tmpReq InstallClusterAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallClusterAddonsResponse
       */
      Models::InstallClusterAddonsResponse installClusterAddonsWithOptions(const Models::InstallClusterAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs components in an ECK cluster to enhance Kubernetes capabilities. ECK clusters support various components, such as managed core components, as well as application, logging and monitoring, networking, storage, and security components. You can call the InstallClusterAddons operation to install components by specifying the component name and version.
       *
       * @description - The rate limit is 10 calls per second per user.
       * - Cluster creation is an asynchronous operation. After the API call returns, wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request InstallClusterAddonsRequest
       * @return InstallClusterAddonsResponse
       */
      Models::InstallClusterAddonsResponse installClusterAddons(const Models::InstallClusterAddonsRequest &request);

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
       * @description Before you To add an instance to a security group, make sure that the instance is in the Stopped or Running state.
       *
       * @param request JoinSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroupWithOptions(const Models::JoinSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Edge Node Service (ENS) instance to a specified security group.
       *
       * @description Before you To add an instance to a security group, make sure that the instance is in the Stopped or Running state.
       *
       * @param request JoinSecurityGroupRequest
       * @return JoinSecurityGroupResponse
       */
      Models::JoinSecurityGroupResponse joinSecurityGroup(const Models::JoinSecurityGroupRequest &request);

      /**
       * @summary Joins vSwitches to an Edge Private Network (EPN) instance for networking.
       *
       * @description For the internal network connection and internal network connection with intelligent acceleration modes, instances in the vSwitch take effect automatically and do not require manual addition. For the intelligent acceleration public public mode, you only need to call the API operation to add instances to the public public mode instance information.
       *
       * @param request JoinVSwitchesToEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinVSwitchesToEpnInstanceResponse
       */
      Models::JoinVSwitchesToEpnInstanceResponse joinVSwitchesToEpnInstanceWithOptions(const Models::JoinVSwitchesToEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Joins vSwitches to an Edge Private Network (EPN) instance for networking.
       *
       * @description For the internal network connection and internal network connection with intelligent acceleration modes, instances in the vSwitch take effect automatically and do not require manual addition. For the intelligent acceleration public public mode, you only need to call the API operation to add instances to the public public mode instance information.
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
       * @summary Queries the list of association information for AIC public keys. Paging is supported.
       *
       * @param request ListAICPublicKeyDeliveriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAICPublicKeyDeliveriesResponse
       */
      Models::ListAICPublicKeyDeliveriesResponse listAICPublicKeyDeliveriesWithOptions(const Models::ListAICPublicKeyDeliveriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of association information for AIC public keys. Paging is supported.
       *
       * @param request ListAICPublicKeyDeliveriesRequest
       * @return ListAICPublicKeyDeliveriesResponse
       */
      Models::ListAICPublicKeyDeliveriesResponse listAICPublicKeyDeliveries(const Models::ListAICPublicKeyDeliveriesRequest &request);

      /**
       * @summary Queries a list of AIC public key information that meets the specified conditions. Paging is supported.
       *
       * @param request ListAICPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAICPublicKeysResponse
       */
      Models::ListAICPublicKeysResponse listAICPublicKeysWithOptions(const Models::ListAICPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AIC public key information that meets the specified conditions. Paging is supported.
       *
       * @param request ListAICPublicKeysRequest
       * @return ListAICPublicKeysResponse
       */
      Models::ListAICPublicKeysResponse listAICPublicKeys(const Models::ListAICPublicKeysRequest &request);

      /**
       * @summary Queries the details of cluster components.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAddonsResponse
       */
      Models::ListAddonsResponse listAddonsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cluster components.
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
       * @summary Retrieves a list of installed add-on instances in a specified cluster and queries related information about the add-on instances, such as the add-on version and status.
       *
       * @param request ListClusterAddonInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClusterAddonInstancesResponse
       */
      Models::ListClusterAddonInstancesResponse listClusterAddonInstancesWithOptions(const Models::ListClusterAddonInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of installed add-on instances in a specified cluster and queries related information about the add-on instances, such as the add-on version and status.
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
       * @summary Lists all service capabilities.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductAbilitiesResponse
       */
      Models::ListProductAbilitiesResponse listProductAbilitiesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all service capabilities.
       *
       * @return ListProductAbilitiesResponse
       */
      Models::ListProductAbilitiesResponse listProductAbilities();

      /**
       * @summary Queries the tags bound to one or more Edge Node Service (ENS) resources. Currently, only instance resources are supported.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags bound to one or more Edge Node Service (ENS) resources. Currently, only instance resources are supported.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Manages the logon of AIC instances by associating or dissociating instances based on uploaded AIC public keys.
       *
       * @param request ManageAICLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ManageAICLoginResponse
       */
      Models::ManageAICLoginResponse manageAICLoginWithOptions(const Models::ManageAICLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manages the logon of AIC instances by associating or dissociating instances based on uploaded AIC public keys.
       *
       * @param request ManageAICLoginRequest
       * @return ManageAICLoginResponse
       */
      Models::ManageAICLoginResponse manageAICLogin(const Models::ManageAICLoginRequest &request);

      /**
       * @summary Modifies the specifications of an Android in Container (AIC) instance.
       *
       * @param request ModifyAICInstanceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyAICInstanceTypeResponse
       */
      Models::ModifyAICInstanceTypeResponse modifyAICInstanceTypeWithOptions(const Models::ModifyAICInstanceTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the specifications of an Android in Container (AIC) instance.
       *
       * @param request ModifyAICInstanceTypeRequest
       * @return ModifyAICInstanceTypeResponse
       */
      Models::ModifyAICInstanceTypeResponse modifyAICInstanceType(const Models::ModifyAICInstanceTypeRequest &request);

      /**
       * @summary Modifies the configuration of an installed cluster add-on instance. Modifying the configuration may affect your services. Evaluate the impact, perform this operation during off-peak hours, and back up your data in advance.
       *
       * @description Modifies an installed add-on in an ECK cluster. The target cluster must be in the running state, and ComponentName must reference an installed add-on.
       *
       * @param tmpReq ModifyClusterAddonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterAddonResponse
       */
      Models::ModifyClusterAddonResponse modifyClusterAddonWithOptions(const Models::ModifyClusterAddonRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an installed cluster add-on instance. Modifying the configuration may affect your services. Evaluate the impact, perform this operation during off-peak hours, and back up your data in advance.
       *
       * @description Modifies an installed add-on in an ECK cluster. The target cluster must be in the running state, and ComponentName must reference an installed add-on.
       *
       * @param request ModifyClusterAddonRequest
       * @return ModifyClusterAddonResponse
       */
      Models::ModifyClusterAddonResponse modifyClusterAddon(const Models::ModifyClusterAddonRequest &request);

      /**
       * @summary Modifies the node configuration in a cluster node pool, such as kubelet configurations and node rotation configurations. Modifying node configurations changes the configurations in batches and restarts kubelet, which may affect node and workload operations. Perform this operation during off-peak hours.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Cluster creation is an asynchronous operation. After you call the API operation, you must wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param tmpReq ModifyClusterNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyClusterNodePoolResponse
       */
      Models::ModifyClusterNodePoolResponse modifyClusterNodePoolWithOptions(const Models::ModifyClusterNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the node configuration in a cluster node pool, such as kubelet configurations and node rotation configurations. Modifying node configurations changes the configurations in batches and restarts kubelet, which may affect node and workload operations. Perform this operation during off-peak hours.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Cluster creation is an asynchronous operation. After you call the API operation, you must wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request ModifyClusterNodePoolRequest
       * @return ModifyClusterNodePoolResponse
       */
      Models::ModifyClusterNodePoolResponse modifyClusterNodePool(const Models::ModifyClusterNodePoolRequest &request);

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
       * @summary Calls ModifyInstanceAttribute to modify instance attributes, including the instance password and name.
       *
       * @description - You cannot reset the instance password when the instance status is Starting.
       * - You cannot modify the instance password when the instance status is Running.
       * - After resetting the password, restart the instance in the console or invoke the RebootInstance operation for the change to take effect. Restarting the instance from within the operating system does not take effect.
       *
       * @param request ModifyInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceAttributeResponse
       */
      Models::ModifyInstanceAttributeResponse modifyInstanceAttributeWithOptions(const Models::ModifyInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifyInstanceAttribute to modify instance attributes, including the instance password and name.
       *
       * @description - You cannot reset the instance password when the instance status is Starting.
       * - You cannot modify the instance password when the instance status is Running.
       * - After resetting the password, restart the instance in the console or invoke the RebootInstance operation for the change to take effect. Restarting the instance from within the operating system does not take effect.
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
       * @summary Modifies the boot configuration of a heterogeneous instance (PCFarm bare metal instance).
       *
       * @description Modifies the boot configuration of a heterogeneous instance (PCFarm bare metal instance, where InstanceTypeFamily is pc_bmi). If the current state of the instance does not support this operation, the API returns IncorrectInstanceStatus.
       *
       * @param request ModifyInstanceBootConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceBootConfigurationResponse
       */
      Models::ModifyInstanceBootConfigurationResponse modifyInstanceBootConfigurationWithOptions(const Models::ModifyInstanceBootConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the boot configuration of a heterogeneous instance (PCFarm bare metal instance).
       *
       * @description Modifies the boot configuration of a heterogeneous instance (PCFarm bare metal instance, where InstanceTypeFamily is pc_bmi). If the current state of the instance does not support this operation, the API returns IncorrectInstanceStatus.
       *
       * @param request ModifyInstanceBootConfigurationRequest
       * @return ModifyInstanceBootConfigurationResponse
       */
      Models::ModifyInstanceBootConfigurationResponse modifyInstanceBootConfiguration(const Models::ModifyInstanceBootConfigurationRequest &request);

      /**
       * @summary Invokes ModifyInstanceChargeType to convert the billing method of one or more Edge Node Service (ENS) instances. You can convert between instance-level pay-as-you-go and subscription instances. For instance-level pay-as-you-go instances, you can also convert pay-as-you-go cloud disks created with the instances to subscription cloud disks.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of Edge Node Service (ENS).
       * The target instance must be in the Running or Stopped state and must not have an overdue payment before you can change the billing method.
       *
       * @param tmpReq ModifyInstanceChargeTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeTypeWithOptions(const Models::ModifyInstanceChargeTypeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes ModifyInstanceChargeType to convert the billing method of one or more Edge Node Service (ENS) instances. You can convert between instance-level pay-as-you-go and subscription instances. For instance-level pay-as-you-go instances, you can also convert pay-as-you-go cloud disks created with the instances to subscription cloud disks.
       *
       * @description Before you call this operation, make sure that you fully understand the billing methods and pricing of Edge Node Service (ENS).
       * The target instance must be in the Running or Stopped state and must not have an overdue payment before you can change the billing method.
       *
       * @param request ModifyInstanceChargeTypeRequest
       * @return ModifyInstanceChargeTypeResponse
       */
      Models::ModifyInstanceChargeTypeResponse modifyInstanceChargeType(const Models::ModifyInstanceChargeTypeRequest &request);

      /**
       * @summary Modifies the private IP address or vSwitch of a VPC-type ECS instance.
       *
       * @description The instance that you want to manage must be in the Stopped state. When you modify the parameters of a scaling group, the following limits apply:
       * - Instance:
       *   - Instances that are associated with SLB are not supported.
       * - Network:
       *   - Instances that are associated with EIPs are not supported.
       *   - Instances that are associated with high-availability virtual IP addresses are not supported.
       *   - Instances that have been used as next hops in the routing table are not supported.
       *   - Secondary ENIs cannot be attached to the ECS instance.
       *   - Instances configured with secondary IP addresses are not supported.
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
       * - Instance:
       *   - Instances that are associated with SLB are not supported.
       * - Network:
       *   - Instances that are associated with EIPs are not supported.
       *   - Instances that are associated with high-availability virtual IP addresses are not supported.
       *   - Instances that have been used as next hops in the routing table are not supported.
       *   - Secondary ENIs cannot be attached to the ECS instance.
       *   - Instances configured with secondary IP addresses are not supported.
       *
       * @param request ModifyInstanceNetworkAttributeRequest
       * @return ModifyInstanceNetworkAttributeResponse
       */
      Models::ModifyInstanceNetworkAttributeResponse modifyInstanceNetworkAttribute(const Models::ModifyInstanceNetworkAttributeRequest &request);

      /**
       * @summary Modifies the information about an Edge Load Balancer (ELB) instance.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request ModifyLoadBalancerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyLoadBalancerAttributeResponse
       */
      Models::ModifyLoadBalancerAttributeResponse modifyLoadBalancerAttributeWithOptions(const Models::ModifyLoadBalancerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an Edge Load Balancer (ELB) instance.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request ModifyLoadBalancerAttributeRequest
       * @return ModifyLoadBalancerAttributeResponse
       */
      Models::ModifyLoadBalancerAttributeResponse modifyLoadBalancerAttribute(const Models::ModifyLoadBalancerAttributeRequest &request);

      /**
       * @summary Modifies the network information.
       *
       * @description - Rate limit: 100 requests per second.
       * - up to 5 times per second per user.
       *
       * @param request ModifyNetworkAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyNetworkAttributeResponse
       */
      Models::ModifyNetworkAttributeResponse modifyNetworkAttributeWithOptions(const Models::ModifyNetworkAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the network information.
       *
       * @description - Rate limit: 100 requests per second.
       * - up to 5 times per second per user.
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
       * @summary Calls ModifyPrepayInstanceSpec to upgrade or downgrade the instance type of a subscription ENS instance. The new instance type takes effect for the entire lifecycle of the instance.
       *
       * @description Modifies the instance type of a subscription instance. Before calling this operation, stop the instance by calling StopInstance. After the specification change is complete, start the instance by calling StartInstance.
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpecWithOptions(const Models::ModifyPrepayInstanceSpecRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls ModifyPrepayInstanceSpec to upgrade or downgrade the instance type of a subscription ENS instance. The new instance type takes effect for the entire lifecycle of the instance.
       *
       * @description Modifies the instance type of a subscription instance. Before calling this operation, stop the instance by calling StopInstance. After the specification change is complete, start the instance by calling StartInstance.
       *
       * @param request ModifyPrepayInstanceSpecRequest
       * @return ModifyPrepayInstanceSpecResponse
       */
      Models::ModifyPrepayInstanceSpecResponse modifyPrepayInstanceSpec(const Models::ModifyPrepayInstanceSpecRequest &request);

      /**
       * @summary Modifies the information about a security group.
       *
       * @description - Rate limit: 100 requests per second.
       * - up to 5 times per second per user.
       *
       * @param request ModifySecurityGroupAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySecurityGroupAttributeResponse
       */
      Models::ModifySecurityGroupAttributeResponse modifySecurityGroupAttributeWithOptions(const Models::ModifySecurityGroupAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a security group.
       *
       * @description - Rate limit: 100 requests per second.
       * - up to 5 times per second per user.
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
       * @summary Invoke the ModifySnatEntry API to modify an SNAT entry.
       *
       * @param request ModifySnatEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntryWithOptions(const Models::ModifySnatEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the ModifySnatEntry API to modify an SNAT entry.
       *
       * @param request ModifySnatEntryRequest
       * @return ModifySnatEntryResponse
       */
      Models::ModifySnatEntryResponse modifySnatEntry(const Models::ModifySnatEntryRequest &request);

      /**
       * @summary Modifies the attributes of a vSwitch.
       *
       * @description - API rate limit: 100 calls per second.
       * - Rate limit per user: 5 calls per second.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttributeWithOptions(const Models::ModifyVSwitchAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the attributes of a vSwitch.
       *
       * @description - API rate limit: 100 calls per second.
       * - Rate limit per user: 5 calls per second.
       *
       * @param request ModifyVSwitchAttributeRequest
       * @return ModifyVSwitchAttributeResponse
       */
      Models::ModifyVSwitchAttributeResponse modifyVSwitchAttribute(const Models::ModifyVSwitchAttributeRequest &request);

      /**
       * @summary Deploys an SDG that is already attached to an instance to the corresponding AIC.
       *
       * @param tmpReq MountInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MountInstanceSDGResponse
       */
      Models::MountInstanceSDGResponse mountInstanceSDGWithOptions(const Models::MountInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deploys an SDG that is already attached to an instance to the corresponding AIC.
       *
       * @param request MountInstanceSDGRequest
       * @return MountInstanceSDGResponse
       */
      Models::MountInstanceSDGResponse mountInstanceSDG(const Models::MountInstanceSDGRequest &request);

      /**
       * @summary Preloads an SDG.
       *
       * @param tmpReq PreloadRegionSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadRegionSDGResponse
       */
      Models::PreloadRegionSDGResponse preloadRegionSDGWithOptions(const Models::PreloadRegionSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Preloads an SDG.
       *
       * @param request PreloadRegionSDGRequest
       * @return PreloadRegionSDGResponse
       */
      Models::PreloadRegionSDGResponse preloadRegionSDG(const Models::PreloadRegionSDGRequest &request);

      /**
       * @summary Prepares for an upload and retrieves information about the physical storage location.
       *
       * @param request PrepareUploadRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrepareUploadResponse
       */
      Models::PrepareUploadResponse prepareUploadWithOptions(const Models::PrepareUploadRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prepares for an upload and retrieves information about the physical storage location.
       *
       * @param request PrepareUploadRequest
       * @return PrepareUploadResponse
       */
      Models::PrepareUploadResponse prepareUpload(const Models::PrepareUploadRequest &request);

      /**
       * @summary Pre-pushes the business or service data of an application to a file server.
       *
       * @param request PushApplicationDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushApplicationDataResponse
       */
      Models::PushApplicationDataResponse pushApplicationDataWithOptions(const Models::PushApplicationDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pre-pushes the business or service data of an application to a file server.
       *
       * @param request PushApplicationDataRequest
       * @return PushApplicationDataResponse
       */
      Models::PushApplicationDataResponse pushApplicationData(const Models::PushApplicationDataRequest &request);

      /**
       * @summary Create a bucket for collaborative storage.
       *
       * @param request PutBucketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutBucketResponse
       */
      Models::PutBucketResponse putBucketWithOptions(const Models::PutBucketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a bucket for collaborative storage.
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
       * @summary You can call the PutBucketLifecycle operation to set lifecycle rules for a bucket.
       *
       * @description - You can configure up to 1,000 rules.
       * - If an object matches multiple rules, the rule with the earliest expiration time applies.
       *
       * @param request PutBucketLifecycleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutBucketLifecycleResponse
       */
      Models::PutBucketLifecycleResponse putBucketLifecycleWithOptions(const Models::PutBucketLifecycleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the PutBucketLifecycle operation to set lifecycle rules for a bucket.
       *
       * @description - You can configure up to 1,000 rules.
       * - If an object matches multiple rules, the rule with the earliest expiration time applies.
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
       * @summary Restarts an AIC server.
       *
       * @param request RebootARMServerInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootARMServerInstanceResponse
       */
      Models::RebootARMServerInstanceResponse rebootARMServerInstanceWithOptions(const Models::RebootARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restarts an AIC server.
       *
       * @param request RebootARMServerInstanceRequest
       * @return RebootARMServerInstanceResponse
       */
      Models::RebootARMServerInstanceResponse rebootARMServerInstance(const Models::RebootARMServerInstanceRequest &request);

      /**
       * @summary Reboots an instance.
       *
       * @description - Only instances that are in the Running state can be restarted.
       * - If the operation is successful, the status of the instance becomes Starting.
       *
       * @param request RebootInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RebootInstanceResponse
       */
      Models::RebootInstanceResponse rebootInstanceWithOptions(const Models::RebootInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reboots an instance.
       *
       * @description - Only instances that are in the Running state can be restarted.
       * - If the operation is successful, the status of the instance becomes Starting.
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
       * @summary Resumes an AIC on a card by calling RecoverAICInstance.
       *
       * @param request RecoverAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverAICInstanceResponse
       */
      Models::RecoverAICInstanceResponse recoverAICInstanceWithOptions(const Models::RecoverAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes an AIC on a card by calling RecoverAICInstance.
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
       * @summary Releases an AIC on a card.
       *
       * @param request ReleaseAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseAICInstanceResponse
       */
      Models::ReleaseAICInstanceResponse releaseAICInstanceWithOptions(const Models::ReleaseAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an AIC on a card.
       *
       * @param request ReleaseAICInstanceRequest
       * @return ReleaseAICInstanceResponse
       */
      Models::ReleaseAICInstanceResponse releaseAICInstance(const Models::ReleaseAICInstanceRequest &request);

      /**
       * @summary Releases a cloud application server.
       *
       * @param request ReleaseARMServerInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseARMServerInstanceResponse
       */
      Models::ReleaseARMServerInstanceResponse releaseARMServerInstanceWithOptions(const Models::ReleaseARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases a cloud application server.
       *
       * @param request ReleaseARMServerInstanceRequest
       * @return ReleaseARMServerInstanceResponse
       */
      Models::ReleaseARMServerInstanceResponse releaseARMServerInstance(const Models::ReleaseARMServerInstanceRequest &request);

      /**
       * @summary Releases an instance. to release only Elastic IP Addresses (EIPs), Edge Load Balancer (ELB) instances, and cloud disk-based instances. We recommend that you call service-specific operations to release or unsubscribe from instances.
       *
       * @description - up to 10,000 times per second per account.
       * - The maximum number of times that each user can call this operation per second is 50.
       *
       * @param request ReleaseInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReleaseInstanceResponse
       */
      Models::ReleaseInstanceResponse releaseInstanceWithOptions(const Models::ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases an instance. to release only Elastic IP Addresses (EIPs), Edge Load Balancer (ELB) instances, and cloud disk-based instances. We recommend that you call service-specific operations to release or unsubscribe from instances.
       *
       * @description - up to 10,000 times per second per account.
       * - The maximum number of times that each user can call this operation per second is 50.
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
       * @param tmpReq RemoveBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServersWithOptions(const Models::RemoveBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes backend servers.
       *
       * @param request RemoveBackendServersRequest
       * @return RemoveBackendServersResponse
       */
      Models::RemoveBackendServersResponse removeBackendServers(const Models::RemoveBackendServersRequest &request);

      /**
       * @summary Unmounts an SDG from compute instances.
       *
       * @param tmpReq RemoveInstanceSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveInstanceSDGResponse
       */
      Models::RemoveInstanceSDGResponse removeInstanceSDGWithOptions(const Models::RemoveInstanceSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unmounts an SDG from compute instances.
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
       * @summary Removes a deployed SDG and restores local storage.
       *
       * @param tmpReq RemoveSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSDGResponse
       */
      Models::RemoveSDGResponse removeSDGWithOptions(const Models::RemoveSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a deployed SDG and restores local storage.
       *
       * @param request RemoveSDGRequest
       * @return RemoveSDGResponse
       */
      Models::RemoveSDGResponse removeSDG(const Models::RemoveSDGRequest &request);

      /**
       * @summary Removes all versions of SDGs and restores local disk mounting.
       *
       * @param tmpReq RemoveSDGsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSDGsResponse
       */
      Models::RemoveSDGsResponse removeSDGsWithOptions(const Models::RemoveSDGsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes all versions of SDGs and restores local disk mounting.
       *
       * @param request RemoveSDGsRequest
       * @return RemoveSDGsResponse
       */
      Models::RemoveSDGsResponse removeSDGs(const Models::RemoveSDGsRequest &request);

      /**
       * @summary Removes networking information from an Edge Private Network (EPN) instance. This operation applies only to internal networks.
       *
       * @param request RemoveVSwitchesFromEpnInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveVSwitchesFromEpnInstanceResponse
       */
      Models::RemoveVSwitchesFromEpnInstanceResponse removeVSwitchesFromEpnInstanceWithOptions(const Models::RemoveVSwitchesFromEpnInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes networking information from an Edge Private Network (EPN) instance. This operation applies only to internal networks.
       *
       * @param request RemoveVSwitchesFromEpnInstanceRequest
       * @return RemoveVSwitchesFromEpnInstanceResponse
       */
      Models::RemoveVSwitchesFromEpnInstanceResponse removeVSwitchesFromEpnInstance(const Models::RemoveVSwitchesFromEpnInstanceRequest &request);

      /**
       * @summary Renews a subscription AIC instance.
       *
       * @description Renews a subscription AIC server instance. The instance State must be success. You can call DescribeARMServerInstances to query the instance status. Instances in intermediate states such as creating cannot be renewed.
       *
       * @param request RenewARMServerInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewARMServerInstanceResponse
       */
      Models::RenewARMServerInstanceResponse renewARMServerInstanceWithOptions(const Models::RenewARMServerInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a subscription AIC instance.
       *
       * @description Renews a subscription AIC server instance. The instance State must be success. You can call DescribeARMServerInstances to query the instance status. Instances in intermediate states such as creating cannot be renewed.
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
       * @summary Calls the RescaleApplication operation to asynchronously scale resources in or out and complete container deployment or release operations.
       *
       * @param request RescaleApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RescaleApplicationResponse
       */
      Models::RescaleApplicationResponse rescaleApplicationWithOptions(const Models::RescaleApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the RescaleApplication operation to asynchronously scale resources in or out and complete container deployment or release operations.
       *
       * @param request RescaleApplicationRequest
       * @return RescaleApplicationResponse
       */
      Models::RescaleApplicationResponse rescaleApplication(const Models::RescaleApplicationRequest &request);

      /**
       * @summary Rescales bare metal devices.
       *
       * @param request RescaleDeviceServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RescaleDeviceServiceResponse
       */
      Models::RescaleDeviceServiceResponse rescaleDeviceServiceWithOptions(const Models::RescaleDeviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rescales bare metal devices.
       *
       * @param request RescaleDeviceServiceRequest
       * @return RescaleDeviceServiceResponse
       */
      Models::RescaleDeviceServiceResponse rescaleDeviceService(const Models::RescaleDeviceServiceRequest &request);

      /**
       * @summary Resets an AIC instance.
       *
       * @param request ResetAICInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetAICInstanceResponse
       */
      Models::ResetAICInstanceResponse resetAICInstanceWithOptions(const Models::ResetAICInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an AIC instance.
       *
       * @param request ResetAICInstanceRequest
       * @return ResetAICInstanceResponse
       */
      Models::ResetAICInstanceResponse resetAICInstance(const Models::ResetAICInstanceRequest &request);

      /**
       * @summary Rolls back a disk by using a snapshot.
       *
       * @description When you call this operation, take note of the following items:
       * - The disk must be in the In Use (In_Use) or Unattached (Available) state.
       * - The instance to which the disk is attached must be in the Stopped (Stopped) state. You can call the [StopInstance](~~StopInstance~~) operation to stop an instance.
       * - The specified snapshot must be created from the disk specified by the DiskId parameter.
       * - If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ENS instance by calling the [DescribeInstances](~~DescribeInstances~~) operation, the instance is locked for security reasons and no operations are allowed on the instance.
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
       * - The disk must be in the In Use (In_Use) or Unattached (Available) state.
       * - The instance to which the disk is attached must be in the Stopped (Stopped) state. You can call the [StopInstance](~~StopInstance~~) operation to stop an instance.
       * - The specified snapshot must be created from the disk specified by the DiskId parameter.
       * - If the response contains `{"OperationLocks": {"LockReason" : "security"}}` when you query information about an ENS instance by calling the [DescribeInstances](~~DescribeInstances~~) operation, the instance is locked for security reasons and no operations are allowed on the instance.
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
       * @summary Revokes an inbound rule of a security group to remove the inbound access permission settings.
       *
       * @description - In security group API documentation, the traffic initiator is referred to as the source (Source), and the data transmission receiver is referred to as the destination (Dest).
       * - Any one of the following sets of parameters can identify an inbound security group rule. Specifying only a single parameter cannot identify a security group rule.
       * - Revoke permission settings for a specified IP address range: IpProtocol, PortRange, Policy, SourceCidrIp.
       *
       * @param request RevokeSecurityGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroupWithOptions(const Models::RevokeSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an inbound rule of a security group to remove the inbound access permission settings.
       *
       * @description - In security group API documentation, the traffic initiator is referred to as the source (Source), and the data transmission receiver is referred to as the destination (Dest).
       * - Any one of the following sets of parameters can identify an inbound security group rule. Specifying only a single parameter cannot identify a security group rule.
       * - Revoke permission settings for a specified IP address range: IpProtocol, PortRange, Policy, SourceCidrIp.
       *
       * @param request RevokeSecurityGroupRequest
       * @return RevokeSecurityGroupResponse
       */
      Models::RevokeSecurityGroupResponse revokeSecurityGroup(const Models::RevokeSecurityGroupRequest &request);

      /**
       * @summary Calls RevokeSecurityGroupEgress to delete an outbound security group rule and revoke outbound access permissions of the security group.
       *
       * @description > In the API documentation for security groups, the end that initiates traffic is referred to as the source, and the end that receives data is referred to as the destination (Dest).
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgressWithOptions(const Models::RevokeSecurityGroupEgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls RevokeSecurityGroupEgress to delete an outbound security group rule and revoke outbound access permissions of the security group.
       *
       * @description > In the API documentation for security groups, the end that initiates traffic is referred to as the source, and the end that receives data is referred to as the destination (Dest).
       *
       * @param request RevokeSecurityGroupEgressRequest
       * @return RevokeSecurityGroupEgressResponse
       */
      Models::RevokeSecurityGroupEgressResponse revokeSecurityGroupEgress(const Models::RevokeSecurityGroupEgressRequest &request);

      /**
       * @summary Rolls back the container version of edge resources under an application to a historical version.
       *
       * @param request RollbackApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplicationWithOptions(const Models::RollbackApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back the container version of edge resources under an application to a historical version.
       *
       * @param request RollbackApplicationRequest
       * @return RollbackApplicationResponse
       */
      Models::RollbackApplicationResponse rollbackApplication(const Models::RollbackApplicationRequest &request);

      /**
       * @summary Creates pay-as-you-go or subscription ENS compute instances.
       *
       * @param tmpReq RunInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunInstancesResponse
       */
      Models::RunInstancesResponse runInstancesWithOptions(const Models::RunInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates pay-as-you-go or subscription ENS compute instances.
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
       * @summary Saves the cloud disk of a specified device as a Shared Data Group (SDG).
       *
       * @description Saves a Shared Data Group (SDG). SDGs in the failed status cannot be saved. Before calling this operation, call DescribeSDGs to query the current status.
       *
       * @param request SaveSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveSDGResponse
       */
      Models::SaveSDGResponse saveSDGWithOptions(const Models::SaveSDGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves the cloud disk of a specified device as a Shared Data Group (SDG).
       *
       * @description Saves a Shared Data Group (SDG). SDGs in the failed status cannot be saved. Before calling this operation, call DescribeSDGs to query the current status.
       *
       * @param request SaveSDGRequest
       * @return SaveSDGResponse
       */
      Models::SaveSDGResponse saveSDG(const Models::SaveSDGRequest &request);

      /**
       * @summary Scales out a node pool to ensure that the number of nodes is sufficient to support your workloads. The Count parameter must be greater than the current number of nodes in the node pool. If the node pool contains nodes that failed to scale out, you must call the DeleteClusterNodes operation to delete the failed nodes before you scale out the node pool. A scale-out task typically takes 5 to 10 minutes. If the task takes more than 1 hour, the scale-out fails. In this case, contact technical support.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Scaling out a node pool is an asynchronous operation. After you call the operation, you must wait 5 to 10 minutes for the task to complete.
       *
       * @param tmpReq ScaleClusterNodePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ScaleClusterNodePoolResponse
       */
      Models::ScaleClusterNodePoolResponse scaleClusterNodePoolWithOptions(const Models::ScaleClusterNodePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Scales out a node pool to ensure that the number of nodes is sufficient to support your workloads. The Count parameter must be greater than the current number of nodes in the node pool. If the node pool contains nodes that failed to scale out, you must call the DeleteClusterNodes operation to delete the failed nodes before you scale out the node pool. A scale-out task typically takes 5 to 10 minutes. If the task takes more than 1 hour, the scale-out fails. In this case, contact technical support.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Scaling out a node pool is an asynchronous operation. After you call the operation, you must wait 5 to 10 minutes for the task to complete.
       *
       * @param request ScaleClusterNodePoolRequest
       * @return ScaleClusterNodePoolResponse
       */
      Models::ScaleClusterNodePoolResponse scaleClusterNodePool(const Models::ScaleClusterNodePoolRequest &request);

      /**
       * @summary Sets the weights of backend servers by calling SetBackendServers.
       *
       * @param tmpReq SetBackendServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetBackendServersResponse
       */
      Models::SetBackendServersResponse setBackendServersWithOptions(const Models::SetBackendServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the weights of backend servers by calling SetBackendServers.
       *
       * @param request SetBackendServersRequest
       * @return SetBackendServersResponse
       */
      Models::SetBackendServersResponse setBackendServers(const Models::SetBackendServersRequest &request);

      /**
       * @summary Modifies the configuration of an HTTP listener.
       *
       * @description - API call frequency: 100 calls per second.
       * - Per-user call frequency: 10 calls per second.
       *
       * @param request SetLoadBalancerHTTPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerHTTPListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an HTTP listener.
       *
       * @description - API call frequency: 100 calls per second.
       * - Per-user call frequency: 10 calls per second.
       *
       * @param request SetLoadBalancerHTTPListenerAttributeRequest
       * @return SetLoadBalancerHTTPListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPListenerAttributeResponse setLoadBalancerHTTPListenerAttribute(const Models::SetLoadBalancerHTTPListenerAttributeRequest &request);

      /**
       * @summary Modifies an HTTPS listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request SetLoadBalancerHTTPSListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttributeWithOptions(const Models::SetLoadBalancerHTTPSListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an HTTPS listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request SetLoadBalancerHTTPSListenerAttributeRequest
       * @return SetLoadBalancerHTTPSListenerAttributeResponse
       */
      Models::SetLoadBalancerHTTPSListenerAttributeResponse setLoadBalancerHTTPSListenerAttribute(const Models::SetLoadBalancerHTTPSListenerAttributeRequest &request);

      /**
       * @summary Modifies the status of an Edge Load Balancer (ELB) instance.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request SetLoadBalancerStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatusWithOptions(const Models::SetLoadBalancerStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of an Edge Load Balancer (ELB) instance.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request SetLoadBalancerStatusRequest
       * @return SetLoadBalancerStatusResponse
       */
      Models::SetLoadBalancerStatusResponse setLoadBalancerStatus(const Models::SetLoadBalancerStatusRequest &request);

      /**
       * @summary Modifies the configuration of a TCP listener.
       *
       * @description - API call rate limit: 100 calls per second.
       * - Per-user call rate limit: 10 calls per second.
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttributeWithOptions(const Models::SetLoadBalancerTCPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of a TCP listener.
       *
       * @description - API call rate limit: 100 calls per second.
       * - Per-user call rate limit: 10 calls per second.
       *
       * @param request SetLoadBalancerTCPListenerAttributeRequest
       * @return SetLoadBalancerTCPListenerAttributeResponse
       */
      Models::SetLoadBalancerTCPListenerAttributeResponse setLoadBalancerTCPListenerAttribute(const Models::SetLoadBalancerTCPListenerAttributeRequest &request);

      /**
       * @summary Call `SetLoadBalancerUDPListenerAttribute` to modify a UDP listener.
       *
       * @description - API call rate limit: 100 requests/second.
       * - Per-user rate limit: 10 requests/second.
       *
       * @param request SetLoadBalancerUDPListenerAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoadBalancerUDPListenerAttributeResponse
       */
      Models::SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttributeWithOptions(const Models::SetLoadBalancerUDPListenerAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call `SetLoadBalancerUDPListenerAttribute` to modify a UDP listener.
       *
       * @description - API call rate limit: 100 requests/second.
       * - Per-user rate limit: 10 requests/second.
       *
       * @param request SetLoadBalancerUDPListenerAttributeRequest
       * @return SetLoadBalancerUDPListenerAttributeResponse
       */
      Models::SetLoadBalancerUDPListenerAttributeResponse setLoadBalancerUDPListenerAttribute(const Models::SetLoadBalancerUDPListenerAttributeRequest &request);

      /**
       * @summary Shares a specified AIC image with other users.
       *
       * @param tmpReq ShareAICImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ShareAICImageResponse
       */
      Models::ShareAICImageResponse shareAICImageWithOptions(const Models::ShareAICImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shares a specified AIC image with other users.
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
       * @description - You can call the operation only when the instance is in the Stopped state.
       * - If the operation is successful, the status of the instance becomes Starting.
       *
       * @param request StartInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartInstanceResponse
       */
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts an instance.
       *
       * @description - You can call the operation only when the instance is in the Stopped state.
       * - If the operation is successful, the status of the instance becomes Starting.
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
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request StartLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartLoadBalancerListenerResponse
       */
      Models::StartLoadBalancerListenerResponse startLoadBalancerListenerWithOptions(const Models::StartLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
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
       * @description - to stop instances that are only in the Running state.
       * - If the call is successful, the state of the instance becomes Stopping.
       * - Once the instance is stopped, the state of the instance becomes Stopped.
       * - Force stop is supported, which is equivalent to power-off. Data that is not written to disks on the instance may be lost.
       *
       * @param request StopInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopInstanceResponse
       */
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an instance.
       *
       * @description - to stop instances that are only in the Running state.
       * - If the call is successful, the state of the instance becomes Stopping.
       * - Once the instance is stopped, the state of the instance becomes Stopped.
       * - Force stop is supported, which is equivalent to power-off. Data that is not written to disks on the instance may be lost.
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
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
       *
       * @param request StopLoadBalancerListenerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopLoadBalancerListenerResponse
       */
      Models::StopLoadBalancerListenerResponse stopLoadBalancerListenerWithOptions(const Models::StopLoadBalancerListenerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a listener.
       *
       * @description - up to 100 times per second per account.
       * - up to 10 times per second per user.
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
       * @summary Disassociates an elastic IP address (EIP) from the cloud resource to which it is bound.
       *
       * @param request UnAssociateEnsEipAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnAssociateEnsEipAddressResponse
       */
      Models::UnAssociateEnsEipAddressResponse unAssociateEnsEipAddressWithOptions(const Models::UnAssociateEnsEipAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates an elastic IP address (EIP) from the cloud resource to which it is bound.
       *
       * @param request UnAssociateEnsEipAddressRequest
       * @return UnAssociateEnsEipAddressResponse
       */
      Models::UnAssociateEnsEipAddressResponse unAssociateEnsEipAddress(const Models::UnAssociateEnsEipAddressRequest &request);

      /**
       * @summary Uninstalls specified add-ons from a cluster.
       *
       * @description Uninstalls add-ons from an ECK cluster. The target cluster must be in the running state. You can call DescribeClustersV1 to query the cluster state and wait until the cluster initialization is complete before you call this operation.
       *
       * @param tmpReq UnInstallClusterAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnInstallClusterAddonsResponse
       */
      Models::UnInstallClusterAddonsResponse unInstallClusterAddonsWithOptions(const Models::UnInstallClusterAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls specified add-ons from a cluster.
       *
       * @description Uninstalls add-ons from an ECK cluster. The target cluster must be in the running state. You can call DescribeClustersV1 to query the cluster state and wait until the cluster initialization is complete before you call this operation.
       *
       * @param request UnInstallClusterAddonsRequest
       * @return UnInstallClusterAddonsResponse
       */
      Models::UnInstallClusterAddonsResponse unInstallClusterAddons(const Models::UnInstallClusterAddonsRequest &request);

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
       * @summary Invokes the UnassociateNetworkAcl operation to disassociate a network ACL from a network, which reverses the attach of the network ACL.
       *
       * @param request UnassociateNetworkAclRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAclWithOptions(const Models::UnassociateNetworkAclRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the UnassociateNetworkAcl operation to disassociate a network ACL from a network, which reverses the attach of the network ACL.
       *
       * @param request UnassociateNetworkAclRequest
       * @return UnassociateNetworkAclResponse
       */
      Models::UnassociateNetworkAclResponse unassociateNetworkAcl(const Models::UnassociateNetworkAclRequest &request);

      /**
       * @summary Deletes a secondary CIDR block from a network.
       *
       * @description Before deleting a secondary CIDR block from a network, delete the vSwitches created in the secondary CIDR block.
       *
       * @param request UnassociateNetworkCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassociateNetworkCidrBlockResponse
       */
      Models::UnassociateNetworkCidrBlockResponse unassociateNetworkCidrBlockWithOptions(const Models::UnassociateNetworkCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a secondary CIDR block from a network.
       *
       * @description Before deleting a secondary CIDR block from a network, delete the vSwitches created in the secondary CIDR block.
       *
       * @param request UnassociateNetworkCidrBlockRequest
       * @return UnassociateNetworkCidrBlockResponse
       */
      Models::UnassociateNetworkCidrBlockResponse unassociateNetworkCidrBlock(const Models::UnassociateNetworkCidrBlockRequest &request);

      /**
       * @summary Calls UnloadRegionSDG to delete preloaded data.
       *
       * @param tmpReq UnloadRegionSDGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnloadRegionSDGResponse
       */
      Models::UnloadRegionSDGResponse unloadRegionSDGWithOptions(const Models::UnloadRegionSDGRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls UnloadRegionSDG to delete preloaded data.
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
       * @summary Removes user tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes user tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the cluster certificate.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Updating the cluster certificate is an asynchronous operation. After you call the API operation, wait 5 to 10 minutes for the cluster certificate to be updated and the control components to restart. During this process, you can call the DescribeClustersV1 operation to query the update status of the cluster certificate. After the cluster certificate is updated, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request UpdateClusterCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClusterCertificateResponse
       */
      Models::UpdateClusterCertificateResponse updateClusterCertificateWithOptions(const Models::UpdateClusterCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the cluster certificate.
       *
       * @description - Rate limit per user: 10 calls per second.
       * - Updating the cluster certificate is an asynchronous operation. After you call the API operation, wait 5 to 10 minutes for the cluster certificate to be updated and the control components to restart. During this process, you can call the DescribeClustersV1 operation to query the update status of the cluster certificate. After the cluster certificate is updated, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request UpdateClusterCertificateRequest
       * @return UpdateClusterCertificateResponse
       */
      Models::UpdateClusterCertificateResponse updateClusterCertificate(const Models::UpdateClusterCertificateRequest &request);

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
       * @summary Upgrades the versions of cluster add-on instances.
       *
       * @description - The maximum call frequency per user is 10 calls per second.
       * - Creating a cluster is an asynchronous operation. After the API call returns, you must wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param tmpReq UpgradeClusterAddonsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeClusterAddonsResponse
       */
      Models::UpgradeClusterAddonsResponse upgradeClusterAddonsWithOptions(const Models::UpgradeClusterAddonsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades the versions of cluster add-on instances.
       *
       * @description - The maximum call frequency per user is 10 calls per second.
       * - Creating a cluster is an asynchronous operation. After the API call returns, you must wait 10 to 20 minutes for the cluster initialization to complete. During this process, you can call the DescribeClustersV1 operation to query the cluster creation status. After the cluster is created, you can call the DescribeClusterUserKubeconfig operation to obtain the cluster certificate.
       *
       * @param request UpgradeClusterAddonsRequest
       * @return UpgradeClusterAddonsResponse
       */
      Models::UpgradeClusterAddonsResponse upgradeClusterAddons(const Models::UpgradeClusterAddonsRequest &request);

      /**
       * @summary Uploads a new AIC public key.
       *
       * @param request UploadAICPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAICPublicKeyResponse
       */
      Models::UploadAICPublicKeyResponse uploadAICPublicKeyWithOptions(const Models::UploadAICPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a new AIC public key.
       *
       * @param request UploadAICPublicKeyRequest
       * @return UploadAICPublicKeyResponse
       */
      Models::UploadAICPublicKeyResponse uploadAICPublicKey(const Models::UploadAICPublicKeyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
