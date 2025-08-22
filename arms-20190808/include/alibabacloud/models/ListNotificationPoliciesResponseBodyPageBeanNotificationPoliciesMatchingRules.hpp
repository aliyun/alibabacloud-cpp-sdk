// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESMATCHINGRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTNOTIFICATIONPOLICIESRESPONSEBODYPAGEBEANNOTIFICATIONPOLICIESMATCHINGRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules& obj) { 
      DARABONBA_PTR_TO_JSON(MatchingConditions, matchingConditions_);
    };
    friend void from_json(const Darabonba::Json& j, ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchingConditions, matchingConditions_);
    };
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules &&) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules() = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules& operator=(const ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules &) = default ;
    ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules& operator=(ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchingConditions_ != nullptr; };
    // matchingConditions Field Functions 
    bool hasMatchingConditions() const { return this->matchingConditions_ != nullptr;};
    void deleteMatchingConditions() { this->matchingConditions_ = nullptr;};
    inline const vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions> & matchingConditions() const { DARABONBA_PTR_GET_CONST(matchingConditions_, vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions>) };
    inline vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions> matchingConditions() { DARABONBA_PTR_GET(matchingConditions_, vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions>) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules& setMatchingConditions(const vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions> & matchingConditions) { DARABONBA_PTR_SET_VALUE(matchingConditions_, matchingConditions) };
    inline ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRules& setMatchingConditions(vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions> && matchingConditions) { DARABONBA_PTR_SET_RVALUE(matchingConditions_, matchingConditions) };


  protected:
    // The matching conditions.
    std::shared_ptr<vector<Models::ListNotificationPoliciesResponseBodyPageBeanNotificationPoliciesMatchingRulesMatchingConditions>> matchingConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
