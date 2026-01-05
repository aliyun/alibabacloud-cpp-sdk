// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODY_HPP_
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
  class ListGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewaysResponseBody() = default ;
    ListGatewaysResponseBody(const ListGatewaysResponseBody &) = default ;
    ListGatewaysResponseBody(ListGatewaysResponseBody &&) = default ;
    ListGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBody() = default ;
    ListGatewaysResponseBody& operator=(const ListGatewaysResponseBody &) = default ;
    ListGatewaysResponseBody& operator=(ListGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(totalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(totalSize, totalSize_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(createFrom, createFrom_);
          DARABONBA_PTR_TO_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(expireTimestamp, expireTimestamp_);
          DARABONBA_PTR_TO_JSON(gatewayEdition, gatewayEdition_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
          DARABONBA_PTR_TO_JSON(legacy, legacy_);
          DARABONBA_PTR_TO_JSON(loadBalancers, loadBalancers_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(replicas, replicas_);
          DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(securityGroup, securityGroup_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(subDomainInfos, subDomainInfos_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
          DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
          DARABONBA_PTR_TO_JSON(updateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(vpc, vpc_);
          DARABONBA_PTR_TO_JSON(zones, zones_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(createFrom, createFrom_);
          DARABONBA_PTR_FROM_JSON(createTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(expireTimestamp, expireTimestamp_);
          DARABONBA_PTR_FROM_JSON(gatewayEdition, gatewayEdition_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
          DARABONBA_PTR_FROM_JSON(legacy, legacy_);
          DARABONBA_PTR_FROM_JSON(loadBalancers, loadBalancers_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(replicas, replicas_);
          DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(securityGroup, securityGroup_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(subDomainInfos, subDomainInfos_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
          DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
          DARABONBA_PTR_FROM_JSON(updateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(vpc, vpc_);
          DARABONBA_PTR_FROM_JSON(zones, zones_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Zones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Zones& obj) { 
            DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
            DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, Zones& obj) { 
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
              DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
            };
            friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
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
            virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          protected:
            // The vSwitch ID.
            shared_ptr<string> vSwitchId_ {};
          };

          virtual bool empty() const override { return this->vSwitch_ == nullptr
        && this->zoneId_ == nullptr; };
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
          // The vSwitch information.
          shared_ptr<Zones::VSwitch> vSwitch_ {};
          // The zone ID.
          shared_ptr<string> zoneId_ {};
        };

        class Vpc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
            DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          };
          friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
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
          virtual bool empty() const override { return this->vpcId_ == nullptr; };
          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        protected:
          // The VPC ID.
          shared_ptr<string> vpcId_ {};
        };

        class VSwitch : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitch& obj) { 
            DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitch& obj) { 
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
          virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline VSwitch& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        protected:
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
            DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroup& obj) { 
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
          virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline SecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        protected:
          // The security group ID.
          shared_ptr<string> securityGroupId_ {};
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
          // *   ipv4: IPv4
          // *   ipv6: IPv6
          shared_ptr<string> addressIpVersion_ {};
          // The address type. Valid values:
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

        virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->createFrom_ == nullptr && this->createTimestamp_ == nullptr && this->expireTimestamp_ == nullptr && this->gatewayEdition_ == nullptr && this->gatewayId_ == nullptr
        && this->gatewayType_ == nullptr && this->legacy_ == nullptr && this->loadBalancers_ == nullptr && this->name_ == nullptr && this->replicas_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityGroup_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr && this->subDomainInfos_ == nullptr
        && this->tags_ == nullptr && this->targetVersion_ == nullptr && this->updateTimestamp_ == nullptr && this->vSwitch_ == nullptr && this->version_ == nullptr
        && this->vpc_ == nullptr && this->zones_ == nullptr; };
        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Items& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // createFrom Field Functions 
        bool hasCreateFrom() const { return this->createFrom_ != nullptr;};
        void deleteCreateFrom() { this->createFrom_ = nullptr;};
        inline string getCreateFrom() const { DARABONBA_PTR_GET_DEFAULT(createFrom_, "") };
        inline Items& setCreateFrom(string createFrom) { DARABONBA_PTR_SET_VALUE(createFrom_, createFrom) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Items& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // expireTimestamp Field Functions 
        bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
        void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
        inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
        inline Items& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


        // gatewayEdition Field Functions 
        bool hasGatewayEdition() const { return this->gatewayEdition_ != nullptr;};
        void deleteGatewayEdition() { this->gatewayEdition_ = nullptr;};
        inline string getGatewayEdition() const { DARABONBA_PTR_GET_DEFAULT(gatewayEdition_, "") };
        inline Items& setGatewayEdition(string gatewayEdition) { DARABONBA_PTR_SET_VALUE(gatewayEdition_, gatewayEdition) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayType Field Functions 
        bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
        void deleteGatewayType() { this->gatewayType_ = nullptr;};
        inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
        inline Items& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


        // legacy Field Functions 
        bool hasLegacy() const { return this->legacy_ != nullptr;};
        void deleteLegacy() { this->legacy_ = nullptr;};
        inline bool getLegacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
        inline Items& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


        // loadBalancers Field Functions 
        bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
        void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
        inline const vector<Items::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<Items::LoadBalancers>) };
        inline vector<Items::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<Items::LoadBalancers>) };
        inline Items& setLoadBalancers(const vector<Items::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
        inline Items& setLoadBalancers(vector<Items::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // replicas Field Functions 
        bool hasReplicas() const { return this->replicas_ != nullptr;};
        void deleteReplicas() { this->replicas_ = nullptr;};
        inline string getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, "") };
        inline Items& setReplicas(string replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Items& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // securityGroup Field Functions 
        bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
        void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
        inline const Items::SecurityGroup & getSecurityGroup() const { DARABONBA_PTR_GET_CONST(securityGroup_, Items::SecurityGroup) };
        inline Items::SecurityGroup getSecurityGroup() { DARABONBA_PTR_GET(securityGroup_, Items::SecurityGroup) };
        inline Items& setSecurityGroup(const Items::SecurityGroup & securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };
        inline Items& setSecurityGroup(Items::SecurityGroup && securityGroup) { DARABONBA_PTR_SET_RVALUE(securityGroup_, securityGroup) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Items& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subDomainInfos Field Functions 
        bool hasSubDomainInfos() const { return this->subDomainInfos_ != nullptr;};
        void deleteSubDomainInfos() { this->subDomainInfos_ = nullptr;};
        inline const vector<SubDomainInfo> & getSubDomainInfos() const { DARABONBA_PTR_GET_CONST(subDomainInfos_, vector<SubDomainInfo>) };
        inline vector<SubDomainInfo> getSubDomainInfos() { DARABONBA_PTR_GET(subDomainInfos_, vector<SubDomainInfo>) };
        inline Items& setSubDomainInfos(const vector<SubDomainInfo> & subDomainInfos) { DARABONBA_PTR_SET_VALUE(subDomainInfos_, subDomainInfos) };
        inline Items& setSubDomainInfos(vector<SubDomainInfo> && subDomainInfos) { DARABONBA_PTR_SET_RVALUE(subDomainInfos_, subDomainInfos) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Items::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Items::Tags>) };
        inline vector<Items::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Items::Tags>) };
        inline Items& setTags(const vector<Items::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Items& setTags(vector<Items::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // targetVersion Field Functions 
        bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
        void deleteTargetVersion() { this->targetVersion_ = nullptr;};
        inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
        inline Items& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Items& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // vSwitch Field Functions 
        bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
        void deleteVSwitch() { this->vSwitch_ = nullptr;};
        inline const Items::VSwitch & getVSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Items::VSwitch) };
        inline Items::VSwitch getVSwitch() { DARABONBA_PTR_GET(vSwitch_, Items::VSwitch) };
        inline Items& setVSwitch(const Items::VSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
        inline Items& setVSwitch(Items::VSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Items& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // vpc Field Functions 
        bool hasVpc() const { return this->vpc_ != nullptr;};
        void deleteVpc() { this->vpc_ = nullptr;};
        inline const Items::Vpc & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, Items::Vpc) };
        inline Items::Vpc getVpc() { DARABONBA_PTR_GET(vpc_, Items::Vpc) };
        inline Items& setVpc(const Items::Vpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
        inline Items& setVpc(Items::Vpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


        // zones Field Functions 
        bool hasZones() const { return this->zones_ != nullptr;};
        void deleteZones() { this->zones_ = nullptr;};
        inline const vector<Items::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Items::Zones>) };
        inline vector<Items::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<Items::Zones>) };
        inline Items& setZones(const vector<Items::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
        inline Items& setZones(vector<Items::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


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
        // The time when the instance was created. This value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> createTimestamp_ {};
        // The time when the instance expires. This value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> expireTimestamp_ {};
        shared_ptr<string> gatewayEdition_ {};
        // The instance ID.
        shared_ptr<string> gatewayId_ {};
        shared_ptr<string> gatewayType_ {};
        shared_ptr<bool> legacy_ {};
        // The ingress addresses of the instance.
        shared_ptr<vector<Items::LoadBalancers>> loadBalancers_ {};
        // The instance name.
        shared_ptr<string> name_ {};
        // The node quantity of the instance.
        shared_ptr<string> replicas_ {};
        // The resource group ID.
        shared_ptr<string> resourceGroupId_ {};
        // The security group information about the instance.
        shared_ptr<Items::SecurityGroup> securityGroup_ {};
        // The instance specification. Valid values:
        // 
        // *   apigw.small.x1
        shared_ptr<string> spec_ {};
        // The instance state. Valid values:
        // 
        // *   Running: The instance is running.
        // *   Creating: The instance is being created.
        // *   CreateFailed: The instance fails to be created.
        // *   Upgrading: The instance is being upgraded.
        // *   UpgradeFailed: The instance fails to be upgraded.
        // *   Restarting: The instance is being restarted.
        // *   RestartFailed: The instance fails to be restarted.
        // *   Deleting: The instance is being released.
        // *   DeleteFailed: The instance failed to be released.
        shared_ptr<string> status_ {};
        // The second-level domain names.
        shared_ptr<vector<SubDomainInfo>> subDomainInfos_ {};
        // The tags.
        shared_ptr<vector<Items::Tags>> tags_ {};
        // The destination version of the instance. If the value is inconsistent with the current version, you can upgrade the instance.
        shared_ptr<string> targetVersion_ {};
        // The time when the instance was last updated. This value is a UNIX timestamp. Unit: milliseconds.
        shared_ptr<int64_t> updateTimestamp_ {};
        // The vSwitch information.
        shared_ptr<Items::VSwitch> vSwitch_ {};
        // The instance version.
        shared_ptr<string> version_ {};
        // The virtual private cloud (VPC) information of the instance.
        shared_ptr<Items::Vpc> vpc_ {};
        // The availability zones of the instance.
        shared_ptr<vector<Items::Zones>> zones_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalSize_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The instances.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGatewaysResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewaysResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewaysResponseBody::Data) };
    inline ListGatewaysResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewaysResponseBody::Data) };
    inline ListGatewaysResponseBody& setData(const ListGatewaysResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewaysResponseBody& setData(ListGatewaysResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewaysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The instances.
    shared_ptr<ListGatewaysResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
