// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODY_HPP_
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
        DARABONBA_PTR_TO_JSON(environments, environments_);
        DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
        DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
        DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(isp, isp_);
        DARABONBA_PTR_TO_JSON(loadBalancers, loadBalancers_);
        DARABONBA_PTR_TO_JSON(maintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(replicas, replicas_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(securityGroup, securityGroup_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
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
        DARABONBA_PTR_FROM_JSON(environments, environments_);
        DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
        DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
        DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(isp, isp_);
        DARABONBA_PTR_FROM_JSON(loadBalancers, loadBalancers_);
        DARABONBA_PTR_FROM_JSON(maintenancePeriod, maintenancePeriod_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(replicas, replicas_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(securityGroup, securityGroup_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
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
          // The vSwitch name.
          shared_ptr<string> name_ {};
          // The vSwitch ID.
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
        // The zone name.
        shared_ptr<string> name_ {};
        // The vSwitch information.
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
        // The VPC name.
        shared_ptr<string> name_ {};
        // The VPC ID.
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
        // The vSwitch name.
        shared_ptr<string> name_ {};
        // The vSwitch ID.
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
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
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
        // The security group name.
        shared_ptr<string> name_ {};
        // The security group ID.
        shared_ptr<string> securityGroupId_ {};
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
        shared_ptr<string> endTime_ {};
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
          // 
          // *   TCP
          // *   UDP
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
        // The load balancer IP address.
        shared_ptr<string> address_ {};
        // The IP version of the address. Valid values:
        // 
        // *   ipv4
        // *   ipv6
        shared_ptr<string> addressIpVersion_ {};
        // The load balancer address type. Valid values:
        // 
        // *   Internet
        // *   Intranet
        shared_ptr<string> addressType_ {};
        // Indicates whether the address is the default ingress address of the instance.
        shared_ptr<bool> gatewayDefault_ {};
        shared_ptr<vector<string>> ipv4Addresses_ {};
        shared_ptr<vector<string>> ipv6Addresses_ {};
        // The load balancer ID.
        shared_ptr<string> loadBalancerId_ {};
        // The mode in which the load balancer is provided. Valid values:
        // 
        // *   Managed: Cloud-native API Gateway manages and provides the load balancer.
        shared_ptr<string> mode_ {};
        // The list of listened ports.
        shared_ptr<vector<LoadBalancers::Ports>> ports_ {};
        // The load balancer status. Valid values:
        // 
        // *   Ready: The load balancer is available.
        // *   NotCreate: The load balancer is not associated with the instance.
        shared_ptr<string> status_ {};
        // The load balancer type. Valid values:
        // 
        // *   NLB: Network Load Balancer
        // *   CLB: Classic Load Balancer
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
        && this->createFrom_ == nullptr && this->createTimestamp_ == nullptr && this->environments_ == nullptr && this->expireTimestamp_ == nullptr && this->gatewayEdition_ == nullptr
        && this->gatewayId_ == nullptr && this->gatewayType_ == nullptr && this->isp_ == nullptr && this->loadBalancers_ == nullptr && this->maintenancePeriod_ == nullptr
        && this->name_ == nullptr && this->replicas_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroup_ == nullptr && this->spec_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->targetVersion_ == nullptr && this->updateTimestamp_ == nullptr && this->vSwitch_ == nullptr
        && this->version_ == nullptr && this->vpc_ == nullptr && this->zones_ == nullptr; };
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
      // 
      // *   POSTPAY: pay-as-you-go
      // *   PREPAY: subscription
      shared_ptr<string> chargeType_ {};
      // The creation source of the instance. Valid values:
      // 
      // *   Console
      shared_ptr<string> createFrom_ {};
      // The creation timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // The list of environments associated with the instance.
      shared_ptr<vector<Data::Environments>> environments_ {};
      // The time when the instance expires. This value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> expireTimestamp_ {};
      shared_ptr<string> gatewayEdition_ {};
      // The instance ID.
      shared_ptr<string> gatewayId_ {};
      // the gateway type, which is categorized into the following two types:
      // - API: indicates an API gateway
      // - AI: Indicates an AI gateway
      shared_ptr<string> gatewayType_ {};
      shared_ptr<string> isp_ {};
      // The ingress addresses of the instance.
      shared_ptr<vector<Data::LoadBalancers>> loadBalancers_ {};
      shared_ptr<Data::MaintenancePeriod> maintenancePeriod_ {};
      // The instance name.
      shared_ptr<string> name_ {};
      // The node quantity of the instance.
      shared_ptr<string> replicas_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The security group of the instance.
      shared_ptr<Data::SecurityGroup> securityGroup_ {};
      // The instance specification. Valid values:
      // 
      // *   apigw.small.x1
      shared_ptr<string> spec_ {};
      // The instance state. Valid values:
      // 
      // *   Running: The instance is running.
      // *   Creating: The instance is being created.
      // *   CreateFailed: The instance failed to be created.
      // *   Upgrading: The instance is being upgraded.
      // *   UpgradeFailed: The instance failed to be upgraded.
      // *   Restarting: The instance is being restarted.
      // *   RestartFailed: The instance failed to be restarted.
      // *   Deleting: The instance is being released.
      // *   DeleteFailed: The instance failed to be released.
      shared_ptr<string> status_ {};
      // The resource tags.
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The destination version of the instance. If the value is inconsistent with the version value, you can upgrade the instance.
      shared_ptr<string> targetVersion_ {};
      // The last update timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTimestamp_ {};
      // The vSwitch associated with the instance.
      shared_ptr<Data::VSwitch> vSwitch_ {};
      // The instance version.
      shared_ptr<string> version_ {};
      // The VPC associated with the instance.
      shared_ptr<Data::Vpc> vpc_ {};
      // The list of zones associated with the instance.
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
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetGatewayResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
