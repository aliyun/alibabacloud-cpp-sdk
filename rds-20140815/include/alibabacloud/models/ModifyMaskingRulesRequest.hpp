// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMASKINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMASKINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyMaskingRulesRequestRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyMaskingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMaskingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMaskingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ModifyMaskingRulesRequest() = default ;
    ModifyMaskingRulesRequest(const ModifyMaskingRulesRequest &) = default ;
    ModifyMaskingRulesRequest(ModifyMaskingRulesRequest &&) = default ;
    ModifyMaskingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMaskingRulesRequest() = default ;
    ModifyMaskingRulesRequest& operator=(const ModifyMaskingRulesRequest &) = default ;
    ModifyMaskingRulesRequest& operator=(ModifyMaskingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->DBName_ == nullptr && return this->defaultAlgo_ == nullptr && return this->enabled_ == nullptr && return this->maskingAlgo_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->ruleConfig_ == nullptr && return this->ruleName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifyMaskingRulesRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline ModifyMaskingRulesRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // defaultAlgo Field Functions 
    bool hasDefaultAlgo() const { return this->defaultAlgo_ != nullptr;};
    void deleteDefaultAlgo() { this->defaultAlgo_ = nullptr;};
    inline string defaultAlgo() const { DARABONBA_PTR_GET_DEFAULT(defaultAlgo_, "") };
    inline ModifyMaskingRulesRequest& setDefaultAlgo(string defaultAlgo) { DARABONBA_PTR_SET_VALUE(defaultAlgo_, defaultAlgo) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline ModifyMaskingRulesRequest& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // maskingAlgo Field Functions 
    bool hasMaskingAlgo() const { return this->maskingAlgo_ != nullptr;};
    void deleteMaskingAlgo() { this->maskingAlgo_ = nullptr;};
    inline string maskingAlgo() const { DARABONBA_PTR_GET_DEFAULT(maskingAlgo_, "") };
    inline ModifyMaskingRulesRequest& setMaskingAlgo(string maskingAlgo) { DARABONBA_PTR_SET_VALUE(maskingAlgo_, maskingAlgo) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyMaskingRulesRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMaskingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyMaskingRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyMaskingRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline const ModifyMaskingRulesRequestRuleConfig & ruleConfig() const { DARABONBA_PTR_GET_CONST(ruleConfig_, ModifyMaskingRulesRequestRuleConfig) };
    inline ModifyMaskingRulesRequestRuleConfig ruleConfig() { DARABONBA_PTR_GET(ruleConfig_, ModifyMaskingRulesRequestRuleConfig) };
    inline ModifyMaskingRulesRequest& setRuleConfig(const ModifyMaskingRulesRequestRuleConfig & ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };
    inline ModifyMaskingRulesRequest& setRuleConfig(ModifyMaskingRulesRequestRuleConfig && ruleConfig) { DARABONBA_PTR_SET_RVALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyMaskingRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> defaultAlgo_ = nullptr;
    std::shared_ptr<string> enabled_ = nullptr;
    std::shared_ptr<string> maskingAlgo_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<ModifyMaskingRulesRequestRuleConfig> ruleConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
