// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALANALYZEIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERALANALYZEIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ContactCenterAI20240603
{
namespace Models
{
  class GeneralAnalyzeImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralAnalyzeImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(finishReason, finishReason_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralAnalyzeImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(finishReason, finishReason_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
    };
    GeneralAnalyzeImageResponseBody() = default ;
    GeneralAnalyzeImageResponseBody(const GeneralAnalyzeImageResponseBody &) = default ;
    GeneralAnalyzeImageResponseBody(GeneralAnalyzeImageResponseBody &&) = default ;
    GeneralAnalyzeImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralAnalyzeImageResponseBody() = default ;
    GeneralAnalyzeImageResponseBody& operator=(const GeneralAnalyzeImageResponseBody &) = default ;
    GeneralAnalyzeImageResponseBody& operator=(GeneralAnalyzeImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->finishReason_ != nullptr
        && this->inputTokens_ != nullptr && this->outputTokens_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->text_ != nullptr
        && this->totalTokens_ != nullptr; };
    // finishReason Field Functions 
    bool hasFinishReason() const { return this->finishReason_ != nullptr;};
    void deleteFinishReason() { this->finishReason_ = nullptr;};
    inline string finishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
    inline GeneralAnalyzeImageResponseBody& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline GeneralAnalyzeImageResponseBody& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline GeneralAnalyzeImageResponseBody& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GeneralAnalyzeImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GeneralAnalyzeImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GeneralAnalyzeImageResponseBody& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline GeneralAnalyzeImageResponseBody& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<string> finishReason_ = nullptr;
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<int32_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ContactCenterAI20240603
#endif
