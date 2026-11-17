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
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(event, event_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEduProblemSolveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(event, event_);
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
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(finished, finished_);
        DARABONBA_PTR_TO_JSON(items, items_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(requestId, requestId_);
        DARABONBA_PTR_TO_JSON(resultType, resultType_);
        DARABONBA_PTR_TO_JSON(retryable, retryable_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(finished, finished_);
        DARABONBA_PTR_FROM_JSON(items, items_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(requestId, requestId_);
        DARABONBA_PTR_FROM_JSON(resultType, resultType_);
        DARABONBA_PTR_FROM_JSON(retryable, retryable_);
        DARABONBA_PTR_FROM_JSON(usage, usage_);
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
        shared_ptr<int32_t> completionTokens_ {};
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
          shared_ptr<string> content_ {};
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
        shared_ptr<string> content_ {};
        shared_ptr<string> imageUrl_ {};
        shared_ptr<string> questionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<Items::Thinking> thinking_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->finished_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultType_ == nullptr
        && this->retryable_ == nullptr && this->usage_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // finished Field Functions 
      bool hasFinished() const { return this->finished_ != nullptr;};
      void deleteFinished() { this->finished_ = nullptr;};
      inline bool getFinished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
      inline Data& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultType Field Functions 
      bool hasResultType() const { return this->resultType_ != nullptr;};
      void deleteResultType() { this->resultType_ = nullptr;};
      inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
      inline Data& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


      // retryable Field Functions 
      bool hasRetryable() const { return this->retryable_ != nullptr;};
      void deleteRetryable() { this->retryable_ = nullptr;};
      inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
      inline Data& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Data::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Data::Usage) };
      inline Data::Usage getUsage() { DARABONBA_PTR_GET(usage_, Data::Usage) };
      inline Data& setUsage(const Data::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Data& setUsage(Data::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<bool> finished_ {};
      shared_ptr<vector<Data::Items>> items_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultType_ {};
      shared_ptr<bool> retryable_ {};
      shared_ptr<Data::Usage> usage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->event_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateEduProblemSolveResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateEduProblemSolveResponseBody::Data) };
    inline CreateEduProblemSolveResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateEduProblemSolveResponseBody::Data) };
    inline CreateEduProblemSolveResponseBody& setData(const CreateEduProblemSolveResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateEduProblemSolveResponseBody& setData(CreateEduProblemSolveResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline CreateEduProblemSolveResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


  protected:
    shared_ptr<CreateEduProblemSolveResponseBody::Data> data_ {};
    shared_ptr<string> event_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenEduAiSuite20261102
#endif
