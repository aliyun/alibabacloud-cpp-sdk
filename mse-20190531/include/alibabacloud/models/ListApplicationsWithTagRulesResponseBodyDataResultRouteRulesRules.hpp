// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULESRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULESRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo.hpp>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& obj) { 
      DARABONBA_PTR_TO_JSON(dubbo, dubbo_);
      DARABONBA_PTR_TO_JSON(springcloud, springcloud_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& obj) { 
      DARABONBA_PTR_FROM_JSON(dubbo, dubbo_);
      DARABONBA_PTR_FROM_JSON(springcloud, springcloud_);
    };
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules(ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules &&) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& operator=(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& operator=(ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dubbo_ != nullptr
        && this->springcloud_ != nullptr; };
    // dubbo Field Functions 
    bool hasDubbo() const { return this->dubbo_ != nullptr;};
    void deleteDubbo() { this->dubbo_ = nullptr;};
    inline const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo> & dubbo() const { DARABONBA_PTR_GET_CONST(dubbo_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo>) };
    inline vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo> dubbo() { DARABONBA_PTR_GET(dubbo_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& setDubbo(const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo> & dubbo) { DARABONBA_PTR_SET_VALUE(dubbo_, dubbo) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& setDubbo(vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo> && dubbo) { DARABONBA_PTR_SET_RVALUE(dubbo_, dubbo) };


    // springcloud Field Functions 
    bool hasSpringcloud() const { return this->springcloud_ != nullptr;};
    void deleteSpringcloud() { this->springcloud_ = nullptr;};
    inline const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud> & springcloud() const { DARABONBA_PTR_GET_CONST(springcloud_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud>) };
    inline vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud> springcloud() { DARABONBA_PTR_GET(springcloud_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& setSpringcloud(const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud> & springcloud) { DARABONBA_PTR_SET_VALUE(springcloud_, springcloud) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules& setSpringcloud(vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud> && springcloud) { DARABONBA_PTR_SET_RVALUE(springcloud_, springcloud) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesDubbo>> dubbo_ = nullptr;
    std::shared_ptr<vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRulesSpringcloud>> springcloud_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
