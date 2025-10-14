// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICSCRITERIA_HPP_
#define ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICSCRITERIA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRatelimitCharacteristicsCriteriaCriteria.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRatelimitCharacteristicsCriteria : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRatelimitCharacteristicsCriteria& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
    };
    friend void from_json(const Darabonba::Json& j, WafRatelimitCharacteristicsCriteria& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
    };
    WafRatelimitCharacteristicsCriteria() = default ;
    WafRatelimitCharacteristicsCriteria(const WafRatelimitCharacteristicsCriteria &) = default ;
    WafRatelimitCharacteristicsCriteria(WafRatelimitCharacteristicsCriteria &&) = default ;
    WafRatelimitCharacteristicsCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRatelimitCharacteristicsCriteria() = default ;
    WafRatelimitCharacteristicsCriteria& operator=(const WafRatelimitCharacteristicsCriteria &) = default ;
    WafRatelimitCharacteristicsCriteria& operator=(WafRatelimitCharacteristicsCriteria &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->criteria_ == nullptr
        && return this->logic_ == nullptr && return this->matchType_ == nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline const vector<Models::WafRatelimitCharacteristicsCriteriaCriteria> & criteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<Models::WafRatelimitCharacteristicsCriteriaCriteria>) };
    inline vector<Models::WafRatelimitCharacteristicsCriteriaCriteria> criteria() { DARABONBA_PTR_GET(criteria_, vector<Models::WafRatelimitCharacteristicsCriteriaCriteria>) };
    inline WafRatelimitCharacteristicsCriteria& setCriteria(const vector<Models::WafRatelimitCharacteristicsCriteriaCriteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
    inline WafRatelimitCharacteristicsCriteria& setCriteria(vector<Models::WafRatelimitCharacteristicsCriteriaCriteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline WafRatelimitCharacteristicsCriteria& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRatelimitCharacteristicsCriteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


  protected:
    std::shared_ptr<vector<Models::WafRatelimitCharacteristicsCriteriaCriteria>> criteria_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<string> matchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
