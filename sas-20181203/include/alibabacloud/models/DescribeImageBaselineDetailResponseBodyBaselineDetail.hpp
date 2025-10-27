// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILRESPONSEBODYBASELINEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILRESPONSEBODYBASELINEDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineDetailResponseBodyBaselineDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineDetailResponseBodyBaselineDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Advice, advice_);
      DARABONBA_PTR_TO_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_TO_JSON(BaselineItemAlias, baselineItemAlias_);
      DARABONBA_PTR_TO_JSON(BaselineItemKey, baselineItemKey_);
      DARABONBA_PTR_TO_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ResultId, resultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineDetailResponseBodyBaselineDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Advice, advice_);
      DARABONBA_PTR_FROM_JSON(BaselineClassAlias, baselineClassAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineItemAlias, baselineItemAlias_);
      DARABONBA_PTR_FROM_JSON(BaselineItemKey, baselineItemKey_);
      DARABONBA_PTR_FROM_JSON(BaselineNameAlias, baselineNameAlias_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
    };
    DescribeImageBaselineDetailResponseBodyBaselineDetail() = default ;
    DescribeImageBaselineDetailResponseBodyBaselineDetail(const DescribeImageBaselineDetailResponseBodyBaselineDetail &) = default ;
    DescribeImageBaselineDetailResponseBodyBaselineDetail(DescribeImageBaselineDetailResponseBodyBaselineDetail &&) = default ;
    DescribeImageBaselineDetailResponseBodyBaselineDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineDetailResponseBodyBaselineDetail() = default ;
    DescribeImageBaselineDetailResponseBodyBaselineDetail& operator=(const DescribeImageBaselineDetailResponseBodyBaselineDetail &) = default ;
    DescribeImageBaselineDetailResponseBodyBaselineDetail& operator=(DescribeImageBaselineDetailResponseBodyBaselineDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advice_ == nullptr
        && return this->baselineClassAlias_ == nullptr && return this->baselineItemAlias_ == nullptr && return this->baselineItemKey_ == nullptr && return this->baselineNameAlias_ == nullptr && return this->description_ == nullptr
        && return this->level_ == nullptr && return this->prompt_ == nullptr && return this->resultId_ == nullptr; };
    // advice Field Functions 
    bool hasAdvice() const { return this->advice_ != nullptr;};
    void deleteAdvice() { this->advice_ = nullptr;};
    inline string advice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


    // baselineClassAlias Field Functions 
    bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
    void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
    inline string baselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


    // baselineItemAlias Field Functions 
    bool hasBaselineItemAlias() const { return this->baselineItemAlias_ != nullptr;};
    void deleteBaselineItemAlias() { this->baselineItemAlias_ = nullptr;};
    inline string baselineItemAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineItemAlias_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setBaselineItemAlias(string baselineItemAlias) { DARABONBA_PTR_SET_VALUE(baselineItemAlias_, baselineItemAlias) };


    // baselineItemKey Field Functions 
    bool hasBaselineItemKey() const { return this->baselineItemKey_ != nullptr;};
    void deleteBaselineItemKey() { this->baselineItemKey_ = nullptr;};
    inline string baselineItemKey() const { DARABONBA_PTR_GET_DEFAULT(baselineItemKey_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setBaselineItemKey(string baselineItemKey) { DARABONBA_PTR_SET_VALUE(baselineItemKey_, baselineItemKey) };


    // baselineNameAlias Field Functions 
    bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
    void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
    inline string baselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // resultId Field Functions 
    bool hasResultId() const { return this->resultId_ != nullptr;};
    void deleteResultId() { this->resultId_ = nullptr;};
    inline string resultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
    inline DescribeImageBaselineDetailResponseBodyBaselineDetail& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


  protected:
    // The suggestion for the management of the risk item.
    std::shared_ptr<string> advice_ = nullptr;
    // The alias of the baseline type.
    std::shared_ptr<string> baselineClassAlias_ = nullptr;
    // The alias of the baseline check item.
    std::shared_ptr<string> baselineItemAlias_ = nullptr;
    // The key of the baseline check item.
    std::shared_ptr<string> baselineItemKey_ = nullptr;
    // The alias of the baseline.
    std::shared_ptr<string> baselineNameAlias_ = nullptr;
    // The description of the risk item.
    std::shared_ptr<string> description_ = nullptr;
    // The risk level of the baseline check item. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> level_ = nullptr;
    // The issue that is detected by using the baseline.
    std::shared_ptr<string> prompt_ = nullptr;
    // The ID of the asynchronous request.
    std::shared_ptr<string> resultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
