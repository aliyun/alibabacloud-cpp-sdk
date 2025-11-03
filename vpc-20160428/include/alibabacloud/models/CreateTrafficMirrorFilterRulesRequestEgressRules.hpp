// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUESTEGRESSRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUESTEGRESSRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterRulesRequestEgressRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterRulesRequestEgressRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterRulesRequestEgressRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    CreateTrafficMirrorFilterRulesRequestEgressRules() = default ;
    CreateTrafficMirrorFilterRulesRequestEgressRules(const CreateTrafficMirrorFilterRulesRequestEgressRules &) = default ;
    CreateTrafficMirrorFilterRulesRequestEgressRules(CreateTrafficMirrorFilterRulesRequestEgressRules &&) = default ;
    CreateTrafficMirrorFilterRulesRequestEgressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterRulesRequestEgressRules() = default ;
    CreateTrafficMirrorFilterRulesRequestEgressRules& operator=(const CreateTrafficMirrorFilterRulesRequestEgressRules &) = default ;
    CreateTrafficMirrorFilterRulesRequestEgressRules& operator=(CreateTrafficMirrorFilterRulesRequestEgressRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->destinationPortRange_ == nullptr && return this->ipVersion_ == nullptr && return this->priority_ == nullptr && return this->protocol_ == nullptr
        && return this->sourceCidrBlock_ == nullptr && return this->sourcePortRange_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // destinationPortRange Field Functions 
    bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
    void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
    inline string destinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string sourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline CreateTrafficMirrorFilterRulesRequestEgressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The collection policy of the outbound rule. Valid values:
    // 
    // *   **accept**: accepts network traffic.
    // *   **drop**: drops network traffic.
    std::shared_ptr<string> action_ = nullptr;
    // The destination CIDR block of the outbound traffic.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The destination port range of the outbound traffic. Valid value: **1** to **65535**. Separate the first and last port with a forward slash (/). For example **1/200** and **80/80**. You cannot set this parameter to \\*\\*-1/-1\\*\\*, which indicates all ports.
    // 
    // >  If **EgressRules.N.Protocol** is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
    std::shared_ptr<string> destinationPortRange_ = nullptr;
    // The IP version of the instance. Valid values:
    // 
    // *   **IPv4**: IPv4
    // *   **IPv6**: IPv6
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The priority of the outbound rule. A smaller value indicates a higher priority. The maximum value of **N** is **10**. You can configure up to 10 outbound rules for a filter.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The protocol that is used by the outbound traffic to be mirrored. Valid values:
    // 
    // *   **ALL**: all protocols
    // *   **ICMP**: Internet Control Message Protocol.
    // *   **TCP**: Transmission Control Protocol.
    // *   **UDP**: User Datagram Protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block of the outbound traffic.
    std::shared_ptr<string> sourceCidrBlock_ = nullptr;
    // The source port range of the outbound traffic. Valid value: **1** to **65535**. Separate the first and last port with a forward slash (/). For example **1/200** and **80/80**. You cannot set this parameter to \\*\\*-1/-1\\*\\*, which indicates all ports.
    // 
    // >  If **EgressRules.N.Protocol** is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
