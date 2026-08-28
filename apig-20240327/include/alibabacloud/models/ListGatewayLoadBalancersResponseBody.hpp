// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYLOADBALANCERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYLOADBALANCERSRESPONSEBODY_HPP_
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
  class ListGatewayLoadBalancersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayLoadBalancersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewayLoadBalancersResponseBody() = default ;
    ListGatewayLoadBalancersResponseBody(const ListGatewayLoadBalancersResponseBody &) = default ;
    ListGatewayLoadBalancersResponseBody(ListGatewayLoadBalancersResponseBody &&) = default ;
    ListGatewayLoadBalancersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayLoadBalancersResponseBody() = default ;
    ListGatewayLoadBalancersResponseBody& operator=(const ListGatewayLoadBalancersResponseBody &) = default ;
    ListGatewayLoadBalancersResponseBody& operator=(ListGatewayLoadBalancersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
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
          DARABONBA_PTR_TO_JSON(defaultGatewayIngress, defaultGatewayIngress_);
          DARABONBA_PTR_TO_JSON(editEnable, editEnable_);
          DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(loadBalancerAddress, loadBalancerAddress_);
          DARABONBA_PTR_TO_JSON(loadBalancerAddressIpVersion, loadBalancerAddressIpVersion_);
          DARABONBA_PTR_TO_JSON(loadBalancerAddressType, loadBalancerAddressType_);
          DARABONBA_PTR_TO_JSON(loadBalancerAvailableStatus, loadBalancerAvailableStatus_);
          DARABONBA_PTR_TO_JSON(loadBalancerId, loadBalancerId_);
          DARABONBA_PTR_TO_JSON(loadBalancerMode, loadBalancerMode_);
          DARABONBA_PTR_TO_JSON(loadBalancerName, loadBalancerName_);
          DARABONBA_PTR_TO_JSON(loadBalancerSpec, loadBalancerSpec_);
          DARABONBA_PTR_TO_JSON(loadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_TO_JSON(loadBalancerType, loadBalancerType_);
          DARABONBA_PTR_TO_JSON(loadBalancerZoneMappings, loadBalancerZoneMappings_);
          DARABONBA_PTR_TO_JSON(ports, ports_);
          DARABONBA_PTR_TO_JSON(serviceWeight, serviceWeight_);
          DARABONBA_PTR_TO_JSON(vServerGroupMetaInfo, vServerGroupMetaInfo_);
          DARABONBA_PTR_TO_JSON(virtualServerGroupList, virtualServerGroupList_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(defaultGatewayIngress, defaultGatewayIngress_);
          DARABONBA_PTR_FROM_JSON(editEnable, editEnable_);
          DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(loadBalancerAddress, loadBalancerAddress_);
          DARABONBA_PTR_FROM_JSON(loadBalancerAddressIpVersion, loadBalancerAddressIpVersion_);
          DARABONBA_PTR_FROM_JSON(loadBalancerAddressType, loadBalancerAddressType_);
          DARABONBA_PTR_FROM_JSON(loadBalancerAvailableStatus, loadBalancerAvailableStatus_);
          DARABONBA_PTR_FROM_JSON(loadBalancerId, loadBalancerId_);
          DARABONBA_PTR_FROM_JSON(loadBalancerMode, loadBalancerMode_);
          DARABONBA_PTR_FROM_JSON(loadBalancerName, loadBalancerName_);
          DARABONBA_PTR_FROM_JSON(loadBalancerSpec, loadBalancerSpec_);
          DARABONBA_PTR_FROM_JSON(loadBalancerStatus, loadBalancerStatus_);
          DARABONBA_PTR_FROM_JSON(loadBalancerType, loadBalancerType_);
          DARABONBA_PTR_FROM_JSON(loadBalancerZoneMappings, loadBalancerZoneMappings_);
          DARABONBA_PTR_FROM_JSON(ports, ports_);
          DARABONBA_PTR_FROM_JSON(serviceWeight, serviceWeight_);
          DARABONBA_PTR_FROM_JSON(vServerGroupMetaInfo, vServerGroupMetaInfo_);
          DARABONBA_PTR_FROM_JSON(virtualServerGroupList, virtualServerGroupList_);
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
        class VirtualServerGroupList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VirtualServerGroupList& obj) { 
            DARABONBA_PTR_TO_JSON(listeners, listeners_);
            DARABONBA_PTR_TO_JSON(virtualServiceGroupId, virtualServiceGroupId_);
            DARABONBA_PTR_TO_JSON(virtualServiceGroupName, virtualServiceGroupName_);
          };
          friend void from_json(const Darabonba::Json& j, VirtualServerGroupList& obj) { 
            DARABONBA_PTR_FROM_JSON(listeners, listeners_);
            DARABONBA_PTR_FROM_JSON(virtualServiceGroupId, virtualServiceGroupId_);
            DARABONBA_PTR_FROM_JSON(virtualServiceGroupName, virtualServiceGroupName_);
          };
          VirtualServerGroupList() = default ;
          VirtualServerGroupList(const VirtualServerGroupList &) = default ;
          VirtualServerGroupList(VirtualServerGroupList &&) = default ;
          VirtualServerGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VirtualServerGroupList() = default ;
          VirtualServerGroupList& operator=(const VirtualServerGroupList &) = default ;
          VirtualServerGroupList& operator=(VirtualServerGroupList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Listeners : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
              DARABONBA_PTR_TO_JSON(port, port_);
              DARABONBA_PTR_TO_JSON(protocol, protocol_);
            };
            friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
              DARABONBA_PTR_FROM_JSON(port, port_);
              DARABONBA_PTR_FROM_JSON(protocol, protocol_);
            };
            Listeners() = default ;
            Listeners(const Listeners &) = default ;
            Listeners(Listeners &&) = default ;
            Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Listeners() = default ;
            Listeners& operator=(const Listeners &) = default ;
            Listeners& operator=(Listeners &&) = default ;
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
            inline Listeners& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // protocol Field Functions 
            bool hasProtocol() const { return this->protocol_ != nullptr;};
            void deleteProtocol() { this->protocol_ = nullptr;};
            inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
            inline Listeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          protected:
            shared_ptr<int32_t> port_ {};
            shared_ptr<string> protocol_ {};
          };

          virtual bool empty() const override { return this->listeners_ == nullptr
        && this->virtualServiceGroupId_ == nullptr && this->virtualServiceGroupName_ == nullptr; };
          // listeners Field Functions 
          bool hasListeners() const { return this->listeners_ != nullptr;};
          void deleteListeners() { this->listeners_ = nullptr;};
          inline const vector<VirtualServerGroupList::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<VirtualServerGroupList::Listeners>) };
          inline vector<VirtualServerGroupList::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<VirtualServerGroupList::Listeners>) };
          inline VirtualServerGroupList& setListeners(const vector<VirtualServerGroupList::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
          inline VirtualServerGroupList& setListeners(vector<VirtualServerGroupList::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


          // virtualServiceGroupId Field Functions 
          bool hasVirtualServiceGroupId() const { return this->virtualServiceGroupId_ != nullptr;};
          void deleteVirtualServiceGroupId() { this->virtualServiceGroupId_ = nullptr;};
          inline string getVirtualServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupId_, "") };
          inline VirtualServerGroupList& setVirtualServiceGroupId(string virtualServiceGroupId) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupId_, virtualServiceGroupId) };


          // virtualServiceGroupName Field Functions 
          bool hasVirtualServiceGroupName() const { return this->virtualServiceGroupName_ != nullptr;};
          void deleteVirtualServiceGroupName() { this->virtualServiceGroupName_ = nullptr;};
          inline string getVirtualServiceGroupName() const { DARABONBA_PTR_GET_DEFAULT(virtualServiceGroupName_, "") };
          inline VirtualServerGroupList& setVirtualServiceGroupName(string virtualServiceGroupName) { DARABONBA_PTR_SET_VALUE(virtualServiceGroupName_, virtualServiceGroupName) };


        protected:
          shared_ptr<vector<VirtualServerGroupList::Listeners>> listeners_ {};
          shared_ptr<string> virtualServiceGroupId_ {};
          shared_ptr<string> virtualServiceGroupName_ {};
        };

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
          shared_ptr<int32_t> port_ {};
          shared_ptr<string> protocol_ {};
        };

        class LoadBalancerZoneMappings : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LoadBalancerZoneMappings& obj) { 
            DARABONBA_PTR_TO_JSON(loadBalancerAddresses, loadBalancerAddresses_);
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, LoadBalancerZoneMappings& obj) { 
            DARABONBA_PTR_FROM_JSON(loadBalancerAddresses, loadBalancerAddresses_);
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
          };
          LoadBalancerZoneMappings() = default ;
          LoadBalancerZoneMappings(const LoadBalancerZoneMappings &) = default ;
          LoadBalancerZoneMappings(LoadBalancerZoneMappings &&) = default ;
          LoadBalancerZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LoadBalancerZoneMappings() = default ;
          LoadBalancerZoneMappings& operator=(const LoadBalancerZoneMappings &) = default ;
          LoadBalancerZoneMappings& operator=(LoadBalancerZoneMappings &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LoadBalancerAddresses : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LoadBalancerAddresses& obj) { 
              DARABONBA_PTR_TO_JSON(allocationId, allocationId_);
              DARABONBA_PTR_TO_JSON(eniId, eniId_);
              DARABONBA_PTR_TO_JSON(ipv4LocalAddresses, ipv4LocalAddresses_);
              DARABONBA_PTR_TO_JSON(ipv6Address, ipv6Address_);
              DARABONBA_PTR_TO_JSON(ipv6LocalAddresses, ipv6LocalAddresses_);
              DARABONBA_PTR_TO_JSON(privateIPv4Address, privateIPv4Address_);
              DARABONBA_PTR_TO_JSON(privateIPv4HcStatus, privateIPv4HcStatus_);
              DARABONBA_PTR_TO_JSON(privateIPv6HcStatus, privateIPv6HcStatus_);
              DARABONBA_PTR_TO_JSON(publicIPv4Address, publicIPv4Address_);
            };
            friend void from_json(const Darabonba::Json& j, LoadBalancerAddresses& obj) { 
              DARABONBA_PTR_FROM_JSON(allocationId, allocationId_);
              DARABONBA_PTR_FROM_JSON(eniId, eniId_);
              DARABONBA_PTR_FROM_JSON(ipv4LocalAddresses, ipv4LocalAddresses_);
              DARABONBA_PTR_FROM_JSON(ipv6Address, ipv6Address_);
              DARABONBA_PTR_FROM_JSON(ipv6LocalAddresses, ipv6LocalAddresses_);
              DARABONBA_PTR_FROM_JSON(privateIPv4Address, privateIPv4Address_);
              DARABONBA_PTR_FROM_JSON(privateIPv4HcStatus, privateIPv4HcStatus_);
              DARABONBA_PTR_FROM_JSON(privateIPv6HcStatus, privateIPv6HcStatus_);
              DARABONBA_PTR_FROM_JSON(publicIPv4Address, publicIPv4Address_);
            };
            LoadBalancerAddresses() = default ;
            LoadBalancerAddresses(const LoadBalancerAddresses &) = default ;
            LoadBalancerAddresses(LoadBalancerAddresses &&) = default ;
            LoadBalancerAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LoadBalancerAddresses() = default ;
            LoadBalancerAddresses& operator=(const LoadBalancerAddresses &) = default ;
            LoadBalancerAddresses& operator=(LoadBalancerAddresses &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->eniId_ == nullptr && this->ipv4LocalAddresses_ == nullptr && this->ipv6Address_ == nullptr && this->ipv6LocalAddresses_ == nullptr && this->privateIPv4Address_ == nullptr
        && this->privateIPv4HcStatus_ == nullptr && this->privateIPv6HcStatus_ == nullptr && this->publicIPv4Address_ == nullptr; };
            // allocationId Field Functions 
            bool hasAllocationId() const { return this->allocationId_ != nullptr;};
            void deleteAllocationId() { this->allocationId_ = nullptr;};
            inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
            inline LoadBalancerAddresses& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


            // eniId Field Functions 
            bool hasEniId() const { return this->eniId_ != nullptr;};
            void deleteEniId() { this->eniId_ = nullptr;};
            inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
            inline LoadBalancerAddresses& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


            // ipv4LocalAddresses Field Functions 
            bool hasIpv4LocalAddresses() const { return this->ipv4LocalAddresses_ != nullptr;};
            void deleteIpv4LocalAddresses() { this->ipv4LocalAddresses_ = nullptr;};
            inline const vector<string> & getIpv4LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv4LocalAddresses_, vector<string>) };
            inline vector<string> getIpv4LocalAddresses() { DARABONBA_PTR_GET(ipv4LocalAddresses_, vector<string>) };
            inline LoadBalancerAddresses& setIpv4LocalAddresses(const vector<string> & ipv4LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };
            inline LoadBalancerAddresses& setIpv4LocalAddresses(vector<string> && ipv4LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };


            // ipv6Address Field Functions 
            bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
            void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
            inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
            inline LoadBalancerAddresses& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


            // ipv6LocalAddresses Field Functions 
            bool hasIpv6LocalAddresses() const { return this->ipv6LocalAddresses_ != nullptr;};
            void deleteIpv6LocalAddresses() { this->ipv6LocalAddresses_ = nullptr;};
            inline const vector<string> & getIpv6LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv6LocalAddresses_, vector<string>) };
            inline vector<string> getIpv6LocalAddresses() { DARABONBA_PTR_GET(ipv6LocalAddresses_, vector<string>) };
            inline LoadBalancerAddresses& setIpv6LocalAddresses(const vector<string> & ipv6LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };
            inline LoadBalancerAddresses& setIpv6LocalAddresses(vector<string> && ipv6LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };


            // privateIPv4Address Field Functions 
            bool hasPrivateIPv4Address() const { return this->privateIPv4Address_ != nullptr;};
            void deletePrivateIPv4Address() { this->privateIPv4Address_ = nullptr;};
            inline string getPrivateIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4Address_, "") };
            inline LoadBalancerAddresses& setPrivateIPv4Address(string privateIPv4Address) { DARABONBA_PTR_SET_VALUE(privateIPv4Address_, privateIPv4Address) };


            // privateIPv4HcStatus Field Functions 
            bool hasPrivateIPv4HcStatus() const { return this->privateIPv4HcStatus_ != nullptr;};
            void deletePrivateIPv4HcStatus() { this->privateIPv4HcStatus_ = nullptr;};
            inline string getPrivateIPv4HcStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4HcStatus_, "") };
            inline LoadBalancerAddresses& setPrivateIPv4HcStatus(string privateIPv4HcStatus) { DARABONBA_PTR_SET_VALUE(privateIPv4HcStatus_, privateIPv4HcStatus) };


            // privateIPv6HcStatus Field Functions 
            bool hasPrivateIPv6HcStatus() const { return this->privateIPv6HcStatus_ != nullptr;};
            void deletePrivateIPv6HcStatus() { this->privateIPv6HcStatus_ = nullptr;};
            inline string getPrivateIPv6HcStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIPv6HcStatus_, "") };
            inline LoadBalancerAddresses& setPrivateIPv6HcStatus(string privateIPv6HcStatus) { DARABONBA_PTR_SET_VALUE(privateIPv6HcStatus_, privateIPv6HcStatus) };


            // publicIPv4Address Field Functions 
            bool hasPublicIPv4Address() const { return this->publicIPv4Address_ != nullptr;};
            void deletePublicIPv4Address() { this->publicIPv4Address_ = nullptr;};
            inline string getPublicIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(publicIPv4Address_, "") };
            inline LoadBalancerAddresses& setPublicIPv4Address(string publicIPv4Address) { DARABONBA_PTR_SET_VALUE(publicIPv4Address_, publicIPv4Address) };


          protected:
            shared_ptr<string> allocationId_ {};
            shared_ptr<string> eniId_ {};
            shared_ptr<vector<string>> ipv4LocalAddresses_ {};
            shared_ptr<string> ipv6Address_ {};
            shared_ptr<vector<string>> ipv6LocalAddresses_ {};
            shared_ptr<string> privateIPv4Address_ {};
            shared_ptr<string> privateIPv4HcStatus_ {};
            shared_ptr<string> privateIPv6HcStatus_ {};
            shared_ptr<string> publicIPv4Address_ {};
          };

          virtual bool empty() const override { return this->loadBalancerAddresses_ == nullptr
        && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
          // loadBalancerAddresses Field Functions 
          bool hasLoadBalancerAddresses() const { return this->loadBalancerAddresses_ != nullptr;};
          void deleteLoadBalancerAddresses() { this->loadBalancerAddresses_ = nullptr;};
          inline const vector<LoadBalancerZoneMappings::LoadBalancerAddresses> & getLoadBalancerAddresses() const { DARABONBA_PTR_GET_CONST(loadBalancerAddresses_, vector<LoadBalancerZoneMappings::LoadBalancerAddresses>) };
          inline vector<LoadBalancerZoneMappings::LoadBalancerAddresses> getLoadBalancerAddresses() { DARABONBA_PTR_GET(loadBalancerAddresses_, vector<LoadBalancerZoneMappings::LoadBalancerAddresses>) };
          inline LoadBalancerZoneMappings& setLoadBalancerAddresses(const vector<LoadBalancerZoneMappings::LoadBalancerAddresses> & loadBalancerAddresses) { DARABONBA_PTR_SET_VALUE(loadBalancerAddresses_, loadBalancerAddresses) };
          inline LoadBalancerZoneMappings& setLoadBalancerAddresses(vector<LoadBalancerZoneMappings::LoadBalancerAddresses> && loadBalancerAddresses) { DARABONBA_PTR_SET_RVALUE(loadBalancerAddresses_, loadBalancerAddresses) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline LoadBalancerZoneMappings& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline LoadBalancerZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline LoadBalancerZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<vector<LoadBalancerZoneMappings::LoadBalancerAddresses>> loadBalancerAddresses_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> vSwitchId_ {};
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->defaultGatewayIngress_ == nullptr
        && this->editEnable_ == nullptr && this->gatewayId_ == nullptr && this->loadBalancerAddress_ == nullptr && this->loadBalancerAddressIpVersion_ == nullptr && this->loadBalancerAddressType_ == nullptr
        && this->loadBalancerAvailableStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerMode_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerSpec_ == nullptr
        && this->loadBalancerStatus_ == nullptr && this->loadBalancerType_ == nullptr && this->loadBalancerZoneMappings_ == nullptr && this->ports_ == nullptr && this->serviceWeight_ == nullptr
        && this->vServerGroupMetaInfo_ == nullptr && this->virtualServerGroupList_ == nullptr; };
        // defaultGatewayIngress Field Functions 
        bool hasDefaultGatewayIngress() const { return this->defaultGatewayIngress_ != nullptr;};
        void deleteDefaultGatewayIngress() { this->defaultGatewayIngress_ = nullptr;};
        inline bool getDefaultGatewayIngress() const { DARABONBA_PTR_GET_DEFAULT(defaultGatewayIngress_, false) };
        inline Items& setDefaultGatewayIngress(bool defaultGatewayIngress) { DARABONBA_PTR_SET_VALUE(defaultGatewayIngress_, defaultGatewayIngress) };


        // editEnable Field Functions 
        bool hasEditEnable() const { return this->editEnable_ != nullptr;};
        void deleteEditEnable() { this->editEnable_ = nullptr;};
        inline bool getEditEnable() const { DARABONBA_PTR_GET_DEFAULT(editEnable_, false) };
        inline Items& setEditEnable(bool editEnable) { DARABONBA_PTR_SET_VALUE(editEnable_, editEnable) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
        inline Items& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // loadBalancerAddress Field Functions 
        bool hasLoadBalancerAddress() const { return this->loadBalancerAddress_ != nullptr;};
        void deleteLoadBalancerAddress() { this->loadBalancerAddress_ = nullptr;};
        inline string getLoadBalancerAddress() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerAddress_, "") };
        inline Items& setLoadBalancerAddress(string loadBalancerAddress) { DARABONBA_PTR_SET_VALUE(loadBalancerAddress_, loadBalancerAddress) };


        // loadBalancerAddressIpVersion Field Functions 
        bool hasLoadBalancerAddressIpVersion() const { return this->loadBalancerAddressIpVersion_ != nullptr;};
        void deleteLoadBalancerAddressIpVersion() { this->loadBalancerAddressIpVersion_ = nullptr;};
        inline string getLoadBalancerAddressIpVersion() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerAddressIpVersion_, "") };
        inline Items& setLoadBalancerAddressIpVersion(string loadBalancerAddressIpVersion) { DARABONBA_PTR_SET_VALUE(loadBalancerAddressIpVersion_, loadBalancerAddressIpVersion) };


        // loadBalancerAddressType Field Functions 
        bool hasLoadBalancerAddressType() const { return this->loadBalancerAddressType_ != nullptr;};
        void deleteLoadBalancerAddressType() { this->loadBalancerAddressType_ = nullptr;};
        inline string getLoadBalancerAddressType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerAddressType_, "") };
        inline Items& setLoadBalancerAddressType(string loadBalancerAddressType) { DARABONBA_PTR_SET_VALUE(loadBalancerAddressType_, loadBalancerAddressType) };


        // loadBalancerAvailableStatus Field Functions 
        bool hasLoadBalancerAvailableStatus() const { return this->loadBalancerAvailableStatus_ != nullptr;};
        void deleteLoadBalancerAvailableStatus() { this->loadBalancerAvailableStatus_ = nullptr;};
        inline string getLoadBalancerAvailableStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerAvailableStatus_, "") };
        inline Items& setLoadBalancerAvailableStatus(string loadBalancerAvailableStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerAvailableStatus_, loadBalancerAvailableStatus) };


        // loadBalancerId Field Functions 
        bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
        void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
        inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
        inline Items& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


        // loadBalancerMode Field Functions 
        bool hasLoadBalancerMode() const { return this->loadBalancerMode_ != nullptr;};
        void deleteLoadBalancerMode() { this->loadBalancerMode_ = nullptr;};
        inline string getLoadBalancerMode() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerMode_, "") };
        inline Items& setLoadBalancerMode(string loadBalancerMode) { DARABONBA_PTR_SET_VALUE(loadBalancerMode_, loadBalancerMode) };


        // loadBalancerName Field Functions 
        bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
        void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
        inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
        inline Items& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


        // loadBalancerSpec Field Functions 
        bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
        void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
        inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
        inline Items& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


        // loadBalancerStatus Field Functions 
        bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
        void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
        inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
        inline Items& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


        // loadBalancerType Field Functions 
        bool hasLoadBalancerType() const { return this->loadBalancerType_ != nullptr;};
        void deleteLoadBalancerType() { this->loadBalancerType_ = nullptr;};
        inline string getLoadBalancerType() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerType_, "") };
        inline Items& setLoadBalancerType(string loadBalancerType) { DARABONBA_PTR_SET_VALUE(loadBalancerType_, loadBalancerType) };


        // loadBalancerZoneMappings Field Functions 
        bool hasLoadBalancerZoneMappings() const { return this->loadBalancerZoneMappings_ != nullptr;};
        void deleteLoadBalancerZoneMappings() { this->loadBalancerZoneMappings_ = nullptr;};
        inline const vector<Items::LoadBalancerZoneMappings> & getLoadBalancerZoneMappings() const { DARABONBA_PTR_GET_CONST(loadBalancerZoneMappings_, vector<Items::LoadBalancerZoneMappings>) };
        inline vector<Items::LoadBalancerZoneMappings> getLoadBalancerZoneMappings() { DARABONBA_PTR_GET(loadBalancerZoneMappings_, vector<Items::LoadBalancerZoneMappings>) };
        inline Items& setLoadBalancerZoneMappings(const vector<Items::LoadBalancerZoneMappings> & loadBalancerZoneMappings) { DARABONBA_PTR_SET_VALUE(loadBalancerZoneMappings_, loadBalancerZoneMappings) };
        inline Items& setLoadBalancerZoneMappings(vector<Items::LoadBalancerZoneMappings> && loadBalancerZoneMappings) { DARABONBA_PTR_SET_RVALUE(loadBalancerZoneMappings_, loadBalancerZoneMappings) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline const vector<Items::Ports> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<Items::Ports>) };
        inline vector<Items::Ports> getPorts() { DARABONBA_PTR_GET(ports_, vector<Items::Ports>) };
        inline Items& setPorts(const vector<Items::Ports> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
        inline Items& setPorts(vector<Items::Ports> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        // serviceWeight Field Functions 
        bool hasServiceWeight() const { return this->serviceWeight_ != nullptr;};
        void deleteServiceWeight() { this->serviceWeight_ = nullptr;};
        inline int64_t getServiceWeight() const { DARABONBA_PTR_GET_DEFAULT(serviceWeight_, 0L) };
        inline Items& setServiceWeight(int64_t serviceWeight) { DARABONBA_PTR_SET_VALUE(serviceWeight_, serviceWeight) };


        // vServerGroupMetaInfo Field Functions 
        bool hasVServerGroupMetaInfo() const { return this->vServerGroupMetaInfo_ != nullptr;};
        void deleteVServerGroupMetaInfo() { this->vServerGroupMetaInfo_ = nullptr;};
        inline string getVServerGroupMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(vServerGroupMetaInfo_, "") };
        inline Items& setVServerGroupMetaInfo(string vServerGroupMetaInfo) { DARABONBA_PTR_SET_VALUE(vServerGroupMetaInfo_, vServerGroupMetaInfo) };


        // virtualServerGroupList Field Functions 
        bool hasVirtualServerGroupList() const { return this->virtualServerGroupList_ != nullptr;};
        void deleteVirtualServerGroupList() { this->virtualServerGroupList_ = nullptr;};
        inline const vector<Items::VirtualServerGroupList> & getVirtualServerGroupList() const { DARABONBA_PTR_GET_CONST(virtualServerGroupList_, vector<Items::VirtualServerGroupList>) };
        inline vector<Items::VirtualServerGroupList> getVirtualServerGroupList() { DARABONBA_PTR_GET(virtualServerGroupList_, vector<Items::VirtualServerGroupList>) };
        inline Items& setVirtualServerGroupList(const vector<Items::VirtualServerGroupList> & virtualServerGroupList) { DARABONBA_PTR_SET_VALUE(virtualServerGroupList_, virtualServerGroupList) };
        inline Items& setVirtualServerGroupList(vector<Items::VirtualServerGroupList> && virtualServerGroupList) { DARABONBA_PTR_SET_RVALUE(virtualServerGroupList_, virtualServerGroupList) };


      protected:
        shared_ptr<bool> defaultGatewayIngress_ {};
        shared_ptr<bool> editEnable_ {};
        shared_ptr<string> gatewayId_ {};
        shared_ptr<string> loadBalancerAddress_ {};
        shared_ptr<string> loadBalancerAddressIpVersion_ {};
        shared_ptr<string> loadBalancerAddressType_ {};
        shared_ptr<string> loadBalancerAvailableStatus_ {};
        shared_ptr<string> loadBalancerId_ {};
        shared_ptr<string> loadBalancerMode_ {};
        shared_ptr<string> loadBalancerName_ {};
        shared_ptr<string> loadBalancerSpec_ {};
        shared_ptr<string> loadBalancerStatus_ {};
        shared_ptr<string> loadBalancerType_ {};
        shared_ptr<vector<Items::LoadBalancerZoneMappings>> loadBalancerZoneMappings_ {};
        shared_ptr<vector<Items::Ports>> ports_ {};
        shared_ptr<int64_t> serviceWeight_ {};
        shared_ptr<string> vServerGroupMetaInfo_ {};
        shared_ptr<vector<Items::VirtualServerGroupList>> virtualServerGroupList_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<Data::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGatewayLoadBalancersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayLoadBalancersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayLoadBalancersResponseBody::Data) };
    inline ListGatewayLoadBalancersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayLoadBalancersResponseBody::Data) };
    inline ListGatewayLoadBalancersResponseBody& setData(const ListGatewayLoadBalancersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayLoadBalancersResponseBody& setData(ListGatewayLoadBalancersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayLoadBalancersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayLoadBalancersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListGatewayLoadBalancersResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
