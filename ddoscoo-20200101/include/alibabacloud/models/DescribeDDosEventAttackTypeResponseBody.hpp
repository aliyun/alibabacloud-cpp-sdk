// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTATTACKTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTATTACKTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventAttackTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventAttackTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackTypes, attackTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventAttackTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackTypes, attackTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventAttackTypeResponseBody() = default ;
    DescribeDDosEventAttackTypeResponseBody(const DescribeDDosEventAttackTypeResponseBody &) = default ;
    DescribeDDosEventAttackTypeResponseBody(DescribeDDosEventAttackTypeResponseBody &&) = default ;
    DescribeDDosEventAttackTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventAttackTypeResponseBody() = default ;
    DescribeDDosEventAttackTypeResponseBody& operator=(const DescribeDDosEventAttackTypeResponseBody &) = default ;
    DescribeDDosEventAttackTypeResponseBody& operator=(DescribeDDosEventAttackTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackTypes& obj) { 
        DARABONBA_PTR_TO_JSON(AttackType, attackType_);
        DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
      };
      friend void from_json(const Darabonba::Json& j, AttackTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
        DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
      };
      AttackTypes() = default ;
      AttackTypes(const AttackTypes &) = default ;
      AttackTypes(AttackTypes &&) = default ;
      AttackTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackTypes() = default ;
      AttackTypes& operator=(const AttackTypes &) = default ;
      AttackTypes& operator=(AttackTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackType_ == nullptr
        && this->inPkts_ == nullptr; };
      // attackType Field Functions 
      bool hasAttackType() const { return this->attackType_ != nullptr;};
      void deleteAttackType() { this->attackType_ = nullptr;};
      inline string getAttackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, "") };
      inline AttackTypes& setAttackType(string attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


      // inPkts Field Functions 
      bool hasInPkts() const { return this->inPkts_ != nullptr;};
      void deleteInPkts() { this->inPkts_ = nullptr;};
      inline int64_t getInPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
      inline AttackTypes& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


    protected:
      // The type of the attack Valid values:
      // 
      // *   **QOTD-Reflect-Flood**: QOTD reflection attacks
      // *   **CharGEN-Reflect-Flood**: CHARGEN reflection attacks
      // *   **DNS-Reflect-Flood**: DNS reflection attacks
      // *   **TFTP-Reflect-Flood**: TFTP reflection attacks
      // *   **Portmap-Reflect-Flood**: Portmap reflection attacks
      // *   **NTP-Reflect-Flood**: NTP reflection attacks
      // *   **NetBIOS-Reflect-Flood**: NetBIOS reflection attacks
      // *   **SNMPv2-Reflect-Flood**: SNMPv2 reflection attacks
      // *   **CLDAP-Reflect-Flood**: CLDAP reflection attacks
      // *   **Ripv1-Reflect-Flood**: RIPv1 reflection attacks
      // *   **OpenVPN-Reflect-Flood**: OpenVPN reflection attacks
      // *   **SSDP-Reflect-Flood**: SSDP reflection attacks
      // *   **NetAssistant-Reflect-Flood**: NetAssistant reflection attacks
      // *   **WSDiscovery-Reflect-Flood**: WS-Discovery reflection attacks
      // *   **Kad-Reflect-Flood**: Kad reflection attacks
      // *   **mDNS-Reflect-Flood**: mDNS reflection attacks
      // *   **10001-Reflect-Flood**: reflection attacks over port 10001
      // *   **Memcached-Reflect-Flood**: Memcached reflection attacks
      // *   **QNP-Reflect-Flood**: QNP reflection attacks
      // *   **DVR-Reflect-Flood**: DVR reflection attacks
      // *   **CoAP-Reflect-Flood**: CoAP reflection attacks
      // *   **ADDP-Reflect-Flood**: ADDP reflection attacks
      // *   **Tcp-Syn**: TCP SYN flood attacks
      // *   **Tcp-Fin**: TCP FIN flood attacks
      // *   **Tcp-Ack**: TCP ACK flood attacks
      // *   **Tcp-Rst**: TCP RST flood attacks
      // *   **Tcp-Pushack**: TCP PSH-ACK flood attacks
      // *   **Tcp-Synack**: TCP SYN-ACK flood attacks
      // *   **Udp-None**: UDP attacks
      // *   **Udp-Ssh**: UDP-based SSH attacks
      // *   **Udp-Dns**: UDP-based DNS attacks
      // *   **Udp-Http**: UDP-based HTTP attacks
      // *   **Udp-Https**: UDP-based HTTPS attacks
      // *   **Udp-Ntp**: UDP-based NTP attacks
      // *   **Udp-Ldap**: UDP-based LDAP attacks
      // *   **Udp-Ssdp**: UDP-based SSDP attacks
      // *   **Udp-Memcached**: Memcached UDP reflection attacks
      // *   **Tcp-Other**: other TCP attacks
      // *   **Icmp**: ICMP flood attacks
      // *   **Igmp**: IGMP flood attacks
      // *   **Ipv6**: IPv6 attacks
      shared_ptr<string> attackType_ {};
      // The number of request packets of the attack type.
      shared_ptr<int64_t> inPkts_ {};
    };

    virtual bool empty() const override { return this->attackTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // attackTypes Field Functions 
    bool hasAttackTypes() const { return this->attackTypes_ != nullptr;};
    void deleteAttackTypes() { this->attackTypes_ = nullptr;};
    inline const vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes> & getAttackTypes() const { DARABONBA_PTR_GET_CONST(attackTypes_, vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes>) };
    inline vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes> getAttackTypes() { DARABONBA_PTR_GET(attackTypes_, vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes>) };
    inline DescribeDDosEventAttackTypeResponseBody& setAttackTypes(const vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes> & attackTypes) { DARABONBA_PTR_SET_VALUE(attackTypes_, attackTypes) };
    inline DescribeDDosEventAttackTypeResponseBody& setAttackTypes(vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes> && attackTypes) { DARABONBA_PTR_SET_RVALUE(attackTypes_, attackTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventAttackTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the attack types.
    shared_ptr<vector<DescribeDDosEventAttackTypeResponseBody::AttackTypes>> attackTypes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
