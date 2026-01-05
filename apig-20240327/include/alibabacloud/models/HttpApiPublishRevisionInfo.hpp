// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIPUBLISHREVISIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/HttpApiOperationInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiPublishRevisionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiPublishRevisionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(backendType, backendType_);
      DARABONBA_PTR_TO_JSON(cloudProductConfig, cloudProductConfig_);
      DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(dnsConfigs, dnsConfigs_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(isCurrentVersion, isCurrentVersion_);
      DARABONBA_PTR_TO_JSON(operations, operations_);
      DARABONBA_PTR_TO_JSON(revisionId, revisionId_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
      DARABONBA_PTR_TO_JSON(vipConfigs, vipConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiPublishRevisionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(backendType, backendType_);
      DARABONBA_PTR_FROM_JSON(cloudProductConfig, cloudProductConfig_);
      DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(dnsConfigs, dnsConfigs_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(isCurrentVersion, isCurrentVersion_);
      DARABONBA_PTR_FROM_JSON(operations, operations_);
      DARABONBA_PTR_FROM_JSON(revisionId, revisionId_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
      DARABONBA_PTR_FROM_JSON(vipConfigs, vipConfigs_);
    };
    HttpApiPublishRevisionInfo() = default ;
    HttpApiPublishRevisionInfo(const HttpApiPublishRevisionInfo &) = default ;
    HttpApiPublishRevisionInfo(HttpApiPublishRevisionInfo &&) = default ;
    HttpApiPublishRevisionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiPublishRevisionInfo() = default ;
    HttpApiPublishRevisionInfo& operator=(const HttpApiPublishRevisionInfo &) = default ;
    HttpApiPublishRevisionInfo& operator=(HttpApiPublishRevisionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VipConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VipConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
        DARABONBA_PTR_TO_JSON(match, match_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, VipConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
        DARABONBA_PTR_FROM_JSON(match, match_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      VipConfigs() = default ;
      VipConfigs(const VipConfigs &) = default ;
      VipConfigs(VipConfigs &&) = default ;
      VipConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VipConfigs() = default ;
      VipConfigs& operator=(const VipConfigs &) = default ;
      VipConfigs& operator=(VipConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->match_ == nullptr && this->weight_ == nullptr; };
      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<string> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<string>) };
      inline vector<string> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<string>) };
      inline VipConfigs& setEndpoints(const vector<string> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline VipConfigs& setEndpoints(vector<string> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
      inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
      inline VipConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline VipConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline VipConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<vector<string>> endpoints_ {};
      shared_ptr<HttpApiBackendMatchConditions> match_ {};
      shared_ptr<int32_t> weight_ {};
    };

    class ServiceConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
        DARABONBA_PTR_TO_JSON(match, match_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
        DARABONBA_PTR_FROM_JSON(match, match_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      ServiceConfigs() = default ;
      ServiceConfigs(const ServiceConfigs &) = default ;
      ServiceConfigs(ServiceConfigs &&) = default ;
      ServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceConfigs() = default ;
      ServiceConfigs& operator=(const ServiceConfigs &) = default ;
      ServiceConfigs& operator=(ServiceConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && this->match_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->version_ == nullptr && this->weight_ == nullptr; };
      // gatewayServiceId Field Functions 
      bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
      void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
      inline string getGatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
      inline ServiceConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
      inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
      inline ServiceConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline ServiceConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline ServiceConfigs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ServiceConfigs& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline ServiceConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> gatewayServiceId_ {};
      shared_ptr<HttpApiBackendMatchConditions> match_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> version_ {};
      shared_ptr<int32_t> weight_ {};
    };

    class EnvironmentInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnvironmentInfo& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, EnvironmentInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      EnvironmentInfo() = default ;
      EnvironmentInfo(const EnvironmentInfo &) = default ;
      EnvironmentInfo(EnvironmentInfo &&) = default ;
      EnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnvironmentInfo() = default ;
      EnvironmentInfo& operator=(const EnvironmentInfo &) = default ;
      EnvironmentInfo& operator=(EnvironmentInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GatewayInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GatewayInfo& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, GatewayInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        GatewayInfo() = default ;
        GatewayInfo(const GatewayInfo &) = default ;
        GatewayInfo(GatewayInfo &&) = default ;
        GatewayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GatewayInfo() = default ;
        GatewayInfo& operator=(const GatewayInfo &) = default ;
        GatewayInfo& operator=(GatewayInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->name_ == nullptr; };
        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline GatewayInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline GatewayInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> gatewayId_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->alias_ == nullptr
        && this->environmentId_ == nullptr && this->gatewayInfo_ == nullptr && this->name_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline EnvironmentInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline EnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayInfo Field Functions 
      bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
      void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
      inline const EnvironmentInfo::GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, EnvironmentInfo::GatewayInfo) };
      inline EnvironmentInfo::GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, EnvironmentInfo::GatewayInfo) };
      inline EnvironmentInfo& setGatewayInfo(const EnvironmentInfo::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
      inline EnvironmentInfo& setGatewayInfo(EnvironmentInfo::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline EnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<string> environmentId_ {};
      shared_ptr<EnvironmentInfo::GatewayInfo> gatewayInfo_ {};
      shared_ptr<string> name_ {};
    };

    class DnsConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DnsConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(dnsList, dnsList_);
        DARABONBA_PTR_TO_JSON(match, match_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, DnsConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(dnsList, dnsList_);
        DARABONBA_PTR_FROM_JSON(match, match_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      DnsConfigs() = default ;
      DnsConfigs(const DnsConfigs &) = default ;
      DnsConfigs(DnsConfigs &&) = default ;
      DnsConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DnsConfigs() = default ;
      DnsConfigs& operator=(const DnsConfigs &) = default ;
      DnsConfigs& operator=(DnsConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsList_ == nullptr
        && this->match_ == nullptr && this->weight_ == nullptr; };
      // dnsList Field Functions 
      bool hasDnsList() const { return this->dnsList_ != nullptr;};
      void deleteDnsList() { this->dnsList_ = nullptr;};
      inline const vector<string> & getDnsList() const { DARABONBA_PTR_GET_CONST(dnsList_, vector<string>) };
      inline vector<string> getDnsList() { DARABONBA_PTR_GET(dnsList_, vector<string>) };
      inline DnsConfigs& setDnsList(const vector<string> & dnsList) { DARABONBA_PTR_SET_VALUE(dnsList_, dnsList) };
      inline DnsConfigs& setDnsList(vector<string> && dnsList) { DARABONBA_PTR_SET_RVALUE(dnsList_, dnsList) };


      // match Field Functions 
      bool hasMatch() const { return this->match_ != nullptr;};
      void deleteMatch() { this->match_ = nullptr;};
      inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
      inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
      inline DnsConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
      inline DnsConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline DnsConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<vector<string>> dnsList_ {};
      shared_ptr<HttpApiBackendMatchConditions> match_ {};
      shared_ptr<int32_t> weight_ {};
    };

    class CloudProductConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudProductConfig& obj) { 
        DARABONBA_PTR_TO_JSON(cloudProductType, cloudProductType_);
        DARABONBA_PTR_TO_JSON(containerServiceConfigs, containerServiceConfigs_);
        DARABONBA_PTR_TO_JSON(functionConfigs, functionConfigs_);
        DARABONBA_PTR_TO_JSON(mseNacosConfigs, mseNacosConfigs_);
      };
      friend void from_json(const Darabonba::Json& j, CloudProductConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(cloudProductType, cloudProductType_);
        DARABONBA_PTR_FROM_JSON(containerServiceConfigs, containerServiceConfigs_);
        DARABONBA_PTR_FROM_JSON(functionConfigs, functionConfigs_);
        DARABONBA_PTR_FROM_JSON(mseNacosConfigs, mseNacosConfigs_);
      };
      CloudProductConfig() = default ;
      CloudProductConfig(const CloudProductConfig &) = default ;
      CloudProductConfig(CloudProductConfig &&) = default ;
      CloudProductConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudProductConfig() = default ;
      CloudProductConfig& operator=(const CloudProductConfig &) = default ;
      CloudProductConfig& operator=(CloudProductConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MseNacosConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MseNacosConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_TO_JSON(groupName, groupName_);
          DARABONBA_PTR_TO_JSON(match, match_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, MseNacosConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_FROM_JSON(groupName, groupName_);
          DARABONBA_PTR_FROM_JSON(match, match_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        MseNacosConfigs() = default ;
        MseNacosConfigs(const MseNacosConfigs &) = default ;
        MseNacosConfigs(MseNacosConfigs &&) = default ;
        MseNacosConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MseNacosConfigs() = default ;
        MseNacosConfigs& operator=(const MseNacosConfigs &) = default ;
        MseNacosConfigs& operator=(MseNacosConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && this->groupName_ == nullptr && this->match_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->weight_ == nullptr; };
        // gatewayServiceId Field Functions 
        bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
        void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
        inline string getGatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
        inline MseNacosConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline MseNacosConfigs& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // match Field Functions 
        bool hasMatch() const { return this->match_ != nullptr;};
        void deleteMatch() { this->match_ = nullptr;};
        inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
        inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
        inline MseNacosConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
        inline MseNacosConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MseNacosConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline MseNacosConfigs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline MseNacosConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> gatewayServiceId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<HttpApiBackendMatchConditions> match_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<int32_t> weight_ {};
      };

      class FunctionConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_TO_JSON(match, match_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_FROM_JSON(match, match_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        FunctionConfigs() = default ;
        FunctionConfigs(const FunctionConfigs &) = default ;
        FunctionConfigs(FunctionConfigs &&) = default ;
        FunctionConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionConfigs() = default ;
        FunctionConfigs& operator=(const FunctionConfigs &) = default ;
        FunctionConfigs& operator=(FunctionConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && this->match_ == nullptr && this->name_ == nullptr && this->qualifier_ == nullptr && this->weight_ == nullptr; };
        // gatewayServiceId Field Functions 
        bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
        void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
        inline string getGatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
        inline FunctionConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


        // match Field Functions 
        bool hasMatch() const { return this->match_ != nullptr;};
        void deleteMatch() { this->match_ = nullptr;};
        inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
        inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
        inline FunctionConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
        inline FunctionConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FunctionConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // qualifier Field Functions 
        bool hasQualifier() const { return this->qualifier_ != nullptr;};
        void deleteQualifier() { this->qualifier_ = nullptr;};
        inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
        inline FunctionConfigs& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline FunctionConfigs& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> gatewayServiceId_ {};
        shared_ptr<HttpApiBackendMatchConditions> match_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> qualifier_ {};
        shared_ptr<int32_t> weight_ {};
      };

      class ContainerServiceConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContainerServiceConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_TO_JSON(match, match_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(namespace, namespace_);
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, ContainerServiceConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_FROM_JSON(match, match_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        ContainerServiceConfigs() = default ;
        ContainerServiceConfigs(const ContainerServiceConfigs &) = default ;
        ContainerServiceConfigs(ContainerServiceConfigs &&) = default ;
        ContainerServiceConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContainerServiceConfigs() = default ;
        ContainerServiceConfigs& operator=(const ContainerServiceConfigs &) = default ;
        ContainerServiceConfigs& operator=(ContainerServiceConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gatewayServiceId_ == nullptr
        && this->match_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr
        && this->weight_ == nullptr; };
        // gatewayServiceId Field Functions 
        bool hasGatewayServiceId() const { return this->gatewayServiceId_ != nullptr;};
        void deleteGatewayServiceId() { this->gatewayServiceId_ = nullptr;};
        inline string getGatewayServiceId() const { DARABONBA_PTR_GET_DEFAULT(gatewayServiceId_, "") };
        inline ContainerServiceConfigs& setGatewayServiceId(string gatewayServiceId) { DARABONBA_PTR_SET_VALUE(gatewayServiceId_, gatewayServiceId) };


        // match Field Functions 
        bool hasMatch() const { return this->match_ != nullptr;};
        void deleteMatch() { this->match_ = nullptr;};
        inline const HttpApiBackendMatchConditions & getMatch() const { DARABONBA_PTR_GET_CONST(match_, HttpApiBackendMatchConditions) };
        inline HttpApiBackendMatchConditions getMatch() { DARABONBA_PTR_GET(match_, HttpApiBackendMatchConditions) };
        inline ContainerServiceConfigs& setMatch(const HttpApiBackendMatchConditions & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
        inline ContainerServiceConfigs& setMatch(HttpApiBackendMatchConditions && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ContainerServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline ContainerServiceConfigs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline ContainerServiceConfigs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ContainerServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
        inline ContainerServiceConfigs& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> gatewayServiceId_ {};
        shared_ptr<HttpApiBackendMatchConditions> match_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<int32_t> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> weight_ {};
      };

      virtual bool empty() const override { return this->cloudProductType_ == nullptr
        && this->containerServiceConfigs_ == nullptr && this->functionConfigs_ == nullptr && this->mseNacosConfigs_ == nullptr; };
      // cloudProductType Field Functions 
      bool hasCloudProductType() const { return this->cloudProductType_ != nullptr;};
      void deleteCloudProductType() { this->cloudProductType_ = nullptr;};
      inline string getCloudProductType() const { DARABONBA_PTR_GET_DEFAULT(cloudProductType_, "") };
      inline CloudProductConfig& setCloudProductType(string cloudProductType) { DARABONBA_PTR_SET_VALUE(cloudProductType_, cloudProductType) };


      // containerServiceConfigs Field Functions 
      bool hasContainerServiceConfigs() const { return this->containerServiceConfigs_ != nullptr;};
      void deleteContainerServiceConfigs() { this->containerServiceConfigs_ = nullptr;};
      inline const vector<CloudProductConfig::ContainerServiceConfigs> & getContainerServiceConfigs() const { DARABONBA_PTR_GET_CONST(containerServiceConfigs_, vector<CloudProductConfig::ContainerServiceConfigs>) };
      inline vector<CloudProductConfig::ContainerServiceConfigs> getContainerServiceConfigs() { DARABONBA_PTR_GET(containerServiceConfigs_, vector<CloudProductConfig::ContainerServiceConfigs>) };
      inline CloudProductConfig& setContainerServiceConfigs(const vector<CloudProductConfig::ContainerServiceConfigs> & containerServiceConfigs) { DARABONBA_PTR_SET_VALUE(containerServiceConfigs_, containerServiceConfigs) };
      inline CloudProductConfig& setContainerServiceConfigs(vector<CloudProductConfig::ContainerServiceConfigs> && containerServiceConfigs) { DARABONBA_PTR_SET_RVALUE(containerServiceConfigs_, containerServiceConfigs) };


      // functionConfigs Field Functions 
      bool hasFunctionConfigs() const { return this->functionConfigs_ != nullptr;};
      void deleteFunctionConfigs() { this->functionConfigs_ = nullptr;};
      inline const vector<CloudProductConfig::FunctionConfigs> & getFunctionConfigs() const { DARABONBA_PTR_GET_CONST(functionConfigs_, vector<CloudProductConfig::FunctionConfigs>) };
      inline vector<CloudProductConfig::FunctionConfigs> getFunctionConfigs() { DARABONBA_PTR_GET(functionConfigs_, vector<CloudProductConfig::FunctionConfigs>) };
      inline CloudProductConfig& setFunctionConfigs(const vector<CloudProductConfig::FunctionConfigs> & functionConfigs) { DARABONBA_PTR_SET_VALUE(functionConfigs_, functionConfigs) };
      inline CloudProductConfig& setFunctionConfigs(vector<CloudProductConfig::FunctionConfigs> && functionConfigs) { DARABONBA_PTR_SET_RVALUE(functionConfigs_, functionConfigs) };


      // mseNacosConfigs Field Functions 
      bool hasMseNacosConfigs() const { return this->mseNacosConfigs_ != nullptr;};
      void deleteMseNacosConfigs() { this->mseNacosConfigs_ = nullptr;};
      inline const vector<CloudProductConfig::MseNacosConfigs> & getMseNacosConfigs() const { DARABONBA_PTR_GET_CONST(mseNacosConfigs_, vector<CloudProductConfig::MseNacosConfigs>) };
      inline vector<CloudProductConfig::MseNacosConfigs> getMseNacosConfigs() { DARABONBA_PTR_GET(mseNacosConfigs_, vector<CloudProductConfig::MseNacosConfigs>) };
      inline CloudProductConfig& setMseNacosConfigs(const vector<CloudProductConfig::MseNacosConfigs> & mseNacosConfigs) { DARABONBA_PTR_SET_VALUE(mseNacosConfigs_, mseNacosConfigs) };
      inline CloudProductConfig& setMseNacosConfigs(vector<CloudProductConfig::MseNacosConfigs> && mseNacosConfigs) { DARABONBA_PTR_SET_RVALUE(mseNacosConfigs_, mseNacosConfigs) };


    protected:
      shared_ptr<string> cloudProductType_ {};
      shared_ptr<vector<CloudProductConfig::ContainerServiceConfigs>> containerServiceConfigs_ {};
      shared_ptr<vector<CloudProductConfig::FunctionConfigs>> functionConfigs_ {};
      shared_ptr<vector<CloudProductConfig::MseNacosConfigs>> mseNacosConfigs_ {};
    };

    virtual bool empty() const override { return this->backendScene_ == nullptr
        && this->backendType_ == nullptr && this->cloudProductConfig_ == nullptr && this->createTimestamp_ == nullptr && this->customDomains_ == nullptr && this->dnsConfigs_ == nullptr
        && this->environmentInfo_ == nullptr && this->isCurrentVersion_ == nullptr && this->operations_ == nullptr && this->revisionId_ == nullptr && this->serviceConfigs_ == nullptr
        && this->subDomains_ == nullptr && this->vipConfigs_ == nullptr; };
    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string getBackendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline HttpApiPublishRevisionInfo& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline HttpApiPublishRevisionInfo& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // cloudProductConfig Field Functions 
    bool hasCloudProductConfig() const { return this->cloudProductConfig_ != nullptr;};
    void deleteCloudProductConfig() { this->cloudProductConfig_ = nullptr;};
    inline const HttpApiPublishRevisionInfo::CloudProductConfig & getCloudProductConfig() const { DARABONBA_PTR_GET_CONST(cloudProductConfig_, HttpApiPublishRevisionInfo::CloudProductConfig) };
    inline HttpApiPublishRevisionInfo::CloudProductConfig getCloudProductConfig() { DARABONBA_PTR_GET(cloudProductConfig_, HttpApiPublishRevisionInfo::CloudProductConfig) };
    inline HttpApiPublishRevisionInfo& setCloudProductConfig(const HttpApiPublishRevisionInfo::CloudProductConfig & cloudProductConfig) { DARABONBA_PTR_SET_VALUE(cloudProductConfig_, cloudProductConfig) };
    inline HttpApiPublishRevisionInfo& setCloudProductConfig(HttpApiPublishRevisionInfo::CloudProductConfig && cloudProductConfig) { DARABONBA_PTR_SET_RVALUE(cloudProductConfig_, cloudProductConfig) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline HttpApiPublishRevisionInfo& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<HttpApiDomainInfo> & getCustomDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<HttpApiDomainInfo>) };
    inline vector<HttpApiDomainInfo> getCustomDomains() { DARABONBA_PTR_GET(customDomains_, vector<HttpApiDomainInfo>) };
    inline HttpApiPublishRevisionInfo& setCustomDomains(const vector<HttpApiDomainInfo> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline HttpApiPublishRevisionInfo& setCustomDomains(vector<HttpApiDomainInfo> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // dnsConfigs Field Functions 
    bool hasDnsConfigs() const { return this->dnsConfigs_ != nullptr;};
    void deleteDnsConfigs() { this->dnsConfigs_ = nullptr;};
    inline const vector<HttpApiPublishRevisionInfo::DnsConfigs> & getDnsConfigs() const { DARABONBA_PTR_GET_CONST(dnsConfigs_, vector<HttpApiPublishRevisionInfo::DnsConfigs>) };
    inline vector<HttpApiPublishRevisionInfo::DnsConfigs> getDnsConfigs() { DARABONBA_PTR_GET(dnsConfigs_, vector<HttpApiPublishRevisionInfo::DnsConfigs>) };
    inline HttpApiPublishRevisionInfo& setDnsConfigs(const vector<HttpApiPublishRevisionInfo::DnsConfigs> & dnsConfigs) { DARABONBA_PTR_SET_VALUE(dnsConfigs_, dnsConfigs) };
    inline HttpApiPublishRevisionInfo& setDnsConfigs(vector<HttpApiPublishRevisionInfo::DnsConfigs> && dnsConfigs) { DARABONBA_PTR_SET_RVALUE(dnsConfigs_, dnsConfigs) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const HttpApiPublishRevisionInfo::EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, HttpApiPublishRevisionInfo::EnvironmentInfo) };
    inline HttpApiPublishRevisionInfo::EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, HttpApiPublishRevisionInfo::EnvironmentInfo) };
    inline HttpApiPublishRevisionInfo& setEnvironmentInfo(const HttpApiPublishRevisionInfo::EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline HttpApiPublishRevisionInfo& setEnvironmentInfo(HttpApiPublishRevisionInfo::EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // isCurrentVersion Field Functions 
    bool hasIsCurrentVersion() const { return this->isCurrentVersion_ != nullptr;};
    void deleteIsCurrentVersion() { this->isCurrentVersion_ = nullptr;};
    inline bool getIsCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(isCurrentVersion_, false) };
    inline HttpApiPublishRevisionInfo& setIsCurrentVersion(bool isCurrentVersion) { DARABONBA_PTR_SET_VALUE(isCurrentVersion_, isCurrentVersion) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<HttpApiOperationInfo> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<HttpApiOperationInfo>) };
    inline vector<HttpApiOperationInfo> getOperations() { DARABONBA_PTR_GET(operations_, vector<HttpApiOperationInfo>) };
    inline HttpApiPublishRevisionInfo& setOperations(const vector<HttpApiOperationInfo> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline HttpApiPublishRevisionInfo& setOperations(vector<HttpApiOperationInfo> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // revisionId Field Functions 
    bool hasRevisionId() const { return this->revisionId_ != nullptr;};
    void deleteRevisionId() { this->revisionId_ = nullptr;};
    inline string getRevisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
    inline HttpApiPublishRevisionInfo& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<HttpApiPublishRevisionInfo::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<HttpApiPublishRevisionInfo::ServiceConfigs>) };
    inline vector<HttpApiPublishRevisionInfo::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<HttpApiPublishRevisionInfo::ServiceConfigs>) };
    inline HttpApiPublishRevisionInfo& setServiceConfigs(const vector<HttpApiPublishRevisionInfo::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline HttpApiPublishRevisionInfo& setServiceConfigs(vector<HttpApiPublishRevisionInfo::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // subDomains Field Functions 
    bool hasSubDomains() const { return this->subDomains_ != nullptr;};
    void deleteSubDomains() { this->subDomains_ = nullptr;};
    inline const vector<HttpApiDomainInfo> & getSubDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<HttpApiDomainInfo>) };
    inline vector<HttpApiDomainInfo> getSubDomains() { DARABONBA_PTR_GET(subDomains_, vector<HttpApiDomainInfo>) };
    inline HttpApiPublishRevisionInfo& setSubDomains(const vector<HttpApiDomainInfo> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
    inline HttpApiPublishRevisionInfo& setSubDomains(vector<HttpApiDomainInfo> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


    // vipConfigs Field Functions 
    bool hasVipConfigs() const { return this->vipConfigs_ != nullptr;};
    void deleteVipConfigs() { this->vipConfigs_ = nullptr;};
    inline const vector<HttpApiPublishRevisionInfo::VipConfigs> & getVipConfigs() const { DARABONBA_PTR_GET_CONST(vipConfigs_, vector<HttpApiPublishRevisionInfo::VipConfigs>) };
    inline vector<HttpApiPublishRevisionInfo::VipConfigs> getVipConfigs() { DARABONBA_PTR_GET(vipConfigs_, vector<HttpApiPublishRevisionInfo::VipConfigs>) };
    inline HttpApiPublishRevisionInfo& setVipConfigs(const vector<HttpApiPublishRevisionInfo::VipConfigs> & vipConfigs) { DARABONBA_PTR_SET_VALUE(vipConfigs_, vipConfigs) };
    inline HttpApiPublishRevisionInfo& setVipConfigs(vector<HttpApiPublishRevisionInfo::VipConfigs> && vipConfigs) { DARABONBA_PTR_SET_RVALUE(vipConfigs_, vipConfigs) };


  protected:
    shared_ptr<string> backendScene_ {};
    shared_ptr<string> backendType_ {};
    shared_ptr<HttpApiPublishRevisionInfo::CloudProductConfig> cloudProductConfig_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<vector<HttpApiDomainInfo>> customDomains_ {};
    shared_ptr<vector<HttpApiPublishRevisionInfo::DnsConfigs>> dnsConfigs_ {};
    shared_ptr<HttpApiPublishRevisionInfo::EnvironmentInfo> environmentInfo_ {};
    shared_ptr<bool> isCurrentVersion_ {};
    shared_ptr<vector<HttpApiOperationInfo>> operations_ {};
    shared_ptr<string> revisionId_ {};
    shared_ptr<vector<HttpApiPublishRevisionInfo::ServiceConfigs>> serviceConfigs_ {};
    shared_ptr<vector<HttpApiDomainInfo>> subDomains_ {};
    shared_ptr<vector<HttpApiPublishRevisionInfo::VipConfigs>> vipConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
