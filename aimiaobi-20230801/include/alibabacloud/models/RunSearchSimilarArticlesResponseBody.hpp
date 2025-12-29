// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunSearchSimilarArticlesResponseBody() = default ;
    RunSearchSimilarArticlesResponseBody(const RunSearchSimilarArticlesResponseBody &) = default ;
    RunSearchSimilarArticlesResponseBody(RunSearchSimilarArticlesResponseBody &&) = default ;
    RunSearchSimilarArticlesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesResponseBody() = default ;
    RunSearchSimilarArticlesResponseBody& operator=(const RunSearchSimilarArticlesResponseBody &) = default ;
    RunSearchSimilarArticlesResponseBody& operator=(RunSearchSimilarArticlesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Usage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Usage& obj) { 
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
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
        virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
        inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
        inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
        inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


      protected:
        shared_ptr<int64_t> inputTokens_ {};
        shared_ptr<int64_t> outputTokens_ {};
        shared_ptr<int64_t> totalTokens_ {};
      };

      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Articles, articles_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Articles, articles_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Output() = default ;
        Output(const Output &) = default ;
        Output(Output &&) = default ;
        Output(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Output() = default ;
        Output& operator=(const Output &) = default ;
        Output& operator=(Output &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Articles : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Articles& obj) { 
            DARABONBA_PTR_TO_JSON(DocId, docId_);
            DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
            DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
            DARABONBA_PTR_TO_JSON(SearchSourceName, searchSourceName_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Articles& obj) { 
            DARABONBA_PTR_FROM_JSON(DocId, docId_);
            DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
            DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
            DARABONBA_PTR_FROM_JSON(SearchSourceName, searchSourceName_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Articles() = default ;
          Articles(const Articles &) = default ;
          Articles(Articles &&) = default ;
          Articles(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Articles() = default ;
          Articles& operator=(const Articles &) = default ;
          Articles& operator=(Articles &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->pubTime_ == nullptr && this->searchSourceName_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
          // docId Field Functions 
          bool hasDocId() const { return this->docId_ != nullptr;};
          void deleteDocId() { this->docId_ = nullptr;};
          inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
          inline Articles& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


          // docUuid Field Functions 
          bool hasDocUuid() const { return this->docUuid_ != nullptr;};
          void deleteDocUuid() { this->docUuid_ = nullptr;};
          inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
          inline Articles& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


          // pubTime Field Functions 
          bool hasPubTime() const { return this->pubTime_ != nullptr;};
          void deletePubTime() { this->pubTime_ = nullptr;};
          inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
          inline Articles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


          // searchSourceName Field Functions 
          bool hasSearchSourceName() const { return this->searchSourceName_ != nullptr;};
          void deleteSearchSourceName() { this->searchSourceName_ = nullptr;};
          inline string getSearchSourceName() const { DARABONBA_PTR_GET_DEFAULT(searchSourceName_, "") };
          inline Articles& setSearchSourceName(string searchSourceName) { DARABONBA_PTR_SET_VALUE(searchSourceName_, searchSourceName) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Articles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Articles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Articles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Articles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> docId_ {};
          shared_ptr<string> docUuid_ {};
          shared_ptr<string> pubTime_ {};
          shared_ptr<string> searchSourceName_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->articles_ == nullptr
        && this->text_ == nullptr; };
        // articles Field Functions 
        bool hasArticles() const { return this->articles_ != nullptr;};
        void deleteArticles() { this->articles_ = nullptr;};
        inline const vector<Output::Articles> & getArticles() const { DARABONBA_PTR_GET_CONST(articles_, vector<Output::Articles>) };
        inline vector<Output::Articles> getArticles() { DARABONBA_PTR_GET(articles_, vector<Output::Articles>) };
        inline Output& setArticles(const vector<Output::Articles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
        inline Output& setArticles(vector<Output::Articles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Output& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<vector<Output::Articles>> articles_ {};
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->output_ == nullptr
        && this->usage_ == nullptr; };
      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Payload::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Payload::Output) };
      inline Payload::Output getOutput() { DARABONBA_PTR_GET(output_, Payload::Output) };
      inline Payload& setOutput(const Payload::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Payload& setOutput(Payload::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline const Payload::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Payload::Usage) };
      inline Payload::Usage getUsage() { DARABONBA_PTR_GET(usage_, Payload::Usage) };
      inline Payload& setUsage(const Payload::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
      inline Payload& setUsage(Payload::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


    protected:
      shared_ptr<Payload::Output> output_ {};
      shared_ptr<Payload::Usage> usage_ {};
    };

    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Header() = default ;
      Header(const Header &) = default ;
      Header(Header &&) = default ;
      Header(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Header() = default ;
      Header& operator=(const Header &) = default ;
      Header& operator=(Header &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Header& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Header& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // event Field Functions 
      bool hasEvent() const { return this->event_ != nullptr;};
      void deleteEvent() { this->event_ = nullptr;};
      inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
      inline Header& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Header& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Header& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<string> event_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunSearchSimilarArticlesResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunSearchSimilarArticlesResponseBody::Header) };
    inline RunSearchSimilarArticlesResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunSearchSimilarArticlesResponseBody::Header) };
    inline RunSearchSimilarArticlesResponseBody& setHeader(const RunSearchSimilarArticlesResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunSearchSimilarArticlesResponseBody& setHeader(RunSearchSimilarArticlesResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunSearchSimilarArticlesResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunSearchSimilarArticlesResponseBody::Payload) };
    inline RunSearchSimilarArticlesResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunSearchSimilarArticlesResponseBody::Payload) };
    inline RunSearchSimilarArticlesResponseBody& setPayload(const RunSearchSimilarArticlesResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunSearchSimilarArticlesResponseBody& setPayload(RunSearchSimilarArticlesResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunSearchSimilarArticlesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunSearchSimilarArticlesResponseBody::Header> header_ {};
    shared_ptr<RunSearchSimilarArticlesResponseBody::Payload> payload_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
