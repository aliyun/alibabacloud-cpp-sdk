// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPARERULERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_COMPARERULERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CompareRuleResponseBodyResultObjectNewRule.hpp>
#include <alibabacloud/models/CompareRuleResponseBodyResultObjectOldRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CompareRuleResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompareRuleResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(newRule, newRule_);
      DARABONBA_PTR_TO_JSON(oldRule, oldRule_);
    };
    friend void from_json(const Darabonba::Json& j, CompareRuleResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(newRule, newRule_);
      DARABONBA_PTR_FROM_JSON(oldRule, oldRule_);
    };
    CompareRuleResponseBodyResultObject() = default ;
    CompareRuleResponseBodyResultObject(const CompareRuleResponseBodyResultObject &) = default ;
    CompareRuleResponseBodyResultObject(CompareRuleResponseBodyResultObject &&) = default ;
    CompareRuleResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompareRuleResponseBodyResultObject() = default ;
    CompareRuleResponseBodyResultObject& operator=(const CompareRuleResponseBodyResultObject &) = default ;
    CompareRuleResponseBodyResultObject& operator=(CompareRuleResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newRule_ == nullptr
        && return this->oldRule_ == nullptr; };
    // newRule Field Functions 
    bool hasNewRule() const { return this->newRule_ != nullptr;};
    void deleteNewRule() { this->newRule_ = nullptr;};
    inline const Models::CompareRuleResponseBodyResultObjectNewRule & newRule() const { DARABONBA_PTR_GET_CONST(newRule_, Models::CompareRuleResponseBodyResultObjectNewRule) };
    inline Models::CompareRuleResponseBodyResultObjectNewRule newRule() { DARABONBA_PTR_GET(newRule_, Models::CompareRuleResponseBodyResultObjectNewRule) };
    inline CompareRuleResponseBodyResultObject& setNewRule(const Models::CompareRuleResponseBodyResultObjectNewRule & newRule) { DARABONBA_PTR_SET_VALUE(newRule_, newRule) };
    inline CompareRuleResponseBodyResultObject& setNewRule(Models::CompareRuleResponseBodyResultObjectNewRule && newRule) { DARABONBA_PTR_SET_RVALUE(newRule_, newRule) };


    // oldRule Field Functions 
    bool hasOldRule() const { return this->oldRule_ != nullptr;};
    void deleteOldRule() { this->oldRule_ = nullptr;};
    inline const Models::CompareRuleResponseBodyResultObjectOldRule & oldRule() const { DARABONBA_PTR_GET_CONST(oldRule_, Models::CompareRuleResponseBodyResultObjectOldRule) };
    inline Models::CompareRuleResponseBodyResultObjectOldRule oldRule() { DARABONBA_PTR_GET(oldRule_, Models::CompareRuleResponseBodyResultObjectOldRule) };
    inline CompareRuleResponseBodyResultObject& setOldRule(const Models::CompareRuleResponseBodyResultObjectOldRule & oldRule) { DARABONBA_PTR_SET_VALUE(oldRule_, oldRule) };
    inline CompareRuleResponseBodyResultObject& setOldRule(Models::CompareRuleResponseBodyResultObjectOldRule && oldRule) { DARABONBA_PTR_SET_RVALUE(oldRule_, oldRule) };


  protected:
    // New policy object.
    std::shared_ptr<Models::CompareRuleResponseBodyResultObjectNewRule> newRule_ = nullptr;
    // Old policy object.
    std::shared_ptr<Models::CompareRuleResponseBodyResultObjectOldRule> oldRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
