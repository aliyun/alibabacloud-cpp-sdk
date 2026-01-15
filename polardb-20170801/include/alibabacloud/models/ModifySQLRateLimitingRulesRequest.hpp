// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLRATELIMITINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLRATELIMITINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifySQLRateLimitingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySQLRateLimitingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySQLRateLimitingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ModifySQLRateLimitingRulesRequest() = default ;
    ModifySQLRateLimitingRulesRequest(const ModifySQLRateLimitingRulesRequest &) = default ;
    ModifySQLRateLimitingRulesRequest(ModifySQLRateLimitingRulesRequest &&) = default ;
    ModifySQLRateLimitingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySQLRateLimitingRulesRequest() = default ;
    ModifySQLRateLimitingRulesRequest& operator=(const ModifySQLRateLimitingRulesRequest &) = default ;
    ModifySQLRateLimitingRulesRequest& operator=(ModifySQLRateLimitingRulesRequest &&) = default ;
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
    inline ModifySQLRateLimitingRulesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifySQLRateLimitingRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifySQLRateLimitingRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifySQLRateLimitingRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifySQLRateLimitingRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string getRuleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline ModifySQLRateLimitingRulesRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifySQLRateLimitingRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> ruleConfig_ {};
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
