// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLABELGENERATEDRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLABELGENERATEDRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetLabelGeneratedResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLabelGeneratedResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLabelGeneratedResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLabelGeneratedResultResponseBody() = default ;
    GetLabelGeneratedResultResponseBody(const GetLabelGeneratedResultResponseBody &) = default ;
    GetLabelGeneratedResultResponseBody(GetLabelGeneratedResultResponseBody &&) = default ;
    GetLabelGeneratedResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLabelGeneratedResultResponseBody() = default ;
    GetLabelGeneratedResultResponseBody& operator=(const GetLabelGeneratedResultResponseBody &) = default ;
    GetLabelGeneratedResultResponseBody& operator=(GetLabelGeneratedResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_TO_JSON(LlmCallNum, llmCallNum_);
        DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_TO_JSON(ResultFileUrl, resultFileUrl_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
        DARABONBA_PTR_FROM_JSON(LlmCallNum, llmCallNum_);
        DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
        DARABONBA_PTR_FROM_JSON(ResultFileUrl, resultFileUrl_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
      virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->llmCallNum_ == nullptr && this->outputTokens_ == nullptr && this->resultFileUrl_ == nullptr && this->taskId_ == nullptr; };
      // inputTokens Field Functions 
      bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
      void deleteInputTokens() { this->inputTokens_ = nullptr;};
      inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
      inline Data& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


      // llmCallNum Field Functions 
      bool hasLlmCallNum() const { return this->llmCallNum_ != nullptr;};
      void deleteLlmCallNum() { this->llmCallNum_ = nullptr;};
      inline int32_t getLlmCallNum() const { DARABONBA_PTR_GET_DEFAULT(llmCallNum_, 0) };
      inline Data& setLlmCallNum(int32_t llmCallNum) { DARABONBA_PTR_SET_VALUE(llmCallNum_, llmCallNum) };


      // outputTokens Field Functions 
      bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
      void deleteOutputTokens() { this->outputTokens_ = nullptr;};
      inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
      inline Data& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


      // resultFileUrl Field Functions 
      bool hasResultFileUrl() const { return this->resultFileUrl_ != nullptr;};
      void deleteResultFileUrl() { this->resultFileUrl_ = nullptr;};
      inline string getResultFileUrl() const { DARABONBA_PTR_GET_DEFAULT(resultFileUrl_, "") };
      inline Data& setResultFileUrl(string resultFileUrl) { DARABONBA_PTR_SET_VALUE(resultFileUrl_, resultFileUrl) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The number of input tokens for the LLM.
      shared_ptr<int32_t> inputTokens_ {};
      // The number of LLM calls.
      shared_ptr<int32_t> llmCallNum_ {};
      // The number of output tokens for the LLM.
      shared_ptr<int32_t> outputTokens_ {};
      // The pre-signed download URL of the result file.
      shared_ptr<string> resultFileUrl_ {};
      // The ID of the generation task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLabelGeneratedResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLabelGeneratedResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLabelGeneratedResultResponseBody::Data) };
    inline GetLabelGeneratedResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLabelGeneratedResultResponseBody::Data) };
    inline GetLabelGeneratedResultResponseBody& setData(const GetLabelGeneratedResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLabelGeneratedResultResponseBody& setData(GetLabelGeneratedResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLabelGeneratedResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLabelGeneratedResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLabelGeneratedResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result code. A value of **200** indicates success. Other values indicate failure. You can use this field to determine the cause of failure.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetLabelGeneratedResultResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. true: The call was successful. false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
