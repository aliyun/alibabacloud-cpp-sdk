// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULELISTBYEVENTCODESLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULELISTBYEVENTCODESLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleListByEventCodesListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleListByEventCodesListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleListByEventCodesListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
    };
    DescribeRuleListByEventCodesListResponseBodyResultObject() = default ;
    DescribeRuleListByEventCodesListResponseBodyResultObject(const DescribeRuleListByEventCodesListResponseBodyResultObject &) = default ;
    DescribeRuleListByEventCodesListResponseBodyResultObject(DescribeRuleListByEventCodesListResponseBodyResultObject &&) = default ;
    DescribeRuleListByEventCodesListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleListByEventCodesListResponseBodyResultObject() = default ;
    DescribeRuleListByEventCodesListResponseBodyResultObject& operator=(const DescribeRuleListByEventCodesListResponseBodyResultObject &) = default ;
    DescribeRuleListByEventCodesListResponseBodyResultObject& operator=(DescribeRuleListByEventCodesListResponseBodyResultObject &&) = default ;
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
    inline DescribeRuleListByEventCodesListResponseBodyResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRuleListByEventCodesListResponseBodyResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Policy name
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
