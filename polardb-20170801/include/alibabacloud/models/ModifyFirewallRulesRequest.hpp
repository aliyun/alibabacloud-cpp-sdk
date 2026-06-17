// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYFIREWALLRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYFIREWALLRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyFirewallRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyFirewallRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyFirewallRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ModifyFirewallRulesRequest() = default ;
    ModifyFirewallRulesRequest(const ModifyFirewallRulesRequest &) = default ;
    ModifyFirewallRulesRequest(ModifyFirewallRulesRequest &&) = default ;
    ModifyFirewallRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyFirewallRulesRequest() = default ;
    ModifyFirewallRulesRequest& operator=(const ModifyFirewallRulesRequest &) = default ;
    ModifyFirewallRulesRequest& operator=(ModifyFirewallRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->ruleConfig_ == nullptr
        && this->ruleName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyFirewallRulesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyFirewallRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyFirewallRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyFirewallRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyFirewallRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string getRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifyFirewallRulesRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyFirewallRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // A JSON string that contains the configuration parameters of the firewall rule to modify and their values. The parameter values are strings. Example: `{ "id": "test", "enabled": "true", "mode": "Defending", "users": { "applies_to": [] }, "endpoint": "[{"EndpointName":"pe-***************","EndpointType":"Cluster","DBEndpointDescription":"Cluster Endpoint"},{"EndpointName":"pe-***************","EndpointType":"Custom","DBEndpointDescription":"pc-***************"},{"EndpointName":"pe-***************","EndpointType":"Custom","DBEndpointDescription":"pc-***************"}]", "type": "BlackList", "sub_rules": [] }, "RuleName": "test" }`. The parameters are described as follows:
    // 
    // - `"id"`: Required. The name of the firewall rule.
    // 
    // - `"databases"`: Optional. The names of the databases to which the rule applies. You can specify multiple database names. Separate the names with commas (,). If you leave this parameter empty, the rule applies to all databases in the cluster.
    // 
    // - `"tables"`: Optional. The names of the tables to which the rule applies. You can specify multiple table names. Separate the names with commas (,). If you leave this parameter empty, the rule applies to all tables in the cluster.
    // 
    // - `"columns"`: Required. The names of the fields to which the rule applies. You can specify multiple field names. Separate the names with commas (,).
    // 
    // - `"description"`: Optional. The description of the data masking rule. The description can be up to 64 characters in length.
    // 
    // - `"enabled"`: Required. Specifies whether to enable or disable the data masking rule. Valid values: **true** (enable) and **false** (disable).
    // 
    // - `"applies_to"`: The names of the database accounts to which the rule applies. You can specify multiple database account names. Separate the names with commas (,).
    // 
    // - `"exempted"`: The names of the database accounts to which the rule does not apply. You can specify multiple database account names. Separate the names with commas (,).
    // 
    // > * If you specify the `RuleName` parameter, the `RuleConfig` parameter is required.
    // >
    // > * You must specify either `"applies_to"` or `"exempted"`.
    // 
    // This parameter is required.
    shared_ptr<string> ruleConfig_ {};
    // The name of the firewall rule. You can specify only one rule name at a time.
    // 
    // > - Call the [DescribeFirewallRules](https://help.aliyun.com/document_detail/212573.html) operation to query the details of all firewall rules for the target cluster, including the rule names.
    // >
    // > - If the specified rule name does not exist in the current cluster, the system automatically creates a new firewall rule based on the rule name and the value of `RuleConfig`.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
