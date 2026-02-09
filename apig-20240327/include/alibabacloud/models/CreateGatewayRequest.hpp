// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(logConfig, logConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkAccessConfig, networkAccessConfig_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneConfig, zoneConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(logConfig, logConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkAccessConfig, networkAccessConfig_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneConfig, zoneConfig_);
    };
    CreateGatewayRequest() = default ;
    CreateGatewayRequest(const CreateGatewayRequest &) = default ;
    CreateGatewayRequest(CreateGatewayRequest &&) = default ;
    CreateGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayRequest() = default ;
    CreateGatewayRequest& operator=(const CreateGatewayRequest &) = default ;
    CreateGatewayRequest& operator=(CreateGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneConfig& obj) { 
        DARABONBA_PTR_TO_JSON(selectOption, selectOption_);
        DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(selectOption, selectOption_);
        DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(zones, zones_);
      };
      ZoneConfig() = default ;
      ZoneConfig(const ZoneConfig &) = default ;
      ZoneConfig(ZoneConfig &&) = default ;
      ZoneConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneConfig() = default ;
      ZoneConfig& operator=(const ZoneConfig &) = default ;
      ZoneConfig& operator=(ZoneConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zones& obj) { 
          DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zones& obj) { 
          DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
        };
        Zones() = default ;
        Zones(const Zones &) = default ;
        Zones(Zones &&) = default ;
        Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zones() = default ;
        Zones& operator=(const Zones &) = default ;
        Zones& operator=(Zones &&) = default ;
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
        inline Zones& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->selectOption_ == nullptr
        && this->vSwitchId_ == nullptr && this->zones_ == nullptr; };
      // selectOption Field Functions 
      bool hasSelectOption() const { return this->selectOption_ != nullptr;};
      void deleteSelectOption() { this->selectOption_ = nullptr;};
      inline string getSelectOption() const { DARABONBA_PTR_GET_DEFAULT(selectOption_, "") };
      inline ZoneConfig& setSelectOption(string selectOption) { DARABONBA_PTR_SET_VALUE(selectOption_, selectOption) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<ZoneConfig::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<ZoneConfig::Zones>) };
      inline vector<ZoneConfig::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<ZoneConfig::Zones>) };
      inline ZoneConfig& setZones(const vector<ZoneConfig::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline ZoneConfig& setZones(vector<ZoneConfig::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The response payload.
      shared_ptr<string> selectOption_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<vector<ZoneConfig::Zones>> zones_ {};
    };

    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(key, key_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(key, key_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class NetworkAccessConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAccessConfig& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkAccessConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      NetworkAccessConfig() = default ;
      NetworkAccessConfig(const NetworkAccessConfig &) = default ;
      NetworkAccessConfig(NetworkAccessConfig &&) = default ;
      NetworkAccessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAccessConfig() = default ;
      NetworkAccessConfig& operator=(const NetworkAccessConfig &) = default ;
      NetworkAccessConfig& operator=(NetworkAccessConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NetworkAccessConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // -
      shared_ptr<string> type_ {};
    };

    class LogConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogConfig& obj) { 
        DARABONBA_PTR_TO_JSON(sls, sls_);
      };
      friend void from_json(const Darabonba::Json& j, LogConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(sls, sls_);
      };
      LogConfig() = default ;
      LogConfig(const LogConfig &) = default ;
      LogConfig(LogConfig &&) = default ;
      LogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogConfig() = default ;
      LogConfig& operator=(const LogConfig &) = default ;
      LogConfig& operator=(LogConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sls : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sls& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, Sls& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
        };
        Sls() = default ;
        Sls(const Sls &) = default ;
        Sls(Sls &&) = default ;
        Sls(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sls() = default ;
        Sls& operator=(const Sls &) = default ;
        Sls& operator=(Sls &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Sls& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        shared_ptr<bool> enable_ {};
      };

      virtual bool empty() const override { return this->sls_ == nullptr; };
      // sls Field Functions 
      bool hasSls() const { return this->sls_ != nullptr;};
      void deleteSls() { this->sls_ = nullptr;};
      inline const LogConfig::Sls & getSls() const { DARABONBA_PTR_GET_CONST(sls_, LogConfig::Sls) };
      inline LogConfig::Sls getSls() { DARABONBA_PTR_GET(sls_, LogConfig::Sls) };
      inline LogConfig& setSls(const LogConfig::Sls & sls) { DARABONBA_PTR_SET_VALUE(sls_, sls) };
      inline LogConfig& setSls(LogConfig::Sls && sls) { DARABONBA_PTR_SET_RVALUE(sls_, sls) };


    protected:
      shared_ptr<LogConfig::Sls> sls_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->gatewayEdition_ == nullptr && this->gatewayType_ == nullptr && this->logConfig_ == nullptr && this->name_ == nullptr && this->networkAccessConfig_ == nullptr
        && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->tag_ == nullptr && this->vpcId_ == nullptr && this->zoneConfig_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateGatewayRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // gatewayEdition Field Functions 
    bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
    void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
    inline string getGatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
    inline CreateGatewayRequest& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreateGatewayRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // logConfig Field Functions 
    bool hasLogConfig() const { return this->logConfig_ != nullptr;};
    void deleteLogConfig() { this->logConfig_ = nullptr;};
    inline const CreateGatewayRequest::LogConfig & getLogConfig() const { DARABONBA_PTR_GET_CONST(logConfig_, CreateGatewayRequest::LogConfig) };
    inline CreateGatewayRequest::LogConfig getLogConfig() { DARABONBA_PTR_GET(logConfig_, CreateGatewayRequest::LogConfig) };
    inline CreateGatewayRequest& setLogConfig(const CreateGatewayRequest::LogConfig & logConfig) { DARABONBA_PTR_SET_VALUE(logConfig_, logConfig) };
    inline CreateGatewayRequest& setLogConfig(CreateGatewayRequest::LogConfig && logConfig) { DARABONBA_PTR_SET_RVALUE(logConfig_, logConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateGatewayRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkAccessConfig Field Functions 
    bool hasNetworkAccessConfig() const { return this->networkAccessConfig_ != nullptr;};
    void deleteNetworkAccessConfig() { this->networkAccessConfig_ = nullptr;};
    inline const CreateGatewayRequest::NetworkAccessConfig & getNetworkAccessConfig() const { DARABONBA_PTR_GET_CONST(networkAccessConfig_, CreateGatewayRequest::NetworkAccessConfig) };
    inline CreateGatewayRequest::NetworkAccessConfig getNetworkAccessConfig() { DARABONBA_PTR_GET(networkAccessConfig_, CreateGatewayRequest::NetworkAccessConfig) };
    inline CreateGatewayRequest& setNetworkAccessConfig(const CreateGatewayRequest::NetworkAccessConfig & networkAccessConfig) { DARABONBA_PTR_SET_VALUE(networkAccessConfig_, networkAccessConfig) };
    inline CreateGatewayRequest& setNetworkAccessConfig(CreateGatewayRequest::NetworkAccessConfig && networkAccessConfig) { DARABONBA_PTR_SET_RVALUE(networkAccessConfig_, networkAccessConfig) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGatewayRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateGatewayRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateGatewayRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateGatewayRequest::Tag>) };
    inline vector<CreateGatewayRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateGatewayRequest::Tag>) };
    inline CreateGatewayRequest& setTag(const vector<CreateGatewayRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateGatewayRequest& setTag(vector<CreateGatewayRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGatewayRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneConfig Field Functions 
    bool hasZoneConfig() const { return this->zoneConfig_ != nullptr;};
    void deleteZoneConfig() { this->zoneConfig_ = nullptr;};
    inline const CreateGatewayRequest::ZoneConfig & getZoneConfig() const { DARABONBA_PTR_GET_CONST(zoneConfig_, CreateGatewayRequest::ZoneConfig) };
    inline CreateGatewayRequest::ZoneConfig getZoneConfig() { DARABONBA_PTR_GET(zoneConfig_, CreateGatewayRequest::ZoneConfig) };
    inline CreateGatewayRequest& setZoneConfig(const CreateGatewayRequest::ZoneConfig & zoneConfig) { DARABONBA_PTR_SET_VALUE(zoneConfig_, zoneConfig) };
    inline CreateGatewayRequest& setZoneConfig(CreateGatewayRequest::ZoneConfig && zoneConfig) { DARABONBA_PTR_SET_RVALUE(zoneConfig_, zoneConfig) };


  protected:
    // The logging configurations.
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> gatewayEdition_ {};
    // The ID of the resource group.
    shared_ptr<string> gatewayType_ {};
    shared_ptr<CreateGatewayRequest::LogConfig> logConfig_ {};
    // The ID of the vSwitch.
    shared_ptr<string> name_ {};
    // The gateway edition.
    shared_ptr<CreateGatewayRequest::NetworkAccessConfig> networkAccessConfig_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The tag key.
    shared_ptr<string> spec_ {};
    shared_ptr<vector<CreateGatewayRequest::Tag>> tag_ {};
    // The tag value.
    shared_ptr<string> vpcId_ {};
    // The status message.
    shared_ptr<CreateGatewayRequest::ZoneConfig> zoneConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
