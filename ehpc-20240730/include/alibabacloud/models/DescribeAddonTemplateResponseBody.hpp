// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddonNodeTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class DescribeAddonTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddonTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addon, addon_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddonTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addon, addon_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAddonTemplateResponseBody() = default ;
    DescribeAddonTemplateResponseBody(const DescribeAddonTemplateResponseBody &) = default ;
    DescribeAddonTemplateResponseBody(DescribeAddonTemplateResponseBody &&) = default ;
    DescribeAddonTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddonTemplateResponseBody() = default ;
    DescribeAddonTemplateResponseBody& operator=(const DescribeAddonTemplateResponseBody &) = default ;
    DescribeAddonTemplateResponseBody& operator=(DescribeAddonTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Addon : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Addon& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(LastUpdate, lastUpdate_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourcesSpec, resourcesSpec_);
        DARABONBA_PTR_TO_JSON(ServicesSpec, servicesSpec_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Addon& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(LastUpdate, lastUpdate_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourcesSpec, resourcesSpec_);
        DARABONBA_PTR_FROM_JSON(ServicesSpec, servicesSpec_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Addon() = default ;
      Addon(const Addon &) = default ;
      Addon(Addon &&) = default ;
      Addon(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Addon() = default ;
      Addon& operator=(const Addon &) = default ;
      Addon& operator=(Addon &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServicesSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServicesSpec& obj) { 
          DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
          DARABONBA_PTR_TO_JSON(NetworkACL, networkACL_);
          DARABONBA_PTR_TO_JSON(ServiceAccessType, serviceAccessType_);
          DARABONBA_PTR_TO_JSON(ServiceAccessUrl, serviceAccessUrl_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, ServicesSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
          DARABONBA_PTR_FROM_JSON(NetworkACL, networkACL_);
          DARABONBA_PTR_FROM_JSON(ServiceAccessType, serviceAccessType_);
          DARABONBA_PTR_FROM_JSON(ServiceAccessUrl, serviceAccessUrl_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        ServicesSpec() = default ;
        ServicesSpec(const ServicesSpec &) = default ;
        ServicesSpec(ServicesSpec &&) = default ;
        ServicesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServicesSpec() = default ;
        ServicesSpec& operator=(const ServicesSpec &) = default ;
        ServicesSpec& operator=(ServicesSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NetworkACL : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkACL& obj) { 
            DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkACL& obj) { 
            DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
          };
          NetworkACL() = default ;
          NetworkACL(const NetworkACL &) = default ;
          NetworkACL(NetworkACL &&) = default ;
          NetworkACL(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkACL() = default ;
          NetworkACL& operator=(const NetworkACL &) = default ;
          NetworkACL& operator=(NetworkACL &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipProtocol_ == nullptr
        && this->port_ == nullptr && this->sourceCidrIp_ == nullptr; };
          // ipProtocol Field Functions 
          bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
          void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
          inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
          inline NetworkACL& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline float getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0.0) };
          inline NetworkACL& setPort(float port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // sourceCidrIp Field Functions 
          bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
          void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
          inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
          inline NetworkACL& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


        protected:
          // The protocol type. Valid values:
          // 
          // *   **TCP**: forwards TCP packets.
          // *   **UDP**: forwards UDP packets.
          // *   **Any**: forwards all packets.
          // 
          // This parameter is required.
          shared_ptr<string> ipProtocol_ {};
          // The port number.
          // 
          // This parameter is required.
          shared_ptr<float> port_ {};
          // The source CIDR block.
          // 
          // This parameter is required.
          shared_ptr<string> sourceCidrIp_ {};
        };

        class InputParams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputParams& obj) { 
            DARABONBA_PTR_TO_JSON(HelpText, helpText_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InputParams& obj) { 
            DARABONBA_PTR_FROM_JSON(HelpText, helpText_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InputParams() = default ;
          InputParams(const InputParams &) = default ;
          InputParams(InputParams &&) = default ;
          InputParams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputParams() = default ;
          InputParams& operator=(const InputParams &) = default ;
          InputParams& operator=(InputParams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->helpText_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // helpText Field Functions 
          bool hasHelpText() const { return this->helpText_ != nullptr;};
          void deleteHelpText() { this->helpText_ = nullptr;};
          inline string getHelpText() const { DARABONBA_PTR_GET_DEFAULT(helpText_, "") };
          inline InputParams& setHelpText(string helpText) { DARABONBA_PTR_SET_VALUE(helpText_, helpText) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline InputParams& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline InputParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline InputParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InputParams& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The help information of the parameter.
          shared_ptr<string> helpText_ {};
          // The parameter label.
          shared_ptr<string> label_ {};
          // The parameter name.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The parameter type.
          // 
          // This parameter is required.
          shared_ptr<string> type_ {};
          // The parameter value.
          // 
          // This parameter is required.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->inputParams_ == nullptr
        && this->networkACL_ == nullptr && this->serviceAccessType_ == nullptr && this->serviceAccessUrl_ == nullptr && this->serviceName_ == nullptr; };
        // inputParams Field Functions 
        bool hasInputParams() const { return this->inputParams_ != nullptr;};
        void deleteInputParams() { this->inputParams_ = nullptr;};
        inline const vector<ServicesSpec::InputParams> & getInputParams() const { DARABONBA_PTR_GET_CONST(inputParams_, vector<ServicesSpec::InputParams>) };
        inline vector<ServicesSpec::InputParams> getInputParams() { DARABONBA_PTR_GET(inputParams_, vector<ServicesSpec::InputParams>) };
        inline ServicesSpec& setInputParams(const vector<ServicesSpec::InputParams> & inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };
        inline ServicesSpec& setInputParams(vector<ServicesSpec::InputParams> && inputParams) { DARABONBA_PTR_SET_RVALUE(inputParams_, inputParams) };


        // networkACL Field Functions 
        bool hasNetworkACL() const { return this->networkACL_ != nullptr;};
        void deleteNetworkACL() { this->networkACL_ = nullptr;};
        inline const vector<ServicesSpec::NetworkACL> & getNetworkACL() const { DARABONBA_PTR_GET_CONST(networkACL_, vector<ServicesSpec::NetworkACL>) };
        inline vector<ServicesSpec::NetworkACL> getNetworkACL() { DARABONBA_PTR_GET(networkACL_, vector<ServicesSpec::NetworkACL>) };
        inline ServicesSpec& setNetworkACL(const vector<ServicesSpec::NetworkACL> & networkACL) { DARABONBA_PTR_SET_VALUE(networkACL_, networkACL) };
        inline ServicesSpec& setNetworkACL(vector<ServicesSpec::NetworkACL> && networkACL) { DARABONBA_PTR_SET_RVALUE(networkACL_, networkACL) };


        // serviceAccessType Field Functions 
        bool hasServiceAccessType() const { return this->serviceAccessType_ != nullptr;};
        void deleteServiceAccessType() { this->serviceAccessType_ = nullptr;};
        inline string getServiceAccessType() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessType_, "") };
        inline ServicesSpec& setServiceAccessType(string serviceAccessType) { DARABONBA_PTR_SET_VALUE(serviceAccessType_, serviceAccessType) };


        // serviceAccessUrl Field Functions 
        bool hasServiceAccessUrl() const { return this->serviceAccessUrl_ != nullptr;};
        void deleteServiceAccessUrl() { this->serviceAccessUrl_ = nullptr;};
        inline string getServiceAccessUrl() const { DARABONBA_PTR_GET_DEFAULT(serviceAccessUrl_, "") };
        inline ServicesSpec& setServiceAccessUrl(string serviceAccessUrl) { DARABONBA_PTR_SET_VALUE(serviceAccessUrl_, serviceAccessUrl) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline ServicesSpec& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      protected:
        // The parameter configurations of the service.
        shared_ptr<vector<ServicesSpec::InputParams>> inputParams_ {};
        // The security group configurations of the service.
        shared_ptr<vector<ServicesSpec::NetworkACL>> networkACL_ {};
        // The service access type.
        shared_ptr<string> serviceAccessType_ {};
        // The service access URL.
        shared_ptr<string> serviceAccessUrl_ {};
        // The service name.
        // 
        // This parameter is required.
        shared_ptr<string> serviceName_ {};
      };

      class ResourcesSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcesSpec& obj) { 
          DARABONBA_PTR_TO_JSON(EcsResources, ecsResources_);
          DARABONBA_PTR_TO_JSON(EipResource, eipResource_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcesSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsResources, ecsResources_);
          DARABONBA_PTR_FROM_JSON(EipResource, eipResource_);
        };
        ResourcesSpec() = default ;
        ResourcesSpec(const ResourcesSpec &) = default ;
        ResourcesSpec(ResourcesSpec &&) = default ;
        ResourcesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcesSpec() = default ;
        ResourcesSpec& operator=(const ResourcesSpec &) = default ;
        ResourcesSpec& operator=(ResourcesSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EipResource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EipResource& obj) { 
            DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
            DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
            DARABONBA_PTR_TO_JSON(EipInstanceId, eipInstanceId_);
            DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
            DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          };
          friend void from_json(const Darabonba::Json& j, EipResource& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
            DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
            DARABONBA_PTR_FROM_JSON(EipInstanceId, eipInstanceId_);
            DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
            DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          };
          EipResource() = default ;
          EipResource(const EipResource &) = default ;
          EipResource(EipResource &&) = default ;
          EipResource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EipResource() = default ;
          EipResource& operator=(const EipResource &) = default ;
          EipResource& operator=(EipResource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoCreate_ == nullptr
        && this->bandwidth_ == nullptr && this->eipInstanceId_ == nullptr && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr; };
          // autoCreate Field Functions 
          bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
          void deleteAutoCreate() { this->autoCreate_ = nullptr;};
          inline bool getAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
          inline EipResource& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


          // bandwidth Field Functions 
          bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
          void deleteBandwidth() { this->bandwidth_ = nullptr;};
          inline string getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, "") };
          inline EipResource& setBandwidth(string bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


          // eipInstanceId Field Functions 
          bool hasEipInstanceId() const { return this->eipInstanceId_ != nullptr;};
          void deleteEipInstanceId() { this->eipInstanceId_ = nullptr;};
          inline string getEipInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eipInstanceId_, "") };
          inline EipResource& setEipInstanceId(string eipInstanceId) { DARABONBA_PTR_SET_VALUE(eipInstanceId_, eipInstanceId) };


          // instanceChargeType Field Functions 
          bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
          void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
          inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
          inline EipResource& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


          // internetChargeType Field Functions 
          bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
          void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
          inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
          inline EipResource& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        protected:
          // Indicates whether the EIP is automatically created.
          shared_ptr<bool> autoCreate_ {};
          // The maximum bandwidth of the EIP. Unit: Mbit/s.
          shared_ptr<string> bandwidth_ {};
          // The EIP ID.
          shared_ptr<string> eipInstanceId_ {};
          // The billing method of the EIP. Valid values:
          // 
          // *   PostPaid: pay-as-you-go.
          // *   PrePaid: subscription.
          // 
          // Default value: PostPaid
          shared_ptr<string> instanceChargeType_ {};
          // The metering method of the EIP. Valid values:
          // 
          // *   PayByBandwidth: pay by bandwidth.
          // *   PayByTraffic: pay by data transfer.
          // 
          // Valid values of N: 1 to 10.
          shared_ptr<string> internetChargeType_ {};
        };

        virtual bool empty() const override { return this->ecsResources_ == nullptr
        && this->eipResource_ == nullptr; };
        // ecsResources Field Functions 
        bool hasEcsResources() const { return this->ecsResources_ != nullptr;};
        void deleteEcsResources() { this->ecsResources_ = nullptr;};
        inline const vector<AddonNodeTemplate> & getEcsResources() const { DARABONBA_PTR_GET_CONST(ecsResources_, vector<AddonNodeTemplate>) };
        inline vector<AddonNodeTemplate> getEcsResources() { DARABONBA_PTR_GET(ecsResources_, vector<AddonNodeTemplate>) };
        inline ResourcesSpec& setEcsResources(const vector<AddonNodeTemplate> & ecsResources) { DARABONBA_PTR_SET_VALUE(ecsResources_, ecsResources) };
        inline ResourcesSpec& setEcsResources(vector<AddonNodeTemplate> && ecsResources) { DARABONBA_PTR_SET_RVALUE(ecsResources_, ecsResources) };


        // eipResource Field Functions 
        bool hasEipResource() const { return this->eipResource_ != nullptr;};
        void deleteEipResource() { this->eipResource_ = nullptr;};
        inline const ResourcesSpec::EipResource & getEipResource() const { DARABONBA_PTR_GET_CONST(eipResource_, ResourcesSpec::EipResource) };
        inline ResourcesSpec::EipResource getEipResource() { DARABONBA_PTR_GET(eipResource_, ResourcesSpec::EipResource) };
        inline ResourcesSpec& setEipResource(const ResourcesSpec::EipResource & eipResource) { DARABONBA_PTR_SET_VALUE(eipResource_, eipResource) };
        inline ResourcesSpec& setEipResource(ResourcesSpec::EipResource && eipResource) { DARABONBA_PTR_SET_RVALUE(eipResource_, eipResource) };


      protected:
        // The Elastic Compute Service (ECS) resource configurations of the addon.
        shared_ptr<vector<AddonNodeTemplate>> ecsResources_ {};
        // The Elastic IP Address (EIP) configurations of the service.
        shared_ptr<ResourcesSpec::EipResource> eipResource_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->icon_ == nullptr && this->label_ == nullptr && this->lastUpdate_ == nullptr && this->name_ == nullptr && this->resourcesSpec_ == nullptr
        && this->servicesSpec_ == nullptr && this->version_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Addon& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline Addon& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Addon& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // lastUpdate Field Functions 
      bool hasLastUpdate() const { return this->lastUpdate_ != nullptr;};
      void deleteLastUpdate() { this->lastUpdate_ = nullptr;};
      inline string getLastUpdate() const { DARABONBA_PTR_GET_DEFAULT(lastUpdate_, "") };
      inline Addon& setLastUpdate(string lastUpdate) { DARABONBA_PTR_SET_VALUE(lastUpdate_, lastUpdate) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Addon& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourcesSpec Field Functions 
      bool hasResourcesSpec() const { return this->resourcesSpec_ != nullptr;};
      void deleteResourcesSpec() { this->resourcesSpec_ = nullptr;};
      inline const Addon::ResourcesSpec & getResourcesSpec() const { DARABONBA_PTR_GET_CONST(resourcesSpec_, Addon::ResourcesSpec) };
      inline Addon::ResourcesSpec getResourcesSpec() { DARABONBA_PTR_GET(resourcesSpec_, Addon::ResourcesSpec) };
      inline Addon& setResourcesSpec(const Addon::ResourcesSpec & resourcesSpec) { DARABONBA_PTR_SET_VALUE(resourcesSpec_, resourcesSpec) };
      inline Addon& setResourcesSpec(Addon::ResourcesSpec && resourcesSpec) { DARABONBA_PTR_SET_RVALUE(resourcesSpec_, resourcesSpec) };


      // servicesSpec Field Functions 
      bool hasServicesSpec() const { return this->servicesSpec_ != nullptr;};
      void deleteServicesSpec() { this->servicesSpec_ = nullptr;};
      inline const vector<Addon::ServicesSpec> & getServicesSpec() const { DARABONBA_PTR_GET_CONST(servicesSpec_, vector<Addon::ServicesSpec>) };
      inline vector<Addon::ServicesSpec> getServicesSpec() { DARABONBA_PTR_GET(servicesSpec_, vector<Addon::ServicesSpec>) };
      inline Addon& setServicesSpec(const vector<Addon::ServicesSpec> & servicesSpec) { DARABONBA_PTR_SET_VALUE(servicesSpec_, servicesSpec) };
      inline Addon& setServicesSpec(vector<Addon::ServicesSpec> && servicesSpec) { DARABONBA_PTR_SET_RVALUE(servicesSpec_, servicesSpec) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Addon& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The addon description.
      shared_ptr<string> description_ {};
      // The addon icon.
      shared_ptr<string> icon_ {};
      // The addon label.
      shared_ptr<string> label_ {};
      // The date when the addon template was last updated.
      shared_ptr<string> lastUpdate_ {};
      // The addon name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The resource configurations of the addon.
      shared_ptr<Addon::ResourcesSpec> resourcesSpec_ {};
      // The addon configurations.
      shared_ptr<vector<Addon::ServicesSpec>> servicesSpec_ {};
      // The addon version.
      // 
      // This parameter is required.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->addon_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // addon Field Functions 
    bool hasAddon() const { return this->addon_ != nullptr;};
    void deleteAddon() { this->addon_ = nullptr;};
    inline const DescribeAddonTemplateResponseBody::Addon & getAddon() const { DARABONBA_PTR_GET_CONST(addon_, DescribeAddonTemplateResponseBody::Addon) };
    inline DescribeAddonTemplateResponseBody::Addon getAddon() { DARABONBA_PTR_GET(addon_, DescribeAddonTemplateResponseBody::Addon) };
    inline DescribeAddonTemplateResponseBody& setAddon(const DescribeAddonTemplateResponseBody::Addon & addon) { DARABONBA_PTR_SET_VALUE(addon_, addon) };
    inline DescribeAddonTemplateResponseBody& setAddon(DescribeAddonTemplateResponseBody::Addon && addon) { DARABONBA_PTR_SET_RVALUE(addon_, addon) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAddonTemplateResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAddonTemplateResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAddonTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAddonTemplateResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the addon template.
    shared_ptr<DescribeAddonTemplateResponseBody::Addon> addon_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
