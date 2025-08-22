// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODYPAGEBEANSILENCEPOLICIESMATCHINGRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTSILENCEPOLICIESRESPONSEBODYPAGEBEANSILENCEPOLICIESMATCHINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
    };
    ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules() = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules(const ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules &) = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules(ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules &&) = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules() = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules& operator=(const ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules &) = default ;
    ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules& operator=(ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchingConditions_ != nullptr; };
    // matchingConditions Field Functions 
    bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
    void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
    inline const vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions> & matchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions>) };
    inline vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions> matchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions>) };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules& setMatchingConditions(const vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
    inline ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRules& setMatchingConditions(vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


  protected:
    // The matching conditions.
    std::shared_ptr<vector<Models::ListSilencePoliciesResponseBodyPageBeanSilencePoliciesMatchingRulesMatchingConditions>> matchingConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
