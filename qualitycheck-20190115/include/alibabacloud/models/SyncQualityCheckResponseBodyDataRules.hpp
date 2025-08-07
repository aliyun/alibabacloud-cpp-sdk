// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULES_HPP_
#define ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SyncQualityCheckResponseBodyDataRulesHit.hpp>
#include <alibabacloud/models/SyncQualityCheckResponseBodyDataRulesRuleInfoBase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SyncQualityCheckResponseBodyDataRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncQualityCheckResponseBodyDataRules& obj) { 
      DARABONBA_PTR_TO_JSON(Hit, hit_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleInfoBase, ruleInfoBase_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, SyncQualityCheckResponseBodyDataRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleInfoBase, ruleInfoBase_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    SyncQualityCheckResponseBodyDataRules() = default ;
    SyncQualityCheckResponseBodyDataRules(const SyncQualityCheckResponseBodyDataRules &) = default ;
    SyncQualityCheckResponseBodyDataRules(SyncQualityCheckResponseBodyDataRules &&) = default ;
    SyncQualityCheckResponseBodyDataRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncQualityCheckResponseBodyDataRules() = default ;
    SyncQualityCheckResponseBodyDataRules& operator=(const SyncQualityCheckResponseBodyDataRules &) = default ;
    SyncQualityCheckResponseBodyDataRules& operator=(SyncQualityCheckResponseBodyDataRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hit_ != nullptr
        && this->rid_ != nullptr && this->ruleInfoBase_ != nullptr && this->ruleName_ != nullptr; };
    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline const vector<Models::SyncQualityCheckResponseBodyDataRulesHit> & hit() const { DARABONBA_PTR_GET_CONST(hit_, vector<Models::SyncQualityCheckResponseBodyDataRulesHit>) };
    inline vector<Models::SyncQualityCheckResponseBodyDataRulesHit> hit() { DARABONBA_PTR_GET(hit_, vector<Models::SyncQualityCheckResponseBodyDataRulesHit>) };
    inline SyncQualityCheckResponseBodyDataRules& setHit(const vector<Models::SyncQualityCheckResponseBodyDataRulesHit> & hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };
    inline SyncQualityCheckResponseBodyDataRules& setHit(vector<Models::SyncQualityCheckResponseBodyDataRulesHit> && hit) { DARABONBA_PTR_SET_RVALUE(hit_, hit) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline SyncQualityCheckResponseBodyDataRules& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleInfoBase Field Functions 
    bool hasRuleInfoBase() const { return this->ruleInfoBase_ != nullptr;};
    void deleteRuleInfoBase() { this->ruleInfoBase_ = nullptr;};
    inline const Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase & ruleInfoBase() const { DARABONBA_PTR_GET_CONST(ruleInfoBase_, Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase) };
    inline Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase ruleInfoBase() { DARABONBA_PTR_GET(ruleInfoBase_, Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase) };
    inline SyncQualityCheckResponseBodyDataRules& setRuleInfoBase(const Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase & ruleInfoBase) { DARABONBA_PTR_SET_VALUE(ruleInfoBase_, ruleInfoBase) };
    inline SyncQualityCheckResponseBodyDataRules& setRuleInfoBase(Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase && ruleInfoBase) { DARABONBA_PTR_SET_RVALUE(ruleInfoBase_, ruleInfoBase) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline SyncQualityCheckResponseBodyDataRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<vector<Models::SyncQualityCheckResponseBodyDataRulesHit>> hit_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<Models::SyncQualityCheckResponseBodyDataRulesRuleInfoBase> ruleInfoBase_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
