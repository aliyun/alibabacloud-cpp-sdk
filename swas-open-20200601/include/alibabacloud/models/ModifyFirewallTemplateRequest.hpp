// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFIREWALLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFIREWALLTEMPLATEREQUEST_HPP_
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
  class ModifyFirewallTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFirewallTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_TO_JSON(FirewallTemplateRule, firewallTemplateRule_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFirewallTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_FROM_JSON(FirewallTemplateRule, firewallTemplateRule_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyFirewallTemplateRequest() = default ;
    ModifyFirewallTemplateRequest(const ModifyFirewallTemplateRequest &) = default ;
    ModifyFirewallTemplateRequest(ModifyFirewallTemplateRequest &&) = default ;
    ModifyFirewallTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFirewallTemplateRequest() = default ;
    ModifyFirewallTemplateRequest& operator=(const ModifyFirewallTemplateRequest &) = default ;
    ModifyFirewallTemplateRequest& operator=(ModifyFirewallTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirewallTemplateRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallTemplateRule& obj) { 
        DARABONBA_PTR_TO_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallTemplateRule& obj) { 
        DARABONBA_PTR_FROM_JSON(FirewallTemplateRuleId, firewallTemplateRuleId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      };
      FirewallTemplateRule() = default ;
      FirewallTemplateRule(const FirewallTemplateRule &) = default ;
      FirewallTemplateRule(FirewallTemplateRule &&) = default ;
      FirewallTemplateRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallTemplateRule() = default ;
      FirewallTemplateRule& operator=(const FirewallTemplateRule &) = default ;
      FirewallTemplateRule& operator=(FirewallTemplateRule &&) = default ;
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
      inline FirewallTemplateRule& setFirewallTemplateRuleId(string firewallTemplateRuleId) { DARABONBA_PTR_SET_VALUE(firewallTemplateRuleId_, firewallTemplateRuleId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline FirewallTemplateRule& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline FirewallTemplateRule& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleProtocol Field Functions 
      bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
      void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
      inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
      inline FirewallTemplateRule& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline FirewallTemplateRule& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    protected:
      // The ID of the firewall template rule.
      // 
      // This parameter is required.
      shared_ptr<string> firewallTemplateRuleId_ {};
      // The port range. Valid values: 1 to 65535. Use a forward slash (/) to separate the start port and the end port. For example, `1024/1055` indicates a port range from 1024 to 1055.
      // 
      // > If you set the protocol to ICMP, the port must be set to -1/-1.
      shared_ptr<string> port_ {};
      // The remark of the firewall rule.
      shared_ptr<string> remark_ {};
      // The transport layer protocol. Valid values:
      // 
      // - TCP: TCP
      // - UDP: UDP
      // - TCP+UDP: TCP and UDP
      // - ICMP: ICMP
      shared_ptr<string> ruleProtocol_ {};
      // The source IPv4 CIDR block for which you want to configure access permissions. You can specify an IP address range in CIDR format or IPv4 format.
      shared_ptr<string> sourceCidrIp_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->firewallTemplateId_ == nullptr && this->firewallTemplateRule_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyFirewallTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyFirewallTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // firewallTemplateId Field Functions 
    bool hasFirewallTemplateId() const { return this->firewallTemplateId_ != nullptr;};
    void deleteFirewallTemplateId() { this->firewallTemplateId_ = nullptr;};
    inline string getFirewallTemplateId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateId_, "") };
    inline ModifyFirewallTemplateRequest& setFirewallTemplateId(string firewallTemplateId) { DARABONBA_PTR_SET_VALUE(firewallTemplateId_, firewallTemplateId) };


    // firewallTemplateRule Field Functions 
    bool hasFirewallTemplateRule() const { return this->firewallTemplateRule_ != nullptr;};
    void deleteFirewallTemplateRule() { this->firewallTemplateRule_ = nullptr;};
    inline const vector<ModifyFirewallTemplateRequest::FirewallTemplateRule> & getFirewallTemplateRule() const { DARABONBA_PTR_GET_CONST(firewallTemplateRule_, vector<ModifyFirewallTemplateRequest::FirewallTemplateRule>) };
    inline vector<ModifyFirewallTemplateRequest::FirewallTemplateRule> getFirewallTemplateRule() { DARABONBA_PTR_GET(firewallTemplateRule_, vector<ModifyFirewallTemplateRequest::FirewallTemplateRule>) };
    inline ModifyFirewallTemplateRequest& setFirewallTemplateRule(const vector<ModifyFirewallTemplateRequest::FirewallTemplateRule> & firewallTemplateRule) { DARABONBA_PTR_SET_VALUE(firewallTemplateRule_, firewallTemplateRule) };
    inline ModifyFirewallTemplateRequest& setFirewallTemplateRule(vector<ModifyFirewallTemplateRequest::FirewallTemplateRule> && firewallTemplateRule) { DARABONBA_PTR_SET_RVALUE(firewallTemplateRule_, firewallTemplateRule) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyFirewallTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyFirewallTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, and you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the firewall template.
    shared_ptr<string> description_ {};
    // The ID of the firewall template.
    // 
    // This parameter is required.
    shared_ptr<string> firewallTemplateId_ {};
    // The firewall rules.
    shared_ptr<vector<ModifyFirewallTemplateRequest::FirewallTemplateRule>> firewallTemplateRule_ {};
    // The name of the firewall template.
    shared_ptr<string> name_ {};
    // The region ID of the Simple Application Server instance. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the list of supported Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
