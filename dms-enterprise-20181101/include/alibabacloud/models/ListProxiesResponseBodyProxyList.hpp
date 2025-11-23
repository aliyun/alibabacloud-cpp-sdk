// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROXIESRESPONSEBODYPROXYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROXIESRESPONSEBODYPROXYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListProxiesResponseBodyProxyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProxiesResponseBodyProxyList& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrivateEnable, privateEnable_);
      DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_TO_JSON(ProtocolPort, protocolPort_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(PublicEnable, publicEnable_);
      DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProxiesResponseBodyProxyList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(HttpsPort, httpsPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrivateEnable, privateEnable_);
      DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_FROM_JSON(ProtocolPort, protocolPort_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(PublicEnable, publicEnable_);
      DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListProxiesResponseBodyProxyList() = default ;
    ListProxiesResponseBodyProxyList(const ListProxiesResponseBodyProxyList &) = default ;
    ListProxiesResponseBodyProxyList(ListProxiesResponseBodyProxyList &&) = default ;
    ListProxiesResponseBodyProxyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProxiesResponseBodyProxyList() = default ;
    ListProxiesResponseBodyProxyList& operator=(const ListProxiesResponseBodyProxyList &) = default ;
    ListProxiesResponseBodyProxyList& operator=(ListProxiesResponseBodyProxyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->creatorName_ == nullptr && return this->httpsPort_ == nullptr && return this->instanceId_ == nullptr && return this->privateEnable_ == nullptr && return this->privateHost_ == nullptr
        && return this->protocolPort_ == nullptr && return this->protocolType_ == nullptr && return this->proxyId_ == nullptr && return this->publicEnable_ == nullptr && return this->publicHost_ == nullptr
        && return this->regionId_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ListProxiesResponseBodyProxyList& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListProxiesResponseBodyProxyList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline int32_t httpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, 0) };
    inline ListProxiesResponseBodyProxyList& setHttpsPort(int32_t httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListProxiesResponseBodyProxyList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // privateEnable Field Functions 
    bool hasPrivateEnable() const { return this->privateEnable_ != nullptr;};
    void deletePrivateEnable() { this->privateEnable_ = nullptr;};
    inline bool privateEnable() const { DARABONBA_PTR_GET_DEFAULT(privateEnable_, false) };
    inline ListProxiesResponseBodyProxyList& setPrivateEnable(bool privateEnable) { DARABONBA_PTR_SET_VALUE(privateEnable_, privateEnable) };


    // privateHost Field Functions 
    bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
    void deletePrivateHost() { this->privateHost_ = nullptr;};
    inline string privateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
    inline ListProxiesResponseBodyProxyList& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


    // protocolPort Field Functions 
    bool hasProtocolPort() const { return this->protocolPort_ != nullptr;};
    void deleteProtocolPort() { this->protocolPort_ = nullptr;};
    inline int32_t protocolPort() const { DARABONBA_PTR_GET_DEFAULT(protocolPort_, 0) };
    inline ListProxiesResponseBodyProxyList& setProtocolPort(int32_t protocolPort) { DARABONBA_PTR_SET_VALUE(protocolPort_, protocolPort) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline ListProxiesResponseBodyProxyList& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline int64_t proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, 0L) };
    inline ListProxiesResponseBodyProxyList& setProxyId(int64_t proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // publicEnable Field Functions 
    bool hasPublicEnable() const { return this->publicEnable_ != nullptr;};
    void deletePublicEnable() { this->publicEnable_ = nullptr;};
    inline bool publicEnable() const { DARABONBA_PTR_GET_DEFAULT(publicEnable_, false) };
    inline ListProxiesResponseBodyProxyList& setPublicEnable(bool publicEnable) { DARABONBA_PTR_SET_VALUE(publicEnable_, publicEnable) };


    // publicHost Field Functions 
    bool hasPublicHost() const { return this->publicHost_ != nullptr;};
    void deletePublicHost() { this->publicHost_ = nullptr;};
    inline string publicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
    inline ListProxiesResponseBodyProxyList& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProxiesResponseBodyProxyList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the user who enabled the secure access proxy feature.
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    // The nickname of the user who enabled the secure access proxy feature.
    std::shared_ptr<string> creatorName_ = nullptr;
    // The number of the port that was used by HTTPS clients to connect to the database instance.
    std::shared_ptr<int32_t> httpsPort_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Indicates whether the internal endpoint is enabled. Default value: **true**.
    std::shared_ptr<bool> privateEnable_ = nullptr;
    // The internal endpoint.
    std::shared_ptr<string> privateHost_ = nullptr;
    // The number of the port that is used to connect the database instance.
    std::shared_ptr<int32_t> protocolPort_ = nullptr;
    // The type of the database. Example: MYSQL.
    std::shared_ptr<string> protocolType_ = nullptr;
    // The ID of the secure access proxy.
    std::shared_ptr<int64_t> proxyId_ = nullptr;
    // Indicates whether the public endpoint is enabled. Valid values:
    // 
    // *   **true**: The public endpoint is enabled.
    // *   **false**: The public endpoint is disabled.
    std::shared_ptr<bool> publicEnable_ = nullptr;
    // The public endpoint. A public endpoint is returned no matter whether the public endpoint is enabled or disabled.
    // 
    // > 
    // 
    // *   If the value of the PublicEnable parameter is **true**, a valid public endpoint that can be resolved by using Alibaba Cloud DNS (DNS) is returned.
    // 
    // *   If the value of the PublicEnable parameter is **false**, an invalid public endpoint that cannot be resolved by using DNS is returned.
    std::shared_ptr<string> publicHost_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
