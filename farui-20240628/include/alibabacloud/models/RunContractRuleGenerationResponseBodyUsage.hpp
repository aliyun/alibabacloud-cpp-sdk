// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODYUSAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODYUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationResponseBodyUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationResponseBodyUsage& obj) { 
      DARABONBA_PTR_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationResponseBodyUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    RunContractRuleGenerationResponseBodyUsage() = default ;
    RunContractRuleGenerationResponseBodyUsage(const RunContractRuleGenerationResponseBodyUsage &) = default ;
    RunContractRuleGenerationResponseBodyUsage(RunContractRuleGenerationResponseBodyUsage &&) = default ;
    RunContractRuleGenerationResponseBodyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationResponseBodyUsage() = default ;
    RunContractRuleGenerationResponseBodyUsage& operator=(const RunContractRuleGenerationResponseBodyUsage &) = default ;
    RunContractRuleGenerationResponseBodyUsage& operator=(RunContractRuleGenerationResponseBodyUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && return this->unit_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline int64_t input() const { DARABONBA_PTR_GET_DEFAULT(input_, 0L) };
    inline RunContractRuleGenerationResponseBodyUsage& setInput(int64_t input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline RunContractRuleGenerationResponseBodyUsage& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    std::shared_ptr<int64_t> input_ = nullptr;
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
