// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMPLETIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMPLETIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class RunCompletionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCompletionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, RunCompletionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
    };
    RunCompletionResponseBody() = default ;
    RunCompletionResponseBody(const RunCompletionResponseBody &) = default ;
    RunCompletionResponseBody(RunCompletionResponseBody &&) = default ;
    RunCompletionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCompletionResponseBody() = default ;
    RunCompletionResponseBody& operator=(const RunCompletionResponseBody &) = default ;
    RunCompletionResponseBody& operator=(RunCompletionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishReason_ != nullptr
        && this->requestId_ != nullptr && this->text_ != nullptr && this->inputTokens_ != nullptr && this->outputTokens_ != nullptr && this->totalTokens_ != nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline RunCompletionResponseBody& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCompletionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline RunCompletionResponseBody& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline string inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, "") };
    inline RunCompletionResponseBody& setInputTokens(string inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline string outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, "") };
    inline RunCompletionResponseBody& setOutputTokens(string outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline string totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, "") };
    inline RunCompletionResponseBody& setTotalTokens(string totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<string> finishReason_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> inputTokens_ = nullptr;
    std::shared_ptr<string> outputTokens_ = nullptr;
    std::shared_ptr<string> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
