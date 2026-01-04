// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorFiltersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorFiltersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilters, trafficMirrorFilters_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorFiltersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilters, trafficMirrorFilters_);
    };
    ListTrafficMirrorFiltersResponseBody() = default ;
    ListTrafficMirrorFiltersResponseBody(const ListTrafficMirrorFiltersResponseBody &) = default ;
    ListTrafficMirrorFiltersResponseBody(ListTrafficMirrorFiltersResponseBody &&) = default ;
    ListTrafficMirrorFiltersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorFiltersResponseBody() = default ;
    ListTrafficMirrorFiltersResponseBody& operator=(const ListTrafficMirrorFiltersResponseBody &) = default ;
    ListTrafficMirrorFiltersResponseBody& operator=(ListTrafficMirrorFiltersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficMirrorFilters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficMirrorFilters& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EgressRules, egressRules_);
        DARABONBA_PTR_TO_JSON(IngressRules, ingressRules_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
        DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
        DARABONBA_PTR_TO_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
        DARABONBA_PTR_TO_JSON(TrafficMirrorFilterStatus, trafficMirrorFilterStatus_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficMirrorFilters& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EgressRules, egressRules_);
        DARABONBA_PTR_FROM_JSON(IngressRules, ingressRules_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
        DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
        DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
        DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterStatus, trafficMirrorFilterStatus_);
      };
      TrafficMirrorFilters() = default ;
      TrafficMirrorFilters(const TrafficMirrorFilters &) = default ;
      TrafficMirrorFilters(TrafficMirrorFilters &&) = default ;
      TrafficMirrorFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficMirrorFilters() = default ;
      TrafficMirrorFilters& operator=(const TrafficMirrorFilters &) = default ;
      TrafficMirrorFilters& operator=(TrafficMirrorFilters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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

      class IngressRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IngressRules& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
          DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_TO_JSON(TrafficDirection, trafficDirection_);
          DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
          DARABONBA_PTR_TO_JSON(TrafficMirrorFilterRuleId, trafficMirrorFilterRuleId_);
          DARABONBA_PTR_TO_JSON(TrafficMirrorFilterRuleStatus, trafficMirrorFilterRuleStatus_);
        };
        friend void from_json(const Darabonba::Json& j, IngressRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
          DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_FROM_JSON(TrafficDirection, trafficDirection_);
          DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
          DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterRuleId, trafficMirrorFilterRuleId_);
          DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterRuleStatus, trafficMirrorFilterRuleStatus_);
        };
        IngressRules() = default ;
        IngressRules(const IngressRules &) = default ;
        IngressRules(IngressRules &&) = default ;
        IngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IngressRules() = default ;
        IngressRules& operator=(const IngressRules &) = default ;
        IngressRules& operator=(IngressRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->destinationPortRange_ == nullptr && this->ipVersion_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr
        && this->sourceCidrBlock_ == nullptr && this->sourcePortRange_ == nullptr && this->trafficDirection_ == nullptr && this->trafficMirrorFilterId_ == nullptr && this->trafficMirrorFilterRuleId_ == nullptr
        && this->trafficMirrorFilterRuleStatus_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline IngressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline IngressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // destinationPortRange Field Functions 
        bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
        void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
        inline string getDestinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
        inline IngressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline IngressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline IngressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline IngressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // sourceCidrBlock Field Functions 
        bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
        void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
        inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
        inline IngressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


        // sourcePortRange Field Functions 
        bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
        void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
        inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
        inline IngressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


        // trafficDirection Field Functions 
        bool hasTrafficDirection() const { return this->trafficDirection_ != nullptr;};
        void deleteTrafficDirection() { this->trafficDirection_ = nullptr;};
        inline string getTrafficDirection() const { DARABONBA_PTR_GET_DEFAULT(trafficDirection_, "") };
        inline IngressRules& setTrafficDirection(string trafficDirection) { DARABONBA_PTR_SET_VALUE(trafficDirection_, trafficDirection) };


        // trafficMirrorFilterId Field Functions 
        bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
        void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
        inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
        inline IngressRules& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


        // trafficMirrorFilterRuleId Field Functions 
        bool hasTrafficMirrorFilterRuleId() const { return this->trafficMirrorFilterRuleId_ != nullptr;};
        void deleteTrafficMirrorFilterRuleId() { this->trafficMirrorFilterRuleId_ = nullptr;};
        inline string getTrafficMirrorFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleId_, "") };
        inline IngressRules& setTrafficMirrorFilterRuleId(string trafficMirrorFilterRuleId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleId_, trafficMirrorFilterRuleId) };


        // trafficMirrorFilterRuleStatus Field Functions 
        bool hasTrafficMirrorFilterRuleStatus() const { return this->trafficMirrorFilterRuleStatus_ != nullptr;};
        void deleteTrafficMirrorFilterRuleStatus() { this->trafficMirrorFilterRuleStatus_ = nullptr;};
        inline string getTrafficMirrorFilterRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleStatus_, "") };
        inline IngressRules& setTrafficMirrorFilterRuleStatus(string trafficMirrorFilterRuleStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleStatus_, trafficMirrorFilterRuleStatus) };


      protected:
        // The action of the inbound rule. Valid values:
        // 
        // *   **accept**
        // *   **drop**
        shared_ptr<string> action_ {};
        // The destination CIDR block of the inbound traffic.
        shared_ptr<string> destinationCidrBlock_ {};
        // The destination port range of the inbound traffic.
        shared_ptr<string> destinationPortRange_ {};
        // The version of IP protocol.
        shared_ptr<string> ipVersion_ {};
        // The priority of the inbound rule. A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
        // The protocol that is used by the inbound traffic to be mirrored. Valid values:
        // 
        // *   **ALL**
        // *   **ICMP**
        // *   **TCP**
        // *   **UDP**
        shared_ptr<string> protocol_ {};
        // The source CIDR block of the inbound traffic.
        shared_ptr<string> sourceCidrBlock_ {};
        // The destination port range of the inbound traffic.
        shared_ptr<string> sourcePortRange_ {};
        // The direction of the network traffic. Valid values:
        // 
        // *   **egress**
        // *   **ingress**
        shared_ptr<string> trafficDirection_ {};
        // The ID of the filter associated with the inbound rule.
        shared_ptr<string> trafficMirrorFilterId_ {};
        // The ID of the inbound rule.
        shared_ptr<string> trafficMirrorFilterRuleId_ {};
        // The status of the inbound rule. Valid values:
        // 
        // *   **Creating**
        // *   **Created**
        // *   **Modifying**
        // *   **Deleting**
        shared_ptr<string> trafficMirrorFilterRuleStatus_ {};
      };

      class EgressRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EgressRules& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
          DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_TO_JSON(TrafficDirection, trafficDirection_);
          DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
          DARABONBA_PTR_TO_JSON(TrafficMirrorFilterRuleId, trafficMirrorFilterRuleId_);
          DARABONBA_PTR_TO_JSON(TrafficMirrorFilterRuleStatus, trafficMirrorFilterRuleStatus_);
        };
        friend void from_json(const Darabonba::Json& j, EgressRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
          DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_FROM_JSON(TrafficDirection, trafficDirection_);
          DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
          DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterRuleId, trafficMirrorFilterRuleId_);
          DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterRuleStatus, trafficMirrorFilterRuleStatus_);
        };
        EgressRules() = default ;
        EgressRules(const EgressRules &) = default ;
        EgressRules(EgressRules &&) = default ;
        EgressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EgressRules() = default ;
        EgressRules& operator=(const EgressRules &) = default ;
        EgressRules& operator=(EgressRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->destinationPortRange_ == nullptr && this->ipVersion_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr
        && this->sourceCidrBlock_ == nullptr && this->sourcePortRange_ == nullptr && this->trafficDirection_ == nullptr && this->trafficMirrorFilterId_ == nullptr && this->trafficMirrorFilterRuleId_ == nullptr
        && this->trafficMirrorFilterRuleStatus_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline EgressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline EgressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // destinationPortRange Field Functions 
        bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
        void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
        inline string getDestinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
        inline EgressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline EgressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline EgressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline EgressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // sourceCidrBlock Field Functions 
        bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
        void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
        inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
        inline EgressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


        // sourcePortRange Field Functions 
        bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
        void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
        inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
        inline EgressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


        // trafficDirection Field Functions 
        bool hasTrafficDirection() const { return this->trafficDirection_ != nullptr;};
        void deleteTrafficDirection() { this->trafficDirection_ = nullptr;};
        inline string getTrafficDirection() const { DARABONBA_PTR_GET_DEFAULT(trafficDirection_, "") };
        inline EgressRules& setTrafficDirection(string trafficDirection) { DARABONBA_PTR_SET_VALUE(trafficDirection_, trafficDirection) };


        // trafficMirrorFilterId Field Functions 
        bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
        void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
        inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
        inline EgressRules& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


        // trafficMirrorFilterRuleId Field Functions 
        bool hasTrafficMirrorFilterRuleId() const { return this->trafficMirrorFilterRuleId_ != nullptr;};
        void deleteTrafficMirrorFilterRuleId() { this->trafficMirrorFilterRuleId_ = nullptr;};
        inline string getTrafficMirrorFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleId_, "") };
        inline EgressRules& setTrafficMirrorFilterRuleId(string trafficMirrorFilterRuleId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleId_, trafficMirrorFilterRuleId) };


        // trafficMirrorFilterRuleStatus Field Functions 
        bool hasTrafficMirrorFilterRuleStatus() const { return this->trafficMirrorFilterRuleStatus_ != nullptr;};
        void deleteTrafficMirrorFilterRuleStatus() { this->trafficMirrorFilterRuleStatus_ = nullptr;};
        inline string getTrafficMirrorFilterRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleStatus_, "") };
        inline EgressRules& setTrafficMirrorFilterRuleStatus(string trafficMirrorFilterRuleStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleStatus_, trafficMirrorFilterRuleStatus) };


      protected:
        // The action of the outbound rule. Valid values:
        // 
        // *   **accept**
        // *   **drop**
        shared_ptr<string> action_ {};
        // The destination CIDR block of the outbound traffic.
        shared_ptr<string> destinationCidrBlock_ {};
        // The destination port range of the outbound traffic.
        shared_ptr<string> destinationPortRange_ {};
        // The version of IP protocol.
        shared_ptr<string> ipVersion_ {};
        // The priority of the outbound rule. A smaller value indicates a higher priority.
        shared_ptr<int32_t> priority_ {};
        // The protocol that is used by the outbound traffic to be mirrored. Valid values:
        // 
        // *   **ALL**
        // *   **ICMP**
        // *   **TCP**
        // *   **UDP**
        shared_ptr<string> protocol_ {};
        // The source CIDR block of the outbound traffic.
        shared_ptr<string> sourceCidrBlock_ {};
        // The source port range of the outbound traffic.
        shared_ptr<string> sourcePortRange_ {};
        // The direction of the network traffic. Valid values:
        // 
        // *   **egress**
        // *   **ingress**
        shared_ptr<string> trafficDirection_ {};
        // The ID of the filter associated with the outbound rule.
        shared_ptr<string> trafficMirrorFilterId_ {};
        // The ID of the outbound rule.
        shared_ptr<string> trafficMirrorFilterRuleId_ {};
        // The status of the outbound rule. Valid values:
        // 
        // *   **Creating**
        // *   **Created**
        // *   **Modifying**
        // *   **Deleting**
        shared_ptr<string> trafficMirrorFilterRuleStatus_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->egressRules_ == nullptr && this->ingressRules_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->trafficMirrorFilterDescription_ == nullptr
        && this->trafficMirrorFilterId_ == nullptr && this->trafficMirrorFilterName_ == nullptr && this->trafficMirrorFilterStatus_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline TrafficMirrorFilters& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // egressRules Field Functions 
      bool hasEgressRules() const { return this->egressRules_ != nullptr;};
      void deleteEgressRules() { this->egressRules_ = nullptr;};
      inline const vector<TrafficMirrorFilters::EgressRules> & getEgressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<TrafficMirrorFilters::EgressRules>) };
      inline vector<TrafficMirrorFilters::EgressRules> getEgressRules() { DARABONBA_PTR_GET(egressRules_, vector<TrafficMirrorFilters::EgressRules>) };
      inline TrafficMirrorFilters& setEgressRules(const vector<TrafficMirrorFilters::EgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
      inline TrafficMirrorFilters& setEgressRules(vector<TrafficMirrorFilters::EgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


      // ingressRules Field Functions 
      bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
      void deleteIngressRules() { this->ingressRules_ = nullptr;};
      inline const vector<TrafficMirrorFilters::IngressRules> & getIngressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<TrafficMirrorFilters::IngressRules>) };
      inline vector<TrafficMirrorFilters::IngressRules> getIngressRules() { DARABONBA_PTR_GET(ingressRules_, vector<TrafficMirrorFilters::IngressRules>) };
      inline TrafficMirrorFilters& setIngressRules(const vector<TrafficMirrorFilters::IngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
      inline TrafficMirrorFilters& setIngressRules(vector<TrafficMirrorFilters::IngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline TrafficMirrorFilters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TrafficMirrorFilters::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TrafficMirrorFilters::Tags>) };
      inline vector<TrafficMirrorFilters::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TrafficMirrorFilters::Tags>) };
      inline TrafficMirrorFilters& setTags(const vector<TrafficMirrorFilters::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TrafficMirrorFilters& setTags(vector<TrafficMirrorFilters::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // trafficMirrorFilterDescription Field Functions 
      bool hasTrafficMirrorFilterDescription() const { return this->trafficMirrorFilterDescription_ != nullptr;};
      void deleteTrafficMirrorFilterDescription() { this->trafficMirrorFilterDescription_ = nullptr;};
      inline string getTrafficMirrorFilterDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterDescription_, "") };
      inline TrafficMirrorFilters& setTrafficMirrorFilterDescription(string trafficMirrorFilterDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterDescription_, trafficMirrorFilterDescription) };


      // trafficMirrorFilterId Field Functions 
      bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
      void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
      inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
      inline TrafficMirrorFilters& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


      // trafficMirrorFilterName Field Functions 
      bool hasTrafficMirrorFilterName() const { return this->trafficMirrorFilterName_ != nullptr;};
      void deleteTrafficMirrorFilterName() { this->trafficMirrorFilterName_ = nullptr;};
      inline string getTrafficMirrorFilterName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterName_, "") };
      inline TrafficMirrorFilters& setTrafficMirrorFilterName(string trafficMirrorFilterName) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterName_, trafficMirrorFilterName) };


      // trafficMirrorFilterStatus Field Functions 
      bool hasTrafficMirrorFilterStatus() const { return this->trafficMirrorFilterStatus_ != nullptr;};
      void deleteTrafficMirrorFilterStatus() { this->trafficMirrorFilterStatus_ = nullptr;};
      inline string getTrafficMirrorFilterStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterStatus_, "") };
      inline TrafficMirrorFilters& setTrafficMirrorFilterStatus(string trafficMirrorFilterStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterStatus_, trafficMirrorFilterStatus) };


    protected:
      // The time when the filter is created.
      shared_ptr<string> creationTime_ {};
      // The information about the outbound rules.
      shared_ptr<vector<TrafficMirrorFilters::EgressRules>> egressRules_ {};
      // The information about the inbound rules.
      shared_ptr<vector<TrafficMirrorFilters::IngressRules>> ingressRules_ {};
      // The ID of the resource group to which the traffic mirror session belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The tag list.
      shared_ptr<vector<TrafficMirrorFilters::Tags>> tags_ {};
      // The description of the filter.
      shared_ptr<string> trafficMirrorFilterDescription_ {};
      // The ID of the filter.
      shared_ptr<string> trafficMirrorFilterId_ {};
      // The filter name.
      shared_ptr<string> trafficMirrorFilterName_ {};
      // The status of the filter. Valid values:
      // 
      // *   **Creating**
      // *   **Created**
      // *   **Modifying**
      // *   **Deleting**
      shared_ptr<string> trafficMirrorFilterStatus_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->trafficMirrorFilters_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListTrafficMirrorFiltersResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrafficMirrorFiltersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMirrorFiltersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficMirrorFiltersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficMirrorFiltersResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficMirrorFilters Field Functions 
    bool hasTrafficMirrorFilters() const { return this->trafficMirrorFilters_ != nullptr;};
    void deleteTrafficMirrorFilters() { this->trafficMirrorFilters_ = nullptr;};
    inline const vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters> & getTrafficMirrorFilters() const { DARABONBA_PTR_GET_CONST(trafficMirrorFilters_, vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters>) };
    inline vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters> getTrafficMirrorFilters() { DARABONBA_PTR_GET(trafficMirrorFilters_, vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters>) };
    inline ListTrafficMirrorFiltersResponseBody& setTrafficMirrorFilters(const vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters> & trafficMirrorFilters) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilters_, trafficMirrorFilters) };
    inline ListTrafficMirrorFiltersResponseBody& setTrafficMirrorFilters(vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters> && trafficMirrorFilters) { DARABONBA_PTR_SET_RVALUE(trafficMirrorFilters_, trafficMirrorFilters) };


  protected:
    // The number of entries returned.
    shared_ptr<int32_t> count_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<string> totalCount_ {};
    // The information about the filters.
    shared_ptr<vector<ListTrafficMirrorFiltersResponseBody::TrafficMirrorFilters>> trafficMirrorFilters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
