// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSSLVPNSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSSLVPNSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifySslVpnServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySslVpnServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cipher, cipher_);
      DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_TO_JSON(Compress, compress_);
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
      DARABONBA_PTR_TO_JSON(IDaaSApplicationId, IDaaSApplicationId_);
      DARABONBA_PTR_TO_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_TO_JSON(IDaaSInstanceVersion, IDaaSInstanceVersion_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySslVpnServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cipher, cipher_);
      DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_FROM_JSON(Compress, compress_);
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableMultiFactorAuth, enableMultiFactorAuth_);
      DARABONBA_PTR_FROM_JSON(IDaaSApplicationId, IDaaSApplicationId_);
      DARABONBA_PTR_FROM_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_FROM_JSON(IDaaSInstanceVersion, IDaaSInstanceVersion_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ModifySslVpnServerResponseBody() = default ;
    ModifySslVpnServerResponseBody(const ModifySslVpnServerResponseBody &) = default ;
    ModifySslVpnServerResponseBody(ModifySslVpnServerResponseBody &&) = default ;
    ModifySslVpnServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySslVpnServerResponseBody() = default ;
    ModifySslVpnServerResponseBody& operator=(const ModifySslVpnServerResponseBody &) = default ;
    ModifySslVpnServerResponseBody& operator=(ModifySslVpnServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cipher_ == nullptr
        && return this->clientIpPool_ == nullptr && return this->compress_ == nullptr && return this->connections_ == nullptr && return this->createTime_ == nullptr && return this->enableMultiFactorAuth_ == nullptr
        && return this->IDaaSApplicationId_ == nullptr && return this->IDaaSInstanceId_ == nullptr && return this->IDaaSInstanceVersion_ == nullptr && return this->internetIp_ == nullptr && return this->localSubnet_ == nullptr
        && return this->maxConnections_ == nullptr && return this->name_ == nullptr && return this->port_ == nullptr && return this->proto_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sslVpnServerId_ == nullptr && return this->vpnGatewayId_ == nullptr; };
    // cipher Field Functions 
    bool hasCipher() const { return this->cipher_ != nullptr;};
    void deleteCipher() { this->cipher_ = nullptr;};
    inline string cipher() const { DARABONBA_PTR_GET_DEFAULT(cipher_, "") };
    inline ModifySslVpnServerResponseBody& setCipher(string cipher) { DARABONBA_PTR_SET_VALUE(cipher_, cipher) };


    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string clientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline ModifySslVpnServerResponseBody& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline bool compress() const { DARABONBA_PTR_GET_DEFAULT(compress_, false) };
    inline ModifySslVpnServerResponseBody& setCompress(bool compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline int32_t connections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0) };
    inline ModifySslVpnServerResponseBody& setConnections(int32_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ModifySslVpnServerResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableMultiFactorAuth Field Functions 
    bool hasEnableMultiFactorAuth() const { return this->enableMultiFactorAuth_ != nullptr;};
    void deleteEnableMultiFactorAuth() { this->enableMultiFactorAuth_ = nullptr;};
    inline bool enableMultiFactorAuth() const { DARABONBA_PTR_GET_DEFAULT(enableMultiFactorAuth_, false) };
    inline ModifySslVpnServerResponseBody& setEnableMultiFactorAuth(bool enableMultiFactorAuth) { DARABONBA_PTR_SET_VALUE(enableMultiFactorAuth_, enableMultiFactorAuth) };


    // IDaaSApplicationId Field Functions 
    bool hasIDaaSApplicationId() const { return this->IDaaSApplicationId_ != nullptr;};
    void deleteIDaaSApplicationId() { this->IDaaSApplicationId_ = nullptr;};
    inline string IDaaSApplicationId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSApplicationId_, "") };
    inline ModifySslVpnServerResponseBody& setIDaaSApplicationId(string IDaaSApplicationId) { DARABONBA_PTR_SET_VALUE(IDaaSApplicationId_, IDaaSApplicationId) };


    // IDaaSInstanceId Field Functions 
    bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
    void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
    inline string IDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
    inline ModifySslVpnServerResponseBody& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


    // IDaaSInstanceVersion Field Functions 
    bool hasIDaaSInstanceVersion() const { return this->IDaaSInstanceVersion_ != nullptr;};
    void deleteIDaaSInstanceVersion() { this->IDaaSInstanceVersion_ = nullptr;};
    inline string IDaaSInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceVersion_, "") };
    inline ModifySslVpnServerResponseBody& setIDaaSInstanceVersion(string IDaaSInstanceVersion) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceVersion_, IDaaSInstanceVersion) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ModifySslVpnServerResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifySslVpnServerResponseBody& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline ModifySslVpnServerResponseBody& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifySslVpnServerResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifySslVpnServerResponseBody& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string proto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline ModifySslVpnServerResponseBody& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySslVpnServerResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySslVpnServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifySslVpnServerResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sslVpnServerId Field Functions 
    bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
    void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
    inline string sslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
    inline ModifySslVpnServerResponseBody& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifySslVpnServerResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The encryption algorithm.
    std::shared_ptr<string> cipher_ = nullptr;
    // The client CIDR block.
    std::shared_ptr<string> clientIpPool_ = nullptr;
    // Indicates whether data compression is enabled.
    std::shared_ptr<bool> compress_ = nullptr;
    // The total number of current connections.
    std::shared_ptr<int32_t> connections_ = nullptr;
    // The time when the SSL server was created.
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
    // The public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The local CIDR block.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The maximum number of connections.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The name of the SSL server.
    std::shared_ptr<string> name_ = nullptr;
    // The port that is used by the SSL server.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The protocol that is used by the SSL server.
    std::shared_ptr<string> proto_ = nullptr;
    // The ID of the region where the SSL server is created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the SSL server belongs.
    // 
    // The SSL server and the VPN gateway associated with the SSL server belong to the same resource group. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
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
