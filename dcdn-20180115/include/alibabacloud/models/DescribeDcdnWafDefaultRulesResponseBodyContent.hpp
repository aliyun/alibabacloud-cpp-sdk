// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFDEFAULTRULESRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafDefaultRulesResponseBodyContentRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafDefaultRulesResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafDefaultRulesResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafDefaultRulesResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeDcdnWafDefaultRulesResponseBodyContent() = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContent(const DescribeDcdnWafDefaultRulesResponseBodyContent &) = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContent(DescribeDcdnWafDefaultRulesResponseBodyContent &&) = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafDefaultRulesResponseBodyContent() = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContent& operator=(const DescribeDcdnWafDefaultRulesResponseBodyContent &) = default ;
    DescribeDcdnWafDefaultRulesResponseBodyContent& operator=(DescribeDcdnWafDefaultRulesResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->rules_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafDefaultRulesResponseBodyContent& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules>) };
    inline vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules>) };
    inline DescribeDcdnWafDefaultRulesResponseBodyContent& setRules(const vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeDcdnWafDefaultRulesResponseBodyContent& setRules(vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The protection scenario. Valid values:
    // 
    // *   **waf_group**: basic web protection.
    // *   **anti_scan**: scan protection.
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The rules.
    std::shared_ptr<vector<Models::DescribeDcdnWafDefaultRulesResponseBodyContentRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
