// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATIONCONFIGCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_EVALUATIONCONFIGCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiLLMTrace20240311
{
namespace Models
{
  class EvaluationConfigContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluationConfigContext& obj) { 
      DARABONBA_PTR_TO_JSON(JsonPathInSpan, jsonPathInSpan_);
      DARABONBA_PTR_TO_JSON(JsonPathInSpanValue, jsonPathInSpanValue_);
      DARABONBA_PTR_TO_JSON(SpanName, spanName_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluationConfigContext& obj) { 
      DARABONBA_PTR_FROM_JSON(JsonPathInSpan, jsonPathInSpan_);
      DARABONBA_PTR_FROM_JSON(JsonPathInSpanValue, jsonPathInSpanValue_);
      DARABONBA_PTR_FROM_JSON(SpanName, spanName_);
    };
    EvaluationConfigContext() = default ;
    EvaluationConfigContext(const EvaluationConfigContext &) = default ;
    EvaluationConfigContext(EvaluationConfigContext &&) = default ;
    EvaluationConfigContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluationConfigContext() = default ;
    EvaluationConfigContext& operator=(const EvaluationConfigContext &) = default ;
    EvaluationConfigContext& operator=(EvaluationConfigContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jsonPathInSpan_ != nullptr
        && this->jsonPathInSpanValue_ != nullptr && this->spanName_ != nullptr; };
    // jsonPathInSpan Field Functions 
    bool hasJsonPathInSpan() const { return this->jsonPathInSpan_ != nullptr;};
    void deleteJsonPathInSpan() { this->jsonPathInSpan_ = nullptr;};
    inline string jsonPathInSpan() const { DARABONBA_PTR_GET_DEFAULT(jsonPathInSpan_, "") };
    inline EvaluationConfigContext& setJsonPathInSpan(string jsonPathInSpan) { DARABONBA_PTR_SET_VALUE(jsonPathInSpan_, jsonPathInSpan) };


    // jsonPathInSpanValue Field Functions 
    bool hasJsonPathInSpanValue() const { return this->jsonPathInSpanValue_ != nullptr;};
    void deleteJsonPathInSpanValue() { this->jsonPathInSpanValue_ = nullptr;};
    inline string jsonPathInSpanValue() const { DARABONBA_PTR_GET_DEFAULT(jsonPathInSpanValue_, "") };
    inline EvaluationConfigContext& setJsonPathInSpanValue(string jsonPathInSpanValue) { DARABONBA_PTR_SET_VALUE(jsonPathInSpanValue_, jsonPathInSpanValue) };


    // spanName Field Functions 
    bool hasSpanName() const { return this->spanName_ != nullptr;};
    void deleteSpanName() { this->spanName_ = nullptr;};
    inline string spanName() const { DARABONBA_PTR_GET_DEFAULT(spanName_, "") };
    inline EvaluationConfigContext& setSpanName(string spanName) { DARABONBA_PTR_SET_VALUE(spanName_, spanName) };


  protected:
    std::shared_ptr<string> jsonPathInSpan_ = nullptr;
    std::shared_ptr<string> jsonPathInSpanValue_ = nullptr;
    std::shared_ptr<string> spanName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiLLMTrace20240311
#endif
