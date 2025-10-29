// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODYRULEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODYRULEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIProduceRulesResponseBodyRuleInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIProduceRulesResponseBodyRuleInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIProduceRulesResponseBodyRuleInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
    };
    DescribeLiveAIProduceRulesResponseBodyRuleInfoList() = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoList(const DescribeLiveAIProduceRulesResponseBodyRuleInfoList &) = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoList(DescribeLiveAIProduceRulesResponseBodyRuleInfoList &&) = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIProduceRulesResponseBodyRuleInfoList() = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoList& operator=(const DescribeLiveAIProduceRulesResponseBodyRuleInfoList &) = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoList& operator=(DescribeLiveAIProduceRulesResponseBodyRuleInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleInfo_ == nullptr; };
    // ruleInfo Field Functions 
    bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
    void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo> & ruleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo>) };
    inline vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo> ruleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo>) };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoList& setRuleInfo(const vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoList& setRuleInfo(vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo>> ruleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
