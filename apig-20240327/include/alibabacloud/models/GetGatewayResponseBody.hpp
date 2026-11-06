// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetGatewayResponseBody() = default ;
    GetGatewayResponseBody(const GetGatewayResponseBody &) = default ;
    GetGatewayResponseBody(GetGatewayResponseBody &&) = default ;
    GetGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBody() = default ;
    GetGatewayResponseBody& operator=(const GetGatewayResponseBody &) = default ;
    GetGatewayResponseBody& operator=(GetGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
        DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(elasticEnabled, elasticEnabled_);
        DARABONBA_PTR_TO_JSON(environments, environments_);
        DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
        DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(gatewayMode, gatewayMode_);
        DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(isp, isp_);
        DARABONBA_PTR_TO_JSON(loadBalancers, loadBalancers_);
        DARABONBA_PTR_TO_JSON(maintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(networkAccessConfig, networkAccessConfig_);
        DARABONBA_PTR_TO_JSON(privateLink, privateLink_);
        DARABONBA_PTR_TO_JSON(replicas, replicas_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(securityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(subDomainInfos, subDomainInfos_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
        DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(vpc, vpc_);
        DARABONBA_PTR_TO_JSON(zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
        DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(elasticEnabled, elasticEnabled_);
        DARABONBA_PTR_FROM_JSON(environments, environments_);
        DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
        DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(gatewayMode, gatewayMode_);
        DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(isp, isp_);
        DARABONBA_PTR_FROM_JSON(loadBalancers, loadBalancers_);
        DARABONBA_PTR_FROM_JSON(maintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(networkAccessConfig, networkAccessConfig_);
        DARABONBA_PTR_FROM_JSON(privateLink, privateLink_);
        DARABONBA_PTR_FROM_JSON(replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(securityGroup, securityGroup_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(subDomainInfos, subDomainInfos_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
        DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(vpc, vpc_);
        DARABONBA_PTR_FROM_JSON(zones, zones_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zones& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
          DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zones& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
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
        class VSwitch : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
          };
          VSwitch() = default ;
          VSwitch(const VSwitch &) = default ;
          VSwitch(VSwitch &&) = default ;
          VSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitch() = default ;
          VSwitch& operator=(const VSwitch &) = default ;
          VSwitch& operator=(VSwitch &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->vSwitchId_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VSwitch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        protected:
          // The name of the vSwitch.
          shared_ptr<string> name_ {};
          // The ID of the vSwitch.
          shared_ptr<string> vSwitchId_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->vSwitch_ == nullptr && this->zoneId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Zones& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // vSwitch Field Functions 
        bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
        void deleteVSwitch() { this->vSwitch_ = nullptr;};
        inline const Zones::VSwitch & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Zones::VSwitch) };
        inline Zones::VSwitch getVSwitch() { DARABONBA_PTR_GET(vSwitch_, Zones::VSwitch) };
        inline Zones& setVSwitch(const Zones::VSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
        inline Zones& setVSwitch(Zones::VSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The name of the zone.
        shared_ptr<string> name_ {};
        // The vSwitch.
        shared_ptr<Zones::VSwitch> vSwitch_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      class Vpc : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        };
        Vpc() = default ;
        Vpc(const Vpc &) = default ;
        Vpc(Vpc &&) = default ;
        Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Vpc() = default ;
        Vpc& operator=(const Vpc &) = default ;
        Vpc& operator=(Vpc &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->vpcId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Vpc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The name of the VPC.
        shared_ptr<string> name_ {};
        // The ID of the VPC.
        shared_ptr<string> vpcId_ {};
      };

      class VSwitch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
        };
        VSwitch() = default ;
        VSwitch(const VSwitch &) = default ;
        VSwitch(VSwitch &&) = default ;
        VSwitch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitch() = default ;
        VSwitch& operator=(const VSwitch &) = default ;
        VSwitch& operator=(VSwitch &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->vSwitchId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VSwitch& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The name of the vSwitch.
        shared_ptr<string> name_ {};
        // The ID of the vSwitch.
        shared_ptr<string> vSwitchId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
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
        // The key of the resource tag.
        shared_ptr<string> key_ {};
        // The value of the resource tag.
        shared_ptr<string> value_ {};
      };

      class SecurityGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityGroup& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
        };
        SecurityGroup() = default ;
        SecurityGroup(const SecurityGroup &) = default ;
        SecurityGroup(SecurityGroup &&) = default ;
        SecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityGroup() = default ;
        SecurityGroup& operator=(const SecurityGroup &) = default ;
        SecurityGroup& operator=(SecurityGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->securityGroupId_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SecurityGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      protected:
        // The name of the security group.
        shared_ptr<string> name_ {};
        // The ID of the security group.
        shared_ptr<string> securityGroupId_ {};
      };

      class PrivateLink : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateLink& obj) { 
          DARABONBA_PTR_TO_JSON(connectionStatus, connectionStatus_);
          DARABONBA_PTR_TO_JSON(endpointDomain, endpointDomain_);
          DARABONBA_PTR_TO_JSON(endpointId, endpointId_);
          DARABONBA_PTR_TO_JSON(endpointSecurityGroupId, endpointSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(endpointStatus, endpointStatus_);
          DARABONBA_PTR_TO_JSON(lastErrorCode, lastErrorCode_);
          DARABONBA_PTR_TO_JSON(lastErrorMessage, lastErrorMessage_);
          DARABONBA_PTR_TO_JSON(observedAt, observedAt_);
          DARABONBA_PTR_TO_JSON(resourceMayBeCharged, resourceMayBeCharged_);
          DARABONBA_PTR_TO_JSON(stage, stage_);
          DARABONBA_PTR_TO_JSON(zones, zones_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateLink& obj) { 
          DARABONBA_PTR_FROM_JSON(connectionStatus, connectionStatus_);
          DARABONBA_PTR_FROM_JSON(endpointDomain, endpointDomain_);
          DARABONBA_PTR_FROM_JSON(endpointId, endpointId_);
          DARABONBA_PTR_FROM_JSON(endpointSecurityGroupId, endpointSecurityGroupId_);
          DARABONBA_PTR_FROM_JSON(endpointStatus, endpointStatus_);
          DARABONBA_PTR_FROM_JSON(lastErrorCode, lastErrorCode_);
          DARABONBA_PTR_FROM_JSON(lastErrorMessage, lastErrorMessage_);
          DARABONBA_PTR_FROM_JSON(observedAt, observedAt_);
          DARABONBA_PTR_FROM_JSON(resourceMayBeCharged, resourceMayBeCharged_);
          DARABONBA_PTR_FROM_JSON(stage, stage_);
          DARABONBA_PTR_FROM_JSON(zones, zones_);
        };
        PrivateLink() = default ;
        PrivateLink(const PrivateLink &) = default ;
        PrivateLink(PrivateLink &&) = default ;
        PrivateLink(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateLink() = default ;
        PrivateLink& operator=(const PrivateLink &) = default ;
        PrivateLink& operator=(PrivateLink &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Zones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Zones& obj) { 
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, Zones& obj) { 
            DARABONBA_PTR_FROM_JSON(status, status_);
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
          virtual bool empty() const override { return this->status_ == nullptr
        && this->zoneId_ == nullptr; };
          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Zones& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          // The connection status of the private endpoint in the zone. A value of Connected indicates that the endpoint is connected.
          shared_ptr<string> status_ {};
          // The zone ID of the private endpoint.
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->connectionStatus_ == nullptr
        && this->endpointDomain_ == nullptr && this->endpointId_ == nullptr && this->endpointSecurityGroupId_ == nullptr && this->endpointStatus_ == nullptr && this->lastErrorCode_ == nullptr
        && this->lastErrorMessage_ == nullptr && this->observedAt_ == nullptr && this->resourceMayBeCharged_ == nullptr && this->stage_ == nullptr && this->zones_ == nullptr; };
        // connectionStatus Field Functions 
        bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
        void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
        inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
        inline PrivateLink& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


        // endpointDomain Field Functions 
        bool hasEndpointDomain() const { return this->endpointDomain_ != nullptr;};
        void deleteEndpointDomain() { this->endpointDomain_ = nullptr;};
        inline string getEndpointDomain() const { DARABONBA_PTR_GET_DEFAULT(endpointDomain_, "") };
        inline PrivateLink& setEndpointDomain(string endpointDomain) { DARABONBA_PTR_SET_VALUE(endpointDomain_, endpointDomain) };


        // endpointId Field Functions 
        bool hasEndpointId() const { return this->endpointId_ != nullptr;};
        void deleteEndpointId() { this->endpointId_ = nullptr;};
        inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
        inline PrivateLink& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


        // endpointSecurityGroupId Field Functions 
        bool hasEndpointSecurityGroupId() const { return this->endpointSecurityGroupId_ != nullptr;};
        void deleteEndpointSecurityGroupId() { this->endpointSecurityGroupId_ = nullptr;};
        inline string getEndpointSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointSecurityGroupId_, "") };
        inline PrivateLink& setEndpointSecurityGroupId(string endpointSecurityGroupId) { DARABONBA_PTR_SET_VALUE(endpointSecurityGroupId_, endpointSecurityGroupId) };


        // endpointStatus Field Functions 
        bool hasEndpointStatus() const { return this->endpointStatus_ != nullptr;};
        void deleteEndpointStatus() { this->endpointStatus_ = nullptr;};
        inline string getEndpointStatus() const { DARABONBA_PTR_GET_DEFAULT(endpointStatus_, "") };
        inline PrivateLink& setEndpointStatus(string endpointStatus) { DARABONBA_PTR_SET_VALUE(endpointStatus_, endpointStatus) };


        // lastErrorCode Field Functions 
        bool hasLastErrorCode() const { return this->lastErrorCode_ != nullptr;};
        void deleteLastErrorCode() { this->lastErrorCode_ = nullptr;};
        inline string getLastErrorCode() const { DARABONBA_PTR_GET_DEFAULT(lastErrorCode_, "") };
        inline PrivateLink& setLastErrorCode(string lastErrorCode) { DARABONBA_PTR_SET_VALUE(lastErrorCode_, lastErrorCode) };


        // lastErrorMessage Field Functions 
        bool hasLastErrorMessage() const { return this->lastErrorMessage_ != nullptr;};
        void deleteLastErrorMessage() { this->lastErrorMessage_ = nullptr;};
        inline string getLastErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(lastErrorMessage_, "") };
        inline PrivateLink& setLastErrorMessage(string lastErrorMessage) { DARABONBA_PTR_SET_VALUE(lastErrorMessage_, lastErrorMessage) };


        // observedAt Field Functions 
        bool hasObservedAt() const { return this->observedAt_ != nullptr;};
        void deleteObservedAt() { this->observedAt_ = nullptr;};
        inline string getObservedAt() const { DARABONBA_PTR_GET_DEFAULT(observedAt_, "") };
        inline PrivateLink& setObservedAt(string observedAt) { DARABONBA_PTR_SET_VALUE(observedAt_, observedAt) };


        // resourceMayBeCharged Field Functions 
        bool hasResourceMayBeCharged() const { return this->resourceMayBeCharged_ != nullptr;};
        void deleteResourceMayBeCharged() { this->resourceMayBeCharged_ = nullptr;};
        inline bool getResourceMayBeCharged() const { DARABONBA_PTR_GET_DEFAULT(resourceMayBeCharged_, false) };
        inline PrivateLink& setResourceMayBeCharged(bool resourceMayBeCharged) { DARABONBA_PTR_SET_VALUE(resourceMayBeCharged_, resourceMayBeCharged) };


        // stage Field Functions 
        bool hasStage() const { return this->stage_ != nullptr;};
        void deleteStage() { this->stage_ = nullptr;};
        inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
        inline PrivateLink& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


        // zones Field Functions 
        bool hasZones() const { return this->zones_ != nullptr;};
        void deleteZones() { this->zones_ = nullptr;};
        inline const vector<PrivateLink::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<PrivateLink::Zones>) };
        inline vector<PrivateLink::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<PrivateLink::Zones>) };
        inline PrivateLink& setZones(const vector<PrivateLink::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
        inline PrivateLink& setZones(vector<PrivateLink::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


      protected:
        // The connection status between the internal endpoint and the endpoint service. A value of Connected indicates that the endpoint is connected.
        shared_ptr<string> connectionStatus_ {};
        // The access domain name of the internal endpoint, which can be used to access the gateway from the user VPC.
        shared_ptr<string> endpointDomain_ {};
        // The internal endpoint ID.
        shared_ptr<string> endpointId_ {};
        // The ID of the security group configured for the internal endpoint.
        shared_ptr<string> endpointSecurityGroupId_ {};
        // The status of the internal endpoint. A value of Active indicates that the endpoint is available.
        shared_ptr<string> endpointStatus_ {};
        // The error code of the most recent fault that occurred during the creation or delete procedure of the private network ingress. This parameter is not returned if no error message is available.
        shared_ptr<string> lastErrorCode_ {};
        // The description of the most recent fault that occurred during the creation or delete procedure of the private network ingress. You can use this description along with the error code to troubleshoot the issue. This parameter is not returned if no error message is available.
        shared_ptr<string> lastErrorMessage_ {};
        // The time when the system last retrieved the status of the private endpoint. The time is in RFC 3339 format. This parameter is not returned if the status has not been retrieved.
        shared_ptr<string> observedAt_ {};
        // Indicates whether the private endpoint may continue to incur charges. A value of true indicates that the endpoint is created and its release is not confirmed. A value of false indicates that no charge prompt is available. Actual charges are subject to the bill.
        shared_ptr<bool> resourceMayBeCharged_ {};
        // The current processing stage of the private endpoint. A value of Ready indicates that the private endpoint is ready.
        shared_ptr<string> stage_ {};
        // The list of zone information for the private endpoint.
        shared_ptr<vector<PrivateLink::Zones>> zones_ {};
      };

      class NetworkAccessConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkAccessConfig& obj) { 
          DARABONBA_PTR_TO_JSON(endpointSecurityGroupId, endpointSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkAccessConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(endpointSecurityGroupId, endpointSecurityGroupId_);
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
        virtual bool empty() const override { return this->endpointSecurityGroupId_ == nullptr
        && this->type_ == nullptr; };
        // endpointSecurityGroupId Field Functions 
        bool hasEndpointSecurityGroupId() const { return this->endpointSecurityGroupId_ != nullptr;};
        void deleteEndpointSecurityGroupId() { this->endpointSecurityGroupId_ = nullptr;};
        inline string getEndpointSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointSecurityGroupId_, "") };
        inline NetworkAccessConfig& setEndpointSecurityGroupId(string endpointSecurityGroupId) { DARABONBA_PTR_SET_VALUE(endpointSecurityGroupId_, endpointSecurityGroupId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline NetworkAccessConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the security group configured for the internal endpoint. The security group belongs to the VPC selected by the user and is an unmanaged security group.
        shared_ptr<string> endpointSecurityGroupId_ {};
        // The access endpoint type of the gateway. Valid values:
        // - Intranet: Internal endpoint only.
        // - InternetAndIntranet: Internet and internal endpoints.
        shared_ptr<string> type_ {};
      };

      class MaintenancePeriod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MaintenancePeriod& obj) { 
          DARABONBA_PTR_TO_JSON(endTime, endTime_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, MaintenancePeriod& obj) { 
          DARABONBA_PTR_FROM_JSON(endTime, endTime_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        MaintenancePeriod() = default ;
        MaintenancePeriod(const MaintenancePeriod &) = default ;
        MaintenancePeriod(MaintenancePeriod &&) = default ;
        MaintenancePeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MaintenancePeriod() = default ;
        MaintenancePeriod& operator=(const MaintenancePeriod &) = default ;
        MaintenancePeriod& operator=(MaintenancePeriod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline MaintenancePeriod& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline MaintenancePeriod& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The O&M end time in HH:mm format.
        shared_ptr<string> endTime_ {};
        // The O&M start time in HH:mm format.
        shared_ptr<string> startTime_ {};
      };

      class LoadBalancers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(addressIpVersion, addressIpVersion_);
          DARABONBA_PTR_TO_JSON(addressType, addressType_);
          DARABONBA_PTR_TO_JSON(gatewayDefault, gatewayDefault_);
          DARABONBA_PTR_TO_JSON(ipv4Addresses, ipv4Addresses_);
          DARABONBA_PTR_TO_JSON(ipv6Addresses, ipv6Addresses_);
          DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(mode, mode_);
          DARABONBA_PTR_TO_JSON(ports, ports_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(addressIpVersion, addressIpVersion_);
          DARABONBA_PTR_FROM_JSON(addressType, addressType_);
          DARABONBA_PTR_FROM_JSON(gatewayDefault, gatewayDefault_);
          DARABONBA_PTR_FROM_JSON(ipv4Addresses, ipv4Addresses_);
          DARABONBA_PTR_FROM_JSON(ipv6Addresses, ipv6Addresses_);
          DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(mode, mode_);
          DARABONBA_PTR_FROM_JSON(ports, ports_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        LoadBalancers() = default ;
        LoadBalancers(const LoadBalancers &) = default ;
        LoadBalancers(LoadBalancers &&) = default ;
        LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LoadBalancers() = default ;
        LoadBalancers& operator=(const LoadBalancers &) = default ;
        LoadBalancers& operator=(LoadBalancers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ports& obj) { 
            DARABONBA_PTR_TO_JSON(port, port_);
            DARABONBA_PTR_TO_JSON(protocol, protocol_);
          };
          friend void from_json(const Darabonba::Json& j, Ports& obj) { 
            DARABONBA_PTR_FROM_JSON(port, port_);
            DARABONBA_PTR_FROM_JSON(protocol, protocol_);
          };
          Ports() = default ;
          Ports(const Ports &) = default ;
          Ports(Ports &&) = default ;
          Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ports() = default ;
          Ports& operator=(const Ports &) = default ;
          Ports& operator=(Ports &&) = default ;
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
          inline Ports& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
          inline Ports& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        protected:
          // The port number.
          shared_ptr<int32_t> port_ {};
          // The protocol. Valid values:
          // - TCP: TCP.
          // - UDP: UDP.
          shared_ptr<string> protocol_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->addressIpVersion_ == nullptr && this->addressType_ == nullptr && this->gatewayDefault_ == nullptr && this->ipv4Addresses_ == nullptr && this->ipv6Addresses_ == nullptr
        && this->loadBalancerId_ == nullptr && this->mode_ == nullptr && this->ports_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline LoadBalancers& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // addressIpVersion Field Functions 
        bool hasAddressIpVersion() const { return this->addressIpVersion_ != nullptr;};
        void deleteAddressIpVersion() { this->addressIpVersion_ = nullptr;};
        inline string getAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIpVersion_, "") };
        inline LoadBalancers& setAddressIpVersion(string addressIpVersion) { DARABONBA_PTR_SET_VALUE(addressIpVersion_, addressIpVersion) };


        // addressType Field Functions 
        bool hasAddressType() const { return this->addressType_ != nullptr;};
        void deleteAddressType() { this->addressType_ = nullptr;};
        inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
        inline LoadBalancers& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


        // gatewayDefault Field Functions 
        bool hasGatewayDefault() const { return this->gatewayDefault_ != nullptr;};
        void deleteGatewayDefault() { this->gatewayDefault_ = nullptr;};
        inline bool getGatewayDefault() const { DARABONBA_PTR_GET_DEFAULT(gatewayDefault_, false) };
        inline LoadBalancers& setGatewayDefault(bool gatewayDefault) { DARABONBA_PTR_SET_VALUE(gatewayDefault_, gatewayDefault) };


        // ipv4Addresses Field Functions 
        bool hasIpv4Addresses() const { return this->ipv4Addresses_ != nullptr;};
        void deleteIpv4Addresses() { this->ipv4Addresses_ = nullptr;};
        inline const vector<string> & getIpv4Addresses() const { DARABONBA_PTR_GET_CONST(ipv4Addresses_, vector<string>) };
        inline vector<string> getIpv4Addresses() { DARABONBA_PTR_GET(ipv4Addresses_, vector<string>) };
        inline LoadBalancers& setIpv4Addresses(const vector<string> & ipv4Addresses) { DARABONBA_PTR_SET_VALUE(ipv4Addresses_, ipv4Addresses) };
        inline LoadBalancers& setIpv4Addresses(vector<string> && ipv4Addresses) { DARABONBA_PTR_SET_RVALUE(ipv4Addresses_, ipv4Addresses) };


        // ipv6Addresses Field Functions 
        bool hasIpv6Addresses() const { return this->ipv6Addresses_ != nullptr;};
        void deleteIpv6Addresses() { this->ipv6Addresses_ = nullptr;};
        inline const vector<string> & getIpv6Addresses() const { DARABONBA_PTR_GET_CONST(ipv6Addresses_, vector<string>) };
        inline vector<string> getIpv6Addresses() { DARABONBA_PTR_GET(ipv6Addresses_, vector<string>) };
        inline LoadBalancers& setIpv6Addresses(const vector<string> & ipv6Addresses) { DARABONBA_PTR_SET_VALUE(ipv6Addresses_, ipv6Addresses) };
        inline LoadBalancers& setIpv6Addresses(vector<string> && ipv6Addresses) { DARABONBA_PTR_SET_RVALUE(ipv6Addresses_, ipv6Addresses) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline LoadBalancers& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline LoadBalancers& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline const vector<LoadBalancers::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<LoadBalancers::Ports>) };
        inline vector<LoadBalancers::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<LoadBalancers::Ports>) };
        inline LoadBalancers& setPorts(const vector<LoadBalancers::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
        inline LoadBalancers& setPorts(vector<LoadBalancers::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline LoadBalancers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline LoadBalancers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The load balancing address.
        shared_ptr<string> address_ {};
        // The IP version. Valid values:
        // - ipv4: IPv4.
        // - ipv6: IPv6.
        shared_ptr<string> addressIpVersion_ {};
        // The load balancing address type. Valid values:
        // - Internet: Internet.
        // - Intranet: Private network.
        shared_ptr<string> addressType_ {};
        // Indicates whether the address is the default ingress address for the gateway.
        shared_ptr<bool> gatewayDefault_ {};
        // The list of IPv4 addresses.
        shared_ptr<vector<string>> ipv4Addresses_ {};
        // The list of IPv6 addresses.
        shared_ptr<vector<string>> ipv6Addresses_ {};
        // The load balancing ID.
        shared_ptr<string> loadBalancerId_ {};
        // The load balancing provisioning pattern for the gateway. Valid values:
        // - Managed: Managed by Cloud-native API Gateway.
        shared_ptr<string> mode_ {};
        // The list of listened ports.
        shared_ptr<vector<LoadBalancers::Ports>> ports_ {};
        // The status of the load balancing. Valid values:
        // - Ready: Active.
        // - NotCreate: Not associated with an instance.
        shared_ptr<string> status_ {};
        // The load balancing type. Valid values:
        // - NLB: Network Load Balancer (NLB).
        // - CLB: Classic Load Balancer.
        shared_ptr<string> type_ {};
      };

      class Environments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Environments& obj) { 
          DARABONBA_PTR_TO_JSON(alias, alias_);
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Environments& obj) { 
          DARABONBA_PTR_FROM_JSON(alias, alias_);
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
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
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->environmentId_ == nullptr && this->name_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline Environments& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Environments& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Environments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The environment alias.
        shared_ptr<string> alias_ {};
        // The environment ID.
        shared_ptr<string> environmentId_ {};
        // The environment name.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->createFrom_ == nullptr && this->createTimestamp_ == nullptr && this->elasticEnabled_ == nullptr && this->environments_ == nullptr && this->expireTimestamp_ == nullptr
        && this->gatewayEdition_ == nullptr && this->gatewayId_ == nullptr && this->gatewayMode_ == nullptr && this->gatewayType_ == nullptr && this->isp_ == nullptr
        && this->loadBalancers_ == nullptr && this->maintenancePeriod_ == nullptr && this->name_ == nullptr && this->networkAccessConfig_ == nullptr && this->privateLink_ == nullptr
        && this->replicas_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroup_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr
        && this->subDomainInfos_ == nullptr && this->tags_ == nullptr && this->targetVersion_ == nullptr && this->tenantId_ == nullptr && this->updateTimestamp_ == nullptr
        && this->vSwitch_ == nullptr && this->version_ == nullptr && this->vpc_ == nullptr && this->zones_ == nullptr; };
      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // createFrom Field Functions 
      bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
      void deleteCreateFrom() { this->createFrom_ = nullptr;};
      inline string getCreateFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
      inline Data& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Data& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // elasticEnabled Field Functions 
      bool hasElasticEnabled() const { return this->elasticEnabled_ != nullptr;};
      void deleteElasticEnabled() { this->elasticEnabled_ = nullptr;};
      inline bool getElasticEnabled() const { DARABONBA_PTR_GET_DEFAULT(elasticEnabled_, false) };
      inline Data& setElasticEnabled(bool elasticEnabled) { DARABONBA_PTR_SET_VALUE(elasticEnabled_, elasticEnabled) };


      // environments Field Functions 
      bool hasEnvironments() const { return this->environments_ != nullptr;};
      void deleteEnvironments() { this->environments_ = nullptr;};
      inline const vector<Data::Environments> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<Data::Environments>) };
      inline vector<Data::Environments> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<Data::Environments>) };
      inline Data& setEnvironments(const vector<Data::Environments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
      inline Data& setEnvironments(vector<Data::Environments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


      // expireTimestamp Field Functions 
      bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
      void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
      inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
      inline Data& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


      // gatewayEdition Field Functions 
      bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
      void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
      inline string getGatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
      inline Data& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
      inline Data& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayMode Field Functions 
      bool hasGatewayMode() const { return this->gatewayMode_ != nullptr;};
      void deleteGatewayMode() { this->gatewayMode_ = nullptr;};
      inline string getGatewayMode() const { DARABONBA_PTR_GET_DEFAULT(gatewayMode_, "") };
      inline Data& setGatewayMode(string gatewayMode) { DARABONBA_PTR_SET_VALUE(gatewayMode_, gatewayMode) };


      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline Data& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Data& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // loadBalancers Field Functions 
      bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
      void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
      inline const vector<Data::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<Data::LoadBalancers>) };
      inline vector<Data::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<Data::LoadBalancers>) };
      inline Data& setLoadBalancers(const vector<Data::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
      inline Data& setLoadBalancers(vector<Data::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


      // maintenancePeriod Field Functions 
      bool hasMaintenancePeriod() const { return this->maintenancePeriod_ != nullptr;};
      void deleteMaintenancePeriod() { this->maintenancePeriod_ = nullptr;};
      inline const Data::MaintenancePeriod & getMaintenancePeriod() const { DARABONBA_PTR_GET_CONST(maintenancePeriod_, Data::MaintenancePeriod) };
      inline Data::MaintenancePeriod getMaintenancePeriod() { DARABONBA_PTR_GET(maintenancePeriod_, Data::MaintenancePeriod) };
      inline Data& setMaintenancePeriod(const Data::MaintenancePeriod & maintenancePeriod) { DARABONBA_PTR_SET_VALUE(maintenancePeriod_, maintenancePeriod) };
      inline Data& setMaintenancePeriod(Data::MaintenancePeriod && maintenancePeriod) { DARABONBA_PTR_SET_RVALUE(maintenancePeriod_, maintenancePeriod) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkAccessConfig Field Functions 
      bool hasNetworkAccessConfig() const { return this->networkAccessConfig_ != nullptr;};
      void deleteNetworkAccessConfig() { this->networkAccessConfig_ = nullptr;};
      inline const Data::NetworkAccessConfig & getNetworkAccessConfig() const { DARABONBA_PTR_GET_CONST(networkAccessConfig_, Data::NetworkAccessConfig) };
      inline Data::NetworkAccessConfig getNetworkAccessConfig() { DARABONBA_PTR_GET(networkAccessConfig_, Data::NetworkAccessConfig) };
      inline Data& setNetworkAccessConfig(const Data::NetworkAccessConfig & networkAccessConfig) { DARABONBA_PTR_SET_VALUE(networkAccessConfig_, networkAccessConfig) };
      inline Data& setNetworkAccessConfig(Data::NetworkAccessConfig && networkAccessConfig) { DARABONBA_PTR_SET_RVALUE(networkAccessConfig_, networkAccessConfig) };


      // privateLink Field Functions 
      bool hasPrivateLink() const { return this->privateLink_ != nullptr;};
      void deletePrivateLink() { this->privateLink_ = nullptr;};
      inline const Data::PrivateLink & getPrivateLink() const { DARABONBA_PTR_GET_CONST(privateLink_, Data::PrivateLink) };
      inline Data::PrivateLink getPrivateLink() { DARABONBA_PTR_GET(privateLink_, Data::PrivateLink) };
      inline Data& setPrivateLink(const Data::PrivateLink & privateLink) { DARABONBA_PTR_SET_VALUE(privateLink_, privateLink) };
      inline Data& setPrivateLink(Data::PrivateLink && privateLink) { DARABONBA_PTR_SET_RVALUE(privateLink_, privateLink) };


      // replicas Field Functions 
      bool hasReplicas() const { return this->replicas_ != nullptr;};
      void deleteReplicas() { this->replicas_ = nullptr;};
      inline string getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
      inline Data& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroup Field Functions 
      bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
      void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
      inline const Data::SecurityGroup & getSecurityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, Data::SecurityGroup) };
      inline Data::SecurityGroup getSecurityGroup() { DARABONBA_PTR_GET(securityGroup_, Data::SecurityGroup) };
      inline Data& setSecurityGroup(const Data::SecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
      inline Data& setSecurityGroup(Data::SecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subDomainInfos Field Functions 
      bool hasSubDomainInfos() const { return this->subDomainInfos_ != nullptr;};
      void deleteSubDomainInfos() { this->subDomainInfos_ = nullptr;};
      inline const vector<SubDomainInfo> & getSubDomainInfos() const { DARABONBA_PTR_GET_CONST(subDomainInfos_, vector<SubDomainInfo>) };
      inline vector<SubDomainInfo> getSubDomainInfos() { DARABONBA_PTR_GET(subDomainInfos_, vector<SubDomainInfo>) };
      inline Data& setSubDomainInfos(const vector<SubDomainInfo> & subDomainInfos) { DARABONBA_PTR_SET_VALUE(subDomainInfos_, subDomainInfos) };
      inline Data& setSubDomainInfos(vector<SubDomainInfo> && subDomainInfos) { DARABONBA_PTR_SET_RVALUE(subDomainInfos_, subDomainInfos) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // targetVersion Field Functions 
      bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
      void deleteTargetVersion() { this->targetVersion_ = nullptr;};
      inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
      inline Data& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Data& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      // vSwitch Field Functions 
      bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
      void deleteVSwitch() { this->vSwitch_ = nullptr;};
      inline const Data::VSwitch & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Data::VSwitch) };
      inline Data::VSwitch getVSwitch() { DARABONBA_PTR_GET(vSwitch_, Data::VSwitch) };
      inline Data& setVSwitch(const Data::VSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
      inline Data& setVSwitch(Data::VSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline const Data::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, Data::Vpc) };
      inline Data::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, Data::Vpc) };
      inline Data& setVpc(const Data::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
      inline Data& setVpc(Data::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<Data::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Data::Zones>) };
      inline vector<Data::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<Data::Zones>) };
      inline Data& setZones(const vector<Data::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline Data& setZones(vector<Data::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The billing method. Valid values:
      // - POSTPAY: Pay-as-you-go.
      // - PREPAY: Subscription.
      shared_ptr<string> chargeType_ {};
      // The source from which the gateway was created. Valid values:
      // - Console: The console.
      shared_ptr<string> createFrom_ {};
      // The creation timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // Indicates whether elastic scaling is enabled. A value of true indicates that elastic scaling is enabled. A value of false indicates that elastic scaling is disabled. A value of null or a missing value indicates that the status is unknown. This parameter is for query and display purposes only.
      shared_ptr<bool> elasticEnabled_ {};
      // The list of environments associated with the gateway.
      shared_ptr<vector<Data::Environments>> environments_ {};
      // The expiration timestamp for subscription instances. Unit: milliseconds.
      shared_ptr<int64_t> expireTimestamp_ {};
      // The gateway edition. Valid values:
      // - Professional: Professional instance.
      // - Serverless: Serverless instance.
      shared_ptr<string> gatewayEdition_ {};
      // The gateway ID.
      shared_ptr<string> gatewayId_ {};
      // The AI multi-tenant V2 operation mode. The default value is ENTERPRISE. This parameter is allowed only for AI and MultiTenantServerless.
      shared_ptr<string> gatewayMode_ {};
      // The gateway type. Valid values:
      // - API: API gateway.
      // - AI: AI gateway.
      shared_ptr<string> gatewayType_ {};
      // The network ISP type.
      shared_ptr<string> isp_ {};
      // The list of ingress addresses for the gateway.
      shared_ptr<vector<Data::LoadBalancers>> loadBalancers_ {};
      // The O&M window.
      shared_ptr<Data::MaintenancePeriod> maintenancePeriod_ {};
      // The gateway name.
      shared_ptr<string> name_ {};
      // The network access configuration of the gateway, including the access endpoint type and the security group used by the internal endpoint. This parameter is returned only when the gateway is configured with an internal endpoint.
      shared_ptr<Data::NetworkAccessConfig> networkAccessConfig_ {};
      // The PrivateLink information of the gateway, including the endpoint ID, access domain name, connection status, and zone information.
      shared_ptr<Data::PrivateLink> privateLink_ {};
      // The number of nodes in the gateway instance.
      shared_ptr<string> replicas_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The security group of the gateway.
      shared_ptr<Data::SecurityGroup> securityGroup_ {};
      // The gateway specifications. Valid values:
      // - apigw.small.x1: Small.
      shared_ptr<string> spec_ {};
      // The gateway status. Valid values:
      // - Running: The gateway is running.
      // - Creating: The gateway is being created.
      // - CreateFailed: The gateway failed to be created.
      // - Upgrading: The gateway is being upgraded.
      // - UpgradeFailed: The gateway failed to be upgraded.
      // - Restarting: The gateway is being restarted.
      // - RestartFailed: The gateway failed to be restarted.
      // - Deleting: The gateway is being released.
      // - DeleteFailed: The gateway failed to be released.
      shared_ptr<string> status_ {};
      // The list of default access domain name information for the gateway. This parameter is not returned if no default domain name information is available.
      shared_ptr<vector<SubDomainInfo>> subDomainInfos_ {};
      // The resource tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The target version of the gateway. You can upgrade the gateway if this value is different from the current version.
      shared_ptr<string> targetVersion_ {};
      // The tenant ID returned in STANDARD mode.
      shared_ptr<string> tenantId_ {};
      // The update timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTimestamp_ {};
      // The vSwitch associated with the gateway.
      shared_ptr<Data::VSwitch> vSwitch_ {};
      // The gateway version.
      shared_ptr<string> version_ {};
      // The VPC associated with the gateway.
      shared_ptr<Data::Vpc> vpc_ {};
      // The list of zones associated with the gateway.
      shared_ptr<vector<Data::Zones>> zones_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetGatewayResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetGatewayResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetGatewayResponseBody::Data) };
    inline GetGatewayResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetGatewayResponseBody::Data) };
    inline GetGatewayResponseBody& setData(const GetGatewayResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetGatewayResponseBody& setData(GetGatewayResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetGatewayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetGatewayResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
