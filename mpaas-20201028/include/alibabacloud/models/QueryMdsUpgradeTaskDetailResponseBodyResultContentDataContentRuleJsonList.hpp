// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODYRESULTCONTENTDATACONTENTRULEJSONLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMDSUPGRADETASKDETAILRESPONSEBODYRESULTCONTENTDATACONTENTRULEJSONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(RuleElement, ruleElement_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(RuleElement, ruleElement_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList() = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList(const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList &) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList(QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList &&) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList() = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& operator=(const QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList &) = default ;
    QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& operator=(QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operation_ == nullptr
        && return this->ruleElement_ == nullptr && return this->ruleType_ == nullptr && return this->value_ == nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // ruleElement Field Functions 
    bool hasRuleElement() const { return this->ruleElement_ != nullptr;};
    void deleteRuleElement() { this->ruleElement_ = nullptr;};
    inline string ruleElement() const { DARABONBA_PTR_GET_DEFAULT(ruleElement_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& setRuleElement(string ruleElement) { DARABONBA_PTR_SET_VALUE(ruleElement_, ruleElement) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryMdsUpgradeTaskDetailResponseBodyResultContentDataContentRuleJsonList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> ruleElement_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
