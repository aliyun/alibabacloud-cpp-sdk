// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODYTRAFFICMIRRORFILTERSINGRESSRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODYTRAFFICMIRRORFILTERSINGRESSRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& obj) { 
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
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules() = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules(const ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules &) = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules(ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules &&) = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules() = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& operator=(const ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules &) = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& operator=(ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->destinationPortRange_ == nullptr && return this->ipVersion_ == nullptr && return this->priority_ == nullptr && return this->protocol_ == nullptr
        && return this->sourceCidrBlock_ == nullptr && return this->sourcePortRange_ == nullptr && return this->trafficDirection_ == nullptr && return this->trafficMirrorFilterId_ == nullptr && return this->trafficMirrorFilterRuleId_ == nullptr
        && return this->trafficMirrorFilterRuleStatus_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // destinationPortRange Field Functions 
    bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
    void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
    inline string destinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string sourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // trafficDirection Field Functions 
    bool hasTrafficDirection() const { return this->trafficDirection_ != nullptr;};
    void deleteTrafficDirection() { this->trafficDirection_ = nullptr;};
    inline string trafficDirection() const { DARABONBA_PTR_GET_DEFAULT(trafficDirection_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setTrafficDirection(string trafficDirection) { DARABONBA_PTR_SET_VALUE(trafficDirection_, trafficDirection) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string trafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorFilterRuleId Field Functions 
    bool hasTrafficMirrorFilterRuleId() const { return this->trafficMirrorFilterRuleId_ != nullptr;};
    void deleteTrafficMirrorFilterRuleId() { this->trafficMirrorFilterRuleId_ = nullptr;};
    inline string trafficMirrorFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleId_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setTrafficMirrorFilterRuleId(string trafficMirrorFilterRuleId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleId_, trafficMirrorFilterRuleId) };


    // trafficMirrorFilterRuleStatus Field Functions 
    bool hasTrafficMirrorFilterRuleStatus() const { return this->trafficMirrorFilterRuleStatus_ != nullptr;};
    void deleteTrafficMirrorFilterRuleStatus() { this->trafficMirrorFilterRuleStatus_ = nullptr;};
    inline string trafficMirrorFilterRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterRuleStatus_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules& setTrafficMirrorFilterRuleStatus(string trafficMirrorFilterRuleStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterRuleStatus_, trafficMirrorFilterRuleStatus) };


  protected:
    // The action of the inbound rule. Valid values:
    // 
    // *   **accept**
    // *   **drop**
    std::shared_ptr<string> action_ = nullptr;
    // The destination CIDR block of the inbound traffic.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The destination port range of the inbound traffic.
    std::shared_ptr<string> destinationPortRange_ = nullptr;
    // The version of IP protocol.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The priority of the inbound rule. A smaller value indicates a higher priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The protocol that is used by the inbound traffic to be mirrored. Valid values:
    // 
    // *   **ALL**
    // *   **ICMP**
    // *   **TCP**
    // *   **UDP**
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block of the inbound traffic.
    std::shared_ptr<string> sourceCidrBlock_ = nullptr;
    // The destination port range of the inbound traffic.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
    // The direction of the network traffic. Valid values:
    // 
    // *   **egress**
    // *   **ingress**
    std::shared_ptr<string> trafficDirection_ = nullptr;
    // The ID of the filter associated with the inbound rule.
    std::shared_ptr<string> trafficMirrorFilterId_ = nullptr;
    // The ID of the inbound rule.
    std::shared_ptr<string> trafficMirrorFilterRuleId_ = nullptr;
    // The status of the inbound rule. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    std::shared_ptr<string> trafficMirrorFilterRuleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
