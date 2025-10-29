// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKRULESRESPONSEBODYRULEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKRULESRESPONSEBODYRULEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
    };
    DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList() = default ;
    DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList(const DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList &) = default ;
    DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList(DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList &&) = default ;
    DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList() = default ;
    DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList& operator=(const DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList &) = default ;
    DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList& operator=(DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleInfo_ == nullptr; };
    // ruleInfo Field Functions 
    bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
    void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
    inline const vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo> & ruleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo>) };
    inline vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo> ruleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo>) };
    inline DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList& setRuleInfo(const vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
    inline DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList& setRuleInfo(vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoListRuleInfo>> ruleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
