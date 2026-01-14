// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENDPOINTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENDPOINTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateEndpointGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEndpointGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndpointGroupConfigurations, endpointGroupConfigurations_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateEndpointGroupsRequest() = default ;
    CreateEndpointGroupsRequest(const CreateEndpointGroupsRequest &) = default ;
    CreateEndpointGroupsRequest(CreateEndpointGroupsRequest &&) = default ;
    CreateEndpointGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEndpointGroupsRequest() = default ;
    CreateEndpointGroupsRequest& operator=(const CreateEndpointGroupsRequest &) = default ;
    CreateEndpointGroupsRequest& operator=(CreateEndpointGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EndpointGroupConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_TO_JSON(EndpointGroupDescription, endpointGroupDescription_);
        DARABONBA_PTR_TO_JSON(EndpointGroupName, endpointGroupName_);
        DARABONBA_PTR_TO_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_TO_JSON(EndpointGroupType, endpointGroupType_);
        DARABONBA_PTR_TO_JSON(EndpointIpVersion, endpointIpVersion_);
        DARABONBA_PTR_TO_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
        DARABONBA_PTR_TO_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
        DARABONBA_PTR_TO_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_TO_JSON(HealthCheckHost, healthCheckHost_);
        DARABONBA_PTR_TO_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
        DARABONBA_PTR_TO_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
        DARABONBA_PTR_TO_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_TO_JSON(PortOverrides, portOverrides_);
        DARABONBA_PTR_TO_JSON(SystemTag, systemTag_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(ThresholdCount, thresholdCount_);
        DARABONBA_PTR_TO_JSON(TrafficPercentage, trafficPercentage_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointGroupConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(EndpointConfigurations, endpointConfigurations_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupDescription, endpointGroupDescription_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupName, endpointGroupName_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupRegion, endpointGroupRegion_);
        DARABONBA_PTR_FROM_JSON(EndpointGroupType, endpointGroupType_);
        DARABONBA_PTR_FROM_JSON(EndpointIpVersion, endpointIpVersion_);
        DARABONBA_PTR_FROM_JSON(EndpointProtocolVersion, endpointProtocolVersion_);
        DARABONBA_PTR_FROM_JSON(EndpointRequestProtocol, endpointRequestProtocol_);
        DARABONBA_PTR_FROM_JSON(HealthCheckEnabled, healthCheckEnabled_);
        DARABONBA_PTR_FROM_JSON(HealthCheckHost, healthCheckHost_);
        DARABONBA_PTR_FROM_JSON(HealthCheckIntervalSeconds, healthCheckIntervalSeconds_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPath, healthCheckPath_);
        DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
        DARABONBA_PTR_FROM_JSON(HealthCheckProtocol, healthCheckProtocol_);
        DARABONBA_PTR_FROM_JSON(PortOverrides, portOverrides_);
        DARABONBA_PTR_FROM_JSON(SystemTag, systemTag_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(ThresholdCount, thresholdCount_);
        DARABONBA_PTR_FROM_JSON(TrafficPercentage, trafficPercentage_);
      };
      EndpointGroupConfigurations() = default ;
      EndpointGroupConfigurations(const EndpointGroupConfigurations &) = default ;
      EndpointGroupConfigurations(EndpointGroupConfigurations &&) = default ;
      EndpointGroupConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointGroupConfigurations() = default ;
      EndpointGroupConfigurations& operator=(const EndpointGroupConfigurations &) = default ;
      EndpointGroupConfigurations& operator=(EndpointGroupConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class SystemTag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemTag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, SystemTag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        SystemTag() = default ;
        SystemTag(const SystemTag &) = default ;
        SystemTag(SystemTag &&) = default ;
        SystemTag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemTag() = default ;
        SystemTag& operator=(const SystemTag &) = default ;
        SystemTag& operator=(SystemTag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->scope_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline SystemTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline SystemTag& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline SystemTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> scope_ {};
        shared_ptr<string> value_ {};
      };

      class PortOverrides : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortOverrides& obj) { 
          DARABONBA_PTR_TO_JSON(EndpointPort, endpointPort_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
        };
        friend void from_json(const Darabonba::Json& j, PortOverrides& obj) { 
          DARABONBA_PTR_FROM_JSON(EndpointPort, endpointPort_);
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
        };
        PortOverrides() = default ;
        PortOverrides(const PortOverrides &) = default ;
        PortOverrides(PortOverrides &&) = default ;
        PortOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortOverrides() = default ;
        PortOverrides& operator=(const PortOverrides &) = default ;
        PortOverrides& operator=(PortOverrides &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpointPort_ == nullptr
        && this->listenerPort_ == nullptr; };
        // endpointPort Field Functions 
        bool hasEndpointPort() const { return this->endpointPort_ != nullptr;};
        void deleteEndpointPort() { this->endpointPort_ = nullptr;};
        inline int64_t getEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(endpointPort_, 0L) };
        inline PortOverrides& setEndpointPort(int64_t endpointPort) { DARABONBA_PTR_SET_VALUE(endpointPort_, endpointPort) };


        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int64_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0L) };
        inline PortOverrides& setListenerPort(int64_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      protected:
        shared_ptr<int64_t> endpointPort_ {};
        shared_ptr<int64_t> listenerPort_ {};
      };

      class EndpointConfigurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndpointConfigurations& obj) { 
          DARABONBA_PTR_TO_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
          DARABONBA_PTR_TO_JSON(EnableProxyProtocol, enableProxyProtocol_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(SubAddress, subAddress_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, EndpointConfigurations& obj) { 
          DARABONBA_PTR_FROM_JSON(EnableClientIPPreservation, enableClientIPPreservation_);
          DARABONBA_PTR_FROM_JSON(EnableProxyProtocol, enableProxyProtocol_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(SubAddress, subAddress_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        EndpointConfigurations() = default ;
        EndpointConfigurations(const EndpointConfigurations &) = default ;
        EndpointConfigurations(EndpointConfigurations &&) = default ;
        EndpointConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndpointConfigurations() = default ;
        EndpointConfigurations& operator=(const EndpointConfigurations &) = default ;
        EndpointConfigurations& operator=(EndpointConfigurations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableClientIPPreservation_ == nullptr
        && this->enableProxyProtocol_ == nullptr && this->endpoint_ == nullptr && this->subAddress_ == nullptr && this->type_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr && this->weight_ == nullptr; };
        // enableClientIPPreservation Field Functions 
        bool hasEnableClientIPPreservation() const { return this->enableClientIPPreservation_ != nullptr;};
        void deleteEnableClientIPPreservation() { this->enableClientIPPreservation_ = nullptr;};
        inline bool getEnableClientIPPreservation() const { DARABONBA_PTR_GET_DEFAULT(enableClientIPPreservation_, false) };
        inline EndpointConfigurations& setEnableClientIPPreservation(bool enableClientIPPreservation) { DARABONBA_PTR_SET_VALUE(enableClientIPPreservation_, enableClientIPPreservation) };


        // enableProxyProtocol Field Functions 
        bool hasEnableProxyProtocol() const { return this->enableProxyProtocol_ != nullptr;};
        void deleteEnableProxyProtocol() { this->enableProxyProtocol_ = nullptr;};
        inline bool getEnableProxyProtocol() const { DARABONBA_PTR_GET_DEFAULT(enableProxyProtocol_, false) };
        inline EndpointConfigurations& setEnableProxyProtocol(bool enableProxyProtocol) { DARABONBA_PTR_SET_VALUE(enableProxyProtocol_, enableProxyProtocol) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline EndpointConfigurations& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // subAddress Field Functions 
        bool hasSubAddress() const { return this->subAddress_ != nullptr;};
        void deleteSubAddress() { this->subAddress_ = nullptr;};
        inline string getSubAddress() const { DARABONBA_PTR_GET_DEFAULT(subAddress_, "") };
        inline EndpointConfigurations& setSubAddress(string subAddress) { DARABONBA_PTR_SET_VALUE(subAddress_, subAddress) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EndpointConfigurations& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
        inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
        inline EndpointConfigurations& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline EndpointConfigurations& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline EndpointConfigurations& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline EndpointConfigurations& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<bool> enableClientIPPreservation_ {};
        shared_ptr<bool> enableProxyProtocol_ {};
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> subAddress_ {};
        shared_ptr<string> type_ {};
        shared_ptr<vector<string>> vSwitchIds_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<int64_t> weight_ {};
      };

      virtual bool empty() const override { return this->endpointConfigurations_ == nullptr
        && this->endpointGroupDescription_ == nullptr && this->endpointGroupName_ == nullptr && this->endpointGroupRegion_ == nullptr && this->endpointGroupType_ == nullptr && this->endpointIpVersion_ == nullptr
        && this->endpointProtocolVersion_ == nullptr && this->endpointRequestProtocol_ == nullptr && this->healthCheckEnabled_ == nullptr && this->healthCheckHost_ == nullptr && this->healthCheckIntervalSeconds_ == nullptr
        && this->healthCheckPath_ == nullptr && this->healthCheckPort_ == nullptr && this->healthCheckProtocol_ == nullptr && this->portOverrides_ == nullptr && this->systemTag_ == nullptr
        && this->tag_ == nullptr && this->thresholdCount_ == nullptr && this->trafficPercentage_ == nullptr; };
      // endpointConfigurations Field Functions 
      bool hasEndpointConfigurations() const { return this->endpointConfigurations_ != nullptr;};
      void deleteEndpointConfigurations() { this->endpointConfigurations_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::EndpointConfigurations> & getEndpointConfigurations() const { DARABONBA_PTR_GET_CONST(endpointConfigurations_, vector<EndpointGroupConfigurations::EndpointConfigurations>) };
      inline vector<EndpointGroupConfigurations::EndpointConfigurations> getEndpointConfigurations() { DARABONBA_PTR_GET(endpointConfigurations_, vector<EndpointGroupConfigurations::EndpointConfigurations>) };
      inline EndpointGroupConfigurations& setEndpointConfigurations(const vector<EndpointGroupConfigurations::EndpointConfigurations> & endpointConfigurations) { DARABONBA_PTR_SET_VALUE(endpointConfigurations_, endpointConfigurations) };
      inline EndpointGroupConfigurations& setEndpointConfigurations(vector<EndpointGroupConfigurations::EndpointConfigurations> && endpointConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointConfigurations_, endpointConfigurations) };


      // endpointGroupDescription Field Functions 
      bool hasEndpointGroupDescription() const { return this->endpointGroupDescription_ != nullptr;};
      void deleteEndpointGroupDescription() { this->endpointGroupDescription_ = nullptr;};
      inline string getEndpointGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupDescription_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupDescription(string endpointGroupDescription) { DARABONBA_PTR_SET_VALUE(endpointGroupDescription_, endpointGroupDescription) };


      // endpointGroupName Field Functions 
      bool hasEndpointGroupName() const { return this->endpointGroupName_ != nullptr;};
      void deleteEndpointGroupName() { this->endpointGroupName_ = nullptr;};
      inline string getEndpointGroupName() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupName_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupName(string endpointGroupName) { DARABONBA_PTR_SET_VALUE(endpointGroupName_, endpointGroupName) };


      // endpointGroupRegion Field Functions 
      bool hasEndpointGroupRegion() const { return this->endpointGroupRegion_ != nullptr;};
      void deleteEndpointGroupRegion() { this->endpointGroupRegion_ = nullptr;};
      inline string getEndpointGroupRegion() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupRegion_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupRegion(string endpointGroupRegion) { DARABONBA_PTR_SET_VALUE(endpointGroupRegion_, endpointGroupRegion) };


      // endpointGroupType Field Functions 
      bool hasEndpointGroupType() const { return this->endpointGroupType_ != nullptr;};
      void deleteEndpointGroupType() { this->endpointGroupType_ = nullptr;};
      inline string getEndpointGroupType() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupType_, "") };
      inline EndpointGroupConfigurations& setEndpointGroupType(string endpointGroupType) { DARABONBA_PTR_SET_VALUE(endpointGroupType_, endpointGroupType) };


      // endpointIpVersion Field Functions 
      bool hasEndpointIpVersion() const { return this->endpointIpVersion_ != nullptr;};
      void deleteEndpointIpVersion() { this->endpointIpVersion_ = nullptr;};
      inline string getEndpointIpVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointIpVersion_, "") };
      inline EndpointGroupConfigurations& setEndpointIpVersion(string endpointIpVersion) { DARABONBA_PTR_SET_VALUE(endpointIpVersion_, endpointIpVersion) };


      // endpointProtocolVersion Field Functions 
      bool hasEndpointProtocolVersion() const { return this->endpointProtocolVersion_ != nullptr;};
      void deleteEndpointProtocolVersion() { this->endpointProtocolVersion_ = nullptr;};
      inline string getEndpointProtocolVersion() const { DARABONBA_PTR_GET_DEFAULT(endpointProtocolVersion_, "") };
      inline EndpointGroupConfigurations& setEndpointProtocolVersion(string endpointProtocolVersion) { DARABONBA_PTR_SET_VALUE(endpointProtocolVersion_, endpointProtocolVersion) };


      // endpointRequestProtocol Field Functions 
      bool hasEndpointRequestProtocol() const { return this->endpointRequestProtocol_ != nullptr;};
      void deleteEndpointRequestProtocol() { this->endpointRequestProtocol_ = nullptr;};
      inline string getEndpointRequestProtocol() const { DARABONBA_PTR_GET_DEFAULT(endpointRequestProtocol_, "") };
      inline EndpointGroupConfigurations& setEndpointRequestProtocol(string endpointRequestProtocol) { DARABONBA_PTR_SET_VALUE(endpointRequestProtocol_, endpointRequestProtocol) };


      // healthCheckEnabled Field Functions 
      bool hasHealthCheckEnabled() const { return this->healthCheckEnabled_ != nullptr;};
      void deleteHealthCheckEnabled() { this->healthCheckEnabled_ = nullptr;};
      inline bool getHealthCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(healthCheckEnabled_, false) };
      inline EndpointGroupConfigurations& setHealthCheckEnabled(bool healthCheckEnabled) { DARABONBA_PTR_SET_VALUE(healthCheckEnabled_, healthCheckEnabled) };


      // healthCheckHost Field Functions 
      bool hasHealthCheckHost() const { return this->healthCheckHost_ != nullptr;};
      void deleteHealthCheckHost() { this->healthCheckHost_ = nullptr;};
      inline string getHealthCheckHost() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHost_, "") };
      inline EndpointGroupConfigurations& setHealthCheckHost(string healthCheckHost) { DARABONBA_PTR_SET_VALUE(healthCheckHost_, healthCheckHost) };


      // healthCheckIntervalSeconds Field Functions 
      bool hasHealthCheckIntervalSeconds() const { return this->healthCheckIntervalSeconds_ != nullptr;};
      void deleteHealthCheckIntervalSeconds() { this->healthCheckIntervalSeconds_ = nullptr;};
      inline int64_t getHealthCheckIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(healthCheckIntervalSeconds_, 0L) };
      inline EndpointGroupConfigurations& setHealthCheckIntervalSeconds(int64_t healthCheckIntervalSeconds) { DARABONBA_PTR_SET_VALUE(healthCheckIntervalSeconds_, healthCheckIntervalSeconds) };


      // healthCheckPath Field Functions 
      bool hasHealthCheckPath() const { return this->healthCheckPath_ != nullptr;};
      void deleteHealthCheckPath() { this->healthCheckPath_ = nullptr;};
      inline string getHealthCheckPath() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPath_, "") };
      inline EndpointGroupConfigurations& setHealthCheckPath(string healthCheckPath) { DARABONBA_PTR_SET_VALUE(healthCheckPath_, healthCheckPath) };


      // healthCheckPort Field Functions 
      bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
      void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
      inline int64_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0L) };
      inline EndpointGroupConfigurations& setHealthCheckPort(int64_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


      // healthCheckProtocol Field Functions 
      bool hasHealthCheckProtocol() const { return this->healthCheckProtocol_ != nullptr;};
      void deleteHealthCheckProtocol() { this->healthCheckProtocol_ = nullptr;};
      inline string getHealthCheckProtocol() const { DARABONBA_PTR_GET_DEFAULT(healthCheckProtocol_, "") };
      inline EndpointGroupConfigurations& setHealthCheckProtocol(string healthCheckProtocol) { DARABONBA_PTR_SET_VALUE(healthCheckProtocol_, healthCheckProtocol) };


      // portOverrides Field Functions 
      bool hasPortOverrides() const { return this->portOverrides_ != nullptr;};
      void deletePortOverrides() { this->portOverrides_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::PortOverrides> & getPortOverrides() const { DARABONBA_PTR_GET_CONST(portOverrides_, vector<EndpointGroupConfigurations::PortOverrides>) };
      inline vector<EndpointGroupConfigurations::PortOverrides> getPortOverrides() { DARABONBA_PTR_GET(portOverrides_, vector<EndpointGroupConfigurations::PortOverrides>) };
      inline EndpointGroupConfigurations& setPortOverrides(const vector<EndpointGroupConfigurations::PortOverrides> & portOverrides) { DARABONBA_PTR_SET_VALUE(portOverrides_, portOverrides) };
      inline EndpointGroupConfigurations& setPortOverrides(vector<EndpointGroupConfigurations::PortOverrides> && portOverrides) { DARABONBA_PTR_SET_RVALUE(portOverrides_, portOverrides) };


      // systemTag Field Functions 
      bool hasSystemTag() const { return this->systemTag_ != nullptr;};
      void deleteSystemTag() { this->systemTag_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::SystemTag> & getSystemTag() const { DARABONBA_PTR_GET_CONST(systemTag_, vector<EndpointGroupConfigurations::SystemTag>) };
      inline vector<EndpointGroupConfigurations::SystemTag> getSystemTag() { DARABONBA_PTR_GET(systemTag_, vector<EndpointGroupConfigurations::SystemTag>) };
      inline EndpointGroupConfigurations& setSystemTag(const vector<EndpointGroupConfigurations::SystemTag> & systemTag) { DARABONBA_PTR_SET_VALUE(systemTag_, systemTag) };
      inline EndpointGroupConfigurations& setSystemTag(vector<EndpointGroupConfigurations::SystemTag> && systemTag) { DARABONBA_PTR_SET_RVALUE(systemTag_, systemTag) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<EndpointGroupConfigurations::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<EndpointGroupConfigurations::Tag>) };
      inline vector<EndpointGroupConfigurations::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<EndpointGroupConfigurations::Tag>) };
      inline EndpointGroupConfigurations& setTag(const vector<EndpointGroupConfigurations::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline EndpointGroupConfigurations& setTag(vector<EndpointGroupConfigurations::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      // thresholdCount Field Functions 
      bool hasThresholdCount() const { return this->thresholdCount_ != nullptr;};
      void deleteThresholdCount() { this->thresholdCount_ = nullptr;};
      inline int64_t getThresholdCount() const { DARABONBA_PTR_GET_DEFAULT(thresholdCount_, 0L) };
      inline EndpointGroupConfigurations& setThresholdCount(int64_t thresholdCount) { DARABONBA_PTR_SET_VALUE(thresholdCount_, thresholdCount) };


      // trafficPercentage Field Functions 
      bool hasTrafficPercentage() const { return this->trafficPercentage_ != nullptr;};
      void deleteTrafficPercentage() { this->trafficPercentage_ = nullptr;};
      inline int64_t getTrafficPercentage() const { DARABONBA_PTR_GET_DEFAULT(trafficPercentage_, 0L) };
      inline EndpointGroupConfigurations& setTrafficPercentage(int64_t trafficPercentage) { DARABONBA_PTR_SET_VALUE(trafficPercentage_, trafficPercentage) };


    protected:
      shared_ptr<vector<EndpointGroupConfigurations::EndpointConfigurations>> endpointConfigurations_ {};
      shared_ptr<string> endpointGroupDescription_ {};
      shared_ptr<string> endpointGroupName_ {};
      // This parameter is required.
      shared_ptr<string> endpointGroupRegion_ {};
      shared_ptr<string> endpointGroupType_ {};
      shared_ptr<string> endpointIpVersion_ {};
      shared_ptr<string> endpointProtocolVersion_ {};
      shared_ptr<string> endpointRequestProtocol_ {};
      shared_ptr<bool> healthCheckEnabled_ {};
      shared_ptr<string> healthCheckHost_ {};
      shared_ptr<int64_t> healthCheckIntervalSeconds_ {};
      shared_ptr<string> healthCheckPath_ {};
      shared_ptr<int64_t> healthCheckPort_ {};
      shared_ptr<string> healthCheckProtocol_ {};
      shared_ptr<vector<EndpointGroupConfigurations::PortOverrides>> portOverrides_ {};
      shared_ptr<vector<EndpointGroupConfigurations::SystemTag>> systemTag_ {};
      shared_ptr<vector<EndpointGroupConfigurations::Tag>> tag_ {};
      shared_ptr<int64_t> thresholdCount_ {};
      shared_ptr<int64_t> trafficPercentage_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->endpointGroupConfigurations_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline CreateEndpointGroupsRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEndpointGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateEndpointGroupsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endpointGroupConfigurations Field Functions 
    bool hasEndpointGroupConfigurations() const { return this->endpointGroupConfigurations_ != nullptr;};
    void deleteEndpointGroupConfigurations() { this->endpointGroupConfigurations_ = nullptr;};
    inline const vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations> & getEndpointGroupConfigurations() const { DARABONBA_PTR_GET_CONST(endpointGroupConfigurations_, vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations>) };
    inline vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations> getEndpointGroupConfigurations() { DARABONBA_PTR_GET(endpointGroupConfigurations_, vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations>) };
    inline CreateEndpointGroupsRequest& setEndpointGroupConfigurations(const vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations> & endpointGroupConfigurations) { DARABONBA_PTR_SET_VALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };
    inline CreateEndpointGroupsRequest& setEndpointGroupConfigurations(vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations> && endpointGroupConfigurations) { DARABONBA_PTR_SET_RVALUE(endpointGroupConfigurations_, endpointGroupConfigurations) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline CreateEndpointGroupsRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateEndpointGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the GA instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, a 2xx HTTP status code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // This parameter is required.
    shared_ptr<vector<CreateEndpointGroupsRequest::EndpointGroupConfigurations>> endpointGroupConfigurations_ {};
    // The ID of the listener.
    // 
    // >  If the listener protocol is **HTTP** or **HTTPS**, you can call the **CreateEndpointGroups** operation to create only one endpoint group.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The ID of the region where the GA instance is deployed. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
