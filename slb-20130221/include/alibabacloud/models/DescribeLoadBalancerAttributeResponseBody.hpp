// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20130221
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IsPublicAddress, isPublicAddress_);
      DARABONBA_PTR_TO_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocal, listenerPortsAndProtocal_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocol, listenerPortsAndProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIdAlias, regionIdAlias_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IsPublicAddress, isPublicAddress_);
      DARABONBA_PTR_FROM_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocal, listenerPortsAndProtocal_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocol, listenerPortsAndProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIdAlias, regionIdAlias_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeLoadBalancerAttributeResponseBody() = default ;
    DescribeLoadBalancerAttributeResponseBody(const DescribeLoadBalancerAttributeResponseBody &) = default ;
    DescribeLoadBalancerAttributeResponseBody(DescribeLoadBalancerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerAttributeResponseBody() = default ;
    DescribeLoadBalancerAttributeResponseBody& operator=(const DescribeLoadBalancerAttributeResponseBody &) = default ;
    DescribeLoadBalancerAttributeResponseBody& operator=(DescribeLoadBalancerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListenerPortsAndProtocol : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListenerPortsAndProtocol& obj) { 
        DARABONBA_PTR_TO_JSON(ListenerPortAndProtocol, listenerPortAndProtocol_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerPortsAndProtocol& obj) { 
        DARABONBA_PTR_FROM_JSON(ListenerPortAndProtocol, listenerPortAndProtocol_);
      };
      ListenerPortsAndProtocol() = default ;
      ListenerPortsAndProtocol(const ListenerPortsAndProtocol &) = default ;
      ListenerPortsAndProtocol(ListenerPortsAndProtocol &&) = default ;
      ListenerPortsAndProtocol(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListenerPortsAndProtocol() = default ;
      ListenerPortsAndProtocol& operator=(const ListenerPortsAndProtocol &) = default ;
      ListenerPortsAndProtocol& operator=(ListenerPortsAndProtocol &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ListenerPortAndProtocol : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListenerPortAndProtocol& obj) { 
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
        };
        friend void from_json(const Darabonba::Json& j, ListenerPortAndProtocol& obj) { 
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
        };
        ListenerPortAndProtocol() = default ;
        ListenerPortAndProtocol(const ListenerPortAndProtocol &) = default ;
        ListenerPortAndProtocol(ListenerPortAndProtocol &&) = default ;
        ListenerPortAndProtocol(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListenerPortAndProtocol() = default ;
        ListenerPortAndProtocol& operator=(const ListenerPortAndProtocol &) = default ;
        ListenerPortAndProtocol& operator=(ListenerPortAndProtocol &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->listenerPort_ == nullptr
        && this->listenerProtocol_ == nullptr; };
        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
        inline ListenerPortAndProtocol& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // listenerProtocol Field Functions 
        bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
        void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
        inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
        inline ListenerPortAndProtocol& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


      protected:
        shared_ptr<int32_t> listenerPort_ {};
        shared_ptr<string> listenerProtocol_ {};
      };

      virtual bool empty() const override { return this->listenerPortAndProtocol_ == nullptr; };
      // listenerPortAndProtocol Field Functions 
      bool hasListenerPortAndProtocol() const { return this->listenerPortAndProtocol_ != nullptr;};
      void deleteListenerPortAndProtocol() { this->listenerPortAndProtocol_ = nullptr;};
      inline const vector<ListenerPortsAndProtocol::ListenerPortAndProtocol> & getListenerPortAndProtocol() const { DARABONBA_PTR_GET_CONST(listenerPortAndProtocol_, vector<ListenerPortsAndProtocol::ListenerPortAndProtocol>) };
      inline vector<ListenerPortsAndProtocol::ListenerPortAndProtocol> getListenerPortAndProtocol() { DARABONBA_PTR_GET(listenerPortAndProtocol_, vector<ListenerPortsAndProtocol::ListenerPortAndProtocol>) };
      inline ListenerPortsAndProtocol& setListenerPortAndProtocol(const vector<ListenerPortsAndProtocol::ListenerPortAndProtocol> & listenerPortAndProtocol) { DARABONBA_PTR_SET_VALUE(listenerPortAndProtocol_, listenerPortAndProtocol) };
      inline ListenerPortsAndProtocol& setListenerPortAndProtocol(vector<ListenerPortsAndProtocol::ListenerPortAndProtocol> && listenerPortAndProtocol) { DARABONBA_PTR_SET_RVALUE(listenerPortAndProtocol_, listenerPortAndProtocol) };


    protected:
      shared_ptr<vector<ListenerPortsAndProtocol::ListenerPortAndProtocol>> listenerPortAndProtocol_ {};
    };

    class ListenerPortsAndProtocal : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListenerPortsAndProtocal& obj) { 
        DARABONBA_PTR_TO_JSON(ListenerPortAndProtocal, listenerPortAndProtocal_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerPortsAndProtocal& obj) { 
        DARABONBA_PTR_FROM_JSON(ListenerPortAndProtocal, listenerPortAndProtocal_);
      };
      ListenerPortsAndProtocal() = default ;
      ListenerPortsAndProtocal(const ListenerPortsAndProtocal &) = default ;
      ListenerPortsAndProtocal(ListenerPortsAndProtocal &&) = default ;
      ListenerPortsAndProtocal(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListenerPortsAndProtocal() = default ;
      ListenerPortsAndProtocal& operator=(const ListenerPortsAndProtocal &) = default ;
      ListenerPortsAndProtocal& operator=(ListenerPortsAndProtocal &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ListenerPortAndProtocal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListenerPortAndProtocal& obj) { 
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(ListenerProtocal, listenerProtocal_);
        };
        friend void from_json(const Darabonba::Json& j, ListenerPortAndProtocal& obj) { 
          DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_FROM_JSON(ListenerProtocal, listenerProtocal_);
        };
        ListenerPortAndProtocal() = default ;
        ListenerPortAndProtocal(const ListenerPortAndProtocal &) = default ;
        ListenerPortAndProtocal(ListenerPortAndProtocal &&) = default ;
        ListenerPortAndProtocal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListenerPortAndProtocal() = default ;
        ListenerPortAndProtocal& operator=(const ListenerPortAndProtocal &) = default ;
        ListenerPortAndProtocal& operator=(ListenerPortAndProtocal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->listenerPort_ == nullptr
        && this->listenerProtocal_ == nullptr; };
        // listenerPort Field Functions 
        bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
        void deleteListenerPort() { this->listenerPort_ = nullptr;};
        inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
        inline ListenerPortAndProtocal& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


        // listenerProtocal Field Functions 
        bool hasListenerProtocal() const { return this->listenerProtocal_ != nullptr;};
        void deleteListenerProtocal() { this->listenerProtocal_ = nullptr;};
        inline string getListenerProtocal() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocal_, "") };
        inline ListenerPortAndProtocal& setListenerProtocal(string listenerProtocal) { DARABONBA_PTR_SET_VALUE(listenerProtocal_, listenerProtocal) };


      protected:
        shared_ptr<int32_t> listenerPort_ {};
        shared_ptr<string> listenerProtocal_ {};
      };

      virtual bool empty() const override { return this->listenerPortAndProtocal_ == nullptr; };
      // listenerPortAndProtocal Field Functions 
      bool hasListenerPortAndProtocal() const { return this->listenerPortAndProtocal_ != nullptr;};
      void deleteListenerPortAndProtocal() { this->listenerPortAndProtocal_ = nullptr;};
      inline const vector<ListenerPortsAndProtocal::ListenerPortAndProtocal> & getListenerPortAndProtocal() const { DARABONBA_PTR_GET_CONST(listenerPortAndProtocal_, vector<ListenerPortsAndProtocal::ListenerPortAndProtocal>) };
      inline vector<ListenerPortsAndProtocal::ListenerPortAndProtocal> getListenerPortAndProtocal() { DARABONBA_PTR_GET(listenerPortAndProtocal_, vector<ListenerPortsAndProtocal::ListenerPortAndProtocal>) };
      inline ListenerPortsAndProtocal& setListenerPortAndProtocal(const vector<ListenerPortsAndProtocal::ListenerPortAndProtocal> & listenerPortAndProtocal) { DARABONBA_PTR_SET_VALUE(listenerPortAndProtocal_, listenerPortAndProtocal) };
      inline ListenerPortsAndProtocal& setListenerPortAndProtocal(vector<ListenerPortsAndProtocal::ListenerPortAndProtocal> && listenerPortAndProtocal) { DARABONBA_PTR_SET_RVALUE(listenerPortAndProtocal_, listenerPortAndProtocal) };


    protected:
      shared_ptr<vector<ListenerPortsAndProtocal::ListenerPortAndProtocal>> listenerPortAndProtocal_ {};
    };

    class ListenerPorts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListenerPorts& obj) { 
        DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      };
      friend void from_json(const Darabonba::Json& j, ListenerPorts& obj) { 
        DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      };
      ListenerPorts() = default ;
      ListenerPorts(const ListenerPorts &) = default ;
      ListenerPorts(ListenerPorts &&) = default ;
      ListenerPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListenerPorts() = default ;
      ListenerPorts& operator=(const ListenerPorts &) = default ;
      ListenerPorts& operator=(ListenerPorts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->listenerPort_ == nullptr; };
      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline const vector<string> & getListenerPort() const { DARABONBA_PTR_GET_CONST(listenerPort_, vector<string>) };
      inline vector<string> getListenerPort() { DARABONBA_PTR_GET(listenerPort_, vector<string>) };
      inline ListenerPorts& setListenerPort(const vector<string> & listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };
      inline ListenerPorts& setListenerPort(vector<string> && listenerPort) { DARABONBA_PTR_SET_RVALUE(listenerPort_, listenerPort) };


    protected:
      shared_ptr<vector<string>> listenerPort_ {};
    };

    class BackendServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackendServers& obj) { 
        DARABONBA_PTR_TO_JSON(BackendServer, backendServer_);
      };
      friend void from_json(const Darabonba::Json& j, BackendServers& obj) { 
        DARABONBA_PTR_FROM_JSON(BackendServer, backendServer_);
      };
      BackendServers() = default ;
      BackendServers(const BackendServers &) = default ;
      BackendServers(BackendServers &&) = default ;
      BackendServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackendServers() = default ;
      BackendServers& operator=(const BackendServers &) = default ;
      BackendServers& operator=(BackendServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackendServer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackendServer& obj) { 
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        BackendServer() = default ;
        BackendServer(const BackendServer &) = default ;
        BackendServer(BackendServer &&) = default ;
        BackendServer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackendServer() = default ;
        BackendServer& operator=(const BackendServer &) = default ;
        BackendServer& operator=(BackendServer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->serverId_ == nullptr
        && this->weight_ == nullptr; };
        // serverId Field Functions 
        bool hasServerId() const { return this->serverId_ != nullptr;};
        void deleteServerId() { this->serverId_ = nullptr;};
        inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
        inline BackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline BackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> serverId_ {};
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->backendServer_ == nullptr; };
      // backendServer Field Functions 
      bool hasBackendServer() const { return this->backendServer_ != nullptr;};
      void deleteBackendServer() { this->backendServer_ = nullptr;};
      inline const vector<BackendServers::BackendServer> & getBackendServer() const { DARABONBA_PTR_GET_CONST(backendServer_, vector<BackendServers::BackendServer>) };
      inline vector<BackendServers::BackendServer> getBackendServer() { DARABONBA_PTR_GET(backendServer_, vector<BackendServers::BackendServer>) };
      inline BackendServers& setBackendServer(const vector<BackendServers::BackendServer> & backendServer) { DARABONBA_PTR_SET_VALUE(backendServer_, backendServer) };
      inline BackendServers& setBackendServer(vector<BackendServers::BackendServer> && backendServer) { DARABONBA_PTR_SET_RVALUE(backendServer_, backendServer) };


    protected:
      shared_ptr<vector<BackendServers::BackendServer>> backendServer_ {};
    };

    virtual bool empty() const override { return this->address_ == nullptr
        && this->addressType_ == nullptr && this->autoReleaseTime_ == nullptr && this->backendServers_ == nullptr && this->bandwidth_ == nullptr && this->createTime_ == nullptr
        && this->createTimeStamp_ == nullptr && this->endTime_ == nullptr && this->endTimeStamp_ == nullptr && this->internetChargeType_ == nullptr && this->isPublicAddress_ == nullptr
        && this->listenerPorts_ == nullptr && this->listenerPortsAndProtocal_ == nullptr && this->listenerPortsAndProtocol_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr
        && this->loadBalancerSpec_ == nullptr && this->loadBalancerStatus_ == nullptr && this->masterZoneId_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->regionIdAlias_ == nullptr && this->requestId_ == nullptr && this->slaveZoneId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline int64_t getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, 0L) };
    inline DescribeLoadBalancerAttributeResponseBody& setAutoReleaseTime(int64_t autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBody::BackendServers & getBackendServers() const { DARABONBA_PTR_GET_CONST(backendServers_, DescribeLoadBalancerAttributeResponseBody::BackendServers) };
    inline DescribeLoadBalancerAttributeResponseBody::BackendServers getBackendServers() { DARABONBA_PTR_GET(backendServers_, DescribeLoadBalancerAttributeResponseBody::BackendServers) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(const DescribeLoadBalancerAttributeResponseBody::BackendServers & backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };
    inline DescribeLoadBalancerAttributeResponseBody& setBackendServers(DescribeLoadBalancerAttributeResponseBody::BackendServers && backendServers) { DARABONBA_PTR_SET_RVALUE(backendServers_, backendServers) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline int64_t getCreateTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, 0L) };
    inline DescribeLoadBalancerAttributeResponseBody& setCreateTimeStamp(int64_t createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t getEndTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline DescribeLoadBalancerAttributeResponseBody& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // isPublicAddress Field Functions 
    bool hasIsPublicAddress() const { return this->isPublicAddress_ != nullptr;};
    void deleteIsPublicAddress() { this->isPublicAddress_ = nullptr;};
    inline string getIsPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(isPublicAddress_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setIsPublicAddress(string isPublicAddress) { DARABONBA_PTR_SET_VALUE(isPublicAddress_, isPublicAddress) };


    // listenerPorts Field Functions 
    bool hasListenerPorts() const { return this->listenerPorts_ != nullptr;};
    void deleteListenerPorts() { this->listenerPorts_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBody::ListenerPorts & getListenerPorts() const { DARABONBA_PTR_GET_CONST(listenerPorts_, DescribeLoadBalancerAttributeResponseBody::ListenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody::ListenerPorts getListenerPorts() { DARABONBA_PTR_GET(listenerPorts_, DescribeLoadBalancerAttributeResponseBody::ListenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(const DescribeLoadBalancerAttributeResponseBody::ListenerPorts & listenerPorts) { DARABONBA_PTR_SET_VALUE(listenerPorts_, listenerPorts) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPorts(DescribeLoadBalancerAttributeResponseBody::ListenerPorts && listenerPorts) { DARABONBA_PTR_SET_RVALUE(listenerPorts_, listenerPorts) };


    // listenerPortsAndProtocal Field Functions 
    bool hasListenerPortsAndProtocal() const { return this->listenerPortsAndProtocal_ != nullptr;};
    void deleteListenerPortsAndProtocal() { this->listenerPortsAndProtocal_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal & getListenerPortsAndProtocal() const { DARABONBA_PTR_GET_CONST(listenerPortsAndProtocal_, DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal getListenerPortsAndProtocal() { DARABONBA_PTR_GET(listenerPortsAndProtocal_, DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocal(const DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal & listenerPortsAndProtocal) { DARABONBA_PTR_SET_VALUE(listenerPortsAndProtocal_, listenerPortsAndProtocal) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocal(DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal && listenerPortsAndProtocal) { DARABONBA_PTR_SET_RVALUE(listenerPortsAndProtocal_, listenerPortsAndProtocal) };


    // listenerPortsAndProtocol Field Functions 
    bool hasListenerPortsAndProtocol() const { return this->listenerPortsAndProtocol_ != nullptr;};
    void deleteListenerPortsAndProtocol() { this->listenerPortsAndProtocol_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol & getListenerPortsAndProtocol() const { DARABONBA_PTR_GET_CONST(listenerPortsAndProtocol_, DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol getListenerPortsAndProtocol() { DARABONBA_PTR_GET(listenerPortsAndProtocol_, DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocol(const DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol & listenerPortsAndProtocol) { DARABONBA_PTR_SET_VALUE(listenerPortsAndProtocol_, listenerPortsAndProtocol) };
    inline DescribeLoadBalancerAttributeResponseBody& setListenerPortsAndProtocol(DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol && listenerPortsAndProtocol) { DARABONBA_PTR_SET_RVALUE(listenerPortsAndProtocol_, listenerPortsAndProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // loadBalancerName Field Functions 
    bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
    void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
    inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


    // loadBalancerSpec Field Functions 
    bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
    void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
    inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


    // loadBalancerStatus Field Functions 
    bool hasLoadBalancerStatus() const { return this->loadBalancerStatus_ != nullptr;};
    void deleteLoadBalancerStatus() { this->loadBalancerStatus_ = nullptr;};
    inline string getLoadBalancerStatus() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setLoadBalancerStatus(string loadBalancerStatus) { DARABONBA_PTR_SET_VALUE(loadBalancerStatus_, loadBalancerStatus) };


    // masterZoneId Field Functions 
    bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
    void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
    inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // regionIdAlias Field Functions 
    bool hasRegionIdAlias() const { return this->regionIdAlias_ != nullptr;};
    void deleteRegionIdAlias() { this->regionIdAlias_ = nullptr;};
    inline string getRegionIdAlias() const { DARABONBA_PTR_GET_DEFAULT(regionIdAlias_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRegionIdAlias(string regionIdAlias) { DARABONBA_PTR_SET_VALUE(regionIdAlias_, regionIdAlias) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string getSlaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<string> address_ {};
    shared_ptr<string> addressType_ {};
    shared_ptr<int64_t> autoReleaseTime_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::BackendServers> backendServers_ {};
    shared_ptr<int32_t> bandwidth_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> createTimeStamp_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> endTimeStamp_ {};
    shared_ptr<string> internetChargeType_ {};
    shared_ptr<string> isPublicAddress_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::ListenerPorts> listenerPorts_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal> listenerPortsAndProtocal_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol> listenerPortsAndProtocol_ {};
    shared_ptr<string> loadBalancerId_ {};
    shared_ptr<string> loadBalancerName_ {};
    shared_ptr<string> loadBalancerSpec_ {};
    shared_ptr<string> loadBalancerStatus_ {};
    shared_ptr<string> masterZoneId_ {};
    shared_ptr<string> networkType_ {};
    shared_ptr<string> payType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> regionIdAlias_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> slaveZoneId_ {};
    shared_ptr<string> vSwitchId_ {};
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20130221
#endif
