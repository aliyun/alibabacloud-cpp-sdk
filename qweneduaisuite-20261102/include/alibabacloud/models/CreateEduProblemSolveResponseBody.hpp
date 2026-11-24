// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDUPROBLEMSOLVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDUPROBLEMSOLVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenEduAiSuite20261102
{
namespace Models
{
  class CreateEduProblemSolveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEduProblemSolveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultType, resultType_);
      DARABONBA_PTR_TO_JSON(retryable, retryable_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEduProblemSolveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultType, resultType_);
      DARABONBA_PTR_FROM_JSON(retryable, retryable_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    CreateEduProblemSolveResponseBody() = default ;
    CreateEduProblemSolveResponseBody(const CreateEduProblemSolveResponseBody &) = default ;
    CreateEduProblemSolveResponseBody(CreateEduProblemSolveResponseBody &&) = default ;
    CreateEduProblemSolveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEduProblemSolveResponseBody() = default ;
    CreateEduProblemSolveResponseBody& operator=(const CreateEduProblemSolveResponseBody &) = default ;
    CreateEduProblemSolveResponseBody& operator=(CreateEduProblemSolveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Usage : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Usage& obj) { 
        DARABONBA_PTR_TO_JSON(completionTokens, completionTokens_);
        DARABONBA_PTR_TO_JSON(promptTokens, promptTokens_);
      };
      friend void from_json(const Darabonba::Json& j, Usage& obj) { 
        DARABONBA_PTR_FROM_JSON(completionTokens, completionTokens_);
        DARABONBA_PTR_FROM_JSON(promptTokens, promptTokens_);
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
        && this->promptTokens_ == nullptr; };
      // completionTokens Field Functions 
      bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
      void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
      inline int32_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0) };
      inline Usage& setCompletionTokens(int32_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


      // promptTokens Field Functions 
      bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
      void deletePromptTokens() { this->promptTokens_ = nullptr;};
      inline int32_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0) };
      inline Usage& setPromptTokens(int32_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    protected:
      // The number of output tokens.
      shared_ptr<int32_t> completionTokens_ {};
      // The number of input tokens.
      shared_ptr<int32_t> promptTokens_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(imageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(questionId, questionId_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(thinking, thinking_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(imageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(questionId, questionId_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(thinking, thinking_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Thinking : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Thinking& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Thinking& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Thinking() = default ;
        Thinking(const Thinking &) = default ;
        Thinking(Thinking &&) = default ;
        Thinking(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Thinking() = default ;
        Thinking& operator=(const Thinking &) = default ;
        Thinking& operator=(Thinking &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->status_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Thinking& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Thinking& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The current thinking content.
        shared_ptr<string> content_ {};
        // The thinking status. Valid values:
        // - processing: The thinking process is in progress.
        // - complete: The thinking process is complete.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->imageUrl_ == nullptr && this->questionId_ == nullptr && this->status_ == nullptr && this->thinking_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Items& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Items& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // questionId Field Functions 
      bool hasQuestionId() const { return this->questionId_ != nullptr;};
      void deleteQuestionId() { this->questionId_ = nullptr;};
      inline string getQuestionId() const { DARABONBA_PTR_GET_DEFAULT(questionId_, "") };
      inline Items& setQuestionId(string questionId) { DARABONBA_PTR_SET_VALUE(questionId_, questionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thinking Field Functions 
      bool hasThinking() const { return this->thinking_ != nullptr;};
      void deleteThinking() { this->thinking_ = nullptr;};
      inline const Items::Thinking & getThinking() const { DARABONBA_PTR_GET_CONST(thinking_, Items::Thinking) };
      inline Items::Thinking getThinking() { DARABONBA_PTR_GET(thinking_, Items::Thinking) };
      inline Items& setThinking(const Items::Thinking & thinking) { DARABONBA_PTR_SET_VALUE(thinking_, thinking) };
      inline Items& setThinking(Items::Thinking && thinking) { DARABONBA_PTR_SET_RVALUE(thinking_, thinking) };


    protected:
      // The complete question resolution content in Markdown format, including the deduction process and the final result.
      shared_ptr<string> content_ {};
      // The URL of the unique image for the current question. The URL may be time-sensitive. If the question is not associated with an image resource and no request URL is available for fallback, an empty string is returned.
      shared_ptr<string> imageUrl_ {};
      // The question identifier. The value is the question title, such as Question 1. The server does not return a separate title field. If the downstream service does not provide a question title, which is always the case in single-question scenarios, titles such as Question 1 and Question 2 are generated in the order of the questions.
      shared_ptr<string> questionId_ {};
      // The current question status. Valid values:
      // - processing: The question is being processed.
      // - complete: The question processing is complete.
      shared_ptr<string> status_ {};
      // The thinking process. This field is returned only when result_type is single. It is not returned for multiple questions.
      shared_ptr<Items::Thinking> thinking_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->finished_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultType_ == nullptr
        && this->retryable_ == nullptr && this->usage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateEduProblemSolveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline CreateEduProblemSolveResponseBody& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<CreateEduProblemSolveResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<CreateEduProblemSolveResponseBody::Items>) };
    inline vector<CreateEduProblemSolveResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<CreateEduProblemSolveResponseBody::Items>) };
    inline CreateEduProblemSolveResponseBody& setItems(const vector<CreateEduProblemSolveResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CreateEduProblemSolveResponseBody& setItems(vector<CreateEduProblemSolveResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateEduProblemSolveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEduProblemSolveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline CreateEduProblemSolveResponseBody& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // retryable Field Functions 
    bool hasRetryable() const { return this->retryable_ != nullptr;};
    void deleteRetryable() { this->retryable_ = nullptr;};
    inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
    inline CreateEduProblemSolveResponseBody& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const CreateEduProblemSolveResponseBody::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, CreateEduProblemSolveResponseBody::Usage) };
    inline CreateEduProblemSolveResponseBody::Usage getUsage() { DARABONBA_PTR_GET(usage_, CreateEduProblemSolveResponseBody::Usage) };
    inline CreateEduProblemSolveResponseBody& setUsage(const CreateEduProblemSolveResponseBody::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline CreateEduProblemSolveResponseBody& setUsage(CreateEduProblemSolveResponseBody::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    // The API data identifier.
    shared_ptr<string> code_ {};
    // Specifies whether the response is the final full snapshot. This value is fixed to true in the complete event.
    shared_ptr<bool> finished_ {};
    // The current list of complete question results.
    shared_ptr<vector<CreateEduProblemSolveResponseBody::Items>> items_ {};
    // The actual message returned by the request.
    shared_ptr<string> message_ {};
    // Echo request ID echoed from echo request.
    shared_ptr<string> requestId_ {};
    // The type of the question resolution result. Valid values:
    // - single: A single question.
    // - multiple: Multiple questions.
    shared_ptr<string> resultType_ {};
    // Specifies whether the error is retryable. Default value: true.
    shared_ptr<bool> retryable_ {};
    // The token usage. Only the complete event carries the final value. This field is not returned in message events.
    shared_ptr<CreateEduProblemSolveResponseBody::Usage> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
