// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineDetail, baselineDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineDetail, baselineDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageBaselineDetailResponseBody() = default ;
    DescribeImageBaselineDetailResponseBody(const DescribeImageBaselineDetailResponseBody &) = default ;
    DescribeImageBaselineDetailResponseBody(DescribeImageBaselineDetailResponseBody &&) = default ;
    DescribeImageBaselineDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineDetailResponseBody() = default ;
    DescribeImageBaselineDetailResponseBody& operator=(const DescribeImageBaselineDetailResponseBody &) = default ;
    DescribeImageBaselineDetailResponseBody& operator=(DescribeImageBaselineDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaselineDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineDetail& obj) { 
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
      friend void from_json(const Darabonba::Json& j, BaselineDetail& obj) { 
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
      BaselineDetail() = default ;
      BaselineDetail(const BaselineDetail &) = default ;
      BaselineDetail(BaselineDetail &&) = default ;
      BaselineDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineDetail() = default ;
      BaselineDetail& operator=(const BaselineDetail &) = default ;
      BaselineDetail& operator=(BaselineDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advice_ == nullptr
        && this->baselineClassAlias_ == nullptr && this->baselineItemAlias_ == nullptr && this->baselineItemKey_ == nullptr && this->baselineNameAlias_ == nullptr && this->description_ == nullptr
        && this->level_ == nullptr && this->prompt_ == nullptr && this->resultId_ == nullptr; };
      // advice Field Functions 
      bool hasAdvice() const { return this->advice_ != nullptr;};
      void deleteAdvice() { this->advice_ = nullptr;};
      inline string getAdvice() const { DARABONBA_PTR_GET_DEFAULT(advice_, "") };
      inline BaselineDetail& setAdvice(string advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };


      // baselineClassAlias Field Functions 
      bool hasBaselineClassAlias() const { return this->baselineClassAlias_ != nullptr;};
      void deleteBaselineClassAlias() { this->baselineClassAlias_ = nullptr;};
      inline string getBaselineClassAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineClassAlias_, "") };
      inline BaselineDetail& setBaselineClassAlias(string baselineClassAlias) { DARABONBA_PTR_SET_VALUE(baselineClassAlias_, baselineClassAlias) };


      // baselineItemAlias Field Functions 
      bool hasBaselineItemAlias() const { return this->baselineItemAlias_ != nullptr;};
      void deleteBaselineItemAlias() { this->baselineItemAlias_ = nullptr;};
      inline string getBaselineItemAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineItemAlias_, "") };
      inline BaselineDetail& setBaselineItemAlias(string baselineItemAlias) { DARABONBA_PTR_SET_VALUE(baselineItemAlias_, baselineItemAlias) };


      // baselineItemKey Field Functions 
      bool hasBaselineItemKey() const { return this->baselineItemKey_ != nullptr;};
      void deleteBaselineItemKey() { this->baselineItemKey_ = nullptr;};
      inline string getBaselineItemKey() const { DARABONBA_PTR_GET_DEFAULT(baselineItemKey_, "") };
      inline BaselineDetail& setBaselineItemKey(string baselineItemKey) { DARABONBA_PTR_SET_VALUE(baselineItemKey_, baselineItemKey) };


      // baselineNameAlias Field Functions 
      bool hasBaselineNameAlias() const { return this->baselineNameAlias_ != nullptr;};
      void deleteBaselineNameAlias() { this->baselineNameAlias_ = nullptr;};
      inline string getBaselineNameAlias() const { DARABONBA_PTR_GET_DEFAULT(baselineNameAlias_, "") };
      inline BaselineDetail& setBaselineNameAlias(string baselineNameAlias) { DARABONBA_PTR_SET_VALUE(baselineNameAlias_, baselineNameAlias) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BaselineDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline BaselineDetail& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline BaselineDetail& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline BaselineDetail& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


    protected:
      // The suggestion for the management of the risk item.
      shared_ptr<string> advice_ {};
      // The alias of the baseline type.
      shared_ptr<string> baselineClassAlias_ {};
      // The alias of the baseline check item.
      shared_ptr<string> baselineItemAlias_ {};
      // The key of the baseline check item.
      shared_ptr<string> baselineItemKey_ {};
      // The alias of the baseline.
      shared_ptr<string> baselineNameAlias_ {};
      // The description of the risk item.
      shared_ptr<string> description_ {};
      // The risk level of the baseline check item. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> level_ {};
      // The issue that is detected by using the baseline.
      shared_ptr<string> prompt_ {};
      // The ID of the asynchronous request.
      shared_ptr<string> resultId_ {};
    };

    virtual bool empty() const override { return this->baselineDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // baselineDetail Field Functions 
    bool hasBaselineDetail() const { return this->baselineDetail_ != nullptr;};
    void deleteBaselineDetail() { this->baselineDetail_ = nullptr;};
    inline const DescribeImageBaselineDetailResponseBody::BaselineDetail & getBaselineDetail() const { DARABONBA_PTR_GET_CONST(baselineDetail_, DescribeImageBaselineDetailResponseBody::BaselineDetail) };
    inline DescribeImageBaselineDetailResponseBody::BaselineDetail getBaselineDetail() { DARABONBA_PTR_GET(baselineDetail_, DescribeImageBaselineDetailResponseBody::BaselineDetail) };
    inline DescribeImageBaselineDetailResponseBody& setBaselineDetail(const DescribeImageBaselineDetailResponseBody::BaselineDetail & baselineDetail) { DARABONBA_PTR_SET_VALUE(baselineDetail_, baselineDetail) };
    inline DescribeImageBaselineDetailResponseBody& setBaselineDetail(DescribeImageBaselineDetailResponseBody::BaselineDetail && baselineDetail) { DARABONBA_PTR_SET_RVALUE(baselineDetail_, baselineDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageBaselineDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the image baseline.
    shared_ptr<DescribeImageBaselineDetailResponseBody::BaselineDetail> baselineDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
