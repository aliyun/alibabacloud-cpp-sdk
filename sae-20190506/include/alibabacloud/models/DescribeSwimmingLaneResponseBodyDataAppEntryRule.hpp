// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAAPPENTRYRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAAPPENTRYRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBodyDataAppEntryRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBodyDataAppEntryRule& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionJoiner, conditionJoiner_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(IndependentPercentageEnable, independentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(Percentage, percentage_);
      DARABONBA_PTR_TO_JSON(PercentageByPath, percentageByPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBodyDataAppEntryRule& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionJoiner, conditionJoiner_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(IndependentPercentageEnable, independentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
      DARABONBA_PTR_FROM_JSON(PercentageByPath, percentageByPath_);
    };
    DescribeSwimmingLaneResponseBodyDataAppEntryRule() = default ;
    DescribeSwimmingLaneResponseBodyDataAppEntryRule(const DescribeSwimmingLaneResponseBodyDataAppEntryRule &) = default ;
    DescribeSwimmingLaneResponseBodyDataAppEntryRule(DescribeSwimmingLaneResponseBodyDataAppEntryRule &&) = default ;
    DescribeSwimmingLaneResponseBodyDataAppEntryRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBodyDataAppEntryRule() = default ;
    DescribeSwimmingLaneResponseBodyDataAppEntryRule& operator=(const DescribeSwimmingLaneResponseBodyDataAppEntryRule &) = default ;
    DescribeSwimmingLaneResponseBodyDataAppEntryRule& operator=(DescribeSwimmingLaneResponseBodyDataAppEntryRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionJoiner_ != nullptr
        && this->conditions_ != nullptr && this->independentPercentageEnable_ != nullptr && this->paths_ != nullptr && this->percentage_ != nullptr && this->percentageByPath_ != nullptr; };
    // conditionJoiner Field Functions 
    bool hasConditionJoiner() const { return this->conditionJoiner_ != nullptr;};
    void deleteConditionJoiner() { this->conditionJoiner_ = nullptr;};
    inline string conditionJoiner() const { DARABONBA_PTR_GET_DEFAULT(conditionJoiner_, "") };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setConditionJoiner(string conditionJoiner) { DARABONBA_PTR_SET_VALUE(conditionJoiner_, conditionJoiner) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions>) };
    inline vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions>) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setConditions(const vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setConditions(vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // independentPercentageEnable Field Functions 
    bool hasIndependentPercentageEnable() const { return this->independentPercentageEnable_ != nullptr;};
    void deleteIndependentPercentageEnable() { this->independentPercentageEnable_ = nullptr;};
    inline bool independentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(independentPercentageEnable_, false) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setIndependentPercentageEnable(bool independentPercentageEnable) { DARABONBA_PTR_SET_VALUE(independentPercentageEnable_, independentPercentageEnable) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const vector<string> & paths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
    inline vector<string> paths() { DARABONBA_PTR_GET(paths_, vector<string>) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // percentage Field Functions 
    bool hasPercentage() const { return this->percentage_ != nullptr;};
    void deletePercentage() { this->percentage_ = nullptr;};
    inline int32_t percentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


    // percentageByPath Field Functions 
    bool hasPercentageByPath() const { return this->percentageByPath_ != nullptr;};
    void deletePercentageByPath() { this->percentageByPath_ = nullptr;};
    inline const map<string, int32_t> & percentageByPath() const { DARABONBA_PTR_GET_CONST(percentageByPath_, map<string, int32_t>) };
    inline map<string, int32_t> percentageByPath() { DARABONBA_PTR_GET(percentageByPath_, map<string, int32_t>) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setPercentageByPath(const map<string, int32_t> & percentageByPath) { DARABONBA_PTR_SET_VALUE(percentageByPath_, percentageByPath) };
    inline DescribeSwimmingLaneResponseBodyDataAppEntryRule& setPercentageByPath(map<string, int32_t> && percentageByPath) { DARABONBA_PTR_SET_RVALUE(percentageByPath_, percentageByPath) };


  protected:
    std::shared_ptr<string> conditionJoiner_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSwimmingLaneResponseBodyDataAppEntryRuleConditions>> conditions_ = nullptr;
    std::shared_ptr<bool> independentPercentageEnable_ = nullptr;
    std::shared_ptr<vector<string>> paths_ = nullptr;
    std::shared_ptr<int32_t> percentage_ = nullptr;
    std::shared_ptr<map<string, int32_t>> percentageByPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
