// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class AddZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DnsGroup, dnsGroup_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      DARABONBA_PTR_TO_JSON(ZoneTag, zoneTag_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, AddZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DnsGroup, dnsGroup_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      DARABONBA_PTR_FROM_JSON(ZoneTag, zoneTag_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
    };
    AddZoneRequest() = default ;
    AddZoneRequest(const AddZoneRequest &) = default ;
    AddZoneRequest(AddZoneRequest &&) = default ;
    AddZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddZoneRequest() = default ;
    AddZoneRequest& operator=(const AddZoneRequest &) = default ;
    AddZoneRequest& operator=(AddZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dnsGroup_ == nullptr && this->lang_ == nullptr && this->proxyPattern_ == nullptr && this->resourceGroupId_ == nullptr && this->zoneName_ == nullptr
        && this->zoneTag_ == nullptr && this->zoneType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddZoneRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dnsGroup Field Functions 
    bool hasDnsGroup() const { return this->dnsGroup_ != nullptr;};
    void deleteDnsGroup() { this->dnsGroup_ = nullptr;};
    inline string getDnsGroup() const { DARABONBA_PTR_GET_DEFAULT(dnsGroup_, "") };
    inline AddZoneRequest& setDnsGroup(string dnsGroup) { DARABONBA_PTR_SET_VALUE(dnsGroup_, dnsGroup) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddZoneRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // proxyPattern Field Functions 
    bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
    void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
    inline string getProxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
    inline AddZoneRequest& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AddZoneRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline AddZoneRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    // zoneTag Field Functions 
    bool hasZoneTag() const { return this->zoneTag_ != nullptr;};
    void deleteZoneTag() { this->zoneTag_ = nullptr;};
    inline string getZoneTag() const { DARABONBA_PTR_GET_DEFAULT(zoneTag_, "") };
    inline AddZoneRequest& setZoneTag(string zoneTag) { DARABONBA_PTR_SET_VALUE(zoneTag_, zoneTag) };


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline AddZoneRequest& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    // A client token that is used to ensure the idempotence of the request. You can use the client to generate a token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The location of the built-in authoritative zone. Valid values:
    // 
    // - **NORMAL_ZONE**: Standard zone. DNS responses are cached. If a cache miss occurs, the query is sent to the built-in authoritative standard zone. The time to live (TTL) value affects the time when a DNS record change takes effect. You cannot use custom DNS lines or weighted round-robin.
    // 
    // - **FAST_ZONE**: Accelerated zone (recommended). DNS queries are directly responded to with the lowest latency. DNS record changes take effect in real time. You can use custom DNS lines and weighted round-robin.
    // 
    // Default value: **NORMAL_ZONE**.
    // 
    // > The built-in authoritative accelerated zone is located before the cache module. DNS responses are not cached. This may increase the number of DNS queries and your costs.
    // 
    // <props="china">
    // 
    // > Starting from April 30, 2025 (UTC+8), when new users activate Alibaba Cloud DNS PrivateZone, added zones are set as accelerated zones by default.
    shared_ptr<string> dnsGroup_ {};
    // The language of the response. Valid values:
    // 
    // - **zh**: Chinese.
    // 
    // - **en**: English.
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // Specifies whether to enable subdomain recursive proxy. Valid values:
    // 
    // - **ZONE**: Disables the feature. If a DNS query for a subdomain that does not exist under the current domain name is received, an NXDOMAIN error is returned.
    // 
    // - **RECORD**: Enables the feature. If a DNS query for a subdomain that does not exist under the current domain name is received, the query is processed by the forwarding and recursion modules in sequence. The final result is used to respond to the DNS query.
    // 
    // Default value: **ZONE**.
    shared_ptr<string> proxyPattern_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The name of the zone to add.
    shared_ptr<string> zoneName_ {};
    // This parameter is not available to users. You do not need to specify this parameter.
    shared_ptr<string> zoneTag_ {};
    // This parameter is not available to users. You do not need to specify this parameter.
    shared_ptr<string> zoneType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
