// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSEBODYSSLVPNSERVERSSSLVPNSERVER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNSERVERSRESPONSEBODYSSLVPNSERVERSSSLVPNSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& obj) { 
      DARABONBA_PTR_TO_JSON(Cipher, cipher_);
      DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_TO_JSON(Compress, compress_);
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
      DARABONBA_PTR_TO_JSON(IDaaSApplicationId, IDaaSApplicationId_);
      DARABONBA_PTR_TO_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_TO_JSON(IDaaSInstanceVersion, IDaaSInstanceVersion_);
      DARABONBA_PTR_TO_JSON(IDaaSRegionId, IDaaSRegionId_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& obj) { 
      DARABONBA_PTR_FROM_JSON(Cipher, cipher_);
      DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_FROM_JSON(Compress, compress_);
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
      DARABONBA_PTR_FROM_JSON(IDaaSApplicationId, IDaaSApplicationId_);
      DARABONBA_PTR_FROM_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_FROM_JSON(IDaaSInstanceVersion, IDaaSInstanceVersion_);
      DARABONBA_PTR_FROM_JSON(IDaaSRegionId, IDaaSRegionId_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer() = default ;
    DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer(const DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer &) = default ;
    DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer(DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer &&) = default ;
    DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer() = default ;
    DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& operator=(const DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer &) = default ;
    DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& operator=(DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cipher_ != nullptr
        && this->clientIpPool_ != nullptr && this->compress_ != nullptr && this->connections_ != nullptr && this->createTime_ != nullptr && this->enableMultiFactorAuth_ != nullptr
        && this->IDaaSApplicationId_ != nullptr && this->IDaaSInstanceId_ != nullptr && this->IDaaSInstanceVersion_ != nullptr && this->IDaaSRegionId_ != nullptr && this->internetIp_ != nullptr
        && this->localSubnet_ != nullptr && this->maxConnections_ != nullptr && this->name_ != nullptr && this->port_ != nullptr && this->proto_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->sslVpnServerId_ != nullptr && this->vpnGatewayId_ != nullptr; };
    // cipher Field Functions 
    bool hasCipher() const { return this->cipher_ != nullptr;};
    void deleteCipher() { this->cipher_ = nullptr;};
    inline string cipher() const { DARABONBA_PTR_GET_DEFAULT(cipher_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setCipher(string cipher) { DARABONBA_PTR_SET_VALUE(cipher_, cipher) };


    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string clientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline bool compress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline int32_t connections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0) };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setConnections(int32_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableMultiFactorAuth Field Functions 
    bool hasEnableMultiFactorAuth() const { return this->enableMultiFactorAuth_ != nullptr;};
    void deleteEnableMultiFactorAuth() { this->enableMultiFactorAuth_ = nullptr;};
    inline bool enableMultiFactorAuth() const { DARABONBA_PTR_GET_DEFAULT(enableMultiFactorAuth_, false) };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setEnableMultiFactorAuth(bool enableMultiFactorAuth) { DARABONBA_PTR_SET_VALUE(enableMultiFactorAuth_, enableMultiFactorAuth) };


    // IDaaSApplicationId Field Functions 
    bool hasIDaaSApplicationId() const { return this->IDaaSApplicationId_ != nullptr;};
    void deleteIDaaSApplicationId() { this->IDaaSApplicationId_ = nullptr;};
    inline string IDaaSApplicationId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSApplicationId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setIDaaSApplicationId(string IDaaSApplicationId) { DARABONBA_PTR_SET_VALUE(IDaaSApplicationId_, IDaaSApplicationId) };


    // IDaaSInstanceId Field Functions 
    bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
    void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
    inline string IDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


    // IDaaSInstanceVersion Field Functions 
    bool hasIDaaSInstanceVersion() const { return this->IDaaSInstanceVersion_ != nullptr;};
    void deleteIDaaSInstanceVersion() { this->IDaaSInstanceVersion_ = nullptr;};
    inline string IDaaSInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceVersion_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setIDaaSInstanceVersion(string IDaaSInstanceVersion) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceVersion_, IDaaSInstanceVersion) };


    // IDaaSRegionId Field Functions 
    bool hasIDaaSRegionId() const { return this->IDaaSRegionId_ != nullptr;};
    void deleteIDaaSRegionId() { this->IDaaSRegionId_ = nullptr;};
    inline string IDaaSRegionId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSRegionId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setIDaaSRegionId(string IDaaSRegionId) { DARABONBA_PTR_SET_VALUE(IDaaSRegionId_, IDaaSRegionId) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sslVpnServerId Field Functions 
    bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
    void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
    inline string sslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeSslVpnServersResponseBodySslVpnServersSslVpnServer& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The encryption algorithm.
    std::shared_ptr<string> cipher_ = nullptr;
    // The client CIDR block.
    std::shared_ptr<string> clientIpPool_ = nullptr;
    // Indicates whether data compression is enabled. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> compress_ = nullptr;
    // The total number of current connections.
    std::shared_ptr<int32_t> connections_ = nullptr;
    // The timestamp generated when the SSL-VPN server was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether two-factor authentication is enabled.
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enableMultiFactorAuth_ = nullptr;
    // The ID of the IDaaS application.
    std::shared_ptr<string> IDaaSApplicationId_ = nullptr;
    // The ID of the IDaaS EIAM instance.
    std::shared_ptr<string> IDaaSInstanceId_ = nullptr;
    // The version of the IDaaS EIAM instance.
    // 
    // *   This parameter is returned only if the SSL server is associated with an IDaaS EIAM 2.0 instance. Only **EIAM 2.0** is returned.
    // *   If the SSL server is associated with an IDaaS EIAM 1.0 instance, no value is returned.
    std::shared_ptr<string> IDaaSInstanceVersion_ = nullptr;
    // The region ID of the IDaaS EIAM instance.
    std::shared_ptr<string> IDaaSRegionId_ = nullptr;
    // The public IP address of the VPN gateway.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The local CIDR block.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The maximum number of connections.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The name of the SSL server.
    std::shared_ptr<string> name_ = nullptr;
    // The port that is used by the SSL-VPN server.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol that is used by the SSL server.
    std::shared_ptr<string> proto_ = nullptr;
    // The region ID of the SSL server.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID of the SSL server.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the SSL server.
    std::shared_ptr<string> sslVpnServerId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
