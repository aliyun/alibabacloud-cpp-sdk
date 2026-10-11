// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEGRESSPROXYGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEGRESSPROXYGATEWAYREQUEST_HPP_
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
  class CreateEgressProxyGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEgressProxyGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
      DARABONBA_PTR_TO_JSON(ListenerProperties, listenerProperties_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TlsInterceptProperties, tlsInterceptProperties_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEgressProxyGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationId, egressProxyConfigurationId_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayName, egressProxyGatewayName_);
      DARABONBA_PTR_FROM_JSON(ListenerProperties, listenerProperties_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TlsInterceptProperties, tlsInterceptProperties_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CreateEgressProxyGatewayRequest() = default ;
    CreateEgressProxyGatewayRequest(const CreateEgressProxyGatewayRequest &) = default ;
    CreateEgressProxyGatewayRequest(CreateEgressProxyGatewayRequest &&) = default ;
    CreateEgressProxyGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEgressProxyGatewayRequest() = default ;
    CreateEgressProxyGatewayRequest& operator=(const CreateEgressProxyGatewayRequest &) = default ;
    CreateEgressProxyGatewayRequest& operator=(CreateEgressProxyGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
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
      virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
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
      // The ID of the vSwitch that corresponds to the zone.
      // 
      // The vSwitch must belong to the specified VPC and match the zone specified by ZoneId.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The zone ID.
      // 
      // You can call the DescribeZones operation to query information about zones in a region.
      // 
      // This parameter is required.
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
      // 
      // - This parameter is required when **TlsInterceptMode** is set to **enable**.
      // - Do not specify this parameter when **TlsInterceptMode** is set to **disable**.
      shared_ptr<string> privateCaCertificateId_ {};
      // Specifies whether to enable TLS interception. Valid values:
      // 
      // - **enable**: enables TLS interception.
      // 
      // - **disable**: disables TLS interception.
      // 
      // This parameter is required.
      shared_ptr<string> tlsInterceptMode_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. The key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 256 characters in length, and cannot contain `http://` or `https://`.
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
      // The listener port.
      // 
      // Valid values: **1** to **65535**.
      // 
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
      // The protocol type of the listener. Valid values:
      // 
      // - **HTTP**: HTTP.
      // 
      // - **HTTPS**: HTTPS.
      // 
      // This parameter is required.
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->egressProxyConfigurationId_ == nullptr && this->egressProxyGatewayName_ == nullptr && this->listenerProperties_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->tlsInterceptProperties_ == nullptr && this->vpcId_ == nullptr && this->zoneMappings_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEgressProxyGatewayRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEgressProxyGatewayRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateEgressProxyGatewayRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressProxyConfigurationId Field Functions 
    bool hasEgressProxyConfigurationId() const { return this->egressProxyConfigurationId_ != nullptr;};
    void deleteEgressProxyConfigurationId() { this->egressProxyConfigurationId_ = nullptr;};
    inline string getEgressProxyConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(egressProxyConfigurationId_, "") };
    inline CreateEgressProxyGatewayRequest& setEgressProxyConfigurationId(string egressProxyConfigurationId) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationId_, egressProxyConfigurationId) };


    // egressProxyGatewayName Field Functions 
    bool hasEgressProxyGatewayName() const { return this->egressProxyGatewayName_ != nullptr;};
    void deleteEgressProxyGatewayName() { this->egressProxyGatewayName_ = nullptr;};
    inline string getEgressProxyGatewayName() const { DARABONBA_PTR_GET_DEFAULT(egressProxyGatewayName_, "") };
    inline CreateEgressProxyGatewayRequest& setEgressProxyGatewayName(string egressProxyGatewayName) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayName_, egressProxyGatewayName) };


    // listenerProperties Field Functions 
    bool hasListenerProperties() const { return this->listenerProperties_ != nullptr;};
    void deleteListenerProperties() { this->listenerProperties_ = nullptr;};
    inline const vector<CreateEgressProxyGatewayRequest::ListenerProperties> & getListenerProperties() const { DARABONBA_PTR_GET_CONST(listenerProperties_, vector<CreateEgressProxyGatewayRequest::ListenerProperties>) };
    inline vector<CreateEgressProxyGatewayRequest::ListenerProperties> getListenerProperties() { DARABONBA_PTR_GET(listenerProperties_, vector<CreateEgressProxyGatewayRequest::ListenerProperties>) };
    inline CreateEgressProxyGatewayRequest& setListenerProperties(const vector<CreateEgressProxyGatewayRequest::ListenerProperties> & listenerProperties) { DARABONBA_PTR_SET_VALUE(listenerProperties_, listenerProperties) };
    inline CreateEgressProxyGatewayRequest& setListenerProperties(vector<CreateEgressProxyGatewayRequest::ListenerProperties> && listenerProperties) { DARABONBA_PTR_SET_RVALUE(listenerProperties_, listenerProperties) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateEgressProxyGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateEgressProxyGatewayRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateEgressProxyGatewayRequest::Tag>) };
    inline vector<CreateEgressProxyGatewayRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateEgressProxyGatewayRequest::Tag>) };
    inline CreateEgressProxyGatewayRequest& setTag(const vector<CreateEgressProxyGatewayRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateEgressProxyGatewayRequest& setTag(vector<CreateEgressProxyGatewayRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tlsInterceptProperties Field Functions 
    bool hasTlsInterceptProperties() const { return this->tlsInterceptProperties_ != nullptr;};
    void deleteTlsInterceptProperties() { this->tlsInterceptProperties_ = nullptr;};
    inline const CreateEgressProxyGatewayRequest::TlsInterceptProperties & getTlsInterceptProperties() const { DARABONBA_PTR_GET_CONST(tlsInterceptProperties_, CreateEgressProxyGatewayRequest::TlsInterceptProperties) };
    inline CreateEgressProxyGatewayRequest::TlsInterceptProperties getTlsInterceptProperties() { DARABONBA_PTR_GET(tlsInterceptProperties_, CreateEgressProxyGatewayRequest::TlsInterceptProperties) };
    inline CreateEgressProxyGatewayRequest& setTlsInterceptProperties(const CreateEgressProxyGatewayRequest::TlsInterceptProperties & tlsInterceptProperties) { DARABONBA_PTR_SET_VALUE(tlsInterceptProperties_, tlsInterceptProperties) };
    inline CreateEgressProxyGatewayRequest& setTlsInterceptProperties(CreateEgressProxyGatewayRequest::TlsInterceptProperties && tlsInterceptProperties) { DARABONBA_PTR_SET_RVALUE(tlsInterceptProperties_, tlsInterceptProperties) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateEgressProxyGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<CreateEgressProxyGatewayRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<CreateEgressProxyGatewayRequest::ZoneMappings>) };
    inline vector<CreateEgressProxyGatewayRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<CreateEgressProxyGatewayRequest::ZoneMappings>) };
    inline CreateEgressProxyGatewayRequest& setZoneMappings(const vector<CreateEgressProxyGatewayRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline CreateEgressProxyGatewayRequest& setZoneMappings(vector<CreateEgressProxyGatewayRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > Note If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The description of the egress proxy gateway instance.
    // 
    // The description must be 2 to 256 characters in length, and can contain Chinese characters, letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // - **true**: prechecks the request without creating the egress proxy gateway instance. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the DryRunOperation error code is returned.
    // 
    // - **false** (default): sends the request. If the request passes the precheck, the HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the egress proxy configuration that is associated with the egress proxy gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyConfigurationId_ {};
    // The name of the egress proxy gateway instance.
    // 
    // The name must be 2 to 128 characters in length, and must start with a letter or a Chinese character. It can contain Chinese characters, letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> egressProxyGatewayName_ {};
    // The listener configurations of the egress proxy gateway instance.
    // 
    // Listeners in the same gateway instance cannot use the same port.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateEgressProxyGatewayRequest::ListenerProperties>> listenerProperties_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags.
    shared_ptr<vector<CreateEgressProxyGatewayRequest::Tag>> tag_ {};
    // The TLS interception configuration of the egress proxy gateway instance.
    shared_ptr<CreateEgressProxyGatewayRequest::TlsInterceptProperties> tlsInterceptProperties_ {};
    // The ID of the virtual private cloud (VPC) to which the egress proxy gateway instance belongs.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The zone and vSwitch mappings of the egress proxy gateway instance.
    // 
    // If the current region supports two or more zones, add at least two zones to improve availability.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateEgressProxyGatewayRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
