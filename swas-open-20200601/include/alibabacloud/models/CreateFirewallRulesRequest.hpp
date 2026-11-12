// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLRULESREQUEST_HPP_
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
  class CreateFirewallRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FirewallRules, firewallRules_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FirewallRules, firewallRules_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateFirewallRulesRequest() = default ;
    CreateFirewallRulesRequest(const CreateFirewallRulesRequest &) = default ;
    CreateFirewallRulesRequest(CreateFirewallRulesRequest &&) = default ;
    CreateFirewallRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallRulesRequest() = default ;
    CreateFirewallRulesRequest& operator=(const CreateFirewallRulesRequest &) = default ;
    CreateFirewallRulesRequest& operator=(CreateFirewallRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key that is specified for the firewall rule. Valid values of N: 1 to 20.
      // 
      // The tag key cannot be an empty string. It can be up to 64 characters in length, cannot start with aliyun or acs:, and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value that is specified for the firewall rule. Valid values of N: 1 to 20.
      // 
      // The tag value can be an empty string. It can be up to 64 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    class FirewallRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallRules& obj) { 
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_TO_JSON(SourceCidrIp, sourceCidrIp_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RuleProtocol, ruleProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidrIp, sourceCidrIp_);
      };
      FirewallRules() = default ;
      FirewallRules(const FirewallRules &) = default ;
      FirewallRules(FirewallRules &&) = default ;
      FirewallRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallRules() = default ;
      FirewallRules& operator=(const FirewallRules &) = default ;
      FirewallRules& operator=(FirewallRules &&) = default ;
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
      inline FirewallRules& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline FirewallRules& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // ruleProtocol Field Functions 
      bool hasRuleProtocol() const { return this->ruleProtocol_ != nullptr;};
      void deleteRuleProtocol() { this->ruleProtocol_ = nullptr;};
      inline string getRuleProtocol() const { DARABONBA_PTR_GET_DEFAULT(ruleProtocol_, "") };
      inline FirewallRules& setRuleProtocol(string ruleProtocol) { DARABONBA_PTR_SET_VALUE(ruleProtocol_, ruleProtocol) };


      // sourceCidrIp Field Functions 
      bool hasSourceCidrIp() const { return this->sourceCidrIp_ != nullptr;};
      void deleteSourceCidrIp() { this->sourceCidrIp_ = nullptr;};
      inline string getSourceCidrIp() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrIp_, "") };
      inline FirewallRules& setSourceCidrIp(string sourceCidrIp) { DARABONBA_PTR_SET_VALUE(sourceCidrIp_, sourceCidrIp) };


    protected:
      // The port number.
      // - TCP or UDP: Valid values are 1 to 65535. Use a forward slash (/) to separate the start port and the end port. Example: 1/200.
      // - ICMP: -1/-1.
      shared_ptr<string> port_ {};
      // The remark.
      shared_ptr<string> remark_ {};
      // The transport layer protocol. Valid values:
      // 
      // - TCP: TCP.
      // - UDP: UDP.
      // - TCP+UDP: TCP and UDP.
      // - ICMP: ICMP.
      shared_ptr<string> ruleProtocol_ {};
      // The source IP address or CIDR block.
      shared_ptr<string> sourceCidrIp_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->firewallRules_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFirewallRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // firewallRules Field Functions 
    bool hasFirewallRules() const { return this->firewallRules_ != nullptr;};
    void deleteFirewallRules() { this->firewallRules_ = nullptr;};
    inline const vector<CreateFirewallRulesRequest::FirewallRules> & getFirewallRules() const { DARABONBA_PTR_GET_CONST(firewallRules_, vector<CreateFirewallRulesRequest::FirewallRules>) };
    inline vector<CreateFirewallRulesRequest::FirewallRules> getFirewallRules() { DARABONBA_PTR_GET(firewallRules_, vector<CreateFirewallRulesRequest::FirewallRules>) };
    inline CreateFirewallRulesRequest& setFirewallRules(const vector<CreateFirewallRulesRequest::FirewallRules> & firewallRules) { DARABONBA_PTR_SET_VALUE(firewallRules_, firewallRules) };
    inline CreateFirewallRulesRequest& setFirewallRules(vector<CreateFirewallRulesRequest::FirewallRules> && firewallRules) { DARABONBA_PTR_SET_RVALUE(firewallRules_, firewallRules) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFirewallRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFirewallRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFirewallRulesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFirewallRulesRequest::Tag>) };
    inline vector<CreateFirewallRulesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateFirewallRulesRequest::Tag>) };
    inline CreateFirewallRulesRequest& setTag(const vector<CreateFirewallRulesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFirewallRulesRequest& setTag(vector<CreateFirewallRulesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token.
    shared_ptr<string> clientToken_ {};
    // The array of firewall rules.
    shared_ptr<vector<CreateFirewallRulesRequest::FirewallRules>> firewallRules_ {};
    // The instance ID of the specified simple application server.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the regions where simple application servers are available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The list of tags. The list can contain up to 20 tags.
    shared_ptr<vector<CreateFirewallRulesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
