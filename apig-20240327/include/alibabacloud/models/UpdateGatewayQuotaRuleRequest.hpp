// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYQUOTARULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYQUOTARULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateGatewayQuotaRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addIds, addIds_);
      DARABONBA_PTR_TO_JSON(conflictHash, conflictHash_);
      DARABONBA_PTR_TO_JSON(consumerGroupIds, consumerGroupIds_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(quotaLimit, quotaLimit_);
      DARABONBA_PTR_TO_JSON(removeIds, removeIds_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addIds, addIds_);
      DARABONBA_PTR_FROM_JSON(conflictHash, conflictHash_);
      DARABONBA_PTR_FROM_JSON(consumerGroupIds, consumerGroupIds_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(quotaLimit, quotaLimit_);
      DARABONBA_PTR_FROM_JSON(removeIds, removeIds_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
    };
    UpdateGatewayQuotaRuleRequest() = default ;
    UpdateGatewayQuotaRuleRequest(const UpdateGatewayQuotaRuleRequest &) = default ;
    UpdateGatewayQuotaRuleRequest(UpdateGatewayQuotaRuleRequest &&) = default ;
    UpdateGatewayQuotaRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayQuotaRuleRequest() = default ;
    UpdateGatewayQuotaRuleRequest& operator=(const UpdateGatewayQuotaRuleRequest &) = default ;
    UpdateGatewayQuotaRuleRequest& operator=(UpdateGatewayQuotaRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addIds_ == nullptr
        && this->conflictHash_ == nullptr && this->consumerGroupIds_ == nullptr && this->dryRun_ == nullptr && this->overwrite_ == nullptr && this->quotaLimit_ == nullptr
        && this->removeIds_ == nullptr && this->ruleName_ == nullptr; };
    // addIds Field Functions 
    bool hasAddIds() const { return this->addIds_ != nullptr;};
    void deleteAddIds() { this->addIds_ = nullptr;};
    inline const vector<string> & getAddIds() const { DARABONBA_PTR_GET_CONST(addIds_, vector<string>) };
    inline vector<string> getAddIds() { DARABONBA_PTR_GET(addIds_, vector<string>) };
    inline UpdateGatewayQuotaRuleRequest& setAddIds(const vector<string> & addIds) { DARABONBA_PTR_SET_VALUE(addIds_, addIds) };
    inline UpdateGatewayQuotaRuleRequest& setAddIds(vector<string> && addIds) { DARABONBA_PTR_SET_RVALUE(addIds_, addIds) };


    // conflictHash Field Functions 
    bool hasConflictHash() const { return this->conflictHash_ != nullptr;};
    void deleteConflictHash() { this->conflictHash_ = nullptr;};
    inline string getConflictHash() const { DARABONBA_PTR_GET_DEFAULT(conflictHash_, "") };
    inline UpdateGatewayQuotaRuleRequest& setConflictHash(string conflictHash) { DARABONBA_PTR_SET_VALUE(conflictHash_, conflictHash) };


    // consumerGroupIds Field Functions 
    bool hasConsumerGroupIds() const { return this->consumerGroupIds_ != nullptr;};
    void deleteConsumerGroupIds() { this->consumerGroupIds_ = nullptr;};
    inline const vector<string> & getConsumerGroupIds() const { DARABONBA_PTR_GET_CONST(consumerGroupIds_, vector<string>) };
    inline vector<string> getConsumerGroupIds() { DARABONBA_PTR_GET(consumerGroupIds_, vector<string>) };
    inline UpdateGatewayQuotaRuleRequest& setConsumerGroupIds(const vector<string> & consumerGroupIds) { DARABONBA_PTR_SET_VALUE(consumerGroupIds_, consumerGroupIds) };
    inline UpdateGatewayQuotaRuleRequest& setConsumerGroupIds(vector<string> && consumerGroupIds) { DARABONBA_PTR_SET_RVALUE(consumerGroupIds_, consumerGroupIds) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateGatewayQuotaRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline UpdateGatewayQuotaRuleRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // quotaLimit Field Functions 
    bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
    void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
    inline int64_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0L) };
    inline UpdateGatewayQuotaRuleRequest& setQuotaLimit(int64_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    // removeIds Field Functions 
    bool hasRemoveIds() const { return this->removeIds_ != nullptr;};
    void deleteRemoveIds() { this->removeIds_ = nullptr;};
    inline const vector<string> & getRemoveIds() const { DARABONBA_PTR_GET_CONST(removeIds_, vector<string>) };
    inline vector<string> getRemoveIds() { DARABONBA_PTR_GET(removeIds_, vector<string>) };
    inline UpdateGatewayQuotaRuleRequest& setRemoveIds(const vector<string> & removeIds) { DARABONBA_PTR_SET_VALUE(removeIds_, removeIds) };
    inline UpdateGatewayQuotaRuleRequest& setRemoveIds(vector<string> && removeIds) { DARABONBA_PTR_SET_RVALUE(removeIds_, removeIds) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateGatewayQuotaRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The list of principal (consumer) IDs to bind.
    shared_ptr<vector<string>> addIds_ {};
    // The conflict snapshot hash, used to prevent concurrent dirty overwrites when confirming an overwrite. Obtain this value from the response of a prior dryRun=true call.
    // 
    // This parameter is not required in the following cases: no conflicts exist, the call is a dry run (dryRun=true), or overwrite is set to false.
    // 
    // When dryRun is set to false and overwrite is set to true, if this parameter is missing or the value has expired and no longer matches, the backend returns accepted=false with a new conflict preview. Perform the dry run again to confirm the new conflicts.
    shared_ptr<string> conflictHash_ {};
    // The list of consumer group IDs. This parameter is not supported.
    shared_ptr<vector<string>> consumerGroupIds_ {};
    // Specifies whether to perform a dry run only without persisting or applying the configuration. A dry run checks whether conflicting rules exist on the bound consumers. For example, a consumer that already has a calendar-day quota cannot have another calendar-day quota rule added.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to allow overwriting when a conflict exists. If overwriting is allowed, the conflicting principals (consumers) are unbound from the old rule and bound to the new rule.
    shared_ptr<bool> overwrite_ {};
    // The updated total available quota.
    shared_ptr<int64_t> quotaLimit_ {};
    // The list of principal (consumer) IDs to unbind.
    shared_ptr<vector<string>> removeIds_ {};
    // The updated rule name.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
