// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTCENTERRULENAMERESPONSEBODYRULENAMES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTCENTERRULENAMERESPONSEBODYRULENAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListEventCenterRuleNameResponseBodyRuleNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventCenterRuleNameResponseBodyRuleNames& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventCenterRuleNameResponseBodyRuleNames& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ListEventCenterRuleNameResponseBodyRuleNames() = default ;
    ListEventCenterRuleNameResponseBodyRuleNames(const ListEventCenterRuleNameResponseBodyRuleNames &) = default ;
    ListEventCenterRuleNameResponseBodyRuleNames(ListEventCenterRuleNameResponseBodyRuleNames &&) = default ;
    ListEventCenterRuleNameResponseBodyRuleNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventCenterRuleNameResponseBodyRuleNames() = default ;
    ListEventCenterRuleNameResponseBodyRuleNames& operator=(const ListEventCenterRuleNameResponseBodyRuleNames &) = default ;
    ListEventCenterRuleNameResponseBodyRuleNames& operator=(ListEventCenterRuleNameResponseBodyRuleNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ListEventCenterRuleNameResponseBodyRuleNames& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListEventCenterRuleNameResponseBodyRuleNames& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The ID of the event notification rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the event notification rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
