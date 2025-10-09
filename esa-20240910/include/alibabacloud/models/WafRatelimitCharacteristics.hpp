// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICS_HPP_
#define ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRatelimitCharacteristicsCriteria.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRatelimitCharacteristics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRatelimitCharacteristics& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
    };
    friend void from_json(const Darabonba::Json& j, WafRatelimitCharacteristics& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
    };
    WafRatelimitCharacteristics() = default ;
    WafRatelimitCharacteristics(const WafRatelimitCharacteristics &) = default ;
    WafRatelimitCharacteristics(WafRatelimitCharacteristics &&) = default ;
    WafRatelimitCharacteristics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRatelimitCharacteristics() = default ;
    WafRatelimitCharacteristics& operator=(const WafRatelimitCharacteristics &) = default ;
    WafRatelimitCharacteristics& operator=(WafRatelimitCharacteristics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->criteria_ != nullptr
        && this->logic_ != nullptr && this->matchType_ != nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline const vector<WafRatelimitCharacteristicsCriteria> & criteria() const { DARABONBA_PTR_GET_CONST(criteria_, vector<WafRatelimitCharacteristicsCriteria>) };
    inline vector<WafRatelimitCharacteristicsCriteria> criteria() { DARABONBA_PTR_GET(criteria_, vector<WafRatelimitCharacteristicsCriteria>) };
    inline WafRatelimitCharacteristics& setCriteria(const vector<WafRatelimitCharacteristicsCriteria> & criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };
    inline WafRatelimitCharacteristics& setCriteria(vector<WafRatelimitCharacteristicsCriteria> && criteria) { DARABONBA_PTR_SET_RVALUE(criteria_, criteria) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline WafRatelimitCharacteristics& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRatelimitCharacteristics& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


  protected:
    std::shared_ptr<vector<WafRatelimitCharacteristicsCriteria>> criteria_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<string> matchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
