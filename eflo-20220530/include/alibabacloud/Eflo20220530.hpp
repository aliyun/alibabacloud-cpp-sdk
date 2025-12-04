// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EFLO20220530_HPP_
#define ALIBABACLOUD_EFLO20220530_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eflo20220530Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eflo20220530.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Apply for a secondary private IP address for the current Lingjun Elastic Network Interface. You can automatically assign a secondary private IP address.
       *
       * @description Apply for a secondary private IP address for the specified Lingjun Elastic Network Interface.
       * *   If the PrivateIp field is empty, a secondary private IP address is automatically assigned and the unique identifier of the IP address is returned.
       * *   You can use the GetLeniPrivateIpAddress or ListLeniPrivateIpAddresses interface to check whether the secondary private IP address is assigned.
       *
       * @param request AssignLeniPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignLeniPrivateIpAddressResponse
       */
      Models::AssignLeniPrivateIpAddressResponse assignLeniPrivateIpAddressWithOptions(const Models::AssignLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Apply for a secondary private IP address for the current Lingjun Elastic Network Interface. You can automatically assign a secondary private IP address.
       *
       * @description Apply for a secondary private IP address for the specified Lingjun Elastic Network Interface.
       * *   If the PrivateIp field is empty, a secondary private IP address is automatically assigned and the unique identifier of the IP address is returned.
       * *   You can use the GetLeniPrivateIpAddress or ListLeniPrivateIpAddresses interface to check whether the secondary private IP address is assigned.
       *
       * @param request AssignLeniPrivateIpAddressRequest
       * @return AssignLeniPrivateIpAddressResponse
       */
      Models::AssignLeniPrivateIpAddressResponse assignLeniPrivateIpAddress(const Models::AssignLeniPrivateIpAddressRequest &request);

      /**
       * @summary Applies for a private secondary IP address for the current LNI. You can also call this operation to assign a secondary MAC address to the current LNI.
       *
       * @description >  Apply for secondary private IP addresses
       * *   By default, each network interface controller can apply for three secondary private IP addresses. If the quota is exceeded, contact the administrator.
       * *   The secondary private IP address is allocated from the Lingjun subnet to which the current network interface controller belongs. The first address and the last two addresses belong to reserved addresses and do not participate in the allocation.
       *
       * @param request AssignPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssignPrivateIpAddressResponse
       */
      Models::AssignPrivateIpAddressResponse assignPrivateIpAddressWithOptions(const Models::AssignPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a private secondary IP address for the current LNI. You can also call this operation to assign a secondary MAC address to the current LNI.
       *
       * @description >  Apply for secondary private IP addresses
       * *   By default, each network interface controller can apply for three secondary private IP addresses. If the quota is exceeded, contact the administrator.
       * *   The secondary private IP address is allocated from the Lingjun subnet to which the current network interface controller belongs. The first address and the last two addresses belong to reserved addresses and do not participate in the allocation.
       *
       * @param request AssignPrivateIpAddressRequest
       * @return AssignPrivateIpAddressResponse
       */
      Models::AssignPrivateIpAddressResponse assignPrivateIpAddress(const Models::AssignPrivateIpAddressRequest &request);

      /**
       * @summary When the VPD primary network segment address is not enough to allocate, you can choose to create an additional network segment as the additional network segment of the VPD primary network segment.
       *
       * @description >  **Add a CIDR block**
       * *   The CIDR block cannot start with 0. The subnet mask must be 8 to 28 bits in length.
       * *   The secondary IPv4 CIDR block must not overlap with the primary IPv4 CIDR block of the Lingjun CIDR block and the added secondary IPv4 CIDR block.
       * *   You cannot use 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 as the CIDR block of Lingjun. Example: In the Lingjun CIDR block whose primary IPv4 CIDR block is 192.168.0.0/16, you cannot add the following CIDR blocks as additional IPv4 CIDR blocks. The CIDR block that is in the same range as 192.168.0.0/16. A CIDR block that is larger than 192.168.0.0/16. Example: 192.168.0.0/8. A CIDR block that is smaller than 192.168.0.0/16. Example: 192.168.0.0/24.
       * *   By default, each tenant can create three additional CIDR blocks in each region.
       *
       * @param request AssociateVpdCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssociateVpdCidrBlockResponse
       */
      Models::AssociateVpdCidrBlockResponse associateVpdCidrBlockWithOptions(const Models::AssociateVpdCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When the VPD primary network segment address is not enough to allocate, you can choose to create an additional network segment as the additional network segment of the VPD primary network segment.
       *
       * @description >  **Add a CIDR block**
       * *   The CIDR block cannot start with 0. The subnet mask must be 8 to 28 bits in length.
       * *   The secondary IPv4 CIDR block must not overlap with the primary IPv4 CIDR block of the Lingjun CIDR block and the added secondary IPv4 CIDR block.
       * *   You cannot use 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 as the CIDR block of Lingjun. Example: In the Lingjun CIDR block whose primary IPv4 CIDR block is 192.168.0.0/16, you cannot add the following CIDR blocks as additional IPv4 CIDR blocks. The CIDR block that is in the same range as 192.168.0.0/16. A CIDR block that is larger than 192.168.0.0/16. Example: 192.168.0.0/8. A CIDR block that is smaller than 192.168.0.0/16. Example: 192.168.0.0/24.
       * *   By default, each tenant can create three additional CIDR blocks in each region.
       *
       * @param request AssociateVpdCidrBlockRequest
       * @return AssociateVpdCidrBlockResponse
       */
      Models::AssociateVpdCidrBlockResponse associateVpdCidrBlock(const Models::AssociateVpdCidrBlockRequest &request);

      /**
       * @summary Lingjun ENI is bound to NC.
       *
       * @description This interface is an asynchronous interface. You need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the available state.
       *
       * @param request AttachElasticNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachElasticNetworkInterfaceResponse
       */
      Models::AttachElasticNetworkInterfaceResponse attachElasticNetworkInterfaceWithOptions(const Models::AttachElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lingjun ENI is bound to NC.
       *
       * @description This interface is an asynchronous interface. You need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the available state.
       *
       * @param request AttachElasticNetworkInterfaceRequest
       * @return AttachElasticNetworkInterfaceResponse
       */
      Models::AttachElasticNetworkInterfaceResponse attachElasticNetworkInterface(const Models::AttachElasticNetworkInterfaceRequest &request);

      /**
       * @summary Creates an LENI.
       *
       * @param request CreateElasticNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateElasticNetworkInterfaceResponse
       */
      Models::CreateElasticNetworkInterfaceResponse createElasticNetworkInterfaceWithOptions(const Models::CreateElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an LENI.
       *
       * @param request CreateElasticNetworkInterfaceRequest
       * @return CreateElasticNetworkInterfaceResponse
       */
      Models::CreateElasticNetworkInterfaceResponse createElasticNetworkInterface(const Models::CreateElasticNetworkInterfaceRequest &request);

      /**
       * @summary Create a Lingjun HUB.
       *
       * @description When you call this operation to create a Lingjun HUB, note that:
       * *   Make sure that you have sufficient Lingjun HUB quota.
       * *   This interface is an asynchronous interface. After this interface is called, the system will return the ID of a Lingjun HUB. At this time, the Lingjun HUB instance may not be created yet, and the system background creation task is still in progress. You can call the ListErs or GetEr operation to query the status of the Lingjun HUB.
       *     *   If the status of the Lingjun HUB is Executing, it indicates that it is being created.
       *     *   If the status of the Lingjun HUB is Available, the creation is successful.
       *
       * @param request CreateErRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateErResponse
       */
      Models::CreateErResponse createErWithOptions(const Models::CreateErRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Lingjun HUB.
       *
       * @description When you call this operation to create a Lingjun HUB, note that:
       * *   Make sure that you have sufficient Lingjun HUB quota.
       * *   This interface is an asynchronous interface. After this interface is called, the system will return the ID of a Lingjun HUB. At this time, the Lingjun HUB instance may not be created yet, and the system background creation task is still in progress. You can call the ListErs or GetEr operation to query the status of the Lingjun HUB.
       *     *   If the status of the Lingjun HUB is Executing, it indicates that it is being created.
       *     *   If the status of the Lingjun HUB is Available, the creation is successful.
       *
       * @param request CreateErRequest
       * @return CreateErResponse
       */
      Models::CreateErResponse createEr(const Models::CreateErRequest &request);

      /**
       * @summary Create a network instance connection.
       *
       * @description When you call this operation to create a network instance connection, note that:
       * *   Make sure that you have created a Lingjun HUB instance.
       * *   Make sure that you have sufficient quota for network instance connections.
       * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the network instance connection. In this case, the network instance connection may not be created yet, and the system is still creating the network instance in the background. You can query the connection status of a network instance by ListErAttachments or GetErAttachment:
       *     *   If the connection status of the network instance is Executing, the network instance is being created.
       *     *   If the connection status of the network instance is Available, the network instance is created.
       *
       * @param request CreateErAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateErAttachmentResponse
       */
      Models::CreateErAttachmentResponse createErAttachmentWithOptions(const Models::CreateErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a network instance connection.
       *
       * @description When you call this operation to create a network instance connection, note that:
       * *   Make sure that you have created a Lingjun HUB instance.
       * *   Make sure that you have sufficient quota for network instance connections.
       * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the network instance connection. In this case, the network instance connection may not be created yet, and the system is still creating the network instance in the background. You can query the connection status of a network instance by ListErAttachments or GetErAttachment:
       *     *   If the connection status of the network instance is Executing, the network instance is being created.
       *     *   If the connection status of the network instance is Available, the network instance is created.
       *
       * @param request CreateErAttachmentRequest
       * @return CreateErAttachmentResponse
       */
      Models::CreateErAttachmentResponse createErAttachment(const Models::CreateErAttachmentRequest &request);

      /**
       * @summary Users can use this API to create routing policy by specifying the network instance connection under Lingjun HUB.
       *
       * @description When you call this operation to create a routing policy, note that:
       * *   Make sure that you have created a Lingjun HUB instance.
       * *   Make sure that you have created a network instance connection.
       * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the routing policy. In this case, the routing policy instance may not be created yet, and the system background creation task is still in progress. You can use ListErRouteMaps or GetErRouteMap to query the status of a routing policy.
       *     *   If the status of the routing policy is Execute, the system is creating the instance.
       *     *   If the status of the routing policy is Available, the creation is successful.
       *
       * @param request CreateErRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateErRouteMapResponse
       */
      Models::CreateErRouteMapResponse createErRouteMapWithOptions(const Models::CreateErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Users can use this API to create routing policy by specifying the network instance connection under Lingjun HUB.
       *
       * @description When you call this operation to create a routing policy, note that:
       * *   Make sure that you have created a Lingjun HUB instance.
       * *   Make sure that you have created a network instance connection.
       * *   This operation is an asynchronous operation. After you call this operation, the system returns the ID of the routing policy. In this case, the routing policy instance may not be created yet, and the system background creation task is still in progress. You can use ListErRouteMaps or GetErRouteMap to query the status of a routing policy.
       *     *   If the status of the routing policy is Execute, the system is creating the instance.
       *     *   If the status of the routing policy is Available, the creation is successful.
       *
       * @param request CreateErRouteMapRequest
       * @return CreateErRouteMapResponse
       */
      Models::CreateErRouteMapResponse createErRouteMap(const Models::CreateErRouteMapRequest &request);

      /**
       * @summary Users can use this API to create a Lingjun subnet under the Lingjun network segment.
       *
       * @description When you call this operation to create a Lingjun subnet, note that:
       * *   You have created a Lingjun CIDR block.
       * *   Only one network segment can be specified for a Lingjun subnet.
       * *   The network segment cannot be modified after the Lingjun subnet is created.
       * *   Make sure that you have sufficient Lingjun subnet quota.
       * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun subnet. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListSubnets or GetSubnet operation to query the status of the CIDR block of Lingjun.
       *     *   If the status of the Lingjun subnet is Executed, it indicates that it is being created.
       *     *   If the status of the Lingjun subnet is Available, the creation is successful.
       *
       * @param request CreateSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSubnetResponse
       */
      Models::CreateSubnetResponse createSubnetWithOptions(const Models::CreateSubnetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Users can use this API to create a Lingjun subnet under the Lingjun network segment.
       *
       * @description When you call this operation to create a Lingjun subnet, note that:
       * *   You have created a Lingjun CIDR block.
       * *   Only one network segment can be specified for a Lingjun subnet.
       * *   The network segment cannot be modified after the Lingjun subnet is created.
       * *   Make sure that you have sufficient Lingjun subnet quota.
       * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun subnet. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListSubnets or GetSubnet operation to query the status of the CIDR block of Lingjun.
       *     *   If the status of the Lingjun subnet is Executed, it indicates that it is being created.
       *     *   If the status of the Lingjun subnet is Available, the creation is successful.
       *
       * @param request CreateSubnetRequest
       * @return CreateSubnetResponse
       */
      Models::CreateSubnetResponse createSubnet(const Models::CreateSubnetRequest &request);

      /**
       * @summary You can create a Lingjun connection to connect Lingjun network environment and Alibaba Cloud network environment.
       *
       * @description When you call this operation to create a Lingjun connection, note that:
       * *   When you specify the vccId parameter, the system will configure the purchased Lingjun connection for you. When the default vccId parameter is set, the system will automatically place an order and configure the Lingjun connection for you.
       * *   Make sure that you have called the InitializeVcc operation to grant permissions.
       * *   This interface is an asynchronous interface. After this interface is called, the system will return the Lingjun connection ID, but the Lingjun connection instance may not be created yet, and the system background creation task is still in progress. You can call the ListVccs or GetVcc operation to query the status of the Lingjun connection.
       *     *   If the status of the Lingjun connection is Executed, the Lingjun connection is being created.
       *     *   If the status of the Lingjun connection is Available, the Lingjun connection is created.
       *
       * @param request CreateVccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVccResponse
       */
      Models::CreateVccResponse createVccWithOptions(const Models::CreateVccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create a Lingjun connection to connect Lingjun network environment and Alibaba Cloud network environment.
       *
       * @description When you call this operation to create a Lingjun connection, note that:
       * *   When you specify the vccId parameter, the system will configure the purchased Lingjun connection for you. When the default vccId parameter is set, the system will automatically place an order and configure the Lingjun connection for you.
       * *   Make sure that you have called the InitializeVcc operation to grant permissions.
       * *   This interface is an asynchronous interface. After this interface is called, the system will return the Lingjun connection ID, but the Lingjun connection instance may not be created yet, and the system background creation task is still in progress. You can call the ListVccs or GetVcc operation to query the status of the Lingjun connection.
       *     *   If the status of the Lingjun connection is Executed, the Lingjun connection is being created.
       *     *   If the status of the Lingjun connection is Available, the Lingjun connection is created.
       *
       * @param request CreateVccRequest
       * @return CreateVccResponse
       */
      Models::CreateVccResponse createVcc(const Models::CreateVccRequest &request);

      /**
       * @summary Users can use this API to connect Lingjun instance to the Lingjun HUB instance of the target account. After authorization, the target account can be associated with your Lingjun connection by using the authorized Lingjun HUB instance.
       *
       * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
       * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
       * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
       *
       * @param request CreateVccGrantRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVccGrantRuleResponse
       */
      Models::CreateVccGrantRuleResponse createVccGrantRuleWithOptions(const Models::CreateVccGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Users can use this API to connect Lingjun instance to the Lingjun HUB instance of the target account. After authorization, the target account can be associated with your Lingjun connection by using the authorized Lingjun HUB instance.
       *
       * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
       * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
       * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
       *
       * @param request CreateVccGrantRuleRequest
       * @return CreateVccGrantRuleResponse
       */
      Models::CreateVccGrantRuleResponse createVccGrantRule(const Models::CreateVccGrantRuleRequest &request);

      /**
       * @summary Create a Lingjun connection route entry.
       *
       * @description When you call this operation to create a VBR route entry, take note of the following items:
       * *   After you call this operation, static route entries and BGP network announcements are created on the VBR to which the Lingjun connection belongs.
       * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entry may not be created yet, and the system still creates the static route entry in the background. You can query the status of VBR static route entries by ListVccRouteEntries or GetVccRouteEntry:
       *     *   If the VBR static route entry is in the Executing state, it indicates that it is being created.
       *     *   If the status of the VBR static route entry is Available, the VBR is created.
       *
       * @param request CreateVccRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVccRouteEntryResponse
       */
      Models::CreateVccRouteEntryResponse createVccRouteEntryWithOptions(const Models::CreateVccRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a Lingjun connection route entry.
       *
       * @description When you call this operation to create a VBR route entry, take note of the following items:
       * *   After you call this operation, static route entries and BGP network announcements are created on the VBR to which the Lingjun connection belongs.
       * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entry may not be created yet, and the system still creates the static route entry in the background. You can query the status of VBR static route entries by ListVccRouteEntries or GetVccRouteEntry:
       *     *   If the VBR static route entry is in the Executing state, it indicates that it is being created.
       *     *   If the status of the VBR static route entry is Available, the VBR is created.
       *
       * @param request CreateVccRouteEntryRequest
       * @return CreateVccRouteEntryResponse
       */
      Models::CreateVccRouteEntryResponse createVccRouteEntry(const Models::CreateVccRouteEntryRequest &request);

      /**
       * @summary Create a private Lingjun CIDR block. This CIDR block has an independent network environment.
       *
       * @description When you call this operation to create a CIDR block for Lingjun, take note of the following:
       * *   A Lingjun network segment can specify an additional network segment in addition to a main network segment.
       * *   After the Lingjun network segment is created, the network segment cannot be modified.
       * *   Make sure that you have a sufficient quota of Lingjun CIDR blocks.
       * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun network segment. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListVpds or GetVpd operation to query the status of the CIDR block of Lingjun.
       *     *   If the status of the Lingjun CIDR block is Executed, the CIDR block is being created.
       *     *   If the status of the Lingjun CIDR block is Available, the creation is successful.
       *
       * @param request CreateVpdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpdResponse
       */
      Models::CreateVpdResponse createVpdWithOptions(const Models::CreateVpdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a private Lingjun CIDR block. This CIDR block has an independent network environment.
       *
       * @description When you call this operation to create a CIDR block for Lingjun, take note of the following:
       * *   A Lingjun network segment can specify an additional network segment in addition to a main network segment.
       * *   After the Lingjun network segment is created, the network segment cannot be modified.
       * *   Make sure that you have a sufficient quota of Lingjun CIDR blocks.
       * *   This interface is an asynchronous interface. After calling this interface, the system will return the ID of a Lingjun network segment. At this time, the Lingjun network segment may not be created yet, and the system background creation task is still in progress. You can call the ListVpds or GetVpd operation to query the status of the CIDR block of Lingjun.
       *     *   If the status of the Lingjun CIDR block is Executed, the CIDR block is being created.
       *     *   If the status of the Lingjun CIDR block is Available, the creation is successful.
       *
       * @param request CreateVpdRequest
       * @return CreateVpdResponse
       */
      Models::CreateVpdResponse createVpd(const Models::CreateVpdRequest &request);

      /**
       * @summary Users can use this API to authorize Lingjun HUB instances of the target account. After authorization, the target account can be associated with your Lingjun CIDR block by using the authorized Lingjun HUB instance.
       *
       * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
       * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
       * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
       *
       * @param request CreateVpdGrantRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVpdGrantRuleResponse
       */
      Models::CreateVpdGrantRuleResponse createVpdGrantRuleWithOptions(const Models::CreateVpdGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Users can use this API to authorize Lingjun HUB instances of the target account. After authorization, the target account can be associated with your Lingjun CIDR block by using the authorized Lingjun HUB instance.
       *
       * @description When you call this operation to create cross-account authorization for Lingjun HUB, note that:
       * *   Make sure that the Alibaba Cloud ID and Lingjun HUB instance that you want to authorize are correct.
       * *   If you authorize the account of the other party, the account of the other party can load your local network instance to its Lingjun HUB, and the other party\\"s network will be connected to your network. Please proceed with caution.
       *
       * @param request CreateVpdGrantRuleRequest
       * @return CreateVpdGrantRuleResponse
       */
      Models::CreateVpdGrantRuleResponse createVpdGrantRule(const Models::CreateVpdGrantRuleRequest &request);

      /**
       * @summary Delete Lingjun Elastic Network Interface. After deletion, all relevant data will be lost and cannot be recovered. Please operate with caution.
       *
       * @param request DeleteElasticNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteElasticNetworkInterfaceResponse
       */
      Models::DeleteElasticNetworkInterfaceResponse deleteElasticNetworkInterfaceWithOptions(const Models::DeleteElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Lingjun Elastic Network Interface. After deletion, all relevant data will be lost and cannot be recovered. Please operate with caution.
       *
       * @param request DeleteElasticNetworkInterfaceRequest
       * @return DeleteElasticNetworkInterfaceResponse
       */
      Models::DeleteElasticNetworkInterfaceResponse deleteElasticNetworkInterface(const Models::DeleteElasticNetworkInterfaceRequest &request);

      /**
       * @summary After you delete a Lingjun HUB instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete the Lingjun HUB, note that:
       * *   Before you delete the instance, make sure that no network instance is connected to the Lingjun HUB instance.
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This interface is an asynchronous interface. After this interface is called, the Lingjun HUB instance may not be deleted, and the system background deletion task is still in progress. You can call the ListErs or GetEr operation to query the deletion status of the Lingjun HUB.
       *     *   If the status of the Lingjun HUB is Deleting, the Lingjun HUB instance is being deleted.
       *     *   If no Lingjun HUB instance is recorded, the Lingjun HUB instance has been deleted.
       *
       * @param request DeleteErRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteErResponse
       */
      Models::DeleteErResponse deleteErWithOptions(const Models::DeleteErRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you delete a Lingjun HUB instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete the Lingjun HUB, note that:
       * *   Before you delete the instance, make sure that no network instance is connected to the Lingjun HUB instance.
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This interface is an asynchronous interface. After this interface is called, the Lingjun HUB instance may not be deleted, and the system background deletion task is still in progress. You can call the ListErs or GetEr operation to query the deletion status of the Lingjun HUB.
       *     *   If the status of the Lingjun HUB is Deleting, the Lingjun HUB instance is being deleted.
       *     *   If no Lingjun HUB instance is recorded, the Lingjun HUB instance has been deleted.
       *
       * @param request DeleteErRequest
       * @return DeleteErResponse
       */
      Models::DeleteErResponse deleteEr(const Models::DeleteErRequest &request);

      /**
       * @summary If you delete a network instance that is connected to an instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a network instance connection, take note of the following:
       * *   Before you delete the instance, make sure that no routing policy exists under the network instance connection instance.
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This operation is an asynchronous operation. After you call this operation, the network instance that is connected to the instance may not be deleted. The system still deletes the instance in the background. You can call the ListErAttachments or GetErAttachment to query the deletion status of network instance connections:
       *     *   If the status of the network instance connection is Deleting, the network instance connection is being deleted.
       *     *   If there is no connection record for the network instance, the connection to the network instance has been deleted.
       *
       * @param request DeleteErAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteErAttachmentResponse
       */
      Models::DeleteErAttachmentResponse deleteErAttachmentWithOptions(const Models::DeleteErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you delete a network instance that is connected to an instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a network instance connection, take note of the following:
       * *   Before you delete the instance, make sure that no routing policy exists under the network instance connection instance.
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This operation is an asynchronous operation. After you call this operation, the network instance that is connected to the instance may not be deleted. The system still deletes the instance in the background. You can call the ListErAttachments or GetErAttachment to query the deletion status of network instance connections:
       *     *   If the status of the network instance connection is Deleting, the network instance connection is being deleted.
       *     *   If there is no connection record for the network instance, the connection to the network instance has been deleted.
       *
       * @param request DeleteErAttachmentRequest
       * @return DeleteErAttachmentResponse
       */
      Models::DeleteErAttachmentResponse deleteErAttachment(const Models::DeleteErAttachmentRequest &request);

      /**
       * @summary If you delete a routing policy instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a routing policy, note that:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This interface is an asynchronous interface. After this interface is called, the routing policy instance may not be deleted yet, and the system background deletion task is still in progress. You can call the ListErRouteMaps or GetErRouteMap operation to query the deletion status of a routing policy.
       *     *   If the routing policy is in the Deleting state, the routing policy instance is being deleted.
       *     *   If no routing policy instance is recorded, the routing policy instance has been deleted.
       *
       * @param request DeleteErRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteErRouteMapResponse
       */
      Models::DeleteErRouteMapResponse deleteErRouteMapWithOptions(const Models::DeleteErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you delete a routing policy instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a routing policy, note that:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This interface is an asynchronous interface. After this interface is called, the routing policy instance may not be deleted yet, and the system background deletion task is still in progress. You can call the ListErRouteMaps or GetErRouteMap operation to query the deletion status of a routing policy.
       *     *   If the routing policy is in the Deleting state, the routing policy instance is being deleted.
       *     *   If no routing policy instance is recorded, the routing policy instance has been deleted.
       *
       * @param request DeleteErRouteMapRequest
       * @return DeleteErRouteMapResponse
       */
      Models::DeleteErRouteMapResponse deleteErRouteMap(const Models::DeleteErRouteMapRequest &request);

      /**
       * @summary If you delete a Lingjun subnet instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a Lingjun subnet, note that:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This interface is an asynchronous interface. After this interface is called, the Lingjun subnet instance may not be deleted, and the system background deletion task is still in progress. You can call the ListSubnets or GetSubnet operation to query the deletion status of the subnet.
       *     *   If the status of the Lingjun subnet is Deleting, the Lingjun subnet instance is being deleted.
       *     *   If there is no record of the Lingjun subnet instance, the Lingjun subnet instance has been deleted.
       *
       * @param request DeleteSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSubnetResponse
       */
      Models::DeleteSubnetResponse deleteSubnetWithOptions(const Models::DeleteSubnetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you delete a Lingjun subnet instance, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a Lingjun subnet, note that:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This interface is an asynchronous interface. After this interface is called, the Lingjun subnet instance may not be deleted, and the system background deletion task is still in progress. You can call the ListSubnets or GetSubnet operation to query the deletion status of the subnet.
       *     *   If the status of the Lingjun subnet is Deleting, the Lingjun subnet instance is being deleted.
       *     *   If there is no record of the Lingjun subnet instance, the Lingjun subnet instance has been deleted.
       *
       * @param request DeleteSubnetRequest
       * @return DeleteSubnetResponse
       */
      Models::DeleteSubnetResponse deleteSubnet(const Models::DeleteSubnetRequest &request);

      /**
       * @summary If you delete a Lingjun HUB cross-account authorization that is connected to Lingjun, the related data is lost and cannot be recovered.
       *
       * @param request DeleteVccGrantRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVccGrantRuleResponse
       */
      Models::DeleteVccGrantRuleResponse deleteVccGrantRuleWithOptions(const Models::DeleteVccGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you delete a Lingjun HUB cross-account authorization that is connected to Lingjun, the related data is lost and cannot be recovered.
       *
       * @param request DeleteVccGrantRuleRequest
       * @return DeleteVccGrantRuleResponse
       */
      Models::DeleteVccGrantRuleResponse deleteVccGrantRule(const Models::DeleteVccGrantRuleRequest &request);

      /**
       * @summary Delete a Lingjun connection route entry.
       *
       * @description When you call this operation to delete a VBR static route entry, note that:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entries may not be deleted. The system still deletes the VBR static route entries in the background. You can call the ListVccRouteEntries or GetVccRouteEntry to query the deletion status of VBR static route entries:
       *     *   If the VBR static route entry is in the Deleting state, the VBR static route entry is being deleted.
       *     *   If no VBR static route entry instance is recorded, the VBR static route entry instance has been deleted.
       *
       * @param request DeleteVccRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVccRouteEntryResponse
       */
      Models::DeleteVccRouteEntryResponse deleteVccRouteEntryWithOptions(const Models::DeleteVccRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a Lingjun connection route entry.
       *
       * @description When you call this operation to delete a VBR static route entry, note that:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   This operation is an asynchronous operation. After you call this operation, the VBR static route entries may not be deleted. The system still deletes the VBR static route entries in the background. You can call the ListVccRouteEntries or GetVccRouteEntry to query the deletion status of VBR static route entries:
       *     *   If the VBR static route entry is in the Deleting state, the VBR static route entry is being deleted.
       *     *   If no VBR static route entry instance is recorded, the VBR static route entry instance has been deleted.
       *
       * @param request DeleteVccRouteEntryRequest
       * @return DeleteVccRouteEntryResponse
       */
      Models::DeleteVccRouteEntryResponse deleteVccRouteEntry(const Models::DeleteVccRouteEntryRequest &request);

      /**
       * @summary After you delete a Lingjun CIDR block, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a Lingjun CIDR block, take note of the following items:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   Before deleting, make sure that all Lingjun subnet instances under the Lingjun CIDR block have been deleted.
       * *   This interface is an asynchronous interface. After this interface is called, the Lingjun network segment instance may not be deleted, and the system background deletion task is still in progress. You can call the ListVpds or GetVpd operation to query the deletion status of the CIDR block.
       *     *   If the status of the Lingjun CIDR block is Deleting, the Lingjun CIDR block is being deleted.
       *     *   If there is no record of the Lingjun CIDR block instance, the Lingjun CIDR block instance has been deleted.
       *
       * @param request DeleteVpdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpdResponse
       */
      Models::DeleteVpdResponse deleteVpdWithOptions(const Models::DeleteVpdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you delete a Lingjun CIDR block, the related data is lost and cannot be recovered.
       *
       * @description When you call this operation to delete a Lingjun CIDR block, take note of the following items:
       * *   After deletion, all related data is lost and cannot be recovered. Exercise caution when performing this operation.
       * *   Before deleting, make sure that all Lingjun subnet instances under the Lingjun CIDR block have been deleted.
       * *   This interface is an asynchronous interface. After this interface is called, the Lingjun network segment instance may not be deleted, and the system background deletion task is still in progress. You can call the ListVpds or GetVpd operation to query the deletion status of the CIDR block.
       *     *   If the status of the Lingjun CIDR block is Deleting, the Lingjun CIDR block is being deleted.
       *     *   If there is no record of the Lingjun CIDR block instance, the Lingjun CIDR block instance has been deleted.
       *
       * @param request DeleteVpdRequest
       * @return DeleteVpdResponse
       */
      Models::DeleteVpdResponse deleteVpd(const Models::DeleteVpdRequest &request);

      /**
       * @summary Delete the Lingjun HUB cross-account authorization for a Lingjun CIDR block. After the deletion, the related data is lost and cannot be recovered.
       *
       * @param request DeleteVpdGrantRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVpdGrantRuleResponse
       */
      Models::DeleteVpdGrantRuleResponse deleteVpdGrantRuleWithOptions(const Models::DeleteVpdGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the Lingjun HUB cross-account authorization for a Lingjun CIDR block. After the deletion, the related data is lost and cannot be recovered.
       *
       * @param request DeleteVpdGrantRuleRequest
       * @return DeleteVpdGrantRuleResponse
       */
      Models::DeleteVpdGrantRuleResponse deleteVpdGrantRule(const Models::DeleteVpdGrantRuleRequest &request);

      /**
       * @summary Query whether the user has the SLR role-AliyunServiceRoleForEfloVcc required for Lingjun connection.
       *
       * @description You can call this operation to query whether a user account has a **AliyunServiceRoleForEfloVcc** role.
       * >  If you do not have a **AliyunServiceRoleForEfloVcc** role, you need to use the initializeVcc interface to complete authorization, otherwise users will not be able to use Lingjun to connect to the product.
       *
       * @param request DescribeSlrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSlrResponse
       */
      Models::DescribeSlrResponse describeSlrWithOptions(const Models::DescribeSlrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query whether the user has the SLR role-AliyunServiceRoleForEfloVcc required for Lingjun connection.
       *
       * @description You can call this operation to query whether a user account has a **AliyunServiceRoleForEfloVcc** role.
       * >  If you do not have a **AliyunServiceRoleForEfloVcc** role, you need to use the initializeVcc interface to complete authorization, otherwise users will not be able to use Lingjun to connect to the product.
       *
       * @param request DescribeSlrRequest
       * @return DescribeSlrResponse
       */
      Models::DescribeSlrResponse describeSlr(const Models::DescribeSlrRequest &request);

      /**
       * @summary Unbind Lingjun ENI from NC.
       *
       * @description This interface is an asynchronous interface, and you need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the unbound state.
       *
       * @param request DetachElasticNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachElasticNetworkInterfaceResponse
       */
      Models::DetachElasticNetworkInterfaceResponse detachElasticNetworkInterfaceWithOptions(const Models::DetachElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind Lingjun ENI from NC.
       *
       * @description This interface is an asynchronous interface, and you need to use the query interface to wait for the Lingjun Elastic Network Interface to reach the unbound state.
       *
       * @param request DetachElasticNetworkInterfaceRequest
       * @return DetachElasticNetworkInterfaceResponse
       */
      Models::DetachElasticNetworkInterfaceResponse detachElasticNetworkInterface(const Models::DetachElasticNetworkInterfaceRequest &request);

      /**
       * @summary Users can use this API to query the destination CIDR block of the source policy instance when creating a routing strategy.
       *
       * @param request GetDestinationCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDestinationCidrBlockResponse
       */
      Models::GetDestinationCidrBlockResponse getDestinationCidrBlockWithOptions(const Models::GetDestinationCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Users can use this API to query the destination CIDR block of the source policy instance when creating a routing strategy.
       *
       * @param request GetDestinationCidrBlockRequest
       * @return GetDestinationCidrBlockResponse
       */
      Models::GetDestinationCidrBlockResponse getDestinationCidrBlock(const Models::GetDestinationCidrBlockRequest &request);

      /**
       * @summary Queries the details of an LENI.
       *
       * @param request GetElasticNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetElasticNetworkInterfaceResponse
       */
      Models::GetElasticNetworkInterfaceResponse getElasticNetworkInterfaceWithOptions(const Models::GetElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an LENI.
       *
       * @param request GetElasticNetworkInterfaceRequest
       * @return GetElasticNetworkInterfaceResponse
       */
      Models::GetElasticNetworkInterfaceResponse getElasticNetworkInterface(const Models::GetElasticNetworkInterfaceRequest &request);

      /**
       * @summary Queries the Lingjun HUB.
       *
       * @param request GetErRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErResponse
       */
      Models::GetErResponse getErWithOptions(const Models::GetErRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Lingjun HUB.
       *
       * @param request GetErRequest
       * @return GetErResponse
       */
      Models::GetErResponse getEr(const Models::GetErRequest &request);

      /**
       * @summary Queries network instance connections.
       *
       * @param request GetErAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErAttachmentResponse
       */
      Models::GetErAttachmentResponse getErAttachmentWithOptions(const Models::GetErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network instance connections.
       *
       * @param request GetErAttachmentRequest
       * @return GetErAttachmentResponse
       */
      Models::GetErAttachmentResponse getErAttachment(const Models::GetErAttachmentRequest &request);

      /**
       * @summary Queries the details of Lingjun HUB route entries.
       *
       * @param request GetErRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErRouteEntryResponse
       */
      Models::GetErRouteEntryResponse getErRouteEntryWithOptions(const Models::GetErRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of Lingjun HUB route entries.
       *
       * @param request GetErRouteEntryRequest
       * @return GetErRouteEntryResponse
       */
      Models::GetErRouteEntryResponse getErRouteEntry(const Models::GetErRouteEntryRequest &request);

      /**
       * @summary query lingjun hub routing policy details.
       *
       * @param request GetErRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetErRouteMapResponse
       */
      Models::GetErRouteMapResponse getErRouteMapWithOptions(const Models::GetErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary query lingjun hub routing policy details.
       *
       * @param request GetErRouteMapRequest
       * @return GetErRouteMapResponse
       */
      Models::GetErRouteMapResponse getErRouteMap(const Models::GetErRouteMapRequest &request);

      /**
       * @summary Query the physical topology information of Lingjun network interface controller and Lingjun nodes under VPD.
       *
       * @param request GetFabricTopologyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFabricTopologyResponse
       */
      Models::GetFabricTopologyResponse getFabricTopologyWithOptions(const Models::GetFabricTopologyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the physical topology information of Lingjun network interface controller and Lingjun nodes under VPD.
       *
       * @param request GetFabricTopologyRequest
       * @return GetFabricTopologyResponse
       */
      Models::GetFabricTopologyResponse getFabricTopology(const Models::GetFabricTopologyRequest &request);

      /**
       * @summary Obtains the details of the secondary private IP address of a specified Lingjun Elastic Network Interface.
       *
       * @param request GetLeniPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLeniPrivateIpAddressResponse
       */
      Models::GetLeniPrivateIpAddressResponse getLeniPrivateIpAddressWithOptions(const Models::GetLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of the secondary private IP address of a specified Lingjun Elastic Network Interface.
       *
       * @param request GetLeniPrivateIpAddressRequest
       * @return GetLeniPrivateIpAddressResponse
       */
      Models::GetLeniPrivateIpAddressResponse getLeniPrivateIpAddress(const Models::GetLeniPrivateIpAddressRequest &request);

      /**
       * @summary Obtains the details about the secondary private IP address.
       *
       * @param request GetLniPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLniPrivateIpAddressResponse
       */
      Models::GetLniPrivateIpAddressResponse getLniPrivateIpAddressWithOptions(const Models::GetLniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details about the secondary private IP address.
       *
       * @param request GetLniPrivateIpAddressRequest
       * @return GetLniPrivateIpAddressResponse
       */
      Models::GetLniPrivateIpAddressResponse getLniPrivateIpAddress(const Models::GetLniPrivateIpAddressRequest &request);

      /**
       * @summary Queries information about an LNI.
       *
       * @param request GetNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkInterfaceResponse
       */
      Models::GetNetworkInterfaceResponse getNetworkInterfaceWithOptions(const Models::GetNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an LNI.
       *
       * @param request GetNetworkInterfaceRequest
       * @return GetNetworkInterfaceResponse
       */
      Models::GetNetworkInterfaceResponse getNetworkInterface(const Models::GetNetworkInterfaceRequest &request);

      /**
       * @summary Queries the network information of a node.
       *
       * @param request GetNodeInfoForPodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNodeInfoForPodResponse
       */
      Models::GetNodeInfoForPodResponse getNodeInfoForPodWithOptions(const Models::GetNodeInfoForPodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network information of a node.
       *
       * @param request GetNodeInfoForPodRequest
       * @return GetNodeInfoForPodResponse
       */
      Models::GetNodeInfoForPodResponse getNodeInfoForPod(const Models::GetNodeInfoForPodRequest &request);

      /**
       * @summary Queries the details of a Lingjun subnet, including the type, CIDR block, instance ID, instance status, and number of NCs.
       *
       * @param request GetSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubnetResponse
       */
      Models::GetSubnetResponse getSubnetWithOptions(const Models::GetSubnetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Lingjun subnet, including the type, CIDR block, instance ID, instance status, and number of NCs.
       *
       * @param request GetSubnetRequest
       * @return GetSubnetResponse
       */
      Models::GetSubnetResponse getSubnet(const Models::GetSubnetRequest &request);

      /**
       * @summary Queries the details of a Lingjun connection, including the specification, Express Connect circuit access port type, instance status, bandwidth, and BGP CIDR block.
       *
       * @param request GetVccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVccResponse
       */
      Models::GetVccResponse getVccWithOptions(const Models::GetVccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Lingjun connection, including the specification, Express Connect circuit access port type, instance status, bandwidth, and BGP CIDR block.
       *
       * @param request GetVccRequest
       * @return GetVccResponse
       */
      Models::GetVccResponse getVcc(const Models::GetVccRequest &request);

      /**
       * @summary Queries the details of cross-account resource authorization for a Lingjun connection, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
       *
       * @param request GetVccGrantRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVccGrantRuleResponse
       */
      Models::GetVccGrantRuleResponse getVccGrantRuleWithOptions(const Models::GetVccGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cross-account resource authorization for a Lingjun connection, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
       *
       * @param request GetVccGrantRuleRequest
       * @return GetVccGrantRuleResponse
       */
      Models::GetVccGrantRuleResponse getVccGrantRule(const Models::GetVccGrantRuleRequest &request);

      /**
       * @summary Queries route entries.
       *
       * @param request GetVccRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVccRouteEntryResponse
       */
      Models::GetVccRouteEntryResponse getVccRouteEntryWithOptions(const Models::GetVccRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route entries.
       *
       * @param request GetVccRouteEntryRequest
       * @return GetVccRouteEntryResponse
       */
      Models::GetVccRouteEntryResponse getVccRouteEntry(const Models::GetVccRouteEntryRequest &request);

      /**
       * @summary Queries the details of a Lingjun CIDR block, including the status of the Lingjun CIDR block, the CIDR block, the number of subnets and NCs.
       *
       * @param request GetVpdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpdResponse
       */
      Models::GetVpdResponse getVpdWithOptions(const Models::GetVpdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Lingjun CIDR block, including the status of the Lingjun CIDR block, the CIDR block, the number of subnets and NCs.
       *
       * @param request GetVpdRequest
       * @return GetVpdResponse
       */
      Models::GetVpdResponse getVpd(const Models::GetVpdRequest &request);

      /**
       * @summary Queries the details of cross-account resource authorization for a Lingjun CIDR block, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
       *
       * @param request GetVpdGrantRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpdGrantRuleResponse
       */
      Models::GetVpdGrantRuleResponse getVpdGrantRuleWithOptions(const Models::GetVpdGrantRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of cross-account resource authorization for a Lingjun CIDR block, including the authorized tenant ID, Lingjun HUB instance ID, and network instance ID.
       *
       * @param request GetVpdGrantRuleRequest
       * @return GetVpdGrantRuleResponse
       */
      Models::GetVpdGrantRuleResponse getVpdGrantRule(const Models::GetVpdGrantRuleRequest &request);

      /**
       * @summary Queries route entries.
       *
       * @param request GetVpdRouteEntryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVpdRouteEntryResponse
       */
      Models::GetVpdRouteEntryResponse getVpdRouteEntryWithOptions(const Models::GetVpdRouteEntryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries route entries.
       *
       * @param request GetVpdRouteEntryRequest
       * @return GetVpdRouteEntryResponse
       */
      Models::GetVpdRouteEntryResponse getVpdRouteEntry(const Models::GetVpdRouteEntryRequest &request);

      /**
       * @summary Initialize the Lingjun connection and authorize Intelligent Computing Lingjun to create an SLR in your account.
       *
       * @param request InitializeVccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitializeVccResponse
       */
      Models::InitializeVccResponse initializeVccWithOptions(const Models::InitializeVccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initialize the Lingjun connection and authorize Intelligent Computing Lingjun to create an SLR in your account.
       *
       * @param request InitializeVccRequest
       * @return InitializeVccResponse
       */
      Models::InitializeVccResponse initializeVcc(const Models::InitializeVccRequest &request);

      /**
       * @summary Queries the LENIs that are associated with a Lingjun node.
       *
       * @param request ListElasticNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListElasticNetworkInterfacesResponse
       */
      Models::ListElasticNetworkInterfacesResponse listElasticNetworkInterfacesWithOptions(const Models::ListElasticNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the LENIs that are associated with a Lingjun node.
       *
       * @param request ListElasticNetworkInterfacesRequest
       * @return ListElasticNetworkInterfacesResponse
       */
      Models::ListElasticNetworkInterfacesResponse listElasticNetworkInterfaces(const Models::ListElasticNetworkInterfacesRequest &request);

      /**
       * @summary Queries network instance connections.
       *
       * @param request ListErAttachmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListErAttachmentsResponse
       */
      Models::ListErAttachmentsResponse listErAttachmentsWithOptions(const Models::ListErAttachmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network instance connections.
       *
       * @param request ListErAttachmentsRequest
       * @return ListErAttachmentsResponse
       */
      Models::ListErAttachmentsResponse listErAttachments(const Models::ListErAttachmentsRequest &request);

      /**
       * @summary Queries the route entries of the Lingjun HUB.
       *
       * @param request ListErRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListErRouteEntriesResponse
       */
      Models::ListErRouteEntriesResponse listErRouteEntriesWithOptions(const Models::ListErRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route entries of the Lingjun HUB.
       *
       * @param request ListErRouteEntriesRequest
       * @return ListErRouteEntriesResponse
       */
      Models::ListErRouteEntriesResponse listErRouteEntries(const Models::ListErRouteEntriesRequest &request);

      /**
       * @summary Routing policies are queried.
       *
       * @param request ListErRouteMapsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListErRouteMapsResponse
       */
      Models::ListErRouteMapsResponse listErRouteMapsWithOptions(const Models::ListErRouteMapsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Routing policies are queried.
       *
       * @param request ListErRouteMapsRequest
       * @return ListErRouteMapsResponse
       */
      Models::ListErRouteMapsResponse listErRouteMaps(const Models::ListErRouteMapsRequest &request);

      /**
       * @summary Queries the Lingjun HUB.
       *
       * @param request ListErsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListErsResponse
       */
      Models::ListErsResponse listErsWithOptions(const Models::ListErsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Lingjun HUB.
       *
       * @param request ListErsRequest
       * @return ListErsResponse
       */
      Models::ListErsResponse listErs(const Models::ListErsRequest &request);

      /**
       * @summary Queries the GPU node list of a specified GPU node whose communication distance does not exceed the specified NCD.
       *
       * @param request ListInstancesByNcdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesByNcdResponse
       */
      Models::ListInstancesByNcdResponse listInstancesByNcdWithOptions(const Models::ListInstancesByNcdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the GPU node list of a specified GPU node whose communication distance does not exceed the specified NCD.
       *
       * @param request ListInstancesByNcdRequest
       * @return ListInstancesByNcdResponse
       */
      Models::ListInstancesByNcdResponse listInstancesByNcd(const Models::ListInstancesByNcdRequest &request);

      /**
       * @summary Queries the list of secondary private IP addresses of Lingjun Elastic Network Interface.
       *
       * @param request ListLeniPrivateIpAddressesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLeniPrivateIpAddressesResponse
       */
      Models::ListLeniPrivateIpAddressesResponse listLeniPrivateIpAddressesWithOptions(const Models::ListLeniPrivateIpAddressesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of secondary private IP addresses of Lingjun Elastic Network Interface.
       *
       * @param request ListLeniPrivateIpAddressesRequest
       * @return ListLeniPrivateIpAddressesResponse
       */
      Models::ListLeniPrivateIpAddressesResponse listLeniPrivateIpAddresses(const Models::ListLeniPrivateIpAddressesRequest &request);

      /**
       * @summary Queries the list of secondary private IP addresses of Lingjun network interface controller.
       *
       * @param request ListLniPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListLniPrivateIpAddressResponse
       */
      Models::ListLniPrivateIpAddressResponse listLniPrivateIpAddressWithOptions(const Models::ListLniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of secondary private IP addresses of Lingjun network interface controller.
       *
       * @param request ListLniPrivateIpAddressRequest
       * @return ListLniPrivateIpAddressResponse
       */
      Models::ListLniPrivateIpAddressResponse listLniPrivateIpAddress(const Models::ListLniPrivateIpAddressRequest &request);

      /**
       * @summary Queries Lingjun network interfaces (LNIs).
       *
       * @param request ListNetworkInterfacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkInterfacesResponse
       */
      Models::ListNetworkInterfacesResponse listNetworkInterfacesWithOptions(const Models::ListNetworkInterfacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Lingjun network interfaces (LNIs).
       *
       * @param request ListNetworkInterfacesRequest
       * @return ListNetworkInterfacesResponse
       */
      Models::ListNetworkInterfacesResponse listNetworkInterfaces(const Models::ListNetworkInterfacesRequest &request);

      /**
       * @summary Queries node network information.
       *
       * @param request ListNodeInfosForPodRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNodeInfosForPodResponse
       */
      Models::ListNodeInfosForPodResponse listNodeInfosForPodWithOptions(const Models::ListNodeInfosForPodRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries node network information.
       *
       * @param request ListNodeInfosForPodRequest
       * @return ListNodeInfosForPodResponse
       */
      Models::ListNodeInfosForPodResponse listNodeInfosForPod(const Models::ListNodeInfosForPodRequest &request);

      /**
       * @summary You can call this operation to query the details of one or more Lingjun subnets, including the Lingjun subnet type, network address segment, and instance ID of the Lingjun CIDR block.
       *
       * @param request ListSubnetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubnetsResponse
       */
      Models::ListSubnetsResponse listSubnetsWithOptions(const Models::ListSubnetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the details of one or more Lingjun subnets, including the Lingjun subnet type, network address segment, and instance ID of the Lingjun CIDR block.
       *
       * @param request ListSubnetsRequest
       * @return ListSubnetsResponse
       */
      Models::ListSubnetsResponse listSubnets(const Models::ListSubnetsRequest &request);

      /**
       * @summary Queries the traffic rate of a Lingjun connection.
       *
       * @param request ListVccFlowInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVccFlowInfosResponse
       */
      Models::ListVccFlowInfosResponse listVccFlowInfosWithOptions(const Models::ListVccFlowInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic rate of a Lingjun connection.
       *
       * @param request ListVccFlowInfosRequest
       * @return ListVccFlowInfosResponse
       */
      Models::ListVccFlowInfosResponse listVccFlowInfos(const Models::ListVccFlowInfosRequest &request);

      /**
       * @summary Queries the details of a Lingjun connection authorization, including the authorized tenant ID, region, and Lingjun HUB instance information.
       *
       * @param request ListVccGrantRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVccGrantRulesResponse
       */
      Models::ListVccGrantRulesResponse listVccGrantRulesWithOptions(const Models::ListVccGrantRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a Lingjun connection authorization, including the authorized tenant ID, region, and Lingjun HUB instance information.
       *
       * @param request ListVccGrantRulesRequest
       * @return ListVccGrantRulesResponse
       */
      Models::ListVccGrantRulesResponse listVccGrantRules(const Models::ListVccGrantRulesRequest &request);

      /**
       * @summary Queries Lingjun connection route entries.
       *
       * @param request ListVccRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVccRouteEntriesResponse
       */
      Models::ListVccRouteEntriesResponse listVccRouteEntriesWithOptions(const Models::ListVccRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Lingjun connection route entries.
       *
       * @param request ListVccRouteEntriesRequest
       * @return ListVccRouteEntriesResponse
       */
      Models::ListVccRouteEntriesResponse listVccRouteEntries(const Models::ListVccRouteEntriesRequest &request);

      /**
       * @summary query the details of one or more lingjun connections, including the specification, Express Connect circuit access port type, instance status, bandwidth, and bgp network segment.
       *
       * @param request ListVccsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVccsResponse
       */
      Models::ListVccsResponse listVccsWithOptions(const Models::ListVccsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary query the details of one or more lingjun connections, including the specification, Express Connect circuit access port type, instance status, bandwidth, and bgp network segment.
       *
       * @param request ListVccsRequest
       * @return ListVccsResponse
       */
      Models::ListVccsResponse listVccs(const Models::ListVccsRequest &request);

      /**
       * @summary Queries the details of one or more route entries in the CIDR block of Lingjun, including the route type, route entry status, destination CIDR block, and instance information of the next route entry.
       *
       * @param request ListVpdGrantRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpdGrantRulesResponse
       */
      Models::ListVpdGrantRulesResponse listVpdGrantRulesWithOptions(const Models::ListVpdGrantRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more route entries in the CIDR block of Lingjun, including the route type, route entry status, destination CIDR block, and instance information of the next route entry.
       *
       * @param request ListVpdGrantRulesRequest
       * @return ListVpdGrantRulesResponse
       */
      Models::ListVpdGrantRulesResponse listVpdGrantRules(const Models::ListVpdGrantRulesRequest &request);

      /**
       * @summary Queries the route entries of the Lingjun CIDR block.
       *
       * @param request ListVpdRouteEntriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpdRouteEntriesResponse
       */
      Models::ListVpdRouteEntriesResponse listVpdRouteEntriesWithOptions(const Models::ListVpdRouteEntriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the route entries of the Lingjun CIDR block.
       *
       * @param request ListVpdRouteEntriesRequest
       * @return ListVpdRouteEntriesResponse
       */
      Models::ListVpdRouteEntriesResponse listVpdRouteEntries(const Models::ListVpdRouteEntriesRequest &request);

      /**
       * @summary Queries the details of one or more Lingjun CIDR blocks, including the status of Lingjun CIDR blocks, Cidr addresses, service CIDR blocks, and Subnet.
       *
       * @param request ListVpdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVpdsResponse
       */
      Models::ListVpdsResponse listVpdsWithOptions(const Models::ListVpdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more Lingjun CIDR blocks, including the status of Lingjun CIDR blocks, Cidr addresses, service CIDR blocks, and Subnet.
       *
       * @param request ListVpdsRequest
       * @return ListVpdsResponse
       */
      Models::ListVpdsResponse listVpds(const Models::ListVpdsRequest &request);

      /**
       * @summary Query the network communication distance (Network Communication Distance,NCD) between instances (Lingjun node, Lingjun network interface controller).
       *
       * @param request QueryInstanceNcdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInstanceNcdResponse
       */
      Models::QueryInstanceNcdResponse queryInstanceNcdWithOptions(const Models::QueryInstanceNcdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the network communication distance (Network Communication Distance,NCD) between instances (Lingjun node, Lingjun network interface controller).
       *
       * @param request QueryInstanceNcdRequest
       * @return QueryInstanceNcdResponse
       */
      Models::QueryInstanceNcdResponse queryInstanceNcd(const Models::QueryInstanceNcdRequest &request);

      /**
       * @summary Unsubscribe inactive Lingjun connection
       *
       * @description Only unsubscribable for Lingjun connections in the prepayment status.
       *
       * @param request RefundVccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundVccResponse
       */
      Models::RefundVccResponse refundVccWithOptions(const Models::RefundVccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unsubscribe inactive Lingjun connection
       *
       * @description Only unsubscribable for Lingjun connections in the prepayment status.
       *
       * @param request RefundVccRequest
       * @return RefundVccResponse
       */
      Models::RefundVccResponse refundVcc(const Models::RefundVccRequest &request);

      /**
       * @summary Retry trying to create /delete a Lingjun connection.
       *
       * @description This operation allows the user to retry the operation if the Lingjun connection creation and deletion processes fail. Only the Lingjun connection in the creation failure and deletion failure state can be retried
       *
       * @param request RetryVccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryVccResponse
       */
      Models::RetryVccResponse retryVccWithOptions(const Models::RetryVccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retry trying to create /delete a Lingjun connection.
       *
       * @description This operation allows the user to retry the operation if the Lingjun connection creation and deletion processes fail. Only the Lingjun connection in the creation failure and deletion failure state can be retried
       *
       * @param request RetryVccRequest
       * @return RetryVccResponse
       */
      Models::RetryVccResponse retryVcc(const Models::RetryVccRequest &request);

      /**
       * @summary Switch the VCC connection instance or type
       *
       * @param request SwitchVccConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SwitchVccConnectionResponse
       */
      Models::SwitchVccConnectionResponse switchVccConnectionWithOptions(const Models::SwitchVccConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Switch the VCC connection instance or type
       *
       * @param request SwitchVccConnectionRequest
       * @return SwitchVccConnectionResponse
       */
      Models::SwitchVccConnectionResponse switchVccConnection(const Models::SwitchVccConnectionRequest &request);

      /**
       * @summary Deletes an assigned secondary private IP address.
       *
       * @param request UnAssignPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnAssignPrivateIpAddressResponse
       */
      Models::UnAssignPrivateIpAddressResponse unAssignPrivateIpAddressWithOptions(const Models::UnAssignPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an assigned secondary private IP address.
       *
       * @param request UnAssignPrivateIpAddressRequest
       * @return UnAssignPrivateIpAddressResponse
       */
      Models::UnAssignPrivateIpAddressResponse unAssignPrivateIpAddress(const Models::UnAssignPrivateIpAddressRequest &request);

      /**
       * @summary This function can be used to delete the additional network segment of VPD.
       *
       * @description **
       * **Warning** If the attached CIDR block has Lingjun subnet resources, you must delete the dependent resources before you can delete the attached CIDR block.
       *
       * @param request UnAssociateVpdCidrBlockRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnAssociateVpdCidrBlockResponse
       */
      Models::UnAssociateVpdCidrBlockResponse unAssociateVpdCidrBlockWithOptions(const Models::UnAssociateVpdCidrBlockRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This function can be used to delete the additional network segment of VPD.
       *
       * @description **
       * **Warning** If the attached CIDR block has Lingjun subnet resources, you must delete the dependent resources before you can delete the attached CIDR block.
       *
       * @param request UnAssociateVpdCidrBlockRequest
       * @return UnAssociateVpdCidrBlockResponse
       */
      Models::UnAssociateVpdCidrBlockResponse unAssociateVpdCidrBlock(const Models::UnAssociateVpdCidrBlockRequest &request);

      /**
       * @summary Delete the assigned secondary private IP address of Lingjun Elastic Network Interface.
       *
       * @param request UnassignLeniPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnassignLeniPrivateIpAddressResponse
       */
      Models::UnassignLeniPrivateIpAddressResponse unassignLeniPrivateIpAddressWithOptions(const Models::UnassignLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the assigned secondary private IP address of Lingjun Elastic Network Interface.
       *
       * @param request UnassignLeniPrivateIpAddressRequest
       * @return UnassignLeniPrivateIpAddressResponse
       */
      Models::UnassignLeniPrivateIpAddressResponse unassignLeniPrivateIpAddress(const Models::UnassignLeniPrivateIpAddressRequest &request);

      /**
       * @summary Update Lingjun Elastic Network Interface information.
       *
       * @param request UpdateElasticNetworkInterfaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateElasticNetworkInterfaceResponse
       */
      Models::UpdateElasticNetworkInterfaceResponse updateElasticNetworkInterfaceWithOptions(const Models::UpdateElasticNetworkInterfaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Lingjun Elastic Network Interface information.
       *
       * @param request UpdateElasticNetworkInterfaceRequest
       * @return UpdateElasticNetworkInterfaceResponse
       */
      Models::UpdateElasticNetworkInterfaceResponse updateElasticNetworkInterface(const Models::UpdateElasticNetworkInterfaceRequest &request);

      /**
       * @summary Updated Lingjun HUB.
       *
       * @param request UpdateErRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateErResponse
       */
      Models::UpdateErResponse updateErWithOptions(const Models::UpdateErRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updated Lingjun HUB.
       *
       * @param request UpdateErRequest
       * @return UpdateErResponse
       */
      Models::UpdateErResponse updateEr(const Models::UpdateErRequest &request);

      /**
       * @summary Updates a network instance connection.
       *
       * @param request UpdateErAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateErAttachmentResponse
       */
      Models::UpdateErAttachmentResponse updateErAttachmentWithOptions(const Models::UpdateErAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a network instance connection.
       *
       * @param request UpdateErAttachmentRequest
       * @return UpdateErAttachmentResponse
       */
      Models::UpdateErAttachmentResponse updateErAttachment(const Models::UpdateErAttachmentRequest &request);

      /**
       * @summary Update some information about the routing policy, including the description and name of the routing policy.
       *
       * @param request UpdateErRouteMapRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateErRouteMapResponse
       */
      Models::UpdateErRouteMapResponse updateErRouteMapWithOptions(const Models::UpdateErRouteMapRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update some information about the routing policy, including the description and name of the routing policy.
       *
       * @param request UpdateErRouteMapRequest
       * @return UpdateErRouteMapResponse
       */
      Models::UpdateErRouteMapResponse updateErRouteMap(const Models::UpdateErRouteMapRequest &request);

      /**
       * @summary Updated the description of the secondary private network assigned by the Lingjun Elastic Network Interface.
       *
       * @param request UpdateLeniPrivateIpAddressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLeniPrivateIpAddressResponse
       */
      Models::UpdateLeniPrivateIpAddressResponse updateLeniPrivateIpAddressWithOptions(const Models::UpdateLeniPrivateIpAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updated the description of the secondary private network assigned by the Lingjun Elastic Network Interface.
       *
       * @param request UpdateLeniPrivateIpAddressRequest
       * @return UpdateLeniPrivateIpAddressResponse
       */
      Models::UpdateLeniPrivateIpAddressResponse updateLeniPrivateIpAddress(const Models::UpdateLeniPrivateIpAddressRequest &request);

      /**
       * @summary Updates some information about a specified subnet instance, including the name of the subnet instance.
       *
       * @param request UpdateSubnetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSubnetResponse
       */
      Models::UpdateSubnetResponse updateSubnetWithOptions(const Models::UpdateSubnetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates some information about a specified subnet instance, including the name of the subnet instance.
       *
       * @param request UpdateSubnetRequest
       * @return UpdateSubnetResponse
       */
      Models::UpdateSubnetResponse updateSubnet(const Models::UpdateSubnetRequest &request);

      /**
       * @summary Updates the information about a Lingjun connection instance, including the peak bandwidth and name of the Lingjun connection instance.
       *
       * @param request UpdateVccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVccResponse
       */
      Models::UpdateVccResponse updateVccWithOptions(const Models::UpdateVccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a Lingjun connection instance, including the peak bandwidth and name of the Lingjun connection instance.
       *
       * @param request UpdateVccRequest
       * @return UpdateVccResponse
       */
      Models::UpdateVccResponse updateVcc(const Models::UpdateVccRequest &request);

      /**
       * @summary Updates the information about the Lingjun CIDR block, including the name of the Lingjun CIDR block.
       *
       * @param request UpdateVpdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateVpdResponse
       */
      Models::UpdateVpdResponse updateVpdWithOptions(const Models::UpdateVpdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about the Lingjun CIDR block, including the name of the Lingjun CIDR block.
       *
       * @param request UpdateVpdRequest
       * @return UpdateVpdResponse
       */
      Models::UpdateVpdResponse updateVpd(const Models::UpdateVpdRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
