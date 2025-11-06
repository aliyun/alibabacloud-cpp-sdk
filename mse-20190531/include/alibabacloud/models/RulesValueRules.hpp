// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULESVALUERULES_HPP_
#define ALIBABACLOUD_MODELS_RULESVALUERULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RulesValueRulesSpringcloud.hpp>
#include <alibabacloud/models/RulesValueRulesDubbo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RulesValueRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RulesValueRules& obj) { 
      DARABONBA_PTR_TO_JSON(springcloud, springcloud_);
      DARABONBA_PTR_TO_JSON(dubbo, dubbo_);
    };
    friend void from_json(const Darabonba::Json& j, RulesValueRules& obj) { 
      DARABONBA_PTR_FROM_JSON(springcloud, springcloud_);
      DARABONBA_PTR_FROM_JSON(dubbo, dubbo_);
    };
    RulesValueRules() = default ;
    RulesValueRules(const RulesValueRules &) = default ;
    RulesValueRules(RulesValueRules &&) = default ;
    RulesValueRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RulesValueRules() = default ;
    RulesValueRules& operator=(const RulesValueRules &) = default ;
    RulesValueRules& operator=(RulesValueRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->springcloud_ == nullptr
        && return this->dubbo_ == nullptr; };
    // springcloud Field Functions 
    bool hasSpringcloud() const { return this->springcloud_ != nullptr;};
    void deleteSpringcloud() { this->springcloud_ = nullptr;};
    inline const vector<Models::RulesValueRulesSpringcloud> & springcloud() const { DARABONBA_PTR_GET_CONST(springcloud_, vector<Models::RulesValueRulesSpringcloud>) };
    inline vector<Models::RulesValueRulesSpringcloud> springcloud() { DARABONBA_PTR_GET(springcloud_, vector<Models::RulesValueRulesSpringcloud>) };
    inline RulesValueRules& setSpringcloud(const vector<Models::RulesValueRulesSpringcloud> & springcloud) { DARABONBA_PTR_SET_VALUE(springcloud_, springcloud) };
    inline RulesValueRules& setSpringcloud(vector<Models::RulesValueRulesSpringcloud> && springcloud) { DARABONBA_PTR_SET_RVALUE(springcloud_, springcloud) };


    // dubbo Field Functions 
    bool hasDubbo() const { return this->dubbo_ != nullptr;};
    void deleteDubbo() { this->dubbo_ = nullptr;};
    inline const vector<Models::RulesValueRulesDubbo> & dubbo() const { DARABONBA_PTR_GET_CONST(dubbo_, vector<Models::RulesValueRulesDubbo>) };
    inline vector<Models::RulesValueRulesDubbo> dubbo() { DARABONBA_PTR_GET(dubbo_, vector<Models::RulesValueRulesDubbo>) };
    inline RulesValueRules& setDubbo(const vector<Models::RulesValueRulesDubbo> & dubbo) { DARABONBA_PTR_SET_VALUE(dubbo_, dubbo) };
    inline RulesValueRules& setDubbo(vector<Models::RulesValueRulesDubbo> && dubbo) { DARABONBA_PTR_SET_RVALUE(dubbo_, dubbo) };


  protected:
    std::shared_ptr<vector<Models::RulesValueRulesSpringcloud>> springcloud_ = nullptr;
    std::shared_ptr<vector<Models::RulesValueRulesDubbo>> dubbo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
