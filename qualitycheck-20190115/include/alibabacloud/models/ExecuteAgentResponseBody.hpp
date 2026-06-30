// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ExecuteAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecuteAgentResponseBody() = default ;
    ExecuteAgentResponseBody(const ExecuteAgentResponseBody &) = default ;
    ExecuteAgentResponseBody(ExecuteAgentResponseBody &&) = default ;
    ExecuteAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAgentResponseBody() = default ;
    ExecuteAgentResponseBody& operator=(const ExecuteAgentResponseBody &) = default ;
    ExecuteAgentResponseBody& operator=(ExecuteAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(LlmRequestId, llmRequestId_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(Text, text_);
        DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_TO_JSON(TyxmPlusCount, tyxmPlusCount_);
        DARABONBA_PTR_TO_JSON(TyxmTurboCount, tyxmTurboCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(LlmRequestId, llmRequestId_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(Text, text_);
        DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        DARABONBA_PTR_FROM_JSON(TyxmPlusCount, tyxmPlusCount_);
        DARABONBA_PTR_FROM_JSON(TyxmTurboCount, tyxmTurboCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->finishReason_ == nullptr
        && this->inputTokens_ == nullptr && this->llmRequestId_ == nullptr && this->outputTokens_ == nullptr && this->text_ == nullptr && this->totalTokens_ == nullptr
        && this->tyxmPlusCount_ == nullptr && this->tyxmTurboCount_ == nullptr; };
      // finishReason Field Functions 
      bool hasFinishReason() const { return this->finishReason_ != nullptr;};
      void deleteFinishReason() { this->finishReason_ = nullptr;};
      inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
      inline Data& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
      inline Data& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // llmRequestId Field Functions 
      bool hasLlmRequestId() const { return this->llmRequestId_ != nullptr;};
      void deleteLlmRequestId() { this->llmRequestId_ = nullptr;};
      inline string getLlmRequestId() const { DARABONBA_PTR_GET_DEFAULT(llmRequestId_, "") };
      inline Data& setLlmRequestId(string llmRequestId) { DARABONBA_PTR_SET_VALUE(llmRequestId_, llmRequestId) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
      inline Data& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Data& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      // totalTokens Field Functions 
      bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
      void deleteTotalTokens() { this->totalTokens_ = nullptr;};
      inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
      inline Data& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      // tyxmPlusCount Field Functions 
      bool hasTyxmPlusCount() const { return this->tyxmPlusCount_ != nullptr;};
      void deleteTyxmPlusCount() { this->tyxmPlusCount_ = nullptr;};
      inline string getTyxmPlusCount() const { DARABONBA_PTR_GET_DEFAULT(tyxmPlusCount_, "") };
      inline Data& setTyxmPlusCount(string tyxmPlusCount) { DARABONBA_PTR_SET_VALUE(tyxmPlusCount_, tyxmPlusCount) };


      // tyxmTurboCount Field Functions 
      bool hasTyxmTurboCount() const { return this->tyxmTurboCount_ != nullptr;};
      void deleteTyxmTurboCount() { this->tyxmTurboCount_ = nullptr;};
      inline string getTyxmTurboCount() const { DARABONBA_PTR_GET_DEFAULT(tyxmTurboCount_, "") };
      inline Data& setTyxmTurboCount(string tyxmTurboCount) { DARABONBA_PTR_SET_VALUE(tyxmTurboCount_, tyxmTurboCount) };


    protected:
      // If streaming output is used, this value is null during generation. When generation is complete, the value is stop if the generation ended due to a stop token.
      shared_ptr<string> finishReason_ {};
      // The number of input tokens.
      shared_ptr<int64_t> inputTokens_ {};
      // The request ID returned by the large language model service.
      shared_ptr<string> llmRequestId_ {};
      // The number of output tokens.
      shared_ptr<int64_t> outputTokens_ {};
      // The result returned by the large language model.
      shared_ptr<string> text_ {};
      // The total number of tokens.
      shared_ptr<int64_t> totalTokens_ {};
      // The number of times the plus model was used.
      shared_ptr<string> tyxmPlusCount_ {};
      // The number of times the turbo model was used.
      shared_ptr<string> tyxmTurboCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExecuteAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecuteAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecuteAgentResponseBody::Data) };
    inline ExecuteAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecuteAgentResponseBody::Data) };
    inline ExecuteAgentResponseBody& setData(const ExecuteAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecuteAgentResponseBody& setData(ExecuteAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<ExecuteAgentResponseBody::Data> data_ {};
    // The error message returned when an error occurs.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. The caller can use this field to determine whether the request was successful. Valid values: **true**: The request was successful. **false/null**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
