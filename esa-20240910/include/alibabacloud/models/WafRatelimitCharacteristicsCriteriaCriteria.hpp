// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICSCRITERIACRITERIA_HPP_
#define ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICSCRITERIACRITERIA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRatelimitCharacteristicsCriteriaCriteriaCriteria.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRatelimitCharacteristicsCriteriaCriteria : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRatelimitCharacteristicsCriteriaCriteria& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
    };
    friend void from_json(const Darabonba::Json& j, WafRatelimitCharacteristicsCriteriaCriteria& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
    };
    WafRatelimitCharacteristicsCriteriaCriteria() = default ;
    WafRatelimitCharacteristicsCriteriaCriteria(const WafRatelimitCharacteristicsCriteriaCriteria &) = default ;
    WafRatelimitCharacteristicsCriteriaCriteria(WafRatelimitCharacteristicsCriteriaCriteria &&) = default ;
    WafRatelimitCharacteristicsCriteriaCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRatelimitCharacteristicsCriteriaCriteria() = default ;
    WafRatelimitCharacteristicsCriteriaCriteria& operator=(const WafRatelimitCharacteristicsCriteriaCriteria &) = default ;
    WafRatelimitCharacteristicsCriteriaCriteria& operator=(WafRatelimitCharacteristicsCriteriaCriteria &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->logic_ == nullptr && return this->matchType_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline const vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria> & criteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria>) };
    inline vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria> criteria() { DARABONBA_PTR_GET(criteria_, vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria>) };
    inline WafRatelimitCharacteristicsCriteriaCriteria& setCriteria(const vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
    inline WafRatelimitCharacteristicsCriteriaCriteria& setCriteria(vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline WafRatelimitCharacteristicsCriteriaCriteria& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRatelimitCharacteristicsCriteriaCriteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


  protected:
    std::shared_ptr<vector<Models::WafRatelimitCharacteristicsCriteriaCriteriaCriteria>> criteria_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<string> matchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
