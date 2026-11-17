// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESSLVPNSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESSLVPNSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateSslVpnServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSslVpnServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cipher, cipher_);
      DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Compress, compress_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
      DARABONBA_PTR_TO_JSON(IDaaSApplicationId, IDaaSApplicationId_);
      DARABONBA_PTR_TO_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_TO_JSON(IDaaSRegionId, IDaaSRegionId_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSslVpnServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cipher, cipher_);
      DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Compress, compress_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
      DARABONBA_PTR_FROM_JSON(IDaaSApplicationId, IDaaSApplicationId_);
      DARABONBA_PTR_FROM_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_FROM_JSON(IDaaSRegionId, IDaaSRegionId_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    CreateSslVpnServerRequest() = default ;
    CreateSslVpnServerRequest(const CreateSslVpnServerRequest &) = default ;
    CreateSslVpnServerRequest(CreateSslVpnServerRequest &&) = default ;
    CreateSslVpnServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSslVpnServerRequest() = default ;
    CreateSslVpnServerRequest& operator=(const CreateSslVpnServerRequest &) = default ;
    CreateSslVpnServerRequest& operator=(CreateSslVpnServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cipher_ == nullptr
        && this->clientIpPool_ == nullptr && this->clientToken_ == nullptr && this->compress_ == nullptr && this->dnsServers_ == nullptr && this->dryRun_ == nullptr
        && this->enableMultiFactorAuth_ == nullptr && this->IDaaSApplicationId_ == nullptr && this->IDaaSInstanceId_ == nullptr && this->IDaaSRegionId_ == nullptr && this->localSubnet_ == nullptr
        && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->port_ == nullptr && this->proto_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // cipher Field Functions 
    bool hasCipher() const { return this->cipher_ != nullptr;};
    void deleteCipher() { this->cipher_ = nullptr;};
    inline string getCipher() const { DARABONBA_PTR_GET_DEFAULT(cipher_, "") };
    inline CreateSslVpnServerRequest& setCipher(string cipher) { DARABONBA_PTR_SET_VALUE(cipher_, cipher) };


    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string getClientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline CreateSslVpnServerRequest& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSslVpnServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline bool getCompress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
    inline CreateSslVpnServerRequest& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline string getDnsServers() const { DARABONBA_PTR_GET_DEFAULT(dnsServers_, "") };
    inline CreateSslVpnServerRequest& setDnsServers(string dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateSslVpnServerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableMultiFactorAuth Field Functions 
    bool hasEnableMultiFactorAuth() const { return this->enableMultiFactorAuth_ != nullptr;};
    void deleteEnableMultiFactorAuth() { this->enableMultiFactorAuth_ = nullptr;};
    inline bool getEnableMultiFactorAuth() const { DARABONBA_PTR_GET_DEFAULT(enableMultiFactorAuth_, false) };
    inline CreateSslVpnServerRequest& setEnableMultiFactorAuth(bool enableMultiFactorAuth) { DARABONBA_PTR_SET_VALUE(enableMultiFactorAuth_, enableMultiFactorAuth) };


    // IDaaSApplicationId Field Functions 
    bool hasIDaaSApplicationId() const { return this->IDaaSApplicationId_ != nullptr;};
    void deleteIDaaSApplicationId() { this->IDaaSApplicationId_ = nullptr;};
    inline string getIDaaSApplicationId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSApplicationId_, "") };
    inline CreateSslVpnServerRequest& setIDaaSApplicationId(string IDaaSApplicationId) { DARABONBA_PTR_SET_VALUE(IDaaSApplicationId_, IDaaSApplicationId) };


    // IDaaSInstanceId Field Functions 
    bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
    void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
    inline string getIDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
    inline CreateSslVpnServerRequest& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


    // IDaaSRegionId Field Functions 
    bool hasIDaaSRegionId() const { return this->IDaaSRegionId_ != nullptr;};
    void deleteIDaaSRegionId() { this->IDaaSRegionId_ = nullptr;};
    inline string getIDaaSRegionId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSRegionId_, "") };
    inline CreateSslVpnServerRequest& setIDaaSRegionId(string IDaaSRegionId) { DARABONBA_PTR_SET_VALUE(IDaaSRegionId_, IDaaSRegionId) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline CreateSslVpnServerRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSslVpnServerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSslVpnServerRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSslVpnServerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateSslVpnServerRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline CreateSslVpnServerRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSslVpnServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSslVpnServerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSslVpnServerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateSslVpnServerRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The encryption algorithm used by the SSL-VPN connection.
    // 
    // - If the client uses Tunnelblick or OpenVPN 2.4.0 or later, the SSL server and the client dynamically negotiate the encryption algorithm and prefer the highest-security encryption algorithm supported by both parties. The encryption algorithm that you specify for the SSL server does not take effect.
    // 
    // - If the client uses OpenVPN earlier than 2.4.0, the SSL server and the client use the encryption algorithm that you specify for the SSL server. The SSL server supports the following encryption algorithms:
    // 
    //   - **AES-128-CBC** (default): AES-128-CBC
    // 
    //   - **AES-192-CBC**: AES-192-CBC
    // 
    //   - **AES-256-CBC**: AES-256-CBC
    // 
    //   - **none**: No encryption algorithm is used.
    shared_ptr<string> cipher_ {};
    // The client CIDR block.
    // 
    // This is the CIDR block from which IP addresses are allocated to the virtual network interface controller (NIC) of clients. It is not the existing internal network CIDR block of the clients.
    // 
    // When a client accesses the local network through an SSL-VPN connection, the VPN gateway allocates an IP address from the specified client CIDR block to the client. The client uses the allocated IP address to access cloud resources.
    // 
    // When you specify the client CIDR block, make sure that the number of IP addresses included in the client CIDR block is at least four times the number of SSL connections supported by the current VPN gateway.
    // 
    // <details>
    // <summary>Click to view the reason</summary>
    // 
    // For example, if you specify 192.168.0.0/24 as the client CIDR block, the system first divides a subnet with a subnet mask of 30 from the 192.168.0.0/24 CIDR block, such as 192.168.0.4/30. Then, the system allocates an IP address from 192.168.0.4/30 for the client to use. The remaining three IP addresses are occupied by the system to ensure network communication. In this case, one client consumes four IP addresses. Therefore, to ensure that all your clients can be allocated IP addresses, make sure that the number of IP addresses included in the specified client CIDR block is at least four times the number of SSL connections supported by the VPN gateway.
    // </details>
    // 
    // <details>
    // <summary>Click to view the CIDR blocks that are not supported</summary>
    // 
    // - 100.64.0.0 to 100.127.255.255
    // - 127.0.0.0 to 127.255.255.255
    // - 169.254.0.0 to 169.254.255.255
    // - 224.0.0.0 to 239.255.255.255
    // - 255.0.0.0 to 255.255.255.255
    // </details>
    // 
    // <details>
    // <summary>Click to view the recommended client CIDR blocks for each number of SSL connections</summary>
    // 
    // - If the number of SSL connections is 5, we recommend that the subnet mask of the client CIDR block be 27 bits or less. Examples: 10.0.0.0/27 and 10.0.0.0/26.
    // - If the number of SSL connections is 10, we recommend that the subnet mask of the client CIDR block be 26 bits or less. Examples: 10.0.0.0/26 and 10.0.0.0/25.
    // - If the number of SSL connections is 20, we recommend that the subnet mask of the client CIDR block be 25 bits or less. Examples: 10.0.0.0/25 and 10.0.0.0/24.
    // - If the number of SSL connections is 50, we recommend that the subnet mask of the client CIDR block be 24 bits or less. Examples: 10.0.0.0/24 and 10.0.0.0/23.
    // - If the number of SSL connections is 100, we recommend that the subnet mask of the client CIDR block be 23 bits or less. Examples: 10.0.0.0/23 and 10.0.0.0/22.
    // - If the number of SSL connections is 200, we recommend that the subnet mask of the client CIDR block be 22 bits or less. Examples: 10.0.0.0/22 and 10.0.0.0/21.
    // - If the number of SSL connections is 500, we recommend that the subnet mask of the client CIDR block be 21 bits or less. Examples: 10.0.0.0/21 and 10.0.0.0/20.
    // - If the number of SSL connections is 1000, we recommend that the subnet mask of the client CIDR block be 20 bits or less. Examples: 10.0.0.0/20 and 10.0.0.0/19.
    // 
    // </details>
    // 
    // > - The subnet mask of the client CIDR block must be 16 to 29 bits in length.
    // > - Make sure that the client CIDR block does not overlap with the local CIDR block, the VPC CIDR block, or any routing CIDR block associated with the client terminal.
    // > - When you specify the client CIDR block, we recommend that you use the 10.0.0.0/8, 172.16.0.0/12, and 192.168.0.0/16 CIDR blocks and their subnets. If you need to specify a public CIDR block as the client CIDR block, you must add the public CIDR block to the user CIDR block Settings of the VPC to ensure that the VPC can access the public CIDR block. For more information about user CIDR blocks, see [virtual private cloud (VPC) FAQ](https://help.aliyun.com/document_detail/185311.html).
    // > - After you create an SSL server, the system automatically adds routing for the client CIDR block in the route table of the VPC instance. Do not manually add routing for the client CIDR block in the route table of the VPC instance. Otherwise, SSL-VPN connection traffic transmission exceptions may occur.
    // 
    // This parameter is required.
    shared_ptr<string> clientIpPool_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value on your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to compress communication. Valid values:
    // 
    // - **true**: Compresses communication.
    // 
    // - **false** (default): Does not compress communication.
    shared_ptr<bool> compress_ {};
    // The DNS server addresses configured for the client. You can enter up to two addresses, separated by commas (,).
    shared_ptr<string> dnsServers_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // * **true**: Prechecks the request without performing the operation. The system prechecks required parameters, request syntax, and limits. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // 
    // * **false** (default): Sends the request. After the request passes the precheck, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable two-factor authentication. If you enable two-factor authentication, you must also configure the `IDaaSInstanceId`, `IDaaSRegionId`, and `IDaaSApplicationId` parameters. Valid values:
    // 
    // - **true**: Enables two-factor authentication.
    // 
    // - **false** (default): Disables two-factor authentication.
    // 
    // > - If you use the two-factor authentication feature for the first time, complete the [authorization](https://ram.console.aliyun.com/role/authorization?request=%7B%22Services%22%3A%5B%7B%22Service%22%3A%22VPN%22%2C%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunVpnAccessingIdaasRole%22%2C%22TemplateId%22%3A%22IdaasRole%22%7D%5D%7D%5D%2C%22ReturnUrl%22%3A%22https%3A%2F%2Fvpc.console.aliyun.com%2Fsslvpn%2Fcn-shanghai%2Fvpn-servers%22%7D) before you create an SSL server.
    // > - When you create an SSL server in the UAE (Dubai) region, we recommend that you bind an IDaaS EIAM 2.0 instance in the Singapore region to reduce cross-region latency.
    // > - IDaaS EIAM 1.0 instances are no longer available for purchase. If your Alibaba Cloud account has an IDaaS EIAM 1.0 instance, you can still bind the IDaaS EIAM 1.0 instance after you enable two-factor authentication. If your Alibaba Cloud account does not have an IDaaS EIAM 1.0 instance, you can only bind an IDaaS EIAM 2.0 instance after you enable two-factor authentication.
    shared_ptr<bool> enableMultiFactorAuth_ {};
    // The ID of the IDaaS application.
    // 
    // - If you bind an IDaaS EIAM 2.0 instance, you must enter the ID of the IDaaS application.
    // - If you bind an IDaaS EIAM 1.0 instance, you do not need to enter the ID of the IDaaS application.
    shared_ptr<string> IDaaSApplicationId_ {};
    // The ID of the IDaaS EIAM instance.
    shared_ptr<string> IDaaSInstanceId_ {};
    // The region ID of the IDaaS EIAM instance.
    shared_ptr<string> IDaaSRegionId_ {};
    // The local CIDR block.
    // 
    // This is the CIDR block that the client wants to access through the SSL-VPN connection.
    // 
    // The local CIDR block can be the CIDR block of a VPC, the CIDR block of a vSwitch, the CIDR block of a data center that is connected to the VPC through an Express Connect circuit, or the CIDR block of a cloud service such as Object Storage Service (OSS).
    // 
    // The subnet mask of the local CIDR block must be 8 to 32 bits in length. The following CIDR blocks cannot be specified as the local CIDR block:
    // 
    // - 127.0.0.0 to 127.255.255.255
    // - 169.254.0.0 to 169.254.255.255
    // - 224.0.0.0 to 239.255.255.255
    // - 255.0.0.0 to 255.255.255.255
    // 
    // This parameter is required.
    shared_ptr<string> localSubnet_ {};
    // The name of the SSL-VPN server.
    // 
    // The name must be 1 to 100 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The port used by the SSL-VPN server. Valid values: **1** to **65535**. Default value: **1194**.
    // 
    // The following ports are not supported: **22**, **2222**, **22222**, **9000**, **9001**, **9002**, **7505**, **80**, **443**, **53**, **68**, **123**, **4510**, **4560**, **500**, and **4500**.
    shared_ptr<int32_t> port_ {};
    // The protocol used by the SSL-VPN server. Valid values:
    // 
    // - **TCP** (default): TCP
    // - **UDP**: UDP
    shared_ptr<string> proto_ {};
    // The region ID of the VPN gateway.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the VPN gateway.
    // 
    // This parameter is required.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
