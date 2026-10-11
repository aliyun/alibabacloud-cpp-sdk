// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEGRESSPROXYGATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEGRESSPROXYGATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class GetEgressProxyGatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEgressProxyGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultEgressProxyIpPoolId, defaultEgressProxyIpPoolId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnsName, dnsName_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
      DARABONBA_PTR_TO_JSON(ListenerProperties, listenerProperties_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TlsInterceptProperties, tlsInterceptProperties_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, GetEgressProxyGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultEgressProxyIpPoolId, defaultEgressProxyIpPoolId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnsName, dnsName_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayId, egressProxyGatewayId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
      DARABONBA_PTR_FROM_JSON(ListenerProperties, listenerProperties_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TlsInterceptProperties, tlsInterceptProperties_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    GetEgressProxyGatewayAttributeResponseBody() = default ;
    GetEgressProxyGatewayAttributeResponseBody(const GetEgressProxyGatewayAttributeResponseBody &) = default ;
    GetEgressProxyGatewayAttributeResponseBody(GetEgressProxyGatewayAttributeResponseBody &&) = default ;
    GetEgressProxyGatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEgressProxyGatewayAttributeResponseBody() = default ;
    GetEgressProxyGatewayAttributeResponseBody& operator=(const GetEgressProxyGatewayAttributeResponseBody &) = default ;
    GetEgressProxyGatewayAttributeResponseBody& operator=(GetEgressProxyGatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneMappings() = default ;
      ZoneMappings(const ZoneMappings &) = default ;
      ZoneMappings(ZoneMappings &&) = default ;
      ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneMappings() = default ;
      ZoneMappings& operator=(const ZoneMappings &) = default ;
      ZoneMappings& operator=(ZoneMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ZoneMappings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The zone status. Valid values:
      // 
      // - **Provisioning**: The zone is being created.
      // - **Available**: The zone is available.
      // - **Configuring**: The zone is being reconfigured.
      shared_ptr<string> status_ {};
      // The ID of the vSwitch that corresponds to the zone.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    class TlsInterceptProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TlsInterceptProperties& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateCaCertificateId, privateCaCertificateId_);
        DARABONBA_PTR_TO_JSON(TlsInterceptMode, tlsInterceptMode_);
      };
      friend void from_json(const Darabonba::Json& j, TlsInterceptProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateCaCertificateId, privateCaCertificateId_);
        DARABONBA_PTR_FROM_JSON(TlsInterceptMode, tlsInterceptMode_);
      };
      TlsInterceptProperties() = default ;
      TlsInterceptProperties(const TlsInterceptProperties &) = default ;
      TlsInterceptProperties(TlsInterceptProperties &&) = default ;
      TlsInterceptProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TlsInterceptProperties() = default ;
      TlsInterceptProperties& operator=(const TlsInterceptProperties &) = default ;
      TlsInterceptProperties& operator=(TlsInterceptProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->privateCaCertificateId_ == nullptr
        && this->tlsInterceptMode_ == nullptr; };
      // privateCaCertificateId Field Functions 
      bool hasPrivateCaCertificateId() const { return this->privateCaCertificateId_ != nullptr;};
      void deletePrivateCaCertificateId() { this->privateCaCertificateId_ = nullptr;};
      inline string getPrivateCaCertificateId() const { DARABONBA_PTR_GET_DEFAULT(privateCaCertificateId_, "") };
      inline TlsInterceptProperties& setPrivateCaCertificateId(string privateCaCertificateId) { DARABONBA_PTR_SET_VALUE(privateCaCertificateId_, privateCaCertificateId) };


      // tlsInterceptMode Field Functions 
      bool hasTlsInterceptMode() const { return this->tlsInterceptMode_ != nullptr;};
      void deleteTlsInterceptMode() { this->tlsInterceptMode_ = nullptr;};
      inline string getTlsInterceptMode() const { DARABONBA_PTR_GET_DEFAULT(tlsInterceptMode_, "") };
      inline TlsInterceptProperties& setTlsInterceptMode(string tlsInterceptMode) { DARABONBA_PTR_SET_VALUE(tlsInterceptMode_, tlsInterceptMode) };


    protected:
      // The ID of the private CA certificate.
      shared_ptr<string> privateCaCertificateId_ {};
      // The TLS Block Mode. Valid values:
      // 
      // - **enable**: Enables the TLS Block Mode.
      // - **disable**: Disables the TLS Block Mode.
      shared_ptr<string> tlsInterceptMode_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. The key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 256 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    class ListenerProperties : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListenerProperties& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerProperties& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      ListenerProperties() = default ;
      ListenerProperties(const ListenerProperties &) = default ;
      ListenerProperties(ListenerProperties &&) = default ;
      ListenerProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListenerProperties() = default ;
      ListenerProperties& operator=(const ListenerProperties &) = default ;
      ListenerProperties& operator=(ListenerProperties &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ListenerProperties& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ListenerProperties& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      // The listener port. Valid values: 1 to 65535.
      shared_ptr<int32_t> port_ {};
      // The listener protocol. Valid values:
      // 
      // - **HTTP**
      // - **HTTPS**
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultEgressProxyIpPoolId_ == nullptr && this->description_ == nullptr && this->dnsName_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyGatewayId_ == nullptr
        && this->egressProxyGatewayName_ == nullptr && this->listenerProperties_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->tlsInterceptProperties_ == nullptr && this->vpcId_ == nullptr && this->zoneMappings_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultEgressProxyIpPoolId Field Functions 
    bool hasDefaultEgressProxyIpPoolId() const { return this->defaultEgressProxyIpPoolId_ != nullptr;};
    void deleteDefaultEgressProxyIpPoolId() { this->defaultEgressProxyIpPoolId_ = nullptr;};
    inline string getDefaultEgressProxyIpPoolId() const { DARABONBA_PTR_GET_DEFAULT(defaultEgressProxyIpPoolId_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setDefaultEgressProxyIpPoolId(string defaultEgressProxyIpPoolId) { DARABONBA_PTR_SET_VALUE(defaultEgressProxyIpPoolId_, defaultEgressProxyIpPoolId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnsName Field Functions 
    bool hasDnsName() const { return this->dnsName_ != nullptr;};
    void deleteDnsName() { this->dnsName_ = nullptr;};
    inline string getDnsName() const { DARABONBA_PTR_GET_DEFAULT(dnsName_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setDnsName(string dnsName) { DARABONBA_PTR_SET_VALUE(dnsName_, dnsName) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


    // egressProxyGatewayId Field Functions 
    bool hasEgressProxyGatewayId() const { return this->egressProxyGatewayId_ != nullptr;};
    void deleteEgressProxyGatewayId() { this->egressProxyGatewayId_ = nullptr;};
    inline string getEgressProxyGatewayId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayId_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setEgressProxyGatewayId(string egressProxyGatewayId) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayId_, egressProxyGatewayId) };


    // egressProxyGatewayName Field Functions 
    bool hasEgressProxyGatewayName() const { return this->egressProxyGatewayName_ != nullptr;};
    void deleteEgressProxyGatewayName() { this->egressProxyGatewayName_ = nullptr;};
    inline string getEgressProxyGatewayName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayName_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setEgressProxyGatewayName(string egressProxyGatewayName) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayName_, egressProxyGatewayName) };


    // listenerProperties Field Functions 
    bool hasListenerProperties() const { return this->listenerProperties_ != nullptr;};
    void deleteListenerProperties() { this->listenerProperties_ = nullptr;};
    inline const vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties> & getListenerProperties() const { DARABONBA_PTR_GET_CONST(listenerProperties_, vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties>) };
    inline vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties> getListenerProperties() { DARABONBA_PTR_GET(listenerProperties_, vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties>) };
    inline GetEgressProxyGatewayAttributeResponseBody& setListenerProperties(const vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties> & listenerProperties) { DARABONBA_PTR_SET_VALUE(listenerProperties_, listenerProperties) };
    inline GetEgressProxyGatewayAttributeResponseBody& setListenerProperties(vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties> && listenerProperties) { DARABONBA_PTR_SET_RVALUE(listenerProperties_, listenerProperties) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetEgressProxyGatewayAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetEgressProxyGatewayAttributeResponseBody::Tags>) };
    inline vector<GetEgressProxyGatewayAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetEgressProxyGatewayAttributeResponseBody::Tags>) };
    inline GetEgressProxyGatewayAttributeResponseBody& setTags(const vector<GetEgressProxyGatewayAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetEgressProxyGatewayAttributeResponseBody& setTags(vector<GetEgressProxyGatewayAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tlsInterceptProperties Field Functions 
    bool hasTlsInterceptProperties() const { return this->tlsInterceptProperties_ != nullptr;};
    void deleteTlsInterceptProperties() { this->tlsInterceptProperties_ = nullptr;};
    inline const GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties & getTlsInterceptProperties() const { DARABONBA_PTR_GET_CONST(tlsInterceptProperties_, GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties) };
    inline GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties getTlsInterceptProperties() { DARABONBA_PTR_GET(tlsInterceptProperties_, GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties) };
    inline GetEgressProxyGatewayAttributeResponseBody& setTlsInterceptProperties(const GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties & tlsInterceptProperties) { DARABONBA_PTR_SET_VALUE(tlsInterceptProperties_, tlsInterceptProperties) };
    inline GetEgressProxyGatewayAttributeResponseBody& setTlsInterceptProperties(GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties && tlsInterceptProperties) { DARABONBA_PTR_SET_RVALUE(tlsInterceptProperties_, tlsInterceptProperties) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetEgressProxyGatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings>) };
    inline vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings>) };
    inline GetEgressProxyGatewayAttributeResponseBody& setZoneMappings(const vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline GetEgressProxyGatewayAttributeResponseBody& setZoneMappings(vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The time when the egress proxy gateway was created. The time is displayed in UTC and follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format.
    shared_ptr<string> createTime_ {};
    // The ID of the default egress IP pool.
    shared_ptr<string> defaultEgressProxyIpPoolId_ {};
    // The description of the egress proxy gateway instance. The description must be 2 to 256 characters in length and can contain Chinese characters and English letters. It can also contain digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // The DNS domain name.
    shared_ptr<string> dnsName_ {};
    // The ID of the associated egress proxy configuration.
    shared_ptr<string> egressProxyConfigurationId_ {};
    // The ID of the egress proxy gateway instance.
    shared_ptr<string> egressProxyGatewayId_ {};
    // The name of the egress proxy gateway. The name must be 2 to 128 characters in length and can contain English letters and Chinese characters. It must start with a letter or a Chinese character and can contain digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> egressProxyGatewayName_ {};
    // The list of listener properties.
    shared_ptr<vector<GetEgressProxyGatewayAttributeResponseBody::ListenerProperties>> listenerProperties_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The instance status of the egress proxy gateway. Valid values:
    // 
    // - **Provisioning**: The instance is being created.
    // - **Active**: The instance is running.
    // - **Configuring**: The instance is being reconfigured.
    // - **Inactive**: The instance is stopped.
    shared_ptr<string> status_ {};
    // The list of tags.
    shared_ptr<vector<GetEgressProxyGatewayAttributeResponseBody::Tags>> tags_ {};
    // The TLS interception properties.
    shared_ptr<GetEgressProxyGatewayAttributeResponseBody::TlsInterceptProperties> tlsInterceptProperties_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
    // The list of zone and vSwitch mappings. If the current region supports two or more zones, at least two zones must be returned.
    shared_ptr<vector<GetEgressProxyGatewayAttributeResponseBody::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
