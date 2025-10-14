// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTDEDUCTIONRULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTDEDUCTIONRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyPointDeductionRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyPointDeductionRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(punishmentTypes, punishmentTypes_);
      DARABONBA_PTR_TO_JSON(ruleValue, ruleValue_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyPointDeductionRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(punishmentTypes, punishmentTypes_);
      DARABONBA_PTR_FROM_JSON(ruleValue, ruleValue_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    GetAICoachScriptResponseBodyPointDeductionRuleList() = default ;
    GetAICoachScriptResponseBodyPointDeductionRuleList(const GetAICoachScriptResponseBodyPointDeductionRuleList &) = default ;
    GetAICoachScriptResponseBodyPointDeductionRuleList(GetAICoachScriptResponseBodyPointDeductionRuleList &&) = default ;
    GetAICoachScriptResponseBodyPointDeductionRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyPointDeductionRuleList() = default ;
    GetAICoachScriptResponseBodyPointDeductionRuleList& operator=(const GetAICoachScriptResponseBodyPointDeductionRuleList &) = default ;
    GetAICoachScriptResponseBodyPointDeductionRuleList& operator=(GetAICoachScriptResponseBodyPointDeductionRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->punishmentTypes_ == nullptr && return this->ruleValue_ == nullptr && return this->weight_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAICoachScriptResponseBodyPointDeductionRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // punishmentTypes Field Functions 
    bool hasPunishmentTypes() const { return this->punishmentTypes_ != nullptr;};
    void deletePunishmentTypes() { this->punishmentTypes_ = nullptr;};
    inline const vector<string> & punishmentTypes() const { DARABONBA_PTR_GET_CONST(punishmentTypes_, vector<string>) };
    inline vector<string> punishmentTypes() { DARABONBA_PTR_GET(punishmentTypes_, vector<string>) };
    inline GetAICoachScriptResponseBodyPointDeductionRuleList& setPunishmentTypes(const vector<string> & punishmentTypes) { DARABONBA_PTR_SET_VALUE(punishmentTypes_, punishmentTypes) };
    inline GetAICoachScriptResponseBodyPointDeductionRuleList& setPunishmentTypes(vector<string> && punishmentTypes) { DARABONBA_PTR_SET_RVALUE(punishmentTypes_, punishmentTypes) };


    // ruleValue Field Functions 
    bool hasRuleValue() const { return this->ruleValue_ != nullptr;};
    void deleteRuleValue() { this->ruleValue_ = nullptr;};
    inline string ruleValue() const { DARABONBA_PTR_GET_DEFAULT(ruleValue_, "") };
    inline GetAICoachScriptResponseBodyPointDeductionRuleList& setRuleValue(string ruleValue) { DARABONBA_PTR_SET_VALUE(ruleValue_, ruleValue) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline GetAICoachScriptResponseBodyPointDeductionRuleList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> punishmentTypes_ = nullptr;
    std::shared_ptr<string> ruleValue_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
