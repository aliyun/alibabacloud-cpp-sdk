// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULEMATCH2CRITERIACRITERIA_HPP_
#define ALIBABACLOUD_MODELS_WAFRULEMATCH2CRITERIACRITERIA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleMatch2CriteriaCriteriaCriteria.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleMatch2CriteriaCriteria : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleMatch2CriteriaCriteria& obj) { 
      DARABONBA_PTR_TO_JSON(ConvertToLower, convertToLower_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchOperator, matchOperator_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_ANY_TO_JSON(MatchValue, matchValue_);
      DARABONBA_PTR_TO_JSON(Negate, negate_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleMatch2CriteriaCriteria& obj) { 
      DARABONBA_PTR_FROM_JSON(ConvertToLower, convertToLower_);
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchOperator, matchOperator_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_ANY_FROM_JSON(MatchValue, matchValue_);
      DARABONBA_PTR_FROM_JSON(Negate, negate_);
    };
    WafRuleMatch2CriteriaCriteria() = default ;
    WafRuleMatch2CriteriaCriteria(const WafRuleMatch2CriteriaCriteria &) = default ;
    WafRuleMatch2CriteriaCriteria(WafRuleMatch2CriteriaCriteria &&) = default ;
    WafRuleMatch2CriteriaCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleMatch2CriteriaCriteria() = default ;
    WafRuleMatch2CriteriaCriteria& operator=(const WafRuleMatch2CriteriaCriteria &) = default ;
    WafRuleMatch2CriteriaCriteria& operator=(WafRuleMatch2CriteriaCriteria &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->convertToLower_ == nullptr
        && return this->criteria_ == nullptr && return this->logic_ == nullptr && return this->matchOperator_ == nullptr && return this->matchType_ == nullptr && return this->matchValue_ == nullptr
        && return this->negate_ == nullptr; };
    // convertToLower Field Functions 
    bool hasConvertToLower() const { return this->convertToLower_ != nullptr;};
    void deleteConvertToLower() { this->convertToLower_ = nullptr;};
    inline bool convertToLower() const { DARABONBA_PTR_GET_DEFAULT(convertToLower_, false) };
    inline WafRuleMatch2CriteriaCriteria& setConvertToLower(bool convertToLower) { DARABONBA_PTR_SET_VALUE(convertToLower_, convertToLower) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline const vector<Models::WafRuleMatch2CriteriaCriteriaCriteria> & criteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<Models::WafRuleMatch2CriteriaCriteriaCriteria>) };
    inline vector<Models::WafRuleMatch2CriteriaCriteriaCriteria> criteria() { DARABONBA_PTR_GET(criteria_, vector<Models::WafRuleMatch2CriteriaCriteriaCriteria>) };
    inline WafRuleMatch2CriteriaCriteria& setCriteria(const vector<Models::WafRuleMatch2CriteriaCriteriaCriteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
    inline WafRuleMatch2CriteriaCriteria& setCriteria(vector<Models::WafRuleMatch2CriteriaCriteriaCriteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline WafRuleMatch2CriteriaCriteria& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchOperator Field Functions 
    bool hasMatchOperator() const { return this->matchOperator_ != nullptr;};
    void deleteMatchOperator() { this->matchOperator_ = nullptr;};
    inline string matchOperator() const { DARABONBA_PTR_GET_DEFAULT(matchOperator_, "") };
    inline WafRuleMatch2CriteriaCriteria& setMatchOperator(string matchOperator) { DARABONBA_PTR_SET_VALUE(matchOperator_, matchOperator) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRuleMatch2CriteriaCriteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // matchValue Field Functions 
    bool hasMatchValue() const { return this->matchValue_ != nullptr;};
    void deleteMatchValue() { this->matchValue_ = nullptr;};
    inline     const Darabonba::Json & matchValue() const { DARABONBA_GET(matchValue_) };
    Darabonba::Json & matchValue() { DARABONBA_GET(matchValue_) };
    inline WafRuleMatch2CriteriaCriteria& setMatchValue(const Darabonba::Json & matchValue) { DARABONBA_SET_VALUE(matchValue_, matchValue) };
    inline WafRuleMatch2CriteriaCriteria& setMatchValue(Darabonba::Json & matchValue) { DARABONBA_SET_RVALUE(matchValue_, matchValue) };


    // negate Field Functions 
    bool hasNegate() const { return this->negate_ != nullptr;};
    void deleteNegate() { this->negate_ = nullptr;};
    inline bool negate() const { DARABONBA_PTR_GET_DEFAULT(negate_, false) };
    inline WafRuleMatch2CriteriaCriteria& setNegate(bool negate) { DARABONBA_PTR_SET_VALUE(negate_, negate) };


  protected:
    std::shared_ptr<bool> convertToLower_ = nullptr;
    std::shared_ptr<vector<Models::WafRuleMatch2CriteriaCriteriaCriteria>> criteria_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<string> matchOperator_ = nullptr;
    std::shared_ptr<string> matchType_ = nullptr;
    Darabonba::Json matchValue_ = nullptr;
    std::shared_ptr<bool> negate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
