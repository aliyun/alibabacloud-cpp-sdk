// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocal, listenerPortsAndProtocal_);
      DARABONBA_PTR_TO_JSON(ListenerPortsAndProtocol, listenerPortsAndProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_TO_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegionIdAlias, regionIdAlias_);
      DARABONBA_PTR_TO_JSON(RenewalCycUnit, renewalCycUnit_);
      DARABONBA_PTR_TO_JSON(RenewalDuration, renewalDuration_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(DeleteProtection, deleteProtection_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(ListenerPorts, listenerPorts_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocal, listenerPortsAndProtocal_);
      DARABONBA_PTR_FROM_JSON(ListenerPortsAndProtocol, listenerPortsAndProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerStatus, loadBalancerStatus_);
      DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegionIdAlias, regionIdAlias_);
      DARABONBA_PTR_FROM_JSON(RenewalCycUnit, renewalCycUnit_);
      DARABONBA_PTR_FROM_JSON(RenewalDuration, renewalDuration_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveZoneId, slaveZoneId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
    };

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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
          DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
          DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
        };
        friend void from_json(const Darabonba::Json& j, ListenerPortAndProtocol& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
          DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->forwardPort_ == nullptr && this->listenerForward_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ListenerPortAndProtocol& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // forwardPort Field Functions 
        bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
        void deleteForwardPort() { this->forwardPort_ = nullptr;};
        inline int32_t getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
        inline ListenerPortAndProtocol& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


        // listenerForward Field Functions 
        bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
        void deleteListenerForward() { this->listenerForward_ = nullptr;};
        inline string getListenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
        inline ListenerPortAndProtocol& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


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
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> forwardPort_ {};
        shared_ptr<string> listenerForward_ {};
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
      inline const vector<int32_t> & getListenerPort() const { DARABONBA_PTR_GET_CONST(listenerPort_, vector<int32_t>) };
      inline vector<int32_t> getListenerPort() { DARABONBA_PTR_GET(listenerPort_, vector<int32_t>) };
      inline ListenerPorts& setListenerPort(const vector<int32_t> & listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };
      inline ListenerPorts& setListenerPort(vector<int32_t> && listenerPort) { DARABONBA_PTR_SET_RVALUE(listenerPort_, listenerPort) };


    protected:
      shared_ptr<vector<int32_t>> listenerPort_ {};
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ServerId, serverId_);
          DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, BackendServer& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
          DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->serverId_ == nullptr && this->serverIp_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BackendServer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // serverId Field Functions 
        bool hasServerId() const { return this->serverId_ != nullptr;};
        void deleteServerId() { this->serverId_ = nullptr;};
        inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
        inline BackendServer& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


        // serverIp Field Functions 
        bool hasServerIp() const { return this->serverIp_ != nullptr;};
        void deleteServerIp() { this->serverIp_ = nullptr;};
        inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
        inline BackendServer& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline BackendServer& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline BackendServer& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> serverId_ {};
        shared_ptr<string> serverIp_ {};
        shared_ptr<string> type_ {};
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
        && this->addressIPVersion_ == nullptr && this->addressType_ == nullptr && this->autoReleaseTime_ == nullptr && this->backendServers_ == nullptr && this->bandwidth_ == nullptr
        && this->createTime_ == nullptr && this->createTimeStamp_ == nullptr && this->deleteProtection_ == nullptr && this->endTime_ == nullptr && this->endTimeStamp_ == nullptr
        && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->listenerPorts_ == nullptr && this->listenerPortsAndProtocal_ == nullptr && this->listenerPortsAndProtocol_ == nullptr
        && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerSpec_ == nullptr && this->loadBalancerStatus_ == nullptr && this->masterZoneId_ == nullptr
        && this->modificationProtectionReason_ == nullptr && this->modificationProtectionStatus_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr && this->regionId_ == nullptr
        && this->regionIdAlias_ == nullptr && this->renewalCycUnit_ == nullptr && this->renewalDuration_ == nullptr && this->renewalStatus_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->slaveZoneId_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string getAddressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


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


    // deleteProtection Field Functions 
    bool hasDeleteProtection() const { return this->deleteProtection_ != nullptr;};
    void deleteDeleteProtection() { this->deleteProtection_ = nullptr;};
    inline string getDeleteProtection() const { DARABONBA_PTR_GET_DEFAULT(deleteProtection_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setDeleteProtection(string deleteProtection) { DARABONBA_PTR_SET_VALUE(deleteProtection_, deleteProtection) };


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


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


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


    // modificationProtectionReason Field Functions 
    bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
    void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
    inline string getModificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


    // modificationProtectionStatus Field Functions 
    bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
    void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
    inline string getModificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


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


    // renewalCycUnit Field Functions 
    bool hasRenewalCycUnit() const { return this->renewalCycUnit_ != nullptr;};
    void deleteRenewalCycUnit() { this->renewalCycUnit_ = nullptr;};
    inline string getRenewalCycUnit() const { DARABONBA_PTR_GET_DEFAULT(renewalCycUnit_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRenewalCycUnit(string renewalCycUnit) { DARABONBA_PTR_SET_VALUE(renewalCycUnit_, renewalCycUnit) };


    // renewalDuration Field Functions 
    bool hasRenewalDuration() const { return this->renewalDuration_ != nullptr;};
    void deleteRenewalDuration() { this->renewalDuration_ = nullptr;};
    inline int32_t getRenewalDuration() const { DARABONBA_PTR_GET_DEFAULT(renewalDuration_, 0) };
    inline DescribeLoadBalancerAttributeResponseBody& setRenewalDuration(int32_t renewalDuration) { DARABONBA_PTR_SET_VALUE(renewalDuration_, renewalDuration) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveZoneId Field Functions 
    bool hasSlaveZoneId() const { return this->slaveZoneId_ != nullptr;};
    void deleteSlaveZoneId() { this->slaveZoneId_ = nullptr;};
    inline string getSlaveZoneId() const { DARABONBA_PTR_GET_DEFAULT(slaveZoneId_, "") };
    inline DescribeLoadBalancerAttributeResponseBody& setSlaveZoneId(string slaveZoneId) { DARABONBA_PTR_SET_VALUE(slaveZoneId_, slaveZoneId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeLoadBalancerAttributeResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeLoadBalancerAttributeResponseBody::Tags) };
    inline DescribeLoadBalancerAttributeResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeLoadBalancerAttributeResponseBody::Tags) };
    inline DescribeLoadBalancerAttributeResponseBody& setTags(const DescribeLoadBalancerAttributeResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancerAttributeResponseBody& setTags(DescribeLoadBalancerAttributeResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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
    // The service IP address of the CLB instance.
    shared_ptr<string> address_ {};
    // The version of the IP address. Valid values: **ipv4** and **ipv6**.
    shared_ptr<string> addressIPVersion_ {};
    // The address type of the CLB instance.
    shared_ptr<string> addressType_ {};
    // The timestamp generated when the CLB instance is released.
    shared_ptr<int64_t> autoReleaseTime_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::BackendServers> backendServers_ {};
    // The maximum bandwidth of the Internet-facing CLB instance that is billed on a pay-by-bandwidth basis.
    shared_ptr<int32_t> bandwidth_ {};
    // The time when the CLB instance was created. The time is in the `YYYY-MM-DDThh:mm:ssZ` format.
    shared_ptr<string> createTime_ {};
    // The timestamp generated when the CA certificate is uploaded.
    shared_ptr<int64_t> createTimeStamp_ {};
    // Indicates whether deletion protection is enabled for the CLB instance.
    // 
    // Valid values: **on** and **off**.
    shared_ptr<string> deleteProtection_ {};
    // The time when the CLB instance expires.
    shared_ptr<string> endTime_ {};
    // The timestamp that indicates the expiration time of the CLB instance.
    shared_ptr<int64_t> endTimeStamp_ {};
    // The metering method of the CLB instance. Valid values:
    // 
    // *   **PayBySpec** (default)
    // *   **PayByCLCU**
    // 
    // > This parameter is available only on the China site and takes effect only when **PayType** is set to **PayOnDemand**.
    shared_ptr<string> instanceChargeType_ {};
    // The metering method of the Internet-facing CLB instance. Valid values:
    // 
    // *   **paybytraffic**
    // *   **paybybandwidth**
    shared_ptr<string> internetChargeType_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::ListenerPorts> listenerPorts_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocal> listenerPortsAndProtocal_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::ListenerPortsAndProtocol> listenerPortsAndProtocol_ {};
    // The CLB instance ID.
    shared_ptr<string> loadBalancerId_ {};
    // The name of the CLB instance.
    shared_ptr<string> loadBalancerName_ {};
    // The specification of the CLB instance.
    // 
    // >  Pay-as-you-go CLB instances are not subject to specifications. By default, **slb.lcu.elastic** is returned.
    shared_ptr<string> loadBalancerSpec_ {};
    // The status of the CLB instance. Valid values:
    // 
    // *   **inactive**: The CLB instance is disabled. CLB instances in the inactive state do not forward traffic.
    // *   **active**: The CLB instance is running as expected. Newly created CLB instances are in the **active** state by default.
    // *   **locked**: The CLB instance is locked. CLB instances may be locked due to overdue payments or other reasons.
    shared_ptr<string> loadBalancerStatus_ {};
    // The ID of the primary zone to which the CLB instance belongs.
    shared_ptr<string> masterZoneId_ {};
    // The reason why the configuration read-only mode is enabled. The value is 1 to 80 characters in length. It starts with a letter and can contain digits, periods (.), underscores (_), and hyphens (-).
    // 
    // >  This parameter is valid only when **ModificationProtectionStatus** is set to **ConsoleProtection**.
    shared_ptr<string> modificationProtectionReason_ {};
    // Indicates whether the configuration read-only mode is enabled. Valid values:
    // 
    // *   **NonProtection**: The configuration read-only mode is disabled. After you disable the configuration read-only mode, the value of **ModificationProtectionReason** is cleared.
    // *   **ConsoleProtection**: The configuration read-only mode is enabled.
    // 
    // >  If this parameter is set to **ConsoleProtection**, you cannot modify instance configurations in the CLB console. However, you can modify instance configurations by calling API operations.
    shared_ptr<string> modificationProtectionStatus_ {};
    // The network type of the CLB instance.
    shared_ptr<string> networkType_ {};
    // The billing method of the CLB instance. Valid values:
    // 
    // *   Only **PayOnDemand** may be returned, which indicates the pay-as-you-go billing method.
    shared_ptr<string> payType_ {};
    // The region ID of the CLB instance.
    shared_ptr<string> regionId_ {};
    // The alias of the region to which the CLB instance belongs.
    shared_ptr<string> regionIdAlias_ {};
    // The auto-renewal cycle. Valid values: **Year** and **Month**. Default value: Month.
    // 
    // >  This parameter is valid only if you create a subscription CLB instance on the Alibaba Cloud China site. In this case, **PayType** must be set to **PrePay** and **RenewalStatus** must be set to **AutoRenewal**.
    shared_ptr<string> renewalCycUnit_ {};
    // The auto-renewal duration. This parameter is valid only if **RenewalStatus** is set to **AutoRenewal**.
    // 
    // *   Valid values when **PeriodUnit** is set to **Year**: **1**~**5**.
    // 
    // *   Valid values when **PeriodUnit** is set to **Month**: **1**~ **9**.
    // 
    // > This parameter is valid only when you create a subscription CLB instance on the Alibaba Cloud China site. In this case, the **PayType** parameter must be set to **PrePay**.
    shared_ptr<int32_t> renewalDuration_ {};
    // Indicates whether auto-renewal is enabled. Valid values:
    // 
    // *   **AutoRenewal**: Auto-renewal is enabled.
    // 
    // *   **Normal**: Auto-renewal is disabled. You must manually renew the CLB instance.
    // 
    // *   **NotRenewal**: The CLB instance will not be renewed upon expiration. If this value is returned, the system does not send notifications until three days before the expiration date.
    // 
    //     **
    // 
    //     **Note** This parameter is valid only when you create a subscription CLB instance on the Alibaba Cloud China site. In this case, **PayType** must be set to **PrePay**.
    shared_ptr<string> renewalStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the secondary zone to which the CLB instance belongs.
    shared_ptr<string> slaveZoneId_ {};
    shared_ptr<DescribeLoadBalancerAttributeResponseBody::Tags> tags_ {};
    // The ID of the vSwitch to which the internal-facing CLB instance belongs.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC) where the internal-facing CLB instance is deployed.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
