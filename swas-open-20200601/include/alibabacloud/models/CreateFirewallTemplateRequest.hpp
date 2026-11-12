// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLTEMPLATEREQUEST_HPP_
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
  class CreateFirewallTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FirewallRule, firewallRule_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FirewallRule, firewallRule_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateFirewallTemplateRequest() = default ;
    CreateFirewallTemplateRequest(const CreateFirewallTemplateRequest &) = default ;
    CreateFirewallTemplateRequest(CreateFirewallTemplateRequest &&) = default ;
    CreateFirewallTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallTemplateRequest() = default ;
    CreateFirewallTemplateRequest& operator=(const CreateFirewallTemplateRequest &) = default ;
    CreateFirewallTemplateRequest& operator=(CreateFirewallTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirewallRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallRule& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallRule& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      };
      FirewallRule() = default ;
      FirewallRule(const FirewallRule &) = default ;
      FirewallRule(FirewallRule &&) = default ;
      FirewallRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallRule() = default ;
      FirewallRule& operator=(const FirewallRule &) = default ;
      FirewallRule& operator=(FirewallRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->port_ == nullptr
        && this->remark_ == nullptr && this->ruleProtocol_ == nullptr && this->sourceCidrIp_ == nullptr; };
      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline FirewallRule& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline FirewallRule& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleProtocol Field Functions 
      bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
      void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
      inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
      inline FirewallRule& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline FirewallRule& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    protected:
      // The port range. Valid values: 1 to 65535. Use a forward slash (/) to separate the start port and the end port. For example, `1024/1055` indicates a port range from 1024 to 1055.
      // 
      // > If you set the protocol to ICMP, the port must be set to -1/-1.
      // 
      // This parameter is required.
      shared_ptr<string> port_ {};
      // The remark for the firewall rule.
      shared_ptr<string> remark_ {};
      // The transport layer protocol. Valid values:
      // 
      // - TCP: TCP.
      // - UDP: UDP.
      // - TCP+UDP: TCP and UDP.
      // - ICMP: ICMP.
      // 
      // This parameter is required.
      shared_ptr<string> ruleProtocol_ {};
      // The source IPv4 CIDR block for which to set access permissions. Both CIDR and IPv4 formats are supported for the IP address range.
      // 
      // This parameter is required.
      shared_ptr<string> sourceCidrIp_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->firewallRule_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFirewallTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // firewallRule Field Functions 
    bool hasFirewallRule() const { return this->firewallRule_ != nullptr;};
    void deleteFirewallRule() { this->firewallRule_ = nullptr;};
    inline const vector<CreateFirewallTemplateRequest::FirewallRule> & getFirewallRule() const { DARABONBA_PTR_GET_CONST(firewallRule_, vector<CreateFirewallTemplateRequest::FirewallRule>) };
    inline vector<CreateFirewallTemplateRequest::FirewallRule> getFirewallRule() { DARABONBA_PTR_GET(firewallRule_, vector<CreateFirewallTemplateRequest::FirewallRule>) };
    inline CreateFirewallTemplateRequest& setFirewallRule(const vector<CreateFirewallTemplateRequest::FirewallRule> & firewallRule) { DARABONBA_PTR_SET_VALUE(firewallRule_, firewallRule) };
    inline CreateFirewallTemplateRequest& setFirewallRule(vector<CreateFirewallTemplateRequest::FirewallRule> && firewallRule) { DARABONBA_PTR_SET_RVALUE(firewallRule_, firewallRule) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFirewallTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFirewallTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The description of the firewall template.
    shared_ptr<string> description_ {};
    // The firewall rules.
    shared_ptr<vector<CreateFirewallTemplateRequest::FirewallRule>> firewallRule_ {};
    // The name of the firewall template.
    // 
    // This parameter is required.
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
