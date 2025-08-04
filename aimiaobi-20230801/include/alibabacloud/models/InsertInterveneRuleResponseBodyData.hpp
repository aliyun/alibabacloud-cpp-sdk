// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTINTERVENERULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_INSERTINTERVENERULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InsertInterveneRuleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertInterveneRuleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertInterveneRuleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    InsertInterveneRuleResponseBodyData() = default ;
    InsertInterveneRuleResponseBodyData(const InsertInterveneRuleResponseBodyData &) = default ;
    InsertInterveneRuleResponseBodyData(InsertInterveneRuleResponseBodyData &&) = default ;
    InsertInterveneRuleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertInterveneRuleResponseBodyData() = default ;
    InsertInterveneRuleResponseBodyData& operator=(const InsertInterveneRuleResponseBodyData &) = default ;
    InsertInterveneRuleResponseBodyData& operator=(InsertInterveneRuleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->ruleId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline InsertInterveneRuleResponseBodyData& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline InsertInterveneRuleResponseBodyData& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
