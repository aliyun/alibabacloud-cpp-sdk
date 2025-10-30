// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPCOPYRULERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DEEPCOPYRULERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DeepCopyRuleResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepCopyRuleResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BatchCopyFlag, batchCopyFlag_);
      DARABONBA_PTR_TO_JSON(ConsoleRuleId, consoleRuleId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleVersionId, ruleVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeepCopyRuleResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchCopyFlag, batchCopyFlag_);
      DARABONBA_PTR_FROM_JSON(ConsoleRuleId, consoleRuleId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleVersionId, ruleVersionId_);
    };
    DeepCopyRuleResponseBodyResultObject() = default ;
    DeepCopyRuleResponseBodyResultObject(const DeepCopyRuleResponseBodyResultObject &) = default ;
    DeepCopyRuleResponseBodyResultObject(DeepCopyRuleResponseBodyResultObject &&) = default ;
    DeepCopyRuleResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepCopyRuleResponseBodyResultObject() = default ;
    DeepCopyRuleResponseBodyResultObject& operator=(const DeepCopyRuleResponseBodyResultObject &) = default ;
    DeepCopyRuleResponseBodyResultObject& operator=(DeepCopyRuleResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchCopyFlag_ == nullptr
        && return this->consoleRuleId_ == nullptr && return this->ruleId_ == nullptr && return this->ruleVersionId_ == nullptr; };
    // batchCopyFlag Field Functions 
    bool hasBatchCopyFlag() const { return this->batchCopyFlag_ != nullptr;};
    void deleteBatchCopyFlag() { this->batchCopyFlag_ = nullptr;};
    inline bool batchCopyFlag() const { DARABONBA_PTR_GET_DEFAULT(batchCopyFlag_, false) };
    inline DeepCopyRuleResponseBodyResultObject& setBatchCopyFlag(bool batchCopyFlag) { DARABONBA_PTR_SET_VALUE(batchCopyFlag_, batchCopyFlag) };


    // consoleRuleId Field Functions 
    bool hasConsoleRuleId() const { return this->consoleRuleId_ != nullptr;};
    void deleteConsoleRuleId() { this->consoleRuleId_ = nullptr;};
    inline int64_t consoleRuleId() const { DARABONBA_PTR_GET_DEFAULT(consoleRuleId_, 0L) };
    inline DeepCopyRuleResponseBodyResultObject& setConsoleRuleId(int64_t consoleRuleId) { DARABONBA_PTR_SET_VALUE(consoleRuleId_, consoleRuleId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeepCopyRuleResponseBodyResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleVersionId Field Functions 
    bool hasRuleVersionId() const { return this->ruleVersionId_ != nullptr;};
    void deleteRuleVersionId() { this->ruleVersionId_ = nullptr;};
    inline int64_t ruleVersionId() const { DARABONBA_PTR_GET_DEFAULT(ruleVersionId_, 0L) };
    inline DeepCopyRuleResponseBodyResultObject& setRuleVersionId(int64_t ruleVersionId) { DARABONBA_PTR_SET_VALUE(ruleVersionId_, ruleVersionId) };


  protected:
    // Whether to redirect to details
    std::shared_ptr<bool> batchCopyFlag_ = nullptr;
    // Primary key of the policy
    std::shared_ptr<int64_t> consoleRuleId_ = nullptr;
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Primary key of the policy version
    std::shared_ptr<int64_t> ruleVersionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
