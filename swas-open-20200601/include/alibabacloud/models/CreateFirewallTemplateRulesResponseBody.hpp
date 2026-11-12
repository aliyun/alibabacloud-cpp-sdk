// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLTEMPLATERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLTEMPLATERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateFirewallTemplateRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallTemplateRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallTemplateRules, firewallTemplateRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallTemplateRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallTemplateRules, firewallTemplateRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFirewallTemplateRulesResponseBody() = default ;
    CreateFirewallTemplateRulesResponseBody(const CreateFirewallTemplateRulesResponseBody &) = default ;
    CreateFirewallTemplateRulesResponseBody(CreateFirewallTemplateRulesResponseBody &&) = default ;
    CreateFirewallTemplateRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallTemplateRulesResponseBody() = default ;
    CreateFirewallTemplateRulesResponseBody& operator=(const CreateFirewallTemplateRulesResponseBody &) = default ;
    CreateFirewallTemplateRulesResponseBody& operator=(CreateFirewallTemplateRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirewallTemplateRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallTemplateRules& obj) { 
        DARABONBA_PTR_TO_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallTemplateRules& obj) { 
        DARABONBA_PTR_FROM_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      };
      FirewallTemplateRules() = default ;
      FirewallTemplateRules(const FirewallTemplateRules &) = default ;
      FirewallTemplateRules(FirewallTemplateRules &&) = default ;
      FirewallTemplateRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallTemplateRules() = default ;
      FirewallTemplateRules& operator=(const FirewallTemplateRules &) = default ;
      FirewallTemplateRules& operator=(FirewallTemplateRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firewallTemplateRuleId_ == nullptr
        && this->port_ == nullptr && this->remark_ == nullptr && this->ruleProtocol_ == nullptr && this->sourceCidrIp_ == nullptr; };
      // firewallTemplateRuleId Field Functions 
      bool hasFirewallTemplateRuleId() const { return this->firewallTemplateRuleId_ != nullptr;};
      void deleteFirewallTemplateRuleId() { this->firewallTemplateRuleId_ = nullptr;};
      inline string getFirewallTemplateRuleId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateRuleId_, "") };
      inline FirewallTemplateRules& setFirewallTemplateRuleId(string firewallTemplateRuleId) { DARABONBA_PTR_SET_VALUE(firewallTemplateRuleId_, firewallTemplateRuleId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline FirewallTemplateRules& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline FirewallTemplateRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleProtocol Field Functions 
      bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
      void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
      inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
      inline FirewallTemplateRules& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline FirewallTemplateRules& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    protected:
      // The ID of the firewall template rule.
      shared_ptr<string> firewallTemplateRuleId_ {};
      // The port range. Valid values: 1 to 65535. Separate the start port and the end port with a forward slash (/). For example, `1024/1055` indicates the port range from 1024 to 1055.
      // 
      // > If you set the protocol to ICMP, the port must be set to -1/-1.
      shared_ptr<string> port_ {};
      // The description of the firewall rule.
      shared_ptr<string> remark_ {};
      // The transport layer protocol. Valid values:
      // 
      // - TCP: TCP.
      // - UDP: UDP.
      // - TCP+UDP: TCP and UDP.
      // - ICMP: ICMP.
      shared_ptr<string> ruleProtocol_ {};
      // The source IPv4 CIDR address range for which you want to configure access Settings. Address ranges in CIDR format and IPv4 format are supported.
      shared_ptr<string> sourceCidrIp_ {};
    };

    virtual bool empty() const override { return this->firewallTemplateRules_ == nullptr
        && this->requestId_ == nullptr; };
    // firewallTemplateRules Field Functions 
    bool hasFirewallTemplateRules() const { return this->firewallTemplateRules_ != nullptr;};
    void deleteFirewallTemplateRules() { this->firewallTemplateRules_ = nullptr;};
    inline const vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules> & getFirewallTemplateRules() const { DARABONBA_PTR_GET_CONST(firewallTemplateRules_, vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules>) };
    inline vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules> getFirewallTemplateRules() { DARABONBA_PTR_GET(firewallTemplateRules_, vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules>) };
    inline CreateFirewallTemplateRulesResponseBody& setFirewallTemplateRules(const vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules> & firewallTemplateRules) { DARABONBA_PTR_SET_VALUE(firewallTemplateRules_, firewallTemplateRules) };
    inline CreateFirewallTemplateRulesResponseBody& setFirewallTemplateRules(vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules> && firewallTemplateRules) { DARABONBA_PTR_SET_RVALUE(firewallTemplateRules_, firewallTemplateRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFirewallTemplateRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The firewall template rules.
    shared_ptr<vector<CreateFirewallTemplateRulesResponseBody::FirewallTemplateRules>> firewallTemplateRules_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
