// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUESTINGRESSRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORFILTERRULESREQUESTINGRESSRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorFilterRulesRequestIngressRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorFilterRulesRequestIngressRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DestinationPortRange, destinationPortRange_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorFilterRulesRequestIngressRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DestinationPortRange, destinationPortRange_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
    };
    CreateTrafficMirrorFilterRulesRequestIngressRules() = default ;
    CreateTrafficMirrorFilterRulesRequestIngressRules(const CreateTrafficMirrorFilterRulesRequestIngressRules &) = default ;
    CreateTrafficMirrorFilterRulesRequestIngressRules(CreateTrafficMirrorFilterRulesRequestIngressRules &&) = default ;
    CreateTrafficMirrorFilterRulesRequestIngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorFilterRulesRequestIngressRules() = default ;
    CreateTrafficMirrorFilterRulesRequestIngressRules& operator=(const CreateTrafficMirrorFilterRulesRequestIngressRules &) = default ;
    CreateTrafficMirrorFilterRulesRequestIngressRules& operator=(CreateTrafficMirrorFilterRulesRequestIngressRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->destinationCidrBlock_ != nullptr && this->destinationPortRange_ != nullptr && this->ipVersion_ != nullptr && this->priority_ != nullptr && this->protocol_ != nullptr
        && this->sourceCidrBlock_ != nullptr && this->sourcePortRange_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // destinationPortRange Field Functions 
    bool hasDestinationPortRange() const { return this->destinationPortRange_ != nullptr;};
    void deleteDestinationPortRange() { this->destinationPortRange_ = nullptr;};
    inline string destinationPortRange() const { DARABONBA_PTR_GET_DEFAULT(destinationPortRange_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setDestinationPortRange(string destinationPortRange) { DARABONBA_PTR_SET_VALUE(destinationPortRange_, destinationPortRange) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sourceCidrBlock Field Functions 
    bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
    void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
    inline string sourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string sourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline CreateTrafficMirrorFilterRulesRequestIngressRules& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


  protected:
    // The policy of the inbound rule. Valid values:
    // 
    // *   **accept**: collects network traffic.
    // *   **drop**: drops network traffic.
    std::shared_ptr<string> action_ = nullptr;
    // The destination CIDR block of the inbound traffic.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The destination port range of the inbound traffic. Valid value: **1** to **65535**. Separate the first and the last port with a forward slash (/). For example, **1/200** or **80/80**.
    // 
    // >  If the **IngressRules.N.Protocol** parameter is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
    std::shared_ptr<string> destinationPortRange_ = nullptr;
    // The IP version of the instance. The following value may be returned:
    // 
    // *   **IPv4**: IPv4
    // *   **IPv6**: IPv6
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The priority of the inbound rule. A smaller value indicates a higher priority. The maximum value of **N** is **10**. You can configure up to 10 inbound rules for a filter.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The protocol that is used by the inbound traffic to be mirrored. Valid values:
    // 
    // *   **ALL**: all protocols
    // *   **ICMP**: Internet Control Message Protocol.
    // *   **TCP**: Transmission Control Protocol.
    // *   **UDP**: User Datagram Protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The source CIDR block of the inbound traffic.
    std::shared_ptr<string> sourceCidrBlock_ = nullptr;
    // The source port range of the inbound traffic. Valid value: **1** to **65535**. Separate the first and last port with a forward slash (/). For example **1/200** and **80/80**. You cannot set this parameter to \\*\\*-1/-1\\*\\*, which indicates all ports.
    // 
    // >  If the **IngressRules.N.Protocol** parameter is set to **ALL** or **ICMP**, you do not need to set this parameter. In this case, all ports are available.
    std::shared_ptr<string> sourcePortRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
