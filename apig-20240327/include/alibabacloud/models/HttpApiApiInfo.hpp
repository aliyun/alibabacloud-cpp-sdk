// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIAPIINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIAPIINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HttpApiBackendMatchConditions.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/AuthConfig.hpp>
#include <map>
#include <alibabacloud/models/HttpApiApiInfoDeployCntMapValue.hpp>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpApiVersionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiApiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiApiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabelAuth, enabelAuth_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(ingressInfo, ingressInfo_);
      DARABONBA_PTR_TO_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionInfo, versionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiApiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabelAuth, enabelAuth_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(ingressInfo, ingressInfo_);
      DARABONBA_PTR_FROM_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionInfo, versionInfo_);
    };
    HttpApiApiInfo() = default ;
    HttpApiApiInfo(const HttpApiApiInfo &) = default ;
    HttpApiApiInfo(HttpApiApiInfo &&) = default ;
    HttpApiApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiApiInfo() = default ;
    HttpApiApiInfo& operator=(const HttpApiApiInfo &) = default ;
    HttpApiApiInfo& operator=(HttpApiApiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IngressInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressInfo& obj) { 
        DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
        DARABONBA_PTR_TO_JSON(k8sClusterInfo, k8sClusterInfo_);
        DARABONBA_PTR_TO_JSON(overrideIngressIp, overrideIngressIp_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
      };
      friend void from_json(const Darabonba::Json& j, IngressInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
        DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
        DARABONBA_PTR_FROM_JSON(k8sClusterInfo, k8sClusterInfo_);
        DARABONBA_PTR_FROM_JSON(overrideIngressIp, overrideIngressIp_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
      };
      IngressInfo() = default ;
      IngressInfo(const IngressInfo &) = default ;
      IngressInfo(IngressInfo &&) = default ;
      IngressInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressInfo() = default ;
      IngressInfo& operator=(const IngressInfo &) = default ;
      IngressInfo& operator=(IngressInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class K8sClusterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const K8sClusterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
        };
        friend void from_json(const Darabonba::Json& j, K8sClusterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
        };
        K8sClusterInfo() = default ;
        K8sClusterInfo(const K8sClusterInfo &) = default ;
        K8sClusterInfo(K8sClusterInfo &&) = default ;
        K8sClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~K8sClusterInfo() = default ;
        K8sClusterInfo& operator=(const K8sClusterInfo &) = default ;
        K8sClusterInfo& operator=(K8sClusterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline K8sClusterInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      protected:
        shared_ptr<string> clusterId_ {};
      };

      class EnvironmentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnvironmentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        };
        friend void from_json(const Darabonba::Json& j, EnvironmentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
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
        virtual bool empty() const override { return this->environmentId_ == nullptr; };
        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline EnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      protected:
        shared_ptr<string> environmentId_ {};
      };

      virtual bool empty() const override { return this->environmentInfo_ == nullptr
        && this->ingressClass_ == nullptr && this->k8sClusterInfo_ == nullptr && this->overrideIngressIp_ == nullptr && this->sourceId_ == nullptr && this->watchNamespace_ == nullptr; };
      // environmentInfo Field Functions 
      bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
      void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
      inline const IngressInfo::EnvironmentInfo & getEnvironmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, IngressInfo::EnvironmentInfo) };
      inline IngressInfo::EnvironmentInfo getEnvironmentInfo() { DARABONBA_PTR_GET(environmentInfo_, IngressInfo::EnvironmentInfo) };
      inline IngressInfo& setEnvironmentInfo(const IngressInfo::EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
      inline IngressInfo& setEnvironmentInfo(IngressInfo::EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


      // ingressClass Field Functions 
      bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
      void deleteIngressClass() { this->ingressClass_ = nullptr;};
      inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
      inline IngressInfo& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


      // k8sClusterInfo Field Functions 
      bool hasK8sClusterInfo() const { return this->k8sClusterInfo_ != nullptr;};
      void deleteK8sClusterInfo() { this->k8sClusterInfo_ = nullptr;};
      inline const IngressInfo::K8sClusterInfo & getK8sClusterInfo() const { DARABONBA_PTR_GET_CONST(k8sClusterInfo_, IngressInfo::K8sClusterInfo) };
      inline IngressInfo::K8sClusterInfo getK8sClusterInfo() { DARABONBA_PTR_GET(k8sClusterInfo_, IngressInfo::K8sClusterInfo) };
      inline IngressInfo& setK8sClusterInfo(const IngressInfo::K8sClusterInfo & k8sClusterInfo) { DARABONBA_PTR_SET_VALUE(k8sClusterInfo_, k8sClusterInfo) };
      inline IngressInfo& setK8sClusterInfo(IngressInfo::K8sClusterInfo && k8sClusterInfo) { DARABONBA_PTR_SET_RVALUE(k8sClusterInfo_, k8sClusterInfo) };


      // overrideIngressIp Field Functions 
      bool hasOverrideIngressIp() const { return this->overrideIngressIp_ != nullptr;};
      void deleteOverrideIngressIp() { this->overrideIngressIp_ = nullptr;};
      inline bool getOverrideIngressIp() const { DARABONBA_PTR_GET_DEFAULT(overrideIngressIp_, false) };
      inline IngressInfo& setOverrideIngressIp(bool overrideIngressIp) { DARABONBA_PTR_SET_VALUE(overrideIngressIp_, overrideIngressIp) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline IngressInfo& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // watchNamespace Field Functions 
      bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
      void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
      inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
      inline IngressInfo& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


    protected:
      shared_ptr<IngressInfo::EnvironmentInfo> environmentInfo_ {};
      shared_ptr<string> ingressClass_ {};
      shared_ptr<IngressInfo::K8sClusterInfo> k8sClusterInfo_ {};
      shared_ptr<bool> overrideIngressIp_ {};
      shared_ptr<string> sourceId_ {};
      shared_ptr<string> watchNamespace_ {};
    };

    class Environments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Environments& obj) { 
        DARABONBA_PTR_TO_JSON(alias, alias_);
        DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
        DARABONBA_PTR_TO_JSON(backendType, backendType_);
        DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
        DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
        DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
      };
      friend void from_json(const Darabonba::Json& j, Environments& obj) { 
        DARABONBA_PTR_FROM_JSON(alias, alias_);
        DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
        DARABONBA_PTR_FROM_JSON(backendType, backendType_);
        DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
        DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
        DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
      };
      Environments() = default ;
      Environments(const Environments &) = default ;
      Environments(Environments &&) = default ;
      Environments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Environments() = default ;
      Environments& operator=(const Environments &) = default ;
      Environments& operator=(Environments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubDomains : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubDomains& obj) { 
          DARABONBA_PTR_TO_JSON(domainId, domainId_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(networkType, networkType_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, SubDomains& obj) { 
          DARABONBA_PTR_FROM_JSON(domainId, domainId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(networkType, networkType_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        };
        SubDomains() = default ;
        SubDomains(const SubDomains &) = default ;
        SubDomains(SubDomains &&) = default ;
        SubDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubDomains() = default ;
        SubDomains& operator=(const SubDomains &) = default ;
        SubDomains& operator=(SubDomains &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainId_ == nullptr
        && this->name_ == nullptr && this->networkType_ == nullptr && this->protocol_ == nullptr; };
        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
        inline SubDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SubDomains& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SubDomains& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline SubDomains& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        shared_ptr<string> domainId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> protocol_ {};
      };

      class ServiceConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_TO_JSON(match, match_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(port, port_);
          DARABONBA_PTR_TO_JSON(protocol, protocol_);
          DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(gatewayServiceId, gatewayServiceId_);
          DARABONBA_PTR_FROM_JSON(match, match_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(port, port_);
          DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
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
        && this->match_ == nullptr && this->name_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr && this->serviceId_ == nullptr
        && this->version_ == nullptr && this->weight_ == nullptr; };
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


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ServiceConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline ServiceConfigs& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline ServiceConfigs& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline ServiceConfigs& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


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
        shared_ptr<string> name_ {};
        shared_ptr<string> port_ {};
        shared_ptr<string> protocol_ {};
        shared_ptr<string> serviceId_ {};
        shared_ptr<string> version_ {};
        shared_ptr<int32_t> weight_ {};
      };

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
        && this->backendScene_ == nullptr && this->backendType_ == nullptr && this->customDomains_ == nullptr && this->deployStatus_ == nullptr && this->environmentId_ == nullptr
        && this->gatewayInfo_ == nullptr && this->name_ == nullptr && this->serviceConfigs_ == nullptr && this->subDomains_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Environments& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // backendScene Field Functions 
      bool hasBackendScene() const { return this->backendScene_ != nullptr;};
      void deleteBackendScene() { this->backendScene_ = nullptr;};
      inline string getBackendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
      inline Environments& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


      // backendType Field Functions 
      bool hasBackendType() const { return this->backendType_ != nullptr;};
      void deleteBackendType() { this->backendType_ = nullptr;};
      inline string getBackendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
      inline Environments& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


      // customDomains Field Functions 
      bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
      void deleteCustomDomains() { this->customDomains_ = nullptr;};
      inline const vector<HttpApiDomainInfo> & getCustomDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<HttpApiDomainInfo>) };
      inline vector<HttpApiDomainInfo> getCustomDomains() { DARABONBA_PTR_GET(customDomains_, vector<HttpApiDomainInfo>) };
      inline Environments& setCustomDomains(const vector<HttpApiDomainInfo> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
      inline Environments& setCustomDomains(vector<HttpApiDomainInfo> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline Environments& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline Environments& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // gatewayInfo Field Functions 
      bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
      void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
      inline const Environments::GatewayInfo & getGatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Environments::GatewayInfo) };
      inline Environments::GatewayInfo getGatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Environments::GatewayInfo) };
      inline Environments& setGatewayInfo(const Environments::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
      inline Environments& setGatewayInfo(Environments::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Environments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // serviceConfigs Field Functions 
      bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
      void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
      inline const vector<Environments::ServiceConfigs> & getServiceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<Environments::ServiceConfigs>) };
      inline vector<Environments::ServiceConfigs> getServiceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<Environments::ServiceConfigs>) };
      inline Environments& setServiceConfigs(const vector<Environments::ServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
      inline Environments& setServiceConfigs(vector<Environments::ServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


      // subDomains Field Functions 
      bool hasSubDomains() const { return this->subDomains_ != nullptr;};
      void deleteSubDomains() { this->subDomains_ = nullptr;};
      inline const vector<Environments::SubDomains> & getSubDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<Environments::SubDomains>) };
      inline vector<Environments::SubDomains> getSubDomains() { DARABONBA_PTR_GET(subDomains_, vector<Environments::SubDomains>) };
      inline Environments& setSubDomains(const vector<Environments::SubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
      inline Environments& setSubDomains(vector<Environments::SubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


    protected:
      shared_ptr<string> alias_ {};
      shared_ptr<string> backendScene_ {};
      shared_ptr<string> backendType_ {};
      shared_ptr<vector<HttpApiDomainInfo>> customDomains_ {};
      shared_ptr<string> deployStatus_ {};
      shared_ptr<string> environmentId_ {};
      shared_ptr<Environments::GatewayInfo> gatewayInfo_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Environments::ServiceConfigs>> serviceConfigs_ {};
      shared_ptr<vector<Environments::SubDomains>> subDomains_ {};
    };

    virtual bool empty() const override { return this->agentProtocols_ == nullptr
        && this->aiProtocols_ == nullptr && this->authConfig_ == nullptr && this->basePath_ == nullptr && this->deployCntMap_ == nullptr && this->deployConfigs_ == nullptr
        && this->description_ == nullptr && this->enabelAuth_ == nullptr && this->environments_ == nullptr && this->gatewayId_ == nullptr && this->httpApiId_ == nullptr
        && this->ingressInfo_ == nullptr && this->modelCategory_ == nullptr && this->name_ == nullptr && this->protocols_ == nullptr && this->resourceGroupId_ == nullptr
        && this->type_ == nullptr && this->versionInfo_ == nullptr; };
    // agentProtocols Field Functions 
    bool hasAgentProtocols() const { return this->agentProtocols_ != nullptr;};
    void deleteAgentProtocols() { this->agentProtocols_ = nullptr;};
    inline const vector<string> & getAgentProtocols() const { DARABONBA_PTR_GET_CONST(agentProtocols_, vector<string>) };
    inline vector<string> getAgentProtocols() { DARABONBA_PTR_GET(agentProtocols_, vector<string>) };
    inline HttpApiApiInfo& setAgentProtocols(const vector<string> & agentProtocols) { DARABONBA_PTR_SET_VALUE(agentProtocols_, agentProtocols) };
    inline HttpApiApiInfo& setAgentProtocols(vector<string> && agentProtocols) { DARABONBA_PTR_SET_RVALUE(agentProtocols_, agentProtocols) };


    // aiProtocols Field Functions 
    bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
    void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
    inline const vector<string> & getAiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
    inline vector<string> getAiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
    inline HttpApiApiInfo& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
    inline HttpApiApiInfo& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline HttpApiApiInfo& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline HttpApiApiInfo& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline HttpApiApiInfo& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // deployCntMap Field Functions 
    bool hasDeployCntMap() const { return this->deployCntMap_ != nullptr;};
    void deleteDeployCntMap() { this->deployCntMap_ = nullptr;};
    inline const map<string, HttpApiApiInfoDeployCntMapValue> & getDeployCntMap() const { DARABONBA_PTR_GET_CONST(deployCntMap_, map<string, HttpApiApiInfoDeployCntMapValue>) };
    inline map<string, HttpApiApiInfoDeployCntMapValue> getDeployCntMap() { DARABONBA_PTR_GET(deployCntMap_, map<string, HttpApiApiInfoDeployCntMapValue>) };
    inline HttpApiApiInfo& setDeployCntMap(const map<string, HttpApiApiInfoDeployCntMapValue> & deployCntMap) { DARABONBA_PTR_SET_VALUE(deployCntMap_, deployCntMap) };
    inline HttpApiApiInfo& setDeployCntMap(map<string, HttpApiApiInfoDeployCntMapValue> && deployCntMap) { DARABONBA_PTR_SET_RVALUE(deployCntMap_, deployCntMap) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & getDeployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> getDeployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline HttpApiApiInfo& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline HttpApiApiInfo& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpApiApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabelAuth Field Functions 
    bool hasEnabelAuth() const { return this->enabelAuth_ != nullptr;};
    void deleteEnabelAuth() { this->enabelAuth_ = nullptr;};
    inline bool getEnabelAuth() const { DARABONBA_PTR_GET_DEFAULT(enabelAuth_, false) };
    inline HttpApiApiInfo& setEnabelAuth(bool enabelAuth) { DARABONBA_PTR_SET_VALUE(enabelAuth_, enabelAuth) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<HttpApiApiInfo::Environments> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<HttpApiApiInfo::Environments>) };
    inline vector<HttpApiApiInfo::Environments> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<HttpApiApiInfo::Environments>) };
    inline HttpApiApiInfo& setEnvironments(const vector<HttpApiApiInfo::Environments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline HttpApiApiInfo& setEnvironments(vector<HttpApiApiInfo::Environments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiApiInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline HttpApiApiInfo& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // ingressInfo Field Functions 
    bool hasIngressInfo() const { return this->ingressInfo_ != nullptr;};
    void deleteIngressInfo() { this->ingressInfo_ = nullptr;};
    inline const HttpApiApiInfo::IngressInfo & getIngressInfo() const { DARABONBA_PTR_GET_CONST(ingressInfo_, HttpApiApiInfo::IngressInfo) };
    inline HttpApiApiInfo::IngressInfo getIngressInfo() { DARABONBA_PTR_GET(ingressInfo_, HttpApiApiInfo::IngressInfo) };
    inline HttpApiApiInfo& setIngressInfo(const HttpApiApiInfo::IngressInfo & ingressInfo) { DARABONBA_PTR_SET_VALUE(ingressInfo_, ingressInfo) };
    inline HttpApiApiInfo& setIngressInfo(HttpApiApiInfo::IngressInfo && ingressInfo) { DARABONBA_PTR_SET_RVALUE(ingressInfo_, ingressInfo) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string getModelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline HttpApiApiInfo& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiApiInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline HttpApiApiInfo& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline HttpApiApiInfo& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline HttpApiApiInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiApiInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionInfo Field Functions 
    bool hasVersionInfo() const { return this->versionInfo_ != nullptr;};
    void deleteVersionInfo() { this->versionInfo_ = nullptr;};
    inline const HttpApiVersionInfo & getVersionInfo() const { DARABONBA_PTR_GET_CONST(versionInfo_, HttpApiVersionInfo) };
    inline HttpApiVersionInfo getVersionInfo() { DARABONBA_PTR_GET(versionInfo_, HttpApiVersionInfo) };
    inline HttpApiApiInfo& setVersionInfo(const HttpApiVersionInfo & versionInfo) { DARABONBA_PTR_SET_VALUE(versionInfo_, versionInfo) };
    inline HttpApiApiInfo& setVersionInfo(HttpApiVersionInfo && versionInfo) { DARABONBA_PTR_SET_RVALUE(versionInfo_, versionInfo) };


  protected:
    shared_ptr<vector<string>> agentProtocols_ {};
    shared_ptr<vector<string>> aiProtocols_ {};
    shared_ptr<AuthConfig> authConfig_ {};
    shared_ptr<string> basePath_ {};
    shared_ptr<map<string, HttpApiApiInfoDeployCntMapValue>> deployCntMap_ {};
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabelAuth_ {};
    shared_ptr<vector<HttpApiApiInfo::Environments>> environments_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> httpApiId_ {};
    shared_ptr<HttpApiApiInfo::IngressInfo> ingressInfo_ {};
    shared_ptr<string> modelCategory_ {};
    shared_ptr<string> name_ {};
    shared_ptr<vector<string>> protocols_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> type_ {};
    shared_ptr<HttpApiVersionInfo> versionInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
