// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMASKINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMASKINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMaskingRulesRequestRuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CreateMaskingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaskingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_TO_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaskingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DefaultAlgo, defaultAlgo_);
      DARABONBA_PTR_FROM_JSON(MaskingAlgo, maskingAlgo_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    CreateMaskingRulesRequest() = default ;
    CreateMaskingRulesRequest(const CreateMaskingRulesRequest &) = default ;
    CreateMaskingRulesRequest(CreateMaskingRulesRequest &&) = default ;
    CreateMaskingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaskingRulesRequest() = default ;
    CreateMaskingRulesRequest& operator=(const CreateMaskingRulesRequest &) = default ;
    CreateMaskingRulesRequest& operator=(CreateMaskingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->DBName_ == nullptr && return this->defaultAlgo_ == nullptr && return this->maskingAlgo_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->ruleConfig_ == nullptr && return this->ruleName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateMaskingRulesRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline CreateMaskingRulesRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // defaultAlgo Field Functions 
    bool hasDefaultAlgo() const { return this->defaultAlgo_ != nullptr;};
    void deleteDefaultAlgo() { this->defaultAlgo_ = nullptr;};
    inline string defaultAlgo() const { DARABONBA_PTR_GET_DEFAULT(defaultAlgo_, "") };
    inline CreateMaskingRulesRequest& setDefaultAlgo(string defaultAlgo) { DARABONBA_PTR_SET_VALUE(defaultAlgo_, defaultAlgo) };


    // maskingAlgo Field Functions 
    bool hasMaskingAlgo() const { return this->maskingAlgo_ != nullptr;};
    void deleteMaskingAlgo() { this->maskingAlgo_ = nullptr;};
    inline string maskingAlgo() const { DARABONBA_PTR_GET_DEFAULT(maskingAlgo_, "") };
    inline CreateMaskingRulesRequest& setMaskingAlgo(string maskingAlgo) { DARABONBA_PTR_SET_VALUE(maskingAlgo_, maskingAlgo) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateMaskingRulesRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMaskingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMaskingRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMaskingRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline const CreateMaskingRulesRequestRuleConfig & ruleConfig() const { DARABONBA_PTR_GET_CONST(ruleConfig_, CreateMaskingRulesRequestRuleConfig) };
    inline CreateMaskingRulesRequestRuleConfig ruleConfig() { DARABONBA_PTR_GET(ruleConfig_, CreateMaskingRulesRequestRuleConfig) };
    inline CreateMaskingRulesRequest& setRuleConfig(const CreateMaskingRulesRequestRuleConfig & ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };
    inline CreateMaskingRulesRequest& setRuleConfig(CreateMaskingRulesRequestRuleConfig && ruleConfig) { DARABONBA_PTR_SET_RVALUE(ruleConfig_, ruleConfig) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateMaskingRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> defaultAlgo_ = nullptr;
    std::shared_ptr<string> maskingAlgo_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<CreateMaskingRulesRequestRuleConfig> ruleConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
