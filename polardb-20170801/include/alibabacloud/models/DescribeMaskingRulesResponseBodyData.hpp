// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASKINGRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeMaskingRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMaskingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(RuleVersion, ruleVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMaskingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(RuleVersion, ruleVersion_);
    };
    DescribeMaskingRulesResponseBodyData() = default ;
    DescribeMaskingRulesResponseBodyData(const DescribeMaskingRulesResponseBodyData &) = default ;
    DescribeMaskingRulesResponseBodyData(DescribeMaskingRulesResponseBodyData &&) = default ;
    DescribeMaskingRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMaskingRulesResponseBodyData() = default ;
    DescribeMaskingRulesResponseBodyData& operator=(const DescribeMaskingRulesResponseBodyData &) = default ;
    DescribeMaskingRulesResponseBodyData& operator=(DescribeMaskingRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleList_ != nullptr
        && this->ruleVersion_ != nullptr; };
    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<string> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<string>) };
    inline vector<string> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<string>) };
    inline DescribeMaskingRulesResponseBodyData& setRuleList(const vector<string> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeMaskingRulesResponseBodyData& setRuleList(vector<string> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // ruleVersion Field Functions 
    bool hasRuleVersion() const { return this->ruleVersion_ != nullptr;};
    void deleteRuleVersion() { this->ruleVersion_ = nullptr;};
    inline string ruleVersion() const { DARABONBA_PTR_GET_DEFAULT(ruleVersion_, "") };
    inline DescribeMaskingRulesResponseBodyData& setRuleVersion(string ruleVersion) { DARABONBA_PTR_SET_VALUE(ruleVersion_, ruleVersion) };


  protected:
    // Details about the masking rules.
    std::shared_ptr<vector<string>> ruleList_ = nullptr;
    // The version of the masking rule. Valid values: v1 and v2. Default value: v1
    std::shared_ptr<string> ruleVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
