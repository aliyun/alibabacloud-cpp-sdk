// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULESRULEBASICINFOTRIGGERS_HPP_
#define ALIBABACLOUD_MODELS_GETRULEDETAILRESPONSEBODYDATARULESRULEBASICINFOTRIGGERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers& obj) { 
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers& obj) { 
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers() = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers(const GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers &) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers(GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers &&) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers() = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers& operator=(const GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers &) = default ;
    GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers& operator=(GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trigger_ == nullptr; };
    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const vector<string> & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, vector<string>) };
    inline vector<string> trigger() { DARABONBA_PTR_GET(trigger_, vector<string>) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers& setTrigger(const vector<string> & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline GetRuleDetailResponseBodyDataRulesRuleBasicInfoTriggers& setTrigger(vector<string> && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    std::shared_ptr<vector<string>> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
