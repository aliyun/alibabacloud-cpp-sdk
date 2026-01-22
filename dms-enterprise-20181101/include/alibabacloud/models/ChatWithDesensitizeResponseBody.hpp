// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ChatWithDesensitizeResponseBody() = default ;
    ChatWithDesensitizeResponseBody(const ChatWithDesensitizeResponseBody &) = default ;
    ChatWithDesensitizeResponseBody(ChatWithDesensitizeResponseBody &&) = default ;
    ChatWithDesensitizeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeResponseBody() = default ;
    ChatWithDesensitizeResponseBody& operator=(const ChatWithDesensitizeResponseBody &) = default ;
    ChatWithDesensitizeResponseBody& operator=(ChatWithDesensitizeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Choices, choices_);
        DARABONBA_PTR_TO_JSON(Created, created_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Choices, choices_);
        DARABONBA_PTR_FROM_JSON(Created, created_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(CompletionTokens, completionTokens_);
          DARABONBA_PTR_TO_JSON(CompletionTokensDetails, completionTokensDetails_);
          DARABONBA_PTR_TO_JSON(PromptTokens, promptTokens_);
          DARABONBA_PTR_TO_JSON(PromptTokensDetails, promptTokensDetails_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(CompletionTokens, completionTokens_);
          DARABONBA_PTR_FROM_JSON(CompletionTokensDetails, completionTokensDetails_);
          DARABONBA_PTR_FROM_JSON(PromptTokens, promptTokens_);
          DARABONBA_PTR_FROM_JSON(PromptTokensDetails, promptTokensDetails_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
        };
        Usage() = default ;
        Usage(const Usage &) = default ;
        Usage(Usage &&) = default ;
        Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Usage() = default ;
        Usage& operator=(const Usage &) = default ;
        Usage& operator=(Usage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completionTokens_ == nullptr
        && this->completionTokensDetails_ == nullptr && this->promptTokens_ == nullptr && this->promptTokensDetails_ == nullptr && this->totalTokens_ == nullptr; };
        // completionTokens Field Functions 
        bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
        void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
        inline string getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, "") };
        inline Usage& setCompletionTokens(string completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


        // completionTokensDetails Field Functions 
        bool hasCompletionTokensDetails() const { return this->completionTokensDetails_ != nullptr;};
        void deleteCompletionTokensDetails() { this->completionTokensDetails_ = nullptr;};
        inline const map<string, string> & getCompletionTokensDetails() const { DARABONBA_PTR_GET_CONST(completionTokensDetails_, map<string, string>) };
        inline map<string, string> getCompletionTokensDetails() { DARABONBA_PTR_GET(completionTokensDetails_, map<string, string>) };
        inline Usage& setCompletionTokensDetails(const map<string, string> & completionTokensDetails) { DARABONBA_PTR_SET_VALUE(completionTokensDetails_, completionTokensDetails) };
        inline Usage& setCompletionTokensDetails(map<string, string> && completionTokensDetails) { DARABONBA_PTR_SET_RVALUE(completionTokensDetails_, completionTokensDetails) };


        // promptTokens Field Functions 
        bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
        void deletePromptTokens() { this->promptTokens_ = nullptr;};
        inline string getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, "") };
        inline Usage& setPromptTokens(string promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


        // promptTokensDetails Field Functions 
        bool hasPromptTokensDetails() const { return this->promptTokensDetails_ != nullptr;};
        void deletePromptTokensDetails() { this->promptTokensDetails_ = nullptr;};
        inline const map<string, string> & getPromptTokensDetails() const { DARABONBA_PTR_GET_CONST(promptTokensDetails_, map<string, string>) };
        inline map<string, string> getPromptTokensDetails() { DARABONBA_PTR_GET(promptTokensDetails_, map<string, string>) };
        inline Usage& setPromptTokensDetails(const map<string, string> & promptTokensDetails) { DARABONBA_PTR_SET_VALUE(promptTokensDetails_, promptTokensDetails) };
        inline Usage& setPromptTokensDetails(map<string, string> && promptTokensDetails) { DARABONBA_PTR_SET_RVALUE(promptTokensDetails_, promptTokensDetails) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline string getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, "") };
        inline Usage& setTotalTokens(string totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        // The number of output tokens.
        shared_ptr<string> completionTokens_ {};
        // Fine-grained classification of output tokens when using the Qwen-VL model.
        shared_ptr<map<string, string>> completionTokensDetails_ {};
        // The number of input tokens.
        shared_ptr<string> promptTokens_ {};
        // Fine-grained classification of input tokens.
        shared_ptr<map<string, string>> promptTokensDetails_ {};
        // The total number of tokens consumed.
        shared_ptr<string> totalTokens_ {};
      };

      class Choices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Choices& obj) { 
          DARABONBA_PTR_TO_JSON(FinishReason, finishReason_);
          DARABONBA_ANY_TO_JSON(Logprobs, logprobs_);
          DARABONBA_PTR_TO_JSON(Message, message_);
        };
        friend void from_json(const Darabonba::Json& j, Choices& obj) { 
          DARABONBA_PTR_FROM_JSON(FinishReason, finishReason_);
          DARABONBA_ANY_FROM_JSON(Logprobs, logprobs_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
        };
        Choices() = default ;
        Choices(const Choices &) = default ;
        Choices(Choices &&) = default ;
        Choices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Choices() = default ;
        Choices& operator=(const Choices &) = default ;
        Choices& operator=(Choices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Message : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Message& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(ReasoningContent, reasoningContent_);
            DARABONBA_PTR_TO_JSON(Role, role_);
          };
          friend void from_json(const Darabonba::Json& j, Message& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(ReasoningContent, reasoningContent_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
          };
          Message() = default ;
          Message(const Message &) = default ;
          Message(Message &&) = default ;
          Message(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Message() = default ;
          Message& operator=(const Message &) = default ;
          Message& operator=(Message &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->reasoningContent_ == nullptr && this->role_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Message& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // reasoningContent Field Functions 
          bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
          void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
          inline string getReasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
          inline Message& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline Message& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        protected:
          // The content of the model\\"s response.
          shared_ptr<string> content_ {};
          // The internal reasoning content of the model.
          shared_ptr<string> reasoningContent_ {};
          // Message role.
          shared_ptr<string> role_ {};
        };

        virtual bool empty() const override { return this->finishReason_ == nullptr
        && this->logprobs_ == nullptr && this->message_ == nullptr; };
        // finishReason Field Functions 
        bool hasFinishReason() const { return this->finishReason_ != nullptr;};
        void deleteFinishReason() { this->finishReason_ = nullptr;};
        inline string getFinishReason() const { DARABONBA_PTR_GET_DEFAULT(finishReason_, "") };
        inline Choices& setFinishReason(string finishReason) { DARABONBA_PTR_SET_VALUE(finishReason_, finishReason) };


        // logprobs Field Functions 
        bool hasLogprobs() const { return this->logprobs_ != nullptr;};
        void deleteLogprobs() { this->logprobs_ = nullptr;};
        inline         const Darabonba::Json & getLogprobs() const { DARABONBA_GET(logprobs_) };
        Darabonba::Json & getLogprobs() { DARABONBA_GET(logprobs_) };
        inline Choices& setLogprobs(const Darabonba::Json & logprobs) { DARABONBA_SET_VALUE(logprobs_, logprobs) };
        inline Choices& setLogprobs(Darabonba::Json && logprobs) { DARABONBA_SET_RVALUE(logprobs_, logprobs) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline const Choices::Message & getMessage() const { DARABONBA_PTR_GET_CONST(message_, Choices::Message) };
        inline Choices::Message getMessage() { DARABONBA_PTR_GET(message_, Choices::Message) };
        inline Choices& setMessage(const Choices::Message & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
        inline Choices& setMessage(Choices::Message && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


      protected:
        // Finish reason: ● stop: The model reached a natural stop point or a specified stop sequence. ● length: Generation ended because the maximum number of tokens was reached. ● tool_calls: The model stopped because it needs to call a tool to proceed.
        shared_ptr<string> finishReason_ {};
        // Token probability information of model output.
        Darabonba::Json logprobs_ {};
        // The message body output by the model.
        shared_ptr<Choices::Message> message_ {};
      };

      virtual bool empty() const override { return this->choices_ == nullptr
        && this->created_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->statusCode_ == nullptr && this->type_ == nullptr
        && this->usage_ == nullptr; };
      // choices Field Functions 
      bool hasChoices() const { return this->choices_ != nullptr;};
      void deleteChoices() { this->choices_ = nullptr;};
      inline const vector<Data::Choices> & getChoices() const { DARABONBA_PTR_GET_CONST(choices_, vector<Data::Choices>) };
      inline vector<Data::Choices> getChoices() { DARABONBA_PTR_GET(choices_, vector<Data::Choices>) };
      inline Data& setChoices(const vector<Data::Choices> & choices) { DARABONBA_PTR_SET_VALUE(choices_, choices) };
      inline Data& setChoices(vector<Data::Choices> && choices) { DARABONBA_PTR_SET_RVALUE(choices_, choices) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Data& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Data& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline Data& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      // The candidate array for model-generated content.
      shared_ptr<vector<Data::Choices>> choices_ {};
      // The Unix timestamp (in seconds) when the request was created.
      shared_ptr<string> created_ {};
      // Error message, provided when StatusCode is not 200.
      shared_ptr<string> message_ {};
      // The model used for this request.
      shared_ptr<string> model_ {};
      // Error code, 200 for normal calls, others for exceptions.
      shared_ptr<string> statusCode_ {};
      // Error type.
      shared_ptr<string> type_ {};
      // The token consumption information of this request.
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ChatWithDesensitizeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ChatWithDesensitizeResponseBody::Data) };
    inline ChatWithDesensitizeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ChatWithDesensitizeResponseBody::Data) };
    inline ChatWithDesensitizeResponseBody& setData(const ChatWithDesensitizeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ChatWithDesensitizeResponseBody& setData(ChatWithDesensitizeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ChatWithDesensitizeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ChatWithDesensitizeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatWithDesensitizeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ChatWithDesensitizeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ChatWithDesensitizeResponseBody::Data> data_ {};
    // Error code.
    shared_ptr<string> errorCode_ {};
    // Error message.
    shared_ptr<string> errorMessage_ {};
    // ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
