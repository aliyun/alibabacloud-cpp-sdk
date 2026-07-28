// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSSLVPNSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSSLVPNSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifySslVpnServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySslVpnServerRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySslVpnServerRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
    };
    ModifySslVpnServerRequest() = default ;
    ModifySslVpnServerRequest(const ModifySslVpnServerRequest &) = default ;
    ModifySslVpnServerRequest(ModifySslVpnServerRequest &&) = default ;
    ModifySslVpnServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySslVpnServerRequest() = default ;
    ModifySslVpnServerRequest& operator=(const ModifySslVpnServerRequest &) = default ;
    ModifySslVpnServerRequest& operator=(ModifySslVpnServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cipher_ == nullptr
        && this->clientIpPool_ == nullptr && this->clientToken_ == nullptr && this->compress_ == nullptr && this->dnsServers_ == nullptr && this->dryRun_ == nullptr
        && this->enableMultiFactorAuth_ == nullptr && this->IDaaSApplicationId_ == nullptr && this->IDaaSInstanceId_ == nullptr && this->IDaaSRegionId_ == nullptr && this->localSubnet_ == nullptr
        && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->port_ == nullptr && this->proto_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sslVpnServerId_ == nullptr; };
    // cipher Field Functions 
    bool hasCipher() const { return this->cipher_ != nullptr;};
    void deleteCipher() { this->cipher_ = nullptr;};
    inline string getCipher() const { DARABONBA_PTR_GET_DEFAULT(cipher_, "") };
    inline ModifySslVpnServerRequest& setCipher(string cipher) { DARABONBA_PTR_SET_VALUE(cipher_, cipher) };


    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string getClientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline ModifySslVpnServerRequest& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifySslVpnServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline bool getCompress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
    inline ModifySslVpnServerRequest& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline string getDnsServers() const { DARABONBA_PTR_GET_DEFAULT(dnsServers_, "") };
    inline ModifySslVpnServerRequest& setDnsServers(string dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifySslVpnServerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableMultiFactorAuth Field Functions 
    bool hasEnableMultiFactorAuth() const { return this->enableMultiFactorAuth_ != nullptr;};
    void deleteEnableMultiFactorAuth() { this->enableMultiFactorAuth_ = nullptr;};
    inline bool getEnableMultiFactorAuth() const { DARABONBA_PTR_GET_DEFAULT(enableMultiFactorAuth_, false) };
    inline ModifySslVpnServerRequest& setEnableMultiFactorAuth(bool enableMultiFactorAuth) { DARABONBA_PTR_SET_VALUE(enableMultiFactorAuth_, enableMultiFactorAuth) };


    // IDaaSApplicationId Field Functions 
    bool hasIDaaSApplicationId() const { return this->IDaaSApplicationId_ != nullptr;};
    void deleteIDaaSApplicationId() { this->IDaaSApplicationId_ = nullptr;};
    inline string getIDaaSApplicationId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSApplicationId_, "") };
    inline ModifySslVpnServerRequest& setIDaaSApplicationId(string IDaaSApplicationId) { DARABONBA_PTR_SET_VALUE(IDaaSApplicationId_, IDaaSApplicationId) };


    // IDaaSInstanceId Field Functions 
    bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
    void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
    inline string getIDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
    inline ModifySslVpnServerRequest& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


    // IDaaSRegionId Field Functions 
    bool hasIDaaSRegionId() const { return this->IDaaSRegionId_ != nullptr;};
    void deleteIDaaSRegionId() { this->IDaaSRegionId_ = nullptr;};
    inline string getIDaaSRegionId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSRegionId_, "") };
    inline ModifySslVpnServerRequest& setIDaaSRegionId(string IDaaSRegionId) { DARABONBA_PTR_SET_VALUE(IDaaSRegionId_, IDaaSRegionId) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifySslVpnServerRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifySslVpnServerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySslVpnServerRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySslVpnServerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifySslVpnServerRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline ModifySslVpnServerRequest& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySslVpnServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySslVpnServerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySslVpnServerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sslVpnServerId Field Functions 
    bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
    void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
    inline string getSslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
    inline ModifySslVpnServerRequest& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


  protected:
    // The encryption algorithm used by the SSL-VPN server. Valid values: 
    // 
    // - **AES-128-CBC** (default): AES-128-CBC algorithm.
    // 
    // - **AES-192-CBC**: AES-192-CBC algorithm.
    // 
    // - **AES-256-CBC**: AES-256-CBC algorithm.
    // 
    // - **none**: no encryption algorithm is used.
    shared_ptr<string> cipher_ {};
    // The client CIDR block.
    // 
    // The client CIDR block is the CIDR block from which IP addresses are assigned to virtual network interface controllers (NICs) of clients. It is not the internal network CIDR block of the client.
    // 
    // When a client accesses the local virtual private cloud (VPC) through an SSL-VPN connection, the VPN gateway assigns an IP address from the specified client CIDR block to the client. The client uses the assigned IP address to access cloud resources.
    // 
    // When you specify the client CIDR block, make sure that the number of IP addresses in the client CIDR block is at least four times the number of SSL connections supported by the VPN gateway.
    // <details>
    // <summary>Click to view the reason.</summary>
    // For example, if you set 192.168.0.0/24 as the client CIDR block, the system first allocates a subnet with a 30-bit subnet mask from the 192.168.0.0/24 CIDR block, such as 192.168.0.4/30, and then assigns one IP address from 192.168.0.4/30 to the client. The remaining three IP addresses are reserved by the system to ensure network communication. In this case, one client consumes four IP addresses. Therefore, to ensure that all clients can be assigned IP addresses, make sure that the number of IP addresses in the client CIDR block is at least four times the number of SSL connections supported by the VPN gateway.
    // </details>
    // 
    // <details>
    // <summary>Click to view unsupported CIDR blocks.</summary>
    // 
    // - 100.64.0.0 to 100.127.255.255
    // - 127.0.0.0 to 127.255.255.255
    // - 169.254.0.0 to 169.254.255.255
    // - 224.0.0.0 to 239.255.255.255
    // - 255.0.0.0 to 255.255.255.255
    // 
    // </details>
    // 
    // <details>
    // <summary>Click to view the recommended client CIDR blocks for each number of SSL connections.</summary>
    // 
    // - If the number of SSL connections is 5, the subnet mask of the client CIDR block must be 27 bits or less. For example, 10.0.0.0/27 or 10.0.0.0/26.
    // - If the number of SSL connections is 10, the subnet mask of the client CIDR block must be 26 bits or less. For example, 10.0.0.0/26 or 10.0.0.0/25.
    // - If the number of SSL connections is 20, the subnet mask of the client CIDR block must be 25 bits or less. For example, 10.0.0.0/25 or 10.0.0.0/24.
    // - If the number of SSL connections is 50, the subnet mask of the client CIDR block must be 24 bits or less. For example, 10.0.0.0/24 or 10.0.0.0/23.
    // - If the number of SSL connections is 100, the subnet mask of the client CIDR block must be 23 bits or less. For example, 10.0.0.0/23 or 10.0.0.0/22.
    // - If the number of SSL connections is 200, the subnet mask of the client CIDR block must be 22 bits or less. For example, 10.0.0.0/22 or 10.0.0.0/21.
    // - If the number of SSL connections is 500, the subnet mask of the client CIDR block must be 21 bits or less. For example, 10.0.0.0/21 or 10.0.0.0/20.
    // - If the number of SSL connections is 1000, the subnet mask of the client CIDR block must be 20 bits or less. For example, 10.0.0.0/20 or 10.0.0.0/19.
    // 
    // </details>
    // 
    // > - The subnet mask of the client CIDR block must be 16 to 29 bits in length.
    // > - Make sure that the client CIDR block does not overlap with the local CIDR block, the VPC CIDR block, or any routing CIDR block associated with the client terminal.
    // > - Use 10.0.0.0/8, 172.16.0.0/12, 192.168.0.0/16, or their subnets as the client CIDR block. If you want to specify a public CIDR block as the client CIDR block, set the public CIDR block as a user CIDR block of the VPC to ensure that the VPC can access the public CIDR block. For more information about user CIDR blocks, see [VPC FAQ](https://help.aliyun.com/document_detail/185311.html).
    // > - After the SSL server is created, the system automatically adds the routing of the client CIDR block to the route table of the VPC-connected instance. Do not manually add the routing of the client CIDR block to the route table of the VPC-connected instance. Otherwise, SSL-VPN connection traffic may be abnormal.
    shared_ptr<string> clientIpPool_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to compress communication. Valid values:
    // 
    // - **true** (default): Communication is compressed.
    // 
    // - **false**: Communication is not compressed.
    shared_ptr<bool> compress_ {};
    shared_ptr<string> dnsServers_ {};
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // - **true**: sends a check request without modifying the SSL server configuration. The check items include whether required parameters are specified, the request format, and service limits. If the check fails, the corresponding error is returned. If the check passes, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a Normal request. If the request passes the check, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable two-factor identity authentication. If you enable two-factor identity authentication, you must also configure **IDaaSInstanceId**, **IDaaSRegionId**, and **IDaaSApplicationId**. Valid values:
    // 
    // - **true**: enabled.
    // 
    // - **false**: not enabled.
    // 
    // > - If you use two-factor identity authentication for the first time, complete [authorization](https://ram.console.aliyun.com/role/authorization?request=%7B%22Services%22%3A%5B%7B%22Service%22%3A%22VPN%22%2C%22Roles%22%3A%5B%7B%22RoleName%22%3A%22AliyunVpnAccessingIdaasRole%22%2C%22TemplateId%22%3A%22IdaasRole%22%7D%5D%7D%5D%2C%22ReturnUrl%22%3A%22https%3A%2F%2Fvpc.console.aliyun.com%2Fsslvpn%2Fcn-shanghai%2Fvpn-servers%22%7D) before creating the SSL server.
    // > - When you create an SSL server in the UAE (Dubai) region, bind an IDaaS EIAM 2.0 instance in the Singapore region to reduce cross-region latency.
    // > - IDaaS EIAM 1.0 instances are no longer available for purchase. If your Alibaba Cloud account has existing IDaaS EIAM 1.0 instances, you can still bind IDaaS EIAM 1.0 instances after enabling two-factor identity authentication. If your Alibaba Cloud account does not have IDaaS EIAM 1.0 instances, you can bind only IDaaS EIAM 2.0 instances after enabling two-factor identity authentication.
    shared_ptr<bool> enableMultiFactorAuth_ {};
    // The ID of the IDaaS application.
    // 
    // - If you bind an IDaaS EIAM 2.0 instance, enter the IDaaS application ID.
    // - If you bind an IDaaS EIAM 1.0 instance, you do not need to enter the IDaaS application ID.
    shared_ptr<string> IDaaSApplicationId_ {};
    // The instance ID of the IDaaS EIAM instance.
    shared_ptr<string> IDaaSInstanceId_ {};
    // The region ID of the IDaaS EIAM instance.
    shared_ptr<string> IDaaSRegionId_ {};
    // The local CIDR block.
    // 
    // The local CIDR block is the CIDR block that the client needs to access through the SSL-VPN connection.
    // 
    // The local CIDR block can be the CIDR block of a VPC, the CIDR block of a vSwitch, the CIDR block of an on-premises data center that is connected to the VPC through an Express Connect circuit, or the CIDR block of a cloud service such as Object Storage Service (OSS).
    // 
    // The subnet mask of the local CIDR block must be 8 to 32 bits in length. The following CIDR blocks cannot be specified as the local CIDR block:
    // 
    // - 127.0.0.0 to 127.255.255.255
    // - 169.254.0.0 to 169.254.255.255
    // - 224.0.0.0 to 239.255.255.255
    // - 255.0.0.0 to 255.255.255.255
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
    // - **TCP** (default): TCP protocol.
    // 
    // - **UDP**: UDP protocol.
    shared_ptr<string> proto_ {};
    // The region ID of the VPN gateway. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The instance ID of the SSL-VPN server.
    // 
    // This parameter is required.
    shared_ptr<string> sslVpnServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
