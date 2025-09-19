// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATARULETREERULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATARULETREERULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(RuleKey, ruleKey_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleKey, ruleKey_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList() = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList(const GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList &) = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList(GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList &&) = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList() = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& operator=(const GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList &) = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& operator=(GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList &&) = default ;
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
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& setRuleKey(string ruleKey) { DARABONBA_PTR_SET_VALUE(ruleKey_, ruleKey) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The keyword of the check rule.
    std::shared_ptr<string> ruleKey_ = nullptr;
    // The name of the check rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Indicates whether the check rule is selected. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
