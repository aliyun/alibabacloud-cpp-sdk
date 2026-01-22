// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalIngresses, additionalIngresses_);
      DARABONBA_PTR_TO_JSON(ConfigInfo, configInfo_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EgressIp, egressIp_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(RenderingStatus, renderingStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceAttributes, resourceAttributes_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SystemInfo, systemInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalIngresses, additionalIngresses_);
      DARABONBA_PTR_FROM_JSON(ConfigInfo, configInfo_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EgressIp, egressIp_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(RenderingStatus, renderingStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceAttributes, resourceAttributes_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SystemInfo, systemInfo_);
    };
    DescribeRenderingInstanceResponseBody() = default ;
    DescribeRenderingInstanceResponseBody(const DescribeRenderingInstanceResponseBody &) = default ;
    DescribeRenderingInstanceResponseBody(DescribeRenderingInstanceResponseBody &&) = default ;
    DescribeRenderingInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBody() = default ;
    DescribeRenderingInstanceResponseBody& operator=(const DescribeRenderingInstanceResponseBody &) = default ;
    DescribeRenderingInstanceResponseBody& operator=(DescribeRenderingInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Frequency, frequency_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      };
      friend void from_json(const Darabonba::Json& j, SystemInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      };
      SystemInfo() = default ;
      SystemInfo(const SystemInfo &) = default ;
      SystemInfo(SystemInfo &&) = default ;
      SystemInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemInfo() = default ;
      SystemInfo& operator=(const SystemInfo &) = default ;
      SystemInfo& operator=(SystemInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->frequency_ == nullptr
        && this->resolution_ == nullptr; };
      // frequency Field Functions 
      bool hasFrequency() const { return this->frequency_ != nullptr;};
      void deleteFrequency() { this->frequency_ = nullptr;};
      inline int32_t getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0) };
      inline SystemInfo& setFrequency(int32_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline SystemInfo& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    protected:
      shared_ptr<int32_t> frequency_ {};
      shared_ptr<string> resolution_ {};
    };

    class ResourceAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeMediaService, edgeMediaService_);
        DARABONBA_PTR_TO_JSON(InAccess, inAccess_);
        DARABONBA_PTR_TO_JSON(OutAccess, outAccess_);
        DARABONBA_PTR_TO_JSON(Zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeMediaService, edgeMediaService_);
        DARABONBA_PTR_FROM_JSON(InAccess, inAccess_);
        DARABONBA_PTR_FROM_JSON(OutAccess, outAccess_);
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
      };
      ResourceAttributes() = default ;
      ResourceAttributes(const ResourceAttributes &) = default ;
      ResourceAttributes(ResourceAttributes &&) = default ;
      ResourceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceAttributes() = default ;
      ResourceAttributes& operator=(const ResourceAttributes &) = default ;
      ResourceAttributes& operator=(ResourceAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->edgeMediaService_ == nullptr
        && this->inAccess_ == nullptr && this->outAccess_ == nullptr && this->zone_ == nullptr; };
      // edgeMediaService Field Functions 
      bool hasEdgeMediaService() const { return this->edgeMediaService_ != nullptr;};
      void deleteEdgeMediaService() { this->edgeMediaService_ = nullptr;};
      inline string getEdgeMediaService() const { DARABONBA_PTR_GET_DEFAULT(edgeMediaService_, "") };
      inline ResourceAttributes& setEdgeMediaService(string edgeMediaService) { DARABONBA_PTR_SET_VALUE(edgeMediaService_, edgeMediaService) };


      // inAccess Field Functions 
      bool hasInAccess() const { return this->inAccess_ != nullptr;};
      void deleteInAccess() { this->inAccess_ = nullptr;};
      inline string getInAccess() const { DARABONBA_PTR_GET_DEFAULT(inAccess_, "") };
      inline ResourceAttributes& setInAccess(string inAccess) { DARABONBA_PTR_SET_VALUE(inAccess_, inAccess) };


      // outAccess Field Functions 
      bool hasOutAccess() const { return this->outAccess_ != nullptr;};
      void deleteOutAccess() { this->outAccess_ = nullptr;};
      inline string getOutAccess() const { DARABONBA_PTR_GET_DEFAULT(outAccess_, "") };
      inline ResourceAttributes& setOutAccess(string outAccess) { DARABONBA_PTR_SET_VALUE(outAccess_, outAccess) };


      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
      inline ResourceAttributes& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    protected:
      shared_ptr<string> edgeMediaService_ {};
      shared_ptr<string> inAccess_ {};
      shared_ptr<string> outAccess_ {};
      shared_ptr<string> zone_ {};
    };

    class RenderingStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RenderingStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(LatestAction, latestAction_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RenderingStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(LatestAction, latestAction_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RenderingStatus() = default ;
      RenderingStatus(const RenderingStatus &) = default ;
      RenderingStatus(RenderingStatus &&) = default ;
      RenderingStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RenderingStatus() = default ;
      RenderingStatus& operator=(const RenderingStatus &) = default ;
      RenderingStatus& operator=(RenderingStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->latestAction_ == nullptr && this->status_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RenderingStatus& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // latestAction Field Functions 
      bool hasLatestAction() const { return this->latestAction_ != nullptr;};
      void deleteLatestAction() { this->latestAction_ = nullptr;};
      inline string getLatestAction() const { DARABONBA_PTR_GET_DEFAULT(latestAction_, "") };
      inline RenderingStatus& setLatestAction(string latestAction) { DARABONBA_PTR_SET_VALUE(latestAction_, latestAction) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RenderingStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> latestAction_ {};
      shared_ptr<string> status_ {};
    };

    class PortMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortMappings& obj) { 
        DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
        DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      };
      friend void from_json(const Darabonba::Json& j, PortMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
        DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      };
      PortMappings() = default ;
      PortMappings(const PortMappings &) = default ;
      PortMappings(PortMappings &&) = default ;
      PortMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortMappings() = default ;
      PortMappings& operator=(const PortMappings &) = default ;
      PortMappings& operator=(PortMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->externalPort_ == nullptr
        && this->internalPort_ == nullptr; };
      // externalPort Field Functions 
      bool hasExternalPort() const { return this->externalPort_ != nullptr;};
      void deleteExternalPort() { this->externalPort_ = nullptr;};
      inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
      inline PortMappings& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


      // internalPort Field Functions 
      bool hasInternalPort() const { return this->internalPort_ != nullptr;};
      void deleteInternalPort() { this->internalPort_ = nullptr;};
      inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
      inline PortMappings& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    protected:
      shared_ptr<string> externalPort_ {};
      shared_ptr<string> internalPort_ {};
    };

    class ConfigInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Configuration, configuration_);
        DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
        DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      };
      ConfigInfo() = default ;
      ConfigInfo(const ConfigInfo &) = default ;
      ConfigInfo(ConfigInfo &&) = default ;
      ConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigInfo() = default ;
      ConfigInfo& operator=(const ConfigInfo &) = default ;
      ConfigInfo& operator=(ConfigInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BandwidthStatus, bandwidthStatus_);
          DARABONBA_PTR_TO_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
          DARABONBA_PTR_TO_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BandwidthStatus, bandwidthStatus_);
          DARABONBA_PTR_FROM_JSON(MaxEgressBandwidth, maxEgressBandwidth_);
          DARABONBA_PTR_FROM_JSON(MaxIngressBandwidth, maxIngressBandwidth_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        NetworkConfig() = default ;
        NetworkConfig(const NetworkConfig &) = default ;
        NetworkConfig(NetworkConfig &&) = default ;
        NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkConfig() = default ;
        NetworkConfig& operator=(const NetworkConfig &) = default ;
        NetworkConfig& operator=(NetworkConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bandwidthStatus_ == nullptr
        && this->maxEgressBandwidth_ == nullptr && this->maxIngressBandwidth_ == nullptr && this->updateTime_ == nullptr; };
        // bandwidthStatus Field Functions 
        bool hasBandwidthStatus() const { return this->bandwidthStatus_ != nullptr;};
        void deleteBandwidthStatus() { this->bandwidthStatus_ = nullptr;};
        inline string getBandwidthStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStatus_, "") };
        inline NetworkConfig& setBandwidthStatus(string bandwidthStatus) { DARABONBA_PTR_SET_VALUE(bandwidthStatus_, bandwidthStatus) };


        // maxEgressBandwidth Field Functions 
        bool hasMaxEgressBandwidth() const { return this->maxEgressBandwidth_ != nullptr;};
        void deleteMaxEgressBandwidth() { this->maxEgressBandwidth_ = nullptr;};
        inline int32_t getMaxEgressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxEgressBandwidth_, 0) };
        inline NetworkConfig& setMaxEgressBandwidth(int32_t maxEgressBandwidth) { DARABONBA_PTR_SET_VALUE(maxEgressBandwidth_, maxEgressBandwidth) };


        // maxIngressBandwidth Field Functions 
        bool hasMaxIngressBandwidth() const { return this->maxIngressBandwidth_ != nullptr;};
        void deleteMaxIngressBandwidth() { this->maxIngressBandwidth_ = nullptr;};
        inline int32_t getMaxIngressBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxIngressBandwidth_, 0) };
        inline NetworkConfig& setMaxIngressBandwidth(int32_t maxIngressBandwidth) { DARABONBA_PTR_SET_VALUE(maxIngressBandwidth_, maxIngressBandwidth) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline NetworkConfig& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> bandwidthStatus_ {};
        shared_ptr<int32_t> maxEgressBandwidth_ {};
        shared_ptr<int32_t> maxIngressBandwidth_ {};
        shared_ptr<string> updateTime_ {};
      };

      class Configuration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Configuration& obj) { 
          DARABONBA_PTR_TO_JSON(Attributes, attributes_);
          DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
        };
        friend void from_json(const Darabonba::Json& j, Configuration& obj) { 
          DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
        };
        Configuration() = default ;
        Configuration(const Configuration &) = default ;
        Configuration(Configuration &&) = default ;
        Configuration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Configuration() = default ;
        Configuration& operator=(const Configuration &) = default ;
        Configuration& operator=(Configuration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Attributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Attributes& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_ANY_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Attributes& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_ANY_FROM_JSON(Value, value_);
          };
          Attributes() = default ;
          Attributes(const Attributes &) = default ;
          Attributes(Attributes &&) = default ;
          Attributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Attributes() = default ;
          Attributes& operator=(const Attributes &) = default ;
          Attributes& operator=(Attributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Attributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline           const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
          Darabonba::Json & getValue() { DARABONBA_GET(value_) };
          inline Attributes& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
          inline Attributes& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


        protected:
          shared_ptr<string> name_ {};
          Darabonba::Json value_ {};
        };

        virtual bool empty() const override { return this->attributes_ == nullptr
        && this->moduleName_ == nullptr; };
        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline const vector<Configuration::Attributes> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Configuration::Attributes>) };
        inline vector<Configuration::Attributes> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<Configuration::Attributes>) };
        inline Configuration& setAttributes(const vector<Configuration::Attributes> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
        inline Configuration& setAttributes(vector<Configuration::Attributes> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


        // moduleName Field Functions 
        bool hasModuleName() const { return this->moduleName_ != nullptr;};
        void deleteModuleName() { this->moduleName_ = nullptr;};
        inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
        inline Configuration& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


      protected:
        shared_ptr<vector<Configuration::Attributes>> attributes_ {};
        shared_ptr<string> moduleName_ {};
      };

      virtual bool empty() const override { return this->configuration_ == nullptr
        && this->networkConfig_ == nullptr; };
      // configuration Field Functions 
      bool hasConfiguration() const { return this->configuration_ != nullptr;};
      void deleteConfiguration() { this->configuration_ = nullptr;};
      inline const vector<ConfigInfo::Configuration> & getConfiguration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ConfigInfo::Configuration>) };
      inline vector<ConfigInfo::Configuration> getConfiguration() { DARABONBA_PTR_GET(configuration_, vector<ConfigInfo::Configuration>) };
      inline ConfigInfo& setConfiguration(const vector<ConfigInfo::Configuration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
      inline ConfigInfo& setConfiguration(vector<ConfigInfo::Configuration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


      // networkConfig Field Functions 
      bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
      void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
      inline const ConfigInfo::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, ConfigInfo::NetworkConfig) };
      inline ConfigInfo::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, ConfigInfo::NetworkConfig) };
      inline ConfigInfo& setNetworkConfig(const ConfigInfo::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
      inline ConfigInfo& setNetworkConfig(ConfigInfo::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    protected:
      shared_ptr<vector<ConfigInfo::Configuration>> configuration_ {};
      shared_ptr<ConfigInfo::NetworkConfig> networkConfig_ {};
    };

    class AdditionalIngresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AdditionalIngresses& obj) { 
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      };
      friend void from_json(const Darabonba::Json& j, AdditionalIngresses& obj) { 
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      };
      AdditionalIngresses() = default ;
      AdditionalIngresses(const AdditionalIngresses &) = default ;
      AdditionalIngresses(AdditionalIngresses &&) = default ;
      AdditionalIngresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AdditionalIngresses() = default ;
      AdditionalIngresses& operator=(const AdditionalIngresses &) = default ;
      AdditionalIngresses& operator=(AdditionalIngresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PortMappings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortMappings& obj) { 
          DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
        };
        friend void from_json(const Darabonba::Json& j, PortMappings& obj) { 
          DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
          DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
        };
        PortMappings() = default ;
        PortMappings(const PortMappings &) = default ;
        PortMappings(PortMappings &&) = default ;
        PortMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortMappings() = default ;
        PortMappings& operator=(const PortMappings &) = default ;
        PortMappings& operator=(PortMappings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->externalPort_ == nullptr
        && this->internalPort_ == nullptr; };
        // externalPort Field Functions 
        bool hasExternalPort() const { return this->externalPort_ != nullptr;};
        void deleteExternalPort() { this->externalPort_ = nullptr;};
        inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
        inline PortMappings& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


        // internalPort Field Functions 
        bool hasInternalPort() const { return this->internalPort_ != nullptr;};
        void deleteInternalPort() { this->internalPort_ = nullptr;};
        inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
        inline PortMappings& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


      protected:
        shared_ptr<string> externalPort_ {};
        shared_ptr<string> internalPort_ {};
      };

      virtual bool empty() const override { return this->hostname_ == nullptr
        && this->isp_ == nullptr && this->portMappings_ == nullptr; };
      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline AdditionalIngresses& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline AdditionalIngresses& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // portMappings Field Functions 
      bool hasPortMappings() const { return this->portMappings_ != nullptr;};
      void deletePortMappings() { this->portMappings_ = nullptr;};
      inline const vector<AdditionalIngresses::PortMappings> & getPortMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<AdditionalIngresses::PortMappings>) };
      inline vector<AdditionalIngresses::PortMappings> getPortMappings() { DARABONBA_PTR_GET(portMappings_, vector<AdditionalIngresses::PortMappings>) };
      inline AdditionalIngresses& setPortMappings(const vector<AdditionalIngresses::PortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
      inline AdditionalIngresses& setPortMappings(vector<AdditionalIngresses::PortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    protected:
      shared_ptr<string> hostname_ {};
      shared_ptr<string> isp_ {};
      shared_ptr<vector<AdditionalIngresses::PortMappings>> portMappings_ {};
    };

    virtual bool empty() const override { return this->additionalIngresses_ == nullptr
        && this->configInfo_ == nullptr && this->creationTime_ == nullptr && this->egressIp_ == nullptr && this->hostname_ == nullptr && this->instanceChargeType_ == nullptr
        && this->internalIp_ == nullptr && this->isp_ == nullptr && this->portMappings_ == nullptr && this->renderingInstanceId_ == nullptr && this->renderingSpec_ == nullptr
        && this->renderingStatus_ == nullptr && this->requestId_ == nullptr && this->resourceAttributes_ == nullptr && this->storageSize_ == nullptr && this->systemInfo_ == nullptr; };
    // additionalIngresses Field Functions 
    bool hasAdditionalIngresses() const { return this->additionalIngresses_ != nullptr;};
    void deleteAdditionalIngresses() { this->additionalIngresses_ = nullptr;};
    inline const vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses> & getAdditionalIngresses() const { DARABONBA_PTR_GET_CONST(additionalIngresses_, vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses>) };
    inline vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses> getAdditionalIngresses() { DARABONBA_PTR_GET(additionalIngresses_, vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses>) };
    inline DescribeRenderingInstanceResponseBody& setAdditionalIngresses(const vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses> & additionalIngresses) { DARABONBA_PTR_SET_VALUE(additionalIngresses_, additionalIngresses) };
    inline DescribeRenderingInstanceResponseBody& setAdditionalIngresses(vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses> && additionalIngresses) { DARABONBA_PTR_SET_RVALUE(additionalIngresses_, additionalIngresses) };


    // configInfo Field Functions 
    bool hasConfigInfo() const { return this->configInfo_ != nullptr;};
    void deleteConfigInfo() { this->configInfo_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBody::ConfigInfo & getConfigInfo() const { DARABONBA_PTR_GET_CONST(configInfo_, DescribeRenderingInstanceResponseBody::ConfigInfo) };
    inline DescribeRenderingInstanceResponseBody::ConfigInfo getConfigInfo() { DARABONBA_PTR_GET(configInfo_, DescribeRenderingInstanceResponseBody::ConfigInfo) };
    inline DescribeRenderingInstanceResponseBody& setConfigInfo(const DescribeRenderingInstanceResponseBody::ConfigInfo & configInfo) { DARABONBA_PTR_SET_VALUE(configInfo_, configInfo) };
    inline DescribeRenderingInstanceResponseBody& setConfigInfo(DescribeRenderingInstanceResponseBody::ConfigInfo && configInfo) { DARABONBA_PTR_SET_RVALUE(configInfo_, configInfo) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRenderingInstanceResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // egressIp Field Functions 
    bool hasEgressIp() const { return this->egressIp_ != nullptr;};
    void deleteEgressIp() { this->egressIp_ = nullptr;};
    inline string getEgressIp() const { DARABONBA_PTR_GET_DEFAULT(egressIp_, "") };
    inline DescribeRenderingInstanceResponseBody& setEgressIp(string egressIp) { DARABONBA_PTR_SET_VALUE(egressIp_, egressIp) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeRenderingInstanceResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRenderingInstanceResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline DescribeRenderingInstanceResponseBody& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeRenderingInstanceResponseBody& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<DescribeRenderingInstanceResponseBody::PortMappings> & getPortMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<DescribeRenderingInstanceResponseBody::PortMappings>) };
    inline vector<DescribeRenderingInstanceResponseBody::PortMappings> getPortMappings() { DARABONBA_PTR_GET(portMappings_, vector<DescribeRenderingInstanceResponseBody::PortMappings>) };
    inline DescribeRenderingInstanceResponseBody& setPortMappings(const vector<DescribeRenderingInstanceResponseBody::PortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline DescribeRenderingInstanceResponseBody& setPortMappings(vector<DescribeRenderingInstanceResponseBody::PortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DescribeRenderingInstanceResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string getRenderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline DescribeRenderingInstanceResponseBody& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // renderingStatus Field Functions 
    bool hasRenderingStatus() const { return this->renderingStatus_ != nullptr;};
    void deleteRenderingStatus() { this->renderingStatus_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBody::RenderingStatus & getRenderingStatus() const { DARABONBA_PTR_GET_CONST(renderingStatus_, DescribeRenderingInstanceResponseBody::RenderingStatus) };
    inline DescribeRenderingInstanceResponseBody::RenderingStatus getRenderingStatus() { DARABONBA_PTR_GET(renderingStatus_, DescribeRenderingInstanceResponseBody::RenderingStatus) };
    inline DescribeRenderingInstanceResponseBody& setRenderingStatus(const DescribeRenderingInstanceResponseBody::RenderingStatus & renderingStatus) { DARABONBA_PTR_SET_VALUE(renderingStatus_, renderingStatus) };
    inline DescribeRenderingInstanceResponseBody& setRenderingStatus(DescribeRenderingInstanceResponseBody::RenderingStatus && renderingStatus) { DARABONBA_PTR_SET_RVALUE(renderingStatus_, renderingStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceAttributes Field Functions 
    bool hasResourceAttributes() const { return this->resourceAttributes_ != nullptr;};
    void deleteResourceAttributes() { this->resourceAttributes_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBody::ResourceAttributes & getResourceAttributes() const { DARABONBA_PTR_GET_CONST(resourceAttributes_, DescribeRenderingInstanceResponseBody::ResourceAttributes) };
    inline DescribeRenderingInstanceResponseBody::ResourceAttributes getResourceAttributes() { DARABONBA_PTR_GET(resourceAttributes_, DescribeRenderingInstanceResponseBody::ResourceAttributes) };
    inline DescribeRenderingInstanceResponseBody& setResourceAttributes(const DescribeRenderingInstanceResponseBody::ResourceAttributes & resourceAttributes) { DARABONBA_PTR_SET_VALUE(resourceAttributes_, resourceAttributes) };
    inline DescribeRenderingInstanceResponseBody& setResourceAttributes(DescribeRenderingInstanceResponseBody::ResourceAttributes && resourceAttributes) { DARABONBA_PTR_SET_RVALUE(resourceAttributes_, resourceAttributes) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline DescribeRenderingInstanceResponseBody& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // systemInfo Field Functions 
    bool hasSystemInfo() const { return this->systemInfo_ != nullptr;};
    void deleteSystemInfo() { this->systemInfo_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBody::SystemInfo & getSystemInfo() const { DARABONBA_PTR_GET_CONST(systemInfo_, DescribeRenderingInstanceResponseBody::SystemInfo) };
    inline DescribeRenderingInstanceResponseBody::SystemInfo getSystemInfo() { DARABONBA_PTR_GET(systemInfo_, DescribeRenderingInstanceResponseBody::SystemInfo) };
    inline DescribeRenderingInstanceResponseBody& setSystemInfo(const DescribeRenderingInstanceResponseBody::SystemInfo & systemInfo) { DARABONBA_PTR_SET_VALUE(systemInfo_, systemInfo) };
    inline DescribeRenderingInstanceResponseBody& setSystemInfo(DescribeRenderingInstanceResponseBody::SystemInfo && systemInfo) { DARABONBA_PTR_SET_RVALUE(systemInfo_, systemInfo) };


  protected:
    shared_ptr<vector<DescribeRenderingInstanceResponseBody::AdditionalIngresses>> additionalIngresses_ {};
    shared_ptr<DescribeRenderingInstanceResponseBody::ConfigInfo> configInfo_ {};
    shared_ptr<string> creationTime_ {};
    shared_ptr<string> egressIp_ {};
    shared_ptr<string> hostname_ {};
    shared_ptr<string> instanceChargeType_ {};
    shared_ptr<string> internalIp_ {};
    shared_ptr<string> isp_ {};
    shared_ptr<vector<DescribeRenderingInstanceResponseBody::PortMappings>> portMappings_ {};
    shared_ptr<string> renderingInstanceId_ {};
    shared_ptr<string> renderingSpec_ {};
    shared_ptr<DescribeRenderingInstanceResponseBody::RenderingStatus> renderingStatus_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeRenderingInstanceResponseBody::ResourceAttributes> resourceAttributes_ {};
    shared_ptr<int32_t> storageSize_ {};
    shared_ptr<DescribeRenderingInstanceResponseBody::SystemInfo> systemInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
