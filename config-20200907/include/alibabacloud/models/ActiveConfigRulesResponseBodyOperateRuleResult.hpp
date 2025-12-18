// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_ACTIVECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ActiveConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    ActiveConfigRulesResponseBodyOperateRuleResult() = default ;
    ActiveConfigRulesResponseBodyOperateRuleResult(const ActiveConfigRulesResponseBodyOperateRuleResult &) = default ;
    ActiveConfigRulesResponseBodyOperateRuleResult(ActiveConfigRulesResponseBodyOperateRuleResult &&) = default ;
    ActiveConfigRulesResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveConfigRulesResponseBodyOperateRuleResult() = default ;
    ActiveConfigRulesResponseBodyOperateRuleResult& operator=(const ActiveConfigRulesResponseBodyOperateRuleResult &) = default ;
    ActiveConfigRulesResponseBodyOperateRuleResult& operator=(ActiveConfigRulesResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline ActiveConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline ActiveConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The returned results.
    std::shared_ptr<vector<Models::ActiveConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
