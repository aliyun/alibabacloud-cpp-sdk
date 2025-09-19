// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODYDATARULETREERULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETBUILDRISKDEFINERULECONFIGRESPONSEBODYDATARULETREERULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleKey, ruleKey_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleKey, ruleKey_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList() = default ;
    GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList(const GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList &) = default ;
    GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList(GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList &&) = default ;
    GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList() = default ;
    GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& operator=(const GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList &) = default ;
    GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& operator=(GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleKey_ != nullptr
        && this->ruleName_ != nullptr && this->selected_ != nullptr; };
    // ruleKey Field Functions 
    bool hasRuleKey() const { return this->ruleKey_ != nullptr;};
    void deleteRuleKey() { this->ruleKey_ = nullptr;};
    inline string ruleKey() const { DARABONBA_PTR_GET_DEFAULT(ruleKey_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& setRuleKey(string ruleKey) { DARABONBA_PTR_SET_VALUE(ruleKey_, ruleKey) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline GetBuildRiskDefineRuleConfigResponseBodyDataRuleTreeRuleList& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The check item.
    std::shared_ptr<string> ruleKey_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Indicates whether the check item is selected. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
